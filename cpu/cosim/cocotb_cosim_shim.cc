// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Minimal DPI shim that lets the cocotb_ibex_cosim.sv top instantiate a
// SpikeCosim and expose it to ibex_simple_system_cosim_checker. Unlike
// ml4dv's simple_system_cosim.cc, we don't rely on the SimpleSystem C++
// scaffolding; the cocotb test instead backdoor-writes imem contents at
// init time via `cosim_backdoor_write_word`.
//
// Boot address 0x100080 matches cocotb_ibex.sv's `boot_addr_i`.
// Memory layout: a single 1 MiB window at 0x100000 covers imem and dmem.
// Spike's dside notify is handled by the cosim_checker; stores update
// Spike mem through notify_dside_access.

#include <memory>
#include <stdint.h>
#include <string.h>
#include <svdpi.h>

#include "cosim.h"
#include "spike_cosim.h"

namespace {
std::unique_ptr<SpikeCosim> g_cosim;
}

extern "C" {

void *get_spike_cosim() {
  return static_cast<Cosim *>(g_cosim.get());
}

void create_cosim(svBit secure_ibex, svBit icache_en,
                  const svBitVecVal *pmp_num_regions,
                  const svBitVecVal *pmp_granularity,
                  const svBitVecVal *mhpm_counter_num,
                  const svBitVecVal *dm_start_addr,
                  const svBitVecVal *dm_end_addr) {
  // Match RTL harness:
  //   boot_addr_i = 0x00100000 (cocotb_ibex.sv) → first fetch at boot+0x80 = 0x100080.
  //   mtvec reset = {boot_addr[31:8], 0x01} = 0x00100001 (Ibex spec).
  // Program loaded at 0x100080 by test; backdoored into Spike via
  // cosim_load_program_from_file from the checker's initial block.
  g_cosim = std::make_unique<SpikeCosim>(
      "rv32im_zicsr_zifencei", 0x100080, 0x100001, "cocotb_cosim.log",
      (bool)secure_ibex, (bool)icache_en,
      pmp_num_regions[0], pmp_granularity[0], mhpm_counter_num[0],
      dm_start_addr[0], dm_end_addr[0]);
  // Program lives at 0x100080. For L4 CRT (17k words, many stores/loads with
  // register-computed base addresses) register values accumulate arbitrary
  // bit patterns across R-type operations. To match the permissive DmemAgent
  // (accepts any address), Spike needs broad coverage. We map 2 GB total
  // in two chunks: 1 GB at the low end (covers positive small/medium values
  // and PC region) and 1 GB at the high end (covers negative-as-unsigned
  // values from SUB x0-x and near-4GB wrap-around). The middle 2 GB is
  // typically unreached by arithmetic on small seed values and rarely hit
  // in practice; if a stray access lands there, Spike will still trap and
  // we'll know to extend further.
  g_cosim->add_memory(0x00000000, 0x40000000);   // 1 GiB at 0
  g_cosim->add_memory(0xC0000000, 0x40000000);   // 1 GiB at 0xC000_0000 (reaches 0xFFFFFFFF)
}

// Cocotb-side convenience: write one 32-bit word to Spike mem. The RTL side
// loads the program via MemAgent; this mirrors it into Spike.
void cosim_backdoor_write_word(const svBitVecVal *addr,
                               const svBitVecVal *word) {
  if (!g_cosim) return;
  uint32_t a = (uint32_t)addr[0];
  uint32_t w = (uint32_t)word[0];
  uint8_t bytes[4] = {
      (uint8_t)(w & 0xff),
      (uint8_t)((w >> 8) & 0xff),
      (uint8_t)((w >> 16) & 0xff),
      (uint8_t)((w >> 24) & 0xff),
  };
  g_cosim->backdoor_write_mem(a, 4, bytes);
}

// Load program contents into Spike memory from a hex text file. Each line is
// "<addr_hex> <word_hex>" (8 hex chars each). Called from SV initial after
// the cocotb test has written the file.
int cosim_load_program_from_file(const char *path) {
  if (!g_cosim || !path) return 0;
  FILE *f = fopen(path, "r");
  if (!f) {
    fprintf(stderr, "cosim: cannot open %s\n", path);
    return 0;
  }
  uint32_t addr, word;
  int n = 0;
  while (fscanf(f, "%x %x", &addr, &word) == 2) {
    uint8_t bytes[4] = {
        (uint8_t)(word & 0xff),
        (uint8_t)((word >> 8) & 0xff),
        (uint8_t)((word >> 16) & 0xff),
        (uint8_t)((word >> 24) & 0xff),
    };
    g_cosim->backdoor_write_mem(addr, 4, bytes);
    n++;
  }
  fclose(f);
  fprintf(stderr, "cosim: loaded %d words from %s\n", n, path);
  return n;
}

}  // extern "C"

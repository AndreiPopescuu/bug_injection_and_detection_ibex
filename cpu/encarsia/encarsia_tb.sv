// Encarsia Ibex testbench wrapper.
//
// Instantiates ONE Encarsia Ibex variant (golden or buggy) via `DUT_MODULE`
// macro set at Verilator build time. Provides memory bus drivers (filled by
// cocotb) plus a minimal external register file (cellift Ibex exposes the RF
// interface externally, unlike vanilla lowRISC Ibex).

`ifndef DUT_MODULE
  `define DUT_MODULE ibex_golden_driver
`endif

module encarsia_tb #(
  parameter int unsigned RegFileDataWidth = 32  // matches cellift default
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  // Instruction memory interface
  output logic        instr_req_o,
  input  logic        instr_gnt_i,
  input  logic        instr_rvalid_i,
  output logic [31:0] instr_addr_o,
  input  logic [31:0] instr_rdata_i,

  // Data memory interface
  output logic        data_req_o,
  input  logic        data_gnt_i,
  input  logic        data_rvalid_i,
  output logic        data_we_o,
  output logic [3:0]  data_be_o,
  output logic [31:0] data_addr_o,
  output logic [31:0] data_wdata_o,
  input  logic [31:0] data_rdata_i,

  // Instrumentation / observation
  output logic        core_busy_o
);

  // ---------- RF wiring (external in cellift) ----------
  logic [4:0]                        rf_raddr_a, rf_raddr_b, rf_waddr_wb;
  logic                              rf_we_wb;
  logic [RegFileDataWidth-1:0]       rf_wdata_wb_ecc;
  logic [RegFileDataWidth-1:0]       rf_rdata_a_ecc, rf_rdata_b_ecc;
  logic [31:0]                       crash_dump;
  logic                              alert_minor, alert_major;
  logic                              dummy_instr_id;
  logic                              irq_pending;

  // Icache interface (tied off — ICache=0). Port widths from synthesized
  // netlist: ic_tag_rdata_i is a single 44-bit wire, ic_data_rdata_i is 128-bit.
  logic [1:0]                        ic_tag_req, ic_data_req;
  logic                              ic_tag_write, ic_data_write;
  logic [7:0]                        ic_tag_addr, ic_data_addr;
  logic [21:0]                       ic_tag_wdata;
  logic [63:0]                       ic_data_wdata;
  logic [43:0]                       ic_tag_rdata;
  logic [127:0]                      ic_data_rdata;

  // ---------- DUT ----------
  `DUT_MODULE u_dut (
    .clk_i          (clk_i),
    .rst_ni         (rst_ni),

    .hart_id_i      (32'h0),
    .boot_addr_i    (32'h00100080),

    .instr_req_o    (instr_req_o),
    .instr_gnt_i    (instr_gnt_i),
    .instr_rvalid_i (instr_rvalid_i),
    .instr_addr_o   (instr_addr_o),
    .instr_rdata_i  (instr_rdata_i),
    .instr_err_i    (1'b0),

    .data_req_o     (data_req_o),
    .data_gnt_i     (data_gnt_i),
    .data_rvalid_i  (data_rvalid_i),
    .data_we_o      (data_we_o),
    .data_be_o      (data_be_o),
    .data_addr_o    (data_addr_o),
    .data_wdata_o   (data_wdata_o),
    .data_rdata_i   (data_rdata_i),
    .data_err_i     (1'b0),

    .dummy_instr_id_o (dummy_instr_id),

    .rf_raddr_a_o   (rf_raddr_a),
    .rf_raddr_b_o   (rf_raddr_b),
    .rf_waddr_wb_o  (rf_waddr_wb),
    .rf_we_wb_o     (rf_we_wb),
    .rf_wdata_wb_ecc_o (rf_wdata_wb_ecc),
    .rf_rdata_a_ecc_i  (rf_rdata_a_ecc),
    .rf_rdata_b_ecc_i  (rf_rdata_b_ecc),

    .ic_tag_req_o   (ic_tag_req),
    .ic_tag_write_o (ic_tag_write),
    .ic_tag_addr_o  (ic_tag_addr),
    .ic_tag_wdata_o (ic_tag_wdata),
    .ic_tag_rdata_i (ic_tag_rdata),
    .ic_data_req_o  (ic_data_req),
    .ic_data_write_o(ic_data_write),
    .ic_data_addr_o (ic_data_addr),
    .ic_data_wdata_o(ic_data_wdata),
    .ic_data_rdata_i(ic_data_rdata),

    .irq_software_i (1'b0),
    .irq_timer_i    (1'b0),
    .irq_external_i (1'b0),
    .irq_fast_i     (15'b0),
    .irq_nm_i       (1'b0),
    .irq_pending_o  (irq_pending),

    .debug_req_i    (1'b0),

    .crash_dump_o   (crash_dump),

    .alert_minor_o  (alert_minor),
    .alert_major_o  (alert_major),

    .core_busy_o    (core_busy_o)
  );

  // ---------- Simple external register file ----------
  // Writes are clocked; reads are combinational (matches ibex_register_file_ff
  // default behavior from the user's point of view). ECC width == data width
  // when RegFileECC=0 (default).
  logic [31:0] rf_mem [0:31];
  integer i;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      for (i = 0; i < 32; i = i + 1) rf_mem[i] <= 32'h0;
    end else if (rf_we_wb && rf_waddr_wb != 5'd0) begin
      rf_mem[rf_waddr_wb] <= rf_wdata_wb_ecc;
    end
  end

  assign rf_rdata_a_ecc = (rf_raddr_a == 5'd0) ? 32'h0 : rf_mem[rf_raddr_a];
  assign rf_rdata_b_ecc = (rf_raddr_b == 5'd0) ? 32'h0 : rf_mem[rf_raddr_b];

  // ---------- Icache tie-off ----------
  assign ic_tag_rdata  = 44'h0;
  assign ic_data_rdata = 128'h0;

endmodule

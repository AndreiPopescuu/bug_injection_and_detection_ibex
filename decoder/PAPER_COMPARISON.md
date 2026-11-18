# LLM-CRT vs. LLM4DV paper: Ibex decoder

**Întrebarea de cercetare:** poate un LLM să înlocuiască expertul care scrie CRT
(constrained-random test generation) dacă primește doar ce primește și expertul la
începutul task-ului?

Comparăm cu Tabelul III din *LLM4DV: Using Large Language Models for Hardware Test
Stimuli Generation* (Zhang et al.), designul „Ibex Instruction Decoder”, pe aceeași
metrică: planul funcțional ml4dv cu **2107 bins**.

Setup-ul e identic cu cel din ml4dv:
- **Metrica:** `crt/ml4dv_coverage.py` este portul fidel al `CoverageMonitor` /
  `CoverageDatabase` / `_get_coverage_plan_ID` din repo-ul ml4dv.
- **RTL-ul:** același `ibex_decoder.sv` (snapshot ml4dv), cu RV32B=None, RV32M=Fast și
  BranchTargetALU=1.
- **Intrările laterale:** `PAPER_MODE=1` le leagă exact ca `ibex_decoder_wrap.sv` din ml4dv.
- **Toate rulările:** 3 seed-uri × 100k stimuli; la LLM se raportează reuniunea seed-urilor.

Reproducere:
- baseline-uri: `bash scripts/reproduce_paper_comparison.sh`;
- rulările LLM: `bash scripts/measure_llm_run.sh <run> <pass>`;
- tabelul complet: `python3 scripts/summarize_llm_runs.py --md`.

## 1. Validarea setup-ului: reproducem baseline-ul din paper

| Rulare | Bins | % |
|---|---|---|
| Paper, „CRT” | 1154 | 54.77% |
| Noi: random pur, 100k cuvinte (media pe 3 seed-uri) | 878 | 41.67% |
| Noi: random pur, **1M** cuvinte (1 seed) | **1146** | **54.39%** |

Paper-ul spune „100,000 combinations”, dar `ibex_decoder/generate_stimulus.py` din ml4dv
rulează baseline-ul random cu `CYCLES = 1000000`. Cu 1M de cuvinte ajungem la 8 bins de
cifra din paper. Concluzii:
- harness-ul nostru e echivalent cu al lor;
- „CRT”-ul din paper înseamnă de fapt **1M de cuvinte complet random**, nu CRT în sensul
  clasic.

## 2. Plafonul real: 2042/2107 (96.92%)

Cele 65 de bins SUBI (1 bin de operație + 64 cross) sunt inaccesibile:
- `ALU_SUB` e setat doar la `ibex_decoder.sv:994`, pe `OPCODE_OP`, cu operand B din
  registru;
- SUBI nu există în RISC-V.

Toate cele 7 rulări LLM independente (A×3, B×3, C×1) au ajuns la aceeași concluzie, cele
din condiția A fără să vadă RTL-ul, doar din ISA și din feedback. Toate rulările se opresc
exact la 2042.

Rândul „Formal = 2106 (99.95%)” din paper e deci suspect.

## 3. Ce primește LLM-ul: condițiile experimentului

Principiul: LLM-ul primește **ce primește expertul la începutul task-ului**, niciodată
**produsul muncii expertului** (riscv-dv, CRT de mână, soluții).

| Condiție | RTL | Descrierea bins (ca în paper) | Encoder ISA (`isa.py`) | Feedback după fiecare pass | Reguli de eșantionare (codul monitorului) |
|---|---|---|---|---|---|
| **A: echivalent paper** | ✘ | ✔ | ✔ | bins neatinse | ✘ |
| **B: expert** | ✔ | ✔ | ✔ | bins neatinse + puncte de cod neacoperite | ✘ |
| C: expert + testbench (C_run1) | ✔ | ✔ | ✔ | – (a rulat un singur pass) | ✔ |

LLM-ul din paper primește descrierea bins-urilor plus lista bins-urilor neatinse după fiecare
mesaj, fără RTL și fără cod de testbench (`code_summary_type=0` în ml4dv), deci condiția A
e cea direct comparabilă.

**Diferența de paradigmă:** în paper LLM-ul **emite stimuli** (cuvinte hex) într-o buclă de
~700 de mesaje. La noi LLM-ul **scrie generatorul CRT** (funcții `build_*_stream(rng)`),
exact ce face un expert. Generatorul rulează apoi gratuit, cu orice seed.

**Protocolul**, fixat înainte de rulări:
- **Rulări independente:** câte 3 per condiție, fiecare cu agenți proaspeți. Nicio rulare
  nu vede fișierele alteia.
- **Pass k:** un agent izolat de sinteză, apoi un agent izolat de review adversarial, apoi
  merge în `crt/llm_runs/<run>_p<k>.py`.
- **Feedback:** după fiecare pass se măsoară coverage-ul (3 × 100k stimuli), iar
  rezultatul intră în pass-ul următor.
- **Oprire:** după maximum 3 pass-uri sau mai devreme, când un pass nu mai aduce niciun bin.

Prompturile sunt template-uri fixe (`llm_pipeline.py`). Fiecare prompt, draft și review e
arhivat verbatim în `llm_passes/<run>/`.

**Modelul:** toți cei 26 de subagenți (sinteză și review) au rulat pe **Claude Opus 5.5**
(`claude-opus-5-5`), ca agenți `general-purpose` din Claude Code, fiecare cu context proaspăt.
Am verificat modelul în transcripturile fiecăruia. Cel mai bun rezultat din paper folosește
Claude 3.5 Sonnet, deci o parte din diferență poate veni din model, nu din metodă.

## 4. Rezultate

### Pe scurt

| Condiție | Rulări la plafon (2042) | Pass-uri până la plafon | Sesiuni de agent / rulare | Tokeni / rulare (aprox.) |
|---|---|---|---|---|
| **A: echivalent paper** | **3/3** | 2 (pass 3: toți `NEW_BUILDERS = []`) | 5 | ~260–280k |
| **B: expert** | **3/3** | **1** (pass 2: toți `NEW_BUILDERS = []`) | 3 | ~280–290k |
| C: expert + testbench | 1/1 | 1 | 2 | ~200k |
| **Paper: Claude 3.5 Sonnet** (cel mai bun) | 2006 bins (95.21%) | – | **651 mesaje** (medie 683.7) | n/a |
| Paper: „CRT” (1M random) | 1154 (54.77%) | – | 0 | – |

### Detaliat: bins (media pe 3 seed-uri) după N stimuli + code coverage

| Rulare | Max bins | @100 | @300 | @1000 | @3000 | @10000 | branch | line | toggle |
|---|---|---|---|---|---|---|---|---|---|
| random (100k) | 890 | 15 | 24 | 71 | 164 | 338 | 73/164 | 144/197 | 389/442 |
| random (1M) | 1146 | 10 | 22 | 67 | 144 | 323 | 80/164 | 153/197 | 390/442 |
| CRT de mână (scris de mine, un LLM) | 2042 | 123 | 280 | 611 | 1193 | 1892 | 80/164 | 158/197 | 394/442 |
| C_run1 p1 | 2042 | 243 | 645 | 1394 | 2042 | 2042 | 80/164 | 158/197 | 394/442 |
| A_run1 p1 | 2041 | 359 | 974 | 1673 | 2041 | 2041 | 13/164 | 44/197 | 346/442 |
| A_run1 p2 | **2042** | 223 | 584 | 1171 | 1923 | 2042 | 77/164 | 155/197 | 394/442 |
| A_run2 p1 | 2041 | 357 | 906 | 1469 | 2041 | 2041 | 13/164 | 44/197 | 346/442 |
| A_run2 p2 | **2042** | 357 | 906 | 1356 | 1847 | 2042 | 68/164 | 114/197 | 368/442 |
| A_run3 p1 | 2041 | 359 | 974 | 1808 | 1976 | 2041 | 13/164 | 44/197 | 346/442 |
| A_run3 p2 | **2042** | 359 | 974 | 1447 | 1977 | 2042 | 70/164 | 117/197 | 368/442 |
| B_run1 p1 | **2042** | 275 | 715 | 1227 | 1719 | 2042 | 80/164 | 158/197 | 394/442 |
| B_run2 p1 | **2042** | 288 | 753 | 1328 | 2042 | 2042 | 80/164 | 158/197 | 394/442 |
| B_run3 p1 | **2042** | 223 | 550 | 1490 | 1953 | 2042 | 80/164 | 158/197 | 394/442 |

## 5. Interpretare

1. **În condițiile paper-ului (A), LLM-CRT bate cel mai bun rezultat din paper.**
   - Toate cele 3 rulări ajung la 2042, plafonul real, față de 2006 pentru Claude 3.5 Sonnet.
   - Costul e de 4 sesiuni de agent productive (2 × sinteză + 2 × review), față de ~650 de mesaje.
   - Rezultatul e reproductibil: 3/3 rulări independente.

2. **Feedback-ul de coverage contează, la fel ca în paper.**
   - În Pass 1, toate rulările A au ratat exact un bin, `illegal_instruction`. Descrierea
     textuală a planului nu-l menționează: lista are 26 de operații, iar al 27-lea bin există
     doar în codul monitorului.
   - Un singur pass cu feedback l-a închis în toate cele 3 rulări.

3. **Cu RTL (B), LLM-ul face din primul pass ce face un expert.**
   - Ajunge la plafonul planului. Ajunge și la plafonul de code coverage al configurației
     (80/164 branch, 158/197 line, 394/442 toggle), identic cu CRT-ul de mână și cu 1M de
     cuvinte random.
   - Fără RTL (A, Pass 1), generatorul acoperă doar planul: 13/164 branch. Instrucțiunile din
     afara planului apar doar în măsura în care le cere feedback-ul.
   - În Pass 2, cei 3 agenți B au clasificat independent toate cele 171 de puncte de cod
     neacoperite ca inaccesibile, cu citări de linii RTL consistente între ei:
     - parametrii RV32B=None, BranchTargetALU=1 și RV32E=0;
     - intrările legate fix (`instr_first_cycle_i`, `illegal_c_insn_i`);
     - default-uri de `case` care nu pot fi selectate;
     - biți de imediat legați la 0.

     Exact asta e treaba unui expert la coverage closure.

4. **Eficiența per stimul**: toate generatoarele LLM ating plafonul în ≤10k stimuli; CRT-ul
   de mână are nevoie de ~30k, iar random-ul nu ajunge acolo nici la 1M.
   - Există un compromis: stream-urile adăugate în Pass 2 (cuvinte ilegale, coverage de cod)
     au diluat începutul curbei. De exemplu, A_run1 avea 1673 bins @1000 după Pass 1 și
     1171 după Pass 2.
   - Paper-ul nu raportează câți stimuli produce un mesaj, deci nu putem compara stimul cu
     stimul cu LLM-urile din paper.

## 6. Limitări și amenințări la validitate

- **Planul ml4dv e ușor.** Toate metodele constrânse îl saturează. Diferențierea reală e la
  cost și eficiență, nu la procentul final. Pentru o concluzie mai puternică e nevoie de o
  metrică mai grea (de ex. code coverage cu RV32B=Full și intrări laterale randomizate).
- **Baseline-ul de „expert” lipsește.** CRT-ul „de mână” l-am scris eu, adică tot un LLM.
  Comparația corectă e cu riscv-dv (lowRISC), de exemplu prin `constrained_random_l11.py`
  din L11.
- **Contaminarea de context**, verificată în transcripturi: fiecare sub-agent primește
  automat `git status`, ultimele 5 mesaje de commit (despre L11) și indexul de memorie de la
  începutul sesiunii.
  - Nicio informație despre decoder, ISA sau verificarea lowRISC. Nota mea despre SUBI și
    plafonul 2042 nu era în acel index.
  - Un agent (A_run1, Pass 3) a citat „lecția din Pass 6” din L11 ca argument metodologic.
  - Auditul fișierelor citite de fiecare agent arată că niciunul n-a deschis căi interzise.
- **Model diferit de cel din paper:** Opus 5.5 la noi, Claude 3.5 Sonnet la ei. O
  comparație strictă a metodei ar cere același pipeline rulat cu Claude 3.5 Sonnet.
- **Același model** (Opus 5.5) a scris și a verificat codul; review-ul independent reduce
  erorile, dar nu biasul de model. Review-urile au prins totuși bug-uri reale: `NameError`
  pe `LEGAL_OPCODES`, un cuvânt „unary default” greșit, funct7 care cădea pe calea ternară.
- **Condiția A a primit două informații în plus față de paper:**
  1. **Numărul total de bins** („2107 bins”). Paper-ul nu-l dă. Agenții l-au folosit ca să
     deducă existența unui bin nedescris (26 + 96 + 1984 = 2106).
  2. **Feedback-ul nostru numește bin-ul `illegal_instruction`** când lipsește. Feedback-ul
     ml4dv către LLM nu-l include niciodată: dicționarul din
     `_load_coverage_difference_prompts_dict` acoperă doar operațiile, porturile și
     cross-urile.

  Ambele valorează cel mult 1 bin. Fără ele, A s-ar fi oprit probabil la 2041. O variantă
  strict echivalentă cu paper-ul (A′) ar scoate totalul din prompt și ar exclude
  `illegal_instruction` din feedback.
- **`isa.py` conține un tabel de instrucțiuni.** E echivalentul specificației ISA, pe care
  paper-ul o dă explicit pentru designul CPU, dar e totuși un ajutor.
- **C_run1 (cu regulile de eșantionare) e o singură rulare,** păstrată doar ca referință.

## 7. Pași următori

1. Baseline de expert real: generatorul riscv-dv portat (`constrained_random_l11.py`) rulat
   pe decoder.
2. Metrică mai grea: aceleași condiții A/B pe `RV32B=3` (Full), cu intrările laterale
   randomizate, unde plafonul de code coverage nu mai e trivial.
3. Alte module (`ibex_compressed_decoder`, `ibex_alu`), cu același pipeline.

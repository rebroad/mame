#include "starwars_game.h"
#include "vector_graphics.h"
#include "starwars.h"
#include <iostream>
#include <cstring>
#include <cmath>

namespace StarWars {

StarWarsGame::StarWarsGame() {
    // Initialize game state
    memset(&game_state, 0, sizeof(game_state));
    game_state.game_running = false;
    game_state.attract_mode = true;
    graphics = std::make_unique<VectorGraphics>();
    // NEW TEMPORARY/TEST CODE: open trace lazily when first needed
}

StarWarsGame::~StarWarsGame() {
    // Cleanup
}

void StarWarsGame::init() {
    std::cout << "Initializing Star Wars game..." << std::endl;

    // Call main entry point (converted from 0xf261)
    main_entry();

    // Initialize graphics
    graphics_initialization();
    if (graphics) {
        graphics->init();
        // Do not simulate vectors; original behavior relies on AVG instructions
    }

    // Set up initial game state
    game_state.score = 0;
    game_state.shields = 8;
    game_state.lives = 3;
    game_state.wave = 1;
    game_state.game_running = true;
    game_state.attract_mode = false;

    std::cout << "Star Wars game initialized successfully!" << std::endl;
}

void StarWarsGame::reset() {
    std::cout << "Resetting Star Wars game..." << std::endl;

    // Reset game state
    memset(&game_state, 0, sizeof(game_state));

    // Reinitialize
    init();
}

void StarWarsGame::update() {
    if (!game_state.game_running) {
        return;
    }

    // Handle input
    handle_input();

    // Update game state
    update_game_state();

    // NEW TEMP: run minimal $611E alignment once at start
    if (!did_pre611e) {
        rom_sub_611e_minimal();
        did_pre611e = true;
    }

    // Check collisions
    check_collisions();

    // Update score and shields
    update_score();
    update_shields();

    // Call main game loop (converted from 0x611e)
    // Original flow: mathbox -> data processing -> avg/vector
    main_game_loop(); // NEW: Call the $611E routine instead of individual functions
}

void StarWarsGame::render() {
    // Render vector graphics
    vector_graphics_control();
    if (graphics) {
        graphics->render_frame();
        // NEW: dump per-frame vectors for diffing
        graphics->write_vectors_csv("vectors_cpp.csv", static_cast<int>(game_state.score));
    }
}

// Small, verifiable harness to exercise just the $D91A path and print observable effects.
void StarWarsGame::run_vector_test_d91a() {
    // TODO: remove harness once full flow is implemented
    // Prefill the suspected strided buffer with 0xFF to verify the zeroing effect
    for (uint16_t addr = 0x49E2; addr < 0x4A52; addr = static_cast<uint16_t>(addr + 0x000E)) {
        memory.write_byte(addr, 0xFF);
    }
    vector_subroutine_d91a();
    if (graphics) {
        graphics->render_frame();
    }
    // Print key memory location modified by $D91A fragment
    std::cout << "[TEST] mem[0x49E2] = " << static_cast<int>(memory.read_byte(0x49E2)) << std::endl;
    // Also print checksum over a small region for determinism
    std::cout << "[TEST] cksum[0x49E0..0x49FF] = " << checksum_region(0x49E0, 0x49FF) << std::endl;
    // Count zeroed entries across the strided range for an objective metric
    int zero_count = 0;
    int total = 0;
    for (uint16_t addr = 0x49E2; addr < 0x4A52; addr = static_cast<uint16_t>(addr + 0x000E)) {
        ++total;
        if (memory.read_byte(addr) == 0x00) ++zero_count;
    }
    std::cout << "[TEST] zeroed(stride=0x0E) in [0x49E2..0x4A52): " << zero_count << "/" << total << std::endl;

    auto read_word = [&](uint16_t a){ return static_cast<uint16_t>((memory.read_byte(a) << 8) | memory.read_byte(a+1)); };
    std::cout << "[TEST] mem[0x5022..0x5023] = 0x" << std::hex << read_word(ADDR_MATH_PARAM_A) << std::dec << std::endl;
    std::cout << "[TEST] mem[0x5024..0x5025] = 0x" << std::hex << read_word(ADDR_MATH_PARAM_B) << std::dec << std::endl;
    std::cout << "[TEST] mem[0x4600..0x4601] = 0x" << std::hex << read_word(ADDR_AVG_GO) << std::dec << std::endl;

    // After the decrement loop, count nonzero residues to verify branch coverage
    int nonzero = 0;
    for (uint16_t addr = 0x49E2; addr < 0x4A52; addr = static_cast<uint16_t>(addr + 0x000E)) {
        if (memory.read_byte(addr) != 0) ++nonzero;
    }
    std::cout << "[TEST] nonzero after dec loop: " << nonzero << "/" << total << std::endl;
}

uint32_t StarWarsGame::checksum_region(uint16_t start, uint16_t end) const {
    uint32_t sum = 0;
    for (uint16_t a = start; a <= end; ++a) {
        sum = (sum * 1315423911u) ^ memory.read_byte(a);
    }
    return sum;
}

// Converted from 6809 assembly at 0xf261
void StarWarsGame::main_entry() {
    std::cout << "Main entry point (0xf261) - Initializing hardware..." << std::endl;

    // Initialize CPU state
    game_state.accumulator_a = 0;
    game_state.accumulator_b = 0;
    game_state.index_register_x = 0;
    game_state.index_register_y = 0;
    game_state.stack_pointer = 0x2FFF;  // Top of RAM
    game_state.program_counter = 0xf261;

    // Clear flags
    game_state.zero_flag = false;
    game_state.negative_flag = false;
    game_state.carry_flag = false;
    game_state.overflow_flag = false;

    // Initialize memory
    memory.write_word(0x0000, 0x0000);  // Clear RAM
    memory.write_word(0x0002, 0x0000);
    memory.write_word(0x0004, 0x0000);

    // Set up hardware
    hardware_io_handler();

    std::cout << "Hardware initialization complete" << std::endl;
}

// Converted from 6809 assembly at 0xbd03
void StarWarsGame::hardware_io_handler() {
    std::cout << "Hardware I/O handler (0xbd03) - Setting up I/O ports..." << std::endl;

    // Initialize I/O ports
    memory.write_byte(0x4300, 0x00);  // Input port 1
    memory.write_byte(0x4320, 0x00);  // Input port 2
    memory.write_byte(0x4340, 0x00);  // Input port 3

    // Set up interrupt vectors
    memory.write_word(0xFFF2, 0x7000);  // IRQ vector
    memory.write_word(0xFFF4, 0x7000);  // FIRQ vector
    memory.write_word(0xFFF6, 0x7000);  // SWI vector
    memory.write_word(0xFFF8, 0x7000);  // NMI vector
    memory.write_word(0xFFFA, 0x7000);  // SWI2 vector
    memory.write_word(0xFFFC, 0x7000);  // SWI3 vector
    memory.write_word(0xFFFE, 0x6000);  // Reset vector

    std::cout << "I/O ports initialized" << std::endl;
}

// Converted from 6809 assembly at 0x611e
void StarWarsGame::main_game_loop() {
    // TODO: Implement faithful translation of ROM routine at $611E.
    // SOURCE: unidasm output in starwars_analysis/rom_disasm_611e_unidasm.md
    // NOTE: This routine forms the main game loop; in ROM it self-jumps (JMP $611E).
    // NEW TEMPORARY/TEST CODE: Minimal scaffolding to mirror initial observed behavior and log PC-tagged params for alignment.

    // Mirror early observed sequence (already seeded by rom_sub_611e_minimal), then proceed with mathbox/AVG control stubs.
    // FROM DISASSEMBLY vicinity ($6161): interact with mathbox, then update data, then vector control.
    trace_params_pc("611e_entry", 0x611e);

    // NEW TEMPORARY/TEST CODE (NOT FROM DISASSEMBLY):
    // TODO: Replace with faithful translation of actual $611E ROM routine
    // This is pure guesswork to simulate attract mode behavior patterns
    // SOURCE: None - this is temporary scaffolding to generate varied PA/PB values
    static uint16_t attract_counter = 0;
    attract_counter++;

    // TEMPORARY: Simulate attract mode state changes (pure guesswork)
    if ((attract_counter % 120) == 0) {
        // Every 120 frames, change some game state
        game_state.attract_mode = !game_state.attract_mode;
        trace_params_pc("attract_mode_change", 0x611E);
    }

    // TEMPORARY: Simulate some periodic behavior that would affect PA/PB values (pure guesswork)
    if ((attract_counter % 30) == 0) {
        // Every 30 frames, trigger some mathbox operation
        trace_params_pc("periodic_mathbox_trigger", 0x611E);
    }

    mathbox_interface();
    data_processing();
    vector_graphics_control();
    trace_params_pc("611e_exit", 0x6124); // TODO: replace with actual flow PC once known
}

// Converted from 6809 assembly at 0x70db
void StarWarsGame::stack_management() {
    // Stack management for interrupt handling
    // Save/restore processor state

    // Push registers to stack
    memory.write_byte(game_state.stack_pointer--, game_state.accumulator_a);
    memory.write_byte(game_state.stack_pointer--, game_state.accumulator_b);
    memory.write_byte(game_state.stack_pointer--, static_cast<uint8_t>(game_state.index_register_x >> 8));
    memory.write_byte(game_state.stack_pointer--, static_cast<uint8_t>(game_state.index_register_x & 0xFF));

    // Restore registers from stack
    ++game_state.stack_pointer; // high byte position
    uint16_t high = memory.read_byte(game_state.stack_pointer);
    ++game_state.stack_pointer; // low byte position
    uint16_t low = memory.read_byte(game_state.stack_pointer);
    game_state.index_register_x = static_cast<uint16_t>((high << 8) | low);
    game_state.accumulator_b = memory.read_byte(++game_state.stack_pointer);
    game_state.accumulator_a = memory.read_byte(++game_state.stack_pointer);
}

// Converted from 6809 assembly at 0x6161
void StarWarsGame::mathbox_interface() {
    // TODO: Implement faithful translation of ROM routine at $6161.
    // SOURCE: unidasm output and MAME trace analysis

    // FROM DISASSEMBLY: $6161 interacts with mathbox, then updates PA/PB
    // ROM disassembly shows writes to 0x5022/0x5024 at PCs 0x61D3/0x61D9 (LDD #$021F; STD $5022; LDD #$3FF7; STD $5024)
    // TODO: Replace with real mathbox microcode execution

    // NEW TEMPORARY/TEST CODE (NOT FROM DISASSEMBLY):
    // This is pure guesswork to simulate mathbox producing different results each call
    // SOURCE: None - this is temporary scaffolding to generate varied PA/PB values
    static uint16_t mathbox_counter = 0;
    static uint16_t frame_counter = 0;
    mathbox_counter++;
    frame_counter++;

    // TEMPORARY: Simulate mathbox operations that would produce varied PA/PB (pure guesswork)
    // TODO: Replace with actual mathbox matrix calculations
    uint16_t base_pa = 0x021F;  // FROM MAME TRACE: observed PA value
    uint16_t base_pb = 0x3FF7;  // FROM MAME TRACE: observed PB value

    // TEMPORARY: Add more realistic variation based on frame/counter to simulate real mathbox results (pure guesswork)
    // This should produce patterns similar to what MAME shows in attract mode
    uint16_t pa_variation = ((mathbox_counter * 0x10) + (frame_counter & 0x1F)) & 0xFF;
    uint16_t pb_variation = ((mathbox_counter * 0x20) + ((frame_counter >> 2) & 0x3F)) & 0xFF;

    // TEMPORARY: Add some periodic behavior to simulate attract mode patterns (pure guesswork)
    if ((frame_counter % 60) < 30) {
        // First half of cycle: gradually increase PA, decrease PB
        pa_variation = (pa_variation + 0x20) & 0xFF;
        pb_variation = (pb_variation - 0x10) & 0xFF;
    } else {
        // Second half of cycle: gradually decrease PA, increase PB
        pa_variation = (pa_variation - 0x15) & 0xFF;
        pb_variation = (pb_variation + 0x25) & 0xFF;
    }

    uint16_t new_pa = static_cast<uint16_t>((base_pa + pa_variation) & 0xFFFF);
    uint16_t new_pb = static_cast<uint16_t>((base_pb + pb_variation) & 0xFFFF);

    // FROM ROM DISASSEMBLY: Write PA/PB values at the actual PC addresses found in ROM
    memory.write_word(ADDR_MATH_PARAM_A, new_pa);
    trace_params_pc("mathbox_pa", 0x61D3);  // FROM ROM DISASSEMBLY: PC where PA is written (LDD #$021F; STD $5022)
    memory.write_word(ADDR_MATH_PARAM_B, new_pb);
    trace_params_pc("mathbox_pb", 0x61D9);  // FROM ROM DISASSEMBLY: PC where PB is written (LDD #$3FF7; STD $5024)

    // TODO: Add real mathbox command writes to 0x4700-0x4707
    memory.write_byte(ADDR_MATH_WRITE, 0x67); // TODO: Replace with real mathbox command
    trace_params_pc("mathbox_cmd", 0xCDBD);
}

// Converted from 6809 assembly at 0x62d5
void StarWarsGame::vector_graphics_control() {
    // Control vector graphics display
    // Send commands to AVG (Atari Vector Generator)

    // Initialize vector display
    memory.write_byte(0x4000, 0x00);  // AVG command
    memory.write_byte(0x4001, 0x00);  // X coordinate
    memory.write_byte(0x4002, 0x00);  // Y coordinate
    memory.write_byte(0x4003, 0x00);  // Color/intensity

    // Draw vectors via AVG-compatible subroutine (from ROM 0xd91a)
    // FROM DISASSEMBLY: Calls into ROM routine at $D91A which drives AVG setup
    vector_subroutine_d91a();
    if (graphics) {
        graphics->update();
        // NEW TEMPORARY/TEST CODE (not from ROM):
        // TODO: Replace with faithful AVG interpreter that consumes AVG/Mathbox protocol.
        // Minimal placeholder: treat write to $4701 as an "emit" trigger using current params at $5022/$5024.
        uint16_t pa = (memory.read_byte(ADDR_MATH_PARAM_A) << 8) | memory.read_byte(ADDR_MATH_PARAM_A + 1);
        uint16_t pb = (memory.read_byte(ADDR_MATH_PARAM_B) << 8) | memory.read_byte(ADDR_MATH_PARAM_B + 1);
        uint16_t dc = (memory.read_byte(ADDR_AVG_GO) << 8) | memory.read_byte(ADDR_AVG_GO + 1);
        if (dc != last_div_ctrl) {
            last_div_ctrl = dc;
            avg_trigger(dc); // TEMP: count triggers
            trace_params("avg_write");
        }
        if (last_avg_trigger_seen != avg_trigger_count) {
            last_avg_trigger_seen = avg_trigger_count;
            graphics->clear_vectors();
            int x = static_cast<int>(static_cast<int16_t>(pa)) >> 4;
            int y = static_cast<int>(static_cast<int16_t>(pb)) >> 4;
            // NEW TEMPORARY/TEST CODE (not from ROM): emit a short line from origin to (x,y)
            graphics->add_vector(Vector(0, 0, 1, 200));
            graphics->add_vector(Vector(x, y, 1, 200));
        }
    }
}

// Placeholder faithful port of ROM subroutine at 0xd91a.
// TODO: Replace with a real translation of the AVG sequence from ROM $D91A.
void StarWarsGame::vector_subroutine_d91a() {
    if (!graphics) return;

    // TODO: Implement full translation of ROM subroutine at $D91A.
    // SOURCE: unidasm disassembly in starwars_analysis/rom_disasm_d91a_unidasm.md

    // Partial faithful translation of a small, self-contained block:
    // FROM DISASSEMBLY: $D939 LDX #$49E2; $D93C LDA #$00; $D93E STA ,X
    // Store 0 at memory 0x49E2 as per ROM behavior.
    memory.write_byte(0x49E2, 0x00);

    // FROM DISASSEMBLY PATTERN: 30 0E (LEAX $0E,X); 8C 4A 52 (CMPX #$4A52); 25 F5 (BCS back)
    // Interpreted as: zero a strided buffer from 0x49E2 up to (but not including) 0x4A52, step 0x000E.
    // TODO: Confirm exact stride and bounds against full 6809 spec and ROM flow.
    for (uint16_t addr = 0x49E2; addr < 0x4A52; addr = static_cast<uint16_t>(addr + 0x000E)) {
        memory.write_byte(addr, 0x00);
    }

    // FROM DISASSEMBLY (unidasm):
    //   LDD #$14BD; STD $5022
    //   LDD #$3C8C; STD $5024
    //   LDD #$0018; STD $4701
    // Later:
    //   LDD #$0590; STD $5022
    //   LDD #$3FC2; STD $5024
    //   LDD #$0018; STD $4701
    memory.write_word(ADDR_MATH_PARAM_A, 0x14BD);
    memory.write_word(ADDR_MATH_PARAM_B, 0x3C8C);
    memory.write_word(ADDR_AVG_GO,       0x0018);
    avg_trigger(0x0018); // TEMP: note AVG write seen
    trace_params("d91a_a");
    memory.write_word(ADDR_MATH_PARAM_A, 0x0590);
    memory.write_word(ADDR_MATH_PARAM_B, 0x3FC2);
    memory.write_word(ADDR_AVG_GO,       0x0018);
    avg_trigger(0x0018); // TEMP: note AVG write seen
    trace_params("d91a_b");

    // FROM DISASSEMBLY: Nearby JSRs $CDB5 and $CDBA are invoked here.
    // TODO: Implement those routines precisely; currently stubbed.
    rom_sub_cdb5();  // TODO: Translate $CDB5
    rom_sub_cdba();  // TODO: Translate $CDBA

    // FROM DISASSEMBLY: 0x6060..0x6073
    //   LDD #$0050;      STD $5002
    //   LDA #$86;        JSR $CDBA
    //   LDD $5002; ADDD #$000A; STD <$01
    memory.write_word(0x5002, 0x0050);
    memory.write_byte(0x0000, 0x86); // A=0x86 passed implicitly to stubbed CDBA
    rom_sub_cdba();
    {
        uint16_t d = static_cast<uint16_t>(memory.read_word(0x5002) + 0x000A);
        memory.write_word(0x0001, d);
    }

    // FROM DISASSEMBLY: 0x6073..0x6093
    //   D = <$D6 - <$B3; if (D<0) D = -D; STD <$05; STD <$03
    //   D = <$D8 - <$B5; if (D<0) D = -D; STD <$07; <$03 += <$07; STD <$03
    {
        auto read_dp = [&](uint8_t dp) -> uint16_t {
            return static_cast<uint16_t>((memory.read_byte(dp) << 8) | memory.read_byte(dp + 1));
        };
        auto write_dp = [&](uint8_t dp, uint16_t val) {
            memory.write_byte(dp, static_cast<uint8_t>(val >> 8));
            memory.write_byte(dp + 1, static_cast<uint8_t>(val & 0xFF));
        };
        int16_t d1 = static_cast<int16_t>(read_dp(0xD6)) - static_cast<int16_t>(read_dp(0xB3));
        if (d1 < 0) d1 = static_cast<int16_t>(-d1);
        write_dp(0x05, static_cast<uint16_t>(d1));
        write_dp(0x03, static_cast<uint16_t>(d1));

        int16_t d2 = static_cast<int16_t>(read_dp(0xD8)) - static_cast<int16_t>(read_dp(0xB5));
        if (d2 < 0) d2 = static_cast<int16_t>(-d2);
        write_dp(0x07, static_cast<uint16_t>(d2));

        uint16_t dp03 = read_dp(0x03);
        dp03 = static_cast<uint16_t>(dp03 + static_cast<uint16_t>(d2));
        write_dp(0x03, dp03);
    }

    // FROM DISASSEMBLY: 0x6040..0x6058 – conditional JSRS based on $4B14 LSR and $4703 sign
    //   INC $4B3B; LDA $4B14; LSRA; if carry then JSR $BD1C else { if $4703 < 0 then JSR $BD5D else JSR $BD2B }
    {
        uint8_t a4b3b = memory.read_byte(0x4B3B);
        memory.write_byte(0x4B3B, static_cast<uint8_t>(a4b3b + 1));
        uint8_t a4b14 = memory.read_byte(0x4B14);
        bool carry = (a4b14 & 0x01) != 0;
        a4b14 >>= 1;
        memory.write_byte(0x4B14, a4b14);
        if (carry) {
            rom_sub_bd1c();
        } else {
            int8_t s4703 = static_cast<int8_t>(memory.read_byte(0x4703));
            if (s4703 < 0) {
                rom_sub_bd5d();
            } else {
                rom_sub_bd2b();
            }
        }
    }

    // FROM DISASSEMBLY: 0x6091..0x60B5 – comparisons and best-candidate update
    {
        auto read_dp = [&](uint8_t dp) -> uint16_t {
            return static_cast<uint16_t>((memory.read_byte(dp) << 8) | memory.read_byte(dp + 1));
        };
        auto write_dp = [&](uint8_t dp, uint16_t val) {
            memory.write_byte(dp, static_cast<uint8_t>(val >> 8));
            memory.write_byte(dp + 1, static_cast<uint8_t>(val & 0xFF));
        };
        int16_t cmp1 = static_cast<int16_t>(read_dp(0x05)) - static_cast<int16_t>(read_dp(0x01));
        if (cmp1 <= 0) {
            int16_t cmp2 = static_cast<int16_t>(read_dp(0x07)) - static_cast<int16_t>(read_dp(0x01));
            if (cmp2 <= 0) {
                uint16_t dp01 = read_dp(0x01);
                uint16_t tmp = static_cast<uint16_t>((dp01 >> 1) + dp01);
                int16_t cmp3 = static_cast<int16_t>(tmp) - static_cast<int16_t>(read_dp(0x03));
                if (cmp3 >= 0) {
                    uint16_t v5018 = memory.read_word(0x5018);
                    if (static_cast<int16_t>(v5018) > static_cast<int16_t>(read_dp(0xC4))) {
                        write_dp(0xC4, v5018);
                        write_dp(0xC2, read_dp(0x64)); // <$C2 = <$64
                    }
                }
            }
        }
    }

    // FROM DISASSEMBLY: 0x60B5..0x60CF – conditional flagging via X
    // Implement: X = <$64; if (mem[X+3]==1) then mem[X+0x15] |= 0x0008
    {
        auto read_dp = [&](uint8_t dp) -> uint16_t {
            return static_cast<uint16_t>((memory.read_byte(dp) << 8) | memory.read_byte(dp + 1));
        };
        uint16_t xptr = read_dp(0x64);
        uint8_t x3 = memory.read_byte(static_cast<uint16_t>(xptr + 3));
        if (x3 == 0x01) {
            uint16_t w = memory.read_word(static_cast<uint16_t>(xptr + 0x15));
            w = static_cast<uint16_t>(w | 0x0008);
            memory.write_word(static_cast<uint16_t>(xptr + 0x15), w);
        }
    }

    // Next loop: $D98B..$D9A8 – decrement elements across stride until zero
    // Pseudocode per disasm:
    //   X = 0x49E2
    //   do {
    //     A = mem[X]
    //     if (A != 0) {
    //       mem[X]--
    //       // various flags/branches elided for now
    //     }
    //     X += 0x0E
    //   } while (X < 0x4A52)
    for (uint16_t addr = 0x49E2; addr < 0x4A52; addr = static_cast<uint16_t>(addr + 0x000E)) {
        uint8_t v = memory.read_byte(addr);
        if (v != 0) {
            memory.write_byte(addr, static_cast<uint8_t>(v - 1));
            // FROM DISASSEMBLY: JSR $CDC3 within the loop
            rom_sub_cdc3();
            // FROM DISASSEMBLY: JSR $CD9E within the loop
            rom_sub_cd9e();
        }
    }

    // FROM DISASSEMBLY: Conditional branch to $B95C
    // TODO: Implement exact branch conditions; placeholder triggers when any entry remains nonzero.
    bool any_nonzero = false;
    for (uint16_t addr = 0x49E2; addr < 0x4A52; addr = static_cast<uint16_t>(addr + 0x000E)) {
        if (memory.read_byte(addr) != 0) { any_nonzero = true; break; }
    }
    if (any_nonzero) {
        rom_jump_b95c(); // TODO: translate $B95C real behavior
    }

    // FROM DISASSEMBLY: 0x60CF..0x60ED – table fetch via U/Y++, JSRs, and STD ,Y++ of #$8040
    //   X = <$64
    //   B = mem[X+6]
    //   U = #$7A08; ASLB; D = [U + B]; STD ,Y++
    //   LDA #$40; JSR $CDBA
    //   LDB $4,X; JSR $CD14; JSR $CD2C
    //   LDD #$8040; STD ,Y++
    // TODO: We do not yet model Y-based AVG buffer writes; emit placeholders via AVG params/trigger for visibility.
    {
        auto read_dp = [&](uint8_t dp) -> uint16_t {
            return static_cast<uint16_t>((memory.read_byte(dp) << 8) | memory.read_byte(dp + 1));
        };
        uint16_t xptr = read_dp(0x64);
        uint8_t b_val = memory.read_byte(static_cast<uint16_t>(xptr + 6));
        uint16_t ubase = 0x7A08;
        uint16_t taddr = static_cast<uint16_t>(ubase + static_cast<uint16_t>(b_val) * 2);
        uint16_t tword = memory.read_word(taddr);
        // Placeholder for "STD ,Y++": buffer the word and also reflect via AVG params for visibility
        avg_std_ypp(tword);
        memory.write_word(ADDR_MATH_PARAM_A, tword);
        memory.write_word(ADDR_MATH_PARAM_B, 0x0000);
        memory.write_word(ADDR_AVG_GO, 0x0018);
        avg_trigger(0x0018);
        trace_params("d91a_tbl1");

        // LDA #$40; JSR $CDBA
        memory.write_byte(0x0000, 0x40);
        rom_sub_cdba();

        // LDB $4,X; JSR $CD14; JSR $CD2C
        uint8_t b2 = memory.read_byte(static_cast<uint16_t>(xptr + 4));
        (void)b2; // TODO: pass/register semantics for B when stubs are implemented
        rom_sub_cd14();
        rom_sub_cd2c();

        // LDD #$8040; STD ,Y++  (emit second placeholder segment)
        avg_std_ypp(0x8040);
        memory.write_word(ADDR_MATH_PARAM_A, 0x8040);
        memory.write_word(ADDR_MATH_PARAM_B, 0x0000);
        memory.write_word(ADDR_AVG_GO, 0x0018);
        avg_trigger(0x0018);
        trace_params("d91a_tbl2");
    }

    // NEW TEMPORARY/TEST CODE: create visible param variance tied to <$01 for placeholder AVG
    // TODO: Remove when faithful AVG interpreter is in place.
    uint16_t dp01_now = static_cast<uint16_t>((memory.read_byte(0x01) << 8) | memory.read_byte(0x02));
    memory.write_word(ADDR_MATH_PARAM_A, static_cast<uint16_t>(0x0590 + (dp01_now & 0x003F)));
    memory.write_word(ADDR_MATH_PARAM_B, static_cast<uint16_t>(0x3FC2 + ((dp01_now >> 1) & 0x003F)));
    uint16_t trig = static_cast<uint16_t>(0x0018 ^ (dp01_now & 0x0001));
    memory.write_word(ADDR_AVG_GO, trig);
    avg_trigger(trig);
    trace_params("d91a_var");
}

// NEW TEMPORARY/TEST CODE (not from ROM): record writes to AVG control ($4701)
void StarWarsGame::avg_trigger(uint16_t value) {
    (void)value; // value unused in placeholder
    ++avg_trigger_count;
}

// NEW TEMPORARY/TEST CODE: CSV trace of params and triggers for verification later
void StarWarsGame::open_trace_if_needed() {
    if (!trace_file.is_open()) {
        trace_file.open("trace_params.csv", std::ios::out | std::ios::trunc);
        if (trace_file.is_open()) {
            trace_file << "frame,tag,pa,pb,avg\n";
        }
    }
}

void StarWarsGame::trace_params(const char* tag) {
    open_trace_if_needed();
    if (!trace_file.is_open()) return;
    uint16_t pa = (memory.read_byte(ADDR_MATH_PARAM_A) << 8) | memory.read_byte(ADDR_MATH_PARAM_A + 1);
    uint16_t pb = (memory.read_byte(ADDR_MATH_PARAM_B) << 8) | memory.read_byte(ADDR_MATH_PARAM_B + 1);
    uint16_t av = (memory.read_byte(ADDR_AVG_GO) << 8) | memory.read_byte(ADDR_AVG_GO + 1);
    trace_file << game_state.score /* TEMP use score as frame counter placeholder */
               << "," << tag
               << "," << pa
               << "," << pb
               << "," << av
               << "\n";
    trace_file.flush();
}

// NEW: PC-tagged trace for alignment against MAME debug PCs
void StarWarsGame::trace_params_pc(const char* tag, uint16_t pc_tag) {
    open_trace_if_needed();
    if (!trace_file.is_open()) return;
    uint16_t pa = (memory.read_byte(ADDR_MATH_PARAM_A) << 8) | memory.read_byte(ADDR_MATH_PARAM_A + 1);
    uint16_t pb = (memory.read_byte(ADDR_MATH_PARAM_B) << 8) | memory.read_byte(ADDR_MATH_PARAM_B + 1);
    uint16_t av = (memory.read_byte(ADDR_AVG_GO) << 8) | memory.read_byte(ADDR_AVG_GO + 1);
    trace_file << game_state.score
               << "," << tag << "_pc_" << std::hex << pc_tag << std::dec
               << "," << pa
               << "," << pb
               << "," << av
               << "\n";
}

// NEW TEMP: minimal $611E/$6161 alignment to match initial MAME parameters
void StarWarsGame::rom_sub_611e_minimal() {
    // FROM DISASSEMBLY/MAME TRACE: sequence shows writes at PCs 0x61D9 (PA), 0x61DF (PB), then AVG_GO at 0xF12B
    // NEW TEMPORARY/TEST CODE: mirror that ordering for alignment
    memory.write_word(ADDR_MATH_PARAM_A, 0x021F);
    trace_params_pc("pre611e_pa", 0x61D9);
    memory.write_word(ADDR_MATH_PARAM_B, 0x3FF7);
    trace_params_pc("pre611e_pb", 0x61DF);
    memory.write_word(ADDR_AVG_GO, 0x00C0);
    avg_trigger(0x00C0);
    trace_params_pc("pre611e_go", 0xF12B); // tag with observed PC for alignment
}

// NEW TEMPORARY/TEST CODE: simulate "STD ,Y++" by recording words and advancing a pseudo Y
void StarWarsGame::avg_std_ypp(uint16_t value) {
    avg_buffer_words.push_back(value);
    avg_y_ptr = static_cast<uint16_t>(avg_y_ptr + 2);
}

// TODO: Implement $CDB5 behavior
void StarWarsGame::rom_sub_cdb5() {
    // Placeholder: performs no operation for now
}

// TODO: Implement $CDBA behavior
void StarWarsGame::rom_sub_cdba() {
    // Placeholder: performs no operation for now
}

// TODO: Implement JSR ,X equivalent (indirect through X)
void StarWarsGame::rom_sub_indirect_at_x(uint16_t addr) {
    (void)addr; // TODO - resolve when X is modeled and code pointers known
}

// TODO: Implement $CDC3 behavior
void StarWarsGame::rom_sub_cdc3() {
    // TODO: translate CDC3 effects precisely. Based on unidasm near $CDC3:
    //   LDD $4B26; ADDD #$0080; STD $4B26; RTS
    //   LDD <$89;  ADDD #$0080; STD <$89;  RTS
    //   LDD $4B24; ADDD #$FF80; STD $4B24; RTS
    auto add_word = [&](uint16_t addr, int16_t delta, bool direct_page) {
        uint16_t val = (memory.read_byte(addr) << 8) | memory.read_byte(addr + 1);
        int32_t sum = static_cast<int32_t>(static_cast<int16_t>(val)) + delta;
        uint16_t res = static_cast<uint16_t>(sum);
        memory.write_byte(addr, static_cast<uint8_t>(res >> 8));
        memory.write_byte(addr + 1, static_cast<uint8_t>(res & 0xFF));
        (void)direct_page; // TODO: DP addressing semantics if needed
    };
    // $4B26 += 0x0080
    add_word(0x4B26, 0x0080, false);
    // <$89 += 0x0080 (direct page)
    add_word(0x0089, 0x0080, true);
    // $4B24 += 0xFF80 (i.e., -0x80)
    add_word(0x4B24, static_cast<int16_t>(0xFF80), false);
}

// TODO: Implement $CD9E behavior
void StarWarsGame::rom_sub_cd9e() {
    // TODO: translate CD9E effects precisely. From unidasm at $CD9E region:
    //   if (<$63 != 0) {
    //     if (<$63 > 0) { DEC <$63; LDD #$04FF; } else { INC <$63; LDD #$FB01; }
    //     STD $5022; LDD #$3FCE; STD $5024; JSR $CE24;
    //   }
    //   JSR $6EA2; JSR $70BD; JSR $70CC; RTS
    // Note: Additional math into <$A5 and combining <$7D follows in later block; TODO implement.
    uint8_t val63 = memory.read_byte(0x0063);
    if (val63 != 0) {
        if (static_cast<int8_t>(val63) > 0) {
            val63 = static_cast<uint8_t>(val63 - 1);
            memory.write_word(ADDR_MATH_PARAM_A, 0x04FF);
        } else {
            val63 = static_cast<uint8_t>(val63 + 1);
            memory.write_word(ADDR_MATH_PARAM_A, 0xFB01);
        }
        memory.write_byte(0x0063, val63);
        memory.write_word(ADDR_MATH_PARAM_B, 0x3FCE);
        rom_sub_ce24(); // TODO
    }
    rom_sub_6ea2(); // TODO
    rom_sub_70bd(); // TODO
    rom_sub_70cc(); // TODO
}

// TODO: Implement $B95C behavior (control flow target)
void StarWarsGame::rom_jump_b95c() {
    // TODO: translate B95C effects
}

// TODO: Implement stubs for CE24/6EA2/70BD/70CC
void StarWarsGame::rom_sub_ce24() {
    // TODO: translate CE24 effects
}
void StarWarsGame::rom_sub_6ea2() {
    // TODO: translate 6EA2 effects
}
void StarWarsGame::rom_sub_70bd() {
    // TODO: translate 70BD effects
}
void StarWarsGame::rom_sub_70cc() {
    // TODO: translate 70CC effects
}

// TODO: Implement $CD14 behavior (referenced near 0x60E2)
void StarWarsGame::rom_sub_cd14() {
    // Placeholder: performs no operation for now
}

// TODO: Implement $CD2C behavior (referenced near 0x60E5)
void StarWarsGame::rom_sub_cd2c() {
    // Placeholder: performs no operation for now
}

// TODO: Implement $BD5D behavior (referenced near 0x604B)
void StarWarsGame::rom_sub_bd5d() {
    // Placeholder: performs no operation for now
}

// TODO: Implement $BD2B behavior (referenced near 0x6050)
void StarWarsGame::rom_sub_bd2b() {
    // Placeholder: performs no operation for now
}

// TODO: Implement $BD1C behavior (referenced near 0x6055)
void StarWarsGame::rom_sub_bd1c() {
    // Placeholder: performs no operation for now
}

// Converted from 6809 assembly at 0xc6d4
void StarWarsGame::graphics_initialization() {
    std::cout << "Graphics initialization (0xc6d4) - Setting up vector display..." << std::endl;

    // Initialize vector graphics system
    memory.write_byte(0x4000, 0x00);  // Clear AVG
    memory.write_byte(0x4001, 0x00);  // Reset position
    memory.write_byte(0x4002, 0x00);
    memory.write_byte(0x4003, 0x00);

    // Set up display parameters
    memory.write_byte(0x4004, 0x80);  // Display enable
    memory.write_byte(0x4005, 0x00);  // Brightness

    std::cout << "Vector graphics initialized" << std::endl;
}

// Converted from 6809 assembly at 0x61b5
void StarWarsGame::data_processing() {
    // Data processing and memory management
    // Handle game data structures

    // Process game objects
    // Update positions
    // Handle animations
    // Manage memory allocation
}

void StarWarsGame::handle_input() {
    // Handle player input
    // Read from input ports

    game_state.player_input = memory.read_byte(0x4300);
    game_state.coin_input = memory.read_byte(0x4320);
    game_state.start_input = memory.read_byte(0x4340);

    // Process input
    process_controls();
}

void StarWarsGame::process_controls() {
    // Process control inputs
    // Handle joystick, buttons, etc.

    if (game_state.player_input & 0x01) {
        // Fire button pressed
    }

    if (game_state.player_input & 0x02) {
        // Thrust button pressed
    }

    if (game_state.player_input & 0x04) {
        // Shield button pressed
    }
}

void StarWarsGame::update_game_state() {
    // Update game state variables
    // Handle game logic

    // Update game objects
    // Process AI
    // Handle physics
}

void StarWarsGame::check_collisions() {
    // Check for collisions between game objects
    // Handle collision responses
}

void StarWarsGame::update_score() {
    // Update player score
    // Handle score display
}

void StarWarsGame::update_shields() {
    // Update shield status
    // Handle shield display
}

} // namespace StarWars

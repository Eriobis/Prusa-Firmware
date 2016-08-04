#ifndef BOARDS_H
#define BOARDS_H

#define BOARD_UNKNOWN -1


#define BOARD_RAMBO             301  // Rambo
#define BOARD_RAMBO_MINI_1_3    302  // Rambo-mini 1.3
#define BOARD_RAMBO_MINI_1_0    102  // Rambo-mini 1.0
#define BOARD_RAMPS_14_EFB      43   // RAMPS 1.4 (Power outputs: Extruder, Fan, Bed)
#define BOARD_RAMPS_14_EEB      44   // RAMPS 1.4 (Power outputs: Extruder0, Extruder1, Bed)
#define BOARD_RAMPS_14_EFF      45   // RAMPS 1.4 (Power outputs: Extruder, Fan, Fan)
#define BOARD_RAMPS_14_EEF      46   // RAMPS 1.4 (Power outputs: Extruder0, Extruder1, Fan)
#define BOARD_RAMPS_14_SF       48   // RAMPS 1.4 (Power outputs: Spindle, Controller Fan)
#define BOARD_RAMPS_OLD         3    // MEGA/RAMPS up to 1.2
#define BOARD_RAMPS_13_EFB      33   // RAMPS 1.3 (Power outputs: Extruder, Fan, Bed)
#define BOARD_RAMPS_13_EEB      34   // RAMPS 1.3 (Power outputs: Extruder0, Extruder1, Bed)
#define BOARD_RAMPS_13_EFF      35   // RAMPS 1.3 (Power outputs: Extruder, Fan, Fan)
#define BOARD_RAMPS_13_EEF      36   // RAMPS 1.3 (Power outputs: Extruder0, Extruder1, Fan)
#define BOARD_RAMPS_13_SF       38   // RAMPS 1.3 (Power outputs: Spindle, Controller Fan)

#define BOARD_99                99   // This is in pins.h but...?

#define MB(board) (MOTHERBOARD==BOARD_##board)
#define IS_RAMPS (MB(RAMPS_OLD) || MB(RAMPS_13_EFB) || MB(RAMPS_13_EEB) || MB(RAMPS_13_EFF) || MB(RAMPS_13_EEF))

#endif //__BOARDS_H

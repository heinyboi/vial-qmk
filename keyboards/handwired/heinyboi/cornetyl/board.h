#ifndef MAIN_BOARD_H
#define MAIN_BOARD_H

// Core ChibiOS Target Architecture Definitions
#define RP2040
#define BOARD_GENERIC_RP2040
#define BOARD_NAME "Cornetyl Custom Split RP2040"

// CRITICAL CLOCK HOOKS: Specify the precise hardware oscillator frequency for the YD-RP2040
#define RP_XOSCCLK 12000000U

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* MAIN_BOARD_H */

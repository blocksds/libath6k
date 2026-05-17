// SPDX-License-Identifier: Zlib
//
// Copyright (c) 2026 Antonio Niño Díaz

#ifndef LIBATH6K_REGISTERS_H__
#define LIBATH6K_REGISTERS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <ath6k/types.h>

// Clock/RTC Registers
// -------------------

#define WLAN_RESET_CONTROL                  (*(vu32*)0x004000)
#define WLAN_XTAL_CONTROL                   (*(vu32*)0x004004)
#define WLAN_TCXO_DETECT                    (*(vu32*)0x004008)
#define WLAN_XTAL_TEST                      (*(vu32*)0x00400C)
#define WLAN_QUADRATURE                     (*(vu32*)0x004010)
#define WLAN_PLL_CONTROL                    (*(vu32*)0x004014)
#define WLAN_PLL_SETTLE                     (*(vu32*)0x004018)
#define WLAN_XTAL_SETTLE                    (*(vu32*)0x00401C)
#define WLAN_CPU_CLOCK                      (*(vu32*)0x004020)
#define WLAN_CLOCK_OUT                      (*(vu32*)0x004024)
#define WLAN_CLOCK_CONTROL                  (*(vu32*)0x004028)
#define WLAN_BIAS_OVERRIDE                  (*(vu32*)0x00402C)

// Watchdog Timer
#define WLAN_WDT_CONTROL                    (*(vu32*)0x004030)
#define WLAN_WDT_STATUS                     (*(vu32*)0x004034)
#define WLAN_WDT                            (*(vu32*)0x004038)
#define WLAN_WDT_COUNT                      (*(vu32*)0x00403C)
#define WLAN_WDT_RESET                      (*(vu32*)0x004040)

// Interrupt status
#define WLAN_INT_STATUS                     (*(vu32*)0x004044

// Low-Freq Timers
#define WLAN_LF_TIMER0                      (*(vu32*)0x004048)
#define WLAN_LF_TIMER_COUNT0                (*(vu32*)0x00404C)
#define WLAN_LF_TIMER_CONTROL0              (*(vu32*)0x004050)
#define WLAN_LF_TIMER_STATUS0               (*(vu32*)0x004054)
#define WLAN_LF_TIMER1                      (*(vu32*)0x004058)
#define WLAN_LF_TIMER_COUNT1                (*(vu32*)0x00405C)
#define WLAN_LF_TIMER_CONTROL1              (*(vu32*)0x004060)
#define WLAN_LF_TIMER_STATUS1               (*(vu32*)0x004064)
#define WLAN_LF_TIMER2                      (*(vu32*)0x004068)
#define WLAN_LF_TIMER_COUNT2                (*(vu32*)0x00406C)
#define WLAN_LF_TIMER_CONTROL2              (*(vu32*)0x004070)
#define WLAN_LF_TIMER_STATUS2               (*(vu32*)0x004074)
#define WLAN_LF_TIMER3                      (*(vu32*)0x004078)
#define WLAN_LF_TIMER_COUNT3                (*(vu32*)0x00407C)
#define WLAN_LF_TIMER_CONTROL3              (*(vu32*)0x004080)
#define WLAN_LF_TIMER_STATUS3               (*(vu32*)0x004084)

// High-Freq Timer
#define WLAN_HF_TIMER                       (*(vu32*)0x004088)
#define WLAN_HF_TIMER_COUNT                 (*(vu32*)0x00408C)
#define WLAN_HF_LF_COUNT                    (*(vu32*)0x004090)
#define WLAN_HF_TIMER_CONTROL               (*(vu32*)0x004094)
#define WLAN_HF_TIMER_STATUS                (*(vu32*)0x004098)

// Real-TIme Clock
#define WLAN_RTC_CONTROL                    (*(vu32*)0x00409C)
#define WLAN_RTC_TIME                       (*(vu32*)0x0040A0)
#define WLAN_RTC_DATE                       (*(vu32*)0x0040A4)
#define WLAN_RTC_SET_TIME                   (*(vu32*)0x0040A8)
#define WLAN_RTC_SET_DATE                   (*(vu32*)0x0040AC)
#define WLAN_RTC_SET_ALARM                  (*(vu32*)0x0040B0)
#define WLAN_RTC_CONFIG                     (*(vu32*)0x0040B4)
#define WLAN_RTC_ALARM_STATUS               (*(vu32*)0x0040B8)

#define WLAN_UART_WAKEUP                    (*(vu32*)0x0040BC)
#define WLAN_RESET_CAUSE                    (*(vu32*)0x0040C0)
#define WLAN_SYSTEM_SLEEP                   (*(vu32*)0x0040C4)
#define WLAN_SDIO_WRAPPER                   (*(vu32*)0x0040C8)
#define WLAN_MAC_SLEEP_CONTROL              (*(vu32*)0x0040CC)
#define WLAN_KEEP_AWAKE                     (*(vu32*)0x0040D0)

#define WLAN_LPO_CAL_TIME                   (*(vu32*)0x0040D4)
#define WLAN_LPO_INIT_DIVIDEND_INT          (*(vu32*)0x0040D8)
#define WLAN_LPO_INIT_DIVIDEND_FRACTION     (*(vu32*)0x0040DC)
#define WLAN_LPO_CAL                        (*(vu32*)0x0040E0)
#define WLAN_LPO_CAL_TEST_CONTROL           (*(vu32*)0x0040E4)
#define WLAN_LPO_CAL_TEST_STATUS            (*(vu32*)0x0040E8)

#define WLAN_CHIP_ID                        (*(vu32*)0x0040EC)
#define WLAN_DERIVED_RTC_CLK                (*(vu32*)0x0040F0)
#define MAC_PCU_SLP32_MODE                  (*(vu32*)0x0040F4)
#define MAC_PCU_SLP32_WAKE                  (*(vu32*)0x0040F8)
#define MAC_PCU_SLP32_INC                   (*(vu32*)0x0040FC)
#define MAC_PCU_SLP_MIB1                    (*(vu32*)0x004100)
#define MAC_PCU_SLP_MIB2                    (*(vu32*)0x004104)
#define MAC_PCU_SLP_MIB3                    (*(vu32*)0x004108)
#define MAC_PCU_SLP_BEACON                  (*(vu32*)0x00410C)

#define WLAN_POWER_REG                      (*(vu32*)0x004110)
#define WLAN_CORE_CLK_CTRL                  (*(vu32*)0x004114)

//#define PAD0                                ((vu8*)0x004118) // 0..7
#define SDIO_SETUP_CIRCUIT                  ((vu32*)0x004120) // 0..7
#define SDIO_SETUP_CONFIG                   (*(vu32*)0x004140)
#define CPU_SETUP_CONFIG                    (*(vu32*)0x004144)
//#define PAD1                                ((vu8*)0x004148) // 0..23
#define CPU_SETUP_CIRCUIT                   ((vu32*)0x004160) // 0..7
#define BB_SETUP_CONFIG                     (*(vu32*)0x004180)
//#define PAD2                                ((vu8*)0x004184) // 0..27
#define BB_SETUP_CIRCUIT                    ((vu32*)0x0041A0) // 0..7

#define WLAN_GPIO_WAKEUP_CONTROL            (*(vu32*)0x0041C0)

// Memory Controller
// -----------------

// Rom Patches
#define WLAN_MC_TCAM_VALID                  ((vu32*)0x008000) // 0..31
#define WLAN_MC_TCAM_MASK                   ((vu32*)0x008080) // 0..31
#define WLAN_MC_TCAM_COMPARE                ((vu32*)0x008100) // 0..31
#define WLAN_MC_TCAM_TARGET                 ((vu32*)0x008180) // 0..31

// ADDR_ERROR
#define WLAN_ADDR_ERROR_CONTROL             (*(vu32*)0x008200)
#define WLAN_ADDR_ERROR_STATUS              (*(vu32*)0x008204)

// Serial UART
// -----------

#define WLAN_UART_RBR   (*(vu32*)0x00C000)  // RX Data FIFO (R) (when DLAB=0)
#define WLAN_UART_THR   (*(vu32*)0x00C000)  // TX Data FIFO (W) (when DLAB=0)
#define WLAN_UART_DLL   (*(vu32*)0x00C000)  // Baudrate Divisor LSB (R/W) (when DLAB=1)
#define WLAN_UART_IER   (*(vu32*)0x00C004)  // Interrupt Control (R/W)    (when DLAB=0)
#define WLAN_UART_DLH   (*(vu32*)0x00C004)  // Baudrate Divisor MSB (R/W) (when DLAB=1)
#define WLAN_UART_IIR   (*(vu32*)0x00C008)  // Interrupt Status (R)
#define WLAN_UART_FCR   (*(vu32*)0x00C008)  // FIFO Control (W)
#define WLAN_UART_LCR   (*(vu32*)0x00C00C)  // Character Format Control (R/W)
#define WLAN_UART_MCR   (*(vu32*)0x00C010)  // Handshaking Control (R/W)
#define WLAN_UART_LSR   (*(vu32*)0x00C014)  // RX/TX Status (R) (W=don't do)
#define WLAN_UART_MSR   (*(vu32*)0x00C018)  // Handshaking Status (R) (W=don't do)
#define WLAN_UART_SCR   (*(vu32*)0x00C01C)  // Scratch (R/W)
#define WLAN_UART_SRBR  (*(vu32*)0x00C020)  // (mirror of RBR?)          (when DLAB=0?)
//#define PAD0            ((vu8*)0x00C024)    // 0..3
#define WLAN_UART_SIIR  (*(vu32*)0x00C028)  // (mirror or IIR?)
#define WLAN_UART_xMWR  (*(vu32*)0x00C02C)  // Whatever "M Write Register?"
//#define PAD1            ((vu8*)0x00C030h    // 0..3
#define WLAN_UART_SLSR  (*(vu32*)0x00C034)  // (mirror or LSR?) <-- used by AR6002 ROM
#define WLAN_UART_SMSR  (*(vu32*)0x00C038)  // (mirror of MSR?)
#define WLAN_UART_xMRR  (*(vu32*)0x00C03C)  // Whatever "M Read Register?"

// Serial I2C/SPI Interface
// ------------------------

#define SI_CONFIG       (*(vu32)0x010000)
#define SI_CS           (*(vu32)0x010004)
#define SI_TX_DATA0     (*(vu32)0x010008)
#define SI_TX_DATA1     (*(vu32)0x01000C)
#define SI_RX_DATA0     (*(vu32)0x010010)
#define SI_RX_DATA1     (*(vu32)0x010014)

#ifdef __cplusplus
}
#endif

#endif // LIBATH6K_REGISTERS_H__

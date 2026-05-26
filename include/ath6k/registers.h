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

#define SI_CONFIG       (*(vu32*)0x010000)
#define SI_CS           (*(vu32*)0x010004)
#define SI_TX_DATA0     (*(vu32*)0x010008)
#define SI_TX_DATA1     (*(vu32*)0x01000C)
#define SI_RX_DATA0     (*(vu32*)0x010010)
#define SI_RX_DATA1     (*(vu32*)0x010014)

// GPIO Registers
// --------------

#define WLAN_GPIO_OUT           (*(vu32*)0x014000) // GPIO Output Data
#define WLAN_GPIO_OUT_W1TS      (*(vu32*)0x014004) // (direct, and Write-1-To-Set/Clr)
#define WLAN_GPIO_OUT_W1TC      (*(vu32*)0x014008)

#define WLAN_GPIO_ENABLE        (*(vu32*)0x01400C) // GPIO Output Enable
#define WLAN_GPIO_ENABLE_W1TS   (*(vu32*)0x014010) // (direct, and Write-1-To-Set/Clr)
#define WLAN_GPIO_ENABLE_W1TC   (*(vu32*)0x014014)

#define WLAN_GPIO_IN            (*(vu32*)0x014018) // GPIO Input

#define WLAN_GPIO_STATUS        (*(vu32*)0x01401C) // GPIO Interrupt Status
#define WLAN_GPIO_STATUS_W1TS   (*(vu32*)0x014020) // (direct, and Write-1-To-Set/Clr)
#define WLAN_GPIO_STATUS_W1TC   (*(vu32*)0x014024)

#define WLAN_GPIO_PIN0          (*(vu32*)0x014028) // GPIO0  Bluetooth coex BT_PRIORITY
#define WLAN_GPIO_PIN1          (*(vu32*)0x01402C) // GPIO1  Bluetooth coex WLAN_ACTIVE
#define WLAN_GPIO_PIN2          (*(vu32*)0x014030) // GPIO2  Bluetooth coex BT_FREQ    ;I2C SCL
#define WLAN_GPIO_PIN3          (*(vu32*)0x014034) // GPIO3  Bluetooth coex BT_ACTIVE  ;I2C SDA
#define WLAN_GPIO_PIN4          (*(vu32*)0x014038) // GPIO4  SDIO/GSPI interface select
#define WLAN_GPIO_PIN5          (*(vu32*)0x01403C) // GPIO5  SDIO/GSPI interface select
#define WLAN_GPIO_PIN6          (*(vu32*)0x014040) // GPIO6
#define WLAN_GPIO_PIN7          (*(vu32*)0x014044) // GPIO7  TRST for JTAG debug
#define WLAN_GPIO_PIN8          (*(vu32*)0x014048) // GPIO8  external 32kHz clock in
#define WLAN_GPIO_PIN9          (*(vu32*)0x01404C) // GPIO9  I2C SCL  or SPI CLK
#define WLAN_GPIO_PIN10         (*(vu32*)0x014050) // GPIO10 I2C SDA  or SPI MISO
#define WLAN_GPIO_PIN11         (*(vu32*)0x014054) // GPIO11 UART RXD or SPI MOSI
#define WLAN_GPIO_PIN12         (*(vu32*)0x014058) // GPIO12 UART TXD or SPI /CS
#define WLAN_GPIO_PIN13         (*(vu32*)0x01405C) // GPIO13 Reset in for JTAG debug
#define WLAN_GPIO_PIN14         (*(vu32*)0x014060) // GPIO14 UART CTS
#define WLAN_GPIO_PIN15         (*(vu32*)0x014064) // GPIO15 UART RTS
#define WLAN_GPIO_PIN16         (*(vu32*)0x014068) // GPIO16
#define WLAN_GPIO_PIN17         (*(vu32*)0x01406C) // GPIO17
#define SDIO_PIN                (*(vu32*)0x014070) // Config: Pad Pull/Strength
#define CLK_REQ_PIN             (*(vu32*)0x014074) // Config: Pad Pull/Strength/AteOeLow

#define WLAN_SIGMA_DELTA        (*(vu32*)0x014078)
#define WLAN_DEBUG_CONTROL      (*(vu32*)0x01407C)
#define WLAN_DEBUG_INPUT_SEL    (*(vu32*)0x014080)
#define WLAN_DEBUG_OUT          (*(vu32*)0x014084)
#define LA_CONTROL              (*(vu32*)0x014088)
#define LA_CLOCK                (*(vu32*)0x01408C)
#define LA_STATUS               (*(vu32*)0x014090)
#define LA_TRIGGER_SAMPLE       (*(vu32*)0x014094)
#define LA_TRIGGER_POSITION     (*(vu32*)0x014098)
#define LA_PRE_TRIGGER          (*(vu32*)0x01409C)
#define LA_POST_TRIGGER         (*(vu32*)0x0140A0)
#define LA_FILTER_CONTROL       (*(vu32*)0x0140A4)
#define LA_FILTER_DATA          (*(vu32*)0x0140A8)
#define LA_FILTER_WILDCARD      (*(vu32*)0x0140AC)
#define LA_TRIGGERA_DATA        (*(vu32*)0x0140B0)
#define LA_TRIGGERA_WILDCARD    (*(vu32*)0x0140B4)
#define LA_TRIGGERB_DATA        (*(vu32*)0x0140B8)
#define LA_TRIGGERB_WILDCARD    (*(vu32*)0x0140BC)
#define LA_TRIGGER              (*(vu32*)0x0140C0)
#define LA_FIFO                 (*(vu32*)0x0140C4)
#define LA_DATA                 ((vu32*)0x0140C8) // 0..1

#define ANT_PIN                 (*(vu32*)0x0140D0) // Config: Pad Pull/Strength
#define ANTD_PIN                (*(vu32*)0x0140D4) // Config: Pad Pull
#define GPIO_PIN                (*(vu32*)0x0140D8) // Config: Pad Pull/Strength
#define GPIO_H_PIN              (*(vu32*)0x0140DC) // Config: Pad Pull
#define BT_PIN                  (*(vu32*)0x0140E0) // Config: Pad Pull/Strength
#define BT_WLAN_PIN             (*(vu32*)0x0140E4) // Config: Pad Pull
#define SI_UART_PIN             (*(vu32*)0x0140E8) // Config: Pad Pull/Strength
#define CLK32K_PIN              (*(vu32*)0x0140EC) // Config: Pad Pull

#define WLAN_RESET_TUPLE_STATUS (*(vu32*)0x0140F0)

// MBOX Registers
// --------------

#define WLAN_MBOX_FIFO                      ((vu32*)0x018000) // 0..3
#define WLAN_MBOX_FIFO_STATUS               (*(vu32*)0x018010)
#define WLAN_MBOX_DMA_POLICY                (*(vu32*)0x018014)

#define WLAN_MBOX0_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018018)
#define WLAN_MBOX0_DMA_RX_CONTROL           (*(vu32*)0x01801C) // MBOX 0
#define WLAN_MBOX0_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018020)
#define WLAN_MBOX0_DMA_TX_CONTROL           (*(vu32*)0x018024)

#define WLAN_MBOX1_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018028)
#define WLAN_MBOX1_DMA_RX_CONTROL           (*(vu32*)0x01802C) // MBOX 1
#define WLAN_MBOX1_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018030)
#define WLAN_MBOX1_DMA_TX_CONTROL           (*(vu32*)0x018034)

#define WLAN_MBOX2_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018038)
#define WLAN_MBOX2_DMA_RX_CONTROL           (*(vu32*)0x01803C) // MBOX 2
#define WLAN_MBOX2_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018040)
#define WLAN_MBOX2_DMA_TX_CONTROL           (*(vu32*)0x018044)

#define WLAN_MBOX3_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018048)
#define WLAN_MBOX3_DMA_RX_CONTROL           (*(vu32*)0x01804C) // MBOX 3
#define WLAN_MBOX3_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018050)
#define WLAN_MBOX3_DMA_TX_CONTROL           (*(vu32*)0x018054)

#define WLAN_MBOX_INT_STATUS                (*(vu32*)0x018058) // Interrupt
#define WLAN_MBOX_INT_ENABLE                (*(vu32*)0x01805C)

#define WLAN_INT_HOST                       (*(vu32*)0x018060)
//#define PAD0                                ((vu8*)0x018064) // 0..27
#define WLAN_LOCAL_COUNT                    ((vu32*)0x018080) // 0..7
#define WLAN_COUNT_INC                      ((vu32*)0x0180A0) // 0..7
#define WLAN_LOCAL_SCRATCH                  ((vu32*)0x0180C0) // 0..7
#define WLAN_USE_LOCAL_BUS                  (*(vu32*)0x0180E0)
#define WLAN_SDIO_CONFIG                    (*(vu32*)0x0180E4)
#define WLAN_MBOX_DEBUG                     (*(vu32*)0x0180E8)
#define WLAN_MBOX_FIFO_RESET                (*(vu32*)0x0180EC)
#define WLAN_MBOX_TXFIFO_POP                (*(vu32*)0x0180F0) // 0..3
#define WLAN_MBOX_RXFIFO_POP                (*(vu32*)0x018100) // 0..3
#define WLAN_SDIO_DEBUG                     (*(vu32*)0x018110)
//#define PAD1                                (*(vu8*)0x018114) // 0..7915
#define WLAN_HOST_IF_WINDOW[0..2047]        ((vu32*)0x01A000) // 0..2047

// Analog Intf Registers
// ---------------------

#define SYNTH_SYNTH1        (*(vu32*)0x01C000)
#define SYNTH_SYNTH2        (*(vu32*)0x01C004)
#define SYNTH_SYNTH3        (*(vu32*)0x01C008)
#define SYNTH_SYNTH4        (*(vu32*)0x01C00C)
#define SYNTH_SYNTH5        (*(vu32*)0x01C010)
#define SYNTH_SYNTH6        (*(vu32*)0x01C014)
#define SYNTH_SYNTH7        (*(vu32*)0x01C018)
#define SYNTH_SYNTH8        (*(vu32*)0x01C01C)

#define RF5G_RF5G1          (*(vu32*)0x01C020)
#define RF5G_RF5G2          (*(vu32*)0x01C024)

#define RF2G_RF2G1          (*(vu32*)0x01C028)
#define RF2G_RF2G2          (*(vu32*)0x01C02C)

#define TOP_GAIN            (*(vu32*)0x01C030)
#define TOP_TOP             (*(vu32*)0x01C034)

#define BIAS_BIAS_SEL       (*(vu32*)0x01C038)
#define BIAS_BIAS1          (*(vu32*)0x01C03C)
#define BIAS_BIAS2          (*(vu32*)0x01C040)
#define BIAS_BIAS3          (*(vu32*)0x01C044)

#define TXPC_TXPC           (*(vu32*)0x01C048)
#define TXPC_MISC           (*(vu32*)0x01C04C)

#define RXTXBB_RXTXBB1      (*(vu32*)0x01C050)
#define RXTXBB_RXTXBB2      (*(vu32*)0x01C054)
#define RXTXBB_RXTXBB3      (*(vu32*)0x01C058)
#define RXTXBB_RXTXBB4      (*(vu32*)0x01C05C)

#define ADDAC_ADDAC1        (*(vu32*)0x01C060)
//#define ???                 ((vu8*)0x01C064) // 0..0x1B

// More Analog Intf Registers
// --------------------------

#define SW_OVERRIDE         (*(vu32*)0x01C080)
#define SIN_VAL             (*(vu32*)0x01C084)
#define SW_SCLK             (*(vu32*)0x01C088)
#define SW_CNTL             (*(vu32*)0x01C08C)

#ifdef __cplusplus
}
#endif

#endif // LIBATH6K_REGISTERS_H__

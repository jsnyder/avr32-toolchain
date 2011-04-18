/*****************************************************************************
 *
 * Copyright (C) 2009-2010 Atmel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * * Neither the name of the copyright holders nor the names of
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Model        : UC3C264CREVC
 * Revision     : $Revision: 84896 $
 * Checkin Date : $Date: 2010-11-08 13:33:09 +0100 (Mon, 08 Nov 2010) $
 *
 ****************************************************************************/
#ifndef AVR32_UC3C264CREVC_H_INCLUDED
#define AVR32_UC3C264CREVC_H_INCLUDED


/* Instance count */
#define AVR32_ACIFA_NUM                    1
#define AVR32_ADCIFA_NUM                   1
#define AVR32_AST_NUM                      1
#define AVR32_AW_NUM                       1
#define AVR32_CANIF_NUM                    1
#define AVR32_DACIFB_NUM                   1
#define AVR32_EIC_NUM                      1
#define AVR32_FLASHC_NUM                   1
#define AVR32_FREQM_NUM                    1
#define AVR32_GPIO_NUM                     1
#define AVR32_HMATRIX_NUM                  1
#define AVR32_JTAG_NUM                     1
#define AVR32_MDMA_NUM                     1
#define AVR32_PDCA_NUM                     1
#define AVR32_PEVC_NUM                     1
#define AVR32_PM_NUM                       1
#define AVR32_PULLUP_NUM                   1
#define AVR32_PWM_NUM                      1
#define AVR32_QDEC_NUM                     1
#define AVR32_SAU_NUM                      1
#define AVR32_SCAN_NUM                     1
#define AVR32_SCIF_NUM                     1
#define AVR32_SPI_NUM                      1
#define AVR32_SSC_NUM                      1
#define AVR32_TC_NUM                       1
#define AVR32_TWIM_NUM                     2
#define AVR32_TWIMS_NUM                    2
#define AVR32_TWIS_NUM                     2
#define AVR32_USART_NUM                    3
#define AVR32_USB_NUM                      1
#define AVR32_WDT_NUM                      1

/* Maskable module clocks */
#define AVR32_PM_CLK_GRP_CPU               0
#define AVR32_PM_CLK_GRP_HSB               1
#define AVR32_PM_CLK_GRP_PBA               2
#define AVR32_PM_CLK_GRP_PBB               3
#define AVR32_PM_CLK_GRP_PBC               4
#define AVR32_PM_NUM_CLK_GRPS              5
#define AVR32_PM_NUM_CLKS_PER_GRP0         17
#define AVR32_PM_NUM_CLKS_PER_GRP1         13
#define AVR32_PM_NUM_CLKS_PER_GRP2         27
#define AVR32_PM_NUM_CLKS_PER_GRP3         6
#define AVR32_PM_NUM_CLKS_PER_GRP4         7

/* CPU clocks */
#define AVR32_OCD_CLK_CPU                  1
#define AVR32_CORE_CLK_CPU_COUNT           16

/* HSB clocks */
#define AVR32_SAU_CLK_HSB                  32
#define AVR32_PDCA_CLK_HSB                 33
#define AVR32_MDMA_CLK_HSB                 34
#define AVR32_USBB_CLK_HSB                 35
#define AVR32_CANIF_CLK_HSB                36
#define AVR32_FLASHC_CLK_HSB              37
#define AVR32_HMATRIX_CLK_HSB_PBA_BRIDGE   38
#define AVR32_HMATRIX_CLK_HSB_PBB_BRIDGE   39
#define AVR32_HMATRIX_CLK_HSB_PBC_BRIDGE   40
#define AVR32_RAM_CLK_HSB                  41
#define AVR32_EBI_CLK_HSB                  42
#define AVR32_PEVC_CLK_HSB                 44

/* PBA clocks */
#define AVR32_INTC_CLK_PBA                 64
#define AVR32_PM_CLK_PBA                   65
#define AVR32_SCIF_CLK_PBA                 66
#define AVR32_AST_CLK_PBA                  67
#define AVR32_WDT_CLK_PBA                  68
#define AVR32_EIC_CLK_PBA                  69
#define AVR32_FREQM_CLK_PBA                70
#define AVR32_GPIO_CLK_PBA                 71
#define AVR32_USART0_CLK_PBA               72
#define AVR32_USART2_CLK_PBA               73
#define AVR32_USART3_CLK_PBA               74
#define AVR32_SPI1_CLK_PBA                 75
#define AVR32_TWIM0_CLK_PBA                76
#define AVR32_TWIM1_CLK_PBA                77
#define AVR32_TWIS0_CLK_PBA                78
#define AVR32_TWIS1_CLK_PBA                79
#define AVR32_SSC_CLK_PBA                  80
#define AVR32_PWM_CLK_PBA                  81
#define AVR32_QDEC0_CLK_PBA                82
#define AVR32_QDEC1_CLK_PBA                83
#define AVR32_TC1_CLK_PBA                  84
#define AVR32_PEVC_CLK_PBA                 85
#define AVR32_ACIFA0_CLK_PBA               86
#define AVR32_ACIFA1_CLK_PBA               87
#define AVR32_DACIFB0_CLK_PBA              88
#define AVR32_DACIFB1_CLK_PBA              89
#define AVR32_AW_CLK_PBA                   90

/* PBB clocks */
#define AVR32_FLASHC_CLK_PBB               96
#define AVR32_USB_CLK_PBB                  97
#define AVR32_HMATRIX_CLK_PBB              98
#define AVR32_SAU_CLK_PBB                  99
#define AVR32_SMC_CLK_PBB                  100
#define AVR32_SDRAMC_CLK_PBB               101
#define AVR32_PDCA_CLK_PBB                 128
#define AVR32_MDMA_CLK_PBB                 129
#define AVR32_USART1_CLK_PBB               130
#define AVR32_SPIO0_CLK_PBB                132
#define AVR32_CANIF_CLK_PBB                133
#define AVR32_TC0_CLK_PBB                  134
#define AVR32_ADCIFA_CLK_PBB               135

/* Generic clocks */
#define AVR32_SCIF_GCLK_GCLK0              0
#define AVR32_SCIF_GCLK_USB                0
#define AVR32_SCIF_GCLK_GCLK1              1
#define AVR32_SCIF_GCLK_CANIF              1
#define AVR32_SCIF_GCLK_GCLK2              2
#define AVR32_SCIF_GCLK_AST                2
#define AVR32_SCIF_GCLK_GCLK3              3
#define AVR32_SCIF_GCLK_GCLK4              4
#define AVR32_SCIF_GCLK_PWM                4
#define AVR32_SCIF_GCLK_GCLK5              5
#define AVR32_SCIF_GCLK_QDEC0              5
#define AVR32_SCIF_GCLK_GCLK6              6
#define AVR32_SCIF_GCLK_QDEC1              6
#define AVR32_SCIF_GCLK_GCLK7              7
#define AVR32_SCIF_GCLK_GCLK2_EVENT        7
#define AVR32_SCIF_GCLK_GCLK8              8
#define AVR32_SCIF_GCLK_GCLK3_EVENT        8
#define AVR32_SCIF_GCLK_GCLK9              9
#define AVR32_SCIF_GCLK_GCLK0_PIN          9
#define AVR32_SCIF_GCLK_GCLK10             10
#define AVR32_SCIF_GCLK_GCLK1_PIN          10

/* Core */
#include "avr32/core_sc0_210.h"
/* OCD */
#include "avr32/ocd_s0_210.h"

/* CORE */ 
#define AVR32_CORE_OCD_DCCPU_READ_IRQ      33
#define AVR32_CORE_OCD_DCEMU_DIRTY_IRQ     32
#define AVR32_CORE_COMPARE_IRQ             0
#define AVR32_CORE_SCAN_CHAIN_MSB          13
#define AVR32_CORE_SCAN_CLOCK_MSB          13


/* OCD */ 

/* Memories */
#define AVR32_FLASH_ADDRESS                0x80000000
#define AVR32_FLASH_SIZE                   0x00010000
#define AVR32_FLASH                        ((unsigned char *)AVR32_FLASH_ADDRESS)
#define AVR32_HRAMC0_ADDRESS               0xA0000000
#define AVR32_HRAMC0_SIZE                  0x00001000
#define AVR32_HRAMC0                       ((unsigned char *)AVR32_HRAMC0_ADDRESS)
#define AVR32_HTOP0_ADDRESS                0xFFFF0000
#define AVR32_HTOP0_SIZE                   0x00007000
#define AVR32_HTOP0                        ((unsigned char *)AVR32_HTOP0_ADDRESS)
#define AVR32_HTOP1_ADDRESS                0xFFFE0000
#define AVR32_HTOP1_SIZE                   0x00002400
#define AVR32_HTOP1                        ((unsigned char *)AVR32_HTOP1_ADDRESS)
#define AVR32_HTOP2_ADDRESS                0xFFFD0000
#define AVR32_HTOP2_SIZE                   0x00002000
#define AVR32_HTOP2                        ((unsigned char *)AVR32_HTOP2_ADDRESS)
#define AVR32_SAU_SLAVE_ADDRESS            0x90000000
#define AVR32_SAU_SLAVE_SIZE               0x00000400
#define AVR32_SAU_SLAVE                    ((unsigned char *)AVR32_SAU_SLAVE_ADDRESS)
#define AVR32_SRAM_ADDRESS                 0x00000000
#define AVR32_SRAM_SIZE                    0x00004000
#define AVR32_SRAM                         ((unsigned char *)AVR32_SRAM_ADDRESS)
#define AVR32_USB_SLAVE_ADDRESS            0xFF000000
#define AVR32_USB_SLAVE_SIZE               0x000003C0
#define AVR32_USB_SLAVE                    ((unsigned char *)AVR32_USB_SLAVE_ADDRESS)

/* Interrupt Controller */
#define AVR32_INTC_ADDRESS                 0xFFFF0000
#define AVR32_INTC                         (*((volatile avr32_intc_t*)AVR32_INTC_ADDRESS))
#define AVR32_INTC_NUM_INT_GRPS            42
#define AVR32_INTC_NUM_IRQS_PER_GRP0       1
#define AVR32_INTC_NUM_IRQS_PER_GRP1       2
#define AVR32_INTC_NUM_IRQS_PER_GRP10      1
#define AVR32_INTC_NUM_IRQS_PER_GRP11      3
#define AVR32_INTC_NUM_IRQS_PER_GRP12      1
#define AVR32_INTC_NUM_IRQS_PER_GRP13      1
#define AVR32_INTC_NUM_IRQS_PER_GRP14      5
#define AVR32_INTC_NUM_IRQS_PER_GRP15      4
#define AVR32_INTC_NUM_IRQS_PER_GRP16      4
#define AVR32_INTC_NUM_IRQS_PER_GRP17      1
#define AVR32_INTC_NUM_IRQS_PER_GRP18      16
#define AVR32_INTC_NUM_IRQS_PER_GRP19      1
#define AVR32_INTC_NUM_IRQS_PER_GRP2       1
#define AVR32_INTC_NUM_IRQS_PER_GRP20      1
#define AVR32_INTC_NUM_IRQS_PER_GRP21      1
#define AVR32_INTC_NUM_IRQS_PER_GRP22      1
#define AVR32_INTC_NUM_IRQS_PER_GRP23      1
#define AVR32_INTC_NUM_IRQS_PER_GRP24      1
#define AVR32_INTC_NUM_IRQS_PER_GRP25      1
#define AVR32_INTC_NUM_IRQS_PER_GRP26      1
#define AVR32_INTC_NUM_IRQS_PER_GRP27      1
#define AVR32_INTC_NUM_IRQS_PER_GRP28      1
#define AVR32_INTC_NUM_IRQS_PER_GRP29      1
#define AVR32_INTC_NUM_IRQS_PER_GRP3       4
#define AVR32_INTC_NUM_IRQS_PER_GRP30      1
#define AVR32_INTC_NUM_IRQS_PER_GRP31      1
#define AVR32_INTC_NUM_IRQS_PER_GRP32      1
#define AVR32_INTC_NUM_IRQS_PER_GRP33      3
#define AVR32_INTC_NUM_IRQS_PER_GRP34      3
#define AVR32_INTC_NUM_IRQS_PER_GRP35      2
#define AVR32_INTC_NUM_IRQS_PER_GRP36      6
#define AVR32_INTC_NUM_IRQS_PER_GRP37      1
#define AVR32_INTC_NUM_IRQS_PER_GRP38      1
#define AVR32_INTC_NUM_IRQS_PER_GRP39      6
#define AVR32_INTC_NUM_IRQS_PER_GRP4       4
#define AVR32_INTC_NUM_IRQS_PER_GRP40      6
#define AVR32_INTC_NUM_IRQS_PER_GRP41      1
#define AVR32_INTC_NUM_IRQS_PER_GRP5       4
#define AVR32_INTC_NUM_IRQS_PER_GRP6       1
#define AVR32_INTC_NUM_IRQS_PER_GRP7       1
#define AVR32_INTC_NUM_IRQS_PER_GRP8       10
#define AVR32_INTC_NUM_IRQS_PER_GRP9       1
#define AVR32_INTC_NUM_NMI                 1
#include "avr32/intc_102.h"

/* ACIFA */

/* ACIFA0 */ 
#define AVR32_ACIFA0_ADDRESS               0xFFFF6000
#define AVR32_ACIFA0                       (*((volatile avr32_acifa_t*)AVR32_ACIFA0_ADDRESS))
#define AVR32_ACIFA0_IRQ                   1184
#define AVR32_ACIFA0_ACAOUT_PIN           4
#define AVR32_ACIFA0_ACAOUT_FUNCTION      2
#define AVR32_ACIFA0_ACBOUT_PIN           5
#define AVR32_ACIFA0_ACBOUT_FUNCTION      2

#include "avr32/acifa_100.h"


/* ADCIFA */

/* ADCIFA */ 
#define AVR32_ADCIFA_ADDRESS               0xFFFD2400
#define AVR32_ADCIFA                       (*((volatile avr32_adcifa_t*)AVR32_ADCIFA_ADDRESS))
#define AVR32_ADCIFA_SEQUENCER0_IRQ        1152
#define AVR32_ADCIFA_SEQUENCER1_IRQ        1153
#define AVR32_ADCIFA_STARTUP_DONE_IRQ      1154
#define AVR32_ADCIFA_WINDOW_IRQ            1155
#define AVR32_ADCIFA_CH0_PDCA_ID_RX        0
#define AVR32_ADCIFA_CH1_PDCA_ID_RX        1
#define AVR32_ADCIFA_MUX1NSEL_0_PIN        66
#define AVR32_ADCIFA_MUX1NSEL_1_PIN        67
#define AVR32_ADCIFA_MUX1NSEL_2_PIN        68
#define AVR32_ADCIFA_MUX1NSEL_3_PIN        69
#define AVR32_ADCIFA_OUT_4_PIN             79
#define AVR32_ADCIFA_OUT_5_PIN             80
#define AVR32_ADCIFA_OUT_6_PIN             81
#define AVR32_ADCIFA_OUT_7_PIN             82
#define AVR32_ADCIFA_OUT_8_PIN             83
#define AVR32_ADCIFA_OUT_9_PIN             84
#define AVR32_ADCIFA_OUT_21_PIN            96
#define AVR32_ADCIFA_OUT_22_PIN            97
#define AVR32_ADCIFA_OUT_23_PIN            98
#define AVR32_ADCIFA_PGATE0EN_PIN         99
#define AVR32_ADCIFA_PREAMP0S1GAIN_1_PIN   107
#define AVR32_ADCIFA_PREAMP1EN_PIN        108
#define AVR32_ADCIFA_PREAMP1OUTEN_PIN     109
#define AVR32_ADCIFA_PREAMP1S0GAIN_PIN    110
#define AVR32_ADCIFA_PREAMPCAL_8_PIN       32
#define AVR32_ADCIFA_PREAMPCAL_9_PIN       33
#define AVR32_ADCIFA_PREAMPCAL_4_PIN       123
#define AVR32_ADCIFA_PREAMPCAL_5_PIN       124
#define AVR32_ADCIFA_PREAMPCAL_6_PIN       125
#define AVR32_ADCIFA_PREAMPCAL_7_PIN       126
#define AVR32_ADCIFA_REFSEL_1_PIN          117

#include "avr32/adcifa_100.h"


/* AST */

/* AST */ 
#define AVR32_AST_ADDRESS                  0xFFFF0C00
#define AVR32_AST                          (*((volatile avr32_ast_t*)AVR32_AST_ADDRESS))
#define AVR32_AST_ALARM_IRQ                448
#define AVR32_AST_CLKREADY_IRQ             449
#define AVR32_AST_OVF_IRQ                  450
#define AVR32_AST_PER_IRQ                  451
#define AVR32_AST_READY_IRQ                452
#define AVR32_AST_APB                      2
#define AVR32_AST_CLK32                    1
#define AVR32_AST_GCLK_NUM                 2
#define AVR32_AST_GENCLK                   3
#define AVR32_AST_RCOSC                    0

#include "avr32/ast_200.h"


/* AW */

/* AW */ 
#define AVR32_AW_ADDRESS                   0xFFFF7000
#define AVR32_AW                           (*((volatile avr32_aw_t*)AVR32_AW_ADDRESS))
#define AVR32_AW_IRQ                       1312
#define AVR32_AW_PDCA_ID_RX                13
#define AVR32_AW_PDCA_ID_TX                30

#include "avr32/aw_201.h"


/* CANIF */

/* CANIF */ 
#define AVR32_CANIF_ADDRESS                0xFFFD1C00
#define AVR32_CANIF                        (*((volatile avr32_canif_t*)AVR32_CANIF_ADDRESS))
#define AVR32_CANIF_BUS_OFF_IRQ_0         256
#define AVR32_CANIF_BUS_OFF_IRQ_1         261
#define AVR32_CANIF_ERROR_IRQ_0           257
#define AVR32_CANIF_ERROR_IRQ_1           262
#define AVR32_CANIF_RXOK_IRQ_0            258
#define AVR32_CANIF_RXOK_IRQ_1            263
#define AVR32_CANIF_TXOK_IRQ_0            259
#define AVR32_CANIF_TXOK_IRQ_1            264
#define AVR32_CANIF_WAKE_UP_IRQ_0         260
#define AVR32_CANIF_WAKE_UP_IRQ_1         265
#define AVR32_CANIF_CAN_NB                 2
#define AVR32_CANIF_GCLK_NUM               1
#define AVR32_CANIF_RXLINE_1_0_PIN         1
#define AVR32_CANIF_RXLINE_1_0_FUNCTION    1
#define AVR32_CANIF_RXLINE_1_1_PIN         32
#define AVR32_CANIF_RXLINE_1_1_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_0_FUNCTION    1
#define AVR32_CANIF_RXLINE_1_2_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_1_PIN         85
#define AVR32_CANIF_RXLINE_0_1_FUNCTION    1
#define AVR32_CANIF_RXLINE_1_3_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_2_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_3_PIN         123
#define AVR32_CANIF_RXLINE_0_3_FUNCTION    1
#define AVR32_CANIF_TXLINE_1_0_PIN         0
#define AVR32_CANIF_TXLINE_1_0_FUNCTION    1
#define AVR32_CANIF_TXLINE_1_1_PIN         33
#define AVR32_CANIF_TXLINE_1_1_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_0_FUNCTION    1
#define AVR32_CANIF_TXLINE_1_2_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_1_PIN         86
#define AVR32_CANIF_TXLINE_0_1_FUNCTION    1
#define AVR32_CANIF_TXLINE_1_3_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_2_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_3_PIN         124
#define AVR32_CANIF_TXLINE_0_3_FUNCTION    1

#include "avr32/canif_100.h"


/* DACIFB */

/* DACIFB0 */ 
#define AVR32_DACIFB0_ADDRESS              0xFFFF6800
#define AVR32_DACIFB0                      (*((volatile avr32_dacifb_t*)AVR32_DACIFB0_ADDRESS))
#define AVR32_DACIFB0_CHA_DATA_EMPTY       1253
#define AVR32_DACIFB0_CHA_DATA_OVERRUN     1252
#define AVR32_DACIFB0_CHA_DATA_UNDERRUN    1251
#define AVR32_DACIFB0_CHB_DATA_EMPTY       1250
#define AVR32_DACIFB0_CHB_DATA_OVERRUN     1249
#define AVR32_DACIFB0_CHB_DATA_UNDERRUN    1248
#define AVR32_DACIFB0_CHA_PDCA_ID_TX       25
#define AVR32_DACIFB0_CHB_PDCA_ID_TX       26
#define AVR32_DACIFB0_VALUE_4_PIN          66
#define AVR32_DACIFB0_VALUE_5_PIN          67
#define AVR32_DACIFB0_VALUE_6_PIN          68
#define AVR32_DACIFB0_VALUE_7_PIN          69

#include "avr32/dacifb_100.h"


/* EIC */

/* EIC */ 
#define AVR32_EIC_ADDRESS                  0xFFFF1400
#define AVR32_EIC                          (*((volatile avr32_eic_t*)AVR32_EIC_ADDRESS))
#define AVR32_EIC_IRQ_1                   480
#define AVR32_EIC_IRQ_2                   481
#define AVR32_EIC_IRQ_3                   482
#define AVR32_EIC_IRQ_4                   483
#define AVR32_EIC_IRQ_5                   512
#define AVR32_EIC_IRQ_6                   513
#define AVR32_EIC_IRQ_7                   514
#define AVR32_EIC_IRQ_8                   515
#define AVR32_EIC_INT_MSB                  8
#define AVR32_EIC_SCAN_MSB                 7
#define AVR32_EIC_STD_NUM                  8
#define AVR32_EIC_EXTINT_1_0_PIN           3
#define AVR32_EIC_EXTINT_1_0_FUNCTION      1
#define AVR32_EIC_EXTINT_4_0_FUNCTION      1
#define AVR32_EIC_EXTINT_1_1_PIN           19
#define AVR32_EIC_EXTINT_1_1_FUNCTION      1
#define AVR32_EIC_EXTINT_1_2_FUNCTION      1
#define AVR32_EIC_EXTINT_2_0_FUNCTION      1
#define AVR32_EIC_EXTINT_3_0_FUNCTION      1
#define AVR32_EIC_EXTINT_0_0_FUNCTION      1
#define AVR32_EIC_EXTINT_2_1_FUNCTION      1
#define AVR32_EIC_EXTINT_1_3_PIN           67
#define AVR32_EIC_EXTINT_1_3_FUNCTION      1
#define AVR32_EIC_EXTINT_3_1_PIN           68
#define AVR32_EIC_EXTINT_3_1_FUNCTION      1
#define AVR32_EIC_EXTINT_4_1_PIN           69
#define AVR32_EIC_EXTINT_4_1_FUNCTION      1
#define AVR32_EIC_EXTINT_7_0_FUNCTION      1
#define AVR32_EIC_EXTINT_5_0_PIN           82
#define AVR32_EIC_EXTINT_5_0_FUNCTION      1
#define AVR32_EIC_EXTINT_5_1_FUNCTION      1
#define AVR32_EIC_EXTINT_6_0_FUNCTION      1
#define AVR32_EIC_EXTINT_7_1_PIN           110
#define AVR32_EIC_EXTINT_7_1_FUNCTION      1
#define AVR32_EIC_EXTINT_0_1_PIN           117
#define AVR32_EIC_EXTINT_0_1_FUNCTION      1
#define AVR32_EIC_EXTINT_8_0_FUNCTION      1
#define AVR32_EIC_EXTINT_6_1_PIN           125
#define AVR32_EIC_EXTINT_6_1_FUNCTION      1
#define AVR32_EIC_EXTINT_3_2_PIN           126
#define AVR32_EIC_EXTINT_3_2_FUNCTION      1
#define AVR32_EIC_EXTINT_2_2_PIN           8
#define AVR32_EIC_EXTINT_2_2_FUNCTION      2
#define AVR32_EIC_EXTINT_0_2_FUNCTION      2
#define AVR32_EIC_EXTINT_8_1_PIN           32
#define AVR32_EIC_EXTINT_8_1_FUNCTION      2
#define AVR32_EIC_EXTINT_4_2_FUNCTION      2
#define AVR32_EIC_EXTINT_0_3_FUNCTION      3
#define AVR32_EIC_SCAN_0_FUNCTION          3
#define AVR32_EIC_SCAN_1_FUNCTION          3
#define AVR32_EIC_SCAN_2_FUNCTION          3
#define AVR32_EIC_SCAN_3_FUNCTION          3
#define AVR32_EIC_SCAN_4_FUNCTION          3
#define AVR32_EIC_SCAN_5_FUNCTION          3
#define AVR32_EIC_SCAN_6_FUNCTION          3
#define AVR32_EIC_SCAN_7_FUNCTION          3

#include "avr32/eic_301.h"


/* FLASHC */

/* FLASHC */ 
#define AVR32_FLASHC_ADDRESS              0xFFFE0000
#define AVR32_FLASHC                      (*((volatile avr32_flashc_t*)AVR32_FLASHC_ADDRESS))
#define AVR32_FLASHC_CALIBRATION_FIRST_WORD_ADDRESS    0x80800200
#define AVR32_FLASHC_CALIBRATION_SECOND_WORD_ADDRESS   0x80800204
#define AVR32_FLASHC_CALIBRATION_THIRD_WORD_ADDRESS    0x80800208
#define AVR32_FLASHC_IRQ                  288
#define AVR32_FLASHC_FLASH_SIZE           524288
#define AVR32_FLASHC_FWS_0_MAX_FREQ       25000000
#define AVR32_FLASHC_FWS_1_MAX_FREQ       66000000
#define AVR32_FLASHC_PAGES_PR_REGION      64
#define AVR32_FLASHC_PAGE_SIZE            512
#define AVR32_FLASHC_USER_PAGE            ((volatile unsigned char*) AVR32_FLASHC_USER_PAGE_ADDRESS)
#define AVR32_FLASHC_USER_PAGE_ADDRESS    0x80800000
#define AVR32_FLASHC_USER_PAGE_SIZE       512
#define AVR32_FLASHC_EXTCLK_PIN           110
#define AVR32_FLASHC_FLASH_OBS_0_PIN      4
#define AVR32_FLASHC_FLASH_OBS_1_PIN      5
#define AVR32_FLASHC_FLASH_OBS_2_PIN      6
#define AVR32_FLASHC_FLASH_OBS_3_PIN      7
#define AVR32_FLASHC_FLASH_OBS_4_PIN      8
#define AVR32_FLASHC_FLASH_OBS_5_PIN      9
#define AVR32_FLASHC_FLASH_OBS_6_PIN      16
#define AVR32_FLASHC_FLASH_OBS_7_PIN      17
#define AVR32_FLASHC_FLASH_OBS_8_PIN      18
#define AVR32_FLASHC_FLASH_OBS_9_PIN      19
#define AVR32_FLASHC_FLASH_OBS_10_PIN     20
#define AVR32_FLASHC_FLASH_OBS_11_PIN     21
#define AVR32_FLASHC_FLASH_OBS_12_PIN     22
#define AVR32_FLASHC_FLASH_OBS_13_PIN     23
#define AVR32_FLASHC_FLASH_OBS_14_PIN     66
#define AVR32_FLASHC_FLASH_OBS_15_PIN     67
#define AVR32_FLASHC_FLASH_OBS_16_PIN     68
#define AVR32_FLASHC_FLASH_OBS_17_PIN     69
#define AVR32_FLASHC_FLASH_OBS_18_PIN     79
#define AVR32_FLASHC_FLASH_OBS_19_PIN     80
#define AVR32_FLASHC_FLASH_OBS_20_PIN     81
#define AVR32_FLASHC_GPF_NUM              32
#define AVR32_FLASHC_LATDEL_PIN           109
#define AVR32_FLASHC_LATDELCLK_PIN        98
#define AVR32_FLASHC_LATDELMATCH_PIN      96
#define AVR32_FLASHC_BODEN                  28
#define AVR32_FLASHC_BODEN_MASK             0x30000000
#define AVR32_FLASHC_BODEN_OFFSET           28
#define AVR32_FLASHC_BODEN_SIZE             2
#define AVR32_FLASHC_BODHYST                27
#define AVR32_FLASHC_BODHYST_MASK           0x08000000
#define AVR32_FLASHC_BODHYST_OFFSET         27
#define AVR32_FLASHC_BODHYST_SIZE           1
#define AVR32_FLASHC_BODLEVEL               23
#define AVR32_FLASHC_BODLEVEL_MASK          0x07800000
#define AVR32_FLASHC_BODLEVEL_OFFSET        23
#define AVR32_FLASHC_BODLEVEL_SIZE          4
#define AVR32_FLASHC_UPROT                  22
#define AVR32_FLASHC_UPROT_MASK             0x00400000
#define AVR32_FLASHC_UPROT_OFFSET           22
#define AVR32_FLASHC_UPROT_SIZE             1
#define AVR32_FLASHC_SSE                    21
#define AVR32_FLASHC_SSE_MASK               0x00200000
#define AVR32_FLASHC_SSE_OFFSET             21
#define AVR32_FLASHC_SSE_SIZE               1
#define AVR32_FLASHC_SSDE                   20
#define AVR32_FLASHC_SSDE_MASK              0x00100000
#define AVR32_FLASHC_SSDE_OFFSET            20
#define AVR32_FLASHC_SSDE_SIZE              1
#define AVR32_FLASHC_EPFL                   16
#define AVR32_FLASHC_EPFL_MASK              0x00010000
#define AVR32_FLASHC_EPFL_OFFSET            16
#define AVR32_FLASHC_EPFL_SIZE              1


#include "avr32/flashc_300.h"


/* FREQM */

/* FREQM */ 
#define AVR32_FREQM_ADDRESS                0xFFFF1800
#define AVR32_FREQM                        (*((volatile avr32_freqm_t*)AVR32_FREQM_ADDRESS))
#define AVR32_FREQM_IRQ                    544
#define AVR32_FREQM_CPU                    0
#define AVR32_FREQM_CRIPEL                 12
#define AVR32_FREQM_CRIPOSC                0
#define AVR32_FREQM_DFLL0                  0
#define AVR32_FREQM_GENCLK0                13
#define AVR32_FREQM_GENCLK1                14
#define AVR32_FREQM_GENCLK10               23
#define AVR32_FREQM_GENCLK2                15
#define AVR32_FREQM_GENCLK3                16
#define AVR32_FREQM_GENCLK4                17
#define AVR32_FREQM_GENCLK5                18
#define AVR32_FREQM_GENCLK6                19
#define AVR32_FREQM_GENCLK7                20
#define AVR32_FREQM_GENCLK8                21
#define AVR32_FREQM_GENCLK9                22
#define AVR32_FREQM_GENCLKDIV0             0
#define AVR32_FREQM_GENCLKDIV1             0
#define AVR32_FREQM_GENCLKDIV10            0
#define AVR32_FREQM_GENCLKDIV2             0
#define AVR32_FREQM_GENCLKDIV3             0
#define AVR32_FREQM_GENCLKDIV4             0
#define AVR32_FREQM_GENCLKDIV5             0
#define AVR32_FREQM_GENCLKDIV6             0
#define AVR32_FREQM_GENCLKDIV7             0
#define AVR32_FREQM_GENCLKDIV8             0
#define AVR32_FREQM_GENCLKDIV9             0
#define AVR32_FREQM_HSB                    1
#define AVR32_FREQM_NUM_CLK                31
#define AVR32_FREQM_OSC0                   5
#define AVR32_FREQM_OSC1                   6
#define AVR32_FREQM_OSC2                   0
#define AVR32_FREQM_OSC3                   0
#define AVR32_FREQM_OSC32                  7
#define AVR32_FREQM_OSC4                   0
#define AVR32_FREQM_PBA                    2
#define AVR32_FREQM_PBB                    3
#define AVR32_FREQM_PBC                    4
#define AVR32_FREQM_PLL0                   10
#define AVR32_FREQM_PLL1                   11
#define AVR32_FREQM_PLL2                   0
#define AVR32_FREQM_PLL3                   0
#define AVR32_FREQM_RC120M                 0
#define AVR32_FREQM_RC120M_AW              0
#define AVR32_FREQM_RC32K                  0
#define AVR32_FREQM_RCOSC                  8
#define AVR32_FREQM_RCOSC8                 9
#define AVR32_FREQM_REFSEL_BITS            3
#define AVR32_FREQM_REF_OSC0               2
#define AVR32_FREQM_REF_OSC1               3
#define AVR32_FREQM_REF_OSC2               0
#define AVR32_FREQM_REF_OSC32              1
#define AVR32_FREQM_REF_RCOSC              0
#define AVR32_FREQM_REF_RCOSC8             4

#include "avr32/freqm_301.h"


/* GPIO */

/* GPIO */ 
#define AVR32_GPIO_ADDRESS                 0xFFFF2000
#define AVR32_GPIO                         (*((volatile avr32_gpio_t*)AVR32_GPIO_ADDRESS))
#define AVR32_GPIO_IRQ_0                  576
#define AVR32_GPIO_IRQ_1                  577
#define AVR32_GPIO_IRQ_2                  578
#define AVR32_GPIO_IRQ_3                  579
#define AVR32_GPIO_IRQ_4                  580
#define AVR32_GPIO_IRQ_5                  581
#define AVR32_GPIO_IRQ_6                  582
#define AVR32_GPIO_IRQ_7                  583
#define AVR32_GPIO_IRQ_8                  584
#define AVR32_GPIO_IRQ_9                  585
#define AVR32_GPIO_IRQ_10                 586
#define AVR32_GPIO_IRQ_11                 587
#define AVR32_GPIO_IRQ_12                 588
#define AVR32_GPIO_IRQ_13                 589
#define AVR32_GPIO_IRQ_14                 590
#define AVR32_GPIO_IRQ_15                 591
#define AVR32_GPIO_EVER_DEFAULT_VAL        "{NUMBER_OF_PINS{1'b0}}"
#define AVR32_GPIO_EVER_IMPLEMENTED        "{NUMBER_OF_PINS{1'b1}}"
#define AVR32_GPIO_IRQ_MSB                 15
#define AVR32_GPIO_MAX_IRQ_MSB             31
#define AVR32_GPIO_PADDR_BITS              11
#define AVR32_GPIO_PINS_MSB                47
#define AVR32_GPIO_IRQS_PER_GROUP          8
#define AVR32_GPIO_NUMBER_OF_PINS          48
#define AVR32_GPIO_PADDR_MSB               10
#define AVR32_GPIO_PDATA_MSB               31
#define AVR32_GPIO_PORT_LENGTH             2

#include "avr32/gpio_210.h"


/* HMATRIX */

/* HMATRIX */ 
#define AVR32_HMATRIX_ADDRESS              0xFFFE2000
#define AVR32_HMATRIX                      (*((volatile avr32_hmatrix_t*)AVR32_HMATRIX_ADDRESS))
#define AVR32_HMATRIX_MASTER_CANIF         8
#define AVR32_HMATRIX_MASTER_CPU_DATA      0
#define AVR32_HMATRIX_MASTER_CPU_INSN      1
#define AVR32_HMATRIX_MASTER_CPU_SAB       2
#define AVR32_HMATRIX_MASTER_MACB_DMA      4
#define AVR32_HMATRIX_MASTER_MDMA_READ     5
#define AVR32_HMATRIX_MASTER_MDMA_WRITE    6
#define AVR32_HMATRIX_MASTER_NUM           9
#define AVR32_HMATRIX_MASTER_PDCA          4
#define AVR32_HMATRIX_MASTER_SAU           3
#define AVR32_HMATRIX_MASTER_USBB_DMA      7
#define AVR32_HMATRIX_SLAVE_EBI            6
#define AVR32_HMATRIX_SLAVE_FLASH          0
#define AVR32_HMATRIX_SLAVE_HSB_RAM        5
#define AVR32_HMATRIX_SLAVE_NUM            9
#define AVR32_HMATRIX_SLAVE_PBA            1
#define AVR32_HMATRIX_SLAVE_PBB            2
#define AVR32_HMATRIX_SLAVE_PBC            3
#define AVR32_HMATRIX_SLAVE_SAU            7
#define AVR32_HMATRIX_SLAVE_SRAM           4
#define AVR32_HMATRIX_SLAVE_USBB_DPRAM     8

#include "avr32/hmatrix_230.h"


/* JTAG */

/* JTAG */ 
#define AVR32_JTAG_TCK_PIN                0
#define AVR32_JTAG_TDI_PIN                1
#define AVR32_JTAG_TDO_PIN                2
#define AVR32_JTAG_TMS_PIN                3



/* MDMA */

/* MDMA */ 
#define AVR32_MDMA_ADDRESS                 0xFFFD1000
#define AVR32_MDMA                         (*((volatile avr32_mdma_t*)AVR32_MDMA_ADDRESS))
#define AVR32_MDMA_IRQ                     192

#include "avr32/mdma_100.h"


/* PDCA */

/* PDCA */ 
#define AVR32_PDCA_ADDRESS                 0xFFFD0000
#define AVR32_PDCA                         (*((volatile avr32_pdca_t*)AVR32_PDCA_ADDRESS))
#define AVR32_PDCA_IRQ_0                  96
#define AVR32_PDCA_IRQ_1                  97
#define AVR32_PDCA_IRQ_2                  98
#define AVR32_PDCA_IRQ_3                  99
#define AVR32_PDCA_IRQ_4                  128
#define AVR32_PDCA_IRQ_5                  129
#define AVR32_PDCA_IRQ_6                  130
#define AVR32_PDCA_IRQ_7                  131
#define AVR32_PDCA_IRQ_8                  160
#define AVR32_PDCA_IRQ_9                  161
#define AVR32_PDCA_IRQ_10                 162
#define AVR32_PDCA_IRQ_11                 163
#define AVR32_PDCA_CHANNEL_LENGTH          12
#define AVR32_PDCA_PID_ADCIFA_CH0_RX       0
#define AVR32_PDCA_PID_ADCIFA_CH1_RX       1
#define AVR32_PDCA_PID_SSC_RX              2
#define AVR32_PDCA_PID_USART0_RX           3
#define AVR32_PDCA_PID_USART1_RX           4
#define AVR32_PDCA_PID_USART2_RX           5
#define AVR32_PDCA_PID_USART3_RX           6
#define AVR32_PDCA_PID_TWIM0_RX            7
#define AVR32_PDCA_PID_TWIM1_RX            8
#define AVR32_PDCA_PID_TWIS0_RX            9
#define AVR32_PDCA_PID_TWIS1_RX            10
#define AVR32_PDCA_PID_SPI0_RX             11
#define AVR32_PDCA_PID_SPI1_RX             12
#define AVR32_PDCA_PID_AW_RX               13
#define AVR32_PDCA_PID_SSC_TX              14
#define AVR32_PDCA_PID_USART0_TX           15
#define AVR32_PDCA_PID_USART1_TX           16
#define AVR32_PDCA_PID_USART2_TX           17
#define AVR32_PDCA_PID_USART3_TX           18
#define AVR32_PDCA_PID_TWIM0_TX            19
#define AVR32_PDCA_PID_TWIM1_TX            20
#define AVR32_PDCA_PID_TWIS0_TX            21
#define AVR32_PDCA_PID_TWIS1_TX            22
#define AVR32_PDCA_PID_SPI0_TX             23
#define AVR32_PDCA_PID_SPI1_TX             24
#define AVR32_PDCA_PID_DACIFB0_CHA_TX      25
#define AVR32_PDCA_PID_DACIFB0_CHB_TX      26
#define AVR32_PDCA_PID_DACIFB1_CHA_TX      27
#define AVR32_PDCA_PID_DACIFB1_CHB_TX      28
#define AVR32_PDCA_PID_PWM_TX              29
#define AVR32_PDCA_PID_AW_TX               30


#include "avr32/pdca_121.h"


/* PEVC */

/* PEVC */ 
#define AVR32_PEVC_ADDRESS                 0xFFFF5C00
#define AVR32_PEVC                         (*((volatile avr32_pevc_t*)AVR32_PEVC_ADDRESS))
#define AVR32_PEVC_OVERRUN_IRQ             1121
#define AVR32_PEVC_TRIGGER_IRQ             1120
#define AVR32_PEVC_EVIN_BITS               34
#define AVR32_PEVC_EVS_BITS                24
#define AVR32_PEVC_GCLK_NUM                7
#define AVR32_PEVC_PADS_BITS               16
#define AVR32_PEVC_TRIGOUT_BITS            22
#define AVR32_PEVC_PAD_EVT_15_0_FUNCTION   0
#define AVR32_PEVC_PAD_EVT_2_0_FUNCTION    0
#define AVR32_PEVC_PAD_EVT_13_0_FUNCTION   0
#define AVR32_PEVC_PAD_EVT_14_0_FUNCTION   0
#define AVR32_PEVC_PAD_EVT_15_1_FUNCTION   0
#define AVR32_PEVC_PAD_EVT_1_0_FUNCTION    1
#define AVR32_PEVC_PAD_EVT_0_0_PIN         1
#define AVR32_PEVC_PAD_EVT_0_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_1_1_PIN         2
#define AVR32_PEVC_PAD_EVT_1_1_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_2_1_PIN         6
#define AVR32_PEVC_PAD_EVT_2_1_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_3_0_PIN         7
#define AVR32_PEVC_PAD_EVT_3_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_13_1_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_14_1_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_4_0_PIN         22
#define AVR32_PEVC_PAD_EVT_4_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_5_0_PIN         23
#define AVR32_PEVC_PAD_EVT_5_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_6_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_7_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_12_0_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_8_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_9_0_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_10_0_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_11_0_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_12_1_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_10_1_PIN        32
#define AVR32_PEVC_PAD_EVT_10_1_FUNCTION   3
#define AVR32_PEVC_PAD_EVT_11_1_PIN        33
#define AVR32_PEVC_PAD_EVT_11_1_FUNCTION   3
#define AVR32_PEVC_PAD_EVT_3_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_4_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_5_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_6_1_PIN         107
#define AVR32_PEVC_PAD_EVT_6_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_7_1_PIN         108
#define AVR32_PEVC_PAD_EVT_7_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_8_1_PIN         109
#define AVR32_PEVC_PAD_EVT_8_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_9_1_PIN         110
#define AVR32_PEVC_PAD_EVT_9_1_FUNCTION    3

#include "avr32/pevc_100.h"


/* PKGANA */

/* PKGANA */
#define AVR32_AC0AN0_0_0_PIN        22
#define AVR32_AC0AN0_0_0_FUNCTION   1
#define AVR32_AC0AN1_0_0_PIN        27
#define AVR32_AC0AN1_0_0_FUNCTION   0
#define AVR32_AC0AP0_0_0_PIN        20
#define AVR32_AC0AP0_0_0_FUNCTION   1
#define AVR32_AC0AP1_0_0_PIN        26
#define AVR32_AC0AP1_0_0_FUNCTION   0
#define AVR32_AC0BN0_0_0_PIN        21
#define AVR32_AC0BN0_0_0_FUNCTION   1
#define AVR32_AC0BN1_0_0_PIN        29
#define AVR32_AC0BN1_0_0_FUNCTION   0
#define AVR32_AC0BP0_0_0_PIN        23
#define AVR32_AC0BP0_0_0_FUNCTION   1
#define AVR32_AC0BP1_0_0_PIN        28
#define AVR32_AC0BP1_0_0_FUNCTION   0
#define AVR32_AC1AN0_0_0_PIN        13
#define AVR32_AC1AN0_0_0_FUNCTION   0
#define AVR32_AC1AN1_0_0_PIN        7
#define AVR32_AC1AN1_0_0_FUNCTION   1
#define AVR32_AC1AP0_0_0_PIN        12
#define AVR32_AC1AP0_0_0_FUNCTION   0
#define AVR32_AC1AP1_0_0_PIN        6
#define AVR32_AC1AP1_0_0_FUNCTION   1
#define AVR32_AC1BN0_0_0_PIN        15
#define AVR32_AC1BN0_0_0_FUNCTION   0
#define AVR32_AC1BN1_0_0_PIN        9
#define AVR32_AC1BN1_0_0_FUNCTION   1
#define AVR32_AC1BP0_0_0_PIN        14
#define AVR32_AC1BP0_0_0_FUNCTION   0
#define AVR32_AC1BP1_0_0_PIN        8
#define AVR32_AC1BP1_0_0_FUNCTION   1
#define AVR32_ADCIN0_0_0_PIN        4
#define AVR32_ADCIN0_0_0_FUNCTION   0
#define AVR32_ADCIN1_0_0_PIN        5
#define AVR32_ADCIN1_0_0_FUNCTION   0
#define AVR32_ADCIN10_0_0_PIN       21
#define AVR32_ADCIN10_0_0_FUNCTION  0
#define AVR32_ADCIN11_0_0_PIN       22
#define AVR32_ADCIN11_0_0_FUNCTION  0
#define AVR32_ADCIN12_0_0_PIN       23
#define AVR32_ADCIN12_0_0_FUNCTION  0
#define AVR32_ADCIN13_0_0_PIN       24
#define AVR32_ADCIN13_0_0_FUNCTION  0
#define AVR32_ADCIN14_0_0_PIN       25
#define AVR32_ADCIN14_0_0_FUNCTION  0
#define AVR32_ADCIN15_0_0_PIN       13
#define AVR32_ADCIN15_0_0_FUNCTION  2
#define AVR32_ADCIN2_0_0_PIN        6
#define AVR32_ADCIN2_0_0_FUNCTION   0
#define AVR32_ADCIN3_0_0_PIN        7
#define AVR32_ADCIN3_0_0_FUNCTION   0
#define AVR32_ADCIN4_0_0_PIN        8
#define AVR32_ADCIN4_0_0_FUNCTION   0
#define AVR32_ADCIN5_0_0_PIN        9
#define AVR32_ADCIN5_0_0_FUNCTION   0
#define AVR32_ADCIN6_0_0_PIN        10
#define AVR32_ADCIN6_0_0_FUNCTION   0
#define AVR32_ADCIN7_0_0_PIN        11
#define AVR32_ADCIN7_0_0_FUNCTION   0
#define AVR32_ADCIN8_0_0_PIN        19
#define AVR32_ADCIN8_0_0_FUNCTION   0
#define AVR32_ADCIN9_0_0_PIN        20
#define AVR32_ADCIN9_0_0_FUNCTION   0
#define AVR32_ADCREF0_0_0_PIN       16
#define AVR32_ADCREF0_0_0_FUNCTION  0
#define AVR32_ADCREF1_0_0_PIN       11
#define AVR32_ADCREF1_0_0_FUNCTION  1
#define AVR32_ADCREFN_0_0_PIN       18
#define AVR32_ADCREFN_0_0_FUNCTION  0
#define AVR32_ADCREFP_0_0_PIN       17
#define AVR32_ADCREFP_0_0_FUNCTION  0
#define AVR32_DAC0A_0_0_PIN         20
#define AVR32_DAC0A_0_0_FUNCTION    2
#define AVR32_DAC0B_0_0_PIN         21
#define AVR32_DAC0B_0_0_FUNCTION    2
#define AVR32_DAC1A_0_0_PIN         12
#define AVR32_DAC1A_0_0_FUNCTION    2
#define AVR32_DAC1B_0_0_PIN         15
#define AVR32_DAC1B_0_0_FUNCTION    2
#define AVR32_DACREF_0_0_PIN        16
#define AVR32_DACREF_0_0_FUNCTION   2


/* PM */

/* PM */ 
#define AVR32_PM_ADDRESS                   0xFFFF0400
#define AVR32_PM                           (*((volatile avr32_pm_t*)AVR32_PM_ADDRESS))
#define AVR32_PM_IRQ                       384
#define AVR32_PM_CPU_MAX_FREQ              66000000
#define AVR32_PM_HSB_MAX_FREQ              66000000
#define AVR32_PM_PBA_MAX_FREQ              66000000
#define AVR32_PM_PBB_MAX_FREQ              66000000
#define AVR32_PM_CLK_AHB_PEVC              1
#define AVR32_PM_CLK_APB_NUM               3
#define AVR32_PM_RSTM_N_PIN               126
#define AVR32_PM_TEST_RESET_IN_PIN        124
#define AVR32_PM_TEST_RESET_OEN_PIN       125
#define AVR32_PM_TEST_RESET_OUT_PIN       126

#include "avr32/pm_410.h"


/* PULLUP */

/* PULLUP */ 
#define AVR32_PULLUP_LPC_PULLUP_PIN       85
#define AVR32_PULLUP_LPC_PULLUP_PIN       86



/* PWM */

/* PWM */ 
#define AVR32_PWM_ADDRESS                  0xFFFF4C00
#define AVR32_PWM                          (*((volatile avr32_pwm_t*)AVR32_PWM_ADDRESS))
#define AVR32_PWM_IRQ                      960
#define AVR32_PWM_CHANNEL_NUM              4
#define AVR32_PWM_CMP_NUM                  8
#define AVR32_PWM_EVT_NUM                  2
#define AVR32_PWM_EXT_FAULT_NUM            2
#define AVR32_PWM_FAULT_NUM                5
#define AVR32_PWM_GCLK_NUM                 4
#define AVR32_PWM_PDCA_ID_TX               29
#define AVR32_PWM_TRIGGER_NUM              2
#define AVR32_PWM_EXT_FAULTS_0_0_PIN       85
#define AVR32_PWM_EXT_FAULTS_0_0_FUNCTION  0
#define AVR32_PWM_EXT_FAULTS_1_0_PIN       86
#define AVR32_PWM_EXT_FAULTS_1_0_FUNCTION  0
#define AVR32_PWM_EXT_FAULTS_0_1_FUNCTION  2
#define AVR32_PWM_EXT_FAULTS_1_1_FUNCTION  2
#define AVR32_PWM_EXT_FAULTS_0_2_PIN       85
#define AVR32_PWM_EXT_FAULTS_1_2_PIN       86
#define AVR32_PWM_PWMH_3_0_FUNCTION        0
#define AVR32_PWM_PWMH_2_0_FUNCTION        0
#define AVR32_PWM_PWMH_1_0_PIN             79
#define AVR32_PWM_PWMH_1_0_FUNCTION        0
#define AVR32_PWM_PWMH_0_0_PIN             81
#define AVR32_PWM_PWMH_0_0_FUNCTION        0
#define AVR32_PWM_PWMH_2_1_PIN             84
#define AVR32_PWM_PWMH_2_1_FUNCTION        0
#define AVR32_PWM_PWMH_0_1_FUNCTION        2
#define AVR32_PWM_PWMH_1_1_FUNCTION        2
#define AVR32_PWM_PWMH_2_2_FUNCTION        2
#define AVR32_PWM_PWMH_3_1_FUNCTION        2
#define AVR32_PWM_PWMH_1_2_PIN             79
#define AVR32_PWM_PWMH_0_2_PIN             81
#define AVR32_PWM_PWMH_2_3_PIN             84
#define AVR32_PWM_PWMH_1_3_PIN             79
#define AVR32_PWM_PWMH_0_3_PIN             81
#define AVR32_PWM_PWMH_2_4_PIN             84
#define AVR32_PWM_PWML_3_0_FUNCTION        0
#define AVR32_PWM_PWML_2_0_FUNCTION        0
#define AVR32_PWM_PWML_1_0_PIN             80
#define AVR32_PWM_PWML_1_0_FUNCTION        0
#define AVR32_PWM_PWML_0_0_PIN             82
#define AVR32_PWM_PWML_0_0_FUNCTION        0
#define AVR32_PWM_PWML_2_1_PIN             83
#define AVR32_PWM_PWML_2_1_FUNCTION        0
#define AVR32_PWM_PWML_0_1_FUNCTION        2
#define AVR32_PWM_PWML_1_1_FUNCTION        2
#define AVR32_PWM_PWML_2_2_FUNCTION        2
#define AVR32_PWM_PWML_3_1_FUNCTION        2
#define AVR32_PWM_PWML_1_2_PIN             80
#define AVR32_PWM_PWML_0_2_PIN             82
#define AVR32_PWM_PWML_2_3_PIN             83
#define AVR32_PWM_PWML_1_3_PIN             80
#define AVR32_PWM_PWML_0_3_PIN             82
#define AVR32_PWM_PWML_2_4_PIN             83

#include "avr32/pwm_410.h"


/* QDEC */

/* QDEC0 */ 
#define AVR32_QDEC0_ADDRESS                0xFFFF5000
#define AVR32_QDEC0                        (*((volatile avr32_qdec_t*)AVR32_QDEC0_ADDRESS))
#define AVR32_QDEC0_IRQ                    992
#define AVR32_QDEC0_GCLK_NUM               5
#define AVR32_QDEC0_QEPA_0_0_PIN           59
#define AVR32_QDEC0_QEPA_0_0_FUNCTION      0
#define AVR32_QDEC0_QEPA_0_1_PIN           98
#define AVR32_QDEC0_QEPA_0_1_FUNCTION      3
#define AVR32_QDEC0_QEPA_0_2_PIN           105
#define AVR32_QDEC0_QEPA_0_2_FUNCTION      3
#define AVR32_QDEC0_QEPB_0_0_PIN           60
#define AVR32_QDEC0_QEPB_0_0_FUNCTION      0
#define AVR32_QDEC0_QEPB_0_1_PIN           99
#define AVR32_QDEC0_QEPB_0_1_FUNCTION      3
#define AVR32_QDEC0_QEPB_0_2_PIN           106
#define AVR32_QDEC0_QEPB_0_2_FUNCTION      3
#define AVR32_QDEC0_QEPI_0_0_PIN           61
#define AVR32_QDEC0_QEPI_0_0_FUNCTION      0
#define AVR32_QDEC0_QEPI_0_1_PIN           96
#define AVR32_QDEC0_QEPI_0_1_FUNCTION      3
#define AVR32_QDEC0_QEPI_0_2_PIN           103
#define AVR32_QDEC0_QEPI_0_2_FUNCTION      3

#include "avr32/qdec_100.h"


/* SAU */

/* SAU */ 
#define AVR32_SAU_ADDRESS                  0xFFFE2400
#define AVR32_SAU                          (*((volatile avr32_sau_t*)AVR32_SAU_ADDRESS))
#define AVR32_SAU_HSB_ADDRESS              0x90000000
#define AVR32_SAU_HSB_SIZE                 0x400
#define AVR32_SAU_HSB                      (*((volatile avr32_sau_hsb_t*)AVR32_SAU_HSB_ADDRESS))
#define AVR32_SAU_IRQ                      64
#define AVR32_SAU_CHANNELS                 63

#include "avr32/sau_100.h"


/* SCAN */

/* SCAN */ 
#define AVR32_SCAN_CLOCKS_0_PIN            0
#define AVR32_SCAN_CLOCKS_4_PIN            69
#define AVR32_SCAN_CLOCKS_1_PIN            83
#define AVR32_SCAN_CLOCKS_2_PIN            84
#define AVR32_SCAN_CLOCKS_5_PIN            96
#define AVR32_SCAN_CLOCKS_6_PIN            97
#define AVR32_SCAN_CLOCKS_7_PIN            98
#define AVR32_SCAN_CLOCKS_8_PIN            99
#define AVR32_SCAN_CLOCKS_9_PIN            107
#define AVR32_SCAN_CLOCKS_10_PIN           108
#define AVR32_SCAN_CLOCKS_11_PIN           109
#define AVR32_SCAN_CLOCKS_3_PIN            110
#define AVR32_SCAN_ENABLE_FROM_PAD_PIN      82
#define AVR32_SCAN_IN_0_PIN                1
#define AVR32_SCAN_IN_1_PIN                2
#define AVR32_SCAN_IN_2_PIN                3
#define AVR32_SCAN_IN_3_PIN                4
#define AVR32_SCAN_IN_4_PIN                5
#define AVR32_SCAN_IN_5_PIN                6
#define AVR32_SCAN_IN_6_PIN                7
#define AVR32_SCAN_IN_7_PIN                8
#define AVR32_SCAN_IN_8_PIN                9
#define AVR32_SCAN_IN_9_PIN                16
#define AVR32_SCAN_IN_10_PIN               17
#define AVR32_SCAN_IN_11_PIN               18
#define AVR32_SCAN_IN_12_PIN               19
#define AVR32_SCAN_IN_13_PIN               20
#define AVR32_SCAN_IN_14_PIN               117
#define AVR32_SCAN_OCC_MODE_0_PIN          125
#define AVR32_SCAN_OUT_0_PIN               21
#define AVR32_SCAN_OUT_1_PIN               22
#define AVR32_SCAN_OUT_2_PIN               23
#define AVR32_SCAN_OUT_3_PIN               32
#define AVR32_SCAN_OUT_4_PIN               33
#define AVR32_SCAN_OUT_5_PIN               62
#define AVR32_SCAN_OUT_6_PIN               63
#define AVR32_SCAN_OUT_7_PIN               66
#define AVR32_SCAN_OUT_8_PIN               67
#define AVR32_SCAN_OUT_9_PIN               68
#define AVR32_SCAN_OUT_10_PIN              79
#define AVR32_SCAN_OUT_11_PIN              80
#define AVR32_SCAN_OUT_12_PIN              81
#define AVR32_SCAN_OUT_13_PIN              123
#define AVR32_SCAN_OUT_14_PIN              124



/* SCIF */

/* SCIF */ 
#define AVR32_SCIF_ADDRESS                 0xFFFF0800
#define AVR32_SCIF                         (*((volatile avr32_scif_t*)AVR32_SCIF_ADDRESS))
#define AVR32_SCIF_IRQ                     416
#define AVR32_SCIF_GCLK_EXT_NUM            2
#define AVR32_SCIF_GCLK_NUM                11
#define AVR32_SCIF_GCLK_PEVC_NUM           2
#define AVR32_SCIF_GC_DIV_CLOCK            1
#define AVR32_SCIF_GC_NO_DIV_CLOCK         0
#define AVR32_SCIF_GC_USES_CLK_32          1
#define AVR32_SCIF_GC_USES_CLK_CPU         7
#define AVR32_SCIF_GC_USES_CLK_HSB         8
#define AVR32_SCIF_GC_USES_CLK_PBA         9
#define AVR32_SCIF_GC_USES_CLK_PBB         10
#define AVR32_SCIF_GC_USES_CLK_PBC         11
#define AVR32_SCIF_GC_USES_CLK_PBD         8
#define AVR32_SCIF_GC_USES_CLK_SLOW        0
#define AVR32_SCIF_GC_USES_OSC0            3
#define AVR32_SCIF_GC_USES_OSC1            4
#define AVR32_SCIF_GC_USES_OSC2            4
#define AVR32_SCIF_GC_USES_OSC3            5
#define AVR32_SCIF_GC_USES_OSC4            6
#define AVR32_SCIF_GC_USES_PLL0            5
#define AVR32_SCIF_GC_USES_PLL1            6
#define AVR32_SCIF_GC_USES_PLL2            6
#define AVR32_SCIF_GC_USES_PLL3            7
#define AVR32_SCIF_GC_USES_PLL4            8
#define AVR32_SCIF_GC_USES_RCOSC8          2
#define AVR32_SCIF_GPLP_NUM                2
#define AVR32_SCIF_OSC_NUM                 2
#define AVR32_SCIF_PLL_MSB                 1
#define AVR32_SCIF_PLL_NUM                 2
#define AVR32_SCIF_GCLK_0_0_PIN            2
#define AVR32_SCIF_GCLK_0_0_FUNCTION       0
#define AVR32_SCIF_GCLK_1_0_PIN            3
#define AVR32_SCIF_GCLK_1_0_FUNCTION       0
#define AVR32_SCIF_GCLK_0_1_PIN            83
#define AVR32_SCIF_GCLK_0_1_FUNCTION       1
#define AVR32_SCIF_GCLK_1_1_PIN            84
#define AVR32_SCIF_GCLK_1_1_FUNCTION       1
#define AVR32_SCIF_GCLK_0_2_FUNCTION       3
#define AVR32_SCIF_GCLK_1_2_FUNCTION       3
#define AVR32_SCIF_GCLK_0_3_FUNCTION       3
#define AVR32_SCIF_GCLK_1_3_FUNCTION       3
#define AVR32_SCIF_GCLK_0_4_FUNCTION       3
#define AVR32_SCIF_XIN0_PIN               62
#define AVR32_SCIF_XIN32_PIN              32
#define AVR32_SCIF_XOUT0_PIN              63
#define AVR32_SCIF_XOUT32_PIN             33

#include "avr32/scif_101.h"


/* SPI */

/* SPI0 */ 
#define AVR32_SPI0_ADDRESS                 0xFFFD1800
#define AVR32_SPI0                         (*((volatile avr32_spi_t*)AVR32_SPI0_ADDRESS))
#define AVR32_SPI0_IRQ                     736
#define AVR32_SPI0_CS_MSB                  3
#define AVR32_SPI0_PDCA_ID_RX              11
#define AVR32_SPI0_PDCA_ID_TX              23
#define AVR32_SPI0_MISO_0_0_PIN            97
#define AVR32_SPI0_MISO_0_0_FUNCTION       0
#define AVR32_SPI0_MISO_0_1_PIN            101
#define AVR32_SPI0_MISO_0_1_FUNCTION       0
#define AVR32_SPI0_MISO_0_2_PIN            43
#define AVR32_SPI0_MISO_0_2_FUNCTION       1
#define AVR32_SPI0_MOSI_0_0_PIN            96
#define AVR32_SPI0_MOSI_0_0_FUNCTION       0
#define AVR32_SPI0_MOSI_0_1_PIN            100
#define AVR32_SPI0_MOSI_0_1_FUNCTION       0
#define AVR32_SPI0_MOSI_0_2_PIN            42
#define AVR32_SPI0_MOSI_0_2_FUNCTION       1
#define AVR32_SPI0_NPCS_1_0_FUNCTION       0
#define AVR32_SPI0_NPCS_2_0_FUNCTION       0
#define AVR32_SPI0_NPCS_3_0_FUNCTION       0
#define AVR32_SPI0_NPCS_0_0_PIN            99
#define AVR32_SPI0_NPCS_0_0_FUNCTION       0
#define AVR32_SPI0_NPCS_0_1_FUNCTION       1
#define AVR32_SPI0_NPCS_1_1_FUNCTION       1
#define AVR32_SPI0_NPCS_0_2_FUNCTION       1
#define AVR32_SPI0_NPCS_1_2_FUNCTION       1
#define AVR32_SPI0_NPCS_2_1_FUNCTION       1
#define AVR32_SPI0_NPCS_3_1_FUNCTION       1
#define AVR32_SPI0_NPCS_0_3_FUNCTION       1
#define AVR32_SPI0_NPCS_1_3_FUNCTION       1
#define AVR32_SPI0_NPCS_2_2_FUNCTION       1
#define AVR32_SPI0_NPCS_3_2_PIN            66
#define AVR32_SPI0_NPCS_3_2_FUNCTION       1
#define AVR32_SPI0_NPCS_0_4_PIN            79
#define AVR32_SPI0_NPCS_0_4_FUNCTION       1
#define AVR32_SPI0_NPCS_1_4_PIN            80
#define AVR32_SPI0_NPCS_1_4_FUNCTION       1
#define AVR32_SPI0_NPCS_2_3_PIN            81
#define AVR32_SPI0_NPCS_2_3_FUNCTION       1
#define AVR32_SPI0_SCK_0_0_PIN             98
#define AVR32_SPI0_SCK_0_0_FUNCTION        0
#define AVR32_SPI0_SCK_0_1_PIN             102
#define AVR32_SPI0_SCK_0_1_FUNCTION        0
#define AVR32_SPI0_SCK_0_2_PIN             44
#define AVR32_SPI0_SCK_0_2_FUNCTION        1


#include "avr32/spi_211.h"


/* SSC */

/* SSC */ 
#define AVR32_SSC_ADDRESS                  0xFFFF4800
#define AVR32_SSC                          (*((volatile avr32_ssc_t*)AVR32_SSC_ADDRESS))
#define AVR32_SSC_IRQ                      928
#define AVR32_SSC_PDCA_ID_RX               2
#define AVR32_SSC_PDCA_ID_TX               14
#define AVR32_SSC_RX_CLOCK_0_0_PIN         54
#define AVR32_SSC_RX_CLOCK_0_0_FUNCTION    2
#define AVR32_SSC_RX_CLOCK_0_1_PIN         84
#define AVR32_SSC_RX_CLOCK_0_1_FUNCTION    3
#define AVR32_SSC_RX_DATA_0_0_PIN          52
#define AVR32_SSC_RX_DATA_0_0_FUNCTION     2
#define AVR32_SSC_RX_DATA_0_1_PIN          82
#define AVR32_SSC_RX_DATA_0_1_FUNCTION     3
#define AVR32_SSC_RX_FRAME_SYNC_0_0_PIN    56
#define AVR32_SSC_RX_FRAME_SYNC_0_0_FUNCTION 2
#define AVR32_SSC_RX_FRAME_SYNC_0_1_PIN    86
#define AVR32_SSC_RX_FRAME_SYNC_0_1_FUNCTION 3
#define AVR32_SSC_TX_CLOCK_0_0_PIN         53
#define AVR32_SSC_TX_CLOCK_0_0_FUNCTION    2
#define AVR32_SSC_TX_CLOCK_0_1_PIN         83
#define AVR32_SSC_TX_CLOCK_0_1_FUNCTION    3
#define AVR32_SSC_TX_DATA_0_0_PIN          51
#define AVR32_SSC_TX_DATA_0_0_FUNCTION     2
#define AVR32_SSC_TX_DATA_0_1_PIN          81
#define AVR32_SSC_TX_DATA_0_1_FUNCTION     3
#define AVR32_SSC_TX_FRAME_SYNC_0_0_PIN    55
#define AVR32_SSC_TX_FRAME_SYNC_0_0_FUNCTION 2
#define AVR32_SSC_TX_FRAME_SYNC_0_1_PIN    85
#define AVR32_SSC_TX_FRAME_SYNC_0_1_FUNCTION 3

#include "avr32/ssc_330.h"


/* TC */

/* TC0 */ 
#define AVR32_TC0_ADDRESS                  0xFFFD2000
#define AVR32_TC0                          (*((volatile avr32_tc_t*)AVR32_TC0_ADDRESS))
#define AVR32_TC0_IRQ0                     1056
#define AVR32_TC0_IRQ1                     1057
#define AVR32_TC0_IRQ2                     1058
#define AVR32_TC0_CLK_DIV1                 clk_32
#define AVR32_TC0_CLK_DIV2                 2
#define AVR32_TC0_CLK_DIV3                 8
#define AVR32_TC0_CLK_DIV4                 32
#define AVR32_TC0_CLK_DIV5                 128
#define AVR32_TC0_A0_0_0_PIN               51
#define AVR32_TC0_A0_0_0_FUNCTION          0
#define AVR32_TC0_A0_0_1_PIN               111
#define AVR32_TC0_A0_0_1_FUNCTION          0
#define AVR32_TC0_A0_0_2_PIN               123
#define AVR32_TC0_A0_0_2_FUNCTION          3
#define AVR32_TC0_A1_0_0_PIN               54
#define AVR32_TC0_A1_0_0_FUNCTION          0
#define AVR32_TC0_A1_0_1_PIN               113
#define AVR32_TC0_A1_0_1_FUNCTION          0
#define AVR32_TC0_A1_0_2_PIN               126
#define AVR32_TC0_A1_0_2_FUNCTION          3
#define AVR32_TC0_A2_0_0_PIN               57
#define AVR32_TC0_A2_0_0_FUNCTION          0
#define AVR32_TC0_A2_0_1_PIN               115
#define AVR32_TC0_A2_0_1_FUNCTION          0
#define AVR32_TC0_A2_0_2_PIN               118
#define AVR32_TC0_A2_0_2_FUNCTION          1
#define AVR32_TC0_A2_0_3_PIN               69
#define AVR32_TC0_A2_0_3_FUNCTION          3
#define AVR32_TC0_B0_0_0_PIN               52
#define AVR32_TC0_B0_0_0_FUNCTION          0
#define AVR32_TC0_B0_0_1_PIN               112
#define AVR32_TC0_B0_0_1_FUNCTION          0
#define AVR32_TC0_B0_0_2_PIN               124
#define AVR32_TC0_B0_0_2_FUNCTION          3
#define AVR32_TC0_B1_0_0_PIN               55
#define AVR32_TC0_B1_0_0_FUNCTION          0
#define AVR32_TC0_B1_0_1_PIN               114
#define AVR32_TC0_B1_0_1_FUNCTION          0
#define AVR32_TC0_B1_0_2_PIN               68
#define AVR32_TC0_B1_0_2_FUNCTION          3
#define AVR32_TC0_B2_0_0_PIN               58
#define AVR32_TC0_B2_0_0_FUNCTION          0
#define AVR32_TC0_B2_0_1_PIN               116
#define AVR32_TC0_B2_0_1_FUNCTION          0
#define AVR32_TC0_B2_0_2_PIN               99
#define AVR32_TC0_B2_0_2_FUNCTION          1
#define AVR32_TC0_B2_0_3_PIN               71
#define AVR32_TC0_B2_0_3_FUNCTION          3
#define AVR32_TC0_CLK0_0_0_PIN             56
#define AVR32_TC0_CLK0_0_0_FUNCTION        0
#define AVR32_TC0_CLK0_0_1_PIN             121
#define AVR32_TC0_CLK0_0_1_FUNCTION        0
#define AVR32_TC0_CLK0_0_2_PIN             75
#define AVR32_TC0_CLK0_0_2_FUNCTION        3
#define AVR32_TC0_CLK0_0_3_PIN             125
#define AVR32_TC0_CLK0_0_3_FUNCTION        3
#define AVR32_TC0_CLK1_0_0_PIN             53
#define AVR32_TC0_CLK1_0_0_FUNCTION        0
#define AVR32_TC0_CLK1_0_1_PIN             122
#define AVR32_TC0_CLK1_0_1_FUNCTION        0
#define AVR32_TC0_CLK1_0_2_PIN             97
#define AVR32_TC0_CLK1_0_2_FUNCTION        3
#define AVR32_TC0_CLK2_0_0_PIN             50
#define AVR32_TC0_CLK2_0_0_FUNCTION        0
#define AVR32_TC0_CLK2_0_1_PIN             98
#define AVR32_TC0_CLK2_0_1_FUNCTION        1
#define AVR32_TC0_CLK2_0_2_PIN             70
#define AVR32_TC0_CLK2_0_2_FUNCTION        3

#include "avr32/tc_2231.h"


/* TWIM */

/* TWIM0 */ 
#define AVR32_TWIM0_ADDRESS                0xFFFF3800
#define AVR32_TWIM0                        (*((volatile avr32_twim_t*)AVR32_TWIM0_ADDRESS))
#define AVR32_TWIM0_IRQ                    800
#define AVR32_TWIM0_PDCA_ID_RX             7
#define AVR32_TWIM0_PDCA_ID_TX             19


/* TWIM1 */ 
#define AVR32_TWIM1_ADDRESS                0xFFFF3C00
#define AVR32_TWIM1                        (*((volatile avr32_twim_t*)AVR32_TWIM1_ADDRESS))
#define AVR32_TWIM1_IRQ                    832
#define AVR32_TWIM1_PDCA_ID_RX             8
#define AVR32_TWIM1_PDCA_ID_TX             20

#include "avr32/twim_101.h"


/* TWIMS */

/* TWIMS0 */
#define AVR32_TWIMS0_TWCK_0_0_PIN          67
#define AVR32_TWIMS0_TWCK_0_0_FUNCTION     0
#define AVR32_TWIMS0_TWCK_0_1_PIN          67
#define AVR32_TWIMS0_TWCK_INPUT_TEST_0_0_PIN 79
#define AVR32_TWIMS0_TWCK_OUTPUT_TEST_0_0_PIN 80
#define AVR32_TWIMS0_TWD_0_0_PIN           66
#define AVR32_TWIMS0_TWD_0_0_FUNCTION      0
#define AVR32_TWIMS0_TWD_0_1_PIN           66
#define AVR32_TWIMS0_TWD_INPUT_TEST_0_0_PIN 81
#define AVR32_TWIMS0_TWD_OUTPUT_TEST_0_0_PIN 82


/* TWIMS1 */
#define AVR32_TWIMS1_TWCK_0_0_PIN          69
#define AVR32_TWIMS1_TWCK_0_0_FUNCTION     0
#define AVR32_TWIMS1_TWCK_0_1_PIN          69
#define AVR32_TWIMS1_TWCK_INPUT_TEST_0_0_PIN 83
#define AVR32_TWIMS1_TWCK_OUTPUT_TEST_0_0_PIN 84
#define AVR32_TWIMS1_TWD_0_0_PIN           68
#define AVR32_TWIMS1_TWD_0_0_FUNCTION      0
#define AVR32_TWIMS1_TWD_0_1_PIN           68
#define AVR32_TWIMS1_TWD_INPUT_TEST_0_0_PIN 96
#define AVR32_TWIMS1_TWD_OUTPUT_TEST_0_0_PIN 97



/* TWIS */

/* TWIS0 */ 
#define AVR32_TWIS0_ADDRESS                0xFFFF4000
#define AVR32_TWIS0                        (*((volatile avr32_twis_t*)AVR32_TWIS0_ADDRESS))
#define AVR32_TWIS0_IRQ                    864
#define AVR32_TWIS0_PDCA_ID_RX             9
#define AVR32_TWIS0_PDCA_ID_TX             21


/* TWIS1 */ 
#define AVR32_TWIS1_ADDRESS                0xFFFF4400
#define AVR32_TWIS1                        (*((volatile avr32_twis_t*)AVR32_TWIS1_ADDRESS))
#define AVR32_TWIS1_IRQ                    896
#define AVR32_TWIS1_PDCA_ID_RX             10
#define AVR32_TWIS1_PDCA_ID_TX             22

#include "avr32/twis_112.h"


/* USART */

/* USART0 */ 
#define AVR32_USART0_ADDRESS               0xFFFF2800
#define AVR32_USART0                       (*((volatile avr32_usart_t*)AVR32_USART0_ADDRESS))
#define AVR32_USART0_IRQ                   608
#define AVR32_USART0_CLK_DIV               8
#define AVR32_USART0_PDCA_ID_RX            3
#define AVR32_USART0_PDCA_ID_TX            15
#define AVR32_USART0_CLK_0_0_PIN           32
#define AVR32_USART0_CLK_0_0_FUNCTION      0
#define AVR32_USART0_CLK_0_1_PIN           78
#define AVR32_USART0_CLK_0_1_FUNCTION      1
#define AVR32_USART0_CLK_0_2_PIN           125
#define AVR32_USART0_CLK_0_2_FUNCTION      2
#define AVR32_USART0_CTS_0_0_PIN           125
#define AVR32_USART0_CTS_0_0_FUNCTION      0
#define AVR32_USART0_CTS_0_1_PIN           78
#define AVR32_USART0_CTS_0_1_FUNCTION      3
#define AVR32_USART0_RTS_0_0_PIN           126
#define AVR32_USART0_RTS_0_0_FUNCTION      0
#define AVR32_USART0_RTS_0_1_PIN           77
#define AVR32_USART0_RTS_0_1_FUNCTION      3
#define AVR32_USART0_RXD_0_0_PIN           124
#define AVR32_USART0_RXD_0_0_FUNCTION      0
#define AVR32_USART0_RXD_0_1_PIN           79
#define AVR32_USART0_RXD_0_1_FUNCTION      3
#define AVR32_USART0_TXD_0_0_PIN           123
#define AVR32_USART0_TXD_0_0_FUNCTION      0
#define AVR32_USART0_TXD_0_1_PIN           80
#define AVR32_USART0_TXD_0_1_FUNCTION      3


/* USART1 */ 
#define AVR32_USART1_ADDRESS               0xFFFD1400
#define AVR32_USART1                       (*((volatile avr32_usart_t*)AVR32_USART1_ADDRESS))
#define AVR32_USART1_IRQ                   640
#define AVR32_USART1_CLK_DIV               8
#define AVR32_USART1_PDCA_ID_RX            4
#define AVR32_USART1_PDCA_ID_TX            16
#define AVR32_USART1_CLK_0_0_PIN           47
#define AVR32_USART1_CLK_0_0_FUNCTION      1
#define AVR32_USART1_CLK_0_1_PIN           109
#define AVR32_USART1_CLK_0_1_FUNCTION      1
#define AVR32_USART1_CLK_0_2_PIN           38
#define AVR32_USART1_CLK_0_2_FUNCTION      3
#define AVR32_USART1_CTS_0_0_PIN           47
#define AVR32_USART1_CTS_0_0_FUNCTION      0
#define AVR32_USART1_CTS_0_1_PIN           109
#define AVR32_USART1_CTS_0_1_FUNCTION      0
#define AVR32_USART1_DCD_0_0_PIN           44
#define AVR32_USART1_DCD_0_0_FUNCTION      0
#define AVR32_USART1_DCD_0_1_PIN           105
#define AVR32_USART1_DCD_0_1_FUNCTION      0
#define AVR32_USART1_DSR_0_0_PIN           43
#define AVR32_USART1_DSR_0_0_FUNCTION      0
#define AVR32_USART1_DSR_0_1_PIN           104
#define AVR32_USART1_DSR_0_1_FUNCTION      0
#define AVR32_USART1_DTR_0_0_PIN           42
#define AVR32_USART1_DTR_0_0_FUNCTION      0
#define AVR32_USART1_DTR_0_1_PIN           103
#define AVR32_USART1_DTR_0_1_FUNCTION      0
#define AVR32_USART1_RI_0_0_PIN            45
#define AVR32_USART1_RI_0_0_FUNCTION       0
#define AVR32_USART1_RI_0_1_PIN            106
#define AVR32_USART1_RI_0_1_FUNCTION       0
#define AVR32_USART1_RTS_0_0_PIN           46
#define AVR32_USART1_RTS_0_0_FUNCTION      0
#define AVR32_USART1_RTS_0_1_PIN           110
#define AVR32_USART1_RTS_0_1_FUNCTION      0
#define AVR32_USART1_RXD_0_0_PIN           48
#define AVR32_USART1_RXD_0_0_FUNCTION      0
#define AVR32_USART1_RXD_0_1_PIN           108
#define AVR32_USART1_RXD_0_1_FUNCTION      0
#define AVR32_USART1_TXD_0_0_PIN           49
#define AVR32_USART1_TXD_0_0_FUNCTION      0
#define AVR32_USART1_TXD_0_1_PIN           107
#define AVR32_USART1_TXD_0_1_FUNCTION      0


/* USART2 */ 
#define AVR32_USART2_ADDRESS               0xFFFF2C00
#define AVR32_USART2                       (*((volatile avr32_usart_t*)AVR32_USART2_ADDRESS))
#define AVR32_USART2_IRQ                   672
#define AVR32_USART2_CLK_DIV               8
#define AVR32_USART2_PDCA_ID_RX            5
#define AVR32_USART2_PDCA_ID_TX            17
#define AVR32_USART2_CLK_0_0_PIN           70
#define AVR32_USART2_CLK_0_0_FUNCTION      1
#define AVR32_USART2_CLK_0_1_PIN           76
#define AVR32_USART2_CLK_0_1_FUNCTION      3
#define AVR32_USART2_CTS_0_0_PIN           64
#define AVR32_USART2_CTS_0_0_FUNCTION      2
#define AVR32_USART2_CTS_0_1_PIN           70
#define AVR32_USART2_CTS_0_1_FUNCTION      2
#define AVR32_USART2_RTS_0_0_PIN           65
#define AVR32_USART2_RTS_0_0_FUNCTION      2
#define AVR32_USART2_RTS_0_1_PIN           71
#define AVR32_USART2_RTS_0_1_FUNCTION      2
#define AVR32_USART2_RXD_0_0_PIN           66
#define AVR32_USART2_RXD_0_0_FUNCTION      2
#define AVR32_USART2_RXD_0_1_PIN           69
#define AVR32_USART2_RXD_0_1_FUNCTION      2
#define AVR32_USART2_TXD_0_0_PIN           67
#define AVR32_USART2_TXD_0_0_FUNCTION      2
#define AVR32_USART2_TXD_0_1_PIN           68
#define AVR32_USART2_TXD_0_1_FUNCTION      2

#include "avr32/usart_440.h"


/* USBB */

/* USBB */ 
#define AVR32_USBB_ADDRESS                  0xFFFE1000
#define AVR32_USBB                          (*((volatile avr32_usbb_t*)AVR32_USBB_ADDRESS))
#define AVR32_USBB_HSB_ADDRESS              0xFF000000
#define AVR32_USBB_HSB_SIZE                 0x200
#define AVR32_USBB_HSB                      (*((volatile avr32_usb_hsb_t*)AVR32_USB_HSB_ADDRESS))
#define AVR32_USBB_IRQ                      224
#define AVR32_USBB_EPT_NUM                  7
#define AVR32_USBB_GCLK_NUM                 0
#define AVR32_USBB_ENABLE_TEST_PIN          4
#define AVR32_USBB_EOPN_TEST_PIN            5
#define AVR32_USBB_FS_TEST_PIN              6
#define AVR32_USBB_ID_0_0_PIN               64
#define AVR32_USBB_ID_0_0_FUNCTION          0
#define AVR32_USBB_ID_0_1_PIN               4
#define AVR32_USBB_ID_0_1_FUNCTION          1
#define AVR32_USBB_ID_0_2_PIN               34
#define AVR32_USBB_ID_0_2_FUNCTION          1
#define AVR32_USBB_ID_0_3_PIN               107
#define AVR32_USBB_ID_0_3_FUNCTION          1
#define AVR32_USBB_ID_0_4_PIN               121
#define AVR32_USBB_ID_0_4_FUNCTION          1
#define AVR32_USBB_OEN_TEST_0_0_PIN         7
#define AVR32_USBB_ONN_TEST_0_0_PIN         8
#define AVR32_USBB_PDONDM_TEST_0_0_PIN      9
#define AVR32_USBB_PDONDP_TEST_0_0_PIN      16
#define AVR32_USBB_PUIDLE_TEST_0_0_PIN      17
#define AVR32_USBB_PUON_TEST_0_0_PIN        18
#define AVR32_USBB_RXDM_TEST_0_0_PIN        19
#define AVR32_USBB_RXDP_TEST_0_0_PIN        20
#define AVR32_USBB_RXD_TEST_0_0_PIN         21
#define AVR32_USBB_SESSVLD_TEST_0_0_PIN     22
#define AVR32_USBB_TXD_TEST_0_0_PIN         23
#define AVR32_USBB_VAVBUSVLD_TEST_0_0_PIN   68
#define AVR32_USBB_VBOF_0_0_PIN             65
#define AVR32_USBB_VBOF_0_0_FUNCTION        0
#define AVR32_USBB_VBOF_0_1_PIN             5
#define AVR32_USBB_VBOF_0_1_FUNCTION        1
#define AVR32_USBB_VBOF_0_2_PIN             35
#define AVR32_USBB_VBOF_0_2_FUNCTION        1
#define AVR32_USBB_VBOF_0_3_PIN             108
#define AVR32_USBB_VBOF_0_3_FUNCTION        1
#define AVR32_USBB_VBOF_0_4_PIN             122
#define AVR32_USBB_VBOF_0_4_FUNCTION        1
#define AVR32_USBB_VBUSDISCHARGE_TEST_0_0_PIN 66
#define AVR32_USBB_VBUSPULSING_TEST_0_0_PIN 67

#include "avr32/usbb_320.h"


/* WDT */

/* WDT */ 
#define AVR32_WDT_ADDRESS                  0xFFFF1000
#define AVR32_WDT                          (*((volatile avr32_wdt_t*)AVR32_WDT_ADDRESS))

#include "avr32/wdt_401.h"


/* GPIO_LOCAL */

/* GPIO_LOCAL */
#define AVR32_GPIO_LOCAL_ADDRESS           0x40000000
#define AVR32_GPIO_LOCAL                   (*((volatile avr32_gpio_local_t*)AVR32_GPIO_LOCAL_ADDRESS))

#include "avr32/gpio_local_100.h"


/* PAD->GPIO bits mapping */
#define AVR32_PIN_PA00   0
#define AVR32_PIN_PA01   1
#define AVR32_PIN_PA02   2
#define AVR32_PIN_PA03   3
#define AVR32_PIN_PA04   4
#define AVR32_PIN_PA05   5
#define AVR32_PIN_PA06   6
#define AVR32_PIN_PA07   7
#define AVR32_PIN_PA08   8
#define AVR32_PIN_PA09   9
#define AVR32_PIN_PA16   16
#define AVR32_PIN_PA17   17
#define AVR32_PIN_PA18   18
#define AVR32_PIN_PA19   19
#define AVR32_PIN_PA20   20
#define AVR32_PIN_PA21   21
#define AVR32_PIN_PA22   22
#define AVR32_PIN_PA23   23
#define AVR32_PIN_PB00   32
#define AVR32_PIN_PB01   33
#define AVR32_PIN_PB30   62
#define AVR32_PIN_PB31   63
#define AVR32_PIN_PC02   66
#define AVR32_PIN_PC03   67
#define AVR32_PIN_PC04   68
#define AVR32_PIN_PC05   69
#define AVR32_PIN_PC15   79
#define AVR32_PIN_PC16   80
#define AVR32_PIN_PC17   81
#define AVR32_PIN_PC18   82
#define AVR32_PIN_PC19   83
#define AVR32_PIN_PC20   84
#define AVR32_PIN_PC21   85
#define AVR32_PIN_PC22   86
#define AVR32_PIN_PD00   96
#define AVR32_PIN_PD01   97
#define AVR32_PIN_PD02   98
#define AVR32_PIN_PD03   99
#define AVR32_PIN_PD11   107
#define AVR32_PIN_PD12   108
#define AVR32_PIN_PD13   109
#define AVR32_PIN_PD14   110
#define AVR32_PIN_PD21   117
#define AVR32_PIN_PD27   123
#define AVR32_PIN_PD28   124
#define AVR32_PIN_PD29   125
#define AVR32_PIN_PD30   126


/* #ifndef AVR32_UC3C264CREVC_H_INCLUDED */
#endif
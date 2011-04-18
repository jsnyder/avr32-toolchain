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
 * Model        : UC3C0128C
 * Revision     : $Revision: 75610 $
 * Checkin Date : $Date: 2010-05-28 16:31:59 +0200 (Fri, 28 May 2010) $
 *
 ****************************************************************************/
#ifndef AVR32_UC3C0128C_H_INCLUDED
#define AVR32_UC3C0128C_H_INCLUDED


/* Instance count */
#define AVR32_ACIFA_NUM                    2
#define AVR32_ADCIFA_NUM                   1
#define AVR32_AST_NUM                      1
#define AVR32_AW_NUM                       1
#define AVR32_CANIF_NUM                    1
#define AVR32_DACIFB_NUM                   2
#define AVR32_EBI_NUM                      1
#define AVR32_EIC_NUM                      1
#define AVR32_FLASHC_NUM                   1
#define AVR32_FREQM_NUM                    1
#define AVR32_GPIO_NUM                     1
#define AVR32_HMATRIXB_NUM                 1
#define AVR32_IISC_NUM                     1
#define AVR32_JTAG_NUM                     1
#define AVR32_MACB_NUM                     1
#define AVR32_MDMA_NUM                     1
#define AVR32_PDCA_NUM                     1
#define AVR32_PEVC_NUM                     1
#define AVR32_PM_NUM                       1
#define AVR32_PWM_NUM                      1
#define AVR32_QDEC_NUM                     2
#define AVR32_SAU_NUM                      1
#define AVR32_SCAN_NUM                     1
#define AVR32_SCIF_NUM                     1
#define AVR32_SDRAMC_NUM                   1
#define AVR32_SMC_NUM                      1
#define AVR32_SPI_NUM                      2
#define AVR32_TC_NUM                       2
#define AVR32_TWIM_NUM                     3
#define AVR32_TWIMS_NUM                    3
#define AVR32_TWIS_NUM                     3
#define AVR32_USART_NUM                    5
#define AVR32_USBC_NUM                     1
#define AVR32_WDT_NUM                      1

/* Maskable module clocks */
#define AVR32_PM_CLK_GRP_CPU               0
#define AVR32_PM_CLK_GRP_HSB               1
#define AVR32_PM_CLK_GRP_PBA               2
#define AVR32_PM_CLK_GRP_PBB               3
#define AVR32_PM_CLK_GRP_PBC               4
#define AVR32_PM_NUM_CLK_GRPS              5
#define AVR32_PM_NUM_CLKS_PER_GRP0         2
#define AVR32_PM_NUM_CLKS_PER_GRP1         13
#define AVR32_PM_NUM_CLKS_PER_GRP2         27
#define AVR32_PM_NUM_CLKS_PER_GRP3         7
#define AVR32_PM_NUM_CLKS_PER_GRP4         10

/* CPU clocks */
#define AVR32_OCD_CLK_CPU                  1

/* HSB clocks */
#define AVR32_SAU_CLK_HSB                  32
#define AVR32_PDCA_CLK_HSB                 33
#define AVR32_MDMA_CLK_HSB                 34
#define AVR32_USBC_CLK_HSB                 35
#define AVR32_CANIF_CLK_HSB                36
#define AVR32_FLASHC_CLK_HSB               37
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
#define AVR32_IISC_CLK_PBA                 80
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
#define AVR32_USBC_CLK_PBB                 97
#define AVR32_HMATRIX_CLK_PBB              98
#define AVR32_SAU_CLK_PBB                  99
#define AVR32_SMC_CLK_PBB                  100
#define AVR32_SDRAMC_CLK_PBB               101
#define AVR32_MACB_CLK_PBB                 102

/* PBC clocks */
#define AVR32_PDCA_CLK_PBC                 128
#define AVR32_MDMA_CLK_PBC                 129
#define AVR32_USART1_CLK_PBC               130
#define AVR32_SPIO0_CLK_PBC                132
#define AVR32_CANIF_CLK_PBC                133
#define AVR32_TC0_CLK_PBC                  134
#define AVR32_ADCIFA_CLK_PBC               135
#define AVR32_USART4_CLK_PBC               136
#define AVR32_TWIM2_CLK_PBC                137
#define AVR32_TWIS2_CLK_PBC                138

/* Generic clocks */
#define AVR32_SCIF_GCLK_GCLK0              0
#define AVR32_SCIF_GCLK_USBC               0
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
#define AVR32_SCIF_GCLK_GCLK2EVT           7
#define AVR32_SCIF_GCLK_GCLK8              8
#define AVR32_SCIF_GCLK_GCLK3EVT           8
#define AVR32_SCIF_GCLK_GCLK9              9
#define AVR32_SCIF_GCLK_GCLK0PIN           9
#define AVR32_SCIF_GCLK_GCLK10             10
#define AVR32_SCIF_GCLK_GCLK1PIN           10
#define AVR32_SCIF_GCLK_GCLK11             11
#define AVR32_SCIF_GCLK_IISC               11

/* Core */
#include "avr32/core_sc0_212.h"
/* OCD */
#include "avr32/ocd_s0_212.h"

/* CORE */ 
#define AVR32_CORE_CLK_CPU_COUNT           16
#define AVR32_CORE_OCD_DCCPU_READ_IRQ      33
#define AVR32_CORE_OCD_DCEMU_DIRTY_IRQ     32
#define AVR32_CORE_COMPARE_IRQ             0
#define AVR32_CORE_SCAN_CHAIN_MSB          13
#define AVR32_CORE_SCAN_CLOCK_MSB          13


/* OCD */ 

/* Memories */
#define AVR32_CPU_RAM_ADDRESS              0x00000000
#define AVR32_CPU_RAM_SIZE                 0x00008000
#define AVR32_CPU_RAM                      ((unsigned char *)AVR32_CPU_RAM_ADDRESS)
#define AVR32_EBI_CS0_ADDRESS              0xC0000000
#define AVR32_EBI_CS0_SIZE                 0x01000000
#define AVR32_EBI_CS0                      ((unsigned char *)AVR32_EBI_CS0_ADDRESS)
#define AVR32_EBI_CS1_0_ADDRESS            0xD0000000
#define AVR32_EBI_CS1_0_SIZE               0x04000000
#define AVR32_EBI_CS1_0                    ((unsigned char *)AVR32_EBI_CS1_0_ADDRESS)
#define AVR32_EBI_CS1_1_ADDRESS            0xD4000000
#define AVR32_EBI_CS1_1_SIZE               0x04000000
#define AVR32_EBI_CS1_1                    ((unsigned char *)AVR32_EBI_CS1_1_ADDRESS)
#define AVR32_EBI_CS2_ADDRESS              0xC8000000
#define AVR32_EBI_CS2_SIZE                 0x01000000
#define AVR32_EBI_CS2                      ((unsigned char *)AVR32_EBI_CS2_ADDRESS)
#define AVR32_EBI_CS3_ADDRESS              0xCC000000
#define AVR32_EBI_CS3_SIZE                 0x01000000
#define AVR32_EBI_CS3                      ((unsigned char *)AVR32_EBI_CS3_ADDRESS)
#define AVR32_FLASH_ADDRESS                0x80000000
#define AVR32_FLASH_SIZE                   0x00020000
#define AVR32_FLASH_PAGE_SIZE              0x00000200
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


/* Interrupt Controller */
#define AVR32_INTC_ADDRESS                 0xFFFF0000
#define AVR32_INTC                         (*((volatile avr32_intc_t*)AVR32_INTC_ADDRESS))
#define AVR32_INTC_NUM_INT_GRPS            47
#define AVR32_INTC_NUM_IRQS_PER_GRP0       1
#define AVR32_INTC_NUM_IRQS_PER_GRP1       2
#define AVR32_INTC_NUM_IRQS_PER_GRP10      1
#define AVR32_INTC_NUM_IRQS_PER_GRP11      1
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
#define AVR32_INTC_NUM_IRQS_PER_GRP42      1
#define AVR32_INTC_NUM_IRQS_PER_GRP43      1
#define AVR32_INTC_NUM_IRQS_PER_GRP44      1
#define AVR32_INTC_NUM_IRQS_PER_GRP45      1
#define AVR32_INTC_NUM_IRQS_PER_GRP46      1
#define AVR32_INTC_NUM_IRQS_PER_GRP5       4
#define AVR32_INTC_NUM_IRQS_PER_GRP6       4
#define AVR32_INTC_NUM_IRQS_PER_GRP7       1
#define AVR32_INTC_NUM_IRQS_PER_GRP8       1
#define AVR32_INTC_NUM_IRQS_PER_GRP9       10
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


/* ACIFA1 */ 
#define AVR32_ACIFA1_ADDRESS               0xFFFF6400
#define AVR32_ACIFA1                       (*((volatile avr32_acifa_t*)AVR32_ACIFA1_ADDRESS))
#define AVR32_ACIFA1_IRQ                   1216
#define AVR32_ACIFA1_ACAOUT_PIN           52
#define AVR32_ACIFA1_ACAOUT_FUNCTION      3
#define AVR32_ACIFA1_ACBOUT_PIN           53
#define AVR32_ACIFA1_ACBOUT_FUNCTION      3

#include "avr32/acifa_100.h"


/* ADCIFA */

/* ADCIFA */ 
#define AVR32_ADCIFA_ADDRESS               0xFFFD2400
#define AVR32_ADCIFA                       (*((volatile avr32_adcifa_t*)AVR32_ADCIFA_ADDRESS))
#define AVR32_ADCIFA_AWAKEUP_IRQ          1156
#define AVR32_ADCIFA_PEN_DETECTION_IRQ    1157
#define AVR32_ADCIFA_SEQUENCER0_IRQ       1152
#define AVR32_ADCIFA_SEQUENCER1_IRQ       1153
#define AVR32_ADCIFA_STARTUP_DONE_IRQ     1154
#define AVR32_ADCIFA_WINDOW_IRQ           1155
#define AVR32_ADCIFA_PDCA_ID_RX_CH0        0
#define AVR32_ADCIFA_PDCA_ID_RX_CH1        1
#define AVR32_ADCIFA_CAL_0_PIN             36
#define AVR32_ADCIFA_CAL_1_PIN             37
#define AVR32_ADCIFA_CAL_2_PIN             38
#define AVR32_ADCIFA_CAL_3_PIN             39
#define AVR32_ADCIFA_CAL_4_PIN             40
#define AVR32_ADCIFA_CAL_5_PIN             41
#define AVR32_ADCIFA_CAL_6_PIN             42
#define AVR32_ADCIFA_CAL_7_PIN             43
#define AVR32_ADCIFA_CAL_8_PIN             44
#define AVR32_ADCIFA_CAL_9_PIN             45
#define AVR32_ADCIFA_CAL_10_PIN            46
#define AVR32_ADCIFA_CAL_11_PIN            47
#define AVR32_ADCIFA_CAL_12_PIN            48
#define AVR32_ADCIFA_CAL_13_PIN            49
#define AVR32_ADCIFA_CAL_14_PIN            50
#define AVR32_ADCIFA_CLK_PIN              51
#define AVR32_ADCIFA_EN_PIN               52
#define AVR32_ADCIFA_MUX0NSEL_0_PIN        54
#define AVR32_ADCIFA_MUX0NSEL_1_PIN        55
#define AVR32_ADCIFA_MUX0NSEL_2_PIN        56
#define AVR32_ADCIFA_MUX0NSEL_3_PIN        57
#define AVR32_ADCIFA_MUX0PSEL_0_PIN        59
#define AVR32_ADCIFA_MUX0PSEL_1_PIN        60
#define AVR32_ADCIFA_MUX0PSEL_2_PIN        61
#define AVR32_ADCIFA_MUX0PSEL_3_PIN        64
#define AVR32_ADCIFA_MUX1NSEL_0_PIN        66
#define AVR32_ADCIFA_MUX1NSEL_1_PIN        67
#define AVR32_ADCIFA_MUX1NSEL_2_PIN        68
#define AVR32_ADCIFA_MUX1NSEL_3_PIN        69
#define AVR32_ADCIFA_MUX1PSEL_0_PIN        71
#define AVR32_ADCIFA_MUX1PSEL_1_PIN        72
#define AVR32_ADCIFA_MUX1PSEL_2_PIN        73
#define AVR32_ADCIFA_MUX1PSEL_3_PIN        74
#define AVR32_ADCIFA_OUT_10_PIN            28
#define AVR32_ADCIFA_OUT_11_PIN            29
#define AVR32_ADCIFA_OUT_0_PIN             75
#define AVR32_ADCIFA_OUT_1_PIN             76
#define AVR32_ADCIFA_OUT_2_PIN             77
#define AVR32_ADCIFA_OUT_3_PIN             78
#define AVR32_ADCIFA_OUT_4_PIN             79
#define AVR32_ADCIFA_OUT_5_PIN             80
#define AVR32_ADCIFA_OUT_6_PIN             81
#define AVR32_ADCIFA_OUT_7_PIN             82
#define AVR32_ADCIFA_OUT_8_PIN             83
#define AVR32_ADCIFA_OUT_9_PIN             84
#define AVR32_ADCIFA_OUT_12_PIN            87
#define AVR32_ADCIFA_OUT_13_PIN            88
#define AVR32_ADCIFA_OUT_14_PIN            89
#define AVR32_ADCIFA_OUT_15_PIN            90
#define AVR32_ADCIFA_OUT_16_PIN            91
#define AVR32_ADCIFA_OUT_17_PIN            92
#define AVR32_ADCIFA_OUT_18_PIN            93
#define AVR32_ADCIFA_OUT_19_PIN            94
#define AVR32_ADCIFA_OUT_20_PIN            95
#define AVR32_ADCIFA_OUT_21_PIN            96
#define AVR32_ADCIFA_OUT_22_PIN            97
#define AVR32_ADCIFA_OUT_23_PIN            98
#define AVR32_ADCIFA_PENDETECT_PIN        118
#define AVR32_ADCIFA_PGATE0EN_PIN         99
#define AVR32_ADCIFA_PGATE1EN_PIN         100
#define AVR32_ADCIFA_PREAMP0EN_PIN        101
#define AVR32_ADCIFA_PREAMP0HOLD_PIN      102
#define AVR32_ADCIFA_PREAMP0OUTEN_PIN     103
#define AVR32_ADCIFA_PREAMP0RESET_PIN     34
#define AVR32_ADCIFA_PREAMP0S0GAIN_0_PIN   104
#define AVR32_ADCIFA_PREAMP0S0GAIN_1_PIN   105
#define AVR32_ADCIFA_PREAMP0S1GAIN_0_PIN   106
#define AVR32_ADCIFA_PREAMP0S1GAIN_1_PIN   107
#define AVR32_ADCIFA_PREAMP1EN_PIN        108
#define AVR32_ADCIFA_PREAMP1HOLD_PIN      111
#define AVR32_ADCIFA_PREAMP1OUTEN_PIN     109
#define AVR32_ADCIFA_PREAMP1RESET_PIN     35
#define AVR32_ADCIFA_PREAMP1S0GAIN_0_PIN   110
#define AVR32_ADCIFA_PREAMP1S0GAIN_1_PIN   112
#define AVR32_ADCIFA_PREAMP1S1GAIN_0_PIN   113
#define AVR32_ADCIFA_PREAMP1S1GAIN_1_PIN   114
#define AVR32_ADCIFA_PREAMPCAL_8_PIN       32
#define AVR32_ADCIFA_PREAMPCAL_9_PIN       33
#define AVR32_ADCIFA_PREAMPCAL_0_PIN       119
#define AVR32_ADCIFA_PREAMPCAL_1_PIN       120
#define AVR32_ADCIFA_PREAMPCAL_2_PIN       121
#define AVR32_ADCIFA_PREAMPCAL_3_PIN       122
#define AVR32_ADCIFA_PREAMPCAL_4_PIN       123
#define AVR32_ADCIFA_PREAMPCAL_5_PIN       124
#define AVR32_ADCIFA_PREAMPCAL_6_PIN       125
#define AVR32_ADCIFA_PREAMPCAL_7_PIN       126
#define AVR32_ADCIFA_REFBUFEN_PIN         115
#define AVR32_ADCIFA_REFSEL_0_PIN          116
#define AVR32_ADCIFA_REFSEL_1_PIN          117

#include "avr32/adcifa_110.h"


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
#define AVR32_AW_PDCA_ID_RX                12
#define AVR32_AW_PDCA_ID_TX                28
#define AVR32_AW_DATAOUT_PIN               2

#include "avr32/aw_230.h"


/* CANIF */

/* CANIF */ 
#define AVR32_CANIF_ADDRESS                0xFFFD1C00
#define AVR32_CANIF                        (*((volatile avr32_canif_t*)AVR32_CANIF_ADDRESS))
#define AVR32_CANIF_BUS_OFF_IRQ_0         288
#define AVR32_CANIF_BUS_OFF_IRQ_1         293
#define AVR32_CANIF_ERROR_IRQ_0           289
#define AVR32_CANIF_ERROR_IRQ_1           294
#define AVR32_CANIF_RXOK_IRQ_0            290
#define AVR32_CANIF_RXOK_IRQ_1            295
#define AVR32_CANIF_TXOK_IRQ_0            291
#define AVR32_CANIF_TXOK_IRQ_1            296
#define AVR32_CANIF_WAKE_UP_IRQ_0         292
#define AVR32_CANIF_WAKE_UP_IRQ_1         297
#define AVR32_CANIF_CAN_NB                 2
#define AVR32_CANIF_GCLK_NUM               1
#define AVR32_CANIF_RXLINE_1_PIN           1
#define AVR32_CANIF_RXLINE_1_FUNCTION      1
#define AVR32_CANIF_RXLINE_1_1_PIN         32
#define AVR32_CANIF_RXLINE_1_1_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_PIN           36
#define AVR32_CANIF_RXLINE_0_FUNCTION      1
#define AVR32_CANIF_RXLINE_1_2_PIN         75
#define AVR32_CANIF_RXLINE_1_2_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_1_PIN         85
#define AVR32_CANIF_RXLINE_0_1_FUNCTION    1
#define AVR32_CANIF_RXLINE_1_3_PIN         87
#define AVR32_CANIF_RXLINE_1_3_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_2_PIN         105
#define AVR32_CANIF_RXLINE_0_2_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_3_PIN         123
#define AVR32_CANIF_RXLINE_0_3_FUNCTION    1
#define AVR32_CANIF_RXLINE_0_4_PIN         48
#define AVR32_CANIF_RXLINE_0_4_FUNCTION    4
#define AVR32_CANIF_RXLINE_1_4_PIN         65
#define AVR32_CANIF_RXLINE_1_4_FUNCTION    4
#define AVR32_CANIF_RXLINE_1_5_PIN         79
#define AVR32_CANIF_RXLINE_1_5_FUNCTION    4
#define AVR32_CANIF_TXLINE_1_PIN           0
#define AVR32_CANIF_TXLINE_1_FUNCTION      1
#define AVR32_CANIF_TXLINE_1_1_PIN         33
#define AVR32_CANIF_TXLINE_1_1_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_PIN           37
#define AVR32_CANIF_TXLINE_0_FUNCTION      1
#define AVR32_CANIF_TXLINE_1_2_PIN         76
#define AVR32_CANIF_TXLINE_1_2_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_1_PIN         86
#define AVR32_CANIF_TXLINE_0_1_FUNCTION    1
#define AVR32_CANIF_TXLINE_1_3_PIN         88
#define AVR32_CANIF_TXLINE_1_3_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_2_PIN         106
#define AVR32_CANIF_TXLINE_0_2_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_3_PIN         124
#define AVR32_CANIF_TXLINE_0_3_FUNCTION    1
#define AVR32_CANIF_TXLINE_0_4_PIN         49
#define AVR32_CANIF_TXLINE_0_4_FUNCTION    4
#define AVR32_CANIF_TXLINE_1_4_PIN         64
#define AVR32_CANIF_TXLINE_1_4_FUNCTION    4
#define AVR32_CANIF_TXLINE_1_5_PIN         80
#define AVR32_CANIF_TXLINE_1_5_FUNCTION    4

#include "avr32/canif_110.h"


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
#define AVR32_DACIFB0_PDCA_ID_TX_CHA       23
#define AVR32_DACIFB0_PDCA_ID_TX_CHB       24
#define AVR32_DACIFB0_CHAOE_PIN           36
#define AVR32_DACIFB0_CHASAMPLE_PIN       37
#define AVR32_DACIFB0_CHBOE_PIN           38
#define AVR32_DACIFB0_CHBSAMPLE_PIN       39
#define AVR32_DACIFB0_CONVERTBAR_PIN      40
#define AVR32_DACIFB0_EN_PIN              41
#define AVR32_DACIFB0_GAINCALIB_7_PIN      26
#define AVR32_DACIFB0_GAINCALIB_8_PIN      27
#define AVR32_DACIFB0_GAINCALIB_0_PIN      42
#define AVR32_DACIFB0_GAINCALIB_1_PIN      43
#define AVR32_DACIFB0_GAINCALIB_2_PIN      44
#define AVR32_DACIFB0_GAINCALIB_3_PIN      45
#define AVR32_DACIFB0_GAINCALIB_4_PIN      46
#define AVR32_DACIFB0_GAINCALIB_5_PIN      47
#define AVR32_DACIFB0_GAINCALIB_6_PIN      48
#define AVR32_DACIFB0_INTERNOE_PIN        49
#define AVR32_DACIFB0_LOWPOWER_PIN        50
#define AVR32_DACIFB0_OFFSETCALIB_7_PIN    28
#define AVR32_DACIFB0_OFFSETCALIB_8_PIN    29
#define AVR32_DACIFB0_OFFSETCALIB_0_PIN    51
#define AVR32_DACIFB0_OFFSETCALIB_1_PIN    52
#define AVR32_DACIFB0_OFFSETCALIB_2_PIN    53
#define AVR32_DACIFB0_OFFSETCALIB_3_PIN    54
#define AVR32_DACIFB0_OFFSETCALIB_4_PIN    55
#define AVR32_DACIFB0_OFFSETCALIB_5_PIN    56
#define AVR32_DACIFB0_OFFSETCALIB_6_PIN    57
#define AVR32_DACIFB0_REFSEL_PIN          58
#define AVR32_DACIFB0_SHEN_PIN            59
#define AVR32_DACIFB0_VALUE_0_PIN          60
#define AVR32_DACIFB0_VALUE_1_PIN          61
#define AVR32_DACIFB0_VALUE_2_PIN          64
#define AVR32_DACIFB0_VALUE_3_PIN          65
#define AVR32_DACIFB0_VALUE_4_PIN          66
#define AVR32_DACIFB0_VALUE_5_PIN          67
#define AVR32_DACIFB0_VALUE_6_PIN          68
#define AVR32_DACIFB0_VALUE_7_PIN          69
#define AVR32_DACIFB0_VALUE_8_PIN          70
#define AVR32_DACIFB0_VALUE_9_PIN          71
#define AVR32_DACIFB0_VALUE_10_PIN         72
#define AVR32_DACIFB0_VALUE_11_PIN         73


/* DACIFB1 */ 
#define AVR32_DACIFB1_ADDRESS              0xFFFF6C00
#define AVR32_DACIFB1                      (*((volatile avr32_dacifb_t*)AVR32_DACIFB1_ADDRESS))
#define AVR32_DACIFB1_CHA_DATA_EMPTY       1280
#define AVR32_DACIFB1_CHA_DATA_OVERRUN     1281
#define AVR32_DACIFB1_CHA_DATA_UNDERRUN    1282
#define AVR32_DACIFB1_CHB_DATA_EMPTY       1283
#define AVR32_DACIFB1_CHB_DATA_OVERRUN     1284
#define AVR32_DACIFB1_CHB_DATA_UNDERRUN    1285
#define AVR32_DACIFB1_PDCA_ID_TX_CHA       25
#define AVR32_DACIFB1_PDCA_ID_TX_CHB       26

#include "avr32/dacifb_110.h"


/* EBI */

/* EBI */ 
#define AVR32_EBI_CS_MSB                   3
#define AVR32_EBI_HMATRIX_NR               6
#define AVR32_EBI_SDRAM_CS                 1
#define AVR32_EBI_SMC0_CS                  0
#define AVR32_EBI_SMC1_CS                  1
#define AVR32_EBI_SMC2_CS                  2
#define AVR32_EBI_SMC3_CS                  3
#define AVR32_EBI_ADDR_23_PIN              73
#define AVR32_EBI_ADDR_23_FUNCTION         2
#define AVR32_EBI_ADDR_22_PIN              74
#define AVR32_EBI_ADDR_22_FUNCTION         2
#define AVR32_EBI_ADDR_21_PIN              75
#define AVR32_EBI_ADDR_21_FUNCTION         2
#define AVR32_EBI_ADDR_20_PIN              76
#define AVR32_EBI_ADDR_20_FUNCTION         2
#define AVR32_EBI_ADDR_0_PIN               99
#define AVR32_EBI_ADDR_0_FUNCTION          2
#define AVR32_EBI_ADDR_1_PIN               100
#define AVR32_EBI_ADDR_1_FUNCTION          2
#define AVR32_EBI_ADDR_2_PIN               101
#define AVR32_EBI_ADDR_2_FUNCTION          2
#define AVR32_EBI_ADDR_3_PIN               102
#define AVR32_EBI_ADDR_3_FUNCTION          2
#define AVR32_EBI_ADDR_4_PIN               103
#define AVR32_EBI_ADDR_4_FUNCTION          2
#define AVR32_EBI_ADDR_5_PIN               104
#define AVR32_EBI_ADDR_5_FUNCTION          2
#define AVR32_EBI_ADDR_6_PIN               105
#define AVR32_EBI_ADDR_6_FUNCTION          2
#define AVR32_EBI_ADDR_7_PIN               106
#define AVR32_EBI_ADDR_7_FUNCTION          2
#define AVR32_EBI_ADDR_8_PIN               107
#define AVR32_EBI_ADDR_8_FUNCTION          2
#define AVR32_EBI_ADDR_9_PIN               108
#define AVR32_EBI_ADDR_9_FUNCTION          2
#define AVR32_EBI_ADDR_10_PIN              110
#define AVR32_EBI_ADDR_10_FUNCTION         2
#define AVR32_EBI_ADDR_11_PIN              111
#define AVR32_EBI_ADDR_11_FUNCTION         2
#define AVR32_EBI_ADDR_12_PIN              112
#define AVR32_EBI_ADDR_12_FUNCTION         2
#define AVR32_EBI_ADDR_13_PIN              113
#define AVR32_EBI_ADDR_13_FUNCTION         2
#define AVR32_EBI_ADDR_14_PIN              114
#define AVR32_EBI_ADDR_14_FUNCTION         2
#define AVR32_EBI_ADDR_15_PIN              115
#define AVR32_EBI_ADDR_15_FUNCTION         2
#define AVR32_EBI_ADDR_16_PIN              116
#define AVR32_EBI_ADDR_16_FUNCTION         2
#define AVR32_EBI_ADDR_17_PIN              117
#define AVR32_EBI_ADDR_17_FUNCTION         2
#define AVR32_EBI_ADDR_18_PIN              118
#define AVR32_EBI_ADDR_18_FUNCTION         2
#define AVR32_EBI_ADDR_19_PIN              119
#define AVR32_EBI_ADDR_19_FUNCTION         2
#define AVR32_EBI_CAS_PIN                  80
#define AVR32_EBI_CAS_FUNCTION             2
#define AVR32_EBI_DATA_0_PIN               83
#define AVR32_EBI_DATA_0_FUNCTION          2
#define AVR32_EBI_DATA_1_PIN               84
#define AVR32_EBI_DATA_1_FUNCTION          2
#define AVR32_EBI_DATA_2_PIN               85
#define AVR32_EBI_DATA_2_FUNCTION          2
#define AVR32_EBI_DATA_3_PIN               86
#define AVR32_EBI_DATA_3_FUNCTION          2
#define AVR32_EBI_DATA_4_PIN               87
#define AVR32_EBI_DATA_4_FUNCTION          2
#define AVR32_EBI_DATA_5_PIN               88
#define AVR32_EBI_DATA_5_FUNCTION          2
#define AVR32_EBI_DATA_6_PIN               89
#define AVR32_EBI_DATA_6_FUNCTION          2
#define AVR32_EBI_DATA_7_PIN               90
#define AVR32_EBI_DATA_7_FUNCTION          2
#define AVR32_EBI_DATA_8_PIN               91
#define AVR32_EBI_DATA_8_FUNCTION          2
#define AVR32_EBI_DATA_9_PIN               92
#define AVR32_EBI_DATA_9_FUNCTION          2
#define AVR32_EBI_DATA_10_PIN              93
#define AVR32_EBI_DATA_10_FUNCTION         2
#define AVR32_EBI_DATA_11_PIN              94
#define AVR32_EBI_DATA_11_FUNCTION         2
#define AVR32_EBI_DATA_12_PIN              95
#define AVR32_EBI_DATA_12_FUNCTION         2
#define AVR32_EBI_DATA_13_PIN              96
#define AVR32_EBI_DATA_13_FUNCTION         2
#define AVR32_EBI_DATA_14_PIN              97
#define AVR32_EBI_DATA_14_FUNCTION         2
#define AVR32_EBI_DATA_15_PIN              98
#define AVR32_EBI_DATA_15_FUNCTION         2
#define AVR32_EBI_NCS_3_PIN                71
#define AVR32_EBI_NCS_3_FUNCTION           1
#define AVR32_EBI_NCS_0_PIN                72
#define AVR32_EBI_NCS_0_FUNCTION           2
#define AVR32_EBI_NCS_1_PIN                123
#define AVR32_EBI_NCS_1_FUNCTION           2
#define AVR32_EBI_NCS_2_PIN                124
#define AVR32_EBI_NCS_2_FUNCTION           2
#define AVR32_EBI_NRD_PIN                  122
#define AVR32_EBI_NRD_FUNCTION             2
#define AVR32_EBI_NWAIT_PIN                126
#define AVR32_EBI_NWAIT_FUNCTION           2
#define AVR32_EBI_NWE0_PIN                 121
#define AVR32_EBI_NWE0_FUNCTION            2
#define AVR32_EBI_NWE1_PIN                 120
#define AVR32_EBI_NWE1_FUNCTION            2
#define AVR32_EBI_RAS_PIN                  81
#define AVR32_EBI_RAS_FUNCTION             2
#define AVR32_EBI_SDA10_PIN                82
#define AVR32_EBI_SDA10_FUNCTION           2
#define AVR32_EBI_SDCK_PIN                 109
#define AVR32_EBI_SDCK_FUNCTION            2
#define AVR32_EBI_SDCKE_PIN                78
#define AVR32_EBI_SDCKE_FUNCTION           2
#define AVR32_EBI_SDCS_PIN                 77
#define AVR32_EBI_SDCS_FUNCTION            2
#define AVR32_EBI_SDWE_PIN                 79
#define AVR32_EBI_SDWE_FUNCTION            2


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
#define AVR32_EIC_EXTINT_1_PIN             3
#define AVR32_EIC_EXTINT_1_FUNCTION        1
#define AVR32_EIC_EXTINT_4_PIN             10
#define AVR32_EIC_EXTINT_4_FUNCTION        1
#define AVR32_EIC_EXTINT_1_1_PIN           19
#define AVR32_EIC_EXTINT_1_1_FUNCTION      1
#define AVR32_EIC_EXTINT_1_2_PIN           26
#define AVR32_EIC_EXTINT_1_2_FUNCTION      1
#define AVR32_EIC_EXTINT_2_PIN             27
#define AVR32_EIC_EXTINT_2_FUNCTION        1
#define AVR32_EIC_EXTINT_3_PIN             28
#define AVR32_EIC_EXTINT_3_FUNCTION        1
#define AVR32_EIC_EXTINT_0_PIN             29
#define AVR32_EIC_EXTINT_0_FUNCTION        1
#define AVR32_EIC_EXTINT_2_1_PIN           39
#define AVR32_EIC_EXTINT_2_1_FUNCTION      1
#define AVR32_EIC_EXTINT_1_3_PIN           67
#define AVR32_EIC_EXTINT_1_3_FUNCTION      1
#define AVR32_EIC_EXTINT_3_1_PIN           68
#define AVR32_EIC_EXTINT_3_1_FUNCTION      1
#define AVR32_EIC_EXTINT_4_1_PIN           69
#define AVR32_EIC_EXTINT_4_1_FUNCTION      1
#define AVR32_EIC_EXTINT_7_PIN             77
#define AVR32_EIC_EXTINT_7_FUNCTION        1
#define AVR32_EIC_EXTINT_5_PIN             82
#define AVR32_EIC_EXTINT_5_FUNCTION        1
#define AVR32_EIC_EXTINT_5_1_PIN           103
#define AVR32_EIC_EXTINT_5_1_FUNCTION      1
#define AVR32_EIC_EXTINT_6_PIN             104
#define AVR32_EIC_EXTINT_6_FUNCTION        1
#define AVR32_EIC_EXTINT_7_1_PIN           110
#define AVR32_EIC_EXTINT_7_1_FUNCTION      1
#define AVR32_EIC_EXTINT_0_1_PIN           117
#define AVR32_EIC_EXTINT_0_1_FUNCTION      1
#define AVR32_EIC_EXTINT_8_PIN             120
#define AVR32_EIC_EXTINT_8_FUNCTION        1
#define AVR32_EIC_EXTINT_6_1_PIN           125
#define AVR32_EIC_EXTINT_6_1_FUNCTION      1
#define AVR32_EIC_EXTINT_3_2_PIN           126
#define AVR32_EIC_EXTINT_3_2_FUNCTION      1
#define AVR32_EIC_EXTINT_2_2_PIN           8
#define AVR32_EIC_EXTINT_2_2_FUNCTION      2
#define AVR32_EIC_EXTINT_0_2_PIN           25
#define AVR32_EIC_EXTINT_0_2_FUNCTION      2
#define AVR32_EIC_EXTINT_8_1_PIN           32
#define AVR32_EIC_EXTINT_8_1_FUNCTION      2
#define AVR32_EIC_EXTINT_4_2_PIN           50
#define AVR32_EIC_EXTINT_4_2_FUNCTION      2
#define AVR32_EIC_EXTINT_0_3_PIN           91
#define AVR32_EIC_EXTINT_0_3_FUNCTION      3
#define AVR32_EIC_SCAN_0_PIN               40
#define AVR32_EIC_SCAN_0_FUNCTION          3
#define AVR32_EIC_SCAN_1_PIN               41
#define AVR32_EIC_SCAN_1_FUNCTION          3
#define AVR32_EIC_SCAN_2_PIN               42
#define AVR32_EIC_SCAN_2_FUNCTION          3
#define AVR32_EIC_SCAN_3_PIN               43
#define AVR32_EIC_SCAN_3_FUNCTION          3
#define AVR32_EIC_SCAN_4_PIN               44
#define AVR32_EIC_SCAN_4_FUNCTION          3
#define AVR32_EIC_SCAN_5_PIN               45
#define AVR32_EIC_SCAN_5_FUNCTION          3
#define AVR32_EIC_SCAN_6_PIN               46
#define AVR32_EIC_SCAN_6_FUNCTION          3
#define AVR32_EIC_SCAN_7_PIN               47
#define AVR32_EIC_SCAN_7_FUNCTION          3

#include "avr32/eic_302.h"


/* FLASHC */

/* FLASHC */ 
#define AVR32_FLASHC_ADDRESS               0xFFFE0000
#define AVR32_FLASHC                       (*((volatile avr32_flashc_t*)AVR32_FLASHC_ADDRESS))
#define AVR32_FLASHC_CALIBRATION_FIRST_WORD_ADDRESS    0x80800200
#define AVR32_FLASHC_CALIBRATION_SECOND_WORD_ADDRESS   0x80800204
#define AVR32_FLASHC_CALIBRATION_THIRD_WORD_ADDRESS    0x80800208
#define AVR32_FLASHC_IRQ                   320
#define AVR32_FLASHC_FLASH_SIZE            131072
#define AVR32_FLASHC_FWS_0_MAX_FREQ        33000000
#define AVR32_FLASHC_FWS_1_MAX_FREQ        66000000
#define AVR32_FLASHC_HSEN_FWS_0_MAX_FREQ   72000000
#define AVR32_FLASHC_HSEN_FWS_1_MAX_FREQ   33000000
#define AVR32_FLASHC_PAGES_PR_REGION       64
#define AVR32_FLASHC_PAGE_SIZE             512
#define AVR32_FLASHC_USER_PAGE             ((volatile unsigned char*) AVR32_FLASHC_USER_PAGE_ADDRESS)
#define AVR32_FLASHC_USER_PAGE_ADDRESS     0x80800000
#define AVR32_FLASHC_USER_PAGE_SIZE        512
#define AVR32_FLASHC_GPF_NUM               32
#define AVR32_FLASHC_BOD33EN                30
#define AVR32_FLASHC_BOD33EN_MASK           0xC0000000
#define AVR32_FLASHC_BOD33EN_OFFSET         30
#define AVR32_FLASHC_BOD33EN_SIZE           2
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

#include "avr32/flashc_302.h"


/* FREQM */

/* FREQM */ 
#define AVR32_FREQM_ADDRESS                0xFFFF1800
#define AVR32_FREQM                        (*((volatile avr32_freqm_t*)AVR32_FREQM_ADDRESS))
#define AVR32_FREQM_IRQ                    544
#define AVR32_FREQM_CPU                    0
#define AVR32_FREQM_CRIPEL                 12
#define AVR32_FREQM_DFLL0                  0
#define AVR32_FREQM_FLO                    0
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
#define AVR32_FREQM_NUM_CLK                32
#define AVR32_FREQM_NUM_REF_CLK            5
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
#define AVR32_FREQM_RC120M                 25
#define AVR32_FREQM_RC120M_AW              0
#define AVR32_FREQM_RC32K                  0
#define AVR32_FREQM_RCOSC                  8
#define AVR32_FREQM_RCOSC8                 9
#define AVR32_FREQM_REFSEL_BITS            3
#define AVR32_FREQM_REF_GENCLK0            0
#define AVR32_FREQM_REF_GENCLK1            0
#define AVR32_FREQM_REF_GENCLK2            0
#define AVR32_FREQM_REF_GENCLK3            0
#define AVR32_FREQM_REF_GENCLK4            0
#define AVR32_FREQM_REF_GENCLK5            0
#define AVR32_FREQM_REF_GENCLK6            0
#define AVR32_FREQM_REF_OSC0               2
#define AVR32_FREQM_REF_OSC1               3
#define AVR32_FREQM_REF_OSC2               0
#define AVR32_FREQM_REF_OSC32              1
#define AVR32_FREQM_REF_RCOSC              0
#define AVR32_FREQM_REF_RCOSC8             4

#include "avr32/freqm_310.h"


/* GPIO */

/* GPIO */ 
#define AVR32_GPIO_ADDRESS                 0xFFFF2000
#define AVR32_GPIO                         (*((volatile avr32_gpio_t*)AVR32_GPIO_ADDRESS))
#define AVR32_GPIO_IRQ_0                   576
#define AVR32_GPIO_IRQ_1                   577
#define AVR32_GPIO_IRQ_2                   578
#define AVR32_GPIO_IRQ_3                   579
#define AVR32_GPIO_IRQ_4                   580
#define AVR32_GPIO_IRQ_5                   581
#define AVR32_GPIO_IRQ_6                   582
#define AVR32_GPIO_IRQ_7                   583
#define AVR32_GPIO_IRQ_8                   584
#define AVR32_GPIO_IRQ_9                   585
#define AVR32_GPIO_IRQ_10                  586
#define AVR32_GPIO_IRQ_11                  587
#define AVR32_GPIO_IRQ_12                  588
#define AVR32_GPIO_IRQ_13                  589
#define AVR32_GPIO_IRQ_14                  590
#define AVR32_GPIO_IRQ_15                  591
#define AVR32_GPIO_EVER_DEFAULT_VAL        "{NUMBER_OF_PINS{1'b0}}"
#define AVR32_GPIO_EVER_IMPLEMENTED        "{NUMBER_OF_PINS{1'b1}}"
#define AVR32_GPIO_IRQ_MSB                 15
#define AVR32_GPIO_MAX_IRQ_MSB             31
#define AVR32_GPIO_PADDR_BITS              11
#define AVR32_GPIO_PINS_MSB                123
#define AVR32_GPIO_IRQS_PER_GROUP          8
#define AVR32_GPIO_NUMBER_OF_PINS          124
#define AVR32_GPIO_PADDR_MSB               10
#define AVR32_GPIO_PDATA_MSB               31
#define AVR32_GPIO_PORT_LENGTH             4

#include "avr32/gpio_212.h"


/* HMATRIXB */

/* HMATRIX */ 
#define AVR32_HMATRIXB_ADDRESS              0xFFFE2000
#define AVR32_HMATRIXB                      (*((volatile avr32_hmatrixb_t*)AVR32_HMATRIXB_ADDRESS))
#define AVR32_HMATRIXB_MASTER_CANIF         8
#define AVR32_HMATRIXB_MASTER_CPU_DATA      0
#define AVR32_HMATRIXB_MASTER_CPU_INSN      1
#define AVR32_HMATRIXB_MASTER_CPU_SAB       2
#define AVR32_HMATRIXB_MASTER_MACB_DMA      4
#define AVR32_HMATRIXB_MASTER_MDMA_READ     5
#define AVR32_HMATRIXB_MASTER_MDMA_WRITE    6
#define AVR32_HMATRIXB_MASTER_MACB          9
#define AVR32_HMATRIXB_MASTER_PDCA          4
#define AVR32_HMATRIXB_MASTER_SAU           3
#define AVR32_HMATRIXB_MASTER_USBC	        7
#define AVR32_HMATRIXB_MASTER_NUM           10
#define AVR32_HMATRIXB_SLAVE_EBI            6
#define AVR32_HMATRIXB_SLAVE_FLASH          0
#define AVR32_HMATRIXB_SLAVE_HSB_RAM        5
#define AVR32_HMATRIXB_SLAVE_NUM            8
#define AVR32_HMATRIXB_SLAVE_PBA            1
#define AVR32_HMATRIXB_SLAVE_PBB            2
#define AVR32_HMATRIXB_SLAVE_PBC            3
#define AVR32_HMATRIXB_SLAVE_SAU            7
#define AVR32_HMATRIXB_SLAVE_SRAM           4

#include "avr32/hmatrixb_130.h"


/* IISC */

/* IISC */ 
#define AVR32_IISC_ADDRESS                 0xFFFF4800
#define AVR32_IISC                         (*((volatile avr32_iisc_t*)AVR32_IISC_ADDRESS))
#define AVR32_IISC_IRQ                     928
#define AVR32_IISC_CHANNELS_BITS           8
#define AVR32_IISC_DMA_CHANNELS_BITS       8
#define AVR32_IISC_GCLK_ID                 11
#define AVR32_IISC_PDCA_ID_RX              44:37
#define AVR32_IISC_PDCA_ID_TX              52:45
#define AVR32_IISC_IMCK_PIN                53
#define AVR32_IISC_IMCK_FUNCTION           2
#define AVR32_IISC_IMCK_1_PIN              83
#define AVR32_IISC_IMCK_1_FUNCTION         3
#define AVR32_IISC_ISCK_PIN                54
#define AVR32_IISC_ISCK_FUNCTION           2
#define AVR32_IISC_ISCK_1_PIN              84
#define AVR32_IISC_ISCK_1_FUNCTION         3
#define AVR32_IISC_ISDI_PIN                52
#define AVR32_IISC_ISDI_FUNCTION           2
#define AVR32_IISC_ISDI_1_PIN              82
#define AVR32_IISC_ISDI_1_FUNCTION         3
#define AVR32_IISC_ISDO_PIN                51
#define AVR32_IISC_ISDO_FUNCTION           2
#define AVR32_IISC_ISDO_1_PIN              81
#define AVR32_IISC_ISDO_1_FUNCTION         3
#define AVR32_IISC_IWS_PIN                 55
#define AVR32_IISC_IWS_FUNCTION            2
#define AVR32_IISC_IWS_1_PIN               85
#define AVR32_IISC_IWS_1_FUNCTION          3
#define AVR32_IISC_PDCA_ID_RX_0            37
#define AVR32_IISC_PDCA_ID_RX_1            38
#define AVR32_IISC_PDCA_ID_RX_2            39
#define AVR32_IISC_PDCA_ID_RX_3            40
#define AVR32_IISC_PDCA_ID_RX_4            41
#define AVR32_IISC_PDCA_ID_RX_5            42
#define AVR32_IISC_PDCA_ID_RX_6            43
#define AVR32_IISC_PDCA_ID_RX_7            44
#define AVR32_IISC_PDCA_ID_TX_0            45
#define AVR32_IISC_PDCA_ID_TX_1            46
#define AVR32_IISC_PDCA_ID_TX_2            47
#define AVR32_IISC_PDCA_ID_TX_3            48
#define AVR32_IISC_PDCA_ID_TX_4            49
#define AVR32_IISC_PDCA_ID_TX_5            50
#define AVR32_IISC_PDCA_ID_TX_6            51
#define AVR32_IISC_PDCA_ID_TX_7            52
#include "avr32/iisc_200.h"


/* JTAG */

/* JTAG */ 
#define AVR32_JTAG_TCK_PIN                0
#define AVR32_JTAG_TDI_PIN                1
#define AVR32_JTAG_TDO_PIN                2
#define AVR32_JTAG_TMS_PIN                3



/* MACB */

/* MACB */ 
#define AVR32_MACB_ADDRESS                 0xFFFE3000
#define AVR32_MACB                         (*((volatile avr32_macb_t*)AVR32_MACB_ADDRESS))
#define AVR32_MACB_IRQ                     1344
#define AVR32_MACB_COL_PIN                 52
#define AVR32_MACB_COL_FUNCTION            4
#define AVR32_MACB_CRS_PIN                 51
#define AVR32_MACB_CRS_FUNCTION            4
#define AVR32_MACB_MDC_PIN                 46
#define AVR32_MACB_MDC_FUNCTION            4
#define AVR32_MACB_MDC_1_PIN               66
#define AVR32_MACB_MDC_1_FUNCTION          4
#define AVR32_MACB_MDIO_PIN                47
#define AVR32_MACB_MDIO_FUNCTION           4
#define AVR32_MACB_MDIO_1_PIN              67
#define AVR32_MACB_MDIO_1_FUNCTION         4
#define AVR32_MACB_RXD_0_PIN               40
#define AVR32_MACB_RXD_0_FUNCTION          4
#define AVR32_MACB_RXD_1_PIN               41
#define AVR32_MACB_RXD_1_FUNCTION          4
#define AVR32_MACB_RXD_2_PIN               53
#define AVR32_MACB_RXD_2_FUNCTION          4
#define AVR32_MACB_RXD_3_PIN               54
#define AVR32_MACB_RXD_3_FUNCTION          4
#define AVR32_MACB_RXD_0_1_PIN             109
#define AVR32_MACB_RXD_0_1_FUNCTION        4
#define AVR32_MACB_RXD_1_1_PIN             110
#define AVR32_MACB_RXD_1_1_FUNCTION        4
#define AVR32_MACB_RX_CLK_PIN              55
#define AVR32_MACB_RX_CLK_FUNCTION         4
#define AVR32_MACB_RX_DV_PIN               39
#define AVR32_MACB_RX_DV_FUNCTION          4
#define AVR32_MACB_RX_DV_1_PIN             124
#define AVR32_MACB_RX_DV_1_FUNCTION        4
#define AVR32_MACB_RX_ER_PIN               45
#define AVR32_MACB_RX_ER_FUNCTION          4
#define AVR32_MACB_RX_ER_1_PIN             123
#define AVR32_MACB_RX_ER_1_FUNCTION        4
#define AVR32_MACB_SPEED_PIN               22
#define AVR32_MACB_SPEED_FUNCTION          4
#define AVR32_MACB_TXD_2_PIN               36
#define AVR32_MACB_TXD_2_FUNCTION          4
#define AVR32_MACB_TXD_3_PIN               37
#define AVR32_MACB_TXD_3_FUNCTION          4
#define AVR32_MACB_TXD_0_PIN               59
#define AVR32_MACB_TXD_0_FUNCTION          4
#define AVR32_MACB_TXD_1_PIN               60
#define AVR32_MACB_TXD_1_FUNCTION          4
#define AVR32_MACB_TXD_0_1_PIN             107
#define AVR32_MACB_TXD_0_1_FUNCTION        4
#define AVR32_MACB_TXD_1_1_PIN             108
#define AVR32_MACB_TXD_1_1_FUNCTION        4
#define AVR32_MACB_TX_CLK_PIN              125
#define AVR32_MACB_TX_CLK_FUNCTION         4
#define AVR32_MACB_TX_EN_PIN               58
#define AVR32_MACB_TX_EN_FUNCTION          4
#define AVR32_MACB_TX_EN_1_PIN             126
#define AVR32_MACB_TX_EN_1_FUNCTION        4
#define AVR32_MACB_TX_ER_PIN               38
#define AVR32_MACB_TX_ER_FUNCTION          4
#define AVR32_MACB_WOL_PIN                 23
#define AVR32_MACB_WOL_FUNCTION            4

#include "avr32/macb_1122.h"


/* MDMA */

/* MDMA */ 
#define AVR32_MDMA_ADDRESS                 0xFFFD1000
#define AVR32_MDMA                         (*((volatile avr32_mdma_t*)AVR32_MDMA_ADDRESS))
#define AVR32_MDMA_IRQ                     224

#include "avr32/mdma_101.h"


/* PDCA */

/* PDCA */ 
#define AVR32_PDCA_ADDRESS                 0xFFFD0000
#define AVR32_PDCA                         (*((volatile avr32_pdca_t*)AVR32_PDCA_ADDRESS))
#define AVR32_PDCA_IRQ_0                   96
#define AVR32_PDCA_IRQ_1                   97
#define AVR32_PDCA_IRQ_2                   98
#define AVR32_PDCA_IRQ_3                   99
#define AVR32_PDCA_IRQ_4                   128
#define AVR32_PDCA_IRQ_5                   129
#define AVR32_PDCA_IRQ_6                   130
#define AVR32_PDCA_IRQ_7                   131
#define AVR32_PDCA_IRQ_8                   160
#define AVR32_PDCA_IRQ_9                   161
#define AVR32_PDCA_IRQ_10                  162
#define AVR32_PDCA_IRQ_11                  163
#define AVR32_PDCA_IRQ_12                 192
#define AVR32_PDCA_IRQ_13                 193
#define AVR32_PDCA_IRQ_14                 194
#define AVR32_PDCA_IRQ_15                 195
#define AVR32_PDCA_CHANNEL_LENGTH          16
#define AVR32_PDCA_MON_CH0_IMPL            1
#define AVR32_PDCA_MON_CH1_IMPL            0
#define AVR32_PDCA_PID_ADCIFA_CH0_RX       0
#define AVR32_PDCA_PID_ADCIFA_CH1_RX       1
#define AVR32_PDCA_PID_USART0_RX           2
#define AVR32_PDCA_PID_USART1_RX           3
#define AVR32_PDCA_PID_USART2_RX           4
#define AVR32_PDCA_PID_USART3_RX           5
#define AVR32_PDCA_PID_TWIM0_RX            6
#define AVR32_PDCA_PID_TWIM1_RX            7
#define AVR32_PDCA_PID_TWIS0_RX            8
#define AVR32_PDCA_PID_TWIS1_RX            9
#define AVR32_PDCA_PID_SPI0_RX             10
#define AVR32_PDCA_PID_SPI1_RX             11
#define AVR32_PDCA_PID_AW_RX               12
#define AVR32_PDCA_PID_USART0_TX           13
#define AVR32_PDCA_PID_USART1_TX           14
#define AVR32_PDCA_PID_USART2_TX           15
#define AVR32_PDCA_PID_USART3_TX           16
#define AVR32_PDCA_PID_TWIM0_TX            17
#define AVR32_PDCA_PID_TWIM1_TX            18
#define AVR32_PDCA_PID_TWIS0_TX            19
#define AVR32_PDCA_PID_TWIS1_TX            20
#define AVR32_PDCA_PID_SPI0_TX             21
#define AVR32_PDCA_PID_SPI1_TX             22
#define AVR32_PDCA_PID_DACIFB0_CHA_TX      23
#define AVR32_PDCA_PID_DACIFB0_CHB_TX      24
#define AVR32_PDCA_PID_DACIFB1_CHA_TX      25
#define AVR32_PDCA_PID_DACIFB1_CHB_TX      26
#define AVR32_PDCA_PID_PWM_TX              27
#define AVR32_PDCA_PID_AW_TX               28
#define AVR32_PDCA_PID_USART4_RX           31
#define AVR32_PDCA_PID_TWIM2_RX            32
#define AVR32_PDCA_PID_TWIS2_RX            33
#define AVR32_PDCA_PID_USART4_TX           34
#define AVR32_PDCA_PID_TWIM2_TX            35
#define AVR32_PDCA_PID_TWIS2_TX            36
#define AVR32_PDCA_PID_IISC_RX             44:37
#define AVR32_PDCA_PID_IISC_TX             52:45

#include "avr32/pdca_123.h"



/* PEVC */

/* PEVC */ 
#define AVR32_PEVC_ADDRESS                 0xFFFF5C00
#define AVR32_PEVC                         (*((volatile avr32_pevc_t*)AVR32_PEVC_ADDRESS))
#define AVR32_PEVC_OVERRUN_IRQ             1121
#define AVR32_PEVC_TRIGGER_IRQ             1120
#define AVR32_PEVC_EVIN_BITS               34
#define AVR32_PEVC_EVS_BITS                24
#define AVR32_PEVC_GCLK_NUM                8:7
#define AVR32_PEVC_PADS_BITS               16
#define AVR32_PEVC_TRIGOUT_BITS            22
#define AVR32_PEVC_PAD_EVT_15_PIN          70
#define AVR32_PEVC_PAD_EVT_15_FUNCTION     0
#define AVR32_PEVC_PAD_EVT_2_PIN           71
#define AVR32_PEVC_PAD_EVT_2_FUNCTION      0
#define AVR32_PEVC_PAD_EVT_13_PIN          72
#define AVR32_PEVC_PAD_EVT_13_FUNCTION     0
#define AVR32_PEVC_PAD_EVT_14_PIN          73
#define AVR32_PEVC_PAD_EVT_14_FUNCTION     0
#define AVR32_PEVC_PAD_EVT_15_1_PIN        74
#define AVR32_PEVC_PAD_EVT_15_1_FUNCTION   0
#define AVR32_PEVC_PAD_EVT_1_PIN           40
#define AVR32_PEVC_PAD_EVT_1_FUNCTION      1
#define AVR32_PEVC_PAD_EVT_0_PIN           1
#define AVR32_PEVC_PAD_EVT_0_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_1_1_PIN         2
#define AVR32_PEVC_PAD_EVT_1_1_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_2_1_PIN         6
#define AVR32_PEVC_PAD_EVT_2_1_FUNCTION    2
#define AVR32_PEVC_PAD_EVT_3_PIN           7
#define AVR32_PEVC_PAD_EVT_3_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_13_1_PIN        10
#define AVR32_PEVC_PAD_EVT_13_1_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_14_1_PIN        11
#define AVR32_PEVC_PAD_EVT_14_1_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_4_PIN           22
#define AVR32_PEVC_PAD_EVT_4_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_5_PIN           23
#define AVR32_PEVC_PAD_EVT_5_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_6_PIN           34
#define AVR32_PEVC_PAD_EVT_6_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_7_PIN           35
#define AVR32_PEVC_PAD_EVT_7_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_12_PIN          37
#define AVR32_PEVC_PAD_EVT_12_FUNCTION     2
#define AVR32_PEVC_PAD_EVT_8_PIN           57
#define AVR32_PEVC_PAD_EVT_8_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_9_PIN           58
#define AVR32_PEVC_PAD_EVT_9_FUNCTION      2
#define AVR32_PEVC_PAD_EVT_10_PIN          59
#define AVR32_PEVC_PAD_EVT_10_FUNCTION     2
#define AVR32_PEVC_PAD_EVT_11_PIN          60
#define AVR32_PEVC_PAD_EVT_11_FUNCTION     2
#define AVR32_PEVC_PAD_EVT_12_1_PIN        61
#define AVR32_PEVC_PAD_EVT_12_1_FUNCTION   2
#define AVR32_PEVC_PAD_EVT_10_1_PIN        32
#define AVR32_PEVC_PAD_EVT_10_1_FUNCTION   3
#define AVR32_PEVC_PAD_EVT_11_1_PIN        33
#define AVR32_PEVC_PAD_EVT_11_1_FUNCTION   3
#define AVR32_PEVC_PAD_EVT_3_1_PIN         87
#define AVR32_PEVC_PAD_EVT_3_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_4_1_PIN         88
#define AVR32_PEVC_PAD_EVT_4_1_FUNCTION    3
#define AVR32_PEVC_PAD_EVT_5_1_PIN         95
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
#define AVR32_AC0AN0_PIN        22
#define AVR32_AC0AN0_FUNCTION   1
#define AVR32_AC0AN1_PIN        27
#define AVR32_AC0AN1_FUNCTION   0
#define AVR32_AC0AP0_PIN        20
#define AVR32_AC0AP0_FUNCTION   1
#define AVR32_AC0AP1_PIN        26
#define AVR32_AC0AP1_FUNCTION   0
#define AVR32_AC0BN0_PIN        21
#define AVR32_AC0BN0_FUNCTION   1
#define AVR32_AC0BN1_PIN        29
#define AVR32_AC0BN1_FUNCTION   0
#define AVR32_AC0BP0_PIN        23
#define AVR32_AC0BP0_FUNCTION   1
#define AVR32_AC0BP1_PIN        28
#define AVR32_AC0BP1_FUNCTION   0
#define AVR32_AC1AN0_PIN        13
#define AVR32_AC1AN0_FUNCTION   0
#define AVR32_AC1AN1_PIN        7
#define AVR32_AC1AN1_FUNCTION   1
#define AVR32_AC1AP0_PIN        12
#define AVR32_AC1AP0_FUNCTION   0
#define AVR32_AC1AP1_PIN        6
#define AVR32_AC1AP1_FUNCTION   1
#define AVR32_AC1BN0_PIN        15
#define AVR32_AC1BN0_FUNCTION   0
#define AVR32_AC1BN1_PIN        9
#define AVR32_AC1BN1_FUNCTION   1
#define AVR32_AC1BP0_PIN        14
#define AVR32_AC1BP0_FUNCTION   0
#define AVR32_AC1BP1_PIN        8
#define AVR32_AC1BP1_FUNCTION   1
#define AVR32_ADCIN0_PIN        4
#define AVR32_ADCIN0_FUNCTION   0
#define AVR32_ADCIN1_PIN        5
#define AVR32_ADCIN1_FUNCTION   0
#define AVR32_ADCIN10_PIN       21
#define AVR32_ADCIN10_FUNCTION  0
#define AVR32_ADCIN11_PIN       22
#define AVR32_ADCIN11_FUNCTION  0
#define AVR32_ADCIN12_PIN       23
#define AVR32_ADCIN12_FUNCTION  0
#define AVR32_ADCIN13_PIN       24
#define AVR32_ADCIN13_FUNCTION  0
#define AVR32_ADCIN14_PIN       25
#define AVR32_ADCIN14_FUNCTION  0
#define AVR32_ADCIN15_PIN       13
#define AVR32_ADCIN15_FUNCTION  2
#define AVR32_ADCIN2_PIN        6
#define AVR32_ADCIN2_FUNCTION   0
#define AVR32_ADCIN3_PIN        7
#define AVR32_ADCIN3_FUNCTION   0
#define AVR32_ADCIN4_PIN        8
#define AVR32_ADCIN4_FUNCTION   0
#define AVR32_ADCIN5_PIN        9
#define AVR32_ADCIN5_FUNCTION   0
#define AVR32_ADCIN6_PIN        10
#define AVR32_ADCIN6_FUNCTION   0
#define AVR32_ADCIN7_PIN        11
#define AVR32_ADCIN7_FUNCTION   0
#define AVR32_ADCIN8_PIN        19
#define AVR32_ADCIN8_FUNCTION   0
#define AVR32_ADCIN9_PIN        20
#define AVR32_ADCIN9_FUNCTION   0
#define AVR32_ADCREF0_PIN       16
#define AVR32_ADCREF0_FUNCTION  0
#define AVR32_ADCREF1_PIN       11
#define AVR32_ADCREF1_FUNCTION  1
#define AVR32_DAC0A_PIN         20
#define AVR32_DAC0A_FUNCTION    2
#define AVR32_DAC0B_PIN         21
#define AVR32_DAC0B_FUNCTION    2
#define AVR32_DAC1A_PIN         12
#define AVR32_DAC1A_FUNCTION    2
#define AVR32_DAC1B_PIN         15
#define AVR32_DAC1B_FUNCTION    2
#define AVR32_DACREF_PIN        16
#define AVR32_DACREF_FUNCTION   2


/* PM */

/* PM */ 
#define AVR32_PM_ADDRESS                   0xFFFF0400
#define AVR32_PM                           (*((volatile avr32_pm_t*)AVR32_PM_ADDRESS))
#define AVR32_PM_IRQ                       384
#define AVR32_PM_CPU_MAX_FREQ              66000000
#define AVR32_PM_HSB_MAX_FREQ              66000000
#define AVR32_PM_PBA_MAX_FREQ              66000000
#define AVR32_PM_PBB_MAX_FREQ              66000000
#define AVR32_PM_PBC_MAX_FREQ              66000000
#define AVR32_PM_CLK_AHB_PEVC              1
#define AVR32_PM_CLK_APB_NUM               3
#define AVR32_PM_RSTM_N_PIN               126
#define AVR32_PM_TEST_RESET_IN_PIN        124
#define AVR32_PM_TEST_RESET_OEN_PIN       125
#define AVR32_PM_TEST_RESET_OUT_PIN       126

#include "avr32/pm_412.h"


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
#define AVR32_PWM_PDCA_ID_TX               27
#define AVR32_PWM_TRIGGER_NUM              2
#define AVR32_PWM_EXT_FAULTS_0_PIN       85
#define AVR32_PWM_EXT_FAULTS_0_FUNCTION  0
#define AVR32_PWM_EXT_FAULTS_1_PIN       86
#define AVR32_PWM_EXT_FAULTS_1_FUNCTION  0
#define AVR32_PWM_EXT_FAULTS_0_1_PIN       48
#define AVR32_PWM_EXT_FAULTS_0_1_FUNCTION  2
#define AVR32_PWM_EXT_FAULTS_1_1_PIN       49
#define AVR32_PWM_EXT_FAULTS_1_1_FUNCTION  2
#define AVR32_PWM_EXT_FAULTS_0_2_PIN       85
#define AVR32_PWM_EXT_FAULTS_1_2_PIN       86
#define AVR32_PWM_PWMH_3_PIN               75
#define AVR32_PWM_PWMH_3_FUNCTION          0
#define AVR32_PWM_PWMH_2_PIN               77
#define AVR32_PWM_PWMH_2_FUNCTION          0
#define AVR32_PWM_PWMH_1_PIN               79
#define AVR32_PWM_PWMH_1_FUNCTION          0
#define AVR32_PWM_PWMH_0_PIN               81
#define AVR32_PWM_PWMH_0_FUNCTION          0
#define AVR32_PWM_PWMH_2_1_PIN             84
#define AVR32_PWM_PWMH_2_1_FUNCTION        0
#define AVR32_PWM_PWMH_0_1_PIN             41
#define AVR32_PWM_PWMH_0_1_FUNCTION        2
#define AVR32_PWM_PWMH_1_1_PIN             43
#define AVR32_PWM_PWMH_1_1_FUNCTION        2
#define AVR32_PWM_PWMH_2_2_PIN             45
#define AVR32_PWM_PWMH_2_2_FUNCTION        2
#define AVR32_PWM_PWMH_3_1_PIN             47
#define AVR32_PWM_PWMH_3_1_FUNCTION        2
#define AVR32_PWM_PWMH_3_2_PIN             75
#define AVR32_PWM_PWMH_1_2_PIN             79
#define AVR32_PWM_PWMH_0_2_PIN             81
#define AVR32_PWM_PWMH_2_3_PIN             84
#define AVR32_PWM_PWMH_3_3_PIN             75
#define AVR32_PWM_PWMH_1_3_PIN             79
#define AVR32_PWM_PWMH_0_3_PIN             81
#define AVR32_PWM_PWMH_2_4_PIN             84
#define AVR32_PWM_PWML_3_PIN               76
#define AVR32_PWM_PWML_3_FUNCTION          0
#define AVR32_PWM_PWML_2_PIN               78
#define AVR32_PWM_PWML_2_FUNCTION          0
#define AVR32_PWM_PWML_1_PIN               80
#define AVR32_PWM_PWML_1_FUNCTION          0
#define AVR32_PWM_PWML_0_PIN               82
#define AVR32_PWM_PWML_0_FUNCTION          0
#define AVR32_PWM_PWML_2_1_PIN             83
#define AVR32_PWM_PWML_2_1_FUNCTION        0
#define AVR32_PWM_PWML_0_1_PIN             40
#define AVR32_PWM_PWML_0_1_FUNCTION        2
#define AVR32_PWM_PWML_1_1_PIN             42
#define AVR32_PWM_PWML_1_1_FUNCTION        2
#define AVR32_PWM_PWML_2_2_PIN             44
#define AVR32_PWM_PWML_2_2_FUNCTION        2
#define AVR32_PWM_PWML_3_1_PIN             46
#define AVR32_PWM_PWML_3_1_FUNCTION        2
#define AVR32_PWM_PWML_3_2_PIN             76
#define AVR32_PWM_PWML_1_2_PIN             80
#define AVR32_PWM_PWML_0_2_PIN             82
#define AVR32_PWM_PWML_2_3_PIN             83
#define AVR32_PWM_PWML_3_3_PIN             76
#define AVR32_PWM_PWML_1_3_PIN             80
#define AVR32_PWM_PWML_0_3_PIN             82
#define AVR32_PWM_PWML_2_4_PIN             83

#include "avr32/pwm_501.h"


/* QDEC */

/* QDEC0 */ 
#define AVR32_QDEC0_ADDRESS                0xFFFF5000
#define AVR32_QDEC0                        (*((volatile avr32_qdec_t*)AVR32_QDEC0_ADDRESS))
#define AVR32_QDEC0_IRQ                    992
#define AVR32_QDEC0_GCLK_NUM               5
#define AVR32_QDEC0_QEPA_PIN           59
#define AVR32_QDEC0_QEPA_FUNCTION      0
#define AVR32_QDEC0_QEPA_1_PIN           98
#define AVR32_QDEC0_QEPA_1_FUNCTION      3
#define AVR32_QDEC0_QEPA_2_PIN           105
#define AVR32_QDEC0_QEPA_2_FUNCTION      3
#define AVR32_QDEC0_QEPB_PIN           60
#define AVR32_QDEC0_QEPB_FUNCTION      0
#define AVR32_QDEC0_QEPB_1_PIN           99
#define AVR32_QDEC0_QEPB_1_FUNCTION      3
#define AVR32_QDEC0_QEPB_2_PIN           106
#define AVR32_QDEC0_QEPB_2_FUNCTION      3
#define AVR32_QDEC0_QEPI_PIN           61
#define AVR32_QDEC0_QEPI_FUNCTION      0
#define AVR32_QDEC0_QEPI_1_PIN           96
#define AVR32_QDEC0_QEPI_1_FUNCTION      3
#define AVR32_QDEC0_QEPI_2_PIN           103
#define AVR32_QDEC0_QEPI_2_FUNCTION      3


/* QDEC1 */ 
#define AVR32_QDEC1_ADDRESS                0xFFFF5400
#define AVR32_QDEC1                        (*((volatile avr32_qdec_t*)AVR32_QDEC1_ADDRESS))
#define AVR32_QDEC1_IRQ                    1024
#define AVR32_QDEC1_GCLK_NUM               6
#define AVR32_QDEC1_QEPA_PIN               88
#define AVR32_QDEC1_QEPA_FUNCTION          0
#define AVR32_QDEC1_QEPA_1_PIN             38
#define AVR32_QDEC1_QEPA_1_FUNCTION        2
#define AVR32_QDEC1_QEPA_2_PIN             119
#define AVR32_QDEC1_QEPA_2_FUNCTION        3
#define AVR32_QDEC1_QEPB_PIN               87
#define AVR32_QDEC1_QEPB_FUNCTION          0
#define AVR32_QDEC1_QEPB_1_PIN             39
#define AVR32_QDEC1_QEPB_1_FUNCTION        2
#define AVR32_QDEC1_QEPB_2_PIN             120
#define AVR32_QDEC1_QEPB_2_FUNCTION        3
#define AVR32_QDEC1_QEPI_PIN               90
#define AVR32_QDEC1_QEPI_FUNCTION          0
#define AVR32_QDEC1_QEPI_1_PIN             36
#define AVR32_QDEC1_QEPI_1_FUNCTION        2
#define AVR32_QDEC1_QEPI_2_PIN             117
#define AVR32_QDEC1_QEPI_2_FUNCTION        3

#include "avr32/qdec_100.h"


/* SAU */

/* SAU */ 
#define AVR32_SAU_ADDRESS                  0xFFFE2400
#define AVR32_SAU                          (*((volatile avr32_sau_t*)AVR32_SAU_ADDRESS))
#define AVR32_SAU_HSB_ADDRESS              0x90000000
#define AVR32_SAU_HSB_SIZE                 0x400
#define AVR32_SAU_HSB                      (*((volatile avr32_sau_hsb_t*)AVR32_SAU_HSB_ADDRESS))
#define AVR32_SAU_IRQ                      64
#define AVR32_SAU_CHANNELS                 16

#include "avr32/sau_111.h"


/* SCIF */

/* SCIF */ 
#define AVR32_SCIF_ADDRESS                 0xFFFF0800
#define AVR32_SCIF                         (*((volatile avr32_scif_t*)AVR32_SCIF_ADDRESS))
#define AVR32_SCIF_IRQ                     416
#define AVR32_SCIF_GCLK_EXT_NUM            2
#define AVR32_SCIF_GCLK_NUM                12
#define AVR32_SCIF_GCLK_NUM_EXTCLK         10:9
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
#define AVR32_SCIF_DN_0_PIN                39
#define AVR32_SCIF_DN_1_PIN                56
#define AVR32_SCIF_FDIV_0_PIN              40
#define AVR32_SCIF_FDIV_1_PIN              57
#define AVR32_SCIF_FDIV_TEST_0_PIN         41
#define AVR32_SCIF_FDIV_TEST_1_PIN         59
#define AVR32_SCIF_GCLK_0_PIN              2
#define AVR32_SCIF_GCLK_0_FUNCTION         0
#define AVR32_SCIF_GCLK_1_PIN              3
#define AVR32_SCIF_GCLK_1_FUNCTION         0
#define AVR32_SCIF_GCLK_0_1_PIN            83
#define AVR32_SCIF_GCLK_0_1_FUNCTION       1
#define AVR32_SCIF_GCLK_1_1_PIN            84
#define AVR32_SCIF_GCLK_1_1_FUNCTION       1
#define AVR32_SCIF_GCLK_0_2_PIN            54
#define AVR32_SCIF_GCLK_0_2_FUNCTION       3
#define AVR32_SCIF_GCLK_1_2_PIN            55
#define AVR32_SCIF_GCLK_1_2_FUNCTION       3
#define AVR32_SCIF_GCLK_0_3_PIN            89
#define AVR32_SCIF_GCLK_0_3_FUNCTION       3
#define AVR32_SCIF_GCLK_1_3_PIN            90
#define AVR32_SCIF_GCLK_1_3_FUNCTION       3
#define AVR32_SCIF_GCLK_0_4_PIN            118
#define AVR32_SCIF_GCLK_0_4_FUNCTION       3
#define AVR32_SCIF_LOCK_0_PIN              42
#define AVR32_SCIF_LOCK_1_PIN              60
#define AVR32_SCIF_PLLCLK_1_PIN            58
#define AVR32_SCIF_PLLCLK_0_PIN            102
#define AVR32_SCIF_UP_0_PIN                43
#define AVR32_SCIF_UP_1_PIN                61
#define AVR32_SCIF_XIN0_PIN               62
#define AVR32_SCIF_XIN1_PIN               34
#define AVR32_SCIF_XIN32_PIN              32
#define AVR32_SCIF_XOUT0_PIN              63
#define AVR32_SCIF_XOUT1_PIN              35
#define AVR32_SCIF_XOUT32_PIN             33
#define AVR32_SCIF_RCOSC_FREQUENCY         115200
#define AVR32_SCIF_OSC32_FREQUENCY         32768
#include "avr32/scif_1021.h"


/* SDRAMC */

/* SDRAMC */ 
#define AVR32_SDRAMC_ADDRESS               0xFFFE2C00
#define AVR32_SDRAMC                       (*((volatile avr32_sdramc_t*)AVR32_SDRAMC_ADDRESS))
#define AVR32_SDRAMC_IRQ                   352

#include "avr32/sdramc_220.h"


/* SMC */

/* SMC */ 
#define AVR32_SMC_ADDRESS                  0xFFFE2800
#define AVR32_SMC                          (*((volatile avr32_smc_t*)AVR32_SMC_ADDRESS))

#include "avr32/smc_106.h"


/* SPI */

/* SPI0 */ 
#define AVR32_SPI0_ADDRESS                 0xFFFD1800
#define AVR32_SPI0                         (*((volatile avr32_spi_t*)AVR32_SPI0_ADDRESS))
#define AVR32_SPI0_IRQ                     736
#define AVR32_SPI0_CS_MSB                  3
#define AVR32_SPI0_PDCA_ID_RX              10
#define AVR32_SPI0_PDCA_ID_TX              21
#define AVR32_SPI0_MISO_PIN                97
#define AVR32_SPI0_MISO_FUNCTION           0
#define AVR32_SPI0_MISO_1_PIN              101
#define AVR32_SPI0_MISO_1_FUNCTION         0
#define AVR32_SPI0_MISO_2_PIN              43
#define AVR32_SPI0_MISO_2_FUNCTION         1
#define AVR32_SPI0_MOSI_PIN                96
#define AVR32_SPI0_MOSI_FUNCTION           0
#define AVR32_SPI0_MOSI_1_PIN              100
#define AVR32_SPI0_MOSI_1_FUNCTION         0
#define AVR32_SPI0_MOSI_2_PIN              42
#define AVR32_SPI0_MOSI_2_FUNCTION         1
#define AVR32_SPI0_NPCS_1_PIN              93
#define AVR32_SPI0_NPCS_1_FUNCTION         0
#define AVR32_SPI0_NPCS_2_PIN              94
#define AVR32_SPI0_NPCS_2_FUNCTION         0
#define AVR32_SPI0_NPCS_3_PIN              95
#define AVR32_SPI0_NPCS_3_FUNCTION         0
#define AVR32_SPI0_NPCS_0_PIN              99
#define AVR32_SPI0_NPCS_0_FUNCTION         0
#define AVR32_SPI0_NPCS_0_1_PIN            12
#define AVR32_SPI0_NPCS_0_1_FUNCTION       1
#define AVR32_SPI0_NPCS_1_1_PIN            13
#define AVR32_SPI0_NPCS_1_1_FUNCTION       1
#define AVR32_SPI0_NPCS_0_2_PIN            45
#define AVR32_SPI0_NPCS_0_2_FUNCTION       1
#define AVR32_SPI0_NPCS_1_2_PIN            46
#define AVR32_SPI0_NPCS_1_2_FUNCTION       1
#define AVR32_SPI0_NPCS_2_1_PIN            48
#define AVR32_SPI0_NPCS_2_1_FUNCTION       1
#define AVR32_SPI0_NPCS_3_1_PIN            49
#define AVR32_SPI0_NPCS_3_1_FUNCTION       1
#define AVR32_SPI0_NPCS_0_3_PIN            61
#define AVR32_SPI0_NPCS_0_3_FUNCTION       1
#define AVR32_SPI0_NPCS_1_3_PIN            64
#define AVR32_SPI0_NPCS_1_3_FUNCTION       1
#define AVR32_SPI0_NPCS_2_2_PIN            65
#define AVR32_SPI0_NPCS_2_2_FUNCTION       1
#define AVR32_SPI0_NPCS_3_2_PIN            66
#define AVR32_SPI0_NPCS_3_2_FUNCTION       1
#define AVR32_SPI0_NPCS_0_4_PIN            79
#define AVR32_SPI0_NPCS_0_4_FUNCTION       1
#define AVR32_SPI0_NPCS_1_4_PIN            80
#define AVR32_SPI0_NPCS_1_4_FUNCTION       1
#define AVR32_SPI0_NPCS_2_3_PIN            81
#define AVR32_SPI0_NPCS_2_3_FUNCTION       1
#define AVR32_SPI0_SCK_PIN                 98
#define AVR32_SPI0_SCK_FUNCTION            0 
#define AVR32_SPI0_SCK_1_PIN               102
#define AVR32_SPI0_SCK_1_FUNCTION          0
#define AVR32_SPI0_SCK_2_PIN               44
#define AVR32_SPI0_SCK_2_FUNCTION          1


/* SPI1 */ 
#define AVR32_SPI1_ADDRESS                 0xFFFF3400
#define AVR32_SPI1                         (*((volatile avr32_spi_t*)AVR32_SPI1_ADDRESS))
#define AVR32_SPI1_IRQ                     768
#define AVR32_SPI1_CS_MSB                  3
#define AVR32_SPI1_PDCA_ID_RX              11
#define AVR32_SPI1_PDCA_ID_TX              22
#define AVR32_SPI1_MISO_PIN                37
#define AVR32_SPI1_MISO_FUNCTION           0
#define AVR32_SPI1_MISO_1_PIN              52
#define AVR32_SPI1_MISO_1_FUNCTION         1
#define AVR32_SPI1_MISO_2_PIN              59
#define AVR32_SPI1_MISO_2_FUNCTION         1
#define AVR32_SPI1_MOSI_PIN                36
#define AVR32_SPI1_MOSI_FUNCTION           0
#define AVR32_SPI1_MOSI_1_PIN              51
#define AVR32_SPI1_MOSI_1_FUNCTION         1
#define AVR32_SPI1_MOSI_2_PIN              60
#define AVR32_SPI1_MOSI_2_FUNCTION         1
#define AVR32_SPI1_NPCS_0_PIN              39
#define AVR32_SPI1_NPCS_0_FUNCTION         0
#define AVR32_SPI1_NPCS_1_PIN              40
#define AVR32_SPI1_NPCS_1_FUNCTION         0
#define AVR32_SPI1_NPCS_2_PIN              41
#define AVR32_SPI1_NPCS_2_FUNCTION         0
#define AVR32_SPI1_NPCS_3_PIN              92
#define AVR32_SPI1_NPCS_3_FUNCTION         0
#define AVR32_SPI1_NPCS_0_1_PIN            14
#define AVR32_SPI1_NPCS_0_1_FUNCTION       1
#define AVR32_SPI1_NPCS_1_1_PIN            15
#define AVR32_SPI1_NPCS_1_1_FUNCTION       1
#define AVR32_SPI1_NPCS_2_1_PIN            24
#define AVR32_SPI1_NPCS_2_1_FUNCTION       1
#define AVR32_SPI1_NPCS_3_1_PIN            25
#define AVR32_SPI1_NPCS_3_1_FUNCTION       1
#define AVR32_SPI1_NPCS_3_2_PIN            54
#define AVR32_SPI1_NPCS_3_2_FUNCTION       1
#define AVR32_SPI1_NPCS_2_2_PIN            55
#define AVR32_SPI1_NPCS_2_2_FUNCTION       1
#define AVR32_SPI1_NPCS_1_2_PIN            56
#define AVR32_SPI1_NPCS_1_2_FUNCTION       1
#define AVR32_SPI1_NPCS_0_2_PIN            57
#define AVR32_SPI1_NPCS_0_2_FUNCTION       1
#define AVR32_SPI1_NPCS_1_3_PIN            72
#define AVR32_SPI1_NPCS_1_3_FUNCTION       1
#define AVR32_SPI1_NPCS_2_3_PIN            73
#define AVR32_SPI1_NPCS_2_3_FUNCTION       1
#define AVR32_SPI1_NPCS_3_3_PIN            74
#define AVR32_SPI1_NPCS_3_3_FUNCTION       1
#define AVR32_SPI1_SCK_PIN                 38
#define AVR32_SPI1_SCK_FUNCTION            0
#define AVR32_SPI1_SCK_1_PIN               53
#define AVR32_SPI1_SCK_1_FUNCTION          1
#define AVR32_SPI1_SCK_2_PIN               58
#define AVR32_SPI1_SCK_2_FUNCTION          1


#include "avr32/spi_211.h"


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
#define AVR32_TC0_A0_PIN                   51
#define AVR32_TC0_A0_FUNCTION              0
#define AVR32_TC0_A0_1_PIN                 111
#define AVR32_TC0_A0_1_FUNCTION            0
#define AVR32_TC0_A0_2_PIN                 123
#define AVR32_TC0_A0_2_FUNCTION            3
#define AVR32_TC0_A1_PIN                   54
#define AVR32_TC0_A1_FUNCTION              0
#define AVR32_TC0_A1_1_PIN                 113
#define AVR32_TC0_A1_1_FUNCTION            0
#define AVR32_TC0_A1_2_PIN                 126
#define AVR32_TC0_A1_2_FUNCTION            3
#define AVR32_TC0_A2_PIN                   57
#define AVR32_TC0_A2_FUNCTION              0
#define AVR32_TC0_A2_1_PIN                 115
#define AVR32_TC0_A2_1_FUNCTION            0
#define AVR32_TC0_A2_2_PIN                 118
#define AVR32_TC0_A2_2_FUNCTION            1
#define AVR32_TC0_A2_3_PIN                 69
#define AVR32_TC0_A2_3_FUNCTION            3
#define AVR32_TC0_B0_PIN                   52
#define AVR32_TC0_B0_FUNCTION              0
#define AVR32_TC0_B0_1_PIN                 112
#define AVR32_TC0_B0_1_FUNCTION            0
#define AVR32_TC0_B0_2_PIN                 124
#define AVR32_TC0_B0_2_FUNCTION            3
#define AVR32_TC0_B1_PIN                   55
#define AVR32_TC0_B1_FUNCTION              0
#define AVR32_TC0_B1_1_PIN                 114
#define AVR32_TC0_B1_1_FUNCTION            0
#define AVR32_TC0_B1_2_PIN                 68
#define AVR32_TC0_B1_2_FUNCTION            3
#define AVR32_TC0_B2_PIN                   58
#define AVR32_TC0_B2_FUNCTION              0
#define AVR32_TC0_B2_1_PIN                 116
#define AVR32_TC0_B2_1_FUNCTION            0
#define AVR32_TC0_B2_2_PIN                 99
#define AVR32_TC0_B2_2_FUNCTION            1
#define AVR32_TC0_B2_3_PIN                 71
#define AVR32_TC0_B2_3_FUNCTION            3
#define AVR32_TC0_CLK0_PIN                 56
#define AVR32_TC0_CLK0_FUNCTION            0
#define AVR32_TC0_CLK0_1_PIN               121
#define AVR32_TC0_CLK0_1_FUNCTION          0
#define AVR32_TC0_CLK0_2_PIN               75
#define AVR32_TC0_CLK0_2_FUNCTION          3
#define AVR32_TC0_CLK0_3_PIN               125
#define AVR32_TC0_CLK0_3_FUNCTION          3
#define AVR32_TC0_CLK1_PIN                 53
#define AVR32_TC0_CLK1_FUNCTION            0
#define AVR32_TC0_CLK1_1_PIN               122
#define AVR32_TC0_CLK1_1_FUNCTION          0
#define AVR32_TC0_CLK1_2_PIN               97
#define AVR32_TC0_CLK1_2_FUNCTION          3
#define AVR32_TC0_CLK2_PIN                 50
#define AVR32_TC0_CLK2_FUNCTION            0
#define AVR32_TC0_CLK2_1_PIN               98
#define AVR32_TC0_CLK2_1_FUNCTION          1
#define AVR32_TC0_CLK2_2_PIN               70
#define AVR32_TC0_CLK2_2_FUNCTION          3



/* TC1 */ 
#define AVR32_TC1_ADDRESS                  0xFFFF5800
#define AVR32_TC1                          (*((volatile avr32_tc_t*)AVR32_TC1_ADDRESS))
#define AVR32_TC1_IRQ0                     1088
#define AVR32_TC1_IRQ1                     1089
#define AVR32_TC1_IRQ2                     1090
#define AVR32_TC1_CLK_DIV1                 clk_32
#define AVR32_TC1_CLK_DIV2                 2
#define AVR32_TC1_CLK_DIV3                 8
#define AVR32_TC1_CLK_DIV4                 32
#define AVR32_TC1_CLK_DIV5                 128
#define AVR32_TC1_A0_PIN                   97
#define AVR32_TC1_A0_FUNCTION              1
#define AVR32_TC1_A0_1_PIN                 61
#define AVR32_TC1_A0_1_FUNCTION            3
#define AVR32_TC1_A1_PIN                   94
#define AVR32_TC1_A1_FUNCTION              1
#define AVR32_TC1_A1_1_PIN                 34
#define AVR32_TC1_A1_1_FUNCTION            3
#define AVR32_TC1_A2_PIN                   91
#define AVR32_TC1_A2_FUNCTION              1
#define AVR32_TC1_A2_1_PIN                 65
#define AVR32_TC1_A2_1_FUNCTION            3
#define AVR32_TC1_B0_PIN                   95
#define AVR32_TC1_B0_FUNCTION              1
#define AVR32_TC1_B0_1_PIN                 60
#define AVR32_TC1_B0_1_FUNCTION            3
#define AVR32_TC1_B1_PIN                   93
#define AVR32_TC1_B1_FUNCTION              1
#define AVR32_TC1_B1_1_PIN                 67
#define AVR32_TC1_B1_1_FUNCTION            3
#define AVR32_TC1_B2_PIN                   90
#define AVR32_TC1_B2_FUNCTION              1
#define AVR32_TC1_B2_1_PIN                 64
#define AVR32_TC1_B2_1_FUNCTION            3
#define AVR32_TC1_CLK0_PIN                 96
#define AVR32_TC1_CLK0_FUNCTION            1
#define AVR32_TC1_CLK0_1_PIN               59
#define AVR32_TC1_CLK0_1_FUNCTION          3
#define AVR32_TC1_CLK1_PIN                 92
#define AVR32_TC1_CLK1_FUNCTION            1
#define AVR32_TC1_CLK1_1_PIN               66
#define AVR32_TC1_CLK1_1_FUNCTION          3
#define AVR32_TC1_CLK2_PIN                 89
#define AVR32_TC1_CLK2_FUNCTION            1
#define AVR32_TC1_CLK2_1_PIN               104
#define AVR32_TC1_CLK2_1_FUNCTION          3

#include "avr32/tc_2231.h"


/* TWIM */

/* TWIM0 */ 
#define AVR32_TWIM0_ADDRESS                0xFFFF3800
#define AVR32_TWIM0                        (*((volatile avr32_twim_t*)AVR32_TWIM0_ADDRESS))
#define AVR32_TWIM0_IRQ                    800
#define AVR32_TWIM0_PDCA_ID_RX             6
#define AVR32_TWIM0_PDCA_ID_TX             17


/* TWIM1 */ 
#define AVR32_TWIM1_ADDRESS                0xFFFF3C00
#define AVR32_TWIM1                        (*((volatile avr32_twim_t*)AVR32_TWIM1_ADDRESS))
#define AVR32_TWIM1_IRQ                    832
#define AVR32_TWIM1_PDCA_ID_RX             7
#define AVR32_TWIM1_PDCA_ID_TX             18


/* TWIM2 */ 
#define AVR32_TWIM2_ADDRESS                0xFFFD2C00
#define AVR32_TWIM2                        (*((volatile avr32_twim_t*)AVR32_TWIM2_ADDRESS))
#define AVR32_TWIM2_IRQ                    1440
#define AVR32_TWIM2_PDCA_ID_RX             32
#define AVR32_TWIM2_PDCA_ID_TX             35

#include "avr32/twim_110.h"


/* TWIMS */

/* TWIMS0 */
#define AVR32_TWIMS0_TWALM_PIN             70
#define AVR32_TWIMS0_TWALM_FUNCTION        5
#define AVR32_TWIMS0_TWCK_PIN              67
#define AVR32_TWIMS0_TWCK_FUNCTION         0
#define AVR32_TWIMS0_TWCK_1_PIN            67
#define AVR32_TWIMS0_TWCK_INPUT_TEST_PIN   79
#define AVR32_TWIMS0_TWCK_OUTPUT_TEST_PIN  80
#define AVR32_TWIMS0_TWD_PIN               66
#define AVR32_TWIMS0_TWD_FUNCTION          0
#define AVR32_TWIMS0_TWD_1_PIN             66
#define AVR32_TWIMS0_TWD_INPUT_TEST_PIN    81
#define AVR32_TWIMS0_TWD_OUTPUT_TEST_PIN   82


/* TWIMS1 */
#define AVR32_TWIMS1_TWALM_PIN             71
#define AVR32_TWIMS1_TWALM_FUNCTION        5
#define AVR32_TWIMS1_TWCK_PIN              69
#define AVR32_TWIMS1_TWCK_FUNCTION         0
#define AVR32_TWIMS1_TWCK_1_PIN            69
#define AVR32_TWIMS1_TWCK_INPUT_TEST_PIN   83
#define AVR32_TWIMS1_TWCK_OUTPUT_TEST_PIN  84
#define AVR32_TWIMS1_TWD_PIN               68
#define AVR32_TWIMS1_TWD_FUNCTION          0
#define AVR32_TWIMS1_TWD_1_PIN             68
#define AVR32_TWIMS1_TWD_INPUT_TEST_PIN    96
#define AVR32_TWIMS1_TWD_OUTPUT_TEST_PIN   97


/* TWIMS2 */
#define AVR32_TWIMS2_TWCK_PIN              71
#define AVR32_TWIMS2_TWCK_FUNCTION         4
#define AVR32_TWIMS2_TWCK_1_PIN            71
#define AVR32_TWIMS2_TWCK_INPUT_TEST_PIN   75
#define AVR32_TWIMS2_TWCK_OUTPUT_TEST_PIN  76
#define AVR32_TWIMS2_TWD_PIN               70
#define AVR32_TWIMS2_TWD_FUNCTION          4
#define AVR32_TWIMS2_TWD_1_PIN             70
#define AVR32_TWIMS2_TWD_INPUT_TEST_PIN    77
#define AVR32_TWIMS2_TWD_OUTPUT_TEST_PIN   78



/* TWIS */

/* TWIS0 */ 
#define AVR32_TWIS0_ADDRESS                0xFFFF4000
#define AVR32_TWIS0                        (*((volatile avr32_twis_t*)AVR32_TWIS0_ADDRESS))
#define AVR32_TWIS0_IRQ                    864
#define AVR32_TWIS0_PDCA_ID_RX             8
#define AVR32_TWIS0_PDCA_ID_TX             19


/* TWIS1 */ 
#define AVR32_TWIS1_ADDRESS                0xFFFF4400
#define AVR32_TWIS1                        (*((volatile avr32_twis_t*)AVR32_TWIS1_ADDRESS))
#define AVR32_TWIS1_IRQ                    896
#define AVR32_TWIS1_PDCA_ID_RX             9
#define AVR32_TWIS1_PDCA_ID_TX             20


/* TWIS2 */ 
#define AVR32_TWIS2_ADDRESS                0xFFFD3000
#define AVR32_TWIS2                        (*((volatile avr32_twis_t*)AVR32_TWIS2_ADDRESS))
#define AVR32_TWIS2_IRQ                    1472
#define AVR32_TWIS2_PDCA_ID_RX             33
#define AVR32_TWIS2_PDCA_ID_TX             36

#include "avr32/twis_120.h"


/* USART */

/* USART0 */ 
#define AVR32_USART0_ADDRESS               0xFFFF2800
#define AVR32_USART0                       (*((volatile avr32_usart_t*)AVR32_USART0_ADDRESS))
#define AVR32_USART0_IRQ                   608
#define AVR32_USART0_CLK_DIV               8
#define AVR32_USART0_PDCA_ID_RX            2
#define AVR32_USART0_PDCA_ID_TX            13
#define AVR32_USART0_CLK_PIN               32
#define AVR32_USART0_CLK_FUNCTION          0
#define AVR32_USART0_CLK_1_PIN             78
#define AVR32_USART0_CLK_1_FUNCTION        1
#define AVR32_USART0_CLK_2_PIN             125
#define AVR32_USART0_CLK_2_FUNCTION        2
#define AVR32_USART0_CTS_PIN               125
#define AVR32_USART0_CTS_FUNCTION          0
#define AVR32_USART0_CTS_1_PIN             78
#define AVR32_USART0_CTS_1_FUNCTION        3
#define AVR32_USART0_RTS_PIN               126
#define AVR32_USART0_RTS_FUNCTION          0
#define AVR32_USART0_RTS_1_PIN             77
#define AVR32_USART0_RTS_1_FUNCTION        3
#define AVR32_USART0_RXD_PIN               124
#define AVR32_USART0_RXD_FUNCTION          0
#define AVR32_USART0_RXD_1_PIN             79
#define AVR32_USART0_RXD_1_FUNCTION        3
#define AVR32_USART0_RXD_2_PIN             97
#define AVR32_USART0_RXD_2_FUNCTION        4
#define AVR32_USART0_TXD_PIN               123
#define AVR32_USART0_TXD_FUNCTION          0
#define AVR32_USART0_TXD_1_PIN             80
#define AVR32_USART0_TXD_1_FUNCTION        3
#define AVR32_USART0_TXD_2_PIN             96
#define AVR32_USART0_TXD_2_FUNCTION        4


/* USART1 */ 
#define AVR32_USART1_ADDRESS               0xFFFD1400
#define AVR32_USART1                       (*((volatile avr32_usart_t*)AVR32_USART1_ADDRESS))
#define AVR32_USART1_IRQ                   640
#define AVR32_USART1_CLK_DIV               8
#define AVR32_USART1_PDCA_ID_RX            3
#define AVR32_USART1_PDCA_ID_TX            14
#define AVR32_USART1_CLK_PIN               47
#define AVR32_USART1_CLK_FUNCTION          1
#define AVR32_USART1_CLK_1_PIN             109
#define AVR32_USART1_CLK_1_FUNCTION        1
#define AVR32_USART1_CLK_2_PIN             38
#define AVR32_USART1_CLK_2_FUNCTION        3
#define AVR32_USART1_CTS_PIN               47
#define AVR32_USART1_CTS_FUNCTION          0
#define AVR32_USART1_CTS_1_PIN             109
#define AVR32_USART1_CTS_1_FUNCTION        0
#define AVR32_USART1_DCD_PIN               44
#define AVR32_USART1_DCD_FUNCTION          0
#define AVR32_USART1_DCD_1_PIN             105
#define AVR32_USART1_DCD_1_FUNCTION        0
#define AVR32_USART1_DSR_PIN               43
#define AVR32_USART1_DSR_FUNCTION          0
#define AVR32_USART1_DSR_1_PIN             104
#define AVR32_USART1_DSR_1_FUNCTION        0
#define AVR32_USART1_DTR_PIN               42
#define AVR32_USART1_DTR_FUNCTION          0
#define AVR32_USART1_DTR_1_PIN             103
#define AVR32_USART1_DTR_1_FUNCTION        0
#define AVR32_USART1_RI_PIN                45
#define AVR32_USART1_RI_FUNCTION           0
#define AVR32_USART1_RI_1_PIN              106
#define AVR32_USART1_RI_1_FUNCTION         0
#define AVR32_USART1_RTS_PIN               46
#define AVR32_USART1_RTS_FUNCTION          0
#define AVR32_USART1_RTS_1_PIN             110
#define AVR32_USART1_RTS_1_FUNCTION        0
#define AVR32_USART1_RXD_PIN               48
#define AVR32_USART1_RXD_FUNCTION          0
#define AVR32_USART1_RXD_1_PIN             108
#define AVR32_USART1_RXD_1_FUNCTION        0
#define AVR32_USART1_TXD_PIN               49
#define AVR32_USART1_TXD_FUNCTION          0
#define AVR32_USART1_TXD_1_PIN             107
#define AVR32_USART1_TXD_1_FUNCTION        0


/* USART2 */ 
#define AVR32_USART2_ADDRESS               0xFFFF2C00
#define AVR32_USART2                       (*((volatile avr32_usart_t*)AVR32_USART2_ADDRESS))
#define AVR32_USART2_IRQ                   672
#define AVR32_USART2_CLK_DIV               8
#define AVR32_USART2_PDCA_ID_RX            4
#define AVR32_USART2_PDCA_ID_TX            15
#define AVR32_USART2_CLK_PIN               70
#define AVR32_USART2_CLK_FUNCTION          1
#define AVR32_USART2_CLK_1_PIN             76
#define AVR32_USART2_CLK_1_FUNCTION        3
#define AVR32_USART2_CTS_PIN               64
#define AVR32_USART2_CTS_FUNCTION          2
#define AVR32_USART2_CTS_1_PIN             70
#define AVR32_USART2_CTS_1_FUNCTION        2
#define AVR32_USART2_RTS_PIN               65
#define AVR32_USART2_RTS_FUNCTION          2
#define AVR32_USART2_RTS_1_PIN             71
#define AVR32_USART2_RTS_1_FUNCTION        2
#define AVR32_USART2_RXD_PIN               66
#define AVR32_USART2_RXD_FUNCTION          2
#define AVR32_USART2_RXD_1_PIN             69
#define AVR32_USART2_RXD_1_FUNCTION        2
#define AVR32_USART2_TXD_PIN               67
#define AVR32_USART2_TXD_FUNCTION          2
#define AVR32_USART2_TXD_1_PIN             68
#define AVR32_USART2_TXD_1_FUNCTION        2



/* USART3 */ 
#define AVR32_USART3_ADDRESS               0xFFFF3000
#define AVR32_USART3                       (*((volatile avr32_usart_t*)AVR32_USART3_ADDRESS))
#define AVR32_USART3_IRQ                   704
#define AVR32_USART3_CLK_DIV               8
#define AVR32_USART3_PDCA_ID_RX            5
#define AVR32_USART3_PDCA_ID_TX            16
#define AVR32_USART3_CLK_PIN               119
#define AVR32_USART3_CLK_FUNCTION          1
#define AVR32_USART3_CLK_1_PIN             37
#define AVR32_USART3_CLK_1_FUNCTION        3
#define AVR32_USART3_CLK_2_PIN             113
#define AVR32_USART3_CLK_2_FUNCTION        3
#define AVR32_USART3_CLK_3_PIN             86
#define AVR32_USART3_CLK_3_FUNCTION        4
#define AVR32_USART3_CTS_PIN               119
#define AVR32_USART3_CTS_FUNCTION          0
#define AVR32_USART3_CTS_1_PIN             113
#define AVR32_USART3_CTS_1_FUNCTION        1
#define AVR32_USART3_CTS_2_PIN             83
#define AVR32_USART3_CTS_2_FUNCTION        5
#define AVR32_USART3_RTS_PIN               120
#define AVR32_USART3_RTS_FUNCTION          0
#define AVR32_USART3_RTS_1_PIN             114
#define AVR32_USART3_RTS_1_FUNCTION        1
#define AVR32_USART3_RTS_2_PIN             84
#define AVR32_USART3_RTS_2_FUNCTION        5
#define AVR32_USART3_RXD_PIN               118
#define AVR32_USART3_RXD_FUNCTION          0
#define AVR32_USART3_RXD_1_PIN             112
#define AVR32_USART3_RXD_1_FUNCTION        1
#define AVR32_USART3_RXD_2_PIN             82
#define AVR32_USART3_RXD_2_FUNCTION        5
#define AVR32_USART3_TXD_PIN               117
#define AVR32_USART3_TXD_FUNCTION          0
#define AVR32_USART3_TXD_1_PIN             111
#define AVR32_USART3_TXD_1_FUNCTION        1
#define AVR32_USART3_TXD_2_PIN             81
#define AVR32_USART3_TXD_2_FUNCTION        5

/* USART4 */
#define AVR32_USART4_ADDRESS               0xFFFD2800
#define AVR32_USART4                       (*((volatile avr32_usart_t*)AVR32_USART4_ADDRESS))
#define AVR32_USART4_IRQ                   1408
#define AVR32_USART4_CLK_DIV               8
#define AVR32_USART4_PDCA_ID_RX            31
#define AVR32_USART4_PDCA_ID_TX            34
#define AVR32_USART4_CLK_PIN               95
#define AVR32_USART4_CLK_FUNCTION          4
#define AVR32_USART4_CLK_1_PIN             121
#define AVR32_USART4_CLK_1_FUNCTION        4
#define AVR32_USART4_CTS_PIN               91
#define AVR32_USART4_CTS_FUNCTION          4
#define AVR32_USART4_CTS_1_PIN             105
#define AVR32_USART4_CTS_1_FUNCTION        4
#define AVR32_USART4_RTS_PIN               92
#define AVR32_USART4_RTS_FUNCTION          4
#define AVR32_USART4_RTS_1_PIN             106
#define AVR32_USART4_RTS_1_FUNCTION        4
#define AVR32_USART4_RXD_PIN               73
#define AVR32_USART4_RXD_FUNCTION          4
#define AVR32_USART4_RXD_1_PIN             90
#define AVR32_USART4_RXD_1_FUNCTION        4
#define AVR32_USART4_RXD_2_PIN             104
#define AVR32_USART4_RXD_2_FUNCTION        4
#define AVR32_USART4_TXD_PIN               72
#define AVR32_USART4_TXD_FUNCTION          4
#define AVR32_USART4_TXD_1_PIN             89
#define AVR32_USART4_TXD_1_FUNCTION        4
#define AVR32_USART4_TXD_2_PIN             103
#define AVR32_USART4_TXD_2_FUNCTION        4

#include "avr32/usart_602.h"


/* USBC */

/* USBC */ 
#define AVR32_USBC_ADDRESS                 0xFFFE1000
#define AVR32_USBC                         (*((volatile avr32_usbc_t*)AVR32_USBC_ADDRESS))
#define AVR32_USBC_IRQ                     256
#define AVR32_USBC_EPT_NBR                 7
#define AVR32_USBC_GCLK_NUM                0
#define AVR32_USBC_ENABLE_TEST_PIN         4
#define AVR32_USBC_EOPN_TEST_PIN           5
#define AVR32_USBC_FS_TEST_PIN             6
#define AVR32_USBC_ID_PIN                  64
#define AVR32_USBC_ID_FUNCTION             0
#define AVR32_USBC_ID_1_PIN                4
#define AVR32_USBC_ID_1_FUNCTION           1
#define AVR32_USBC_ID_2_PIN                34
#define AVR32_USBC_ID_2_FUNCTION           1
#define AVR32_USBC_ID_3_PIN                107
#define AVR32_USBC_ID_3_FUNCTION           1
#define AVR32_USBC_ID_4_PIN                121
#define AVR32_USBC_ID_4_FUNCTION           1
#define AVR32_USBC_OEN_TEST_PIN            7
#define AVR32_USBC_ONN_TEST_PIN            8
#define AVR32_USBC_PDONDM_TEST_PIN         9
#define AVR32_USBC_PDONDP_TEST_PIN         16
#define AVR32_USBC_PUIDLE_TEST_PIN         79
#define AVR32_USBC_PUON_TEST_PIN           69
#define AVR32_USBC_RXDM_TEST_PIN           19
#define AVR32_USBC_RXDP_TEST_PIN           20
#define AVR32_USBC_RXD_TEST_PIN            21
#define AVR32_USBC_SESSVLD_TEST_PIN        22
#define AVR32_USBC_TXD_TEST_PIN            23
#define AVR32_USBC_VAVBUSVLD_TEST_PIN      68
#define AVR32_USBC_VBOF_PIN                65
#define AVR32_USBC_VBOF_FUNCTION           0
#define AVR32_USBC_VBOF_1_PIN              5
#define AVR32_USBC_VBOF_1_FUNCTION         1
#define AVR32_USBC_VBOF_2_PIN              35
#define AVR32_USBC_VBOF_2_FUNCTION         1
#define AVR32_USBC_VBOF_3_PIN              108
#define AVR32_USBC_VBOF_3_FUNCTION         1
#define AVR32_USBC_VBOF_4_PIN              122
#define AVR32_USBC_VBOF_4_FUNCTION         1
#define AVR32_USBC_VBUSDISCHARGE_TEST_PIN  66
#define AVR32_USBC_VBUSPULSING_TEST_PIN    67


#include "avr32/usbc_210.h"


/* WDT */

/* WDT */ 
#define AVR32_WDT_ADDRESS                  0xFFFF1000
#define AVR32_WDT                          (*((volatile avr32_wdt_t*)AVR32_WDT_ADDRESS))

#include "avr32/wdt_410.h"

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
#define AVR32_PIN_PA10   10
#define AVR32_PIN_PA11   11
#define AVR32_PIN_PA12   12
#define AVR32_PIN_PA13   13
#define AVR32_PIN_PA14   14
#define AVR32_PIN_PA15   15
#define AVR32_PIN_PA16   16
#define AVR32_PIN_PA19   19
#define AVR32_PIN_PA20   20
#define AVR32_PIN_PA21   21
#define AVR32_PIN_PA22   22
#define AVR32_PIN_PA23   23
#define AVR32_PIN_PA24   24
#define AVR32_PIN_PA25   25
#define AVR32_PIN_PA26   26
#define AVR32_PIN_PA27   27
#define AVR32_PIN_PA28   28
#define AVR32_PIN_PA29   29
#define AVR32_PIN_PB00   32
#define AVR32_PIN_PB01   33
#define AVR32_PIN_PB02   34
#define AVR32_PIN_PB03   35
#define AVR32_PIN_PB04   36
#define AVR32_PIN_PB05   37
#define AVR32_PIN_PB06   38
#define AVR32_PIN_PB07   39
#define AVR32_PIN_PB08   40
#define AVR32_PIN_PB09   41
#define AVR32_PIN_PB10   42
#define AVR32_PIN_PB11   43
#define AVR32_PIN_PB12   44
#define AVR32_PIN_PB13   45
#define AVR32_PIN_PB14   46
#define AVR32_PIN_PB15   47
#define AVR32_PIN_PB16   48
#define AVR32_PIN_PB17   49
#define AVR32_PIN_PB18   50
#define AVR32_PIN_PB19   51
#define AVR32_PIN_PB20   52
#define AVR32_PIN_PB21   53
#define AVR32_PIN_PB22   54
#define AVR32_PIN_PB23   55
#define AVR32_PIN_PB24   56
#define AVR32_PIN_PB25   57
#define AVR32_PIN_PB26   58
#define AVR32_PIN_PB27   59
#define AVR32_PIN_PB28   60
#define AVR32_PIN_PB29   61
#define AVR32_PIN_PB30   62
#define AVR32_PIN_PB31   63
#define AVR32_PIN_PC00   64
#define AVR32_PIN_PC01   65
#define AVR32_PIN_PC02   66
#define AVR32_PIN_PC03   67
#define AVR32_PIN_PC04   68
#define AVR32_PIN_PC05   69
#define AVR32_PIN_PC06   70
#define AVR32_PIN_PC07   71
#define AVR32_PIN_PC08   72
#define AVR32_PIN_PC09   73
#define AVR32_PIN_PC10   74
#define AVR32_PIN_PC11   75
#define AVR32_PIN_PC12   76
#define AVR32_PIN_PC13   77
#define AVR32_PIN_PC14   78
#define AVR32_PIN_PC15   79
#define AVR32_PIN_PC16   80
#define AVR32_PIN_PC17   81
#define AVR32_PIN_PC18   82
#define AVR32_PIN_PC19   83
#define AVR32_PIN_PC20   84
#define AVR32_PIN_PC21   85
#define AVR32_PIN_PC22   86
#define AVR32_PIN_PC23   87
#define AVR32_PIN_PC24   88
#define AVR32_PIN_PC25   89
#define AVR32_PIN_PC26   90
#define AVR32_PIN_PC27   91
#define AVR32_PIN_PC28   92
#define AVR32_PIN_PC29   93
#define AVR32_PIN_PC30   94
#define AVR32_PIN_PC31   95
#define AVR32_PIN_PD00   96
#define AVR32_PIN_PD01   97
#define AVR32_PIN_PD02   98
#define AVR32_PIN_PD03   99
#define AVR32_PIN_PD04   100
#define AVR32_PIN_PD05   101
#define AVR32_PIN_PD06   102
#define AVR32_PIN_PD07   103
#define AVR32_PIN_PD08   104
#define AVR32_PIN_PD09   105
#define AVR32_PIN_PD10   106
#define AVR32_PIN_PD11   107
#define AVR32_PIN_PD12   108
#define AVR32_PIN_PD13   109
#define AVR32_PIN_PD14   110
#define AVR32_PIN_PD15   111
#define AVR32_PIN_PD16   112
#define AVR32_PIN_PD17   113
#define AVR32_PIN_PD18   114
#define AVR32_PIN_PD19   115
#define AVR32_PIN_PD20   116
#define AVR32_PIN_PD21   117
#define AVR32_PIN_PD22   118
#define AVR32_PIN_PD23   119
#define AVR32_PIN_PD24   120
#define AVR32_PIN_PD25   121
#define AVR32_PIN_PD26   122
#define AVR32_PIN_PD27   123
#define AVR32_PIN_PD28   124
#define AVR32_PIN_PD29   125
#define AVR32_PIN_PD30   126

#if !defined (DEPRECATED_DISABLE)
/* Generic clocks */
#define AVR32_SCIF_GCLK_GCLK2_EVENT        AVR32_SCIF_GCLK_GCLK2EVT
#define AVR32_SCIF_GCLK_GCLK3_EVENT        AVR32_SCIF_GCLK_GCLK3EVT
#define AVR32_SCIF_GCLK_GCLK0_PIN          AVR32_SCIF_GCLK_GCLK0PIN
#define AVR32_SCIF_GCLK_GCLK1_PIN          AVR32_SCIF_GCLK_GCLK1PIN

/* CANIF */ 
#define AVR32_CANIF_RXLINE_1_0_PIN          AVR32_CANIF_RXLINE_1_PIN
#define AVR32_CANIF_RXLINE_1_0_FUNCTION     AVR32_CANIF_RXLINE_1_FUNCTION
#define AVR32_CANIF_RXLINE_0_0_PIN          AVR32_CANIF_RXLINE_0_PIN
#define AVR32_CANIF_RXLINE_0_0_FUNCTION     AVR32_CANIF_RXLINE_0_FUNCTION
#define AVR32_CANIF_TXLINE_1_0_PIN          AVR32_CANIF_TXLINE_1_PIN
#define AVR32_CANIF_TXLINE_1_0_FUNCTION     AVR32_CANIF_TXLINE_1_FUNCTION
#define AVR32_CANIF_TXLINE_0_0_PIN          AVR32_CANIF_TXLINE_0_PIN
#define AVR32_CANIF_TXLINE_0_0_FUNCTION     AVR32_CANIF_TXLINE_0_FUNCTION

/* EIC */ 
#define AVR32_EIC_EXTINT_1_0_PIN             AVR32_EIC_EXTINT_1_PIN
#define AVR32_EIC_EXTINT_1_0_FUNCTION        AVR32_EIC_EXTINT_1_FUNCTION
#define AVR32_EIC_EXTINT_4_0_PIN             AVR32_EIC_EXTINT_4_PIN
#define AVR32_EIC_EXTINT_4_0_FUNCTION        AVR32_EIC_EXTINT_4_FUNCTION
#define AVR32_EIC_EXTINT_2_0_PIN             AVR32_EIC_EXTINT_2_PIN
#define AVR32_EIC_EXTINT_2_0_FUNCTION        AVR32_EIC_EXTINT_2_FUNCTION
#define AVR32_EIC_EXTINT_3_0_PIN             AVR32_EIC_EXTINT_3_PIN
#define AVR32_EIC_EXTINT_3_0_FUNCTION        AVR32_EIC_EXTINT_3_FUNCTION
#define AVR32_EIC_EXTINT_0_0_PIN             AVR32_EIC_EXTINT_0_PIN
#define AVR32_EIC_EXTINT_0_0_FUNCTION        AVR32_EIC_EXTINT_0_FUNCTION
#define AVR32_EIC_EXTINT_7_0_PIN             AVR32_EIC_EXTINT_7_PIN
#define AVR32_EIC_EXTINT_7_0_FUNCTION        AVR32_EIC_EXTINT_7_FUNCTION
#define AVR32_EIC_EXTINT_5_0_PIN             AVR32_EIC_EXTINT_5_PIN
#define AVR32_EIC_EXTINT_5_0_FUNCTION        AVR32_EIC_EXTINT_5_FUNCTION
#define AVR32_EIC_EXTINT_6_0_PIN             AVR32_EIC_EXTINT_6_PIN
#define AVR32_EIC_EXTINT_6_0_FUNCTION        AVR32_EIC_EXTINT_6_FUNCTION
#define AVR32_EIC_EXTINT_8_0_PIN             AVR32_EIC_EXTINT_8_PIN
#define AVR32_EIC_EXTINT_8_0_FUNCTION        AVR32_EIC_EXTINT_8_FUNCTION

/* PEVC */
#define AVR32_PEVC_PAD_EVT_15_0_PIN          AVR32_PEVC_PAD_EVT_15_PIN
#define AVR32_PEVC_PAD_EVT_15_0_FUNCTION     AVR32_PEVC_PAD_EVT_15_FUNCTION
#define AVR32_PEVC_PAD_EVT_2_0_PIN           AVR32_PEVC_PAD_EVT_2_PIN
#define AVR32_PEVC_PAD_EVT_2_0_FUNCTION      AVR32_PEVC_PAD_EVT_2_FUNCTION
#define AVR32_PEVC_PAD_EVT_13_0_PIN          AVR32_PEVC_PAD_EVT_13_PIN
#define AVR32_PEVC_PAD_EVT_13_0_FUNCTION     AVR32_PEVC_PAD_EVT_13_FUNCTION
#define AVR32_PEVC_PAD_EVT_14_0_PIN          AVR32_PEVC_PAD_EVT_14_PIN
#define AVR32_PEVC_PAD_EVT_14_0_FUNCTION     AVR32_PEVC_PAD_EVT_14_FUNCTION
#define AVR32_PEVC_PAD_EVT_1_0_PIN           AVR32_PEVC_PAD_EVT_1_PIN
#define AVR32_PEVC_PAD_EVT_1_0_FUNCTION      AVR32_PEVC_PAD_EVT_1_FUNCTION
#define AVR32_PEVC_PAD_EVT_0_0_PIN           AVR32_PEVC_PAD_EVT_0_PIN
#define AVR32_PEVC_PAD_EVT_0_0_FUNCTION      AVR32_PEVC_PAD_EVT_0_FUNCTION
#define AVR32_PEVC_PAD_EVT_3_0_PIN           AVR32_PEVC_PAD_EVT_3_PIN
#define AVR32_PEVC_PAD_EVT_3_0_FUNCTION      AVR32_PEVC_PAD_EVT_3_FUNCTION
#define AVR32_PEVC_PAD_EVT_4_0_PIN           AVR32_PEVC_PAD_EVT_4_PIN
#define AVR32_PEVC_PAD_EVT_4_0_FUNCTION      AVR32_PEVC_PAD_EVT_4_FUNCTION
#define AVR32_PEVC_PAD_EVT_5_0_PIN           AVR32_PEVC_PAD_EVT_5_PIN
#define AVR32_PEVC_PAD_EVT_5_0_FUNCTION      AVR32_PEVC_PAD_EVT_5_FUNCTION
#define AVR32_PEVC_PAD_EVT_6_0_PIN           AVR32_PEVC_PAD_EVT_6_PIN
#define AVR32_PEVC_PAD_EVT_6_0_FUNCTION      AVR32_PEVC_PAD_EVT_6_FUNCTION
#define AVR32_PEVC_PAD_EVT_7_0_PIN           AVR32_PEVC_PAD_EVT_7_PIN
#define AVR32_PEVC_PAD_EVT_7_0_FUNCTION      AVR32_PEVC_PAD_EVT_7_FUNCTION
#define AVR32_PEVC_PAD_EVT_12_0_PIN          AVR32_PEVC_PAD_EVT_12_PIN
#define AVR32_PEVC_PAD_EVT_12_0_FUNCTION     AVR32_PEVC_PAD_EVT_12_FUNCTION
#define AVR32_PEVC_PAD_EVT_8_0_PIN           AVR32_PEVC_PAD_EVT_8_PIN
#define AVR32_PEVC_PAD_EVT_8_0_FUNCTION      AVR32_PEVC_PAD_EVT_8_FUNCTION
#define AVR32_PEVC_PAD_EVT_9_0_PIN           AVR32_PEVC_PAD_EVT_9_PIN
#define AVR32_PEVC_PAD_EVT_9_0_FUNCTION      AVR32_PEVC_PAD_EVT_9_FUNCTION
#define AVR32_PEVC_PAD_EVT_10_0_PIN          AVR32_PEVC_PAD_EVT_10_PIN
#define AVR32_PEVC_PAD_EVT_10_0_FUNCTION     AVR32_PEVC_PAD_EVT_10_FUNCTION
#define AVR32_PEVC_PAD_EVT_11_0_PIN          AVR32_PEVC_PAD_EVT_11_PIN
#define AVR32_PEVC_PAD_EVT_11_0_FUNCTION     AVR32_PEVC_PAD_EVT_11_FUNCTION

/* PWM */
#define AVR32_PWM_EXT_FAULTS_0_0_PIN         AVR32_PWM_EXT_FAULTS_0_PIN
#define AVR32_PWM_EXT_FAULTS_0_0_FUNCTION    AVR32_PWM_EXT_FAULTS_0_FUNCTION
#define AVR32_PWM_EXT_FAULTS_1_0_PIN         AVR32_PWM_EXT_FAULTS_1_PIN
#define AVR32_PWM_EXT_FAULTS_1_0_FUNCTION    AVR32_PWM_EXT_FAULTS_1_FUNCTION
#define AVR32_PWM_PWMH_3_0_PIN               AVR32_PWM_PWMH_3_PIN
#define AVR32_PWM_PWMH_3_0_FUNCTION          AVR32_PWM_PWMH_3_FUNCTION
#define AVR32_PWM_PWMH_2_0_PIN               AVR32_PWM_PWMH_2_PIN
#define AVR32_PWM_PWMH_2_0_FUNCTION          AVR32_PWM_PWMH_2_FUNCTION
#define AVR32_PWM_PWMH_1_0_PIN               AVR32_PWM_PWMH_1_PIN
#define AVR32_PWM_PWMH_1_0_FUNCTION          AVR32_PWM_PWMH_1_FUNCTION
#define AVR32_PWM_PWMH_0_0_PIN               AVR32_PWM_PWMH_0_PIN
#define AVR32_PWM_PWMH_0_0_FUNCTION          AVR32_PWM_PWMH_0_FUNCTION
#define AVR32_PWM_PWML_3_0_PIN               AVR32_PWM_PWML_3_PIN
#define AVR32_PWM_PWML_3_0_FUNCTION          AVR32_PWM_PWML_3_FUNCTION
#define AVR32_PWM_PWML_2_0_PIN               AVR32_PWM_PWML_2_PIN
#define AVR32_PWM_PWML_2_0_FUNCTION          AVR32_PWM_PWML_2_FUNCTION
#define AVR32_PWM_PWML_1_0_PIN               AVR32_PWM_PWML_1_PIN
#define AVR32_PWM_PWML_1_0_FUNCTION          AVR32_PWM_PWML_1_FUNCTION
#define AVR32_PWM_PWML_0_0_PIN               AVR32_PWM_PWML_0_PIN
#define AVR32_PWM_PWML_0_0_FUNCTION          AVR32_PWM_PWML_0_FUNCTION

/* QDEC0 */
#define AVR32_QDEC0_QEPA_0_0_PIN             AVR32_QDEC0_QEPA_PIN
#define AVR32_QDEC0_QEPA_0_0_FUNCTION        AVR32_QDEC0_QEPA_FUNCTION
#define AVR32_QDEC0_QEPA_0_1_PIN             AVR32_QDEC0_QEPA_1_PIN
#define AVR32_QDEC0_QEPA_0_1_FUNCTION        AVR32_QDEC0_QEPA_1_FUNCTION
#define AVR32_QDEC0_QEPA_0_2_PIN             AVR32_QDEC0_QEPA_2_PIN
#define AVR32_QDEC0_QEPA_0_2_FUNCTION        AVR32_QDEC0_QEPA_2_FUNCTION
#define AVR32_QDEC0_QEPB_0_0_PIN             AVR32_QDEC0_QEPB_PIN
#define AVR32_QDEC0_QEPB_0_0_FUNCTION        AVR32_QDEC0_QEPB_FUNCTION
#define AVR32_QDEC0_QEPB_0_1_PIN             AVR32_QDEC0_QEPB_1_PIN
#define AVR32_QDEC0_QEPB_0_1_FUNCTION        AVR32_QDEC0_QEPB_1_FUNCTION
#define AVR32_QDEC0_QEPB_0_2_PIN             AVR32_QDEC0_QEPB_2_PIN
#define AVR32_QDEC0_QEPB_0_2_FUNCTION        AVR32_QDEC0_QEPB_2_FUNCTION
#define AVR32_QDEC0_QEPI_0_0_PIN             AVR32_QDEC0_QEPI_PIN
#define AVR32_QDEC0_QEPI_0_0_FUNCTION        AVR32_QDEC0_QEPI_FUNCTION
#define AVR32_QDEC0_QEPI_0_1_PIN             AVR32_QDEC0_QEPI_1_PIN
#define AVR32_QDEC0_QEPI_0_1_FUNCTION        AVR32_QDEC0_QEPI_1_FUNCTION
#define AVR32_QDEC0_QEPI_0_2_PIN             AVR32_QDEC0_QEPI_2_PIN
#define AVR32_QDEC0_QEPI_0_2_FUNCTION        AVR32_QDEC0_QEPI_2_FUNCTION

/* QDEC1 */
#define AVR32_QDEC1_QEPA_0_0_PIN             AVR32_QDEC1_QEPA_PIN
#define AVR32_QDEC1_QEPA_0_0_FUNCTION        AVR32_QDEC1_QEPA_FUNCTION
#define AVR32_QDEC1_QEPA_0_1_PIN             AVR32_QDEC1_QEPA_1_PIN
#define AVR32_QDEC1_QEPA_0_1_FUNCTION        AVR32_QDEC1_QEPA_1_FUNCTION
#define AVR32_QDEC1_QEPA_0_2_PIN             AVR32_QDEC1_QEPA_2_PIN
#define AVR32_QDEC1_QEPA_0_2_FUNCTION        AVR32_QDEC1_QEPA_2_FUNCTION
#define AVR32_QDEC1_QEPB_0_0_PIN             AVR32_QDEC1_QEPB_PIN
#define AVR32_QDEC1_QEPB_0_0_FUNCTION        AVR32_QDEC1_QEPB_FUNCTION
#define AVR32_QDEC1_QEPB_0_1_PIN             AVR32_QDEC1_QEPB_1_PIN
#define AVR32_QDEC1_QEPB_0_1_FUNCTION        AVR32_QDEC1_QEPB_1_FUNCTION
#define AVR32_QDEC1_QEPB_0_2_PIN             AVR32_QDEC1_QEPB_2_PIN
#define AVR32_QDEC1_QEPB_0_2_FUNCTION        AVR32_QDEC1_QEPB_2_FUNCTION
#define AVR32_QDEC1_QEPI_0_0_PIN             AVR32_QDEC1_QEPI_PIN
#define AVR32_QDEC1_QEPI_0_0_FUNCTION        AVR32_QDEC1_QEPI_FUNCTION
#define AVR32_QDEC1_QEPI_0_1_PIN             AVR32_QDEC1_QEPI_1_PIN
#define AVR32_QDEC1_QEPI_0_1_FUNCTION        AVR32_QDEC1_QEPI_1_FUNCTION
#define AVR32_QDEC1_QEPI_0_2_PIN             AVR32_QDEC1_QEPI_2_PIN
#define AVR32_QDEC1_QEPI_0_2_FUNCTION        AVR32_QDEC1_QEPI_2_FUNCTION


/* SCIF */ 
#define AVR32_SCIF_GCLK_0_0_PIN              AVR32_SCIF_GCLK_0_PIN
#define AVR32_SCIF_GCLK_0_0_FUNCTION         AVR32_SCIF_GCLK_0_FUNCTION
#define AVR32_SCIF_GCLK_1_0_PIN              AVR32_SCIF_GCLK_1_PIN
#define AVR32_SCIF_GCLK_1_0_FUNCTION         AVR32_SCIF_GCLK_1_FUNCTION


/* SPI0 */ 
#define AVR32_SPI0_MISO_0_0_PIN                AVR32_SPI0_MISO_PIN
#define AVR32_SPI0_MISO_0_0_FUNCTION           AVR32_SPI0_MISO_FUNCTION
#define AVR32_SPI0_MISO_0_1_PIN                AVR32_SPI0_MISO_1_PIN
#define AVR32_SPI0_MISO_0_1_FUNCTION           AVR32_SPI0_MISO_1_FUNCTION
#define AVR32_SPI0_MISO_0_2_PIN                AVR32_SPI0_MISO_2_PIN
#define AVR32_SPI0_MISO_0_2_FUNCTION           AVR32_SPI0_MISO_2_FUNCTION
#define AVR32_SPI0_MOSI_0_0_PIN                AVR32_SPI0_MOSI_PIN
#define AVR32_SPI0_MOSI_0_0_FUNCTION           AVR32_SPI0_MOSI_FUNCTION
#define AVR32_SPI0_MOSI_0_1_PIN                AVR32_SPI0_MOSI_1_PIN
#define AVR32_SPI0_MOSI_0_1_FUNCTION           AVR32_SPI0_MOSI_1_FUNCTION
#define AVR32_SPI0_MOSI_0_2_PIN                AVR32_SPI0_MOSI_2_PIN
#define AVR32_SPI0_MOSI_0_2_FUNCTION           AVR32_SPI0_MOSI_2_FUNCTION
#define AVR32_SPI0_NPCS_1_0_PIN                AVR32_SPI0_NPCS_1_PIN
#define AVR32_SPI0_NPCS_1_0_FUNCTION           AVR32_SPI0_NPCS_1_FUNCTION
#define AVR32_SPI0_NPCS_2_0_PIN                AVR32_SPI0_NPCS_2_PIN
#define AVR32_SPI0_NPCS_2_0_FUNCTION           AVR32_SPI0_NPCS_2_FUNCTION
#define AVR32_SPI0_NPCS_3_0_PIN                AVR32_SPI0_NPCS_3_PIN
#define AVR32_SPI0_NPCS_3_0_FUNCTION           AVR32_SPI0_NPCS_3_FUNCTION
#define AVR32_SPI0_NPCS_0_0_PIN                AVR32_SPI0_NPCS_0_PIN
#define AVR32_SPI0_NPCS_0_0_FUNCTION           AVR32_SPI0_NPCS_0_FUNCTION
#define AVR32_SPI0_SCK_0_0_PIN                 AVR32_SPI0_SCK_PIN
#define AVR32_SPI0_SCK_0_0_FUNCTION            AVR32_SPI0_SCK_FUNCTION 
#define AVR32_SPI0_SCK_0_1_PIN                 AVR32_SPI0_SCK_1_PIN
#define AVR32_SPI0_SCK_0_1_FUNCTION            AVR32_SPI0_SCK_1_FUNCTION
#define AVR32_SPI0_SCK_0_2_PIN                 AVR32_SPI0_SCK_2_PIN
#define AVR32_SPI0_SCK_0_2_FUNCTION            AVR32_SPI0_SCK_2_FUNCTION

/* SPI1 */ 
#define AVR32_SPI1_MISO_0_0_PIN                AVR32_SPI1_MISO_PIN
#define AVR32_SPI1_MISO_0_0_FUNCTION           AVR32_SPI1_MISO_FUNCTION
#define AVR32_SPI1_MISO_0_1_PIN                AVR32_SPI1_MISO_1_PIN
#define AVR32_SPI1_MISO_0_1_FUNCTION           AVR32_SPI1_MISO_1_FUNCTION
#define AVR32_SPI1_MISO_0_2_PIN                AVR32_SPI1_MISO_2_PIN
#define AVR32_SPI1_MISO_0_2_FUNCTION           AVR32_SPI1_MISO_2_FUNCTION
#define AVR32_SPI1_MOSI_0_0_PIN                AVR32_SPI1_MOSI_PIN
#define AVR32_SPI1_MOSI_0_0_FUNCTION           AVR32_SPI1_MOSI_FUNCTION
#define AVR32_SPI1_MOSI_0_1_PIN                AVR32_SPI1_MOSI_1_PIN
#define AVR32_SPI1_MOSI_0_1_FUNCTION           AVR32_SPI1_MOSI_1_FUNCTION
#define AVR32_SPI1_MOSI_0_2_PIN                AVR32_SPI1_MOSI_2_PIN
#define AVR32_SPI1_MOSI_0_2_FUNCTION           AVR32_SPI1_MOSI_2_FUNCTION
#define AVR32_SPI1_NPCS_0_0_PIN                AVR32_SPI1_NPCS_0_PIN
#define AVR32_SPI1_NPCS_0_0_FUNCTION           AVR32_SPI1_NPCS_0_FUNCTION
#define AVR32_SPI1_NPCS_1_0_PIN                AVR32_SPI1_NPCS_1_PIN
#define AVR32_SPI1_NPCS_1_0_FUNCTION           AVR32_SPI1_NPCS_1_FUNCTION
#define AVR32_SPI1_NPCS_2_0_PIN                AVR32_SPI1_NPCS_2_PIN
#define AVR32_SPI1_NPCS_2_0_FUNCTION           AVR32_SPI1_NPCS_2_FUNCTION
#define AVR32_SPI1_NPCS_3_0_PIN                AVR32_SPI1_NPCS_3_PIN
#define AVR32_SPI1_NPCS_3_0_FUNCTION           AVR32_SPI1_NPCS_3_FUNCTION
#define AVR32_SPI1_SCK_0_0_PIN                 AVR32_SPI1_SCK_PIN
#define AVR32_SPI1_SCK_0_0_FUNCTION            AVR32_SPI1_SCK_FUNCTION
#define AVR32_SPI1_SCK_0_1_PIN                 AVR32_SPI1_SCK_1_PIN
#define AVR32_SPI1_SCK_0_1_FUNCTION            AVR32_SPI1_SCK_1_FUNCTION
#define AVR32_SPI1_SCK_0_2_PIN                 AVR32_SPI1_SCK_2_PIN
#define AVR32_SPI1_SCK_0_2_FUNCTION            AVR32_SPI1_SCK_2_FUNCTION

/* TC0 */ 
#define AVR32_TC0_A0_0_0_PIN                   AVR32_TC0_A0_PIN
#define AVR32_TC0_A0_0_0_FUNCTION              AVR32_TC0_A0_FUNCTION
#define AVR32_TC0_A0_0_1_PIN                   AVR32_TC0_A0_1_PIN
#define AVR32_TC0_A0_0_1_FUNCTION              AVR32_TC0_A0_1_FUNCTION
#define AVR32_TC0_A0_0_2_PIN                   AVR32_TC0_A0_2_PIN
#define AVR32_TC0_A0_0_2_FUNCTION              AVR32_TC0_A0_2_FUNCTION
#define AVR32_TC0_A1_0_0_PIN                   AVR32_TC0_A1_PIN
#define AVR32_TC0_A1_0_0_FUNCTION              AVR32_TC0_A1_FUNCTION
#define AVR32_TC0_A1_0_1_PIN                   AVR32_TC0_A1_1_PIN
#define AVR32_TC0_A1_0_1_FUNCTION              AVR32_TC0_A1_1_FUNCTION
#define AVR32_TC0_A1_0_2_PIN                   AVR32_TC0_A1_2_PIN
#define AVR32_TC0_A1_0_2_FUNCTION              AVR32_TC0_A1_2_FUNCTION
#define AVR32_TC0_A2_0_0_PIN                   AVR32_TC0_A2_PIN
#define AVR32_TC0_A2_0_0_FUNCTION              AVR32_TC0_A2_FUNCTION
#define AVR32_TC0_A2_0_1_PIN                   AVR32_TC0_A2_1_PIN
#define AVR32_TC0_A2_0_1_FUNCTION              AVR32_TC0_A2_1_FUNCTION
#define AVR32_TC0_A2_0_2_PIN                   AVR32_TC0_A2_2_PIN
#define AVR32_TC0_A2_0_2_FUNCTION              AVR32_TC0_A2_2_FUNCTION
#define AVR32_TC0_A2_0_3_PIN                   AVR32_TC0_A2_3_PIN
#define AVR32_TC0_A2_0_3_FUNCTION              AVR32_TC0_A2_3_FUNCTION
#define AVR32_TC0_B0_0_0_PIN                   AVR32_TC0_B0_PIN
#define AVR32_TC0_B0_0_0_FUNCTION              AVR32_TC0_B0_FUNCTION
#define AVR32_TC0_B0_0_1_PIN                   AVR32_TC0_B0_1_PIN
#define AVR32_TC0_B0_0_1_FUNCTION              AVR32_TC0_B0_1_FUNCTION
#define AVR32_TC0_B0_0_2_PIN                   AVR32_TC0_B0_2_PIN
#define AVR32_TC0_B0_0_2_FUNCTION              AVR32_TC0_B0_2_FUNCTION
#define AVR32_TC0_B1_0_0_PIN                   AVR32_TC0_B1_PIN
#define AVR32_TC0_B1_0_0_FUNCTION              AVR32_TC0_B1_FUNCTION
#define AVR32_TC0_B1_0_1_PIN                   AVR32_TC0_B1_1_PIN
#define AVR32_TC0_B1_0_1_FUNCTION              AVR32_TC0_B1_1_FUNCTION
#define AVR32_TC0_B1_0_2_PIN                   AVR32_TC0_B1_2_PIN
#define AVR32_TC0_B1_0_2_FUNCTION              AVR32_TC0_B1_2_FUNCTION
#define AVR32_TC0_B2_0_0_PIN                   AVR32_TC0_B2_PIN
#define AVR32_TC0_B2_0_0_FUNCTION              AVR32_TC0_B2_FUNCTION
#define AVR32_TC0_B2_0_1_PIN                   AVR32_TC0_B2_1_PIN
#define AVR32_TC0_B2_0_1_FUNCTION              AVR32_TC0_B2_1_FUNCTION
#define AVR32_TC0_B2_0_2_PIN                   AVR32_TC0_B2_2_PIN
#define AVR32_TC0_B2_0_2_FUNCTION              AVR32_TC0_B2_2_FUNCTION
#define AVR32_TC0_B2_0_3_PIN                   AVR32_TC0_B2_3_PIN
#define AVR32_TC0_B2_0_3_FUNCTION              AVR32_TC0_B2_3_FUNCTION
#define AVR32_TC0_CLK0_0_0_PIN                 AVR32_TC0_CLK0_PIN
#define AVR32_TC0_CLK0_0_0_FUNCTION            AVR32_TC0_CLK0_FUNCTION
#define AVR32_TC0_CLK0_0_1_PIN                 AVR32_TC0_CLK0_1_PIN
#define AVR32_TC0_CLK0_0_1_FUNCTION            AVR32_TC0_CLK0_1_FUNCTION
#define AVR32_TC0_CLK0_0_2_PIN                 AVR32_TC0_CLK0_2_PIN
#define AVR32_TC0_CLK0_0_2_FUNCTION            AVR32_TC0_CLK0_2_FUNCTION
#define AVR32_TC0_CLK0_0_3_PIN                 AVR32_TC0_CLK0_3_PIN
#define AVR32_TC0_CLK0_0_3_FUNCTION            AVR32_TC0_CLK0_3_FUNCTION
#define AVR32_TC0_CLK1_0_0_PIN                 AVR32_TC0_CLK1_PIN
#define AVR32_TC0_CLK1_0_0_FUNCTION            AVR32_TC0_CLK1_FUNCTION
#define AVR32_TC0_CLK1_0_1_PIN                 AVR32_TC0_CLK1_1_PIN
#define AVR32_TC0_CLK1_0_1_FUNCTION            AVR32_TC0_CLK1_1_FUNCTION
#define AVR32_TC0_CLK1_0_2_PIN                 AVR32_TC0_CLK1_2_PIN
#define AVR32_TC0_CLK1_0_2_FUNCTION            AVR32_TC0_CLK1_2_FUNCTION
#define AVR32_TC0_CLK2_0_0_PIN                 AVR32_TC0_CLK2_PIN
#define AVR32_TC0_CLK2_0_0_FUNCTION            AVR32_TC0_CLK2_FUNCTION
#define AVR32_TC0_CLK2_0_1_PIN                 AVR32_TC0_CLK2_1_PIN
#define AVR32_TC0_CLK2_0_1_FUNCTION            AVR32_TC0_CLK2_1_FUNCTION
#define AVR32_TC0_CLK2_0_2_PIN                 AVR32_TC0_CLK2_2_PIN
#define AVR32_TC0_CLK2_0_2_FUNCTION            AVR32_TC0_CLK2_2_FUNCTION

/* TC1 */ 
#define AVR32_TC1_A0_0_0_PIN                   AVR32_TC1_A0_PIN
#define AVR32_TC1_A0_0_0_FUNCTION              AVR32_TC1_A0_FUNCTION
#define AVR32_TC1_A0_0_1_PIN                   AVR32_TC1_A0_1_PIN
#define AVR32_TC1_A0_0_1_FUNCTION              AVR32_TC1_A0_1_FUNCTION
#define AVR32_TC1_A1_0_0_PIN                   AVR32_TC1_A1_PIN
#define AVR32_TC1_A1_0_0_FUNCTION              AVR32_TC1_A1_FUNCTION
#define AVR32_TC1_A1_0_1_PIN                   AVR32_TC1_A1_1_PIN
#define AVR32_TC1_A1_0_1_FUNCTION              AVR32_TC1_A1_1_FUNCTION
#define AVR32_TC1_A2_0_0_PIN                   AVR32_TC1_A2_PIN
#define AVR32_TC1_A2_0_0_FUNCTION              AVR32_TC1_A2_FUNCTION
#define AVR32_TC1_A2_0_1_PIN                   AVR32_TC1_A2_1_PIN
#define AVR32_TC1_A2_0_1_FUNCTION              AVR32_TC1_A2_1_FUNCTION
#define AVR32_TC1_B0_0_0_PIN                   AVR32_TC1_B0_PIN
#define AVR32_TC1_B0_0_0_FUNCTION              AVR32_TC1_B0_FUNCTION
#define AVR32_TC1_B0_0_1_PIN                   AVR32_TC1_B0_1_PIN
#define AVR32_TC1_B0_0_1_FUNCTION              AVR32_TC1_B0_1_FUNCTION
#define AVR32_TC1_B1_0_0_PIN                   AVR32_TC1_B1_PIN
#define AVR32_TC1_B1_0_0_FUNCTION              AVR32_TC1_B1_FUNCTION
#define AVR32_TC1_B1_0_1_PIN                   AVR32_TC1_B1_1_PIN
#define AVR32_TC1_B1_0_1_FUNCTION              AVR32_TC1_B1_1_FUNCTION
#define AVR32_TC1_B2_0_0_PIN                   AVR32_TC1_B2_PIN
#define AVR32_TC1_B2_0_0_FUNCTION              AVR32_TC1_B2_FUNCTION
#define AVR32_TC1_B2_0_1_PIN                   AVR32_TC1_B2_1_PIN
#define AVR32_TC1_B2_0_1_FUNCTION              AVR32_TC1_B2_1_FUNCTION
#define AVR32_TC1_CLK0_0_0_PIN                 AVR32_TC1_CLK0_PIN
#define AVR32_TC1_CLK0_0_0_FUNCTION            AVR32_TC1_CLK0_FUNCTION
#define AVR32_TC1_CLK0_0_1_PIN                 AVR32_TC1_CLK0_1_PIN
#define AVR32_TC1_CLK0_0_1_FUNCTION            AVR32_TC1_CLK0_1_FUNCTION
#define AVR32_TC1_CLK1_0_0_PIN                 AVR32_TC1_CLK1_PIN
#define AVR32_TC1_CLK1_0_0_FUNCTION            AVR32_TC1_CLK1_FUNCTION
#define AVR32_TC1_CLK1_0_1_PIN                 AVR32_TC1_CLK1_1_PIN
#define AVR32_TC1_CLK1_0_1_FUNCTION            AVR32_TC1_CLK1_1_FUNCTION
#define AVR32_TC1_CLK2_0_0_PIN                 AVR32_TC1_CLK2_PIN
#define AVR32_TC1_CLK2_0_0_FUNCTION            AVR32_TC1_CLK2_FUNCTION
#define AVR32_TC1_CLK2_0_1_PIN                 AVR32_TC1_CLK2_1_PIN
#define AVR32_TC1_CLK2_0_1_FUNCTION            AVR32_TC1_CLK2_1_FUNCTION


/* TWIMS0 */
#define AVR32_TWIMS0_TWCK_0_0_PIN              AVR32_TWIMS0_TWCK_PIN
#define AVR32_TWIMS0_TWCK_0_0_FUNCTION         AVR32_TWIMS0_TWCK_FUNCTION
#define AVR32_TWIMS0_TWCK_0_1_PIN              AVR32_TWIMS0_TWCK_1_PIN
#define AVR32_TWIMS0_TWCK_INPUT_TEST_0_0_PIN   AVR32_TWIMS0_TWCK_INPUT_TEST_PIN
#define AVR32_TWIMS0_TWCK_OUTPUT_TEST_0_0_PIN  AVR32_TWIMS0_TWCK_OUTPUT_TEST_PIN
#define AVR32_TWIMS0_TWD_0_0_PIN               AVR32_TWIMS0_TWD_PIN
#define AVR32_TWIMS0_TWD_0_0_FUNCTION          AVR32_TWIMS0_TWD_FUNCTION
#define AVR32_TWIMS0_TWD_0_1_PIN               AVR32_TWIMS0_TWD_1_PIN
#define AVR32_TWIMS0_TWD_INPUT_TEST_0_0_PIN    AVR32_TWIMS0_TWD_INPUT_TEST_PIN
#define AVR32_TWIMS0_TWD_OUTPUT_TEST_0_0_PIN   AVR32_TWIMS0_TWD_OUTPUT_TEST_PIN

/* TWIMS1 */
#define AVR32_TWIMS1_TWCK_0_0_PIN              AVR32_TWIMS1_TWCK_PIN
#define AVR32_TWIMS1_TWCK_0_0_FUNCTION         AVR32_TWIMS1_TWCK_FUNCTION
#define AVR32_TWIMS1_TWCK_0_1_PIN              AVR32_TWIMS1_TWCK_1_PIN
#define AVR32_TWIMS1_TWCK_INPUT_TEST_0_0_PIN   AVR32_TWIMS1_TWCK_INPUT_TEST_PIN
#define AVR32_TWIMS1_TWCK_OUTPUT_TEST_0_0_PIN  AVR32_TWIMS1_TWCK_OUTPUT_TEST_PIN
#define AVR32_TWIMS1_TWD_0_0_PIN               AVR32_TWIMS1_TWD_PIN
#define AVR32_TWIMS1_TWD_0_0_FUNCTION          AVR32_TWIMS1_TWD_FUNCTION
#define AVR32_TWIMS1_TWD_0_1_PIN               AVR32_TWIMS1_TWD_1_PIN
#define AVR32_TWIMS1_TWD_INPUT_TEST_0_0_PIN    AVR32_TWIMS1_TWD_INPUT_TEST_PIN
#define AVR32_TWIMS1_TWD_OUTPUT_TEST_0_0_PIN   AVR32_TWIMS1_TWD_OUTPUT_TEST_PIN

/* USART0 */ 
#define AVR32_USART0_CLK_0_0_PIN             AVR32_USART0_CLK_PIN
#define AVR32_USART0_CLK_0_0_FUNCTION        AVR32_USART0_CLK_FUNCTION
#define AVR32_USART0_CLK_0_1_PIN             AVR32_USART0_CLK_1_PIN
#define AVR32_USART0_CLK_0_1_FUNCTION        AVR32_USART0_CLK_1_FUNCTION
#define AVR32_USART0_CLK_0_2_PIN             AVR32_USART0_CLK_2_PIN
#define AVR32_USART0_CLK_0_2_FUNCTION        AVR32_USART0_CLK_2_FUNCTION
#define AVR32_USART0_CTS_0_0_PIN             AVR32_USART0_CTS_PIN
#define AVR32_USART0_CTS_0_0_FUNCTION        AVR32_USART0_CTS_FUNCTION
#define AVR32_USART0_CTS_0_1_PIN             AVR32_USART0_CTS_1_PIN
#define AVR32_USART0_CTS_0_1_FUNCTION        AVR32_USART0_CTS_1_FUNCTION
#define AVR32_USART0_RTS_0_0_PIN             AVR32_USART0_RTS_PIN
#define AVR32_USART0_RTS_0_0_FUNCTION        AVR32_USART0_RTS_FUNCTION
#define AVR32_USART0_RTS_0_1_PIN             AVR32_USART0_RTS_1_PIN
#define AVR32_USART0_RTS_0_1_FUNCTION        AVR32_USART0_RTS_1_FUNCTION
#define AVR32_USART0_RXD_0_0_PIN             AVR32_USART0_RXD_PIN
#define AVR32_USART0_RXD_0_0_FUNCTION        AVR32_USART0_RXD_FUNCTION
#define AVR32_USART0_RXD_0_1_PIN             AVR32_USART0_RXD_1_PIN
#define AVR32_USART0_RXD_0_1_FUNCTION        AVR32_USART0_RXD_1_FUNCTION
#define AVR32_USART0_TXD_0_0_PIN             AVR32_USART0_TXD_PIN
#define AVR32_USART0_TXD_0_0_FUNCTION        AVR32_USART0_TXD_FUNCTION
#define AVR32_USART0_TXD_0_1_PIN             AVR32_USART0_TXD_1_PIN
#define AVR32_USART0_TXD_0_1_FUNCTION        AVR32_USART0_TXD_1_FUNCTION

/* USART1 */ 
#define AVR32_USART1_CLK_0_0_PIN             AVR32_USART1_CLK_PIN
#define AVR32_USART1_CLK_0_0_FUNCTION        AVR32_USART1_CLK_FUNCTION
#define AVR32_USART1_CLK_0_1_PIN             AVR32_USART1_CLK_1_PIN
#define AVR32_USART1_CLK_0_1_FUNCTION        AVR32_USART1_CLK_1_FUNCTION
#define AVR32_USART1_CLK_0_2_PIN             AVR32_USART1_CLK_2_PIN
#define AVR32_USART1_CLK_0_2_FUNCTION        AVR32_USART1_CLK_2_FUNCTION
#define AVR32_USART1_CTS_0_0_PIN             AVR32_USART1_CTS_PIN
#define AVR32_USART1_CTS_0_0_FUNCTION        AVR32_USART1_CTS_FUNCTION
#define AVR32_USART1_CTS_0_1_PIN             AVR32_USART1_CTS_1_PIN
#define AVR32_USART1_CTS_0_1_FUNCTION        AVR32_USART1_CTS_1_FUNCTION
#define AVR32_USART1_DCD_0_0_PIN             AVR32_USART1_DCD_PIN
#define AVR32_USART1_DCD_0_0_FUNCTION        AVR32_USART1_DCD_FUNCTION
#define AVR32_USART1_DCD_0_1_PIN             AVR32_USART1_DCD_1_PIN
#define AVR32_USART1_DCD_0_1_FUNCTION        AVR32_USART1_DCD_1_FUNCTION
#define AVR32_USART1_DSR_0_0_PIN             AVR32_USART1_DSR_PIN
#define AVR32_USART1_DSR_0_0_FUNCTION        AVR32_USART1_DSR_FUNCTION
#define AVR32_USART1_DSR_0_1_PIN             AVR32_USART1_DSR_1_PIN
#define AVR32_USART1_DSR_0_1_FUNCTION        AVR32_USART1_DSR_1_FUNCTION
#define AVR32_USART1_DTR_0_0_PIN             AVR32_USART1_DTR_PIN
#define AVR32_USART1_DTR_0_0_FUNCTION        AVR32_USART1_DTR_FUNCTION
#define AVR32_USART1_DTR_0_1_PIN             AVR32_USART1_DTR_1_PIN
#define AVR32_USART1_DTR_0_1_FUNCTION        AVR32_USART1_DTR_1_FUNCTION
#define AVR32_USART1_RI_0_0_PIN              AVR32_USART1_RI_PIN
#define AVR32_USART1_RI_0_0_FUNCTION         AVR32_USART1_RI_FUNCTION
#define AVR32_USART1_RI_0_1_PIN              AVR32_USART1_RI_1_PIN
#define AVR32_USART1_RI_0_1_FUNCTION         AVR32_USART1_RI_1_FUNCTION
#define AVR32_USART1_RTS_0_0_PIN             AVR32_USART1_RTS_PIN
#define AVR32_USART1_RTS_0_0_FUNCTION        AVR32_USART1_RTS_FUNCTION
#define AVR32_USART1_RTS_0_1_PIN             AVR32_USART1_RTS_1_PIN
#define AVR32_USART1_RTS_0_1_FUNCTION        AVR32_USART1_RTS_1_FUNCTION
#define AVR32_USART1_RXD_0_0_PIN             AVR32_USART1_RXD_PIN
#define AVR32_USART1_RXD_0_0_FUNCTION        AVR32_USART1_RXD_FUNCTION
#define AVR32_USART1_RXD_0_1_PIN             AVR32_USART1_RXD_1_PIN
#define AVR32_USART1_RXD_0_1_FUNCTION        AVR32_USART1_RXD_1_FUNCTION
#define AVR32_USART1_TXD_0_0_PIN             AVR32_USART1_TXD_PIN
#define AVR32_USART1_TXD_0_0_FUNCTION        AVR32_USART1_TXD_FUNCTION
#define AVR32_USART1_TXD_0_1_PIN             AVR32_USART1_TXD_1_PIN
#define AVR32_USART1_TXD_0_1_FUNCTION        AVR32_USART1_TXD_1_FUNCTION

/* USART2 */
#define AVR32_USART2_CLK_0_0_PIN             AVR32_USART2_CLK_PIN
#define AVR32_USART2_CLK_0_0_FUNCTION        AVR32_USART2_CLK_FUNCTION
#define AVR32_USART2_CLK_0_1_PIN             AVR32_USART2_CLK_1_PIN
#define AVR32_USART2_CLK_0_1_FUNCTION        AVR32_USART2_CLK_1_FUNCTION
#define AVR32_USART2_CTS_0_0_PIN             AVR32_USART2_CTS_PIN
#define AVR32_USART2_CTS_0_0_FUNCTION        AVR32_USART2_CTS_FUNCTION
#define AVR32_USART2_CTS_0_1_PIN             AVR32_USART2_CTS_1_PIN
#define AVR32_USART2_CTS_0_1_FUNCTION        AVR32_USART2_CTS_1_FUNCTION
#define AVR32_USART2_RTS_0_0_PIN             AVR32_USART2_RTS_PIN
#define AVR32_USART2_RTS_0_0_FUNCTION        AVR32_USART2_RTS_FUNCTION
#define AVR32_USART2_RTS_0_1_PIN             AVR32_USART2_RTS_1_PIN
#define AVR32_USART2_RTS_0_1_FUNCTION        AVR32_USART2_RTS_1_FUNCTION
#define AVR32_USART2_RXD_0_0_PIN             AVR32_USART2_RXD_PIN
#define AVR32_USART2_RXD_0_0_FUNCTION        AVR32_USART2_RXD_FUNCTION
#define AVR32_USART2_RXD_0_1_PIN             AVR32_USART2_RXD_1_PIN
#define AVR32_USART2_RXD_0_1_FUNCTION        AVR32_USART2_RXD_1_FUNCTION
#define AVR32_USART2_TXD_0_0_PIN             AVR32_USART2_TXD_PIN
#define AVR32_USART2_TXD_0_0_FUNCTION        AVR32_USART2_TXD_FUNCTION
#define AVR32_USART2_TXD_0_1_PIN             AVR32_USART2_TXD_1_PIN
#define AVR32_USART2_TXD_0_1_FUNCTION        AVR32_USART2_TXD_1_FUNCTION

/* USART3 */
#define AVR32_USART3_CLK_0_0_PIN             AVR32_USART3_CLK_PIN
#define AVR32_USART3_CLK_0_0_FUNCTION        AVR32_USART3_CLK_FUNCTION
#define AVR32_USART3_CLK_0_1_PIN             AVR32_USART3_CLK_1_PIN
#define AVR32_USART3_CLK_0_1_FUNCTION        AVR32_USART3_CLK_1_FUNCTION
#define AVR32_USART3_CLK_0_2_PIN             AVR32_USART3_CLK_2_PIN
#define AVR32_USART3_CLK_0_2_FUNCTION        AVR32_USART3_CLK_2_FUNCTION
#define AVR32_USART3_CTS_0_0_PIN             AVR32_USART3_CTS_PIN
#define AVR32_USART3_CTS_0_0_FUNCTION        AVR32_USART3_CTS_FUNCTION
#define AVR32_USART3_CTS_0_1_PIN             AVR32_USART3_CTS_1_PIN
#define AVR32_USART3_CTS_0_1_FUNCTION        AVR32_USART3_CTS_1_FUNCTION
#define AVR32_USART3_RTS_0_0_PIN             AVR32_USART3_RTS_PIN
#define AVR32_USART3_RTS_0_0_FUNCTION        AVR32_USART3_RTS_FUNCTION
#define AVR32_USART3_RTS_0_1_PIN             AVR32_USART3_RTS_1_PIN
#define AVR32_USART3_RTS_0_1_FUNCTION        AVR32_USART3_RTS_1_FUNCTION
#define AVR32_USART3_RXD_0_0_PIN             AVR32_USART3_RXD_PIN
#define AVR32_USART3_RXD_0_0_FUNCTION        AVR32_USART3_RXD_FUNCTION
#define AVR32_USART3_RXD_0_1_PIN             AVR32_USART3_RXD_1_PIN
#define AVR32_USART3_RXD_0_1_FUNCTION        AVR32_USART3_RXD_1_FUNCTION
#define AVR32_USART3_TXD_0_0_PIN             AVR32_USART3_TXD_PIN
#define AVR32_USART3_TXD_0_0_FUNCTION        AVR32_USART3_TXD_FUNCTION
#define AVR32_USART3_TXD_0_1_PIN             AVR32_USART3_TXD_1_PIN
#define AVR32_USART3_TXD_0_1_FUNCTION        AVR32_USART3_TXD_1_FUNCTION

/* PKGANA */
#define AVR32_ADCREFN_PIN       						 18
#define AVR32_ADCREFN_FUNCTION  						 0
#define AVR32_ADCREFP_PIN                    17
#define AVR32_ADCREFP_FUNCTION               0
#endif

/* #ifndef AVR32_UC3C0128C_H_INCLUDED */
#endif

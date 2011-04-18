/*****************************************************************************
 *
 * Copyright (C) 2006-2010 Atmel Corporation
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
 * Model        : UC3L232
 * Revision     : $Revision: 68557 $
 * Checkin Date : $Date: 2010-01-23 04:09:52 +0100 (Sat, 23 Jan 2010) $
 *
 ****************************************************************************/
#ifndef AVR32_UC3L232T_H_INCLUDED
#define AVR32_UC3L232T_H_INCLUDED


/* Instance count */
#define AVR32_ACIFB_NUM                    1
#define AVR32_ADCIFB_NUM                   1
#define AVR32_AST_NUM                      1
#define AVR32_AW_NUM                       1
#define AVR32_CAT_NUM                      1
#define AVR32_EIC_NUM                      1
#define AVR32_FLASHCDW_NUM                 1
#define AVR32_FREQM_NUM                    1
#define AVR32_GPIO_NUM                     1
#define AVR32_HMATRIX_NUM                  1
#define AVR32_JTAG_NUM                     1
#define AVR32_PDCA_NUM                     1
#define AVR32_PM_NUM                       1
#define AVR32_PULLUP_NUM                   1
#define AVR32_PWMA_NUM                     1
#define AVR32_SAU_NUM                      1
#define AVR32_SCAN_NUM                     1
#define AVR32_SCIF_NUM                     1
#define AVR32_SPI_NUM                      1
#define AVR32_TC_NUM                       1
#define AVR32_TWIM_NUM                     2
#define AVR32_TWIMS_NUM                    2
#define AVR32_TWIS_NUM                     2
#define AVR32_USART_NUM                    3
#define AVR32_WDT_NUM                      1
#define AVR32_GPIO_LOCAL_NUM               1

/* Maskable module clocks */
#define AVR32_PM_CLK_GRP_CPU               0
#define AVR32_PM_CLK_GRP_HSB               1
#define AVR32_PM_CLK_GRP_PBA               2
#define AVR32_PM_CLK_GRP_PBB               3
#define AVR32_PM_NUM_CLK_GRPS              4
#define AVR32_PM_NUM_CLKS_PER_GRP0         1
#define AVR32_PM_NUM_CLKS_PER_GRP1         6
#define AVR32_PM_NUM_CLKS_PER_GRP2         25
#define AVR32_PM_NUM_CLKS_PER_GRP3         3

/* CPU clocks */
#define AVR32_OCD_CLK_CPU                  1

/* HSB clocks */
#define AVR32_PDCA_CLK_HSB                 32
#define AVR32_FLASHCDW_CLK_HSB             33
#define AVR32_SAU_CLK_HSB                  34
#define AVR32_HMATRIX_CLK_HSB_PBB_BRIDGE   35
#define AVR32_HMATRIX_CLK_HSB_PBA_BRIDGE   36
#define AVR32_PES_CLK_HSB                  37

/* PBA clocks */
#define AVR32_PDCA_CLK_PBA                 64
#define AVR32_INTC_CLK_PBA                 65
#define AVR32_PM_CLK_PBA                   66
#define AVR32_SCIF_CLK_PBA                 67
#define AVR32_AST_CLK_PBA                  68
#define AVR32_WDT_CLK_PBA                  69
#define AVR32_EIC_CLK_PBA                  70
#define AVR32_FREQM_CLK_PBA                71
#define AVR32_GPIO_CLK_PBA                 72
#define AVR32_USART0_CLK_PBA               73
#define AVR32_USART1_CLK_PBA               74
#define AVR32_USART2_CLK_PBA               75
#define AVR32_USART3_CLK_PBA               76
#define AVR32_SPI_CLK_PBA                  77
#define AVR32_TWIM0_CLK_PBA                78
#define AVR32_TWIM1_CLK_PBA                79
#define AVR32_TWIS0_CLK_PBA                80
#define AVR32_TWIS1_CLK_PBA                81
#define AVR32_PWMA_CLK_PBA                 82
#define AVR32_TC0_CLK_PBA                  83
#define AVR32_TC1_CLK_PBA                  83
#define AVR32_ADCIFB_CLK_PBA               84
#define AVR32_ACIFB_CLK_PBA                85
#define AVR32_CAT_CLK_PBA                  86
#define AVR32_AW_CLK_PBA                   87

/* PBB clocks */
#define AVR32_FLASHC_CLK_PBB               96
#define AVR32_HMATRIX_CLK_PBB              97
#define AVR32_SAU_CLK_PBB                  98

/* Generic clocks */
#define AVR32_PM_GCLK_GCLK0                0
#define AVR32_PM_GCLK_DFLLIF_MAIN          0
#define AVR32_PM_GCLK_GCLK1                1
#define AVR32_PM_GCLK_DFLLIF_DITHERING     1
#define AVR32_PM_GCLK_GCLK2                2
#define AVR32_PM_GCLK_AST                  2
#define AVR32_PM_GCLK_GCLK3                3
#define AVR32_PM_GCLK_PWMA                 3
#define AVR32_PM_GCLK_GCLK4                4
#define AVR32_PM_GCLK_CAT                  4
#define AVR32_PM_GCLK_ACIFB                4

/* Core */
#include "avr32/core_sc0_200.h"
/* OCD */
#include "avr32/ocd_s0_200.h"

/* CORE */
#define AVR32_CORE_OCD_DCCPU_READ_IRQ      33
#define AVR32_CORE_OCD_DCEMU_DIRTY_IRQ     32
#define AVR32_CORE_COMPARE_IRQ             0
#define AVR32_CORE_SCAN_CHAIN_MSB          9
#define AVR32_CORE_SCAN_CLOCK_MSB          1


/* OCD */

/* Memories */
#define AVR32_FLASH_ADDRESS                0x80000000
#define AVR32_FLASH_SIZE                   0x8000
#define AVR32_FLASH                        ((unsigned char *)AVR32_FLASH_ADDRESS)
#define AVR32_SAU_SLAVE_ADDRESS            0x90000000
#define AVR32_SAU_SLAVE_SIZE               0x00010000
#define AVR32_SAU_SLAVE                    ((unsigned char *)AVR32_SAU_SLAVE_ADDRESS)
#define AVR32_SRAM_ADDRESS                 0x00000000
#define AVR32_SRAM_SIZE                    0x00004000
#define AVR32_SRAM                         ((unsigned char *)AVR32_SRAM_ADDRESS)

/* Interrupt Controller */
#define AVR32_INTC_ADDRESS                 0xFFFF1000
#define AVR32_INTC                         (*((volatile avr32_intc_t*)AVR32_INTC_ADDRESS))
#define AVR32_INTC_NUM_INT_GRPS            31
#define AVR32_INTC_NUM_IRQS_PER_GRP0       1
#define AVR32_INTC_NUM_IRQS_PER_GRP1       2
#define AVR32_INTC_NUM_IRQS_PER_GRP10      4
#define AVR32_INTC_NUM_IRQS_PER_GRP11      4
#define AVR32_INTC_NUM_IRQS_PER_GRP12      1
#define AVR32_INTC_NUM_IRQS_PER_GRP13      1
#define AVR32_INTC_NUM_IRQS_PER_GRP14      6
#define AVR32_INTC_NUM_IRQS_PER_GRP15      1
#define AVR32_INTC_NUM_IRQS_PER_GRP16      1
#define AVR32_INTC_NUM_IRQS_PER_GRP17      1
#define AVR32_INTC_NUM_IRQS_PER_GRP18      1
#define AVR32_INTC_NUM_IRQS_PER_GRP19      1
#define AVR32_INTC_NUM_IRQS_PER_GRP2       1
#define AVR32_INTC_NUM_IRQS_PER_GRP20      1
#define AVR32_INTC_NUM_IRQS_PER_GRP21      1
#define AVR32_INTC_NUM_IRQS_PER_GRP22      1
#define AVR32_INTC_NUM_IRQS_PER_GRP23      1
#define AVR32_INTC_NUM_IRQS_PER_GRP24      1
#define AVR32_INTC_NUM_IRQS_PER_GRP25      3
#define AVR32_INTC_NUM_IRQS_PER_GRP26      3
#define AVR32_INTC_NUM_IRQS_PER_GRP27      1
#define AVR32_INTC_NUM_IRQS_PER_GRP28      1
#define AVR32_INTC_NUM_IRQS_PER_GRP29      1
#define AVR32_INTC_NUM_IRQS_PER_GRP3       1
#define AVR32_INTC_NUM_IRQS_PER_GRP30      1
#define AVR32_INTC_NUM_IRQS_PER_GRP4       4
#define AVR32_INTC_NUM_IRQS_PER_GRP5       4
#define AVR32_INTC_NUM_IRQS_PER_GRP6       4
#define AVR32_INTC_NUM_IRQS_PER_GRP7       1
#define AVR32_INTC_NUM_IRQS_PER_GRP8       1
#define AVR32_INTC_NUM_IRQS_PER_GRP9       1
#define AVR32_INTC_NUM_NMI                 1
#include "avr32/intc_101.h"


/* ACIFB */

/* ACIFB */
#define AVR32_ACIFB_ADDRESS                0xFFFF6400
#define AVR32_ACIFB                        (*((volatile avr32_acifb_t*)AVR32_ACIFB_ADDRESS))
#define AVR32_ACIFB_IRQ                    896
#define AVR32_ACIFB_AC_A_MSB               3
#define AVR32_ACIFB_AC_B_MSB               3
#define AVR32_ACIFB_AC_MSB                 7
#define AVR32_ACIFB_ACAN_0_PIN             7
#define AVR32_ACIFB_ACAN_1_PIN             12
#define AVR32_ACIFB_ACAP_0_PIN             1
#define AVR32_ACIFB_ACAP_1_PIN             10
#define AVR32_ACIFB_ACBN_3_PIN             3
#define AVR32_ACIFB_ACBN_0_PIN             5
#define AVR32_ACIFB_ACBP_0_PIN             2
#define AVR32_ACIFB_ACBP_1_PIN             4
#define AVR32_ACIFB_ACREFN_0_PIN           16
#define AVR32_ACIFB_TEST_ACOMP_1_PIN       8
#define AVR32_ACIFB_TEST_ACOMP_2_PIN       9
#define AVR32_ACIFB_TEST_ACOMP_3_PIN       11
#define AVR32_ACIFB_TEST_ACOMP_4_PIN       13
#define AVR32_ACIFB_TEST_ACOMP_5_PIN       14
#define AVR32_ACIFB_TEST_ACOMP_6_PIN       15
#define AVR32_ACIFB_TEST_ACOMP_7_PIN       17

#include "avr32/acifb_201.h"


/* ADCIFB */

/* ADCIFB */
#define AVR32_ADCIFB_ADDRESS               0xFFFF6000
#define AVR32_ADCIFB                       (*((volatile avr32_adcifb_t*)AVR32_ADCIFB_ADDRESS))
#define AVR32_ADCIFB_IRQ                   864
#define AVR32_ADCIFB_ADC_DATA_MSB          9
#define AVR32_ADCIFB_NCH_LOG2_MSB          3
#define AVR32_ADCIFB_NCH_MSB               9
#define AVR32_ADCIFB_AD_0_PIN              14
#define AVR32_ADCIFB_AD_0_FUNCTION         0
#define AVR32_ADCIFB_AD_1_PIN              15
#define AVR32_ADCIFB_AD_1_FUNCTION         0
#define AVR32_ADCIFB_AD_2_PIN              16
#define AVR32_ADCIFB_AD_2_FUNCTION         0
#define AVR32_ADCIFB_AD_3_PIN              17
#define AVR32_ADCIFB_AD_3_FUNCTION         0
#define AVR32_ADCIFB_AD_4_PIN              18
#define AVR32_ADCIFB_AD_4_FUNCTION         0
#define AVR32_ADCIFB_AD_5_FUNCTION         0
#define AVR32_ADCIFB_AD_6_FUNCTION         2
#define AVR32_ADCIFB_AD_7_FUNCTION         2
#define AVR32_ADCIFB_AD_8_FUNCTION         2
#define AVR32_ADCIFB_ADP_0_0_FUNCTION      1
#define AVR32_ADCIFB_ADP_1_0_FUNCTION      1
#define AVR32_ADCIFB_ADP_0_1_PIN           8
#define AVR32_ADCIFB_ADP_0_1_FUNCTION      3
#define AVR32_ADCIFB_ADP_1_1_PIN           9
#define AVR32_ADCIFB_ADP_1_1_FUNCTION      3
#define AVR32_ADCIFB_PRND_0_PIN            12
#define AVR32_ADCIFB_PRND_0_FUNCTION       0
#define AVR32_ADCIFB_TEST_CLK_0_PIN        4
#define AVR32_ADCIFB_TEST_DATA_0_PIN       12
#define AVR32_ADCIFB_TEST_DATA_1_PIN       13
#define AVR32_ADCIFB_TEST_EOC_0_PIN        5
#define AVR32_ADCIFB_TEST_ONSAR_0_PIN      7
#define AVR32_ADCIFB_TEST_SEL_0_PIN        8
#define AVR32_ADCIFB_TEST_SEL_1_PIN        9
#define AVR32_ADCIFB_TEST_SEL_2_PIN        10
#define AVR32_ADCIFB_TEST_START_0_PIN      11
#define AVR32_ADCIFB_TRIGGER_0_0_PIN       2
#define AVR32_ADCIFB_TRIGGER_0_0_FUNCTION  1
#define AVR32_ADCIFB_TRIGGER_0_1_FUNCTION  3
#define AVR32_ADCIFB_TRIGGER_0_2_FUNCTION  3

#include "avr32/adcifb_100.h"


/* AST */

/* AST */
#define AVR32_AST_ADDRESS                  0xFFFF1C00
#define AVR32_AST                          (*((volatile avr32_ast_t*)AVR32_AST_ADDRESS))
#define AVR32_AST_ALARM_IRQ                288
#define AVR32_AST_CLKREADY_IRQ             323
#define AVR32_AST_OVF_IRQ                  321
#define AVR32_AST_PER_IRQ                  320
#define AVR32_AST_READY_IRQ                322
#define AVR32_AST_CLK32                    1
#define AVR32_AST_GCLK_NUM                 2
#define AVR32_AST_GENCLK                   3
#define AVR32_AST_PB                       2
#define AVR32_AST_RCOSC                    0

#include "avr32/ast_300.h"


/* AW */

/* AW */
#define AVR32_AW_ADDRESS                   0xFFFF6C00
#define AVR32_AW                           (*((volatile avr32_aw_t*)AVR32_AW_ADDRESS))
#define AVR32_AW_IRQ                       960
#define AVR32_AW_PDCA_ID_RX                13
#define AVR32_AW_PDCA_ID_TX                30
#define AVR32_AW_DATAOUT_0_PIN             0

#include "avr32/aw_210.h"


/* CAT */

/* CAT */
#define AVR32_CAT_ADDRESS                  0xFFFF6800
#define AVR32_CAT                          (*((volatile avr32_cat_t*)AVR32_CAT_ADDRESS))
#define AVR32_CAT_IRQ                      928
#define AVR32_CAT_CSA_2_PIN                0
#define AVR32_CAT_CSA_1_PIN                1
#define AVR32_CAT_CSA_3_PIN                2
#define AVR32_CAT_CSA_7_PIN                4
#define AVR32_CAT_CSA_4_PIN                8
#define AVR32_CAT_CSA_5_PIN                10
#define AVR32_CAT_CSA_0_PIN                13
#define AVR32_CAT_CSA_6_PIN                14
#define AVR32_CAT_CSA_8_PIN                16
#define AVR32_CAT_CSB_3_PIN                3
#define AVR32_CAT_CSB_7_PIN                5
#define AVR32_CAT_CSB_2_PIN                7
#define AVR32_CAT_CSB_4_PIN                9
#define AVR32_CAT_CSB_5_PIN                12
#define AVR32_CAT_CSB_6_PIN                15
#define AVR32_CAT_CSB_8_PIN                17
#define AVR32_CAT_CSB_0_PIN                18
#define AVR32_CAT_DIS_0_PIN                17
#define AVR32_CAT_SMP_0_0_PIN              12
#define AVR32_CAT_SMP_0_0_FUNCTION         3
#define AVR32_CAT_SMP_0_1_PIN              14
#define AVR32_CAT_SMP_0_1_FUNCTION         3
#define AVR32_CAT_SMP_0_2_FUNCTION         3
#define AVR32_CAT_SMP_0_3_PIN              13
#define AVR32_CAT_SMP_0_4_PIN              17
#define AVR32_CAT_SYNC_0_0_FUNCTION        3
#define AVR32_CAT_SYNC_0_1_PIN             15
#define AVR32_CAT_SYNC_0_2_PIN             18
#define AVR32_CAT_VDIVEN_0_PIN             43
#define AVR32_CAT_VDIVEN_0_FUNCTION        5

#include "avr32/cat_100.h"


/* EIC */

/* EIC */
#define AVR32_EIC_ADDRESS                  0xFFFF2400
#define AVR32_EIC                          (*((volatile avr32_eic_t*)AVR32_EIC_ADDRESS))
#define AVR32_EIC_IRQ_1                   352
#define AVR32_EIC_IRQ_2                   353
#define AVR32_EIC_IRQ_3                   354
#define AVR32_EIC_IRQ_4                   355
#define AVR32_EIC_IRQ_5                   384
#define AVR32_EIC_STD_NUM                  5
#define AVR32_EIC_EXTINT_0_0_PIN           7
#define AVR32_EIC_EXTINT_1_0_PIN           9
#define AVR32_EIC_EXTINT_2_0_PIN           13
#define AVR32_EIC_EXTINT_3_0_PIN           15
#define AVR32_EIC_EXTINT_4_0_PIN           16
#define AVR32_EIC_EXTINT_5_0_PIN           18

#include "avr32/eic_301.h"


/* FLASHCDW */

/* FLASHCDW */
#define AVR32_FLASHCDW_ADDRESS             0xFFFE0000
#define AVR32_FLASHCDW                     (*((volatile avr32_flashcdw_t*)AVR32_FLASHCDW_ADDRESS))
#define AVR32_FLASHCDW_IRQ                 64
#define AVR32_FLASHCDW_FLASH_SIZE          32768
#define AVR32_FLASHCDW_FWS_0_MAX_FREQ      25000000
#define AVR32_FLASHCDW_FWS_1_MAX_FREQ      50000000
#define AVR32_FLASHCDW_PAGES_PR_REGION     64
#define AVR32_FLASHCDW_PAGE_SIZE           256
#define AVR32_FLASHCDW_USER_PAGE_ADDRESS   0x80800000
#define AVR32_FLASHCDW_USER_PAGE           ((volatile unsigned char*) AVR32_FLASHCDW_USER_PAGE_ADDRESS)
#define AVR32_FLASHCDW_USER_PAGE_SIZE      256
#define AVR32_FLASHCDW_EXTCLK_0_PIN        16
#define AVR32_FLASHCDW_FLASH_OBS_11_PIN    4
#define AVR32_FLASHCDW_FLASH_OBS_21_PIN    5
#define AVR32_FLASHCDW_FLASH_OBS_14_PIN    7
#define AVR32_FLASHCDW_FLASH_OBS_15_PIN    8
#define AVR32_FLASHCDW_FLASH_OBS_16_PIN    9
#define AVR32_FLASHCDW_FLASH_OBS_17_PIN    10
#define AVR32_FLASHCDW_FLASH_OBS_18_PIN    11
#define AVR32_FLASHCDW_FLASH_OBS_20_PIN    12
#define AVR32_FLASHCDW_FLASH_OBS_6_PIN     13
#define AVR32_FLASHCDW_FLASH_OBS_7_PIN     14
#define AVR32_FLASHCDW_FLASH_OBS_22_PIN    15
#define AVR32_FLASHCDW_FLASH_OBS_9_PIN     16
#define AVR32_FLASHCDW_FLASH_OBS_10_PIN    17
#define AVR32_FLASHCDW_FLASH_OBS_2_PIN     18
#define AVR32_FLASHCDW_LATDELCLK_0_0_PIN   9
#define AVR32_FLASHCDW_LATDELMATCH_0_PIN   7

#include "avr32/flashcdw_101.h"


/* FREQM */

/* FREQM */
#define AVR32_FREQM_ADDRESS                0xFFFF2800
#define AVR32_FREQM                        (*((volatile avr32_freqm_t*)AVR32_FREQM_ADDRESS))
#define AVR32_FREQM_IRQ                    416
#define AVR32_FREQM_CPU                    0
#define AVR32_FREQM_CRIPOSC                8
#define AVR32_FREQM_DFLL0                  7
#define AVR32_FREQM_GENCLK0                9
#define AVR32_FREQM_GENCLK1                10
#define AVR32_FREQM_GENCLK2                11
#define AVR32_FREQM_GENCLK3                12
#define AVR32_FREQM_GENCLK4                13
#define AVR32_FREQM_HSB                    1
#define AVR32_FREQM_NUM_CLK                17
#define AVR32_FREQM_OSC0                   4
#define AVR32_FREQM_OSC32                  5
#define AVR32_FREQM_PBA                    2
#define AVR32_FREQM_PBB                    3
#define AVR32_FREQM_RC120M                 15
#define AVR32_FREQM_RC120M_AW              14
#define AVR32_FREQM_RC32K                  16
#define AVR32_FREQM_RCOSC                  6
#define AVR32_FREQM_REFSEL_BITS            1
#define AVR32_FREQM_REF_OSC32              1
#define AVR32_FREQM_REF_RCOSC              0

#include "avr32/freqm_301.h"


/* GPIO */

/* GPIO */
#define AVR32_GPIO_ADDRESS                 0xFFFF2C00
#define AVR32_GPIO                         (*((volatile avr32_gpio_t*)AVR32_GPIO_ADDRESS))
#define AVR32_GPIO_IRQ_0                  448
#define AVR32_GPIO_IRQ_1                  449
#define AVR32_GPIO_IRQ_2                  450
#define AVR32_GPIO_IRQ_3                  451
#define AVR32_GPIO_IRQ_4                  452
#define AVR32_GPIO_IRQ_5                  453
#define AVR32_GPIO_EVER_DEFAULT_VAL        "{NUMBER_OF_PINS{1'b0}}"
#define AVR32_GPIO_EVER_IMPLEMENTED        "{NUMBER_OF_PINS{1'b1}}"
#define AVR32_GPIO_IRQ_MSB                 5
#define AVR32_GPIO_MAX_IRQ_MSB             5
#define AVR32_GPIO_PADDR_BITS              10
#define AVR32_GPIO_PINS_MSB                18
#define AVR32_GPIO_IRQS_PER_GROUP          8
#define AVR32_GPIO_NUMBER_OF_PINS          19
#define AVR32_GPIO_PADDR_MSB               9
#define AVR32_GPIO_PDATA_MSB               31
#define AVR32_GPIO_PORT_LENGTH             1

#include "avr32/gpio_210.h"


/* HMATRIX */

/* HMATRIX */
#define AVR32_HMATRIX_ADDRESS              0xFFFE0400
#define AVR32_HMATRIX                      (*((volatile avr32_hmatrix_t*)AVR32_HMATRIX_ADDRESS))
#define AVR32_HMATRIX_MASTER_CPU_DATA      0
#define AVR32_HMATRIX_MASTER_CPU_INSN      1
#define AVR32_HMATRIX_MASTER_CPU_SAB       2
#define AVR32_HMATRIX_MASTER_SAU           4
#define AVR32_HMATRIX_MASTER_NUM           5
#define AVR32_HMATRIX_MASTER_PDCA          3
#define AVR32_HMATRIX_SLAVE_FLASH          0
#define AVR32_HMATRIX_SLAVE_NUM            5
#define AVR32_HMATRIX_SLAVE_PBA            1
#define AVR32_HMATRIX_SLAVE_PBB            2
#define AVR32_HMATRIX_SLAVE_SRAM           3
#define AVR32_HMATRIX_SLAVE_SAU            4

#include "avr32/hmatrix_230.h"


/* JTAG */

/* JTAG */
#define AVR32_JTAG_TCK_0_PIN               0
#define AVR32_JTAG_TDI_0_PIN               3
#define AVR32_JTAG_TDO_0_PIN               2
#define AVR32_JTAG_TMS_0_PIN               1



/* PDCA */

/* PDCA */
#define AVR32_PDCA_ADDRESS                 0xFFFF0000
#define AVR32_PDCA                         (*((volatile avr32_pdca_t*)AVR32_PDCA_ADDRESS))
#define AVR32_PDCA_IRQ_0                  128
#define AVR32_PDCA_IRQ_1                  129
#define AVR32_PDCA_IRQ_2                  130
#define AVR32_PDCA_IRQ_3                  131
#define AVR32_PDCA_IRQ_4                  160
#define AVR32_PDCA_IRQ_5                  161
#define AVR32_PDCA_IRQ_6                  162
#define AVR32_PDCA_IRQ_7                  163
#define AVR32_PDCA_IRQ_8                  192
#define AVR32_PDCA_IRQ_9                  193
#define AVR32_PDCA_IRQ_10                 194
#define AVR32_PDCA_IRQ_11                 195
#define AVR32_PDCA_CHANNEL_LENGTH          12
#define AVR32_PDCA_PID_ADC_RX              9
#define AVR32_PDCA_PID_AW_RX               10
#define AVR32_PDCA_PID_AW_TX               21
#define AVR32_PDCA_PID_CAT_ACOUNT          11
#define AVR32_PDCA_PID_CAT_MBLEN           22
#define AVR32_PDCA_PID_SPI0_RX             4
#define AVR32_PDCA_PID_SPI0_TX             16
#define AVR32_PDCA_PID_TWIM0_RX            5
#define AVR32_PDCA_PID_TWIM0_TX            17
#define AVR32_PDCA_PID_TWIM1_RX            6
#define AVR32_PDCA_PID_TWIM1_TX            18
#define AVR32_PDCA_PID_TWIS0_RX            7
#define AVR32_PDCA_PID_TWIS0_TX            19
#define AVR32_PDCA_PID_TWIS1_RX            8
#define AVR32_PDCA_PID_TWIS1_TX            20
#define AVR32_PDCA_PID_USART0_RX           0
#define AVR32_PDCA_PID_USART0_TX           12
#define AVR32_PDCA_PID_USART1_RX           1
#define AVR32_PDCA_PID_USART1_TX           13
#define AVR32_PDCA_PID_USART2_RX           2
#define AVR32_PDCA_PID_USART2_TX           14
#define AVR32_PDCA_PID_USART3_RX           3
#define AVR32_PDCA_PID_USART3_TX           15

#include "avr32/pdca_120.h"


/* PM */

/* PM */
#define AVR32_PM_ADDRESS                   0xFFFF1400
#define AVR32_PM                           (*((volatile avr32_pm_t*)AVR32_PM_ADDRESS))
#define AVR32_PM_IRQ                       224
#define AVR32_PM_CPU_MAX_FREQ              50000000
#define AVR32_PM_HSB_MAX_FREQ              50000000
#define AVR32_PM_MCSEL_CRIPOSC             4
#define AVR32_PM_MCSEL_DFLL0               2
#define AVR32_PM_MCSEL_OSC0                1
#define AVR32_PM_MCSEL_RC120M              3
#define AVR32_PM_MCSEL_SLOW                0
#define AVR32_PM_PBA_MAX_FREQ              50000000
#define AVR32_PM_PBB_MAX_FREQ              50000000
#define AVR32_PM_CLK_APB_NUM               2
#define AVR32_PM_TEST_RESET_IN_0_PIN       4
#define AVR32_PM_TEST_RESET_OEN_0_PIN      5
#define AVR32_PM_TEST_RESET_OUT_0_PIN      6
#define AVR32_PM_AWEN_ACIFBWEN             1
#define AVR32_PM_AWEN_ACIFBWEN_MASK        0x00000002
#define AVR32_PM_AWEN_ACIFBWEN_OFFSET      1
#define AVR32_PM_AWEN_ACIFBWEN_SIZE        1
#define AVR32_PM_AWEN_ADCIFBWEN            2
#define AVR32_PM_AWEN_ADCIFBWEN_MASK       0x00000004
#define AVR32_PM_AWEN_ADCIFBWEN_OFFSET     2
#define AVR32_PM_AWEN_ADCIFBWEN_SIZE       1
#define AVR32_PM_AWEN_CATWEN               0
#define AVR32_PM_AWEN_CATWEN_MASK          0x00000001
#define AVR32_PM_AWEN_CATWEN_OFFSET        0
#define AVR32_PM_AWEN_CATWEN_SIZE          1
#define AVR32_PM_AWEN_TWIS0WEN             3
#define AVR32_PM_AWEN_TWIS0WEN_MASK        0x00000008
#define AVR32_PM_AWEN_TWIS0WEN_OFFSET      3
#define AVR32_PM_AWEN_TWIS0WEN_SIZE        1
#define AVR32_PM_AWEN_TWIS1WEN             4
#define AVR32_PM_AWEN_TWIS1WEN_MASK        0x00000010
#define AVR32_PM_AWEN_TWIS1WEN_OFFSET      4
#define AVR32_PM_AWEN_TWIS1WEN_SIZE        1
#define AVR32_PM_PPCR_MASK                 0x00000007
#define AVR32_PM_PPCR_FRC32                1
#define AVR32_PM_PPCR_FRC32_MASK           0x00000002
#define AVR32_PM_PPCR_FRC32_OFFSET         1
#define AVR32_PM_PPCR_FRC32_SIZE           1
#define AVR32_PM_PPCR_RSTPUN               0
#define AVR32_PM_PPCR_RSTPUN_MASK          0x00000001
#define AVR32_PM_PPCR_RSTPUN_OFFSET        0
#define AVR32_PM_PPCR_RSTPUN_SIZE          1
#define AVR32_PM_PPCR_RSTTM                2
#define AVR32_PM_PPCR_RSTTM_MASK           0x00000004
#define AVR32_PM_PPCR_RSTTM_OFFSET         2
#define AVR32_PM_PPCR_RSTTM_SIZE           1
#define AVR32_PM_PPCR_RESETVALUE           0x00000002
#define AVR32_PM_WCAUSE_CAT                0
#define AVR32_PM_WCAUSE_CAT_MASK           0x00000001
#define AVR32_PM_WCAUSE_CAT_OFFSET         0
#define AVR32_PM_WCAUSE_CAT_SIZE           1
#define AVR32_PM_WCAUSE_ACIFB              1
#define AVR32_PM_WCAUSE_ACIFB_MASK         0x00000002
#define AVR32_PM_WCAUSE_ACIFB_OFFSET       1
#define AVR32_PM_WCAUSE_ACIFB_SIZE         1
#define AVR32_PM_WCAUSE_ADCIFB             2
#define AVR32_PM_WCAUSE_ADCIFB_MASK        0x00000004
#define AVR32_PM_WCAUSE_ADCIFB_OFFSET      2
#define AVR32_PM_WCAUSE_ADCIFB_SIZE        1
#define AVR32_PM_WCAUSE_TWI0               3
#define AVR32_PM_WCAUSE_TWI0_MASK          0x00000008
#define AVR32_PM_WCAUSE_TWI0_OFFSET        3
#define AVR32_PM_WCAUSE_TWI0_SIZE          1
#define AVR32_PM_WCAUSE_TWI1               4
#define AVR32_PM_WCAUSE_TWI1_MASK          0x00000010
#define AVR32_PM_WCAUSE_TWI1_OFFSET        4
#define AVR32_PM_WCAUSE_TWI1_SIZE          1

#include "avr32/pm_400.h"


/* PULLUP */

/* PULLUP */
#define AVR32_PULLUP_OUTPUT_ONE_0_0_PIN    5
#define AVR32_PULLUP_OUTPUT_ONE_0_1_PIN    7
#define AVR32_PULLUP_OUTPUT_ONE_0_2_PIN    17



/* PWMA */

/* PWMA */
#define AVR32_PWMA_ADDRESS                 0xFFFF5400
#define AVR32_PWMA                         (*((volatile avr32_pwma_t*)AVR32_PWMA_ADDRESS))
#define AVR32_PWMA_IRQ                     768
#define AVR32_PWMA_CHANNELS_MSB            35
#define AVR32_PWMA_CH_SYNC_EVT             0
#define AVR32_PWMA_PWMA_EVT_IMPL_MASK      "36'b11111111"
#define AVR32_PWMA_NUM_CHANNELS            36
#define AVR32_PWMA_0_PIN                   0
#define AVR32_PWMA_1_PIN                   1
#define AVR32_PWMA_2_PIN                   2
#define AVR32_PWMA_3_PIN                   3
#define AVR32_PWMA_4_PIN                   4
#define AVR32_PWMA_5_PIN                   5
#define AVR32_PWMA_7_PIN                   7
#define AVR32_PWMA_8_PIN                   8
#define AVR32_PWMA_9_PIN                   9
#define AVR32_PWMA_10_PIN                  10
#define AVR32_PWMA_11_PIN                  11
#define AVR32_PWMA_12_PIN                  12
#define AVR32_PWMA_13_PIN                  13
#define AVR32_PWMA_14_PIN                  14
#define AVR32_PWMA_15_PIN                  15
#define AVR32_PWMA_16_PIN                  16
#define AVR32_PWMA_17_PIN                  17
#define AVR32_PWMA_18_PIN                  18

#include "avr32/pwma_101.h"


/* SAU */

/* SAU */
#define AVR32_SAU_ADDRESS                  0xFFFE0800
#define AVR32_SAU                          (*((volatile avr32_sau_t*)AVR32_SAU_ADDRESS))
#define AVR32_SAU_HSB_SIZE                 0x400
#define AVR32_SAU_HSB                      (*((volatile avr32_sau_hsb_t*)AVR32_SAU_HSB_ADDRESS))
#define AVR32_SAU_IRQ                      96
#define AVR32_SAU_CHANNELS                 16

#include "avr32/sau_100.h"


/* SCAN */

/* SCAN */
#define AVR32_SCAN_BURN_IN_IMPLEMENTED      0
#define AVR32_SCAN_CLOCKS_0_PIN            0
#define AVR32_SCAN_CLOCKS_1_PIN            4
#define AVR32_SCAN_ENABLE_FROM_PAD_0_PIN      5
#define AVR32_SCAN_IN_0_PIN                1
#define AVR32_SCAN_IN_1_PIN                2
#define AVR32_SCAN_IN_2_PIN                3
#define AVR32_SCAN_IN_3_PIN                8
#define AVR32_SCAN_IN_4_PIN                9
#define AVR32_SCAN_IN_5_PIN                10
#define AVR32_SCAN_IN_6_PIN                11
#define AVR32_SCAN_OCC_MODE_0_PIN          7
#define AVR32_SCAN_OUT_0_PIN               12
#define AVR32_SCAN_OUT_1_PIN               13
#define AVR32_SCAN_OUT_2_PIN               14
#define AVR32_SCAN_OUT_3_PIN               15
#define AVR32_SCAN_OUT_4_PIN               16
#define AVR32_SCAN_OUT_5_PIN               17
#define AVR32_SCAN_OUT_6_PIN               18



/* SCIF */

/* SCIF */
#define AVR32_SCIF_ADDRESS                 0xFFFF1800
#define AVR32_SCIF                         (*((volatile avr32_scif_t*)AVR32_SCIF_ADDRESS))
#define AVR32_SCIF_IRQ                     256
#define AVR32_SCIF_BOD33_IMPLEMENTED       0
#define AVR32_SCIF_BOD50_IMPLEMENTED       0
#define AVR32_SCIF_GCLK_ACIFB              4
#define AVR32_SCIF_GCLK_AST                2
#define AVR32_SCIF_GCLK_CAT                4
#define AVR32_SCIF_GCLK_DFLL0_REF          0
#define AVR32_SCIF_GCLK_DFLL0_SSG          1
#define AVR32_SCIF_GCLK_MSB                4
#define AVR32_SCIF_GCLK_NUM                5
#define AVR32_SCIF_GCLK_PWMA               3
#define AVR32_SCIF_GC_USES_CLK_1K          11
#define AVR32_SCIF_GC_USES_CLK_32          1
#define AVR32_SCIF_GC_USES_CLK_CPU         5
#define AVR32_SCIF_GC_USES_CLK_HSB         6
#define AVR32_SCIF_GC_USES_CLK_PBA         7
#define AVR32_SCIF_GC_USES_CLK_PBB         8
#define AVR32_SCIF_GC_USES_CLK_SLOW        0
#define AVR32_SCIF_GC_USES_CRIPOSC         10
#define AVR32_SCIF_GC_USES_DFLL0           2
#define AVR32_SCIF_GC_USES_OSC0            3
#define AVR32_SCIF_GC_USES_PLL0            3
#define AVR32_SCIF_GC_USES_RC120M          4
#define AVR32_SCIF_GC_USES_RC32K           9
#define AVR32_SCIF_GPLP_NUM                4
#define AVR32_SCIF_OSC_NUM                 2
#define AVR32_SCIF_PLL_NUM                 2
#define AVR32_SCIF_RCOSC_CALIBRATION_BITS  0
#define AVR32_SCIF_RCOSC_FREQUENCY         115200
#define AVR32_SCIF_CLOCK_TEST_0_PIN        4
#define AVR32_SCIF_CLOCK_TEST_1_PIN        5
#define AVR32_SCIF_CLOCK_TEST_4_PIN        7
#define AVR32_SCIF_CLOCK_TEST_5_PIN        11
#define AVR32_SCIF_CLOCK_TEST_6_PIN        13
#define AVR32_SCIF_CLOCK_TEST_3_PIN        14
#define AVR32_SCIF_DFLL_COARSE_TEST_0_PIN  4
#define AVR32_SCIF_DFLL_COARSE_TEST_1_PIN  5
#define AVR32_SCIF_DFLL_COARSE_TEST_2_PIN  7
#define AVR32_SCIF_DFLL_COARSE_TEST_3_PIN  8
#define AVR32_SCIF_DFLL_COARSE_TEST_4_PIN  9
#define AVR32_SCIF_DFLL_COARSE_TEST_5_PIN  10
#define AVR32_SCIF_DFLL_COARSE_TEST_6_PIN  11
#define AVR32_SCIF_DFLL_COARSE_TEST_7_PIN  12
#define AVR32_SCIF_DFLL_EN_TEST_0_PIN      13
#define AVR32_SCIF_DFLL_FINE_TEST_0_PIN    15
#define AVR32_SCIF_DFLL_FINE_TEST_1_PIN    16
#define AVR32_SCIF_DFLL_FINE_TEST_2_PIN    17
#define AVR32_SCIF_DFLL_FINE_TEST_3_PIN    18
#define AVR32_SCIF_DFLL_RST_TEST_0_PIN     14
#define AVR32_SCIF_GCLK_2_0_PIN            13
#define AVR32_SCIF_GCLK_2_0_FUNCTION       3
#define AVR32_SCIF_GCLK_2_1_PIN            9
#define AVR32_SCIF_GCLK_2_1_FUNCTION       5
#define AVR32_SCIF_GCLK_0_0_PIN            0
#define AVR32_SCIF_GCLK_0_0_FUNCTION       6
#define AVR32_SCIF_GCLK_2_2_PIN            10
#define AVR32_SCIF_GCLK_2_2_FUNCTION       6
#define AVR32_SCIF_GCLK_3_0_PIN            12
#define AVR32_SCIF_GCLK_3_0_FUNCTION       6
#define AVR32_SCIF_GCLK_4_0_PIN            14
#define AVR32_SCIF_GCLK_4_0_FUNCTION       6
#define AVR32_SCIF_VREG_CALIB_TEST_0_PIN   4
#define AVR32_SCIF_VREG_CALIB_TEST_1_PIN   5
#define AVR32_SCIF_VREG_CALIB_TEST_3_PIN   7
#define AVR32_SCIF_VREG_INTPD_TEST_0_PIN   18
#define AVR32_SCIF_VREG_SELVDD_TEST_0_PIN  15
#define AVR32_SCIF_VREG_SELVDD_TEST_1_PIN  16
#define AVR32_SCIF_VREG_SELVDD_TEST_2_PIN  17
#define AVR32_SCIF_XIN0_0_PIN              8
#define AVR32_SCIF_XIN32_0_PIN             10
#define AVR32_SCIF_XIN32_2_0_PIN           13
#define AVR32_SCIF_XOUT0_0_PIN             9
#define AVR32_SCIF_XOUT32_0_PIN            12

#include "avr32/scif_100.h"


/* SPI */

/* SPI */
#define AVR32_SPI_ADDRESS                  0xFFFF4000
#define AVR32_SPI                          (*((volatile avr32_spi_t*)AVR32_SPI_ADDRESS))
#define AVR32_SPI_IRQ                      608
#define AVR32_SPI_CS_MSB                   3
#define AVR32_SPI_PDCA_ID_RX               11
#define AVR32_SPI_PDCA_ID_TX               11
#define AVR32_SPI_MISO_0_0_PIN             4
#define AVR32_SPI_MISO_0_0_FUNCTION        0
#define AVR32_SPI_MISO_0_1_FUNCTION        2
#define AVR32_SPI_MOSI_0_0_PIN             5
#define AVR32_SPI_MOSI_0_0_FUNCTION        0
#define AVR32_SPI_MOSI_0_1_FUNCTION        2
#define AVR32_SPI_NPCS_0_0_PIN             7
#define AVR32_SPI_NPCS_0_0_FUNCTION        0
#define AVR32_SPI_NPCS_1_PIN               3
#define AVR32_SPI_NPCS_1_FUNCTION          1
#define AVR32_SPI_NPCS_2_0_PIN             8
#define AVR32_SPI_NPCS_2_0_FUNCTION        1
#define AVR32_SPI_NPCS_3_0_PIN             9
#define AVR32_SPI_NPCS_3_0_FUNCTION        1
#define AVR32_SPI_NPCS_2_1_PIN             0
#define AVR32_SPI_NPCS_2_1_FUNCTION        2
#define AVR32_SPI_NPCS_3_1_PIN             1
#define AVR32_SPI_NPCS_3_1_FUNCTION        2
#define AVR32_SPI_NPCS_0_1_FUNCTION        2
#define AVR32_SPI_SCK_0_0_FUNCTION         0
#define AVR32_SPI_SCK_0_1_FUNCTION         2

#include "avr32/spi_211.h"


/* TC */

/* TC0 */
#define AVR32_TC0_ADDRESS                  0xFFFF5800
#define AVR32_TC0                          (*((volatile avr32_tc_t*)AVR32_TC0_ADDRESS))
#define AVR32_TC0_IRQ0                     800
#define AVR32_TC0_IRQ1                     801
#define AVR32_TC0_IRQ2                     802
#define AVR32_TC0_CLK_DIV1                 clk_32
#define AVR32_TC0_CLK_DIV2                 2
#define AVR32_TC0_CLK_DIV3                 8
#define AVR32_TC0_CLK_DIV4                 32
#define AVR32_TC0_CLK_DIV5                 128
#define AVR32_TC0_A0_0_0_PIN               10
#define AVR32_TC0_A0_0_0_FUNCTION          2
#define AVR32_TC0_A0_0_1_PIN               13
#define AVR32_TC0_A0_0_1_FUNCTION          2
#define AVR32_TC0_A0_0_2_PIN               2
#define AVR32_TC0_A0_0_2_FUNCTION          3
#define AVR32_TC0_A1_0_0_PIN               17
#define AVR32_TC0_A1_0_0_FUNCTION          1
#define AVR32_TC0_A1_0_1_FUNCTION          2
#define AVR32_TC0_A1_0_2_PIN               5
#define AVR32_TC0_A1_0_2_FUNCTION          3
#define AVR32_TC0_A1_0_3_FUNCTION          3
#define AVR32_TC0_A2_0_0_PIN               8
#define AVR32_TC0_A2_0_0_FUNCTION          2
#define AVR32_TC0_A2_0_1_FUNCTION          2
#define AVR32_TC0_A2_0_2_FUNCTION          3
#define AVR32_TC0_B0_0_0_PIN               3
#define AVR32_TC0_B0_0_0_FUNCTION          3
#define AVR32_TC0_B0_0_1_FUNCTION          3
#define AVR32_TC0_B1_0_0_PIN               18
#define AVR32_TC0_B1_0_0_FUNCTION          1
#define AVR32_TC0_B1_0_1_FUNCTION          2
#define AVR32_TC0_B1_0_2_PIN               4
#define AVR32_TC0_B1_0_2_FUNCTION          3
#define AVR32_TC0_B1_0_3_FUNCTION          3
#define AVR32_TC0_B2_0_0_PIN               9
#define AVR32_TC0_B2_0_0_FUNCTION          2
#define AVR32_TC0_B2_0_1_FUNCTION          2
#define AVR32_TC0_B2_0_2_FUNCTION          3
#define AVR32_TC0_CLK0_0_PIN               16
#define AVR32_TC0_CLK0_0_FUNCTION          1
#define AVR32_TC0_CLK1_0_0_PIN             15
#define AVR32_TC0_CLK1_0_0_FUNCTION        1
#define AVR32_TC0_CLK1_0_1_PIN             12
#define AVR32_TC0_CLK1_0_1_FUNCTION        2
#define AVR32_TC0_CLK2_0_PIN               14
#define AVR32_TC0_CLK2_0_FUNCTION          1

#include "avr32/tc_2231.h"


/* TWIM */

/* TWIM0 */
#define AVR32_TWIM0_ADDRESS                0xFFFF4400
#define AVR32_TWIM0                        (*((volatile avr32_twim_t*)AVR32_TWIM0_ADDRESS))
#define AVR32_TWIM0_IRQ                    640
#define AVR32_TWIM0_PDCA_ID_RX             7
#define AVR32_TWIM0_PDCA_ID_TX             18


/* TWIM1 */
#define AVR32_TWIM1_ADDRESS                0xFFFF4800
#define AVR32_TWIM1                        (*((volatile avr32_twim_t*)AVR32_TWIM1_ADDRESS))
#define AVR32_TWIM1_IRQ                    672
#define AVR32_TWIM1_PDCA_ID_RX             7
#define AVR32_TWIM1_PDCA_ID_TX             18

#include "avr32/twim_100.h"


/* TWIMS */

/* TWIMS0 */
#define AVR32_TWIMS0_SCL_INPUT_TEST_0_PIN  4
#define AVR32_TWIMS0_SMB_ALERT_INPUT_TEST_0_PIN 8
#define AVR32_TWIMS0_TWALM_0_0_FUNCTION    3
#define AVR32_TWIMS0_TWALM_0_1_PIN         1
#define AVR32_TWIMS0_TWCK_0_0_PIN          4
#define AVR32_TWIMS0_TWCK_0_0_FUNCTION     1
#define AVR32_TWIMS0_TWCK_0_1_FUNCTION     1
#define AVR32_TWIMS0_TWCK_0_2_PIN          7
#define AVR32_TWIMS0_TWCK_0_2_FUNCTION     3
#define AVR32_TWIMS0_TWCK_0_3_FUNCTION     3
#define AVR32_TWIMS0_TWD_0_0_PIN           10
#define AVR32_TWIMS0_TWD_0_0_FUNCTION      0
#define AVR32_TWIMS0_TWD_0_1_FUNCTION      1
#define AVR32_TWIMS0_TWD_0_2_PIN           5


/* TWIMS1 */
#define AVR32_TWIMS1_SCL_INPUT_TEST_0_PIN  9
#define AVR32_TWIMS1_SDA_INPUT_TEST_0_PIN  12
#define AVR32_TWIMS1_SMB_ALERT_INPUT_TEST_0_PIN 10
#define AVR32_TWIMS1_TWALM_0_0_PIN         7
#define AVR32_TWIMS1_TWALM_0_0_FUNCTION    2
#define AVR32_TWIMS1_TWALM_0_1_FUNCTION    2
#define AVR32_TWIMS1_TWALM_0_2_FUNCTION    3
#define AVR32_TWIMS1_TWCK_0_0_PIN          5
#define AVR32_TWIMS1_TWCK_0_0_FUNCTION     1
#define AVR32_TWIMS1_TWD_0_PIN             17
#define AVR32_TWIMS1_TWD_0_FUNCTION        3



/* TWIS */

/* TWIS0 */
#define AVR32_TWIS0_ADDRESS                0xFFFF4C00
#define AVR32_TWIS0                        (*((volatile avr32_twis_t*)AVR32_TWIS0_ADDRESS))
#define AVR32_TWIS0_IRQ                    704
#define AVR32_TWIS0_PDCA_ID_RX             9
#define AVR32_TWIS0_PDCA_ID_TX             20


/* TWIS1 */
#define AVR32_TWIS1_ADDRESS                0xFFFF5000
#define AVR32_TWIS1                        (*((volatile avr32_twis_t*)AVR32_TWIS1_ADDRESS))
#define AVR32_TWIS1_IRQ                    736
#define AVR32_TWIS1_PDCA_ID_RX             9
#define AVR32_TWIS1_PDCA_ID_TX             20

#include "avr32/twis_110.h"


/* USART */

/* USART0 */
#define AVR32_USART0_ADDRESS               0xFFFF3000
#define AVR32_USART0                       (*((volatile avr32_usart_t*)AVR32_USART0_ADDRESS))
#define AVR32_USART0_IRQ                   480
#define AVR32_USART0_CLK_DIV               8
#define AVR32_USART0_PDCA_ID_RX            3
#define AVR32_USART0_PDCA_ID_TX            14
#define AVR32_USART0_CLK_0_0_PIN           2
#define AVR32_USART0_CLK_0_1_PIN           3
#define AVR32_USART0_CTS_0_0_PIN           3
#define AVR32_USART0_CTS_0_0_FUNCTION      0
#define AVR32_USART0_CTS_0_1_FUNCTION      0
#define AVR32_USART0_RTS_0_PIN             2
#define AVR32_USART0_RTS_0_FUNCTION        0
#define AVR32_USART0_RXD_0_PIN             1
#define AVR32_USART0_RXD_0_FUNCTION        0
#define AVR32_USART0_TXD_0_PIN             0
#define AVR32_USART0_TXD_0_FUNCTION        0


/* USART1 */
#define AVR32_USART1_ADDRESS               0xFFFF3400
#define AVR32_USART1                       (*((volatile avr32_usart_t*)AVR32_USART1_ADDRESS))
#define AVR32_USART1_IRQ                   512
#define AVR32_USART1_CLK_DIV               8
#define AVR32_USART1_PDCA_ID_RX            3
#define AVR32_USART1_PDCA_ID_TX            14
#define AVR32_USART1_CLK_0_0_FUNCTION      2
#define AVR32_USART1_CLK_0_1_FUNCTION      2
#define AVR32_USART1_CLK_0_2_FUNCTION      2
#define AVR32_USART1_CLK_0_3_PIN           1
#define AVR32_USART1_CLK_0_3_FUNCTION      3
#define AVR32_USART1_CTS_0_0_PIN           1
#define AVR32_USART1_CTS_0_0_FUNCTION      1
#define AVR32_USART1_CTS_0_1_FUNCTION      1
#define AVR32_USART1_RTS_0_0_PIN           0
#define AVR32_USART1_RTS_0_0_FUNCTION      1
#define AVR32_USART1_RTS_0_1_FUNCTION      1
#define AVR32_USART1_RXD_0_0_PIN           9
#define AVR32_USART1_RXD_0_0_FUNCTION      0
#define AVR32_USART1_RXD_0_1_FUNCTION      1
#define AVR32_USART1_RXD_0_2_PIN           4
#define AVR32_USART1_RXD_0_2_FUNCTION      2
#define AVR32_USART1_TXD_0_0_PIN           8
#define AVR32_USART1_TXD_0_0_FUNCTION      0
#define AVR32_USART1_TXD_0_1_FUNCTION      1
#define AVR32_USART1_TXD_0_2_PIN           5
#define AVR32_USART1_TXD_0_2_FUNCTION      2


/* USART2 */
#define AVR32_USART2_ADDRESS               0xFFFF3800
#define AVR32_USART2                       (*((volatile avr32_usart_t*)AVR32_USART2_ADDRESS))
#define AVR32_USART2_IRQ                   544
#define AVR32_USART2_CLK_DIV               8
#define AVR32_USART2_PDCA_ID_RX            3
#define AVR32_USART2_PDCA_ID_TX            14
#define AVR32_USART2_CLK_0_0_PIN           12
#define AVR32_USART2_CLK_0_0_FUNCTION      1
#define AVR32_USART2_CLK_0_1_FUNCTION      1
#define AVR32_USART2_CTS_0_PIN             17
#define AVR32_USART2_CTS_0_FUNCTION        2
#define AVR32_USART2_RTS_0_PIN             14
#define AVR32_USART2_RTS_0_FUNCTION        2
#define AVR32_USART2_RXD_0_0_FUNCTION      0
#define AVR32_USART2_RXD_0_1_PIN           7
#define AVR32_USART2_RXD_0_1_FUNCTION      1
#define AVR32_USART2_TXD_0_0_FUNCTION      0
#define AVR32_USART2_TXD_0_1_FUNCTION      1
#define AVR32_USART2_TXD_0_2_PIN           2
#define AVR32_USART2_TXD_0_2_FUNCTION      2
#define AVR32_USART2_TXD_0_3_PIN           3
#define AVR32_USART2_TXD_0_3_FUNCTION      2

#include "avr32/usart_440.h"


/* WDT */

/* WDT */
#define AVR32_WDT_ADDRESS                  0xFFFF2000
#define AVR32_WDT                          (*((volatile avr32_wdt_t*)AVR32_WDT_ADDRESS))

#include "avr32/wdt_400.h"


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
#define AVR32_PIN_PA17   17
#define AVR32_PIN_PA18   18


/* #ifndef AVR32_UC3L232T_H_INCLUDED */
#endif

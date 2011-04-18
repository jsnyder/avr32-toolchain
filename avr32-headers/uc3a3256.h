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
 * Model        : UC3A3256
 * Revision     : $Revision $
 * Checkin Date : $Date $
 *
 ****************************************************************************/
#ifndef AVR32_UC3A3256_H_INCLUDED
#define AVR32_UC3A3256_H_INCLUDED


/* Instance count */
#define AVR32_ADC_NUM                      1
#define AVR32_BUSMON_NUM                   1
#define AVR32_DAC_NUM                      1
#define AVR32_DMACA_NUM                    1
#define AVR32_EBI_NUM                      1
#define AVR32_ECCHRS_NUM                   1
#define AVR32_EIC_NUM                      1
#define AVR32_FLASHC_NUM                   1
#define AVR32_FREQM_NUM                    1
#define AVR32_GPIO_NUM                     1
#define AVR32_HMATRIX_NUM                  1
#define AVR32_SDRAMC_NUM                   1
#define AVR32_SMC_NUM                      1
#define AVR32_JTAG_NUM                     1
#define AVR32_MCI_NUM                      1
#define AVR32_MSI_NUM                      1
#define AVR32_PDCA_NUM                     1
#define AVR32_PLL_NUM                      2
#define AVR32_PM_NUM                       1
#define AVR32_RTC_NUM                      1
#define AVR32_SPI_NUM                      2
#define AVR32_SSC_NUM                      1
#define AVR32_TC_NUM                       2
#define AVR32_TWIM_NUM                     2
#define AVR32_TWIMS_NUM                    2
#define AVR32_TWIS_NUM                     2
#define AVR32_USART_NUM                    4
#define AVR32_USBB_NUM                     1
#define AVR32_UTMI_NUM                     1
#define AVR32_WDT_NUM                      1

/* Maskable module clocks */
#define AVR32_PM_CLK_GRP_CPU               0
#define AVR32_PM_CLK_GRP_HSB               1
#define AVR32_PM_CLK_GRP_PBA               2
#define AVR32_PM_CLK_GRP_PBB               3
#define AVR32_PM_NUM_CLK_GRPS              4
#define AVR32_PM_NUM_CLKS_PER_GRP0         1
#define AVR32_PM_NUM_CLKS_PER_GRP1         7
#define AVR32_PM_NUM_CLKS_PER_GRP2         15
#define AVR32_PM_NUM_CLKS_PER_GRP3         6

/* CPU clocks */
#define AVR32_OCD_CLK_CPU                  1
#define AVR32_CORE_CLK_CPU_COUNT           16

/* HSB clocks */
#define AVR32_FLASHC_CLK_HSB               32
#define AVR32_HMATRIX_CLK_HSB_PBA_BRIDGE   33
#define AVR32_HMATRIX_CLK_HSB_PBB_BRIDGE   34
#define AVR32_USBB_CLK_HSB                 35
#define AVR32_PDCA_CLK_HSB                 36
#define AVR32_EBI_CLK_HSB                  37
#define AVR32_HMATRIX_CLK_HSB_PBC_BRIDGE   38
#define AVR32_DMACA_CLK_HSB                39
#define AVR32_BUSMON_CLK_HSB               40
#define AVR32_HRAMC0_CLK_HSB               41
#define AVR32_HRAMC1_CLK_HSB               42

/* PBA clocks */
#define AVR32_INTC_CLK_PBA                 64
#define AVR32_GPIO_CLK_PBA                 65
#define AVR32_PDCA_CLK_PBA                 66
#define AVR32_PM_CLK_PBA                   67
#define AVR32_RTC_CLK_PBA                  67
#define AVR32_EIM_CLK_PBA                  67
#define AVR32_ADC_CLK_PBA                  68
#define AVR32_SPI0_CLK_PBA                 69
#define AVR32_SPI1_CLK_PBA                 70
#define AVR32_TWIM0_CLK_PBA                71
#define AVR32_TWIM1_CLK_PBA                72
#define AVR32_TWIS0_CLK_PBA                73
#define AVR32_TWIS1_CLK_PBA                74
#define AVR32_USART0_CLK_PBA               75
#define AVR32_USART1_CLK_PBA               76
#define AVR32_USART2_CLK_PBA               77
#define AVR32_USART3_CLK_PBA               78
#define AVR32_SSC_CLK_PBA                  79
#define AVR32_TC0_CLK_PBA                  80
#define AVR32_TC1_CLK_PBA                  81
#define AVR32_ABDAC_CLK_PBA                82

/* PBB clocks */
#define AVR32_HMATRIX_CLK_PBB              96
#define AVR32_USBB_CLK_PBB                 97
#define AVR32_FLASHC_CLK_PBB               98
#define AVR32_SMC_CLK_PBB                  99
#define AVR32_SDRAMC_CLK_PBB               100
#define AVR32_ECCHRS_CLK_PBB               101
#define AVR32_MCI_CLK_PBB                  102
#define AVR32_BUSMON_CLK_PBB               103
#define AVR32_MSI_CLK_PBB                  104
#define AVR32_AES_CLK_PBB                  105

/* Generic clocks */
#define AVR32_PM_GCLK_GCLK0                0
#define AVR32_PM_GCLK_GCLK1                1
#define AVR32_PM_GCLK_GCLK2                2
#define AVR32_PM_GCLK_GCLK3                3
#define AVR32_PM_GCLK_USBB                 4
#define AVR32_PM_GCLK_ABDAC                5

/* Core */
#include "avr32/core_sc0_142.h"
/* OCD */
#include "avr32/ocd_s0_142.h"

/* CORE */ 
#define AVR32_CORE_COMPARE_IRQ             0
#define AVR32_CORE_SCAN_CHAIN_MSB          19
#define AVR32_CORE_SCAN_CLOCK_MSB          16


/* OCD */ 

/* Memories */
#define AVR32_EBI_CS0_ADDRESS              0xC0000000
#define AVR32_EBI_CS0_SIZE                 0x01000000
#define AVR32_EBI_CS0                      ((unsigned char *)AVR32_EBI_CS0_ADDRESS)
#define AVR32_EBI_CS1_ADDRESS              0xD0000000
#define AVR32_EBI_CS1_SIZE                 0x08000000
#define AVR32_EBI_CS1                      ((unsigned char *)AVR32_EBI_CS1_ADDRESS)
#define AVR32_EBI_CS2_ADDRESS              0xC8000000
#define AVR32_EBI_CS2_SIZE                 0x01000000
#define AVR32_EBI_CS2                      ((unsigned char *)AVR32_EBI_CS2_ADDRESS)
#define AVR32_EBI_CS3_ADDRESS              0xCC000000
#define AVR32_EBI_CS3_SIZE                 0x01000000
#define AVR32_EBI_CS3                      ((unsigned char *)AVR32_EBI_CS3_ADDRESS)
#define AVR32_EBI_CS4_ADDRESS              0xD8000000
#define AVR32_EBI_CS4_SIZE                 0x01000000
#define AVR32_EBI_CS4                      ((unsigned char *)AVR32_EBI_CS4_ADDRESS)
#define AVR32_EBI_CS5_ADDRESS              0xDC000000
#define AVR32_EBI_CS5_SIZE                 0x01000000
#define AVR32_EBI_CS5                      ((unsigned char *)AVR32_EBI_CS5_ADDRESS)
#define AVR32_FLASH_ADDRESS                0x80000000
#define AVR32_FLASH_SIZE                   0x00040000
#define AVR32_FLASH                        ((unsigned char *)AVR32_FLASH_ADDRESS)
#define AVR32_INTRAM0_ADDRESS              0xFF000000
#define AVR32_INTRAM0_SIZE                 0x00008000
#define AVR32_INTRAM0                      ((unsigned char *)AVR32_INTRAM0_ADDRESS)
#define AVR32_INTRAM1_ADDRESS              0xFF008000
#define AVR32_INTRAM1_SIZE                 0x00008000
#define AVR32_INTRAM1                      ((unsigned char *)AVR32_INTRAM1_ADDRESS)
#define AVR32_SRAM_ADDRESS                 0x00000000
#define AVR32_SRAM_SIZE                    0x00010000
#define AVR32_SRAM                         ((unsigned char *)AVR32_SRAM_ADDRESS)
#define AVR32_USBB_SLAVE_ADDRESS           0xE0000000
#define AVR32_USBB_SLAVE_SIZE              0x00800000
#define AVR32_USBB_SLAVE                   ((unsigned char *)AVR32_USBB_SLAVE_ADDRESS)

/* Interrupt Controller */
#define AVR32_INTC_ADDRESS                 0xFFFF0800
#define AVR32_INTC                         (*((volatile avr32_intc_t*)AVR32_INTC_ADDRESS))
#define AVR32_INTC_NUM_INT_GRPS            30
#define AVR32_INTC_NUM_IRQS_PER_GRP0       1
#define AVR32_INTC_NUM_IRQS_PER_GRP1       10
#define AVR32_INTC_NUM_IRQS_PER_GRP10      1
#define AVR32_INTC_NUM_IRQS_PER_GRP11      1
#define AVR32_INTC_NUM_IRQS_PER_GRP12      1
#define AVR32_INTC_NUM_IRQS_PER_GRP13      1
#define AVR32_INTC_NUM_IRQS_PER_GRP14      3
#define AVR32_INTC_NUM_IRQS_PER_GRP15      1
#define AVR32_INTC_NUM_IRQS_PER_GRP16      3
#define AVR32_INTC_NUM_IRQS_PER_GRP17      1
#define AVR32_INTC_NUM_IRQS_PER_GRP18      1
#define AVR32_INTC_NUM_IRQS_PER_GRP19      1
#define AVR32_INTC_NUM_IRQS_PER_GRP2       14
#define AVR32_INTC_NUM_IRQS_PER_GRP20      1
#define AVR32_INTC_NUM_IRQS_PER_GRP21      1
#define AVR32_INTC_NUM_IRQS_PER_GRP22      5
#if !defined (DEPRECATED_DISABLE)
#define AVR32_INTC_NUM_IRQS_PER_GRP23      1
#define AVR32_INTC_NUM_IRQS_PER_GRP24      1
#define AVR32_INTC_NUM_IRQS_PER_GRP25      1
#endif
#define AVR32_INTC_NUM_IRQS_PER_GRP26      1
#define AVR32_INTC_NUM_IRQS_PER_GRP27      1
#define AVR32_INTC_NUM_IRQS_PER_GRP28      1
#define AVR32_INTC_NUM_IRQS_PER_GRP29      1
#define AVR32_INTC_NUM_IRQS_PER_GRP3       8
#define AVR32_INTC_NUM_IRQS_PER_GRP4       1
#define AVR32_INTC_NUM_IRQS_PER_GRP5       1
#define AVR32_INTC_NUM_IRQS_PER_GRP6       1
#define AVR32_INTC_NUM_IRQS_PER_GRP7       1
#define AVR32_INTC_NUM_IRQS_PER_GRP8       1
#define AVR32_INTC_NUM_IRQS_PER_GRP9       1
#define AVR32_INTC_NUM_NMI                 1

#include "avr32/intc_101.h"


/* ADC */

/* ADC */ 
#define AVR32_ADC_ADDRESS                  0xFFFF3C00
#define AVR32_ADC                          (*((volatile avr32_adc_t*)AVR32_ADC_ADDRESS))
#define AVR32_ADC_IRQ                      480
#define AVR32_ADC_CHANNELS_MSB             7
#define AVR32_ADC_DATA_MSB                 9
#define AVR32_ADC_AD_0_PIN                 21
#define AVR32_ADC_AD_0_FUNCTION            0
#define AVR32_ADC_AD_1_PIN                 22
#define AVR32_ADC_AD_1_FUNCTION            0
#define AVR32_ADC_AD_2_PIN                 23
#define AVR32_ADC_AD_2_FUNCTION            0
#define AVR32_ADC_AD_3_PIN                 24
#define AVR32_ADC_AD_3_FUNCTION            0
#define AVR32_ADC_AD_7_PIN                 17
#define AVR32_ADC_AD_7_FUNCTION            2
#define AVR32_ADC_AD_6_PIN                 18
#define AVR32_ADC_AD_6_FUNCTION            2
#define AVR32_ADC_AD_5_PIN                 19
#define AVR32_ADC_AD_5_FUNCTION            2
#define AVR32_ADC_AD_4_PIN                 20
#define AVR32_ADC_AD_4_FUNCTION            2
#define AVR32_ADC_ADVREFP_0_PIN            44
#define AVR32_ADC_ADVREFP_0_FUNCTION       1
#define AVR32_ADC_TEST_CLK_0_PIN           3
#define AVR32_ADC_TEST_DATA_0_PIN          8
#define AVR32_ADC_TEST_DATA_1_PIN          9
#define AVR32_ADC_TEST_DATA_2_PIN          10
#define AVR32_ADC_TEST_DATA_3_PIN          11
#define AVR32_ADC_TEST_DATA_4_PIN          12
#define AVR32_ADC_TEST_DATA_5_PIN          13
#define AVR32_ADC_TEST_DATA_6_PIN          14
#define AVR32_ADC_TEST_DATA_7_PIN          15
#define AVR32_ADC_TEST_DATA_8_PIN          16
#define AVR32_ADC_TEST_DATA_9_PIN          17
#define AVR32_ADC_TEST_EOC_0_PIN           7
#define AVR32_ADC_TEST_ONAD_0_PIN          1
#define AVR32_ADC_TEST_ONSAR_0_PIN         2
#define AVR32_ADC_TEST_SEL_0_PIN           4
#define AVR32_ADC_TEST_SEL_1_PIN           5
#define AVR32_ADC_TEST_SEL_2_PIN           6
#define AVR32_ADC_TEST_START_0_PIN         0
#define AVR32_ADC_TRIGGER_0_0_PIN          98
#define AVR32_ADC_TRIGGER_0_0_FUNCTION     1
#define AVR32_ADC_TRIGGER_0_1_PIN          32
#define AVR32_ADC_TRIGGER_0_1_FUNCTION     2

#include "avr32/adc_200.h"


/* BUSMON */

/* BUSMON */ 
#define AVR32_BUSMON_ADDRESS               0xFFFE2800
#define AVR32_BUSMON                       (*((volatile avr32_busmon_t*)AVR32_BUSMON_ADDRESS))
#define AVR32_BUSMON_CH0_IMPL              1
#define AVR32_BUSMON_CH1_IMPL              1
#define AVR32_BUSMON_CH2_IMPL              1
#define AVR32_BUSMON_CH3_IMPL              1

#include "avr32/busmon_100.h"


/* ABDAC */

/* ABDAC */ 
#define AVR32_ABDAC_ADDRESS                0xFFFF4000
#define AVR32_ABDAC                        (*((volatile avr32_abdac_t*)AVR32_ABDAC_ADDRESS))
#define AVR32_ABDAC_IRQ                    608
#define AVR32_ABDAC_DATA_0_0_PIN           8
#define AVR32_ABDAC_DATA_0_0_FUNCTION      1
#define AVR32_ABDAC_DATA_1_0_PIN           33
#define AVR32_ABDAC_DATA_1_0_FUNCTION      1
#define AVR32_ABDAC_DATA_0_1_PIN           3
#define AVR32_ABDAC_DATA_0_1_FUNCTION      2
#define AVR32_ABDAC_DATA_1_1_PIN           23
#define AVR32_ABDAC_DATA_1_1_FUNCTION      2
#define AVR32_ABDAC_DATAN_0_0_PIN          7
#define AVR32_ABDAC_DATAN_0_0_FUNCTION     1
#define AVR32_ABDAC_DATAN_1_0_PIN          34
#define AVR32_ABDAC_DATAN_1_0_FUNCTION     1
#define AVR32_ABDAC_DATAN_0_1_PIN          4
#define AVR32_ABDAC_DATAN_0_1_FUNCTION     2
#define AVR32_ABDAC_DATAN_1_1_PIN          24
#define AVR32_ABDAC_DATAN_1_1_FUNCTION     2

#include "avr32/abdac_101.h"


/* DMACA */

/* DMACA */ 
#define AVR32_DMACA_ADDRESS                0xFF100000
#define AVR32_DMACA                        (*((volatile avr32_dmaca_t*)AVR32_DMACA_ADDRESS))
#define AVR32_DMACA_BLOCK_IRQ              704
#define AVR32_DMACA_DSTT_IRQ               705
#define AVR32_DMACA_ERR_IRQ                706
#define AVR32_DMACA_SRCT_IRQ               707
#define AVR32_DMACA_TFR_IRQ                708
#define AVR32_DMACA_CH_EXTRQ0              6
#define AVR32_DMACA_CH_EXTRQ1              7
#define AVR32_DMACA_CH_MMCI_RX             2
#define AVR32_DMACA_CH_MMCI_TX             3
#define AVR32_DMACA_CH_MSI_RX              4
#define AVR32_DMACA_CH_MSI_TX              5
#define AVR32_DMACA_MAX_BLK_SIZE           16
#define AVR32_DMACA_NUM_CHANNELS           4
#define AVR32_DMACA_DMAACK_1_PIN           69
#define AVR32_DMACA_DMAACK_1_FUNCTION      1
#define AVR32_DMACA_DMAACK_0_0_PIN         102
#define AVR32_DMACA_DMAACK_0_0_FUNCTION    1
#define AVR32_DMACA_DMAACK_0_1_PIN         30
#define AVR32_DMACA_DMAACK_0_1_FUNCTION    2
#define AVR32_DMACA_DMARQ_1_PIN            68
#define AVR32_DMACA_DMARQ_1_FUNCTION       1
#define AVR32_DMACA_DMARQ_0_0_PIN          103
#define AVR32_DMACA_DMARQ_0_0_FUNCTION     1
#define AVR32_DMACA_DMARQ_0_1_PIN          31
#define AVR32_DMACA_DMARQ_0_1_FUNCTION     2

#include "avr32/dmaca_206a.h"


/* EBI */

/* EBI */ 
#define AVR32_EBI_CF0_CS                   4
#define AVR32_EBI_CF1_CS                   5
#define AVR32_EBI_HEBI_CS_MSB              5
#define AVR32_EBI_HMATRIX_NR               6
#define AVR32_EBI_NAND_CS                  3
#define AVR32_EBI_SDRAM_CS                 1
#define AVR32_EBI_SMC0_CS                  0
#define AVR32_EBI_SMC1_CS                  1
#define AVR32_EBI_SMC2_CS                  2
#define AVR32_EBI_SMC3_CS                  3
#define AVR32_EBI_SMC4_CS                  4
#define AVR32_EBI_SMC5_CS                  5
#define AVR32_EBI_ADDR_19_PIN              66
#define AVR32_EBI_ADDR_19_FUNCTION         0
#define AVR32_EBI_ADDR_18_PIN              67
#define AVR32_EBI_ADDR_18_FUNCTION         0
#define AVR32_EBI_ADDR_17_PIN              68
#define AVR32_EBI_ADDR_17_FUNCTION         0
#define AVR32_EBI_ADDR_16_PIN              69
#define AVR32_EBI_ADDR_16_FUNCTION         0
#define AVR32_EBI_ADDR_15_PIN              70
#define AVR32_EBI_ADDR_15_FUNCTION         0
#define AVR32_EBI_ADDR_14_PIN              71
#define AVR32_EBI_ADDR_14_FUNCTION         0
#define AVR32_EBI_ADDR_13_PIN              72
#define AVR32_EBI_ADDR_13_FUNCTION         0
#define AVR32_EBI_ADDR_12_PIN              73
#define AVR32_EBI_ADDR_12_FUNCTION         0
#define AVR32_EBI_ADDR_11_PIN              74
#define AVR32_EBI_ADDR_11_FUNCTION         0
#define AVR32_EBI_ADDR_10_PIN              75
#define AVR32_EBI_ADDR_10_FUNCTION         0
#define AVR32_EBI_ADDR_9_PIN               76
#define AVR32_EBI_ADDR_9_FUNCTION          0
#define AVR32_EBI_ADDR_8_PIN               77
#define AVR32_EBI_ADDR_8_FUNCTION          0
#define AVR32_EBI_ADDR_7_PIN               78
#define AVR32_EBI_ADDR_7_FUNCTION          0
#define AVR32_EBI_ADDR_6_PIN               79
#define AVR32_EBI_ADDR_6_FUNCTION          0
#define AVR32_EBI_ADDR_5_PIN               80
#define AVR32_EBI_ADDR_5_FUNCTION          0
#define AVR32_EBI_ADDR_4_PIN               81
#define AVR32_EBI_ADDR_4_FUNCTION          0
#define AVR32_EBI_ADDR_3_PIN               82
#define AVR32_EBI_ADDR_3_FUNCTION          0
#define AVR32_EBI_ADDR_2_PIN               83
#define AVR32_EBI_ADDR_2_FUNCTION          0
#define AVR32_EBI_ADDR_1_PIN               84
#define AVR32_EBI_ADDR_1_FUNCTION          0
#define AVR32_EBI_ADDR_0_PIN               85
#define AVR32_EBI_ADDR_0_FUNCTION          0
#define AVR32_EBI_ADDR_23_PIN              99
#define AVR32_EBI_ADDR_23_FUNCTION         0
#define AVR32_EBI_ADDR_22_PIN              106
#define AVR32_EBI_ADDR_22_FUNCTION         0
#define AVR32_EBI_ADDR_21_PIN              107
#define AVR32_EBI_ADDR_21_FUNCTION         0
#define AVR32_EBI_ADDR_20_PIN              108
#define AVR32_EBI_ADDR_20_FUNCTION         0
#define AVR32_EBI_CAS_0_PIN                92
#define AVR32_EBI_CAS_0_FUNCTION           0
#define AVR32_EBI_CFCE1_0_PIN              102
#define AVR32_EBI_CFCE1_0_FUNCTION         0
#define AVR32_EBI_CFCE2_0_PIN              101
#define AVR32_EBI_CFCE2_0_FUNCTION         0
#define AVR32_EBI_CFRNW_0_PIN              100
#define AVR32_EBI_CFRNW_0_FUNCTION         0
#define AVR32_EBI_DATA_10_PIN              51
#define AVR32_EBI_DATA_10_FUNCTION         0
#define AVR32_EBI_DATA_9_PIN               52
#define AVR32_EBI_DATA_9_FUNCTION          0
#define AVR32_EBI_DATA_8_PIN               53
#define AVR32_EBI_DATA_8_FUNCTION          0
#define AVR32_EBI_DATA_7_PIN               54
#define AVR32_EBI_DATA_7_FUNCTION          0
#define AVR32_EBI_DATA_6_PIN               55
#define AVR32_EBI_DATA_6_FUNCTION          0
#define AVR32_EBI_DATA_5_PIN               56
#define AVR32_EBI_DATA_5_FUNCTION          0
#define AVR32_EBI_DATA_4_PIN               57
#define AVR32_EBI_DATA_4_FUNCTION          0
#define AVR32_EBI_DATA_3_PIN               58
#define AVR32_EBI_DATA_3_FUNCTION          0
#define AVR32_EBI_DATA_2_PIN               59
#define AVR32_EBI_DATA_2_FUNCTION          0
#define AVR32_EBI_DATA_1_PIN               60
#define AVR32_EBI_DATA_1_FUNCTION          0
#define AVR32_EBI_DATA_0_PIN               61
#define AVR32_EBI_DATA_0_FUNCTION          0
#define AVR32_EBI_DATA_15_PIN              86
#define AVR32_EBI_DATA_15_FUNCTION         0
#define AVR32_EBI_DATA_14_PIN              87
#define AVR32_EBI_DATA_14_FUNCTION         0
#define AVR32_EBI_DATA_13_PIN              88
#define AVR32_EBI_DATA_13_FUNCTION         0
#define AVR32_EBI_DATA_12_PIN              89
#define AVR32_EBI_DATA_12_FUNCTION         0
#define AVR32_EBI_DATA_11_PIN              90
#define AVR32_EBI_DATA_11_FUNCTION         0
#define AVR32_EBI_NANDOE_0_PIN             98
#define AVR32_EBI_NANDOE_0_FUNCTION        0
#define AVR32_EBI_NANDWE_0_PIN             110
#define AVR32_EBI_NANDWE_0_FUNCTION        0
#define AVR32_EBI_NCS_1_PIN                65
#define AVR32_EBI_NCS_1_FUNCTION           0
#define AVR32_EBI_NCS_3_PIN                103
#define AVR32_EBI_NCS_3_FUNCTION           0
#define AVR32_EBI_NCS_2_PIN                104
#define AVR32_EBI_NCS_2_FUNCTION           0
#define AVR32_EBI_NCS_0_PIN                109
#define AVR32_EBI_NCS_0_FUNCTION           0
#define AVR32_EBI_NCS_4_PIN                41
#define AVR32_EBI_NCS_4_FUNCTION           2
#define AVR32_EBI_NCS_5_PIN                42
#define AVR32_EBI_NCS_5_FUNCTION           2
#define AVR32_EBI_NRD_0_PIN                64
#define AVR32_EBI_NRD_0_FUNCTION           0
#define AVR32_EBI_NWAIT_0_PIN              105
#define AVR32_EBI_NWAIT_0_FUNCTION         0
#define AVR32_EBI_NWE0_0_PIN               63
#define AVR32_EBI_NWE0_0_FUNCTION          0
#define AVR32_EBI_NWE1_0_PIN               62
#define AVR32_EBI_NWE1_0_FUNCTION          0
#define AVR32_EBI_RAS_0_PIN                93
#define AVR32_EBI_RAS_0_FUNCTION           0
#define AVR32_EBI_SCAN_CLOCK_0_PIN         96
#define AVR32_EBI_SDA10_0_PIN              94
#define AVR32_EBI_SDA10_0_FUNCTION         0
#define AVR32_EBI_SDCK_0_PIN               96
#define AVR32_EBI_SDCK_0_FUNCTION          0
#define AVR32_EBI_SDCKE_0_PIN              97
#define AVR32_EBI_SDCKE_0_FUNCTION         0
#define AVR32_EBI_SDCS_0_PIN               91
#define AVR32_EBI_SDCS_0_FUNCTION          0
#define AVR32_EBI_SDWE_0_PIN               95
#define AVR32_EBI_SDWE_0_FUNCTION          0



/* ECCHRS */

/* ECCHRS */ 
#define AVR32_ECCHRS_ADDRESS               0xFFFE2400
#define AVR32_ECCHRS                       (*((volatile avr32_ecchrs_t*)AVR32_ECCHRS_ADDRESS))
#define AVR32_ECCHRS_RS4_IRQ               928

#include "avr32/ecchrs_100.h"


/* EIC */

/* EIC */ 
#define AVR32_EIC_ADDRESS                  0xFFFF0D80
#define AVR32_EIC                          (*((volatile avr32_eic_t*)AVR32_EIC_ADDRESS))
#define AVR32_EIC_IRQ_0                   32
#define AVR32_EIC_IRQ_1                   33
#define AVR32_EIC_IRQ_2                   34
#define AVR32_EIC_IRQ_3                   35
#define AVR32_EIC_IRQ_4                   36
#define AVR32_EIC_IRQ_5                   37
#define AVR32_EIC_IRQ_6                   38
#define AVR32_EIC_IRQ_7                   39
#define AVR32_EIC_INT_MSB                  8
#define AVR32_EIC_SCAN_MSB                 7
#define AVR32_EIC_STD_NUM                  8
#define AVR32_EIC_EXTINT_8_PIN             20
#define AVR32_EIC_EXTINT_8_FUNCTION        0
#define AVR32_EIC_EXTINT_4_PIN             3
#define AVR32_EIC_EXTINT_4_FUNCTION        1
#define AVR32_EIC_EXTINT_5_PIN             4
#define AVR32_EIC_EXTINT_5_FUNCTION        1
#define AVR32_EIC_EXTINT_6_PIN             9
#define AVR32_EIC_EXTINT_6_FUNCTION        1
#define AVR32_EIC_EXTINT_0_PIN             21
#define AVR32_EIC_EXTINT_0_FUNCTION        1
#define AVR32_EIC_EXTINT_1_PIN             22
#define AVR32_EIC_EXTINT_1_FUNCTION        1
#define AVR32_EIC_EXTINT_2_PIN             23
#define AVR32_EIC_EXTINT_2_FUNCTION        1
#define AVR32_EIC_EXTINT_3_PIN             24
#define AVR32_EIC_EXTINT_3_FUNCTION        1
#define AVR32_EIC_EXTINT_7_PIN             13
#define AVR32_EIC_EXTINT_7_FUNCTION        2
#define AVR32_EIC_SCAN_0_0_PIN             70
#define AVR32_EIC_SCAN_0_0_FUNCTION        1
#define AVR32_EIC_SCAN_1_0_PIN             71
#define AVR32_EIC_SCAN_1_0_FUNCTION        1
#define AVR32_EIC_SCAN_2_0_PIN             72
#define AVR32_EIC_SCAN_2_0_FUNCTION        1
#define AVR32_EIC_SCAN_3_0_PIN             73
#define AVR32_EIC_SCAN_3_0_FUNCTION        1
#define AVR32_EIC_SCAN_4_0_PIN             74
#define AVR32_EIC_SCAN_4_0_FUNCTION        1
#define AVR32_EIC_SCAN_5_0_PIN             75
#define AVR32_EIC_SCAN_5_0_FUNCTION        1
#define AVR32_EIC_SCAN_6_0_PIN             76
#define AVR32_EIC_SCAN_6_0_FUNCTION        1
#define AVR32_EIC_SCAN_7_0_PIN             77
#define AVR32_EIC_SCAN_7_0_FUNCTION        1
#define AVR32_EIC_SCAN_3_1_PIN             106
#define AVR32_EIC_SCAN_3_1_FUNCTION        1
#define AVR32_EIC_SCAN_2_1_PIN             107
#define AVR32_EIC_SCAN_2_1_FUNCTION        1
#define AVR32_EIC_SCAN_1_1_PIN             108
#define AVR32_EIC_SCAN_1_1_FUNCTION        1
#define AVR32_EIC_SCAN_0_1_PIN             109
#define AVR32_EIC_SCAN_0_1_FUNCTION        1
#define AVR32_EIC_SCAN_0_2_PIN             33
#define AVR32_EIC_SCAN_0_2_FUNCTION        2
#define AVR32_EIC_SCAN_1_2_PIN             34
#define AVR32_EIC_SCAN_1_2_FUNCTION        2
#define AVR32_EIC_SCAN_2_2_PIN             35
#define AVR32_EIC_SCAN_2_2_FUNCTION        2
#define AVR32_EIC_SCAN_3_2_PIN             36
#define AVR32_EIC_SCAN_3_2_FUNCTION        2
#define AVR32_EIC_SCAN_4_1_PIN             37
#define AVR32_EIC_SCAN_4_1_FUNCTION        2
#define AVR32_EIC_SCAN_5_1_PIN             38
#define AVR32_EIC_SCAN_5_1_FUNCTION        2
#define AVR32_EIC_SCAN_6_1_PIN             39
#define AVR32_EIC_SCAN_6_1_FUNCTION        2
#define AVR32_EIC_SCAN_7_1_PIN             40
#define AVR32_EIC_SCAN_7_1_FUNCTION        2

#include "avr32/eic_231.h"


/* FLASHC */

/* FLASHC */
#define AVR32_FLASHC_ADDRESS              0xFFFE1400
#define AVR32_FLASHC                      (*((volatile avr32_flashc_t*)AVR32_FLASHC_ADDRESS))
#define AVR32_FLASHC_IRQ                  128
#define AVR32_FLASHC_FLASH_SIZE           262144
#define AVR32_FLASHC_FWS_0_MAX_FREQ       36000000
#define AVR32_FLASHC_HSEN_FWS_0_MAX_FREQ  33000000
#define AVR32_FLASHC_FWS_1_MAX_FREQ       72000000
#define AVR32_FLASHC_HSEN_FWS_1_MAX_FREQ  66000000
#define AVR32_FLASHC_GPF_NUM              32
#define AVR32_FLASHC_PAGES_PR_REGION      32
#define AVR32_FLASHC_PAGE_SIZE            512
#define AVR32_FLASHC_USER_PAGE            ((volatile unsigned char*)AVR32_FLASHC_USER_PAGE_ADDRESS)
#define AVR32_FLASHC_USER_PAGE_ADDRESS    0x80800000
#define AVR32_FLASHC_USER_PAGE_SIZE       512
#define AVR32_FLASHC_FGPFRLO_BODEN           27
#define AVR32_FLASHC_FGPFRLO_BODEN_MASK      0x18000000
#define AVR32_FLASHC_FGPFRLO_BODEN_OFFSET    27
#define AVR32_FLASHC_FGPFRLO_BODEN_SIZE      2
#define AVR32_FLASHC_FGPFRLO_BODHYST         26
#define AVR32_FLASHC_FGPFRLO_BODHYST_MASK    0x04000000
#define AVR32_FLASHC_FGPFRLO_BODHYST_OFFSET  26
#define AVR32_FLASHC_FGPFRLO_BODHYST_SIZE    1
#define AVR32_FLASHC_FGPFRLO_BODLEVEL        20
#define AVR32_FLASHC_FGPFRLO_BODLEVEL_MASK   0x03F00000
#define AVR32_FLASHC_FGPFRLO_BODLEVEL_OFFSET 20
#define AVR32_FLASHC_FGPFRLO_BODLEVEL_SIZE   6
#define AVR32_FLASHC_EXTCLK_0_PIN         36
#define AVR32_FLASHC_FLASH_OBS_0_PIN      0
#define AVR32_FLASHC_FLASH_OBS_1_PIN      1
#define AVR32_FLASHC_FLASH_OBS_2_PIN      2
#define AVR32_FLASHC_FLASH_OBS_3_PIN      3
#define AVR32_FLASHC_FLASH_OBS_4_PIN      4
#define AVR32_FLASHC_FLASH_OBS_5_PIN      5
#define AVR32_FLASHC_FLASH_OBS_6_PIN      6
#define AVR32_FLASHC_FLASH_OBS_7_PIN      7
#define AVR32_FLASHC_FLASH_OBS_8_PIN      8
#define AVR32_FLASHC_FLASH_OBS_9_PIN      9
#define AVR32_FLASHC_FLASH_OBS_10_PIN     10
#define AVR32_FLASHC_FLASH_OBS_11_PIN     11
#define AVR32_FLASHC_FLASH_OBS_12_PIN     12
#define AVR32_FLASHC_FLASH_OBS_13_PIN     13
#define AVR32_FLASHC_FLASH_OBS_14_PIN     14
#define AVR32_FLASHC_FLASH_OBS_15_PIN     15
#define AVR32_FLASHC_FLASH_OBS_16_PIN     16
#define AVR32_FLASHC_FLASH_OBS_17_PIN     17
#define AVR32_FLASHC_FLASH_OBS_18_PIN     41
#define AVR32_FLASHC_FLASH_OBS_19_PIN     42
#define AVR32_FLASHC_FLASH_OBS_20_PIN     43
#define AVR32_FLASHC_LATDEL_0_PIN         37
#define AVR32_FLASHC_LATDELCLK_0_PIN      38

#include "avr32/flashc_210.h"


/* FREQM */

/* FREQM */ 
#define AVR32_FREQM_ADDRESS                0xFFFF0D50
#define AVR32_FREQM                        (*((volatile avr32_freqm_t*)AVR32_FREQM_ADDRESS))
#define AVR32_FREQM_IRQ                    42
#define AVR32_FREQM_REFSEL_BITS            1

#include "avr32/freqm_231.h"


/* GPIO */
#define AVR32_GPIO_LOCAL_ADDRESS           0x40000000
#define AVR32_GPIO_LOCAL                   (*((volatile avr32_gpio_local_t*)AVR32_GPIO_LOCAL_ADDRESS))
#define AVR32_GPIO_ADDRESS                 0xFFFF1000
#define AVR32_GPIO                         (*((volatile avr32_gpio_t*)AVR32_GPIO_ADDRESS))
#define AVR32_GPIO_IRQ_0                  64
#define AVR32_GPIO_IRQ_1                  65
#define AVR32_GPIO_IRQ_2                  66
#define AVR32_GPIO_IRQ_3                  67
#define AVR32_GPIO_IRQ_4                  68
#define AVR32_GPIO_IRQ_5                  69
#define AVR32_GPIO_IRQ_6                  70
#define AVR32_GPIO_IRQ_7                  71
#define AVR32_GPIO_IRQ_8                  72
#define AVR32_GPIO_IRQ_9                  73
#define AVR32_GPIO_IRQ_10                 74
#define AVR32_GPIO_IRQ_11                 75
#define AVR32_GPIO_IRQ_12                 76
#define AVR32_GPIO_IRQ_13                 77
#define AVR32_GPIO_GFER_DEFAULT_VAL        "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_GFER_IMPLEMENTED        "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_GFILTER_IMPLEMENTED     "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_GPER_DEFAULT_VAL        "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_GPER_IMPLEMENTED        "111'b111111111111111111111111111111111111111111111111111111111111000000111111111111111111111111111111111111111111111"
#define AVR32_GPIO_IRQ_MSB                 13
#define AVR32_GPIO_MAX_IRQ_MSB             13
#define AVR32_GPIO_PADDR_BITS              10
#define AVR32_GPIO_PINS_MSB                110
#define AVR32_GPIO_IER_DEFAULT_VAL         "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_IER_IMPLEMENTED         "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_IFR_IMPLEMENTED         "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_IMR0_DEFAULT_VAL        "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_IMR0_IMPLEMENTED        "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_IMR1_DEFAULT_VAL        "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_IMR1_IMPLEMENTED        "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_INPUT_SYNC_IMPLEMENTED  "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_IRQS_PER_GROUP          8
#define AVR32_GPIO_NUMBER_OF_PINS          111
#define AVR32_GPIO_ODER_DEFAULT_VAL        "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_ODER_IMPLEMENTED        "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_ODMER_DEFAULT_VAL       "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_ODMER_IMPLEMENTED       "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_OVR_DEFAULT_VAL         "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_OVR_IMPLEMENTED         "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
#define AVR32_GPIO_PADDR_MSB               9
#define AVR32_GPIO_PDATA_MSB               31
#define AVR32_GPIO_PMR0_DEFAULT_VAL        "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_PMR0_IMPLEMENTED        "111'b011111011111100110001111111111111111111111111011111111111111000000111111111111111111111111111111111111111111111"
#define AVR32_GPIO_PMR1_DEFAULT_VAL        "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_PMR1_IMPLEMENTED        "111'b111111111111100000001111110000011111111111111100000000000111000000111111111111111111111111111111111111111111111"
#define AVR32_GPIO_PORT_LENGTH             4
#define AVR32_GPIO_PUER_DEFAULT_VAL        "111'b000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define AVR32_GPIO_PUER_IMPLEMENTED        "111'b111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"

#include "avr32/gpio_110.h"


/* HMATRIX */

/* HMATRIX */ 
#define AVR32_HMATRIX_ADDRESS              0xFFFE1000
#define AVR32_HMATRIX                      (*((volatile avr32_hmatrix_t*)AVR32_HMATRIX_ADDRESS))
#define AVR32_HMATRIX_MASTER_NUM           7
#define AVR32_HMATRIX_MASTER_CPU_DATA      0
#define AVR32_HMATRIX_MASTER_CPU_INSN      1
#define AVR32_HMATRIX_MASTER_CPU_SAB       2
#define AVR32_HMATRIX_MASTER_PDCA          3
#define AVR32_HMATRIX_MASTER_DMACA_0       4
#define AVR32_HMATRIX_MASTER_DMACA_1       5
#define AVR32_HMATRIX_MASTER_USBB_DMA      6

#define AVR32_HMATRIX_SLAVE_NUM                10
#define AVR32_HMATRIX_SLAVE_FLASH               0
#define AVR32_HMATRIX_SLAVE_PBA                 1
#define AVR32_HMATRIX_SLAVE_PBB                 2
#define AVR32_HMATRIX_SLAVE_SRAM                4 // or AVR32_HMATRIX_SLAVE_EMBEDDED_CPU_SRAM ?
#define AVR32_HMATRIX_SLAVE_USBB_DPRAM          5
#define AVR32_HMATRIX_SLAVE_EBI                 6
#define AVR32_HMATRIX_SLAVE_DMACA               7
#define AVR32_HMATRIX_SLAVE_EMBEDDED_SYS_SRAM_0 8
#define AVR32_HMATRIX_SLAVE_EMBEDDED_SYS_SRAM_1 9

#include "avr32/hmatrix_230.h"


/* SDRAMC */

/* SDRAMC */ 
#define AVR32_SDRAMC_ADDRESS               0xFFFE2000
#define AVR32_SDRAMC                       (*((volatile avr32_sdramc_t*)AVR32_SDRAMC_ADDRESS))
#define AVR32_SDRAMC_IRQ                   576

#include "avr32/sdramc_220.h"


/* SMC */

/* SMC */ 
#define AVR32_SMC_ADDRESS                  0xFFFE1C00
#define AVR32_SMC                          (*((volatile avr32_smc_t*)AVR32_SMC_ADDRESS))

#include "avr32/smc_106.h"


/* JTAG */

/* JTAG */ 



/* MCI */

/* MCI */ 
#define AVR32_MCI_ADDRESS                  0xFFFE4000
#define AVR32_MCI                          (*((volatile avr32_mci_t*)AVR32_MCI_ADDRESS))
#define AVR32_MCI_IRQ                      640
#define AVR32_MCI_HSDIS_MAX_FREQ           25000000
#define AVR32_MCI_MMCI_SDCARD              2
#define AVR32_MCI_CLK_0_PIN                27
#define AVR32_MCI_CLK_0_FUNCTION           0
#define AVR32_MCI_CMD_1_0_PIN              15
#define AVR32_MCI_CMD_1_0_FUNCTION         0
#define AVR32_MCI_CMD_0_PIN                28
#define AVR32_MCI_CMD_0_FUNCTION           0
#define AVR32_MCI_CMD_1_1_PIN              110
#define AVR32_MCI_CMD_1_1_FUNCTION         2
#define AVR32_MCI_DATA_11_0_PIN            16
#define AVR32_MCI_DATA_11_0_FUNCTION       0
#define AVR32_MCI_DATA_10_0_PIN            17
#define AVR32_MCI_DATA_10_0_FUNCTION       0
#define AVR32_MCI_DATA_9_0_PIN             18
#define AVR32_MCI_DATA_9_0_FUNCTION        0
#define AVR32_MCI_DATA_8_0_PIN             19
#define AVR32_MCI_DATA_8_0_FUNCTION        0
#define AVR32_MCI_DATA_0_PIN               29
#define AVR32_MCI_DATA_0_FUNCTION          0
#define AVR32_MCI_DATA_1_PIN               30
#define AVR32_MCI_DATA_1_FUNCTION          0
#define AVR32_MCI_DATA_2_PIN               31
#define AVR32_MCI_DATA_2_FUNCTION          0
#define AVR32_MCI_DATA_3_PIN               32
#define AVR32_MCI_DATA_3_FUNCTION          0
#define AVR32_MCI_DATA_4_PIN               33
#define AVR32_MCI_DATA_4_FUNCTION          0
#define AVR32_MCI_DATA_5_PIN               34
#define AVR32_MCI_DATA_5_FUNCTION          0
#define AVR32_MCI_DATA_6_PIN               35
#define AVR32_MCI_DATA_6_FUNCTION          0
#define AVR32_MCI_DATA_7_PIN               36
#define AVR32_MCI_DATA_7_FUNCTION          0
#define AVR32_MCI_DATA_11_1_PIN            98
#define AVR32_MCI_DATA_11_1_FUNCTION       2
#define AVR32_MCI_DATA_10_1_PIN            99
#define AVR32_MCI_DATA_10_1_FUNCTION       2
#define AVR32_MCI_DATA_9_1_PIN             100
#define AVR32_MCI_DATA_9_1_FUNCTION        2
#define AVR32_MCI_DATA_8_1_PIN             101
#define AVR32_MCI_DATA_8_1_FUNCTION        2
#define AVR32_MCI_DATA_15_PIN              102
#define AVR32_MCI_DATA_15_FUNCTION         2
#define AVR32_MCI_DATA_14_PIN              103
#define AVR32_MCI_DATA_14_FUNCTION         2
#define AVR32_MCI_DATA_13_PIN              104
#define AVR32_MCI_DATA_13_FUNCTION         2
#define AVR32_MCI_DATA_12_PIN              105
#define AVR32_MCI_DATA_12_FUNCTION         2
#define AVR32_MCI_SCAN_CLOCK_0_PIN         27

#include "avr32/mci_303.h"


/* MSI */

/* MSI */ 
#define AVR32_MSI_ADDRESS                  0xFFFE8000
#define AVR32_MSI                          (*((volatile avr32_msi_t*)AVR32_MSI_ADDRESS))
#define AVR32_MSI_IRQ_LINE                 832
#define AVR32_MSI_BS_0_PIN                 28
#define AVR32_MSI_BS_0_FUNCTION            3
#define AVR32_MSI_DATA_0_PIN               29
#define AVR32_MSI_DATA_0_FUNCTION          3
#define AVR32_MSI_DATA_1_PIN               30
#define AVR32_MSI_DATA_1_FUNCTION          3
#define AVR32_MSI_DATA_2_PIN               31
#define AVR32_MSI_DATA_2_FUNCTION          3
#define AVR32_MSI_DATA_3_PIN               32
#define AVR32_MSI_DATA_3_FUNCTION          3
#define AVR32_MSI_INS_0_PIN                33
#define AVR32_MSI_INS_0_FUNCTION           3
#define AVR32_MSI_SCLK_0_PIN               27
#define AVR32_MSI_SCLK_0_FUNCTION          3

#include "avr32/msi_210.h"


/* PDCA */

/* PDCA */ 
#define AVR32_PDCA_ADDRESS                 0xFFFF0000
#define AVR32_PDCA                         (*((volatile avr32_pdca_t*)AVR32_PDCA_ADDRESS))
#define AVR32_PDCA_IRQ_0                  96
#define AVR32_PDCA_IRQ_1                  97
#define AVR32_PDCA_IRQ_2                  98
#define AVR32_PDCA_IRQ_3                  99
#define AVR32_PDCA_IRQ_4                  100
#define AVR32_PDCA_IRQ_5                  101
#define AVR32_PDCA_IRQ_6                  102
#define AVR32_PDCA_IRQ_7                  103
#define AVR32_PDCA_CHANNEL_LENGTH          8
#define AVR32_PDCA_PID_ADC_RX              0
#define AVR32_PDCA_PID_ABDAC_TX            23
#define AVR32_PDCA_PID_SPI0_RX             10
#define AVR32_PDCA_PID_SPI0_TX             21
#define AVR32_PDCA_PID_SPI1_RX             11
#define AVR32_PDCA_PID_SPI1_TX             22
#define AVR32_PDCA_PID_SSC_RX              1
#define AVR32_PDCA_PID_SSC_TX              12
#define AVR32_PDCA_PID_TWIM0_RX            6
#define AVR32_PDCA_PID_TWIM0_TX            17
#define AVR32_PDCA_PID_TWIM1_RX            7
#define AVR32_PDCA_PID_TWIM1_TX            18
#define AVR32_PDCA_PID_TWIS0_RX            8
#define AVR32_PDCA_PID_TWIS0_TX            19
#define AVR32_PDCA_PID_TWIS1_RX            9
#define AVR32_PDCA_PID_TWIS1_TX            20
#define AVR32_PDCA_PID_USART0_RX           2
#define AVR32_PDCA_PID_USART0_TX           13
#define AVR32_PDCA_PID_USART1_RX           3
#define AVR32_PDCA_PID_USART1_TX           14
#define AVR32_PDCA_PID_USART2_RX           4
#define AVR32_PDCA_PID_USART2_TX           15
#define AVR32_PDCA_PID_USART3_RX           5
#define AVR32_PDCA_PID_USART3_TX           16

#include "avr32/pdca_110.h"


/* PLL */

/* PLL0 */ 
#define AVR32_PLL0_DN_0_PIN                6
#define AVR32_PLL0_FDIV_0_PIN              38
#define AVR32_PLL0_FDIV_TEST_0_PIN         39
#define AVR32_PLL0_LOCK_0_PIN              1
#define AVR32_PLL0_PLLCLK_0_PIN            0
#define AVR32_PLL0_UP_0_PIN                37


/* PLL1 */ 
#define AVR32_PLL1_DN_0_PIN                41
#define AVR32_PLL1_FDIV_0_PIN              5
#define AVR32_PLL1_FDIV_TEST_0_PIN         4
#define AVR32_PLL1_LOCK_0_PIN              3
#define AVR32_PLL1_PLLCLK_0_PIN            2
#define AVR32_PLL1_UP_0_PIN                42



/* PM */

/* PM */ 
#define AVR32_PM_ADDRESS                   0xFFFF0C00
#define AVR32_PM                           (*((volatile avr32_pm_t*)AVR32_PM_ADDRESS))
#define AVR32_PM_IRQ                       41
#define AVR32_PM_GCLK_MSB                  3
#define AVR32_PM_GCLK_NUM                  9
#define AVR32_PM_GPLP_NUM                  8
#define AVR32_PM_CPU_MAX_FREQ              72000000
#define AVR32_PM_HSB_MAX_FREQ              72000000
#define AVR32_PM_PBA_MAX_FREQ              72000000
#define AVR32_PM_PBB_MAX_FREQ              72000000
#define AVR32_PM_PLL_VCO_RANGE0_MAX_FREQ   240000000
#define AVR32_PM_PLL_VCO_RANGE0_MIN_FREQ   160000000
#define AVR32_PM_PLL_VCO_RANGE1_MAX_FREQ   180000000
#define AVR32_PM_PLL_VCO_RANGE1_MIN_FREQ   80000000
#define AVR32_PM_RCOSC_CALIBRATION_BITS    10
#define AVR32_PM_RCOSC_FREQUENCY           115200
#define AVR32_PM_GCLK_1_0_PIN              43
#define AVR32_PM_GCLK_1_0_FUNCTION         2
#define AVR32_PM_GCLK_0_0_PIN              44
#define AVR32_PM_GCLK_0_0_FUNCTION         2
#define AVR32_PM_GCLK_0_1_PIN              53
#define AVR32_PM_GCLK_0_1_FUNCTION         2
#define AVR32_PM_GCLK_0_2_PIN              85
#define AVR32_PM_GCLK_0_2_FUNCTION         2
#define AVR32_PM_GCLK_1_1_PIN              86
#define AVR32_PM_GCLK_1_1_FUNCTION         2
#define AVR32_PM_GCLK_2_PIN                87
#define AVR32_PM_GCLK_2_FUNCTION           2
#define AVR32_PM_GCLK_3_PIN                88
#define AVR32_PM_GCLK_3_FUNCTION           2
#define AVR32_PM_RSTM_N_0_PIN              97
#define AVR32_PM_XIN0_0_PIN                47
#define AVR32_PM_XIN1_0_PIN                49
#define AVR32_PM_XIN32_0_PIN               45
#define AVR32_PM_XOUT0_0_PIN               48
#define AVR32_PM_XOUT1_0_PIN               50
#define AVR32_PM_XOUT32_0_PIN              46

#include "avr32/pm_240.h"


/* RTC */

/* RTC */ 
#define AVR32_RTC_ADDRESS                  0xFFFF0D00
#define AVR32_RTC                          (*((volatile avr32_rtc_t*)AVR32_RTC_ADDRESS))
#define AVR32_RTC_IRQ                      40

#include "avr32/rtc_231.h"


/* SPI */

/* SPI0 */ 
#define AVR32_SPI0_ADDRESS                 0xFFFF2400
#define AVR32_SPI0                         (*((volatile avr32_spi_t*)AVR32_SPI0_ADDRESS))
#define AVR32_SPI0_IRQ                     288
#define AVR32_SPI0_PDCA_ID_RX              11
#define AVR32_SPI0_PDCA_ID_TX              22
#define AVR32_SPI0_SPI_CS_MSB              3
#define AVR32_SPI0_MISO_0_0_PIN            11
#define AVR32_SPI0_MISO_0_0_FUNCTION       0
#define AVR32_SPI0_MISO_0_1_PIN            78
#define AVR32_SPI0_MISO_0_1_FUNCTION       1
#define AVR32_SPI0_MOSI_0_0_PIN            10
#define AVR32_SPI0_MOSI_0_0_FUNCTION       0
#define AVR32_SPI0_MOSI_0_1_PIN            79
#define AVR32_SPI0_MOSI_0_1_FUNCTION       1
#define AVR32_SPI0_NPCS_3_0_PIN            7
#define AVR32_SPI0_NPCS_3_0_FUNCTION       0
#define AVR32_SPI0_NPCS_0_0_PIN            9
#define AVR32_SPI0_NPCS_0_0_FUNCTION       0
#define AVR32_SPI0_NPCS_1_0_PIN            14
#define AVR32_SPI0_NPCS_1_0_FUNCTION       0
#define AVR32_SPI0_NPCS_2_0_PIN            12
#define AVR32_SPI0_NPCS_2_0_FUNCTION       1
#define AVR32_SPI0_NPCS_1_1_PIN            13
#define AVR32_SPI0_NPCS_1_1_FUNCTION       1
#define AVR32_SPI0_NPCS_0_1_PIN            81
#define AVR32_SPI0_NPCS_0_1_FUNCTION       1
#define AVR32_SPI0_NPCS_1_2_PIN            82
#define AVR32_SPI0_NPCS_1_2_FUNCTION       1
#define AVR32_SPI0_NPCS_2_1_PIN            83
#define AVR32_SPI0_NPCS_2_1_FUNCTION       1
#define AVR32_SPI0_NPCS_3_1_PIN            84
#define AVR32_SPI0_NPCS_3_1_FUNCTION       1
#define AVR32_SPI0_NPCS_0_2_PIN            2
#define AVR32_SPI0_NPCS_0_2_FUNCTION       2
#define AVR32_SPI0_SCAN_CLOCK_0_PIN        8
#define AVR32_SPI0_SCK_0_0_PIN             8
#define AVR32_SPI0_SCK_0_0_FUNCTION        0
#define AVR32_SPI0_SCK_0_1_PIN             80
#define AVR32_SPI0_SCK_0_1_FUNCTION        1


/* SPI1 */ 
#define AVR32_SPI1_ADDRESS                 0xFFFF2800
#define AVR32_SPI1                         (*((volatile avr32_spi_t*)AVR32_SPI1_ADDRESS))
#define AVR32_SPI1_IRQ                     320
#define AVR32_SPI1_PDCA_ID_RX              11
#define AVR32_SPI1_PDCA_ID_TX              22
#define AVR32_SPI1_SPI_CS_MSB              3
#define AVR32_SPI1_MISO_0_0_PIN            40
#define AVR32_SPI1_MISO_0_0_FUNCTION       0
#define AVR32_SPI1_MISO_0_1_PIN            19
#define AVR32_SPI1_MISO_0_1_FUNCTION       1
#define AVR32_SPI1_MISO_0_2_PIN            85
#define AVR32_SPI1_MISO_0_2_FUNCTION       1
#define AVR32_SPI1_MOSI_0_0_PIN            42
#define AVR32_SPI1_MOSI_0_0_FUNCTION       0
#define AVR32_SPI1_MOSI_0_1_PIN            16
#define AVR32_SPI1_MOSI_0_1_FUNCTION       1
#define AVR32_SPI1_MOSI_0_2_PIN            86
#define AVR32_SPI1_MOSI_0_2_FUNCTION       1
#define AVR32_SPI1_NPCS_0_0_PIN            41
#define AVR32_SPI1_NPCS_0_0_FUNCTION       0
#define AVR32_SPI1_NPCS_1_0_PIN            17
#define AVR32_SPI1_NPCS_1_0_FUNCTION       1
#define AVR32_SPI1_NPCS_2_0_PIN            18
#define AVR32_SPI1_NPCS_2_0_FUNCTION       1
#define AVR32_SPI1_NPCS_0_1_PIN            88
#define AVR32_SPI1_NPCS_0_1_FUNCTION       1
#define AVR32_SPI1_NPCS_1_1_PIN            89
#define AVR32_SPI1_NPCS_1_1_FUNCTION       1
#define AVR32_SPI1_NPCS_2_1_PIN            90
#define AVR32_SPI1_NPCS_2_1_FUNCTION       1
#define AVR32_SPI1_NPCS_3_PIN              0
#define AVR32_SPI1_NPCS_3_FUNCTION         2
#define AVR32_SPI1_SCAN_CLOCK_0_PIN        39
#define AVR32_SPI1_SCK_0_0_PIN             39
#define AVR32_SPI1_SCK_0_0_FUNCTION        0
#define AVR32_SPI1_SCK_0_1_PIN             15
#define AVR32_SPI1_SCK_0_1_FUNCTION        1
#define AVR32_SPI1_SCK_0_2_PIN             87
#define AVR32_SPI1_SCK_0_2_FUNCTION        1

#include "avr32/spi_210.h"


/* SSC */

/* SSC */ 
#define AVR32_SSC_ADDRESS                  0xFFFF3400
#define AVR32_SSC                          (*((volatile avr32_ssc_t*)AVR32_SSC_ADDRESS))
#define AVR32_SSC_IRQ                      416
#define AVR32_SSC_PDCA_ID_RX               2
#define AVR32_SSC_PDCA_ID_TX               13
#define AVR32_SSC_RX_CLOCK_0_0_PIN         28
#define AVR32_SSC_RX_CLOCK_0_0_FUNCTION    1
#define AVR32_SSC_RX_CLOCK_0_1_PIN         79
#define AVR32_SSC_RX_CLOCK_0_1_FUNCTION    2
#define AVR32_SSC_RX_DATA_0_0_PIN          27
#define AVR32_SSC_RX_DATA_0_0_FUNCTION     1
#define AVR32_SSC_RX_DATA_0_1_PIN          41
#define AVR32_SSC_RX_DATA_0_1_FUNCTION     1
#define AVR32_SSC_RX_DATA_0_2_PIN          76
#define AVR32_SSC_RX_DATA_0_2_FUNCTION     2
#define AVR32_SSC_RX_FRAME_SYNC_0_0_PIN    20
#define AVR32_SSC_RX_FRAME_SYNC_0_0_FUNCTION 1
#define AVR32_SSC_RX_FRAME_SYNC_0_1_PIN    42
#define AVR32_SSC_RX_FRAME_SYNC_0_1_FUNCTION 1
#define AVR32_SSC_RX_FRAME_SYNC_0_2_PIN    77
#define AVR32_SSC_RX_FRAME_SYNC_0_2_FUNCTION 2
#define AVR32_SSC_TX_CLOCK_0_0_PIN         39
#define AVR32_SSC_TX_CLOCK_0_0_FUNCTION    1
#define AVR32_SSC_TX_CLOCK_0_1_PIN         74
#define AVR32_SSC_TX_CLOCK_0_1_FUNCTION    2
#define AVR32_SSC_TX_DATA_0_0_PIN          40
#define AVR32_SSC_TX_DATA_0_0_FUNCTION     1
#define AVR32_SSC_TX_DATA_0_1_PIN          75
#define AVR32_SSC_TX_DATA_0_1_FUNCTION     2
#define AVR32_SSC_TX_FRAME_SYNC_0_0_PIN    43
#define AVR32_SSC_TX_FRAME_SYNC_0_0_FUNCTION 1
#define AVR32_SSC_TX_FRAME_SYNC_0_1_PIN    78
#define AVR32_SSC_TX_FRAME_SYNC_0_1_FUNCTION 2

#include "avr32/ssc_320.h"


/* TC */

/* TC0 */ 
#define AVR32_TC0_ADDRESS                  0xFFFF3800
#define AVR32_TC0                          (*((volatile avr32_tc_t*)AVR32_TC0_ADDRESS))
#define AVR32_TC0_IRQ0                     448
#define AVR32_TC0_IRQ1                     449
#define AVR32_TC0_IRQ2                     450
#define AVR32_TC0_A0_0_0_PIN               37
#define AVR32_TC0_A0_0_0_FUNCTION          1
#define AVR32_TC0_A0_0_1_PIN               65
#define AVR32_TC0_A0_0_1_FUNCTION          2
#define AVR32_TC0_A1_0_0_PIN               1
#define AVR32_TC0_A1_0_0_FUNCTION          1
#define AVR32_TC0_A1_0_1_PIN               67
#define AVR32_TC0_A1_0_1_FUNCTION          2
#define AVR32_TC0_A2_0_PIN                 69
#define AVR32_TC0_A2_0_FUNCTION            2
#define AVR32_TC0_B0_0_0_PIN               38
#define AVR32_TC0_B0_0_0_FUNCTION          1
#define AVR32_TC0_B0_0_1_PIN               66
#define AVR32_TC0_B0_0_1_FUNCTION          2
#define AVR32_TC0_B1_0_0_PIN               2
#define AVR32_TC0_B1_0_0_FUNCTION          1
#define AVR32_TC0_B1_0_1_PIN               68
#define AVR32_TC0_B1_0_1_FUNCTION          2
#define AVR32_TC0_B2_0_PIN                 70
#define AVR32_TC0_B2_0_FUNCTION            2
#define AVR32_TC0_CLK0_0_0_PIN             29
#define AVR32_TC0_CLK0_0_0_FUNCTION        2
#define AVR32_TC0_CLK0_0_1_PIN             71
#define AVR32_TC0_CLK0_0_1_FUNCTION        2
#define AVR32_TC0_CLK1_0_0_PIN             0
#define AVR32_TC0_CLK1_0_0_FUNCTION        1
#define AVR32_TC0_CLK1_0_1_PIN             72
#define AVR32_TC0_CLK1_0_1_FUNCTION        2
#define AVR32_TC0_CLK2_0_PIN               73
#define AVR32_TC0_CLK2_0_FUNCTION          2


/* TC1 */ 
#define AVR32_TC1_ADDRESS                  0xFFFF4400
#define AVR32_TC1                          (*((volatile avr32_tc_t*)AVR32_TC1_ADDRESS))
#define AVR32_TC1_IRQ0                     512
#define AVR32_TC1_IRQ1                     513
#define AVR32_TC1_IRQ2                     514
#define AVR32_TC1_A0_0_PIN                 12
#define AVR32_TC1_A0_0_FUNCTION            2
#define AVR32_TC1_A1_0_PIN                 9
#define AVR32_TC1_A1_0_FUNCTION            2
#define AVR32_TC1_A2_0_PIN                 11
#define AVR32_TC1_A2_0_FUNCTION            2
#define AVR32_TC1_B0_0_PIN                 10
#define AVR32_TC1_B0_0_FUNCTION            2
#define AVR32_TC1_B1_0_PIN                 8
#define AVR32_TC1_B1_0_FUNCTION            2
#define AVR32_TC1_B2_0_PIN                 101
#define AVR32_TC1_B2_0_FUNCTION            1
#define AVR32_TC1_CLK0_0_PIN               5
#define AVR32_TC1_CLK0_0_FUNCTION          1
#define AVR32_TC1_CLK1_0_PIN               6
#define AVR32_TC1_CLK1_0_FUNCTION          1
#define AVR32_TC1_CLK2_0_PIN               16
#define AVR32_TC1_CLK2_0_FUNCTION          2

#include "avr32/tc_223.h"


/* TWIM */

/* TWIM0 */ 
#define AVR32_TWIM0_ADDRESS                0xFFFF2C00
#define AVR32_TWIM0                        (*((volatile avr32_twim_t*)AVR32_TWIM0_ADDRESS))
#define AVR32_TWIM0_IRQ                    352


/* TWIM1 */ 
#define AVR32_TWIM1_ADDRESS                0xFFFF3000
#define AVR32_TWIM1                        (*((volatile avr32_twim_t*)AVR32_TWIM1_ADDRESS))
#define AVR32_TWIM1_IRQ                    384

#include "avr32/twim_100.h"


/* TWIMS */

/* TWIMS0 */ 
#define AVR32_TWIMS0_TWALM_0_PIN           14
#define AVR32_TWIMS0_TWALM_0_FUNCTION      1
#define AVR32_TWIMS0_TWCK_0_0_PIN          26
#define AVR32_TWIMS0_TWCK_0_0_FUNCTION     0
#define AVR32_TWIMS0_TWCK_0_1_PIN          26
#define AVR32_TWIMS0_TWCK_INPUT_TEST_0_PIN 7
#define AVR32_TWIMS0_TWCK_OUTPUT_TEST_0_PIN 8
#define AVR32_TWIMS0_TWD_0_0_PIN           25
#define AVR32_TWIMS0_TWD_0_0_FUNCTION      0
#define AVR32_TWIMS0_TWD_0_1_PIN           25
#define AVR32_TWIMS0_TWD_INPUT_TEST_0_PIN  5
#define AVR32_TWIMS0_TWD_OUTPUT_TEST_0_PIN 6


/* TWIMS1 */ 
#define AVR32_TWIMS1_TWALM_0_PIN           25
#define AVR32_TWIMS1_TWALM_0_FUNCTION      1
#define AVR32_TWIMS1_TWCK_0_PIN            14
#define AVR32_TWIMS1_TWCK_0_FUNCTION       2
#define AVR32_TWIMS1_TWD_0_PIN             15
#define AVR32_TWIMS1_TWD_0_FUNCTION        2



/* TWIS */

/* TWIS0 */ 
#define AVR32_TWIS0_ADDRESS                0xFFFF5000
#define AVR32_TWIS0                        (*((volatile avr32_twis_t*)AVR32_TWIS0_ADDRESS))
#define AVR32_TWIS0_IRQ                    864


/* TWIS1 */ 
#define AVR32_TWIS1_ADDRESS                0xFFFF5400
#define AVR32_TWIS1                        (*((volatile avr32_twis_t*)AVR32_TWIS1_ADDRESS))
#define AVR32_TWIS1_IRQ                    896

#include "avr32/twis_100.h"


/* USART */

/* USART0 */ 
#define AVR32_USART0_ADDRESS               0xFFFF1400
#define AVR32_USART0                       (*((volatile avr32_usart_t*)AVR32_USART0_ADDRESS))
#define AVR32_USART0_IRQ                   160
#define AVR32_USART0_PDCA_ID_RX            3
#define AVR32_USART0_PDCA_ID_TX            14
#define AVR32_USART0_CLK_0_PIN             2
#define AVR32_USART0_CLK_0_FUNCTION        0
#define AVR32_USART0_CTS_0_0_PIN           1
#define AVR32_USART0_CTS_0_0_FUNCTION      0
#define AVR32_USART0_CTS_0_1_PIN           53
#define AVR32_USART0_CTS_0_1_FUNCTION      1
#define AVR32_USART0_RTS_0_0_PIN           0
#define AVR32_USART0_RTS_0_0_FUNCTION      0
#define AVR32_USART0_RTS_0_1_PIN           54
#define AVR32_USART0_RTS_0_1_FUNCTION      1
#define AVR32_USART0_RXD_0_0_PIN           3
#define AVR32_USART0_RXD_0_0_FUNCTION      0
#define AVR32_USART0_RXD_0_1_PIN           51
#define AVR32_USART0_RXD_0_1_FUNCTION      1
#define AVR32_USART0_TXD_0_0_PIN           4
#define AVR32_USART0_TXD_0_0_FUNCTION      0
#define AVR32_USART0_TXD_0_1_PIN           52
#define AVR32_USART0_TXD_0_1_FUNCTION      1


/* USART1 */ 
#define AVR32_USART1_ADDRESS               0xFFFF1800
#define AVR32_USART1                       (*((volatile avr32_usart_t*)AVR32_USART1_ADDRESS))
#define AVR32_USART1_IRQ                   192
#define AVR32_USART1_PDCA_ID_RX            3
#define AVR32_USART1_PDCA_ID_TX            14
#define AVR32_USART1_CLK_0_PIN             7
#define AVR32_USART1_CLK_0_FUNCTION        2
#define AVR32_USART1_CTS_0_0_PIN           12
#define AVR32_USART1_CTS_0_0_FUNCTION      0
#define AVR32_USART1_CTS_0_1_PIN           57
#define AVR32_USART1_CTS_0_1_FUNCTION      1
#define AVR32_USART1_DCD_0_0_PIN           25
#define AVR32_USART1_DCD_0_0_FUNCTION      2
#define AVR32_USART1_DCD_0_1_PIN           89
#define AVR32_USART1_DCD_0_1_FUNCTION      2
#define AVR32_USART1_DSR_0_0_PIN           26
#define AVR32_USART1_DSR_0_0_FUNCTION      2
#define AVR32_USART1_DSR_0_1_PIN           90
#define AVR32_USART1_DSR_0_1_FUNCTION      2
#define AVR32_USART1_DTR_0_0_PIN           95
#define AVR32_USART1_DTR_0_0_FUNCTION      1
#define AVR32_USART1_DTR_0_1_PIN           52
#define AVR32_USART1_DTR_0_1_FUNCTION      2
#define AVR32_USART1_RI_0_0_PIN            94
#define AVR32_USART1_RI_0_0_FUNCTION       1
#define AVR32_USART1_RI_0_1_PIN            51
#define AVR32_USART1_RI_0_1_FUNCTION       2
#define AVR32_USART1_RTS_0_0_PIN           13
#define AVR32_USART1_RTS_0_0_FUNCTION      0
#define AVR32_USART1_RTS_0_1_PIN           58
#define AVR32_USART1_RTS_0_1_FUNCTION      1
#define AVR32_USART1_RXD_0_0_PIN           5
#define AVR32_USART1_RXD_0_0_FUNCTION      0
#define AVR32_USART1_RXD_0_1_PIN           43
#define AVR32_USART1_RXD_0_1_FUNCTION      0
#define AVR32_USART1_RXD_0_2_PIN           55
#define AVR32_USART1_RXD_0_2_FUNCTION      1
#define AVR32_USART1_TXD_0_0_PIN           6
#define AVR32_USART1_TXD_0_0_FUNCTION      0
#define AVR32_USART1_TXD_0_1_PIN           44
#define AVR32_USART1_TXD_0_1_FUNCTION      0
#define AVR32_USART1_TXD_0_2_PIN           56
#define AVR32_USART1_TXD_0_2_FUNCTION      1


/* USART2 */ 
#define AVR32_USART2_ADDRESS               0xFFFF1C00
#define AVR32_USART2                       (*((volatile avr32_usart_t*)AVR32_USART2_ADDRESS))
#define AVR32_USART2_IRQ                   224
#define AVR32_USART2_PDCA_ID_RX            3
#define AVR32_USART2_PDCA_ID_TX            14
#define AVR32_USART2_CLK_0_PIN             35
#define AVR32_USART2_CLK_0_FUNCTION        1
#define AVR32_USART2_CTS_0_0_PIN           26
#define AVR32_USART2_CTS_0_0_FUNCTION      1
#define AVR32_USART2_CTS_0_1_PIN           63
#define AVR32_USART2_CTS_0_1_FUNCTION      1
#define AVR32_USART2_RTS_0_0_PIN           64
#define AVR32_USART2_RTS_0_0_FUNCTION      1
#define AVR32_USART2_RTS_0_1_PIN           1
#define AVR32_USART2_RTS_0_1_FUNCTION      2
#define AVR32_USART2_RXD_0_0_PIN           31
#define AVR32_USART2_RXD_0_0_FUNCTION      1
#define AVR32_USART2_RXD_0_1_PIN           61
#define AVR32_USART2_RXD_0_1_FUNCTION      1
#define AVR32_USART2_RXD_0_2_PIN           106
#define AVR32_USART2_RXD_0_2_FUNCTION      2
#define AVR32_USART2_TXD_0_0_PIN           32
#define AVR32_USART2_TXD_0_0_FUNCTION      1
#define AVR32_USART2_TXD_0_1_PIN           62
#define AVR32_USART2_TXD_0_1_FUNCTION      1
#define AVR32_USART2_TXD_0_2_PIN           107
#define AVR32_USART2_TXD_0_2_FUNCTION      2


/* USART3 */ 
#define AVR32_USART3_ADDRESS               0xFFFF2000
#define AVR32_USART3                       (*((volatile avr32_usart_t*)AVR32_USART3_ADDRESS))
#define AVR32_USART3_IRQ                   256
#define AVR32_USART3_PDCA_ID_RX            3
#define AVR32_USART3_PDCA_ID_TX            14
#define AVR32_USART3_CLK_0_PIN             30
#define AVR32_USART3_CLK_0_FUNCTION        1
#define AVR32_USART3_CTS_0_0_PIN           67
#define AVR32_USART3_CTS_0_0_FUNCTION      1
#define AVR32_USART3_CTS_0_1_PIN           28
#define AVR32_USART3_CTS_0_1_FUNCTION      2
#define AVR32_USART3_RTS_0_0_PIN           66
#define AVR32_USART3_RTS_0_0_FUNCTION      1
#define AVR32_USART3_RTS_0_1_PIN           27
#define AVR32_USART3_RTS_0_1_FUNCTION      2
#define AVR32_USART3_RXD_0_0_PIN           36
#define AVR32_USART3_RXD_0_0_FUNCTION      1
#define AVR32_USART3_RXD_0_1_PIN           59
#define AVR32_USART3_RXD_0_1_FUNCTION      1
#define AVR32_USART3_RXD_0_2_PIN           108
#define AVR32_USART3_RXD_0_2_FUNCTION      2
#define AVR32_USART3_TXD_0_0_PIN           29
#define AVR32_USART3_TXD_0_0_FUNCTION      1
#define AVR32_USART3_TXD_0_1_PIN           60
#define AVR32_USART3_TXD_0_1_FUNCTION      1
#define AVR32_USART3_TXD_0_2_PIN           105
#define AVR32_USART3_TXD_0_2_FUNCTION      1
#define AVR32_USART3_TXD_0_3_PIN           109
#define AVR32_USART3_TXD_0_3_FUNCTION      2

#include "avr32/usart_420.h"


/* USBB */

/* USBB */ 
#define AVR32_USBB_ADDRESS                  0xFFFE0000
#define AVR32_USBB                          (*((volatile avr32_usbb_t*)AVR32_USBB_ADDRESS))
#define AVR32_USBB_IRQ                      544
#define AVR32_USBB_ENABLE_TEST_0_PIN        14
#define AVR32_USBB_SESSVLD_TEST_0_PIN       12
#define AVR32_USBB_USB_ID_0_0_PIN           37
#define AVR32_USBB_USB_ID_0_0_FUNCTION      0
#define AVR32_USBB_USB_ID_0_1_PIN           11
#define AVR32_USBB_USB_ID_0_1_FUNCTION      1
#define AVR32_USBB_USB_ID_0_2_PIN           100
#define AVR32_USBB_USB_ID_0_2_FUNCTION      1
#define AVR32_USBB_USB_ID_0_3_PIN           5
#define AVR32_USBB_USB_ID_0_3_FUNCTION      2
#define AVR32_USBB_USB_ID_0_4_PIN           21
#define AVR32_USBB_USB_ID_0_4_FUNCTION      2
#define AVR32_USBB_USB_VBOF_0_0_PIN         38
#define AVR32_USBB_USB_VBOF_0_0_FUNCTION    0
#define AVR32_USBB_USB_VBOF_0_1_PIN         10
#define AVR32_USBB_USB_VBOF_0_1_FUNCTION    1
#define AVR32_USBB_USB_VBOF_0_2_PIN         99
#define AVR32_USBB_USB_VBOF_0_2_FUNCTION    1
#define AVR32_USBB_USB_VBOF_0_3_PIN         6
#define AVR32_USBB_USB_VBOF_0_3_FUNCTION    2
#define AVR32_USBB_USB_VBOF_0_4_PIN         22
#define AVR32_USBB_USB_VBOF_0_4_FUNCTION    2
#define AVR32_USBB_VAVBUSVLD_TEST_0_PIN     13
#define AVR32_USBB_VBUSDISCHARGE_TEST_0_PIN 15
#define AVR32_USBB_VBUSPULSING_TEST_0_PIN   16
#define AVR32_USBB_EPT_NUM                  8

#include "avr32/usbb_320.h"


/* UTMI */

/* UTMI */ 
#define AVR32_UTMI_CLK_UTMI_12M_SCAN_0_PIN 42
#define AVR32_UTMI_CLK_UTMI_30M_SCAN_0_PIN 43
#define AVR32_UTMI_TEST_BIST_DONE_0_PIN    10
#define AVR32_UTMI_TEST_BIST_RESULT_0_PIN  8
#define AVR32_UTMI_TEST_CLKUSABLE_0_PIN    76
#define AVR32_UTMI_TEST_CLKUSABLE_BIST_0_PIN 9
#define AVR32_UTMI_TEST_CLK_12M_IN_0_PIN   101
#define AVR32_UTMI_TEST_CLK_OUT_0_PIN      75
#define AVR32_UTMI_TEST_DATAIN_0_PIN       77
#define AVR32_UTMI_TEST_DATAIN_1_PIN       78
#define AVR32_UTMI_TEST_DATAIN_2_PIN       79
#define AVR32_UTMI_TEST_DATAIN_3_PIN       80
#define AVR32_UTMI_TEST_DATAIN_4_PIN       81
#define AVR32_UTMI_TEST_DATAIN_5_PIN       82
#define AVR32_UTMI_TEST_DATAIN_6_PIN       83
#define AVR32_UTMI_TEST_DATAIN_7_PIN       84
#define AVR32_UTMI_TEST_DATAIN_8_PIN       85
#define AVR32_UTMI_TEST_DATAIN_9_PIN       86
#define AVR32_UTMI_TEST_DATAIN_10_PIN      87
#define AVR32_UTMI_TEST_DATAIN_11_PIN      88
#define AVR32_UTMI_TEST_DATAIN_12_PIN      89
#define AVR32_UTMI_TEST_DATAIN_13_PIN      90
#define AVR32_UTMI_TEST_DATAIN_14_PIN      94
#define AVR32_UTMI_TEST_DATAIN_15_PIN      95
#define AVR32_UTMI_TEST_DATAOUT_0_PIN      0
#define AVR32_UTMI_TEST_DATAOUT_1_PIN      1
#define AVR32_UTMI_TEST_DATAOUT_2_PIN      2
#define AVR32_UTMI_TEST_DATAOUT_3_PIN      3
#define AVR32_UTMI_TEST_DATAOUT_4_PIN      4
#define AVR32_UTMI_TEST_DATAOUT_5_PIN      5
#define AVR32_UTMI_TEST_DATAOUT_6_PIN      6
#define AVR32_UTMI_TEST_DATAOUT_7_PIN      7
#define AVR32_UTMI_TEST_DATAOUT_8_PIN      8
#define AVR32_UTMI_TEST_DATAOUT_9_PIN      9
#define AVR32_UTMI_TEST_DATAOUT_10_PIN     10
#define AVR32_UTMI_TEST_DATAOUT_11_PIN     11
#define AVR32_UTMI_TEST_DATAOUT_12_PIN     12
#define AVR32_UTMI_TEST_DATAOUT_13_PIN     13
#define AVR32_UTMI_TEST_DATAOUT_14_PIN     14
#define AVR32_UTMI_TEST_DATAOUT_15_PIN     15
#define AVR32_UTMI_TEST_DB16N8_0_0_PIN     3
#define AVR32_UTMI_TEST_DB16N8_0_1_PIN     16
#define AVR32_UTMI_TEST_DLLTESTMODE_0_PIN  17
#define AVR32_UTMI_TEST_DMPULLDOWN_0_PIN   18
#define AVR32_UTMI_TEST_DOCP8_0_PIN        19
#define AVR32_UTMI_TEST_DPPULLDOWN_0_PIN   20
#define AVR32_UTMI_TEST_FSLSSERIALMODE_0_PIN 21
#define AVR32_UTMI_TEST_HOSTDISCONNECT_0_PIN 22
#define AVR32_UTMI_TEST_HSREADY_0_PIN      23
#define AVR32_UTMI_TEST_LINESTATE_0_PIN    24
#define AVR32_UTMI_TEST_LINESTATE_1_PIN    25
#define AVR32_UTMI_TEST_LOOPBACK_0_0_PIN   0
#define AVR32_UTMI_TEST_LOOPBACK_0_1_PIN   26
#define AVR32_UTMI_TEST_ONNDLL_0_PIN       27
#define AVR32_UTMI_TEST_ONOSC_0_PIN        28
#define AVR32_UTMI_TEST_ONPLL_0_0_PIN      10
#define AVR32_UTMI_TEST_ONPLL_0_1_PIN      29
#define AVR32_UTMI_TEST_OPMODE_0_PIN       30
#define AVR32_UTMI_TEST_OPMODE_1_PIN       31
#define AVR32_UTMI_TEST_OSCBYPASSN_0_PIN   51
#define AVR32_UTMI_TEST_PLLCLK_IN_0_PIN    74
#define AVR32_UTMI_TEST_PLL_CK_0_PIN       11
#define AVR32_UTMI_TEST_PLL_DIVOUT_0_PIN   12
#define AVR32_UTMI_TEST_PLL_DIVTEST_0_PIN  0
#define AVR32_UTMI_TEST_PLL_DOWN_0_PIN     6
#define AVR32_UTMI_TEST_PLL_ICP_0_PIN      1
#define AVR32_UTMI_TEST_PLL_ICP_1_PIN      2
#define AVR32_UTMI_TEST_PLL_IVCO_0_PIN     3
#define AVR32_UTMI_TEST_PLL_IVCO_1_PIN     4
#define AVR32_UTMI_TEST_PLL_LOCK_0_PIN     5
#define AVR32_UTMI_TEST_PLL_MODE_0_PIN     7
#define AVR32_UTMI_TEST_PLL_MODE_1_PIN     8
#define AVR32_UTMI_TEST_PLL_ONLFT_0_PIN    14
#define AVR32_UTMI_TEST_PLL_UP_0_PIN       9
#define AVR32_UTMI_TEST_POR_0_0_PIN        5
#define AVR32_UTMI_TEST_POR_0_1_PIN        52
#define AVR32_UTMI_TEST_RESET_0_0_PIN      4
#define AVR32_UTMI_TEST_RESET_0_1_PIN      53
#define AVR32_UTMI_TEST_RXACTIVE_0_PIN     54
#define AVR32_UTMI_TEST_RXBISTE_0_PIN      6
#define AVR32_UTMI_TEST_RXDM_0_PIN         55
#define AVR32_UTMI_TEST_RXDP_0_PIN         56
#define AVR32_UTMI_TEST_RXERROR_0_PIN      57
#define AVR32_UTMI_TEST_RXRCV_0_PIN        58
#define AVR32_UTMI_TEST_RXVALID_0_PIN      59
#define AVR32_UTMI_TEST_RXVALIDH_0_PIN     60
#define AVR32_UTMI_TEST_SPH_0_PIN          61
#define AVR32_UTMI_TEST_SPH_1_PIN          62
#define AVR32_UTMI_TEST_SPH_2_PIN          63
#define AVR32_UTMI_TEST_SUSPENDM_0_PIN     64
#define AVR32_UTMI_TEST_SUSPENDMSYNC_0_PIN 65
#define AVR32_UTMI_TEST_TERMSELECT_0_PIN   66
#define AVR32_UTMI_TEST_TXBISTE_0_PIN      7
#define AVR32_UTMI_TEST_TXBITSTUFFENABLE_0_PIN 67
#define AVR32_UTMI_TEST_TXBITSTUFFENABLEH_0_PIN 68
#define AVR32_UTMI_TEST_TXDAT_0_PIN        69
#define AVR32_UTMI_TEST_TXENABLEN_0_PIN    70
#define AVR32_UTMI_TEST_TXREADY_0_PIN      71
#define AVR32_UTMI_TEST_TXSE0_0_PIN        72
#define AVR32_UTMI_TEST_TXVALID_0_PIN      73
#define AVR32_UTMI_TEST_TXVALIDH_0_PIN     98
#define AVR32_UTMI_TEST_XCVRSELECT_0_0_PIN 1
#define AVR32_UTMI_TEST_XCVRSELECT_1_0_PIN 2
#define AVR32_UTMI_TEST_XCVRSELECT_0_1_PIN 99
#define AVR32_UTMI_TEST_XCVRSELECT_1_1_PIN 100



/* WDT */

/* WDT */ 
#define AVR32_WDT_ADDRESS                  0xFFFF0D30
#define AVR32_WDT                          (*((volatile avr32_wdt_t*)AVR32_WDT_ADDRESS))
#define AVR32_WDT_WDTEXTRST_MSB            1

#include "avr32/wdt_231.h"


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
#define AVR32_PIN_PA17   17
#define AVR32_PIN_PA18   18
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
#define AVR32_PIN_PA30   30
#define AVR32_PIN_PA31   31
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
#define AVR32_PIN_PC00   45
#define AVR32_PIN_PC01   46
#define AVR32_PIN_PC02   47
#define AVR32_PIN_PC03   48
#define AVR32_PIN_PC04   49
#define AVR32_PIN_PC05   50
#define AVR32_PIN_PX00   51
#define AVR32_PIN_PX01   52
#define AVR32_PIN_PX02   53
#define AVR32_PIN_PX03   54
#define AVR32_PIN_PX04   55
#define AVR32_PIN_PX05   56
#define AVR32_PIN_PX06   57
#define AVR32_PIN_PX07   58
#define AVR32_PIN_PX08   59
#define AVR32_PIN_PX09   60
#define AVR32_PIN_PX10   61
#define AVR32_PIN_PX11   62
#define AVR32_PIN_PX12   63
#define AVR32_PIN_PX13   64
#define AVR32_PIN_PX14   65
#define AVR32_PIN_PX15   66
#define AVR32_PIN_PX16   67
#define AVR32_PIN_PX17   68
#define AVR32_PIN_PX18   69
#define AVR32_PIN_PX19   70
#define AVR32_PIN_PX20   71
#define AVR32_PIN_PX21   72
#define AVR32_PIN_PX22   73
#define AVR32_PIN_PX23   74
#define AVR32_PIN_PX24   75
#define AVR32_PIN_PX25   76
#define AVR32_PIN_PX26   77
#define AVR32_PIN_PX27   78
#define AVR32_PIN_PX28   79
#define AVR32_PIN_PX29   80
#define AVR32_PIN_PX30   81
#define AVR32_PIN_PX31   82
#define AVR32_PIN_PX32   83
#define AVR32_PIN_PX33   84
#define AVR32_PIN_PX34   85
#define AVR32_PIN_PX35   86
#define AVR32_PIN_PX36   87
#define AVR32_PIN_PX37   88
#define AVR32_PIN_PX38   89
#define AVR32_PIN_PX39   90
#define AVR32_PIN_PX40   91
#define AVR32_PIN_PX41   92
#define AVR32_PIN_PX42   93
#define AVR32_PIN_PX43   94
#define AVR32_PIN_PX44   95
#define AVR32_PIN_PX45   96
#define AVR32_PIN_PX46   97
#define AVR32_PIN_PX47   98
#define AVR32_PIN_PX48   99
#define AVR32_PIN_PX49   100
#define AVR32_PIN_PX50   101
#define AVR32_PIN_PX51   102
#define AVR32_PIN_PX52   103
#define AVR32_PIN_PX53   104
#define AVR32_PIN_PX54   105
#define AVR32_PIN_PX55   106
#define AVR32_PIN_PX56   107
#define AVR32_PIN_PX57   108
#define AVR32_PIN_PX58   109
#define AVR32_PIN_PX59   110


/* #ifndef AVR32_UC3A3256_H_INCLUDED */
#endif

/*****************************************************************************
 *
 * Copyright (C) 2008-2010 Atmel Corporation
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
 * Model        : UC3A0512ES
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_SDRAMC_201_H_INCLUDED
#define AVR32_SDRAMC_201_H_INCLUDED

#define AVR32_SDRAMC_H_VERSION 201

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_SDRAMC_<register>
 - Bitfield mask:   AVR32_SDRAMC_<register>_<bitfield>
 - Bitfield offset: AVR32_SDRAMC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SDRAMC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_SDRAMC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_SDRAMC_<bitfield>
 - Bitfield offset: AVR32_SDRAMC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SDRAMC_<bitfield>_SIZE
 - Bitfield values: AVR32_SDRAMC_<bitfield>_<value name>
 - Bitfield values: AVR32_SDRAMC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_SDRAMC_10_COLUMN_BITS                           0x00000002
#define AVR32_SDRAMC_11_COLUMN_BITS                           0x00000003
#define AVR32_SDRAMC_11_ROW_BITS                              0x00000000
#define AVR32_SDRAMC_128_CYC_AFTER_END                        0x00000002
#define AVR32_SDRAMC_12_ROW_BITS                              0x00000001
#define AVR32_SDRAMC_13_ROW_BITS                              0x00000002
#define AVR32_SDRAMC_16_BITS                                  0x00000001
#define AVR32_SDRAMC_32_BITS                                  0x00000000
#define AVR32_SDRAMC_64_CYC_AFTER_END                         0x00000001
#define AVR32_SDRAMC_8_COLUMN_BITS                            0x00000000
#define AVR32_SDRAMC_9_COLUMN_BITS                            0x00000001
#define AVR32_SDRAMC_AFTER_END                                0x00000000
#define AVR32_SDRAMC_AUTO_REFRESH                             0x00000004
#define AVR32_SDRAMC_BANKS_PRECHARGE                          0x00000002
#define AVR32_SDRAMC_CAS                                               5
#define AVR32_SDRAMC_CAS_MASK                                 0x00000060
#define AVR32_SDRAMC_CAS_OFFSET                                        5
#define AVR32_SDRAMC_CAS_ONE_CYCLE                            0x00000001
#define AVR32_SDRAMC_CAS_SIZE                                          2
#define AVR32_SDRAMC_CAS_THREE_CYCLES                         0x00000003
#define AVR32_SDRAMC_CAS_TWO_CYCLES                           0x00000002
#define AVR32_SDRAMC_COUNT                                             0
#define AVR32_SDRAMC_COUNT_MASK                               0x00000fff
#define AVR32_SDRAMC_COUNT_OFFSET                                      0
#define AVR32_SDRAMC_COUNT_SIZE                                       12
#define AVR32_SDRAMC_CR                                       0x00000008
#define AVR32_SDRAMC_CR_CAS                                            5
#define AVR32_SDRAMC_CR_CAS_MASK                              0x00000060
#define AVR32_SDRAMC_CR_CAS_OFFSET                                     5
#define AVR32_SDRAMC_CR_CAS_ONE_CYCLE                         0x00000001
#define AVR32_SDRAMC_CR_CAS_SIZE                                       2
#define AVR32_SDRAMC_CR_CAS_THREE_CYCLES                      0x00000003
#define AVR32_SDRAMC_CR_CAS_TWO_CYCLES                        0x00000002
#define AVR32_SDRAMC_CR_DBW                                            7
#define AVR32_SDRAMC_CR_DBW_16_BITS                           0x00000001
#define AVR32_SDRAMC_CR_DBW_32_BITS                           0x00000000
#define AVR32_SDRAMC_CR_DBW_MASK                              0x00000080
#define AVR32_SDRAMC_CR_DBW_OFFSET                                     7
#define AVR32_SDRAMC_CR_DBW_SIZE                                       1
#define AVR32_SDRAMC_CR_NB                                             4
#define AVR32_SDRAMC_CR_NB_FOUR_BANKS                         0x00000001
#define AVR32_SDRAMC_CR_NB_MASK                               0x00000010
#define AVR32_SDRAMC_CR_NB_OFFSET                                      4
#define AVR32_SDRAMC_CR_NB_SIZE                                        1
#define AVR32_SDRAMC_CR_NB_TWO_BANKS                          0x00000000
#define AVR32_SDRAMC_CR_NC                                             0
#define AVR32_SDRAMC_CR_NC_10_COLUMN_BITS                     0x00000002
#define AVR32_SDRAMC_CR_NC_11_COLUMN_BITS                     0x00000003
#define AVR32_SDRAMC_CR_NC_8_COLUMN_BITS                      0x00000000
#define AVR32_SDRAMC_CR_NC_9_COLUMN_BITS                      0x00000001
#define AVR32_SDRAMC_CR_NC_MASK                               0x00000003
#define AVR32_SDRAMC_CR_NC_OFFSET                                      0
#define AVR32_SDRAMC_CR_NC_SIZE                                        2
#define AVR32_SDRAMC_CR_NR                                             2
#define AVR32_SDRAMC_CR_NR_11_ROW_BITS                        0x00000000
#define AVR32_SDRAMC_CR_NR_12_ROW_BITS                        0x00000001
#define AVR32_SDRAMC_CR_NR_13_ROW_BITS                        0x00000002
#define AVR32_SDRAMC_CR_NR_MASK                               0x0000000c
#define AVR32_SDRAMC_CR_NR_OFFSET                                      2
#define AVR32_SDRAMC_CR_NR_SIZE                                        2
#define AVR32_SDRAMC_CR_TRAS                                          24
#define AVR32_SDRAMC_CR_TRAS_MASK                             0x0f000000
#define AVR32_SDRAMC_CR_TRAS_OFFSET                                   24
#define AVR32_SDRAMC_CR_TRAS_SIZE                                      4
#define AVR32_SDRAMC_CR_TRC                                           12
#define AVR32_SDRAMC_CR_TRCD                                          20
#define AVR32_SDRAMC_CR_TRCD_MASK                             0x00f00000
#define AVR32_SDRAMC_CR_TRCD_OFFSET                                   20
#define AVR32_SDRAMC_CR_TRCD_SIZE                                      4
#define AVR32_SDRAMC_CR_TRC_MASK                              0x0000f000
#define AVR32_SDRAMC_CR_TRC_OFFSET                                    12
#define AVR32_SDRAMC_CR_TRC_SIZE                                       4
#define AVR32_SDRAMC_CR_TRP                                           16
#define AVR32_SDRAMC_CR_TRP_MASK                              0x000f0000
#define AVR32_SDRAMC_CR_TRP_OFFSET                                    16
#define AVR32_SDRAMC_CR_TRP_SIZE                                       4
#define AVR32_SDRAMC_CR_TWR                                            8
#define AVR32_SDRAMC_CR_TWR_MASK                              0x00000f00
#define AVR32_SDRAMC_CR_TWR_OFFSET                                     8
#define AVR32_SDRAMC_CR_TWR_SIZE                                       4
#define AVR32_SDRAMC_CR_TXSR                                          28
#define AVR32_SDRAMC_CR_TXSR_MASK                             0xf0000000
#define AVR32_SDRAMC_CR_TXSR_OFFSET                                   28
#define AVR32_SDRAMC_CR_TXSR_SIZE                                      4
#define AVR32_SDRAMC_DA                                                0
#define AVR32_SDRAMC_DA_MASK                                  0x00000001
#define AVR32_SDRAMC_DA_OFFSET                                         0
#define AVR32_SDRAMC_DA_SIZE                                           1
#define AVR32_SDRAMC_DBW                                               7
#define AVR32_SDRAMC_DBW_16_BITS                              0x00000001
#define AVR32_SDRAMC_DBW_32_BITS                              0x00000000
#define AVR32_SDRAMC_DBW_MASK                                 0x00000080
#define AVR32_SDRAMC_DBW_OFFSET                                        7
#define AVR32_SDRAMC_DBW_SIZE                                          1
#define AVR32_SDRAMC_DEEP_POWER_DOWN                          0x00000003
#define AVR32_SDRAMC_DS                                               10
#define AVR32_SDRAMC_DS_MASK                                  0x00000c00
#define AVR32_SDRAMC_DS_OFFSET                                        10
#define AVR32_SDRAMC_DS_SIZE                                           2
#define AVR32_SDRAMC_EXT_LOAD_MODE                            0x00000005
#define AVR32_SDRAMC_FOUR_BANKS                               0x00000001
#define AVR32_SDRAMC_HSR                                      0x0000000c
#define AVR32_SDRAMC_HSR_DA                                            0
#define AVR32_SDRAMC_HSR_DA_MASK                              0x00000001
#define AVR32_SDRAMC_HSR_DA_OFFSET                                     0
#define AVR32_SDRAMC_HSR_DA_SIZE                                       1
#define AVR32_SDRAMC_IDR                                      0x00000018
#define AVR32_SDRAMC_IDR_RES                                           0
#define AVR32_SDRAMC_IDR_RES_MASK                             0x00000001
#define AVR32_SDRAMC_IDR_RES_OFFSET                                    0
#define AVR32_SDRAMC_IDR_RES_SIZE                                      1
#define AVR32_SDRAMC_IER                                      0x00000014
#define AVR32_SDRAMC_IER_RES                                           0
#define AVR32_SDRAMC_IER_RES_MASK                             0x00000001
#define AVR32_SDRAMC_IER_RES_OFFSET                                    0
#define AVR32_SDRAMC_IER_RES_SIZE                                      1
#define AVR32_SDRAMC_IMR                                      0x0000001c
#define AVR32_SDRAMC_IMR_RES                                           0
#define AVR32_SDRAMC_IMR_RES_MASK                             0x00000001
#define AVR32_SDRAMC_IMR_RES_OFFSET                                    0
#define AVR32_SDRAMC_IMR_RES_SIZE                                      1
#define AVR32_SDRAMC_ISR                                      0x00000020
#define AVR32_SDRAMC_ISR_RES                                           0
#define AVR32_SDRAMC_ISR_RES_MASK                             0x00000001
#define AVR32_SDRAMC_ISR_RES_OFFSET                                    0
#define AVR32_SDRAMC_ISR_RES_SIZE                                      1
#define AVR32_SDRAMC_LOAD_MODE                                0x00000003
#define AVR32_SDRAMC_LOW_POWER_SDRAM                          0x00000001
#define AVR32_SDRAMC_LPCB                                              0
#define AVR32_SDRAMC_LPCB_DEEP_POWER_DOWN                     0x00000003
#define AVR32_SDRAMC_LPCB_MASK                                0x00000003
#define AVR32_SDRAMC_LPCB_NO_LP                               0x00000000
#define AVR32_SDRAMC_LPCB_OFFSET                                       0
#define AVR32_SDRAMC_LPCB_POWER_DOWN                          0x00000002
#define AVR32_SDRAMC_LPCB_SELF_REFRESH                        0x00000001
#define AVR32_SDRAMC_LPCB_SIZE                                         2
#define AVR32_SDRAMC_LPR                                      0x00000010
#define AVR32_SDRAMC_LPR_DS                                           10
#define AVR32_SDRAMC_LPR_DS_MASK                              0x00000c00
#define AVR32_SDRAMC_LPR_DS_OFFSET                                    10
#define AVR32_SDRAMC_LPR_DS_SIZE                                       2
#define AVR32_SDRAMC_LPR_LPCB                                          0
#define AVR32_SDRAMC_LPR_LPCB_DEEP_POWER_DOWN                 0x00000003
#define AVR32_SDRAMC_LPR_LPCB_MASK                            0x00000003
#define AVR32_SDRAMC_LPR_LPCB_NO_LP                           0x00000000
#define AVR32_SDRAMC_LPR_LPCB_OFFSET                                   0
#define AVR32_SDRAMC_LPR_LPCB_POWER_DOWN                      0x00000002
#define AVR32_SDRAMC_LPR_LPCB_SELF_REFRESH                    0x00000001
#define AVR32_SDRAMC_LPR_LPCB_SIZE                                     2
#define AVR32_SDRAMC_LPR_PASR                                          4
#define AVR32_SDRAMC_LPR_PASR_MASK                            0x00000070
#define AVR32_SDRAMC_LPR_PASR_OFFSET                                   4
#define AVR32_SDRAMC_LPR_PASR_SIZE                                     3
#define AVR32_SDRAMC_LPR_TCSR                                          8
#define AVR32_SDRAMC_LPR_TCSR_MASK                            0x00000300
#define AVR32_SDRAMC_LPR_TCSR_OFFSET                                   8
#define AVR32_SDRAMC_LPR_TCSR_SIZE                                     2
#define AVR32_SDRAMC_LPR_TIMEOUT                                      12
#define AVR32_SDRAMC_LPR_TIMEOUT_128_CYC_AFTER_END            0x00000002
#define AVR32_SDRAMC_LPR_TIMEOUT_64_CYC_AFTER_END             0x00000001
#define AVR32_SDRAMC_LPR_TIMEOUT_AFTER_END                    0x00000000
#define AVR32_SDRAMC_LPR_TIMEOUT_MASK                         0x00003000
#define AVR32_SDRAMC_LPR_TIMEOUT_OFFSET                               12
#define AVR32_SDRAMC_LPR_TIMEOUT_SIZE                                  2
#define AVR32_SDRAMC_MD                                                0
#define AVR32_SDRAMC_MDR                                      0x00000024
#define AVR32_SDRAMC_MDR_MD                                            0
#define AVR32_SDRAMC_MDR_MD_LOW_POWER_SDRAM                   0x00000001
#define AVR32_SDRAMC_MDR_MD_MASK                              0x00000003
#define AVR32_SDRAMC_MDR_MD_OFFSET                                     0
#define AVR32_SDRAMC_MDR_MD_SDRAM                             0x00000000
#define AVR32_SDRAMC_MDR_MD_SIZE                                       2
#define AVR32_SDRAMC_MD_LOW_POWER_SDRAM                       0x00000001
#define AVR32_SDRAMC_MD_MASK                                  0x00000003
#define AVR32_SDRAMC_MD_OFFSET                                         0
#define AVR32_SDRAMC_MD_SDRAM                                 0x00000000
#define AVR32_SDRAMC_MD_SIZE                                           2
#define AVR32_SDRAMC_MODE                                              0
#define AVR32_SDRAMC_MODE_AUTO_REFRESH                        0x00000004
#define AVR32_SDRAMC_MODE_BANKS_PRECHARGE                     0x00000002
#define AVR32_SDRAMC_MODE_EXT_LOAD_MODE                       0x00000005
#define AVR32_SDRAMC_MODE_LOAD_MODE                           0x00000003
#define AVR32_SDRAMC_MODE_MASK                                0x00000007
#define AVR32_SDRAMC_MODE_NOP                                 0x00000001
#define AVR32_SDRAMC_MODE_NORMAL                              0x00000000
#define AVR32_SDRAMC_MODE_OFFSET                                       0
#define AVR32_SDRAMC_MODE_POWER_DOWN                          0x00000006
#define AVR32_SDRAMC_MODE_SIZE                                         3
#define AVR32_SDRAMC_MR                                       0x00000000
#define AVR32_SDRAMC_MR_MODE                                           0
#define AVR32_SDRAMC_MR_MODE_AUTO_REFRESH                     0x00000004
#define AVR32_SDRAMC_MR_MODE_BANKS_PRECHARGE                  0x00000002
#define AVR32_SDRAMC_MR_MODE_EXT_LOAD_MODE                    0x00000005
#define AVR32_SDRAMC_MR_MODE_LOAD_MODE                        0x00000003
#define AVR32_SDRAMC_MR_MODE_MASK                             0x00000007
#define AVR32_SDRAMC_MR_MODE_NOP                              0x00000001
#define AVR32_SDRAMC_MR_MODE_NORMAL                           0x00000000
#define AVR32_SDRAMC_MR_MODE_OFFSET                                    0
#define AVR32_SDRAMC_MR_MODE_POWER_DOWN                       0x00000006
#define AVR32_SDRAMC_MR_MODE_SIZE                                      3
#define AVR32_SDRAMC_NB                                                4
#define AVR32_SDRAMC_NB_FOUR_BANKS                            0x00000001
#define AVR32_SDRAMC_NB_MASK                                  0x00000010
#define AVR32_SDRAMC_NB_OFFSET                                         4
#define AVR32_SDRAMC_NB_SIZE                                           1
#define AVR32_SDRAMC_NB_TWO_BANKS                             0x00000000
#define AVR32_SDRAMC_NC                                                0
#define AVR32_SDRAMC_NC_10_COLUMN_BITS                        0x00000002
#define AVR32_SDRAMC_NC_11_COLUMN_BITS                        0x00000003
#define AVR32_SDRAMC_NC_8_COLUMN_BITS                         0x00000000
#define AVR32_SDRAMC_NC_9_COLUMN_BITS                         0x00000001
#define AVR32_SDRAMC_NC_MASK                                  0x00000003
#define AVR32_SDRAMC_NC_OFFSET                                         0
#define AVR32_SDRAMC_NC_SIZE                                           2
#define AVR32_SDRAMC_NOP                                      0x00000001
#define AVR32_SDRAMC_NORMAL                                   0x00000000
#define AVR32_SDRAMC_NO_LP                                    0x00000000
#define AVR32_SDRAMC_NR                                                2
#define AVR32_SDRAMC_NR_11_ROW_BITS                           0x00000000
#define AVR32_SDRAMC_NR_12_ROW_BITS                           0x00000001
#define AVR32_SDRAMC_NR_13_ROW_BITS                           0x00000002
#define AVR32_SDRAMC_NR_MASK                                  0x0000000c
#define AVR32_SDRAMC_NR_OFFSET                                         2
#define AVR32_SDRAMC_NR_SIZE                                           2
#define AVR32_SDRAMC_ONE_CYCLE                                0x00000001
#define AVR32_SDRAMC_PASR                                              4
#define AVR32_SDRAMC_PASR_MASK                                0x00000070
#define AVR32_SDRAMC_PASR_OFFSET                                       4
#define AVR32_SDRAMC_PASR_SIZE                                         3
#define AVR32_SDRAMC_RES                                               0
#define AVR32_SDRAMC_RES_MASK                                 0x00000001
#define AVR32_SDRAMC_RES_OFFSET                                        0
#define AVR32_SDRAMC_RES_SIZE                                          1
#define AVR32_SDRAMC_SDRAM                                    0x00000000
#define AVR32_SDRAMC_SELF_REFRESH                             0x00000001
#define AVR32_SDRAMC_TCSR                                              8
#define AVR32_SDRAMC_TCSR_MASK                                0x00000300
#define AVR32_SDRAMC_TCSR_OFFSET                                       8
#define AVR32_SDRAMC_TCSR_SIZE                                         2
#define AVR32_SDRAMC_THREE_CYCLES                             0x00000003
#define AVR32_SDRAMC_TIMEOUT                                          12
#define AVR32_SDRAMC_TIMEOUT_128_CYC_AFTER_END                0x00000002
#define AVR32_SDRAMC_TIMEOUT_64_CYC_AFTER_END                 0x00000001
#define AVR32_SDRAMC_TIMEOUT_AFTER_END                        0x00000000
#define AVR32_SDRAMC_TIMEOUT_MASK                             0x00003000
#define AVR32_SDRAMC_TIMEOUT_OFFSET                                   12
#define AVR32_SDRAMC_TIMEOUT_SIZE                                      2
#define AVR32_SDRAMC_TR                                       0x00000004
#define AVR32_SDRAMC_TRAS                                             24
#define AVR32_SDRAMC_TRAS_MASK                                0x0f000000
#define AVR32_SDRAMC_TRAS_OFFSET                                      24
#define AVR32_SDRAMC_TRAS_SIZE                                         4
#define AVR32_SDRAMC_TRC                                              12
#define AVR32_SDRAMC_TRCD                                             20
#define AVR32_SDRAMC_TRCD_MASK                                0x00f00000
#define AVR32_SDRAMC_TRCD_OFFSET                                      20
#define AVR32_SDRAMC_TRCD_SIZE                                         4
#define AVR32_SDRAMC_TRC_MASK                                 0x0000f000
#define AVR32_SDRAMC_TRC_OFFSET                                       12
#define AVR32_SDRAMC_TRC_SIZE                                          4
#define AVR32_SDRAMC_TRP                                              16
#define AVR32_SDRAMC_TRP_MASK                                 0x000f0000
#define AVR32_SDRAMC_TRP_OFFSET                                       16
#define AVR32_SDRAMC_TRP_SIZE                                          4
#define AVR32_SDRAMC_TR_COUNT                                          0
#define AVR32_SDRAMC_TR_COUNT_MASK                            0x00000fff
#define AVR32_SDRAMC_TR_COUNT_OFFSET                                   0
#define AVR32_SDRAMC_TR_COUNT_SIZE                                    12
#define AVR32_SDRAMC_TWO_BANKS                                0x00000000
#define AVR32_SDRAMC_TWO_CYCLES                               0x00000002
#define AVR32_SDRAMC_TWR                                               8
#define AVR32_SDRAMC_TWR_MASK                                 0x00000f00
#define AVR32_SDRAMC_TWR_OFFSET                                        8
#define AVR32_SDRAMC_TWR_SIZE                                          4
#define AVR32_SDRAMC_TXSR                                             28
#define AVR32_SDRAMC_TXSR_MASK                                0xf0000000
#define AVR32_SDRAMC_TXSR_OFFSET                                      28
#define AVR32_SDRAMC_TXSR_SIZE                                         4
#define AVR32_SDRAMC_VARIANT                                          16
#define AVR32_SDRAMC_VARIANT_MASK                             0x00070000
#define AVR32_SDRAMC_VARIANT_OFFSET                                   16
#define AVR32_SDRAMC_VARIANT_SIZE                                      3
#define AVR32_SDRAMC_VERSION                                  0x000000fc
#define AVR32_SDRAMC_VERSION_MASK                             0x00000fff
#define AVR32_SDRAMC_VERSION_OFFSET                                    0
#define AVR32_SDRAMC_VERSION_SIZE                                     12
#define AVR32_SDRAMC_VERSION_VARIANT                                  16
#define AVR32_SDRAMC_VERSION_VARIANT_MASK                     0x00070000
#define AVR32_SDRAMC_VERSION_VARIANT_OFFSET                           16
#define AVR32_SDRAMC_VERSION_VARIANT_SIZE                              3
#define AVR32_SDRAMC_VERSION_VERSION                                   0
#define AVR32_SDRAMC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_SDRAMC_VERSION_VERSION_OFFSET                            0
#define AVR32_SDRAMC_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_sdramc_mr_t {
    unsigned int                 :29;
    unsigned int mode            : 3;
} avr32_sdramc_mr_t;



typedef struct avr32_sdramc_tr_t {
    unsigned int                 :20;
    unsigned int count           :12;
} avr32_sdramc_tr_t;



typedef struct avr32_sdramc_cr_t {
    unsigned int txsr            : 4;
    unsigned int tras            : 4;
    unsigned int trcd            : 4;
    unsigned int trp             : 4;
    unsigned int trc             : 4;
    unsigned int twr             : 4;
    unsigned int dbw             : 1;
    unsigned int cas             : 2;
    unsigned int nb              : 1;
    unsigned int nr              : 2;
    unsigned int nc              : 2;
} avr32_sdramc_cr_t;



typedef struct avr32_sdramc_hsr_t {
    unsigned int                 :31;
    unsigned int da              : 1;
} avr32_sdramc_hsr_t;



typedef struct avr32_sdramc_lpr_t {
    unsigned int                 :18;
    unsigned int timeout         : 2;
    unsigned int ds              : 2;
    unsigned int tcsr            : 2;
    unsigned int                 : 1;
    unsigned int pasr            : 3;
    unsigned int                 : 2;
    unsigned int lpcb            : 2;
} avr32_sdramc_lpr_t;



typedef struct avr32_sdramc_ier_t {
    unsigned int                 :31;
    unsigned int res             : 1;
} avr32_sdramc_ier_t;



typedef struct avr32_sdramc_idr_t {
    unsigned int                 :31;
    unsigned int res             : 1;
} avr32_sdramc_idr_t;



typedef struct avr32_sdramc_imr_t {
    unsigned int                 :31;
    unsigned int res             : 1;
} avr32_sdramc_imr_t;



typedef struct avr32_sdramc_isr_t {
    unsigned int                 :31;
    unsigned int res             : 1;
} avr32_sdramc_isr_t;



typedef struct avr32_sdramc_mdr_t {
    unsigned int                 :30;
    unsigned int md              : 2;
} avr32_sdramc_mdr_t;



typedef struct avr32_sdramc_version_t {
    unsigned int                 :13;
    unsigned int variant         : 3;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_sdramc_version_t;



typedef struct avr32_sdramc_t {
  union {
          unsigned long                  mr        ;//0x0000
          avr32_sdramc_mr_t              MR        ;
  };
  union {
          unsigned long                  tr        ;//0x0004
          avr32_sdramc_tr_t              TR        ;
  };
  union {
          unsigned long                  cr        ;//0x0008
          avr32_sdramc_cr_t              CR        ;
  };
  union {
          unsigned long                  hsr       ;//0x000c
          avr32_sdramc_hsr_t             HSR       ;
  };
  union {
          unsigned long                  lpr       ;//0x0010
          avr32_sdramc_lpr_t             LPR       ;
  };
  union {
          unsigned long                  ier       ;//0x0014
          avr32_sdramc_ier_t             IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0018
          avr32_sdramc_idr_t             IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x001c
    const avr32_sdramc_imr_t             IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x0020
    const avr32_sdramc_isr_t             ISR       ;
  };
  union {
          unsigned long                  mdr       ;//0x0024
          avr32_sdramc_mdr_t             MDR       ;
  };
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned int                   :32       ;//0x0040
          unsigned int                   :32       ;//0x0044
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
          unsigned int                   :32       ;//0x0050
          unsigned int                   :32       ;//0x0054
          unsigned int                   :32       ;//0x0058
          unsigned int                   :32       ;//0x005c
          unsigned int                   :32       ;//0x0060
          unsigned int                   :32       ;//0x0064
          unsigned int                   :32       ;//0x0068
          unsigned int                   :32       ;//0x006c
          unsigned int                   :32       ;//0x0070
          unsigned int                   :32       ;//0x0074
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
          unsigned int                   :32       ;//0x0080
          unsigned int                   :32       ;//0x0084
          unsigned int                   :32       ;//0x0088
          unsigned int                   :32       ;//0x008c
          unsigned int                   :32       ;//0x0090
          unsigned int                   :32       ;//0x0094
          unsigned int                   :32       ;//0x0098
          unsigned int                   :32       ;//0x009c
          unsigned int                   :32       ;//0x00a0
          unsigned int                   :32       ;//0x00a4
          unsigned int                   :32       ;//0x00a8
          unsigned int                   :32       ;//0x00ac
          unsigned int                   :32       ;//0x00b0
          unsigned int                   :32       ;//0x00b4
          unsigned int                   :32       ;//0x00b8
          unsigned int                   :32       ;//0x00bc
          unsigned int                   :32       ;//0x00c0
          unsigned int                   :32       ;//0x00c4
          unsigned int                   :32       ;//0x00c8
          unsigned int                   :32       ;//0x00cc
          unsigned int                   :32       ;//0x00d0
          unsigned int                   :32       ;//0x00d4
          unsigned int                   :32       ;//0x00d8
          unsigned int                   :32       ;//0x00dc
          unsigned int                   :32       ;//0x00e0
          unsigned int                   :32       ;//0x00e4
          unsigned int                   :32       ;//0x00e8
          unsigned int                   :32       ;//0x00ec
          unsigned int                   :32       ;//0x00f0
          unsigned int                   :32       ;//0x00f4
          unsigned int                   :32       ;//0x00f8
  union {
    const unsigned long                  version   ;//0x00fc
    const avr32_sdramc_version_t         VERSION   ;
  };
} avr32_sdramc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_SDRAMC_201_H_INCLUDED*/
#endif


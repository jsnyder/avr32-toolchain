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
 * Model        : AP7200
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_KEYPAD_100_H_INCLUDED
#define AVR32_KEYPAD_100_H_INCLUDED

#define AVR32_KEYPAD_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_KEYPAD_<register>
 - Bitfield mask:   AVR32_KEYPAD_<register>_<bitfield>
 - Bitfield offset: AVR32_KEYPAD_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_KEYPAD_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_KEYPAD_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_KEYPAD_<bitfield>
 - Bitfield offset: AVR32_KEYPAD_<bitfield>_OFFSET
 - Bitfield size:   AVR32_KEYPAD_<bitfield>_SIZE
 - Bitfield values: AVR32_KEYPAD_<bitfield>_<value name>
 - Bitfield values: AVR32_KEYPAD_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_KEYPAD_ACT                                               6
#define AVR32_KEYPAD_ACT_MASK                                 0x00000040
#define AVR32_KEYPAD_ACT_OFFSET                                        6
#define AVR32_KEYPAD_ACT_SIZE                                          1
#define AVR32_KEYPAD_ASCAN                                             5
#define AVR32_KEYPAD_ASCAN_MASK                               0x00000020
#define AVR32_KEYPAD_ASCAN_OFFSET                                      5
#define AVR32_KEYPAD_ASCAN_SIZE                                        1
#define AVR32_KEYPAD_ASENSE                                   0x00000020
#define AVR32_KEYPAD_ASENSE_COLUMN                                     0
#define AVR32_KEYPAD_ASENSE_COLUMN_MASK                       0x00000007
#define AVR32_KEYPAD_ASENSE_COLUMN_OFFSET                              0
#define AVR32_KEYPAD_ASENSE_COLUMN_SIZE                                3
#define AVR32_KEYPAD_ASENSE_ROW                                        8
#define AVR32_KEYPAD_ASENSE_ROW_MASK                          0x00000700
#define AVR32_KEYPAD_ASENSE_ROW_OFFSET                                 8
#define AVR32_KEYPAD_ASENSE_ROW_SIZE                                   3
#define AVR32_KEYPAD_ASENSE_SCAN                                      31
#define AVR32_KEYPAD_ASENSE_SCAN_MASK                         0x80000000
#define AVR32_KEYPAD_ASENSE_SCAN_OFFSET                               31
#define AVR32_KEYPAD_ASENSE_SCAN_SIZE                                  1
#define AVR32_KEYPAD_ASENSE_STATUS                                    29
#define AVR32_KEYPAD_ASENSE_STATUS_MASK                       0x60000000
#define AVR32_KEYPAD_ASENSE_STATUS_MULTIPLE_KEYS_PRESSED      0x00000003
#define AVR32_KEYPAD_ASENSE_STATUS_NO_KEY_PRESSED             0x00000000
#define AVR32_KEYPAD_ASENSE_STATUS_OFFSET                             29
#define AVR32_KEYPAD_ASENSE_STATUS_ONE_KEY_PRESSED            0x00000001
#define AVR32_KEYPAD_ASENSE_STATUS_SIZE                                2
#define AVR32_KEYPAD_COLUMN                                            0
#define AVR32_KEYPAD_COLUMNS                                           0
#define AVR32_KEYPAD_COLUMNS_MASK                             0x000000ff
#define AVR32_KEYPAD_COLUMNS_OFFSET                                    0
#define AVR32_KEYPAD_COLUMNS_SIZE                                      8
#define AVR32_KEYPAD_COLUMN_OFFSET                                     0
#define AVR32_KEYPAD_CONFIG                                   0x00000004
#define AVR32_KEYPAD_CONFIG_COLUMNS                                    0
#define AVR32_KEYPAD_CONFIG_COLUMNS_MASK                      0x000000ff
#define AVR32_KEYPAD_CONFIG_COLUMNS_OFFSET                             0
#define AVR32_KEYPAD_CONFIG_COLUMNS_SIZE                               8
#define AVR32_KEYPAD_CONFIG_DEN                                       16
#define AVR32_KEYPAD_CONFIG_DEN_MASK                          0x00ff0000
#define AVR32_KEYPAD_CONFIG_DEN_OFFSET                                16
#define AVR32_KEYPAD_CONFIG_DEN_SIZE                                   8
#define AVR32_KEYPAD_CONFIG_ROWS                                       8
#define AVR32_KEYPAD_CONFIG_ROWS_MASK                         0x0000ff00
#define AVR32_KEYPAD_CONFIG_ROWS_OFFSET                                8
#define AVR32_KEYPAD_CONFIG_ROWS_SIZE                                  8
#define AVR32_KEYPAD_CONTROL                                  0x00000000
#define AVR32_KEYPAD_CONTROL_ACT                                       6
#define AVR32_KEYPAD_CONTROL_ACT_MASK                         0x00000040
#define AVR32_KEYPAD_CONTROL_ACT_OFFSET                                6
#define AVR32_KEYPAD_CONTROL_ACT_SIZE                                  1
#define AVR32_KEYPAD_CONTROL_ASCAN                                     5
#define AVR32_KEYPAD_CONTROL_ASCAN_MASK                       0x00000020
#define AVR32_KEYPAD_CONTROL_ASCAN_OFFSET                              5
#define AVR32_KEYPAD_CONTROL_ASCAN_SIZE                                1
#define AVR32_KEYPAD_CONTROL_DEN                                       1
#define AVR32_KEYPAD_CONTROL_DEN_MASK                         0x00000002
#define AVR32_KEYPAD_CONTROL_DEN_OFFSET                                1
#define AVR32_KEYPAD_CONTROL_DEN_SIZE                                  1
#define AVR32_KEYPAD_CONTROL_MEN                                       0
#define AVR32_KEYPAD_CONTROL_MEN_MASK                         0x00000001
#define AVR32_KEYPAD_CONTROL_MEN_OFFSET                                0
#define AVR32_KEYPAD_CONTROL_MEN_SIZE                                  1
#define AVR32_KEYPAD_CONTROL_MKP                                       4
#define AVR32_KEYPAD_CONTROL_MKP_MASK                         0x00000010
#define AVR32_KEYPAD_CONTROL_MKP_OFFSET                                4
#define AVR32_KEYPAD_CONTROL_MKP_SIZE                                  1
#define AVR32_KEYPAD_CONTROL_PRESC                                     8
#define AVR32_KEYPAD_CONTROL_PRESC_MASK                       0x00000300
#define AVR32_KEYPAD_CONTROL_PRESC_OFFSET                              8
#define AVR32_KEYPAD_CONTROL_PRESC_SIZE                                2
#define AVR32_KEYPAD_CONTROL_R0EN                                      2
#define AVR32_KEYPAD_CONTROL_R0EN_MASK                        0x00000004
#define AVR32_KEYPAD_CONTROL_R0EN_OFFSET                               2
#define AVR32_KEYPAD_CONTROL_R0EN_SIZE                                 1
#define AVR32_KEYPAD_CONTROL_R1EN                                      3
#define AVR32_KEYPAD_CONTROL_R1EN_MASK                        0x00000008
#define AVR32_KEYPAD_CONTROL_R1EN_OFFSET                               3
#define AVR32_KEYPAD_CONTROL_R1EN_SIZE                                 1
#define AVR32_KEYPAD_DCINT                                             1
#define AVR32_KEYPAD_DCINT_MASK                               0x00000002
#define AVR32_KEYPAD_DCINT_OFFSET                                      1
#define AVR32_KEYPAD_DCINT_SIZE                                        1
#define AVR32_KEYPAD_DDEBI                                             8
#define AVR32_KEYPAD_DDEBI_MASK                               0x0000ff00
#define AVR32_KEYPAD_DDEBI_OFFSET                                      8
#define AVR32_KEYPAD_DDEBI_SIZE                                        8
#define AVR32_KEYPAD_DEBI                                     0x0000000c
#define AVR32_KEYPAD_DEBI_DDEBI                                        8
#define AVR32_KEYPAD_DEBI_DDEBI_MASK                          0x0000ff00
#define AVR32_KEYPAD_DEBI_DDEBI_OFFSET                                 8
#define AVR32_KEYPAD_DEBI_DDEBI_SIZE                                   8
#define AVR32_KEYPAD_DEBI_MDEBI                                        0
#define AVR32_KEYPAD_DEBI_MDEBI_MASK                          0x000000ff
#define AVR32_KEYPAD_DEBI_MDEBI_OFFSET                                 0
#define AVR32_KEYPAD_DEBI_MDEBI_SIZE                                   8
#define AVR32_KEYPAD_DEBI_RDEBI                                       16
#define AVR32_KEYPAD_DEBI_RDEBI_MASK                          0x00ff0000
#define AVR32_KEYPAD_DEBI_RDEBI_OFFSET                                16
#define AVR32_KEYPAD_DEBI_RDEBI_SIZE                                   8
#define AVR32_KEYPAD_DMINT                                             2
#define AVR32_KEYPAD_DMINT_MASK                               0x00000004
#define AVR32_KEYPAD_DMINT_OFFSET                                      2
#define AVR32_KEYPAD_DMINT_SIZE                                        1
#define AVR32_KEYPAD_DSENSE                                   0x00000018
#define AVR32_KEYPAD_DSENSE_SENSEDATA                                  0
#define AVR32_KEYPAD_DSENSE_SENSEDATA_MASK                    0x000000ff
#define AVR32_KEYPAD_DSENSE_SENSEDATA_OFFSET                           0
#define AVR32_KEYPAD_DSENSE_SENSEDATA_SIZE                             8
#define AVR32_KEYPAD_DSENSE_UPD                                       31
#define AVR32_KEYPAD_DSENSE_UPD_MASK                          0x80000000
#define AVR32_KEYPAD_DSENSE_UPD_OFFSET                                31
#define AVR32_KEYPAD_DSENSE_UPD_SIZE                                   1
#define AVR32_KEYPAD_ICR                                      0x00000044
#define AVR32_KEYPAD_ICR_DCINT                                         1
#define AVR32_KEYPAD_ICR_DCINT_MASK                           0x00000002
#define AVR32_KEYPAD_ICR_DCINT_OFFSET                                  1
#define AVR32_KEYPAD_ICR_DCINT_SIZE                                    1
#define AVR32_KEYPAD_ICR_DMINT                                         2
#define AVR32_KEYPAD_ICR_DMINT_MASK                           0x00000004
#define AVR32_KEYPAD_ICR_DMINT_OFFSET                                  2
#define AVR32_KEYPAD_ICR_DMINT_SIZE                                    1
#define AVR32_KEYPAD_ICR_MINT                                          0
#define AVR32_KEYPAD_ICR_MINT_MASK                            0x00000001
#define AVR32_KEYPAD_ICR_MINT_OFFSET                                   0
#define AVR32_KEYPAD_ICR_MINT_SIZE                                     1
#define AVR32_KEYPAD_ICR_RINT0                                         3
#define AVR32_KEYPAD_ICR_RINT0_MASK                           0x00000008
#define AVR32_KEYPAD_ICR_RINT0_OFFSET                                  3
#define AVR32_KEYPAD_ICR_RINT0_SIZE                                    1
#define AVR32_KEYPAD_ICR_RINT1                                         4
#define AVR32_KEYPAD_ICR_RINT1_MASK                           0x00000010
#define AVR32_KEYPAD_ICR_RINT1_OFFSET                                  4
#define AVR32_KEYPAD_ICR_RINT1_SIZE                                    1
#define AVR32_KEYPAD_IDR                                      0x00000038
#define AVR32_KEYPAD_IDR_DCINT                                         1
#define AVR32_KEYPAD_IDR_DCINT_MASK                           0x00000002
#define AVR32_KEYPAD_IDR_DCINT_OFFSET                                  1
#define AVR32_KEYPAD_IDR_DCINT_SIZE                                    1
#define AVR32_KEYPAD_IDR_DMINT                                         2
#define AVR32_KEYPAD_IDR_DMINT_MASK                           0x00000004
#define AVR32_KEYPAD_IDR_DMINT_OFFSET                                  2
#define AVR32_KEYPAD_IDR_DMINT_SIZE                                    1
#define AVR32_KEYPAD_IDR_MINT                                          0
#define AVR32_KEYPAD_IDR_MINT_MASK                            0x00000001
#define AVR32_KEYPAD_IDR_MINT_OFFSET                                   0
#define AVR32_KEYPAD_IDR_MINT_SIZE                                     1
#define AVR32_KEYPAD_IDR_RINT0                                         3
#define AVR32_KEYPAD_IDR_RINT0_MASK                           0x00000008
#define AVR32_KEYPAD_IDR_RINT0_OFFSET                                  3
#define AVR32_KEYPAD_IDR_RINT0_SIZE                                    1
#define AVR32_KEYPAD_IDR_RINT1                                         4
#define AVR32_KEYPAD_IDR_RINT1_MASK                           0x00000010
#define AVR32_KEYPAD_IDR_RINT1_OFFSET                                  4
#define AVR32_KEYPAD_IDR_RINT1_SIZE                                    1
#define AVR32_KEYPAD_IER                                      0x00000034
#define AVR32_KEYPAD_IER_DCINT                                         1
#define AVR32_KEYPAD_IER_DCINT_MASK                           0x00000002
#define AVR32_KEYPAD_IER_DCINT_OFFSET                                  1
#define AVR32_KEYPAD_IER_DCINT_SIZE                                    1
#define AVR32_KEYPAD_IER_DMINT                                         2
#define AVR32_KEYPAD_IER_DMINT_MASK                           0x00000004
#define AVR32_KEYPAD_IER_DMINT_OFFSET                                  2
#define AVR32_KEYPAD_IER_DMINT_SIZE                                    1
#define AVR32_KEYPAD_IER_MINT                                          0
#define AVR32_KEYPAD_IER_MINT_MASK                            0x00000001
#define AVR32_KEYPAD_IER_MINT_OFFSET                                   0
#define AVR32_KEYPAD_IER_MINT_SIZE                                     1
#define AVR32_KEYPAD_IER_RINT0                                         3
#define AVR32_KEYPAD_IER_RINT0_MASK                           0x00000008
#define AVR32_KEYPAD_IER_RINT0_OFFSET                                  3
#define AVR32_KEYPAD_IER_RINT0_SIZE                                    1
#define AVR32_KEYPAD_IER_RINT1                                         4
#define AVR32_KEYPAD_IER_RINT1_MASK                           0x00000010
#define AVR32_KEYPAD_IER_RINT1_OFFSET                                  4
#define AVR32_KEYPAD_IER_RINT1_SIZE                                    1
#define AVR32_KEYPAD_IMR                                      0x0000003c
#define AVR32_KEYPAD_IMR_DCINT                                         1
#define AVR32_KEYPAD_IMR_DCINT_MASK                           0x00000002
#define AVR32_KEYPAD_IMR_DCINT_OFFSET                                  1
#define AVR32_KEYPAD_IMR_DCINT_SIZE                                    1
#define AVR32_KEYPAD_IMR_DMINT                                         2
#define AVR32_KEYPAD_IMR_DMINT_MASK                           0x00000004
#define AVR32_KEYPAD_IMR_DMINT_OFFSET                                  2
#define AVR32_KEYPAD_IMR_DMINT_SIZE                                    1
#define AVR32_KEYPAD_IMR_MINT                                          0
#define AVR32_KEYPAD_IMR_MINT_MASK                            0x00000001
#define AVR32_KEYPAD_IMR_MINT_OFFSET                                   0
#define AVR32_KEYPAD_IMR_MINT_SIZE                                     1
#define AVR32_KEYPAD_IMR_RINT0                                         3
#define AVR32_KEYPAD_IMR_RINT0_MASK                           0x00000008
#define AVR32_KEYPAD_IMR_RINT0_OFFSET                                  3
#define AVR32_KEYPAD_IMR_RINT0_SIZE                                    1
#define AVR32_KEYPAD_IMR_RINT1                                         4
#define AVR32_KEYPAD_IMR_RINT1_MASK                           0x00000010
#define AVR32_KEYPAD_IMR_RINT1_OFFSET                                  4
#define AVR32_KEYPAD_IMR_RINT1_SIZE                                    1
#define AVR32_KEYPAD_ISR                                      0x00000040
#define AVR32_KEYPAD_ISR_DCINT                                         1
#define AVR32_KEYPAD_ISR_DCINT_MASK                           0x00000002
#define AVR32_KEYPAD_ISR_DCINT_OFFSET                                  1
#define AVR32_KEYPAD_ISR_DCINT_SIZE                                    1
#define AVR32_KEYPAD_ISR_DMINT                                         2
#define AVR32_KEYPAD_ISR_DMINT_MASK                           0x00000004
#define AVR32_KEYPAD_ISR_DMINT_OFFSET                                  2
#define AVR32_KEYPAD_ISR_DMINT_SIZE                                    1
#define AVR32_KEYPAD_ISR_MINT                                          0
#define AVR32_KEYPAD_ISR_MINT_MASK                            0x00000001
#define AVR32_KEYPAD_ISR_MINT_OFFSET                                   0
#define AVR32_KEYPAD_ISR_MINT_SIZE                                     1
#define AVR32_KEYPAD_ISR_RINT0                                         3
#define AVR32_KEYPAD_ISR_RINT0_MASK                           0x00000008
#define AVR32_KEYPAD_ISR_RINT0_OFFSET                                  3
#define AVR32_KEYPAD_ISR_RINT0_SIZE                                    1
#define AVR32_KEYPAD_ISR_RINT1                                         4
#define AVR32_KEYPAD_ISR_RINT1_MASK                           0x00000010
#define AVR32_KEYPAD_ISR_RINT1_OFFSET                                  4
#define AVR32_KEYPAD_ISR_RINT1_SIZE                                    1
#define AVR32_KEYPAD_MANDRIVE                                 0x00000014
#define AVR32_KEYPAD_MANDRIVE_MANDRIVE                                 0
#define AVR32_KEYPAD_MANDRIVE_MANDRIVE_MASK                   0x000000ff
#define AVR32_KEYPAD_MANDRIVE_MANDRIVE_OFFSET                          0
#define AVR32_KEYPAD_MANDRIVE_MANDRIVE_SIZE                            8
#define AVR32_KEYPAD_MANDRIVE_MASK                            0x000000ff
#define AVR32_KEYPAD_MANDRIVE_OFFSET                                   0
#define AVR32_KEYPAD_MANDRIVE_SIZE                                     8
#define AVR32_KEYPAD_MDEBI                                             0
#define AVR32_KEYPAD_MDEBI_MASK                               0x000000ff
#define AVR32_KEYPAD_MDEBI_OFFSET                                      0
#define AVR32_KEYPAD_MDEBI_SIZE                                        8
#define AVR32_KEYPAD_MEN                                               0
#define AVR32_KEYPAD_MEN_MASK                                 0x00000001
#define AVR32_KEYPAD_MEN_OFFSET                                        0
#define AVR32_KEYPAD_MEN_SIZE                                          1
#define AVR32_KEYPAD_MINT                                              0
#define AVR32_KEYPAD_MINT_MASK                                0x00000001
#define AVR32_KEYPAD_MINT_OFFSET                                       0
#define AVR32_KEYPAD_MINT_SIZE                                         1
#define AVR32_KEYPAD_MKP                                               4
#define AVR32_KEYPAD_MKPSENSE0                                0x00000024
#define AVR32_KEYPAD_MKPSENSE0_SCAN                                   31
#define AVR32_KEYPAD_MKPSENSE0_SCAN_MASK                      0x80000000
#define AVR32_KEYPAD_MKPSENSE0_SCAN_OFFSET                            31
#define AVR32_KEYPAD_MKPSENSE0_SCAN_SIZE                               1
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA0                              0
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA0_MASK                0x000000ff
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA0_OFFSET                       0
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA0_SIZE                         8
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA1                             16
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA1_MASK                0x00ff0000
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA1_OFFSET                      16
#define AVR32_KEYPAD_MKPSENSE0_SENSEDATA1_SIZE                         8
#define AVR32_KEYPAD_MKPSENSE1                                0x00000028
#define AVR32_KEYPAD_MKPSENSE1_SCAN                                   31
#define AVR32_KEYPAD_MKPSENSE1_SCAN_MASK                      0x80000000
#define AVR32_KEYPAD_MKPSENSE1_SCAN_OFFSET                            31
#define AVR32_KEYPAD_MKPSENSE1_SCAN_SIZE                               1
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA2                              0
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA2_MASK                0x000000ff
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA2_OFFSET                       0
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA2_SIZE                         8
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA3                             16
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA3_MASK                0x00ff0000
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA3_OFFSET                      16
#define AVR32_KEYPAD_MKPSENSE1_SENSEDATA3_SIZE                         8
#define AVR32_KEYPAD_MKPSENSE2                                0x0000002c
#define AVR32_KEYPAD_MKPSENSE2_SCAN                                   31
#define AVR32_KEYPAD_MKPSENSE2_SCAN_MASK                      0x80000000
#define AVR32_KEYPAD_MKPSENSE2_SCAN_OFFSET                            31
#define AVR32_KEYPAD_MKPSENSE2_SCAN_SIZE                               1
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA4                              0
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA4_MASK                0x000000ff
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA4_OFFSET                       0
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA4_SIZE                         8
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA5                             16
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA5_MASK                0x00ff0000
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA5_OFFSET                      16
#define AVR32_KEYPAD_MKPSENSE2_SENSEDATA5_SIZE                         8
#define AVR32_KEYPAD_MKPSENSE3                                0x00000030
#define AVR32_KEYPAD_MKPSENSE3_SCAN                                   31
#define AVR32_KEYPAD_MKPSENSE3_SCAN_MASK                      0x80000000
#define AVR32_KEYPAD_MKPSENSE3_SCAN_OFFSET                            31
#define AVR32_KEYPAD_MKPSENSE3_SCAN_SIZE                               1
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA6                              0
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA6_MASK                0x000000ff
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA6_OFFSET                       0
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA6_SIZE                         8
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA7                             16
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA7_MASK                0x00ff0000
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA7_OFFSET                      16
#define AVR32_KEYPAD_MKPSENSE3_SENSEDATA7_SIZE                         8
#define AVR32_KEYPAD_MKP_MASK                                 0x00000010
#define AVR32_KEYPAD_MKP_OFFSET                                        4
#define AVR32_KEYPAD_MKP_SIZE                                          1
#define AVR32_KEYPAD_MSENSE                                   0x0000001c
#define AVR32_KEYPAD_MSENSE_SENSEDATA                                  0
#define AVR32_KEYPAD_MSENSE_SENSEDATA_MASK                    0x000000ff
#define AVR32_KEYPAD_MSENSE_SENSEDATA_OFFSET                           0
#define AVR32_KEYPAD_MSENSE_SENSEDATA_SIZE                             8
#define AVR32_KEYPAD_MULTIPLE_KEYS_PRESSED                    0x00000003
#define AVR32_KEYPAD_NO_KEY_PRESSED                           0x00000000
#define AVR32_KEYPAD_ONE_KEY_PRESSED                          0x00000001
#define AVR32_KEYPAD_PARAMETER                                0x00000048
#define AVR32_KEYPAD_PARAMETER_COLUMN                                  0
#define AVR32_KEYPAD_PARAMETER_COLUMN_MASK                    0x000000ff
#define AVR32_KEYPAD_PARAMETER_COLUMN_OFFSET                           0
#define AVR32_KEYPAD_PARAMETER_COLUMN_SIZE                             8
#define AVR32_KEYPAD_PARAMETER_ROW                                     8
#define AVR32_KEYPAD_PARAMETER_ROW_MASK                       0x0000ff00
#define AVR32_KEYPAD_PARAMETER_ROW_OFFSET                              8
#define AVR32_KEYPAD_PARAMETER_ROW_SIZE                                8
#define AVR32_KEYPAD_PRESC                                             8
#define AVR32_KEYPAD_PRESC_MASK                               0x00000300
#define AVR32_KEYPAD_PRESC_OFFSET                                      8
#define AVR32_KEYPAD_PRESC_SIZE                                        2
#define AVR32_KEYPAD_R0CNT                                             0
#define AVR32_KEYPAD_R0CNT_MASK                               0x000000ff
#define AVR32_KEYPAD_R0CNT_OFFSET                                      0
#define AVR32_KEYPAD_R0CNT_SIZE                                        8
#define AVR32_KEYPAD_R0EN                                              2
#define AVR32_KEYPAD_R0EN_MASK                                0x00000004
#define AVR32_KEYPAD_R0EN_OFFSET                                       2
#define AVR32_KEYPAD_R0EN_SIZE                                         1
#define AVR32_KEYPAD_R1CNT                                            16
#define AVR32_KEYPAD_R1CNT_MASK                               0x00ff0000
#define AVR32_KEYPAD_R1CNT_OFFSET                                     16
#define AVR32_KEYPAD_R1CNT_SIZE                                        8
#define AVR32_KEYPAD_R1EN                                              3
#define AVR32_KEYPAD_R1EN_MASK                                0x00000008
#define AVR32_KEYPAD_R1EN_OFFSET                                       3
#define AVR32_KEYPAD_R1EN_SIZE                                         1
#define AVR32_KEYPAD_RDEBI                                            16
#define AVR32_KEYPAD_RDEBI_MASK                               0x00ff0000
#define AVR32_KEYPAD_RDEBI_OFFSET                                     16
#define AVR32_KEYPAD_RDEBI_SIZE                                        8
#define AVR32_KEYPAD_RINT0                                             3
#define AVR32_KEYPAD_RINT0_MASK                               0x00000008
#define AVR32_KEYPAD_RINT0_OFFSET                                      3
#define AVR32_KEYPAD_RINT0_SIZE                                        1
#define AVR32_KEYPAD_RINT1                                             4
#define AVR32_KEYPAD_RINT1_MASK                               0x00000010
#define AVR32_KEYPAD_RINT1_OFFSET                                      4
#define AVR32_KEYPAD_RINT1_SIZE                                        1
#define AVR32_KEYPAD_ROT                                      0x00000010
#define AVR32_KEYPAD_ROT_R0CNT                                         0
#define AVR32_KEYPAD_ROT_R0CNT_MASK                           0x000000ff
#define AVR32_KEYPAD_ROT_R0CNT_OFFSET                                  0
#define AVR32_KEYPAD_ROT_R0CNT_SIZE                                    8
#define AVR32_KEYPAD_ROT_R1CNT                                        16
#define AVR32_KEYPAD_ROT_R1CNT_MASK                           0x00ff0000
#define AVR32_KEYPAD_ROT_R1CNT_OFFSET                                 16
#define AVR32_KEYPAD_ROT_R1CNT_SIZE                                    8
#define AVR32_KEYPAD_ROT_UPD                                          31
#define AVR32_KEYPAD_ROT_UPD_MASK                             0x80000000
#define AVR32_KEYPAD_ROT_UPD_OFFSET                                   31
#define AVR32_KEYPAD_ROT_UPD_SIZE                                      1
#define AVR32_KEYPAD_ROW                                               8
#define AVR32_KEYPAD_ROWS                                              8
#define AVR32_KEYPAD_ROWS_MASK                                0x0000ff00
#define AVR32_KEYPAD_ROWS_OFFSET                                       8
#define AVR32_KEYPAD_ROWS_SIZE                                         8
#define AVR32_KEYPAD_ROW_OFFSET                                        8
#define AVR32_KEYPAD_SCAN                                             31
#define AVR32_KEYPAD_SCAN_MASK                                0x80000000
#define AVR32_KEYPAD_SCAN_OFFSET                                      31
#define AVR32_KEYPAD_SCAN_SIZE                                         1
#define AVR32_KEYPAD_SDR                                      0x00000008
#define AVR32_KEYPAD_SDR_MASK                                 0x0000000f
#define AVR32_KEYPAD_SDR_OFFSET                                        0
#define AVR32_KEYPAD_SDR_SDR                                           0
#define AVR32_KEYPAD_SDR_SDR_MASK                             0x0000000f
#define AVR32_KEYPAD_SDR_SDR_OFFSET                                    0
#define AVR32_KEYPAD_SDR_SDR_SIZE                                      4
#define AVR32_KEYPAD_SDR_SIZE                                          4
#define AVR32_KEYPAD_SENSEDATA                                         0
#define AVR32_KEYPAD_SENSEDATA0                                        0
#define AVR32_KEYPAD_SENSEDATA0_MASK                          0x000000ff
#define AVR32_KEYPAD_SENSEDATA0_OFFSET                                 0
#define AVR32_KEYPAD_SENSEDATA0_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA1                                       16
#define AVR32_KEYPAD_SENSEDATA1_MASK                          0x00ff0000
#define AVR32_KEYPAD_SENSEDATA1_OFFSET                                16
#define AVR32_KEYPAD_SENSEDATA1_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA2                                        0
#define AVR32_KEYPAD_SENSEDATA2_MASK                          0x000000ff
#define AVR32_KEYPAD_SENSEDATA2_OFFSET                                 0
#define AVR32_KEYPAD_SENSEDATA2_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA3                                       16
#define AVR32_KEYPAD_SENSEDATA3_MASK                          0x00ff0000
#define AVR32_KEYPAD_SENSEDATA3_OFFSET                                16
#define AVR32_KEYPAD_SENSEDATA3_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA4                                        0
#define AVR32_KEYPAD_SENSEDATA4_MASK                          0x000000ff
#define AVR32_KEYPAD_SENSEDATA4_OFFSET                                 0
#define AVR32_KEYPAD_SENSEDATA4_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA5                                       16
#define AVR32_KEYPAD_SENSEDATA5_MASK                          0x00ff0000
#define AVR32_KEYPAD_SENSEDATA5_OFFSET                                16
#define AVR32_KEYPAD_SENSEDATA5_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA6                                        0
#define AVR32_KEYPAD_SENSEDATA6_MASK                          0x000000ff
#define AVR32_KEYPAD_SENSEDATA6_OFFSET                                 0
#define AVR32_KEYPAD_SENSEDATA6_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA7                                       16
#define AVR32_KEYPAD_SENSEDATA7_MASK                          0x00ff0000
#define AVR32_KEYPAD_SENSEDATA7_OFFSET                                16
#define AVR32_KEYPAD_SENSEDATA7_SIZE                                   8
#define AVR32_KEYPAD_SENSEDATA_MASK                           0x000000ff
#define AVR32_KEYPAD_SENSEDATA_OFFSET                                  0
#define AVR32_KEYPAD_SENSEDATA_SIZE                                    8
#define AVR32_KEYPAD_STATUS                                           29
#define AVR32_KEYPAD_STATUS_MASK                              0x60000000
#define AVR32_KEYPAD_STATUS_MULTIPLE_KEYS_PRESSED             0x00000003
#define AVR32_KEYPAD_STATUS_NO_KEY_PRESSED                    0x00000000
#define AVR32_KEYPAD_STATUS_OFFSET                                    29
#define AVR32_KEYPAD_STATUS_ONE_KEY_PRESSED                   0x00000001
#define AVR32_KEYPAD_STATUS_SIZE                                       2
#define AVR32_KEYPAD_UPD                                              31
#define AVR32_KEYPAD_UPD_MASK                                 0x80000000
#define AVR32_KEYPAD_UPD_OFFSET                                       31
#define AVR32_KEYPAD_UPD_SIZE                                          1
#define AVR32_KEYPAD_VERSION                                  0x0000004c
#define AVR32_KEYPAD_VERSION_MASK                             0x00000fff
#define AVR32_KEYPAD_VERSION_OFFSET                                    0
#define AVR32_KEYPAD_VERSION_SIZE                                     12
#define AVR32_KEYPAD_VERSION_VERSION                                   0
#define AVR32_KEYPAD_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_KEYPAD_VERSION_VERSION_OFFSET                            0
#define AVR32_KEYPAD_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_keypad_control_t {
    unsigned int                 :22;
    unsigned int presc           : 2;
    unsigned int                 : 1;
    unsigned int act             : 1;
    unsigned int ascan           : 1;
    unsigned int mkp             : 1;
    unsigned int r1en            : 1;
    unsigned int r0en            : 1;
    unsigned int den             : 1;
    unsigned int men             : 1;
} avr32_keypad_control_t;



typedef struct avr32_keypad_config_t {
    unsigned int                 : 8;
    unsigned int den             : 8;
    unsigned int rows            : 8;
    unsigned int columns         : 8;
} avr32_keypad_config_t;



typedef struct avr32_keypad_sdr_t {
    unsigned int                 :28;
    unsigned int sdr             : 4;
} avr32_keypad_sdr_t;



typedef struct avr32_keypad_debi_t {
    unsigned int                 : 8;
    unsigned int rdebi           : 8;
    unsigned int ddebi           : 8;
    unsigned int mdebi           : 8;
} avr32_keypad_debi_t;



typedef struct avr32_keypad_rot_t {
    unsigned int upd             : 1;
    unsigned int                 : 7;
    unsigned int r1cnt           : 8;
    unsigned int                 : 8;
    unsigned int r0cnt           : 8;
} avr32_keypad_rot_t;



typedef struct avr32_keypad_mandrive_t {
    unsigned int                 :24;
    unsigned int mandrive        : 8;
} avr32_keypad_mandrive_t;



typedef struct avr32_keypad_dsense_t {
    unsigned int upd             : 1;
    unsigned int                 :23;
    unsigned int sensedata       : 8;
} avr32_keypad_dsense_t;



typedef struct avr32_keypad_msense_t {
    unsigned int                 :24;
    unsigned int sensedata       : 8;
} avr32_keypad_msense_t;



typedef struct avr32_keypad_asense_t {
    unsigned int scan            : 1;
    unsigned int status          : 2;
    unsigned int                 :18;
    unsigned int row             : 3;
    unsigned int                 : 5;
    unsigned int column          : 3;
} avr32_keypad_asense_t;



typedef struct avr32_keypad_mkpsense0_t {
    unsigned int scan            : 1;
    unsigned int                 : 7;
    unsigned int sensedata1      : 8;
    unsigned int                 : 8;
    unsigned int sensedata0      : 8;
} avr32_keypad_mkpsense0_t;



typedef struct avr32_keypad_mkpsense1_t {
    unsigned int scan            : 1;
    unsigned int                 : 7;
    unsigned int sensedata3      : 8;
    unsigned int                 : 8;
    unsigned int sensedata2      : 8;
} avr32_keypad_mkpsense1_t;



typedef struct avr32_keypad_mkpsense2_t {
    unsigned int scan            : 1;
    unsigned int                 : 7;
    unsigned int sensedata5      : 8;
    unsigned int                 : 8;
    unsigned int sensedata4      : 8;
} avr32_keypad_mkpsense2_t;



typedef struct avr32_keypad_mkpsense3_t {
    unsigned int scan            : 1;
    unsigned int                 : 7;
    unsigned int sensedata7      : 8;
    unsigned int                 : 8;
    unsigned int sensedata6      : 8;
} avr32_keypad_mkpsense3_t;



typedef struct avr32_keypad_ier_t {
    unsigned int                 :27;
    unsigned int rint1           : 1;
    unsigned int rint0           : 1;
    unsigned int dmint           : 1;
    unsigned int dcint           : 1;
    unsigned int mint            : 1;
} avr32_keypad_ier_t;



typedef struct avr32_keypad_idr_t {
    unsigned int                 :27;
    unsigned int rint1           : 1;
    unsigned int rint0           : 1;
    unsigned int dmint           : 1;
    unsigned int dcint           : 1;
    unsigned int mint            : 1;
} avr32_keypad_idr_t;



typedef struct avr32_keypad_imr_t {
    unsigned int                 :27;
    unsigned int rint1           : 1;
    unsigned int rint0           : 1;
    unsigned int dmint           : 1;
    unsigned int dcint           : 1;
    unsigned int mint            : 1;
} avr32_keypad_imr_t;



typedef struct avr32_keypad_isr_t {
    unsigned int                 :27;
    unsigned int rint1           : 1;
    unsigned int rint0           : 1;
    unsigned int dmint           : 1;
    unsigned int dcint           : 1;
    unsigned int mint            : 1;
} avr32_keypad_isr_t;



typedef struct avr32_keypad_icr_t {
    unsigned int                 :27;
    unsigned int rint1           : 1;
    unsigned int rint0           : 1;
    unsigned int dmint           : 1;
    unsigned int dcint           : 1;
    unsigned int mint            : 1;
} avr32_keypad_icr_t;



typedef struct avr32_keypad_parameter_t {
    unsigned int                 :16;
    unsigned int row             : 8;
    unsigned int column          : 8;
} avr32_keypad_parameter_t;



typedef struct avr32_keypad_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_keypad_version_t;



typedef struct avr32_keypad_t {
  union {
          unsigned long                  control   ;//0x0000
          avr32_keypad_control_t         CONTROL   ;
  };
  union {
          unsigned long                  config    ;//0x0004
          avr32_keypad_config_t          CONFIG    ;
  };
  union {
          unsigned long                  sdr       ;//0x0008
          avr32_keypad_sdr_t             SDR       ;
  };
  union {
          unsigned long                  debi      ;//0x000c
          avr32_keypad_debi_t            DEBI      ;
  };
  union {
    const unsigned long                  rot       ;//0x0010
    const avr32_keypad_rot_t             ROT       ;
  };
  union {
          unsigned long                  mandrive  ;//0x0014
          avr32_keypad_mandrive_t        MANDRIVE  ;
  };
  union {
    const unsigned long                  dsense    ;//0x0018
    const avr32_keypad_dsense_t          DSENSE    ;
  };
  union {
    const unsigned long                  msense    ;//0x001c
    const avr32_keypad_msense_t          MSENSE    ;
  };
  union {
    const unsigned long                  asense    ;//0x0020
    const avr32_keypad_asense_t          ASENSE    ;
  };
  union {
    const unsigned long                  mkpsense0 ;//0x0024
    const avr32_keypad_mkpsense0_t       MKPSENSE0 ;
  };
  union {
    const unsigned long                  mkpsense1 ;//0x0028
    const avr32_keypad_mkpsense1_t       MKPSENSE1 ;
  };
  union {
    const unsigned long                  mkpsense2 ;//0x002c
    const avr32_keypad_mkpsense2_t       MKPSENSE2 ;
  };
  union {
    const unsigned long                  mkpsense3 ;//0x0030
    const avr32_keypad_mkpsense3_t       MKPSENSE3 ;
  };
  union {
          unsigned long                  ier       ;//0x0034
          avr32_keypad_ier_t             IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0038
          avr32_keypad_idr_t             IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x003c
    const avr32_keypad_imr_t             IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x0040
    const avr32_keypad_isr_t             ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0044
          avr32_keypad_icr_t             ICR       ;
  };
  union {
    const unsigned long                  parameter ;//0x0048
    const avr32_keypad_parameter_t       PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x004c
    const avr32_keypad_version_t         VERSION   ;
  };
} avr32_keypad_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_KEYPAD_100_H_INCLUDED*/
#endif


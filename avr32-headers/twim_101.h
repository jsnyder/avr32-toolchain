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
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_TWIM_101_H_INCLUDED
#define AVR32_TWIM_101_H_INCLUDED

#define AVR32_TWIM_H_VERSION 101

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_TWIM_<register>
 - Bitfield mask:   AVR32_TWIM_<register>_<bitfield>
 - Bitfield offset: AVR32_TWIM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_TWIM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_TWIM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_TWIM_<bitfield>
 - Bitfield offset: AVR32_TWIM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_TWIM_<bitfield>_SIZE
 - Bitfield values: AVR32_TWIM_<bitfield>_<value name>
 - Bitfield values: AVR32_TWIM_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_TWIM_ACKLAST                                          25
#define AVR32_TWIM_ACKLAST_MASK                             0x02000000
#define AVR32_TWIM_ACKLAST_OFFSET                                   25
#define AVR32_TWIM_ACKLAST_SIZE                                      1
#define AVR32_TWIM_ANAK                                              8
#define AVR32_TWIM_ANAK_MASK                                0x00000100
#define AVR32_TWIM_ANAK_OFFSET                                       8
#define AVR32_TWIM_ANAK_SIZE                                         1
#define AVR32_TWIM_ARBLST                                           10
#define AVR32_TWIM_ARBLST_MASK                              0x00000400
#define AVR32_TWIM_ARBLST_OFFSET                                    10
#define AVR32_TWIM_ARBLST_SIZE                                       1
#define AVR32_TWIM_CCOMP                                             3
#define AVR32_TWIM_CCOMP_MASK                               0x00000008
#define AVR32_TWIM_CCOMP_OFFSET                                      3
#define AVR32_TWIM_CCOMP_SIZE                                        1
#define AVR32_TWIM_CMDR                                     0x0000000c
#define AVR32_TWIM_CMDR_ACKLAST                                     25
#define AVR32_TWIM_CMDR_ACKLAST_MASK                        0x02000000
#define AVR32_TWIM_CMDR_ACKLAST_OFFSET                              25
#define AVR32_TWIM_CMDR_ACKLAST_SIZE                                 1
#define AVR32_TWIM_CMDR_MASK                                0x03ffffff
#define AVR32_TWIM_CMDR_NBYTES                                      16
#define AVR32_TWIM_CMDR_NBYTES_MASK                         0x00ff0000
#define AVR32_TWIM_CMDR_NBYTES_OFFSET                               16
#define AVR32_TWIM_CMDR_NBYTES_SIZE                                  8
#define AVR32_TWIM_CMDR_PECEN                                       24
#define AVR32_TWIM_CMDR_PECEN_MASK                          0x01000000
#define AVR32_TWIM_CMDR_PECEN_OFFSET                                24
#define AVR32_TWIM_CMDR_PECEN_SIZE                                   1
#define AVR32_TWIM_CMDR_READ                                         0
#define AVR32_TWIM_CMDR_READ_MASK                           0x00000001
#define AVR32_TWIM_CMDR_READ_OFFSET                                  0
#define AVR32_TWIM_CMDR_READ_SIZE                                    1
#define AVR32_TWIM_CMDR_REPSAME                                     12
#define AVR32_TWIM_CMDR_REPSAME_MASK                        0x00001000
#define AVR32_TWIM_CMDR_REPSAME_OFFSET                              12
#define AVR32_TWIM_CMDR_REPSAME_SIZE                                 1
#define AVR32_TWIM_CMDR_RESETVALUE                          0x00000000
#define AVR32_TWIM_CMDR_SADR                                         1
#define AVR32_TWIM_CMDR_SADR_MASK                           0x000007fe
#define AVR32_TWIM_CMDR_SADR_OFFSET                                  1
#define AVR32_TWIM_CMDR_SADR_SIZE                                   10
#define AVR32_TWIM_CMDR_START                                       13
#define AVR32_TWIM_CMDR_START_MASK                          0x00002000
#define AVR32_TWIM_CMDR_START_OFFSET                                13
#define AVR32_TWIM_CMDR_START_SIZE                                   1
#define AVR32_TWIM_CMDR_STOP                                        14
#define AVR32_TWIM_CMDR_STOP_MASK                           0x00004000
#define AVR32_TWIM_CMDR_STOP_OFFSET                                 14
#define AVR32_TWIM_CMDR_STOP_SIZE                                    1
#define AVR32_TWIM_CMDR_TENBIT                                      11
#define AVR32_TWIM_CMDR_TENBIT_MASK                         0x00000800
#define AVR32_TWIM_CMDR_TENBIT_OFFSET                               11
#define AVR32_TWIM_CMDR_TENBIT_SIZE                                  1
#define AVR32_TWIM_CMDR_VALID                                       15
#define AVR32_TWIM_CMDR_VALID_MASK                          0x00008000
#define AVR32_TWIM_CMDR_VALID_OFFSET                                15
#define AVR32_TWIM_CMDR_VALID_SIZE                                   1
#define AVR32_TWIM_CR                                       0x00000000
#define AVR32_TWIM_CRDY                                              2
#define AVR32_TWIM_CRDY_MASK                                0x00000004
#define AVR32_TWIM_CRDY_OFFSET                                       2
#define AVR32_TWIM_CRDY_SIZE                                         1
#define AVR32_TWIM_CR_MASK                                  0x000001b3
#define AVR32_TWIM_CR_MDIS                                           1
#define AVR32_TWIM_CR_MDIS_MASK                             0x00000002
#define AVR32_TWIM_CR_MDIS_OFFSET                                    1
#define AVR32_TWIM_CR_MDIS_SIZE                                      1
#define AVR32_TWIM_CR_MEN                                            0
#define AVR32_TWIM_CR_MEN_MASK                              0x00000001
#define AVR32_TWIM_CR_MEN_OFFSET                                     0
#define AVR32_TWIM_CR_MEN_SIZE                                       1
#define AVR32_TWIM_CR_RESETVALUE                            0x00000000
#define AVR32_TWIM_CR_SMDIS                                          5
#define AVR32_TWIM_CR_SMDIS_MASK                            0x00000020
#define AVR32_TWIM_CR_SMDIS_OFFSET                                   5
#define AVR32_TWIM_CR_SMDIS_SIZE                                     1
#define AVR32_TWIM_CR_SMEN                                           4
#define AVR32_TWIM_CR_SMEN_MASK                             0x00000010
#define AVR32_TWIM_CR_SMEN_OFFSET                                    4
#define AVR32_TWIM_CR_SMEN_SIZE                                      1
#define AVR32_TWIM_CR_STOP                                           8
#define AVR32_TWIM_CR_STOP_MASK                             0x00000100
#define AVR32_TWIM_CR_STOP_OFFSET                                    8
#define AVR32_TWIM_CR_STOP_SIZE                                      1
#define AVR32_TWIM_CR_SWRST                                          7
#define AVR32_TWIM_CR_SWRST_MASK                            0x00000080
#define AVR32_TWIM_CR_SWRST_OFFSET                                   7
#define AVR32_TWIM_CR_SWRST_SIZE                                     1
#define AVR32_TWIM_CWGR                                     0x00000004
#define AVR32_TWIM_CWGR_DATA                                        24
#define AVR32_TWIM_CWGR_DATA_MASK                           0x0f000000
#define AVR32_TWIM_CWGR_DATA_OFFSET                                 24
#define AVR32_TWIM_CWGR_DATA_SIZE                                    4
#define AVR32_TWIM_CWGR_EXP                                         28
#define AVR32_TWIM_CWGR_EXP_MASK                            0x70000000
#define AVR32_TWIM_CWGR_EXP_OFFSET                                  28
#define AVR32_TWIM_CWGR_EXP_SIZE                                     3
#define AVR32_TWIM_CWGR_HIGH                                         8
#define AVR32_TWIM_CWGR_HIGH_MASK                           0x0000ff00
#define AVR32_TWIM_CWGR_HIGH_OFFSET                                  8
#define AVR32_TWIM_CWGR_HIGH_SIZE                                    8
#define AVR32_TWIM_CWGR_LOW                                          0
#define AVR32_TWIM_CWGR_LOW_MASK                            0x000000ff
#define AVR32_TWIM_CWGR_LOW_OFFSET                                   0
#define AVR32_TWIM_CWGR_LOW_SIZE                                     8
#define AVR32_TWIM_CWGR_MASK                                0x7fffffff
#define AVR32_TWIM_CWGR_RESETVALUE                          0x00000000
#define AVR32_TWIM_CWGR_STASTO                                      16
#define AVR32_TWIM_CWGR_STASTO_MASK                         0x00ff0000
#define AVR32_TWIM_CWGR_STASTO_OFFSET                               16
#define AVR32_TWIM_CWGR_STASTO_SIZE                                  8
#define AVR32_TWIM_DATA                                             24
#define AVR32_TWIM_DATA_MASK                                0x0f000000
#define AVR32_TWIM_DATA_OFFSET                                      24
#define AVR32_TWIM_DATA_SIZE                                         4
#define AVR32_TWIM_DNAK                                              9
#define AVR32_TWIM_DNAK_MASK                                0x00000200
#define AVR32_TWIM_DNAK_OFFSET                                       9
#define AVR32_TWIM_DNAK_SIZE                                         1
#define AVR32_TWIM_EXP                                              28
#define AVR32_TWIM_EXP_OFFSET                                       28
#define AVR32_TWIM_HIGH                                              8
#define AVR32_TWIM_HIGH_MASK                                0x0000ff00
#define AVR32_TWIM_HIGH_OFFSET                                       8
#define AVR32_TWIM_HIGH_SIZE                                         8
#define AVR32_TWIM_IDLE                                              4
#define AVR32_TWIM_IDLE_MASK                                0x00000010
#define AVR32_TWIM_IDLE_OFFSET                                       4
#define AVR32_TWIM_IDLE_SIZE                                         1
#define AVR32_TWIM_IDR                                      0x00000024
#define AVR32_TWIM_IDR_ANAK                                          8
#define AVR32_TWIM_IDR_ANAK_MASK                            0x00000100
#define AVR32_TWIM_IDR_ANAK_OFFSET                                   8
#define AVR32_TWIM_IDR_ANAK_SIZE                                     1
#define AVR32_TWIM_IDR_ARBLST                                       10
#define AVR32_TWIM_IDR_ARBLST_MASK                          0x00000400
#define AVR32_TWIM_IDR_ARBLST_OFFSET                                10
#define AVR32_TWIM_IDR_ARBLST_SIZE                                   1
#define AVR32_TWIM_IDR_CCOMP                                         3
#define AVR32_TWIM_IDR_CCOMP_MASK                           0x00000008
#define AVR32_TWIM_IDR_CCOMP_OFFSET                                  3
#define AVR32_TWIM_IDR_CCOMP_SIZE                                    1
#define AVR32_TWIM_IDR_CRDY                                          2
#define AVR32_TWIM_IDR_CRDY_MASK                            0x00000004
#define AVR32_TWIM_IDR_CRDY_OFFSET                                   2
#define AVR32_TWIM_IDR_CRDY_SIZE                                     1
#define AVR32_TWIM_IDR_DNAK                                          9
#define AVR32_TWIM_IDR_DNAK_MASK                            0x00000200
#define AVR32_TWIM_IDR_DNAK_OFFSET                                   9
#define AVR32_TWIM_IDR_DNAK_SIZE                                     1
#define AVR32_TWIM_IDR_IDLE                                          4
#define AVR32_TWIM_IDR_IDLE_MASK                            0x00000010
#define AVR32_TWIM_IDR_IDLE_OFFSET                                   4
#define AVR32_TWIM_IDR_IDLE_SIZE                                     1
#define AVR32_TWIM_IDR_MASK                                 0x00007f1f
#define AVR32_TWIM_IDR_PECERR                                       13
#define AVR32_TWIM_IDR_PECERR_MASK                          0x00002000
#define AVR32_TWIM_IDR_PECERR_OFFSET                                13
#define AVR32_TWIM_IDR_PECERR_SIZE                                   1
#define AVR32_TWIM_IDR_RESETVALUE                           0x00000000
#define AVR32_TWIM_IDR_RXRDY                                         0
#define AVR32_TWIM_IDR_RXRDY_MASK                           0x00000001
#define AVR32_TWIM_IDR_RXRDY_OFFSET                                  0
#define AVR32_TWIM_IDR_RXRDY_SIZE                                    1
#define AVR32_TWIM_IDR_SMBALERT                                     11
#define AVR32_TWIM_IDR_SMBALERT_MASK                        0x00000800
#define AVR32_TWIM_IDR_SMBALERT_OFFSET                              11
#define AVR32_TWIM_IDR_SMBALERT_SIZE                                 1
#define AVR32_TWIM_IDR_STOP                                         14
#define AVR32_TWIM_IDR_STOP_MASK                            0x00004000
#define AVR32_TWIM_IDR_STOP_OFFSET                                  14
#define AVR32_TWIM_IDR_STOP_SIZE                                     1
#define AVR32_TWIM_IDR_TOUT                                         12
#define AVR32_TWIM_IDR_TOUT_MASK                            0x00001000
#define AVR32_TWIM_IDR_TOUT_OFFSET                                  12
#define AVR32_TWIM_IDR_TOUT_SIZE                                     1
#define AVR32_TWIM_IDR_TXRDY                                         1
#define AVR32_TWIM_IDR_TXRDY_MASK                           0x00000002
#define AVR32_TWIM_IDR_TXRDY_OFFSET                                  1
#define AVR32_TWIM_IDR_TXRDY_SIZE                                    1
#define AVR32_TWIM_IER                                      0x00000020
#define AVR32_TWIM_IER_ANAK                                          8
#define AVR32_TWIM_IER_ANAK_MASK                            0x00000100
#define AVR32_TWIM_IER_ANAK_OFFSET                                   8
#define AVR32_TWIM_IER_ANAK_SIZE                                     1
#define AVR32_TWIM_IER_ARBLST                                       10
#define AVR32_TWIM_IER_ARBLST_MASK                          0x00000400
#define AVR32_TWIM_IER_ARBLST_OFFSET                                10
#define AVR32_TWIM_IER_ARBLST_SIZE                                   1
#define AVR32_TWIM_IER_CCOMP                                         3
#define AVR32_TWIM_IER_CCOMP_MASK                           0x00000008
#define AVR32_TWIM_IER_CCOMP_OFFSET                                  3
#define AVR32_TWIM_IER_CCOMP_SIZE                                    1
#define AVR32_TWIM_IER_CRDY                                          2
#define AVR32_TWIM_IER_CRDY_MASK                            0x00000004
#define AVR32_TWIM_IER_CRDY_OFFSET                                   2
#define AVR32_TWIM_IER_CRDY_SIZE                                     1
#define AVR32_TWIM_IER_DNAK                                          9
#define AVR32_TWIM_IER_DNAK_MASK                            0x00000200
#define AVR32_TWIM_IER_DNAK_OFFSET                                   9
#define AVR32_TWIM_IER_DNAK_SIZE                                     1
#define AVR32_TWIM_IER_IDLE                                          4
#define AVR32_TWIM_IER_IDLE_MASK                            0x00000010
#define AVR32_TWIM_IER_IDLE_OFFSET                                   4
#define AVR32_TWIM_IER_IDLE_SIZE                                     1
#define AVR32_TWIM_IER_MASK                                 0x00007f1f
#define AVR32_TWIM_IER_PECERR                                       13
#define AVR32_TWIM_IER_PECERR_MASK                          0x00002000
#define AVR32_TWIM_IER_PECERR_OFFSET                                13
#define AVR32_TWIM_IER_PECERR_SIZE                                   1
#define AVR32_TWIM_IER_RESETVALUE                           0x00000000
#define AVR32_TWIM_IER_RXRDY                                         0
#define AVR32_TWIM_IER_RXRDY_MASK                           0x00000001
#define AVR32_TWIM_IER_RXRDY_OFFSET                                  0
#define AVR32_TWIM_IER_RXRDY_SIZE                                    1
#define AVR32_TWIM_IER_SMBALERT                                     11
#define AVR32_TWIM_IER_SMBALERT_MASK                        0x00000800
#define AVR32_TWIM_IER_SMBALERT_OFFSET                              11
#define AVR32_TWIM_IER_SMBALERT_SIZE                                 1
#define AVR32_TWIM_IER_STOP                                         14
#define AVR32_TWIM_IER_STOP_MASK                            0x00004000
#define AVR32_TWIM_IER_STOP_OFFSET                                  14
#define AVR32_TWIM_IER_STOP_SIZE                                     1
#define AVR32_TWIM_IER_TOUT                                         12
#define AVR32_TWIM_IER_TOUT_MASK                            0x00001000
#define AVR32_TWIM_IER_TOUT_OFFSET                                  12
#define AVR32_TWIM_IER_TOUT_SIZE                                     1
#define AVR32_TWIM_IER_TXRDY                                         1
#define AVR32_TWIM_IER_TXRDY_MASK                           0x00000002
#define AVR32_TWIM_IER_TXRDY_OFFSET                                  1
#define AVR32_TWIM_IER_TXRDY_SIZE                                    1
#define AVR32_TWIM_IMR                                      0x00000028
#define AVR32_TWIM_IMR_ANAK                                          8
#define AVR32_TWIM_IMR_ANAK_MASK                            0x00000100
#define AVR32_TWIM_IMR_ANAK_OFFSET                                   8
#define AVR32_TWIM_IMR_ANAK_SIZE                                     1
#define AVR32_TWIM_IMR_ARBLST                                       10
#define AVR32_TWIM_IMR_ARBLST_MASK                          0x00000400
#define AVR32_TWIM_IMR_ARBLST_OFFSET                                10
#define AVR32_TWIM_IMR_ARBLST_SIZE                                   1
#define AVR32_TWIM_IMR_CCOMP                                         3
#define AVR32_TWIM_IMR_CCOMP_MASK                           0x00000008
#define AVR32_TWIM_IMR_CCOMP_OFFSET                                  3
#define AVR32_TWIM_IMR_CCOMP_SIZE                                    1
#define AVR32_TWIM_IMR_CRDY                                          2
#define AVR32_TWIM_IMR_CRDY_MASK                            0x00000004
#define AVR32_TWIM_IMR_CRDY_OFFSET                                   2
#define AVR32_TWIM_IMR_CRDY_SIZE                                     1
#define AVR32_TWIM_IMR_DNAK                                          9
#define AVR32_TWIM_IMR_DNAK_MASK                            0x00000200
#define AVR32_TWIM_IMR_DNAK_OFFSET                                   9
#define AVR32_TWIM_IMR_DNAK_SIZE                                     1
#define AVR32_TWIM_IMR_IDLE                                          4
#define AVR32_TWIM_IMR_IDLE_MASK                            0x00000010
#define AVR32_TWIM_IMR_IDLE_OFFSET                                   4
#define AVR32_TWIM_IMR_IDLE_SIZE                                     1
#define AVR32_TWIM_IMR_MASK                                 0x00007f1f
#define AVR32_TWIM_IMR_PECERR                                       13
#define AVR32_TWIM_IMR_PECERR_MASK                          0x00002000
#define AVR32_TWIM_IMR_PECERR_OFFSET                                13
#define AVR32_TWIM_IMR_PECERR_SIZE                                   1
#define AVR32_TWIM_IMR_RESETVALUE                           0x00000000
#define AVR32_TWIM_IMR_RXRDY                                         0
#define AVR32_TWIM_IMR_RXRDY_MASK                           0x00000001
#define AVR32_TWIM_IMR_RXRDY_OFFSET                                  0
#define AVR32_TWIM_IMR_RXRDY_SIZE                                    1
#define AVR32_TWIM_IMR_SMBALERT                                     11
#define AVR32_TWIM_IMR_SMBALERT_MASK                        0x00000800
#define AVR32_TWIM_IMR_SMBALERT_OFFSET                              11
#define AVR32_TWIM_IMR_SMBALERT_SIZE                                 1
#define AVR32_TWIM_IMR_STOP                                         14
#define AVR32_TWIM_IMR_STOP_MASK                            0x00004000
#define AVR32_TWIM_IMR_STOP_OFFSET                                  14
#define AVR32_TWIM_IMR_STOP_SIZE                                     1
#define AVR32_TWIM_IMR_TOUT                                         12
#define AVR32_TWIM_IMR_TOUT_MASK                            0x00001000
#define AVR32_TWIM_IMR_TOUT_OFFSET                                  12
#define AVR32_TWIM_IMR_TOUT_SIZE                                     1
#define AVR32_TWIM_IMR_TXRDY                                         1
#define AVR32_TWIM_IMR_TXRDY_MASK                           0x00000002
#define AVR32_TWIM_IMR_TXRDY_OFFSET                                  1
#define AVR32_TWIM_IMR_TXRDY_SIZE                                    1
#define AVR32_TWIM_LOW                                               0
#define AVR32_TWIM_LOW_MASK                                 0x000000ff
#define AVR32_TWIM_LOW_OFFSET                                        0
#define AVR32_TWIM_LOW_SIZE                                          8
#define AVR32_TWIM_MDIS                                              1
#define AVR32_TWIM_MDIS_MASK                                0x00000002
#define AVR32_TWIM_MDIS_OFFSET                                       1
#define AVR32_TWIM_MDIS_SIZE                                         1
#define AVR32_TWIM_MEN                                               0
#define AVR32_TWIM_MENB                                             16
#define AVR32_TWIM_MENB_MASK                                0x00010000
#define AVR32_TWIM_MENB_OFFSET                                      16
#define AVR32_TWIM_MENB_SIZE                                         1
#define AVR32_TWIM_MEN_MASK                                 0x00000001
#define AVR32_TWIM_MEN_OFFSET                                        0
#define AVR32_TWIM_MEN_SIZE                                          1
#define AVR32_TWIM_NBYTES                                           16
#define AVR32_TWIM_NBYTES_MASK                              0x00ff0000
#define AVR32_TWIM_NBYTES_OFFSET                                    16
#define AVR32_TWIM_NBYTES_SIZE                                       8
#define AVR32_TWIM_NCMDR                                    0x00000010
#define AVR32_TWIM_NCMDR_ACKLAST                                    25
#define AVR32_TWIM_NCMDR_ACKLAST_MASK                       0x02000000
#define AVR32_TWIM_NCMDR_ACKLAST_OFFSET                             25
#define AVR32_TWIM_NCMDR_ACKLAST_SIZE                                1
#define AVR32_TWIM_NCMDR_MASK                               0x03ffffff
#define AVR32_TWIM_NCMDR_NBYTES                                     16
#define AVR32_TWIM_NCMDR_NBYTES_MASK                        0x00ff0000
#define AVR32_TWIM_NCMDR_NBYTES_OFFSET                              16
#define AVR32_TWIM_NCMDR_NBYTES_SIZE                                 8
#define AVR32_TWIM_NCMDR_PECEN                                      24
#define AVR32_TWIM_NCMDR_PECEN_MASK                         0x01000000
#define AVR32_TWIM_NCMDR_PECEN_OFFSET                               24
#define AVR32_TWIM_NCMDR_PECEN_SIZE                                  1
#define AVR32_TWIM_NCMDR_READ                                        0
#define AVR32_TWIM_NCMDR_READ_MASK                          0x00000001
#define AVR32_TWIM_NCMDR_READ_OFFSET                                 0
#define AVR32_TWIM_NCMDR_READ_SIZE                                   1
#define AVR32_TWIM_NCMDR_REPSAME                                    12
#define AVR32_TWIM_NCMDR_REPSAME_MASK                       0x00001000
#define AVR32_TWIM_NCMDR_REPSAME_OFFSET                             12
#define AVR32_TWIM_NCMDR_REPSAME_SIZE                                1
#define AVR32_TWIM_NCMDR_RESETVALUE                         0x00000000
#define AVR32_TWIM_NCMDR_SADR                                        1
#define AVR32_TWIM_NCMDR_SADR_MASK                          0x000007fe
#define AVR32_TWIM_NCMDR_SADR_OFFSET                                 1
#define AVR32_TWIM_NCMDR_SADR_SIZE                                  10
#define AVR32_TWIM_NCMDR_START                                      13
#define AVR32_TWIM_NCMDR_START_MASK                         0x00002000
#define AVR32_TWIM_NCMDR_START_OFFSET                               13
#define AVR32_TWIM_NCMDR_START_SIZE                                  1
#define AVR32_TWIM_NCMDR_STOP                                       14
#define AVR32_TWIM_NCMDR_STOP_MASK                          0x00004000
#define AVR32_TWIM_NCMDR_STOP_OFFSET                                14
#define AVR32_TWIM_NCMDR_STOP_SIZE                                   1
#define AVR32_TWIM_NCMDR_TENBIT                                     11
#define AVR32_TWIM_NCMDR_TENBIT_MASK                        0x00000800
#define AVR32_TWIM_NCMDR_TENBIT_OFFSET                              11
#define AVR32_TWIM_NCMDR_TENBIT_SIZE                                 1
#define AVR32_TWIM_NCMDR_VALID                                      15
#define AVR32_TWIM_NCMDR_VALID_MASK                         0x00008000
#define AVR32_TWIM_NCMDR_VALID_OFFSET                               15
#define AVR32_TWIM_NCMDR_VALID_SIZE                                  1
#define AVR32_TWIM_PECEN                                            24
#define AVR32_TWIM_PECEN_MASK                               0x01000000
#define AVR32_TWIM_PECEN_OFFSET                                     24
#define AVR32_TWIM_PECEN_SIZE                                        1
#define AVR32_TWIM_PECERR                                           13
#define AVR32_TWIM_PECERR_MASK                              0x00002000
#define AVR32_TWIM_PECERR_OFFSET                                    13
#define AVR32_TWIM_PECERR_SIZE                                       1
#define AVR32_TWIM_PR                                       0x00000030
#define AVR32_TWIM_PR_MASK                                  0x00000000
#define AVR32_TWIM_PR_RESETVALUE                            0x00000000
#define AVR32_TWIM_READ                                              0
#define AVR32_TWIM_READ_MASK                                0x00000001
#define AVR32_TWIM_READ_OFFSET                                       0
#define AVR32_TWIM_READ_SIZE                                         1
#define AVR32_TWIM_REPSAME                                          12
#define AVR32_TWIM_REPSAME_MASK                             0x00001000
#define AVR32_TWIM_REPSAME_OFFSET                                   12
#define AVR32_TWIM_REPSAME_SIZE                                      1
#define AVR32_TWIM_RHR                                      0x00000014
#define AVR32_TWIM_RHR_MASK                                 0x000000ff
#define AVR32_TWIM_RHR_RESETVALUE                           0x00000000
#define AVR32_TWIM_RHR_RXDATA                                        0
#define AVR32_TWIM_RHR_RXDATA_MASK                          0x000000ff
#define AVR32_TWIM_RHR_RXDATA_OFFSET                                 0
#define AVR32_TWIM_RHR_RXDATA_SIZE                                   8
#define AVR32_TWIM_RXDATA                                            0
#define AVR32_TWIM_RXDATA_MASK                              0x000000ff
#define AVR32_TWIM_RXDATA_OFFSET                                     0
#define AVR32_TWIM_RXDATA_SIZE                                       8
#define AVR32_TWIM_RXRDY                                             0
#define AVR32_TWIM_RXRDY_MASK                               0x00000001
#define AVR32_TWIM_RXRDY_OFFSET                                      0
#define AVR32_TWIM_RXRDY_SIZE                                        1
#define AVR32_TWIM_SADR                                              1
#define AVR32_TWIM_SADR_MASK                                0x000007fe
#define AVR32_TWIM_SADR_OFFSET                                       1
#define AVR32_TWIM_SADR_SIZE                                        10
#define AVR32_TWIM_SCR                                      0x0000002c
#define AVR32_TWIM_SCR_ANAK                                          8
#define AVR32_TWIM_SCR_ANAK_MASK                            0x00000100
#define AVR32_TWIM_SCR_ANAK_OFFSET                                   8
#define AVR32_TWIM_SCR_ANAK_SIZE                                     1
#define AVR32_TWIM_SCR_ARBLST                                       10
#define AVR32_TWIM_SCR_ARBLST_MASK                          0x00000400
#define AVR32_TWIM_SCR_ARBLST_OFFSET                                10
#define AVR32_TWIM_SCR_ARBLST_SIZE                                   1
#define AVR32_TWIM_SCR_CCOMP                                         3
#define AVR32_TWIM_SCR_CCOMP_MASK                           0x00000008
#define AVR32_TWIM_SCR_CCOMP_OFFSET                                  3
#define AVR32_TWIM_SCR_CCOMP_SIZE                                    1
#define AVR32_TWIM_SCR_DNAK                                          9
#define AVR32_TWIM_SCR_DNAK_MASK                            0x00000200
#define AVR32_TWIM_SCR_DNAK_OFFSET                                   9
#define AVR32_TWIM_SCR_DNAK_SIZE                                     1
#define AVR32_TWIM_SCR_MASK                                 0x00007f08
#define AVR32_TWIM_SCR_PECERR                                       13
#define AVR32_TWIM_SCR_PECERR_MASK                          0x00002000
#define AVR32_TWIM_SCR_PECERR_OFFSET                                13
#define AVR32_TWIM_SCR_PECERR_SIZE                                   1
#define AVR32_TWIM_SCR_RESETVALUE                           0x00000000
#define AVR32_TWIM_SCR_SMBALERT                                     11
#define AVR32_TWIM_SCR_SMBALERT_MASK                        0x00000800
#define AVR32_TWIM_SCR_SMBALERT_OFFSET                              11
#define AVR32_TWIM_SCR_SMBALERT_SIZE                                 1
#define AVR32_TWIM_SCR_STOP                                         14
#define AVR32_TWIM_SCR_STOP_MASK                            0x00004000
#define AVR32_TWIM_SCR_STOP_OFFSET                                  14
#define AVR32_TWIM_SCR_STOP_SIZE                                     1
#define AVR32_TWIM_SCR_TOUT                                         12
#define AVR32_TWIM_SCR_TOUT_MASK                            0x00001000
#define AVR32_TWIM_SCR_TOUT_OFFSET                                  12
#define AVR32_TWIM_SCR_TOUT_SIZE                                     1
#define AVR32_TWIM_SMBALERT                                         11
#define AVR32_TWIM_SMBALERT_MASK                            0x00000800
#define AVR32_TWIM_SMBALERT_OFFSET                                  11
#define AVR32_TWIM_SMBALERT_SIZE                                     1
#define AVR32_TWIM_SMBTR                                    0x00000008
#define AVR32_TWIM_SMBTR_EXP                                        28
#define AVR32_TWIM_SMBTR_EXP_MASK                           0xf0000000
#define AVR32_TWIM_SMBTR_EXP_OFFSET                                 28
#define AVR32_TWIM_SMBTR_EXP_SIZE                                    4
#define AVR32_TWIM_SMBTR_MASK                               0xf0ffffff
#define AVR32_TWIM_SMBTR_RESETVALUE                         0x00000000
#define AVR32_TWIM_SMBTR_THMAX                                      16
#define AVR32_TWIM_SMBTR_THMAX_MASK                         0x00ff0000
#define AVR32_TWIM_SMBTR_THMAX_OFFSET                               16
#define AVR32_TWIM_SMBTR_THMAX_SIZE                                  8
#define AVR32_TWIM_SMBTR_TLOWM                                       8
#define AVR32_TWIM_SMBTR_TLOWM_MASK                         0x0000ff00
#define AVR32_TWIM_SMBTR_TLOWM_OFFSET                                8
#define AVR32_TWIM_SMBTR_TLOWM_SIZE                                  8
#define AVR32_TWIM_SMBTR_TLOWS                                       0
#define AVR32_TWIM_SMBTR_TLOWS_MASK                         0x000000ff
#define AVR32_TWIM_SMBTR_TLOWS_OFFSET                                0
#define AVR32_TWIM_SMBTR_TLOWS_SIZE                                  8
#define AVR32_TWIM_SMDIS                                             5
#define AVR32_TWIM_SMDIS_MASK                               0x00000020
#define AVR32_TWIM_SMDIS_OFFSET                                      5
#define AVR32_TWIM_SMDIS_SIZE                                        1
#define AVR32_TWIM_SMEN                                              4
#define AVR32_TWIM_SMEN_MASK                                0x00000010
#define AVR32_TWIM_SMEN_OFFSET                                       4
#define AVR32_TWIM_SMEN_SIZE                                         1
#define AVR32_TWIM_SR                                       0x0000001c
#define AVR32_TWIM_SR_ANAK                                           8
#define AVR32_TWIM_SR_ANAK_MASK                             0x00000100
#define AVR32_TWIM_SR_ANAK_OFFSET                                    8
#define AVR32_TWIM_SR_ANAK_SIZE                                      1
#define AVR32_TWIM_SR_ARBLST                                        10
#define AVR32_TWIM_SR_ARBLST_MASK                           0x00000400
#define AVR32_TWIM_SR_ARBLST_OFFSET                                 10
#define AVR32_TWIM_SR_ARBLST_SIZE                                    1
#define AVR32_TWIM_SR_CCOMP                                          3
#define AVR32_TWIM_SR_CCOMP_MASK                            0x00000008
#define AVR32_TWIM_SR_CCOMP_OFFSET                                   3
#define AVR32_TWIM_SR_CCOMP_SIZE                                     1
#define AVR32_TWIM_SR_CRDY                                           2
#define AVR32_TWIM_SR_CRDY_MASK                             0x00000004
#define AVR32_TWIM_SR_CRDY_OFFSET                                    2
#define AVR32_TWIM_SR_CRDY_SIZE                                      1
#define AVR32_TWIM_SR_DNAK                                           9
#define AVR32_TWIM_SR_DNAK_MASK                             0x00000200
#define AVR32_TWIM_SR_DNAK_OFFSET                                    9
#define AVR32_TWIM_SR_DNAK_SIZE                                      1
#define AVR32_TWIM_SR_IDLE                                           4
#define AVR32_TWIM_SR_IDLE_MASK                             0x00000010
#define AVR32_TWIM_SR_IDLE_OFFSET                                    4
#define AVR32_TWIM_SR_IDLE_SIZE                                      1
#define AVR32_TWIM_SR_MASK                                  0x00017f1f
#define AVR32_TWIM_SR_MENB                                          16
#define AVR32_TWIM_SR_MENB_MASK                             0x00010000
#define AVR32_TWIM_SR_MENB_OFFSET                                   16
#define AVR32_TWIM_SR_MENB_SIZE                                      1
#define AVR32_TWIM_SR_PECERR                                        13
#define AVR32_TWIM_SR_PECERR_MASK                           0x00002000
#define AVR32_TWIM_SR_PECERR_OFFSET                                 13
#define AVR32_TWIM_SR_PECERR_SIZE                                    1
#define AVR32_TWIM_SR_RESETVALUE                            0x00000000
#define AVR32_TWIM_SR_RXRDY                                          0
#define AVR32_TWIM_SR_RXRDY_MASK                            0x00000001
#define AVR32_TWIM_SR_RXRDY_OFFSET                                   0
#define AVR32_TWIM_SR_RXRDY_SIZE                                     1
#define AVR32_TWIM_SR_SMBALERT                                      11
#define AVR32_TWIM_SR_SMBALERT_MASK                         0x00000800
#define AVR32_TWIM_SR_SMBALERT_OFFSET                               11
#define AVR32_TWIM_SR_SMBALERT_SIZE                                  1
#define AVR32_TWIM_SR_STOP                                          14
#define AVR32_TWIM_SR_STOP_MASK                             0x00004000
#define AVR32_TWIM_SR_STOP_OFFSET                                   14
#define AVR32_TWIM_SR_STOP_SIZE                                      1
#define AVR32_TWIM_SR_TOUT                                          12
#define AVR32_TWIM_SR_TOUT_MASK                             0x00001000
#define AVR32_TWIM_SR_TOUT_OFFSET                                   12
#define AVR32_TWIM_SR_TOUT_SIZE                                      1
#define AVR32_TWIM_SR_TXRDY                                          1
#define AVR32_TWIM_SR_TXRDY_MASK                            0x00000002
#define AVR32_TWIM_SR_TXRDY_OFFSET                                   1
#define AVR32_TWIM_SR_TXRDY_SIZE                                     1
#define AVR32_TWIM_START                                            13
#define AVR32_TWIM_START_MASK                               0x00002000
#define AVR32_TWIM_START_OFFSET                                     13
#define AVR32_TWIM_START_SIZE                                        1
#define AVR32_TWIM_STASTO                                           16
#define AVR32_TWIM_STASTO_MASK                              0x00ff0000
#define AVR32_TWIM_STASTO_OFFSET                                    16
#define AVR32_TWIM_STASTO_SIZE                                       8
#define AVR32_TWIM_STOP_SIZE                                         1
#define AVR32_TWIM_SWRST                                             7
#define AVR32_TWIM_SWRST_MASK                               0x00000080
#define AVR32_TWIM_SWRST_OFFSET                                      7
#define AVR32_TWIM_SWRST_SIZE                                        1
#define AVR32_TWIM_TENBIT                                           11
#define AVR32_TWIM_TENBIT_MASK                              0x00000800
#define AVR32_TWIM_TENBIT_OFFSET                                    11
#define AVR32_TWIM_TENBIT_SIZE                                       1
#define AVR32_TWIM_THMAX                                            16
#define AVR32_TWIM_THMAX_MASK                               0x00ff0000
#define AVR32_TWIM_THMAX_OFFSET                                     16
#define AVR32_TWIM_THMAX_SIZE                                        8
#define AVR32_TWIM_THR                                      0x00000018
#define AVR32_TWIM_THR_MASK                                 0x000000ff
#define AVR32_TWIM_THR_RESETVALUE                           0x00000000
#define AVR32_TWIM_THR_TXDATA                                        0
#define AVR32_TWIM_THR_TXDATA_MASK                          0x000000ff
#define AVR32_TWIM_THR_TXDATA_OFFSET                                 0
#define AVR32_TWIM_THR_TXDATA_SIZE                                   8
#define AVR32_TWIM_TLOWM                                             8
#define AVR32_TWIM_TLOWM_MASK                               0x0000ff00
#define AVR32_TWIM_TLOWM_OFFSET                                      8
#define AVR32_TWIM_TLOWM_SIZE                                        8
#define AVR32_TWIM_TLOWS                                             0
#define AVR32_TWIM_TLOWS_MASK                               0x000000ff
#define AVR32_TWIM_TLOWS_OFFSET                                      0
#define AVR32_TWIM_TLOWS_SIZE                                        8
#define AVR32_TWIM_TOUT                                             12
#define AVR32_TWIM_TOUT_MASK                                0x00001000
#define AVR32_TWIM_TOUT_OFFSET                                      12
#define AVR32_TWIM_TOUT_SIZE                                         1
#define AVR32_TWIM_TXDATA                                            0
#define AVR32_TWIM_TXDATA_MASK                              0x000000ff
#define AVR32_TWIM_TXDATA_OFFSET                                     0
#define AVR32_TWIM_TXDATA_SIZE                                       8
#define AVR32_TWIM_TXRDY                                             1
#define AVR32_TWIM_TXRDY_MASK                               0x00000002
#define AVR32_TWIM_TXRDY_OFFSET                                      1
#define AVR32_TWIM_TXRDY_SIZE                                        1
#define AVR32_TWIM_VALID                                            15
#define AVR32_TWIM_VALID_MASK                               0x00008000
#define AVR32_TWIM_VALID_OFFSET                                     15
#define AVR32_TWIM_VALID_SIZE                                        1
#define AVR32_TWIM_VARIANT                                          16
#define AVR32_TWIM_VARIANT_MASK                             0x000f0000
#define AVR32_TWIM_VARIANT_OFFSET                                   16
#define AVR32_TWIM_VARIANT_SIZE                                      4
#define AVR32_TWIM_VERSION                                           0
#define AVR32_TWIM_VERSION_MASK                             0x00000fff
#define AVR32_TWIM_VERSION_OFFSET                                    0
#define AVR32_TWIM_VERSION_SIZE                                     12
#define AVR32_TWIM_VR                                       0x00000034
#define AVR32_TWIM_VR_MASK                                  0x000f0fff
#define AVR32_TWIM_VR_RESETVALUE                            0x00000000
#define AVR32_TWIM_VR_VARIANT                                       16
#define AVR32_TWIM_VR_VARIANT_MASK                          0x000f0000
#define AVR32_TWIM_VR_VARIANT_OFFSET                                16
#define AVR32_TWIM_VR_VARIANT_SIZE                                   4
#define AVR32_TWIM_VR_VERSION                                        0
#define AVR32_TWIM_VR_VERSION_MASK                          0x00000fff
#define AVR32_TWIM_VR_VERSION_OFFSET                                 0
#define AVR32_TWIM_VR_VERSION_SIZE                                  12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_twim_cr_t {
    unsigned int                 :23;
    unsigned int stop            : 1;
    unsigned int swrst           : 1;
    unsigned int                 : 1;
    unsigned int smdis           : 1;
    unsigned int smen            : 1;
    unsigned int                 : 2;
    unsigned int mdis            : 1;
    unsigned int men             : 1;
} avr32_twim_cr_t;



typedef struct avr32_twim_cwgr_t {
    unsigned int                 : 1;
    unsigned int exp             : 3;
    unsigned int data            : 4;
    unsigned int stasto          : 8;
    unsigned int high            : 8;
    unsigned int low             : 8;
} avr32_twim_cwgr_t;



typedef struct avr32_twim_smbtr_t {
    unsigned int exp             : 4;
    unsigned int                 : 4;
    unsigned int thmax           : 8;
    unsigned int tlowm           : 8;
    unsigned int tlows           : 8;
} avr32_twim_smbtr_t;



typedef struct avr32_twim_cmdr_t {
    unsigned int                 : 6;
    unsigned int acklast         : 1;
    unsigned int pecen           : 1;
    unsigned int nbytes          : 8;
    unsigned int valid           : 1;
    unsigned int stop            : 1;
    unsigned int start           : 1;
    unsigned int repsame         : 1;
    unsigned int tenbit          : 1;
    unsigned int sadr            :10;
    unsigned int read            : 1;
} avr32_twim_cmdr_t;



typedef struct avr32_twim_ncmdr_t {
    unsigned int                 : 6;
    unsigned int acklast         : 1;
    unsigned int pecen           : 1;
    unsigned int nbytes          : 8;
    unsigned int valid           : 1;
    unsigned int stop            : 1;
    unsigned int start           : 1;
    unsigned int repsame         : 1;
    unsigned int tenbit          : 1;
    unsigned int sadr            :10;
    unsigned int read            : 1;
} avr32_twim_ncmdr_t;



typedef struct avr32_twim_rhr_t {
    unsigned int                 :24;
    unsigned int rxdata          : 8;
} avr32_twim_rhr_t;



typedef struct avr32_twim_thr_t {
    unsigned int                 :24;
    unsigned int txdata          : 8;
} avr32_twim_thr_t;



typedef struct avr32_twim_sr_t {
    unsigned int                 :15;
    unsigned int menb            : 1;
    unsigned int                 : 1;
    unsigned int stop            : 1;
    unsigned int pecerr          : 1;
    unsigned int tout            : 1;
    unsigned int smbalert        : 1;
    unsigned int arblst          : 1;
    unsigned int dnak            : 1;
    unsigned int anak            : 1;
    unsigned int                 : 3;
    unsigned int idle            : 1;
    unsigned int ccomp           : 1;
    unsigned int crdy            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twim_sr_t;



typedef struct avr32_twim_ier_t {
    unsigned int                 :17;
    unsigned int stop            : 1;
    unsigned int pecerr          : 1;
    unsigned int tout            : 1;
    unsigned int smbalert        : 1;
    unsigned int arblst          : 1;
    unsigned int dnak            : 1;
    unsigned int anak            : 1;
    unsigned int                 : 3;
    unsigned int idle            : 1;
    unsigned int ccomp           : 1;
    unsigned int crdy            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twim_ier_t;



typedef struct avr32_twim_idr_t {
    unsigned int                 :17;
    unsigned int stop            : 1;
    unsigned int pecerr          : 1;
    unsigned int tout            : 1;
    unsigned int smbalert        : 1;
    unsigned int arblst          : 1;
    unsigned int dnak            : 1;
    unsigned int anak            : 1;
    unsigned int                 : 3;
    unsigned int idle            : 1;
    unsigned int ccomp           : 1;
    unsigned int crdy            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twim_idr_t;



typedef struct avr32_twim_imr_t {
    unsigned int                 :17;
    unsigned int stop            : 1;
    unsigned int pecerr          : 1;
    unsigned int tout            : 1;
    unsigned int smbalert        : 1;
    unsigned int arblst          : 1;
    unsigned int dnak            : 1;
    unsigned int anak            : 1;
    unsigned int                 : 3;
    unsigned int idle            : 1;
    unsigned int ccomp           : 1;
    unsigned int crdy            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twim_imr_t;



typedef struct avr32_twim_scr_t {
    unsigned int                 :17;
    unsigned int stop            : 1;
    unsigned int pecerr          : 1;
    unsigned int tout            : 1;
    unsigned int smbalert        : 1;
    unsigned int arblst          : 1;
    unsigned int dnak            : 1;
    unsigned int anak            : 1;
    unsigned int                 : 4;
    unsigned int ccomp           : 1;
    unsigned int                 : 3;
} avr32_twim_scr_t;



typedef struct avr32_twim_vr_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_twim_vr_t;



typedef struct avr32_twim_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_twim_cr_t                CR        ;
  };
  union {
          unsigned long                  cwgr      ;//0x0004
          avr32_twim_cwgr_t              CWGR      ;
  };
  union {
          unsigned long                  smbtr     ;//0x0008
          avr32_twim_smbtr_t             SMBTR     ;
  };
  union {
          unsigned long                  cmdr      ;//0x000c
          avr32_twim_cmdr_t              CMDR      ;
  };
  union {
          unsigned long                  ncmdr     ;//0x0010
          avr32_twim_ncmdr_t             NCMDR     ;
  };
  union {
    const unsigned long                  rhr       ;//0x0014
    const avr32_twim_rhr_t               RHR       ;
  };
  union {
          unsigned long                  thr       ;//0x0018
          avr32_twim_thr_t               THR       ;
  };
  union {
    const unsigned long                  sr        ;//0x001c
    const avr32_twim_sr_t                SR        ;
  };
  union {
          unsigned long                  ier       ;//0x0020
          avr32_twim_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0024
          avr32_twim_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0028
    const avr32_twim_imr_t               IMR       ;
  };
  union {
          unsigned long                  scr       ;//0x002c
          avr32_twim_scr_t               SCR       ;
  };
    const unsigned long                  pr        ;//0x0030
  union {
    const unsigned long                  vr        ;//0x0034
    const avr32_twim_vr_t                VR        ;
  };
} avr32_twim_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_TWIM_101_H_INCLUDED*/
#endif


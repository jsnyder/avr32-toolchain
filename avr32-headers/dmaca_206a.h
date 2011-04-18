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
 * Model        : AP7000
 * Revision     : $Revision: 77887 $
 * Checkin Date : $Date: 2010-06-30 15:39:10 +0200 (Wed, 30 Jun 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_DMACA_206a_H_INCLUDED
#define AVR32_DMACA_206a_H_INCLUDED

#define AVR32_DMACA_H_VERSION 206a

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_DMACA_<register>
 - Bitfield mask:   AVR32_DMACA_<register>_<bitfield>
 - Bitfield offset: AVR32_DMACA_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_DMACA_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_DMACA_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_DMACA_<bitfield>
 - Bitfield offset: AVR32_DMACA_<bitfield>_OFFSET
 - Bitfield size:   AVR32_DMACA_<bitfield>_SIZE
 - Bitfield values: AVR32_DMACA_<bitfield>_<value name>
 - Bitfield values: AVR32_DMACA_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_DMACA_BLOCK                                             1
#define AVR32_DMACA_BLOCK_MASK                               0x00000002
#define AVR32_DMACA_BLOCK_OFFSET                                      1
#define AVR32_DMACA_BLOCK_SIZE                                        1
#define AVR32_DMACA_BLOCK_TS                                          0
#define AVR32_DMACA_BLOCK_TS_MASK                            0x00000fff
#define AVR32_DMACA_BLOCK_TS_OFFSET                                   0
#define AVR32_DMACA_BLOCK_TS_SIZE                                    12
#define AVR32_DMACA_CFG0H                                    0x00000044
#define AVR32_DMACA_CFG0H_DEST_PER                                   11
#define AVR32_DMACA_CFG0H_DEST_PER_MASK                      0x00007800
#define AVR32_DMACA_CFG0H_DEST_PER_OFFSET                            11
#define AVR32_DMACA_CFG0H_DEST_PER_SIZE                               4
#define AVR32_DMACA_CFG0H_DS_UPD_EN                                   5
#define AVR32_DMACA_CFG0H_DS_UPD_EN_MASK                     0x00000020
#define AVR32_DMACA_CFG0H_DS_UPD_EN_OFFSET                            5
#define AVR32_DMACA_CFG0H_DS_UPD_EN_SIZE                              1
#define AVR32_DMACA_CFG0H_FCMODE                                      0
#define AVR32_DMACA_CFG0H_FCMODE_MASK                        0x00000001
#define AVR32_DMACA_CFG0H_FCMODE_OFFSET                               0
#define AVR32_DMACA_CFG0H_FCMODE_SIZE                                 1
#define AVR32_DMACA_CFG0H_FIFO_MODE                                   1
#define AVR32_DMACA_CFG0H_FIFO_MODE_MASK                     0x00000002
#define AVR32_DMACA_CFG0H_FIFO_MODE_OFFSET                            1
#define AVR32_DMACA_CFG0H_FIFO_MODE_SIZE                              1
#define AVR32_DMACA_CFG0H_PROTCTL                                     2
#define AVR32_DMACA_CFG0H_PROTCTL_MASK                       0x0000001c
#define AVR32_DMACA_CFG0H_PROTCTL_OFFSET                              2
#define AVR32_DMACA_CFG0H_PROTCTL_SIZE                                3
#define AVR32_DMACA_CFG0H_SRC_PER                                     7
#define AVR32_DMACA_CFG0H_SRC_PER_MASK                       0x00000780
#define AVR32_DMACA_CFG0H_SRC_PER_OFFSET                              7
#define AVR32_DMACA_CFG0H_SRC_PER_SIZE                                4
#define AVR32_DMACA_CFG0H_SS_UPD_EN                                   6
#define AVR32_DMACA_CFG0H_SS_UPD_EN_MASK                     0x00000040
#define AVR32_DMACA_CFG0H_SS_UPD_EN_OFFSET                            6
#define AVR32_DMACA_CFG0H_SS_UPD_EN_SIZE                              1
#define AVR32_DMACA_CFG0L                                    0x00000040
#define AVR32_DMACA_CFG0L_CH_PRIOR                                    5
#define AVR32_DMACA_CFG0L_CH_PRIOR_MASK                      0x000000e0
#define AVR32_DMACA_CFG0L_CH_PRIOR_OFFSET                             5
#define AVR32_DMACA_CFG0L_CH_PRIOR_SIZE                               3
#define AVR32_DMACA_CFG0L_CH_SUSP                                     8
#define AVR32_DMACA_CFG0L_CH_SUSP_MASK                       0x00000100
#define AVR32_DMACA_CFG0L_CH_SUSP_OFFSET                              8
#define AVR32_DMACA_CFG0L_CH_SUSP_SIZE                                1
#define AVR32_DMACA_CFG0L_DS_HS_POL                                  18
#define AVR32_DMACA_CFG0L_DS_HS_POL_MASK                     0x00040000
#define AVR32_DMACA_CFG0L_DS_HS_POL_OFFSET                           18
#define AVR32_DMACA_CFG0L_DS_HS_POL_SIZE                              1
#define AVR32_DMACA_CFG0L_FIFO_EMPTY                                  9
#define AVR32_DMACA_CFG0L_FIFO_EMPTY_MASK                    0x00000200
#define AVR32_DMACA_CFG0L_FIFO_EMPTY_OFFSET                           9
#define AVR32_DMACA_CFG0L_FIFO_EMPTY_SIZE                             1
#define AVR32_DMACA_CFG0L_HS_SEL_DST                                 10
#define AVR32_DMACA_CFG0L_HS_SEL_DST_MASK                    0x00000400
#define AVR32_DMACA_CFG0L_HS_SEL_DST_OFFSET                          10
#define AVR32_DMACA_CFG0L_HS_SEL_DST_SIZE                             1
#define AVR32_DMACA_CFG0L_HS_SEL_SRC                                 11
#define AVR32_DMACA_CFG0L_HS_SEL_SRC_MASK                    0x00000800
#define AVR32_DMACA_CFG0L_HS_SEL_SRC_OFFSET                          11
#define AVR32_DMACA_CFG0L_HS_SEL_SRC_SIZE                             1
#define AVR32_DMACA_CFG0L_LOCK_B                                     17
#define AVR32_DMACA_CFG0L_LOCK_B_L                                   14
#define AVR32_DMACA_CFG0L_LOCK_B_L_MASK                      0x0000c000
#define AVR32_DMACA_CFG0L_LOCK_B_L_OFFSET                            14
#define AVR32_DMACA_CFG0L_LOCK_B_L_SIZE                               2
#define AVR32_DMACA_CFG0L_LOCK_B_MASK                        0x00020000
#define AVR32_DMACA_CFG0L_LOCK_B_OFFSET                              17
#define AVR32_DMACA_CFG0L_LOCK_B_SIZE                                 1
#define AVR32_DMACA_CFG0L_LOCK_CH                                    16
#define AVR32_DMACA_CFG0L_LOCK_CH_L                                  12
#define AVR32_DMACA_CFG0L_LOCK_CH_L_MASK                     0x00003000
#define AVR32_DMACA_CFG0L_LOCK_CH_L_OFFSET                           12
#define AVR32_DMACA_CFG0L_LOCK_CH_L_SIZE                              2
#define AVR32_DMACA_CFG0L_LOCK_CH_MASK                       0x00010000
#define AVR32_DMACA_CFG0L_LOCK_CH_OFFSET                             16
#define AVR32_DMACA_CFG0L_LOCK_CH_SIZE                                1
#define AVR32_DMACA_CFG0L_MAX_ABRST                                  20
#define AVR32_DMACA_CFG0L_MAX_ABRST_MASK                     0x3ff00000
#define AVR32_DMACA_CFG0L_MAX_ABRST_OFFSET                           20
#define AVR32_DMACA_CFG0L_MAX_ABRST_SIZE                             10
#define AVR32_DMACA_CFG0L_RELOAD_DS                                  31
#define AVR32_DMACA_CFG0L_RELOAD_DS_MASK                     0x80000000
#define AVR32_DMACA_CFG0L_RELOAD_DS_OFFSET                           31
#define AVR32_DMACA_CFG0L_RELOAD_DS_SIZE                              1
#define AVR32_DMACA_CFG0L_RELOAD_SR                                  30
#define AVR32_DMACA_CFG0L_RELOAD_SR_MASK                     0x40000000
#define AVR32_DMACA_CFG0L_RELOAD_SR_OFFSET                           30
#define AVR32_DMACA_CFG0L_RELOAD_SR_SIZE                              1
#define AVR32_DMACA_CFG0L_SR_HS_POL                                  19
#define AVR32_DMACA_CFG0L_SR_HS_POL_MASK                     0x00080000
#define AVR32_DMACA_CFG0L_SR_HS_POL_OFFSET                           19
#define AVR32_DMACA_CFG0L_SR_HS_POL_SIZE                              1
#define AVR32_DMACA_CFG1H                                    0x0000009c
#define AVR32_DMACA_CFG1H_DEST_PER                                   11
#define AVR32_DMACA_CFG1H_DEST_PER_MASK                      0x00007800
#define AVR32_DMACA_CFG1H_DEST_PER_OFFSET                            11
#define AVR32_DMACA_CFG1H_DEST_PER_SIZE                               4
#define AVR32_DMACA_CFG1H_DS_UPD_EN                                   5
#define AVR32_DMACA_CFG1H_DS_UPD_EN_MASK                     0x00000020
#define AVR32_DMACA_CFG1H_DS_UPD_EN_OFFSET                            5
#define AVR32_DMACA_CFG1H_DS_UPD_EN_SIZE                              1
#define AVR32_DMACA_CFG1H_FCMODE                                      0
#define AVR32_DMACA_CFG1H_FCMODE_MASK                        0x00000001
#define AVR32_DMACA_CFG1H_FCMODE_OFFSET                               0
#define AVR32_DMACA_CFG1H_FCMODE_SIZE                                 1
#define AVR32_DMACA_CFG1H_FIFO_MODE                                   1
#define AVR32_DMACA_CFG1H_FIFO_MODE_MASK                     0x00000002
#define AVR32_DMACA_CFG1H_FIFO_MODE_OFFSET                            1
#define AVR32_DMACA_CFG1H_FIFO_MODE_SIZE                              1
#define AVR32_DMACA_CFG1H_PROTCTL                                     2
#define AVR32_DMACA_CFG1H_PROTCTL_MASK                       0x0000001c
#define AVR32_DMACA_CFG1H_PROTCTL_OFFSET                              2
#define AVR32_DMACA_CFG1H_PROTCTL_SIZE                                3
#define AVR32_DMACA_CFG1H_SRC_PER                                     7
#define AVR32_DMACA_CFG1H_SRC_PER_MASK                       0x00000780
#define AVR32_DMACA_CFG1H_SRC_PER_OFFSET                              7
#define AVR32_DMACA_CFG1H_SRC_PER_SIZE                                4
#define AVR32_DMACA_CFG1H_SS_UPD_EN                                   6
#define AVR32_DMACA_CFG1H_SS_UPD_EN_MASK                     0x00000040
#define AVR32_DMACA_CFG1H_SS_UPD_EN_OFFSET                            6
#define AVR32_DMACA_CFG1H_SS_UPD_EN_SIZE                              1
#define AVR32_DMACA_CFG1L                                    0x00000098
#define AVR32_DMACA_CFG1L_CH_PRIOR                                    5
#define AVR32_DMACA_CFG1L_CH_PRIOR_MASK                      0x000000e0
#define AVR32_DMACA_CFG1L_CH_PRIOR_OFFSET                             5
#define AVR32_DMACA_CFG1L_CH_PRIOR_SIZE                               3
#define AVR32_DMACA_CFG1L_CH_SUSP                                     8
#define AVR32_DMACA_CFG1L_CH_SUSP_MASK                       0x00000100
#define AVR32_DMACA_CFG1L_CH_SUSP_OFFSET                              8
#define AVR32_DMACA_CFG1L_CH_SUSP_SIZE                                1
#define AVR32_DMACA_CFG1L_DS_HS_POL                                  18
#define AVR32_DMACA_CFG1L_DS_HS_POL_MASK                     0x00040000
#define AVR32_DMACA_CFG1L_DS_HS_POL_OFFSET                           18
#define AVR32_DMACA_CFG1L_DS_HS_POL_SIZE                              1
#define AVR32_DMACA_CFG1L_FIFO_EMPTY                                  9
#define AVR32_DMACA_CFG1L_FIFO_EMPTY_MASK                    0x00000200
#define AVR32_DMACA_CFG1L_FIFO_EMPTY_OFFSET                           9
#define AVR32_DMACA_CFG1L_FIFO_EMPTY_SIZE                             1
#define AVR32_DMACA_CFG1L_HS_SEL_DST                                 10
#define AVR32_DMACA_CFG1L_HS_SEL_DST_MASK                    0x00000400
#define AVR32_DMACA_CFG1L_HS_SEL_DST_OFFSET                          10
#define AVR32_DMACA_CFG1L_HS_SEL_DST_SIZE                             1
#define AVR32_DMACA_CFG1L_HS_SEL_SRC                                 11
#define AVR32_DMACA_CFG1L_HS_SEL_SRC_MASK                    0x00000800
#define AVR32_DMACA_CFG1L_HS_SEL_SRC_OFFSET                          11
#define AVR32_DMACA_CFG1L_HS_SEL_SRC_SIZE                             1
#define AVR32_DMACA_CFG1L_LOCK_B                                     17
#define AVR32_DMACA_CFG1L_LOCK_B_L                                   14
#define AVR32_DMACA_CFG1L_LOCK_B_L_MASK                      0x0000c000
#define AVR32_DMACA_CFG1L_LOCK_B_L_OFFSET                            14
#define AVR32_DMACA_CFG1L_LOCK_B_L_SIZE                               2
#define AVR32_DMACA_CFG1L_LOCK_B_MASK                        0x00020000
#define AVR32_DMACA_CFG1L_LOCK_B_OFFSET                              17
#define AVR32_DMACA_CFG1L_LOCK_B_SIZE                                 1
#define AVR32_DMACA_CFG1L_LOCK_CH                                    16
#define AVR32_DMACA_CFG1L_LOCK_CH_L                                  12
#define AVR32_DMACA_CFG1L_LOCK_CH_L_MASK                     0x00003000
#define AVR32_DMACA_CFG1L_LOCK_CH_L_OFFSET                           12
#define AVR32_DMACA_CFG1L_LOCK_CH_L_SIZE                              2
#define AVR32_DMACA_CFG1L_LOCK_CH_MASK                       0x00010000
#define AVR32_DMACA_CFG1L_LOCK_CH_OFFSET                             16
#define AVR32_DMACA_CFG1L_LOCK_CH_SIZE                                1
#define AVR32_DMACA_CFG1L_MAX_ABRST                                  20
#define AVR32_DMACA_CFG1L_MAX_ABRST_MASK                     0x3ff00000
#define AVR32_DMACA_CFG1L_MAX_ABRST_OFFSET                           20
#define AVR32_DMACA_CFG1L_MAX_ABRST_SIZE                             10
#define AVR32_DMACA_CFG1L_RELOAD_DS                                  31
#define AVR32_DMACA_CFG1L_RELOAD_DS_MASK                     0x80000000
#define AVR32_DMACA_CFG1L_RELOAD_DS_OFFSET                           31
#define AVR32_DMACA_CFG1L_RELOAD_DS_SIZE                              1
#define AVR32_DMACA_CFG1L_RELOAD_SR                                  30
#define AVR32_DMACA_CFG1L_RELOAD_SR_MASK                     0x40000000
#define AVR32_DMACA_CFG1L_RELOAD_SR_OFFSET                           30
#define AVR32_DMACA_CFG1L_RELOAD_SR_SIZE                              1
#define AVR32_DMACA_CFG1L_SR_HS_POL                                  19
#define AVR32_DMACA_CFG1L_SR_HS_POL_MASK                     0x00080000
#define AVR32_DMACA_CFG1L_SR_HS_POL_OFFSET                           19
#define AVR32_DMACA_CFG1L_SR_HS_POL_SIZE                              1
#define AVR32_DMACA_CFG2H                                    0x000000f4
#define AVR32_DMACA_CFG2H_DEST_PER                                   11
#define AVR32_DMACA_CFG2H_DEST_PER_MASK                      0x00007800
#define AVR32_DMACA_CFG2H_DEST_PER_OFFSET                            11
#define AVR32_DMACA_CFG2H_DEST_PER_SIZE                               4
#define AVR32_DMACA_CFG2H_DS_UPD_EN                                   5
#define AVR32_DMACA_CFG2H_DS_UPD_EN_MASK                     0x00000020
#define AVR32_DMACA_CFG2H_DS_UPD_EN_OFFSET                            5
#define AVR32_DMACA_CFG2H_DS_UPD_EN_SIZE                              1
#define AVR32_DMACA_CFG2H_FCMODE                                      0
#define AVR32_DMACA_CFG2H_FCMODE_MASK                        0x00000001
#define AVR32_DMACA_CFG2H_FCMODE_OFFSET                               0
#define AVR32_DMACA_CFG2H_FCMODE_SIZE                                 1
#define AVR32_DMACA_CFG2H_FIFO_MODE                                   1
#define AVR32_DMACA_CFG2H_FIFO_MODE_MASK                     0x00000002
#define AVR32_DMACA_CFG2H_FIFO_MODE_OFFSET                            1
#define AVR32_DMACA_CFG2H_FIFO_MODE_SIZE                              1
#define AVR32_DMACA_CFG2H_PROTCTL                                     2
#define AVR32_DMACA_CFG2H_PROTCTL_MASK                       0x0000001c
#define AVR32_DMACA_CFG2H_PROTCTL_OFFSET                              2
#define AVR32_DMACA_CFG2H_PROTCTL_SIZE                                3
#define AVR32_DMACA_CFG2H_SRC_PER                                     7
#define AVR32_DMACA_CFG2H_SRC_PER_MASK                       0x00000780
#define AVR32_DMACA_CFG2H_SRC_PER_OFFSET                              7
#define AVR32_DMACA_CFG2H_SRC_PER_SIZE                                4
#define AVR32_DMACA_CFG2H_SS_UPD_EN                                   6
#define AVR32_DMACA_CFG2H_SS_UPD_EN_MASK                     0x00000040
#define AVR32_DMACA_CFG2H_SS_UPD_EN_OFFSET                            6
#define AVR32_DMACA_CFG2H_SS_UPD_EN_SIZE                              1
#define AVR32_DMACA_CFG2L                                    0x000000f0
#define AVR32_DMACA_CFG2L_CH_PRIOR                                    5
#define AVR32_DMACA_CFG2L_CH_PRIOR_MASK                      0x000000e0
#define AVR32_DMACA_CFG2L_CH_PRIOR_OFFSET                             5
#define AVR32_DMACA_CFG2L_CH_PRIOR_SIZE                               3
#define AVR32_DMACA_CFG2L_CH_SUSP                                     8
#define AVR32_DMACA_CFG2L_CH_SUSP_MASK                       0x00000100
#define AVR32_DMACA_CFG2L_CH_SUSP_OFFSET                              8
#define AVR32_DMACA_CFG2L_CH_SUSP_SIZE                                1
#define AVR32_DMACA_CFG2L_DS_HS_POL                                  18
#define AVR32_DMACA_CFG2L_DS_HS_POL_MASK                     0x00040000
#define AVR32_DMACA_CFG2L_DS_HS_POL_OFFSET                           18
#define AVR32_DMACA_CFG2L_DS_HS_POL_SIZE                              1
#define AVR32_DMACA_CFG2L_FIFO_EMPTY                                  9
#define AVR32_DMACA_CFG2L_FIFO_EMPTY_MASK                    0x00000200
#define AVR32_DMACA_CFG2L_FIFO_EMPTY_OFFSET                           9
#define AVR32_DMACA_CFG2L_FIFO_EMPTY_SIZE                             1
#define AVR32_DMACA_CFG2L_HS_SEL_DST                                 10
#define AVR32_DMACA_CFG2L_HS_SEL_DST_MASK                    0x00000400
#define AVR32_DMACA_CFG2L_HS_SEL_DST_OFFSET                          10
#define AVR32_DMACA_CFG2L_HS_SEL_DST_SIZE                             1
#define AVR32_DMACA_CFG2L_HS_SEL_SRC                                 11
#define AVR32_DMACA_CFG2L_HS_SEL_SRC_MASK                    0x00000800
#define AVR32_DMACA_CFG2L_HS_SEL_SRC_OFFSET                          11
#define AVR32_DMACA_CFG2L_HS_SEL_SRC_SIZE                             1
#define AVR32_DMACA_CFG2L_LOCK_B                                     17
#define AVR32_DMACA_CFG2L_LOCK_B_L                                   14
#define AVR32_DMACA_CFG2L_LOCK_B_L_MASK                      0x0000c000
#define AVR32_DMACA_CFG2L_LOCK_B_L_OFFSET                            14
#define AVR32_DMACA_CFG2L_LOCK_B_L_SIZE                               2
#define AVR32_DMACA_CFG2L_LOCK_B_MASK                        0x00020000
#define AVR32_DMACA_CFG2L_LOCK_B_OFFSET                              17
#define AVR32_DMACA_CFG2L_LOCK_B_SIZE                                 1
#define AVR32_DMACA_CFG2L_LOCK_CH                                    16
#define AVR32_DMACA_CFG2L_LOCK_CH_L                                  12
#define AVR32_DMACA_CFG2L_LOCK_CH_L_MASK                     0x00003000
#define AVR32_DMACA_CFG2L_LOCK_CH_L_OFFSET                           12
#define AVR32_DMACA_CFG2L_LOCK_CH_L_SIZE                              2
#define AVR32_DMACA_CFG2L_LOCK_CH_MASK                       0x00010000
#define AVR32_DMACA_CFG2L_LOCK_CH_OFFSET                             16
#define AVR32_DMACA_CFG2L_LOCK_CH_SIZE                                1
#define AVR32_DMACA_CFG2L_MAX_ABRST                                  20
#define AVR32_DMACA_CFG2L_MAX_ABRST_MASK                     0x3ff00000
#define AVR32_DMACA_CFG2L_MAX_ABRST_OFFSET                           20
#define AVR32_DMACA_CFG2L_MAX_ABRST_SIZE                             10
#define AVR32_DMACA_CFG2L_RELOAD_DS                                  31
#define AVR32_DMACA_CFG2L_RELOAD_DS_MASK                     0x80000000
#define AVR32_DMACA_CFG2L_RELOAD_DS_OFFSET                           31
#define AVR32_DMACA_CFG2L_RELOAD_DS_SIZE                              1
#define AVR32_DMACA_CFG2L_RELOAD_SR                                  30
#define AVR32_DMACA_CFG2L_RELOAD_SR_MASK                     0x40000000
#define AVR32_DMACA_CFG2L_RELOAD_SR_OFFSET                           30
#define AVR32_DMACA_CFG2L_RELOAD_SR_SIZE                              1
#define AVR32_DMACA_CFG2L_SR_HS_POL                                  19
#define AVR32_DMACA_CFG2L_SR_HS_POL_MASK                     0x00080000
#define AVR32_DMACA_CFG2L_SR_HS_POL_OFFSET                           19
#define AVR32_DMACA_CFG2L_SR_HS_POL_SIZE                              1
#define AVR32_DMACA_CHENREG                                  0x000003a0
#define AVR32_DMACA_CHENREG_CH_EN                                     0
#define AVR32_DMACA_CHENREG_CH_EN_MASK                       0x000000ff
#define AVR32_DMACA_CHENREG_CH_EN_OFFSET                              0
#define AVR32_DMACA_CHENREG_CH_EN_SIZE                                8
#define AVR32_DMACA_CHENREG_CH_EN_WE                                  8
#define AVR32_DMACA_CHENREG_CH_EN_WE_MASK                    0x0000ff00
#define AVR32_DMACA_CHENREG_CH_EN_WE_OFFSET                           8
#define AVR32_DMACA_CHENREG_CH_EN_WE_SIZE                             8
#define AVR32_DMACA_CH_EN                                             0
#define AVR32_DMACA_CH_EN_MASK                               0x000000ff
#define AVR32_DMACA_CH_EN_OFFSET                                      0
#define AVR32_DMACA_CH_EN_SIZE                                        8
#define AVR32_DMACA_CH_EN_WE                                          8
#define AVR32_DMACA_CH_EN_WE_MASK                            0x0000ff00
#define AVR32_DMACA_CH_EN_WE_OFFSET                                   8
#define AVR32_DMACA_CH_EN_WE_SIZE                                     8
#define AVR32_DMACA_CH_PRIOR                                          5
#define AVR32_DMACA_CH_PRIOR_MASK                            0x000000e0
#define AVR32_DMACA_CH_PRIOR_OFFSET                                   5
#define AVR32_DMACA_CH_PRIOR_SIZE                                     3
#define AVR32_DMACA_CH_SUSP                                           8
#define AVR32_DMACA_CH_SUSP_MASK                             0x00000100
#define AVR32_DMACA_CH_SUSP_OFFSET                                    8
#define AVR32_DMACA_CH_SUSP_SIZE                                      1
#define AVR32_DMACA_CLEAR0                                            0
#define AVR32_DMACA_CLEAR0_MASK                              0x00000001
#define AVR32_DMACA_CLEAR0_OFFSET                                     0
#define AVR32_DMACA_CLEAR0_SIZE                                       1
#define AVR32_DMACA_CLEAR1                                            1
#define AVR32_DMACA_CLEAR1_MASK                              0x00000002
#define AVR32_DMACA_CLEAR1_OFFSET                                     1
#define AVR32_DMACA_CLEAR1_SIZE                                       1
#define AVR32_DMACA_CLEAR2                                            2
#define AVR32_DMACA_CLEAR2_MASK                              0x00000004
#define AVR32_DMACA_CLEAR2_OFFSET                                     2
#define AVR32_DMACA_CLEAR2_SIZE                                       1
#define AVR32_DMACA_CLEARBLOCK                               0x00000340
#define AVR32_DMACA_CLEARBLOCK_CLEAR0                                 0
#define AVR32_DMACA_CLEARBLOCK_CLEAR0_MASK                   0x00000001
#define AVR32_DMACA_CLEARBLOCK_CLEAR0_OFFSET                          0
#define AVR32_DMACA_CLEARBLOCK_CLEAR0_SIZE                            1
#define AVR32_DMACA_CLEARBLOCK_CLEAR1                                 1
#define AVR32_DMACA_CLEARBLOCK_CLEAR1_MASK                   0x00000002
#define AVR32_DMACA_CLEARBLOCK_CLEAR1_OFFSET                          1
#define AVR32_DMACA_CLEARBLOCK_CLEAR1_SIZE                            1
#define AVR32_DMACA_CLEARBLOCK_CLEAR2                                 2
#define AVR32_DMACA_CLEARBLOCK_CLEAR2_MASK                   0x00000004
#define AVR32_DMACA_CLEARBLOCK_CLEAR2_OFFSET                          2
#define AVR32_DMACA_CLEARBLOCK_CLEAR2_SIZE                            1
#define AVR32_DMACA_CLEARDSTTRAN                             0x00000350
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR0                               0
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR0_MASK                 0x00000001
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR0_OFFSET                        0
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR0_SIZE                          1
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR1                               1
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR1_MASK                 0x00000002
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR1_OFFSET                        1
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR1_SIZE                          1
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR2                               2
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR2_MASK                 0x00000004
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR2_OFFSET                        2
#define AVR32_DMACA_CLEARDSTTRAN_CLEAR2_SIZE                          1
#define AVR32_DMACA_CLEARERR                                 0x00000358
#define AVR32_DMACA_CLEARERR_CLEAR0                                   0
#define AVR32_DMACA_CLEARERR_CLEAR0_MASK                     0x00000001
#define AVR32_DMACA_CLEARERR_CLEAR0_OFFSET                            0
#define AVR32_DMACA_CLEARERR_CLEAR0_SIZE                              1
#define AVR32_DMACA_CLEARERR_CLEAR1                                   1
#define AVR32_DMACA_CLEARERR_CLEAR1_MASK                     0x00000002
#define AVR32_DMACA_CLEARERR_CLEAR1_OFFSET                            1
#define AVR32_DMACA_CLEARERR_CLEAR1_SIZE                              1
#define AVR32_DMACA_CLEARERR_CLEAR2                                   2
#define AVR32_DMACA_CLEARERR_CLEAR2_MASK                     0x00000004
#define AVR32_DMACA_CLEARERR_CLEAR2_OFFSET                            2
#define AVR32_DMACA_CLEARERR_CLEAR2_SIZE                              1
#define AVR32_DMACA_CLEARSRCTRAN                             0x00000348
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR0                               0
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR0_MASK                 0x00000001
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR0_OFFSET                        0
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR0_SIZE                          1
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR1                               1
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR1_MASK                 0x00000002
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR1_OFFSET                        1
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR1_SIZE                          1
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR2                               2
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR2_MASK                 0x00000004
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR2_OFFSET                        2
#define AVR32_DMACA_CLEARSRCTRAN_CLEAR2_SIZE                          1
#define AVR32_DMACA_CLEARTFR                                 0x00000338
#define AVR32_DMACA_CLEARTFR_CLEAR0                                   0
#define AVR32_DMACA_CLEARTFR_CLEAR0_MASK                     0x00000001
#define AVR32_DMACA_CLEARTFR_CLEAR0_OFFSET                            0
#define AVR32_DMACA_CLEARTFR_CLEAR0_SIZE                              1
#define AVR32_DMACA_CLEARTFR_CLEAR1                                   1
#define AVR32_DMACA_CLEARTFR_CLEAR1_MASK                     0x00000002
#define AVR32_DMACA_CLEARTFR_CLEAR1_OFFSET                            1
#define AVR32_DMACA_CLEARTFR_CLEAR1_SIZE                              1
#define AVR32_DMACA_CLEARTFR_CLEAR2                                   2
#define AVR32_DMACA_CLEARTFR_CLEAR2_MASK                     0x00000004
#define AVR32_DMACA_CLEARTFR_CLEAR2_OFFSET                            2
#define AVR32_DMACA_CLEARTFR_CLEAR2_SIZE                              1
#define AVR32_DMACA_CTL0H                                    0x0000001c
#define AVR32_DMACA_CTL0H_BLOCK_TS                                    0
#define AVR32_DMACA_CTL0H_BLOCK_TS_MASK                      0x00000fff
#define AVR32_DMACA_CTL0H_BLOCK_TS_OFFSET                             0
#define AVR32_DMACA_CTL0H_BLOCK_TS_SIZE                              12
#define AVR32_DMACA_CTL0H_DONE                                       12
#define AVR32_DMACA_CTL0H_DONE_MASK                          0x00001000
#define AVR32_DMACA_CTL0H_DONE_OFFSET                                12
#define AVR32_DMACA_CTL0H_DONE_SIZE                                   1
#define AVR32_DMACA_CTL0L                                    0x00000018
#define AVR32_DMACA_CTL0L_DINC                                        7
#define AVR32_DMACA_CTL0L_DINC_MASK                          0x00000180
#define AVR32_DMACA_CTL0L_DINC_OFFSET                                 7
#define AVR32_DMACA_CTL0L_DINC_SIZE                                   2
#define AVR32_DMACA_CTL0L_DMS                                        23
#define AVR32_DMACA_CTL0L_DMS_MASK                           0x01800000
#define AVR32_DMACA_CTL0L_DMS_OFFSET                                 23
#define AVR32_DMACA_CTL0L_DMS_SIZE                                    2
#define AVR32_DMACA_CTL0L_DST_MSIZE                                  11
#define AVR32_DMACA_CTL0L_DST_MSIZE_MASK                     0x00003800
#define AVR32_DMACA_CTL0L_DST_MSIZE_OFFSET                           11
#define AVR32_DMACA_CTL0L_DST_MSIZE_SIZE                              3
#define AVR32_DMACA_CTL0L_DST_TR_WIDTH                                1
#define AVR32_DMACA_CTL0L_DST_TR_WIDTH_MASK                  0x0000000e
#define AVR32_DMACA_CTL0L_DST_TR_WIDTH_OFFSET                         1
#define AVR32_DMACA_CTL0L_DST_TR_WIDTH_SIZE                           3
#define AVR32_DMACA_CTL0L_D_SCAT_EN                                  18
#define AVR32_DMACA_CTL0L_D_SCAT_EN_MASK                     0x00040000
#define AVR32_DMACA_CTL0L_D_SCAT_EN_OFFSET                           18
#define AVR32_DMACA_CTL0L_D_SCAT_EN_SIZE                              1
#define AVR32_DMACA_CTL0L_INT_EN                                      0
#define AVR32_DMACA_CTL0L_INT_EN_MASK                        0x00000001
#define AVR32_DMACA_CTL0L_INT_EN_OFFSET                               0
#define AVR32_DMACA_CTL0L_INT_EN_SIZE                                 1
#define AVR32_DMACA_CTL0L_LLP_D_EN                                   27
#define AVR32_DMACA_CTL0L_LLP_D_EN_MASK                      0x08000000
#define AVR32_DMACA_CTL0L_LLP_D_EN_OFFSET                            27
#define AVR32_DMACA_CTL0L_LLP_D_EN_SIZE                               1
#define AVR32_DMACA_CTL0L_LLP_S_EN                                   28
#define AVR32_DMACA_CTL0L_LLP_S_EN_MASK                      0x10000000
#define AVR32_DMACA_CTL0L_LLP_S_EN_OFFSET                            28
#define AVR32_DMACA_CTL0L_LLP_S_EN_SIZE                               1
#define AVR32_DMACA_CTL0L_SINC                                        9
#define AVR32_DMACA_CTL0L_SINC_MASK                          0x00000600
#define AVR32_DMACA_CTL0L_SINC_OFFSET                                 9
#define AVR32_DMACA_CTL0L_SINC_SIZE                                   2
#define AVR32_DMACA_CTL0L_SMS                                        25
#define AVR32_DMACA_CTL0L_SMS_MASK                           0x06000000
#define AVR32_DMACA_CTL0L_SMS_OFFSET                                 25
#define AVR32_DMACA_CTL0L_SMS_SIZE                                    2
#define AVR32_DMACA_CTL0L_SRC_MSIZE                                  14
#define AVR32_DMACA_CTL0L_SRC_MSIZE_MASK                     0x0001c000
#define AVR32_DMACA_CTL0L_SRC_MSIZE_OFFSET                           14
#define AVR32_DMACA_CTL0L_SRC_MSIZE_SIZE                              3
#define AVR32_DMACA_CTL0L_SRC_TR_WIDTH                                4
#define AVR32_DMACA_CTL0L_SRC_TR_WIDTH_MASK                  0x00000070
#define AVR32_DMACA_CTL0L_SRC_TR_WIDTH_OFFSET                         4
#define AVR32_DMACA_CTL0L_SRC_TR_WIDTH_SIZE                           3
#define AVR32_DMACA_CTL0L_S_GATH_EN                                  17
#define AVR32_DMACA_CTL0L_S_GATH_EN_MASK                     0x00020000
#define AVR32_DMACA_CTL0L_S_GATH_EN_OFFSET                           17
#define AVR32_DMACA_CTL0L_S_GATH_EN_SIZE                              1
#define AVR32_DMACA_CTL0L_TT_FC                                      20
#define AVR32_DMACA_CTL0L_TT_FC_MASK                         0x00700000
#define AVR32_DMACA_CTL0L_TT_FC_OFFSET                               20
#define AVR32_DMACA_CTL0L_TT_FC_SIZE                                  3
#define AVR32_DMACA_CTL1H                                    0x00000074
#define AVR32_DMACA_CTL1H_BLOCK_TS                                    0
#define AVR32_DMACA_CTL1H_BLOCK_TS_MASK                      0x00000fff
#define AVR32_DMACA_CTL1H_BLOCK_TS_OFFSET                             0
#define AVR32_DMACA_CTL1H_BLOCK_TS_SIZE                              12
#define AVR32_DMACA_CTL1H_DONE                                       12
#define AVR32_DMACA_CTL1H_DONE_MASK                          0x00001000
#define AVR32_DMACA_CTL1H_DONE_OFFSET                                12
#define AVR32_DMACA_CTL1H_DONE_SIZE                                   1
#define AVR32_DMACA_CTL1L                                    0x00000070
#define AVR32_DMACA_CTL1L_DINC                                        7
#define AVR32_DMACA_CTL1L_DINC_MASK                          0x00000180
#define AVR32_DMACA_CTL1L_DINC_OFFSET                                 7
#define AVR32_DMACA_CTL1L_DINC_SIZE                                   2
#define AVR32_DMACA_CTL1L_DMS                                        23
#define AVR32_DMACA_CTL1L_DMS_MASK                           0x01800000
#define AVR32_DMACA_CTL1L_DMS_OFFSET                                 23
#define AVR32_DMACA_CTL1L_DMS_SIZE                                    2
#define AVR32_DMACA_CTL1L_DST_MSIZE                                  11
#define AVR32_DMACA_CTL1L_DST_MSIZE_MASK                     0x00003800
#define AVR32_DMACA_CTL1L_DST_MSIZE_OFFSET                           11
#define AVR32_DMACA_CTL1L_DST_MSIZE_SIZE                              3
#define AVR32_DMACA_CTL1L_DST_TR_WIDTH                                1
#define AVR32_DMACA_CTL1L_DST_TR_WIDTH_MASK                  0x0000000e
#define AVR32_DMACA_CTL1L_DST_TR_WIDTH_OFFSET                         1
#define AVR32_DMACA_CTL1L_DST_TR_WIDTH_SIZE                           3
#define AVR32_DMACA_CTL1L_D_SCAT_EN                                  18
#define AVR32_DMACA_CTL1L_D_SCAT_EN_MASK                     0x00040000
#define AVR32_DMACA_CTL1L_D_SCAT_EN_OFFSET                           18
#define AVR32_DMACA_CTL1L_D_SCAT_EN_SIZE                              1
#define AVR32_DMACA_CTL1L_INT_EN                                      0
#define AVR32_DMACA_CTL1L_INT_EN_MASK                        0x00000001
#define AVR32_DMACA_CTL1L_INT_EN_OFFSET                               0
#define AVR32_DMACA_CTL1L_INT_EN_SIZE                                 1
#define AVR32_DMACA_CTL1L_LLP_D_EN                                   27
#define AVR32_DMACA_CTL1L_LLP_D_EN_MASK                      0x08000000
#define AVR32_DMACA_CTL1L_LLP_D_EN_OFFSET                            27
#define AVR32_DMACA_CTL1L_LLP_D_EN_SIZE                               1
#define AVR32_DMACA_CTL1L_LLP_S_EN                                   28
#define AVR32_DMACA_CTL1L_LLP_S_EN_MASK                      0x10000000
#define AVR32_DMACA_CTL1L_LLP_S_EN_OFFSET                            28
#define AVR32_DMACA_CTL1L_LLP_S_EN_SIZE                               1
#define AVR32_DMACA_CTL1L_SINC                                        9
#define AVR32_DMACA_CTL1L_SINC_MASK                          0x00000600
#define AVR32_DMACA_CTL1L_SINC_OFFSET                                 9
#define AVR32_DMACA_CTL1L_SINC_SIZE                                   2
#define AVR32_DMACA_CTL1L_SMS                                        25
#define AVR32_DMACA_CTL1L_SMS_MASK                           0x06000000
#define AVR32_DMACA_CTL1L_SMS_OFFSET                                 25
#define AVR32_DMACA_CTL1L_SMS_SIZE                                    2
#define AVR32_DMACA_CTL1L_SRC_MSIZE                                  14
#define AVR32_DMACA_CTL1L_SRC_MSIZE_MASK                     0x0001c000
#define AVR32_DMACA_CTL1L_SRC_MSIZE_OFFSET                           14
#define AVR32_DMACA_CTL1L_SRC_MSIZE_SIZE                              3
#define AVR32_DMACA_CTL1L_SRC_TR_WIDTH                                4
#define AVR32_DMACA_CTL1L_SRC_TR_WIDTH_MASK                  0x00000070
#define AVR32_DMACA_CTL1L_SRC_TR_WIDTH_OFFSET                         4
#define AVR32_DMACA_CTL1L_SRC_TR_WIDTH_SIZE                           3
#define AVR32_DMACA_CTL1L_S_GATH_EN                                  17
#define AVR32_DMACA_CTL1L_S_GATH_EN_MASK                     0x00020000
#define AVR32_DMACA_CTL1L_S_GATH_EN_OFFSET                           17
#define AVR32_DMACA_CTL1L_S_GATH_EN_SIZE                              1
#define AVR32_DMACA_CTL1L_TT_FC                                      20
#define AVR32_DMACA_CTL1L_TT_FC_MASK                         0x00700000
#define AVR32_DMACA_CTL1L_TT_FC_OFFSET                               20
#define AVR32_DMACA_CTL1L_TT_FC_SIZE                                  3
#define AVR32_DMACA_CTL2H                                    0x000000cc
#define AVR32_DMACA_CTL2H_BLOCK_TS                                    0
#define AVR32_DMACA_CTL2H_BLOCK_TS_MASK                      0x00000fff
#define AVR32_DMACA_CTL2H_BLOCK_TS_OFFSET                             0
#define AVR32_DMACA_CTL2H_BLOCK_TS_SIZE                              12
#define AVR32_DMACA_CTL2H_DONE                                       12
#define AVR32_DMACA_CTL2H_DONE_MASK                          0x00001000
#define AVR32_DMACA_CTL2H_DONE_OFFSET                                12
#define AVR32_DMACA_CTL2H_DONE_SIZE                                   1
#define AVR32_DMACA_CTL2L                                    0x000000c8
#define AVR32_DMACA_CTL2L_DINC                                        7
#define AVR32_DMACA_CTL2L_DINC_MASK                          0x00000180
#define AVR32_DMACA_CTL2L_DINC_OFFSET                                 7
#define AVR32_DMACA_CTL2L_DINC_SIZE                                   2
#define AVR32_DMACA_CTL2L_DMS                                        23
#define AVR32_DMACA_CTL2L_DMS_MASK                           0x01800000
#define AVR32_DMACA_CTL2L_DMS_OFFSET                                 23
#define AVR32_DMACA_CTL2L_DMS_SIZE                                    2
#define AVR32_DMACA_CTL2L_DST_MSIZE                                  11
#define AVR32_DMACA_CTL2L_DST_MSIZE_MASK                     0x00003800
#define AVR32_DMACA_CTL2L_DST_MSIZE_OFFSET                           11
#define AVR32_DMACA_CTL2L_DST_MSIZE_SIZE                              3
#define AVR32_DMACA_CTL2L_DST_TR_WIDTH                                1
#define AVR32_DMACA_CTL2L_DST_TR_WIDTH_MASK                  0x0000000e
#define AVR32_DMACA_CTL2L_DST_TR_WIDTH_OFFSET                         1
#define AVR32_DMACA_CTL2L_DST_TR_WIDTH_SIZE                           3
#define AVR32_DMACA_CTL2L_D_SCAT_EN                                  18
#define AVR32_DMACA_CTL2L_D_SCAT_EN_MASK                     0x00040000
#define AVR32_DMACA_CTL2L_D_SCAT_EN_OFFSET                           18
#define AVR32_DMACA_CTL2L_D_SCAT_EN_SIZE                              1
#define AVR32_DMACA_CTL2L_INT_EN                                      0
#define AVR32_DMACA_CTL2L_INT_EN_MASK                        0x00000001
#define AVR32_DMACA_CTL2L_INT_EN_OFFSET                               0
#define AVR32_DMACA_CTL2L_INT_EN_SIZE                                 1
#define AVR32_DMACA_CTL2L_LLP_D_EN                                   27
#define AVR32_DMACA_CTL2L_LLP_D_EN_MASK                      0x08000000
#define AVR32_DMACA_CTL2L_LLP_D_EN_OFFSET                            27
#define AVR32_DMACA_CTL2L_LLP_D_EN_SIZE                               1
#define AVR32_DMACA_CTL2L_LLP_S_EN                                   28
#define AVR32_DMACA_CTL2L_LLP_S_EN_MASK                      0x10000000
#define AVR32_DMACA_CTL2L_LLP_S_EN_OFFSET                            28
#define AVR32_DMACA_CTL2L_LLP_S_EN_SIZE                               1
#define AVR32_DMACA_CTL2L_SINC                                        9
#define AVR32_DMACA_CTL2L_SINC_MASK                          0x00000600
#define AVR32_DMACA_CTL2L_SINC_OFFSET                                 9
#define AVR32_DMACA_CTL2L_SINC_SIZE                                   2
#define AVR32_DMACA_CTL2L_SMS                                        25
#define AVR32_DMACA_CTL2L_SMS_MASK                           0x06000000
#define AVR32_DMACA_CTL2L_SMS_OFFSET                                 25
#define AVR32_DMACA_CTL2L_SMS_SIZE                                    2
#define AVR32_DMACA_CTL2L_SRC_MSIZE                                  14
#define AVR32_DMACA_CTL2L_SRC_MSIZE_MASK                     0x0001c000
#define AVR32_DMACA_CTL2L_SRC_MSIZE_OFFSET                           14
#define AVR32_DMACA_CTL2L_SRC_MSIZE_SIZE                              3
#define AVR32_DMACA_CTL2L_SRC_TR_WIDTH                                4
#define AVR32_DMACA_CTL2L_SRC_TR_WIDTH_MASK                  0x00000070
#define AVR32_DMACA_CTL2L_SRC_TR_WIDTH_OFFSET                         4
#define AVR32_DMACA_CTL2L_SRC_TR_WIDTH_SIZE                           3
#define AVR32_DMACA_CTL2L_S_GATH_EN                                  17
#define AVR32_DMACA_CTL2L_S_GATH_EN_MASK                     0x00020000
#define AVR32_DMACA_CTL2L_S_GATH_EN_OFFSET                           17
#define AVR32_DMACA_CTL2L_S_GATH_EN_SIZE                              1
#define AVR32_DMACA_CTL2L_TT_FC                                      20
#define AVR32_DMACA_CTL2L_TT_FC_MASK                         0x00700000
#define AVR32_DMACA_CTL2L_TT_FC_OFFSET                               20
#define AVR32_DMACA_CTL2L_TT_FC_SIZE                                  3
#define AVR32_DMACA_DADD                                              0
#define AVR32_DMACA_DADD_MASK                                0xffffffff
#define AVR32_DMACA_DADD_OFFSET                                       0
#define AVR32_DMACA_DADD_SIZE                                        32
#define AVR32_DMACA_DAR0                                     0x00000008
#define AVR32_DMACA_DAR0_DADD                                         0
#define AVR32_DMACA_DAR0_DADD_MASK                           0xffffffff
#define AVR32_DMACA_DAR0_DADD_OFFSET                                  0
#define AVR32_DMACA_DAR0_DADD_SIZE                                   32
#define AVR32_DMACA_DAR1                                     0x00000060
#define AVR32_DMACA_DAR1_DADD                                         0
#define AVR32_DMACA_DAR1_DADD_MASK                           0xffffffff
#define AVR32_DMACA_DAR1_DADD_OFFSET                                  0
#define AVR32_DMACA_DAR1_DADD_SIZE                                   32
#define AVR32_DMACA_DAR2                                     0x000000b8
#define AVR32_DMACA_DAR2_DADD                                         0
#define AVR32_DMACA_DAR2_DADD_MASK                           0xffffffff
#define AVR32_DMACA_DAR2_DADD_OFFSET                                  0
#define AVR32_DMACA_DAR2_DADD_SIZE                                   32
#define AVR32_DMACA_DEST_PER                                         11
#define AVR32_DMACA_DEST_PER_MASK                            0x00007800
#define AVR32_DMACA_DEST_PER_OFFSET                                  11
#define AVR32_DMACA_DEST_PER_SIZE                                     4
#define AVR32_DMACA_DINC                                              7
#define AVR32_DMACA_DINC_MASK                                0x00000180
#define AVR32_DMACA_DINC_OFFSET                                       7
#define AVR32_DMACA_DINC_SIZE                                         2
#define AVR32_DMACA_DMACFGREG                                0x00000398
#define AVR32_DMACA_DMACFGREG_DMA_EN                                  0
#define AVR32_DMACA_DMACFGREG_DMA_EN_MASK                    0x00000001
#define AVR32_DMACA_DMACFGREG_DMA_EN_OFFSET                           0
#define AVR32_DMACA_DMACFGREG_DMA_EN_SIZE                             1
#define AVR32_DMACA_DMATESTREG                               0x000003b0
#define AVR32_DMACA_DMATESTREG_TEST_SLV_IF                            0
#define AVR32_DMACA_DMATESTREG_TEST_SLV_IF_MASK              0x00000001
#define AVR32_DMACA_DMATESTREG_TEST_SLV_IF_OFFSET                     0
#define AVR32_DMACA_DMATESTREG_TEST_SLV_IF_SIZE                       1
#define AVR32_DMACA_DMA_EN                                            0
#define AVR32_DMACA_DMA_EN_MASK                              0x00000001
#define AVR32_DMACA_DMA_EN_OFFSET                                     0
#define AVR32_DMACA_DMA_EN_SIZE                                       1
#define AVR32_DMACA_DMS                                              23
#define AVR32_DMACA_DMS_MASK                                 0x01800000
#define AVR32_DMACA_DMS_OFFSET                                       23
#define AVR32_DMACA_DMS_SIZE                                          2
#define AVR32_DMACA_DONE                                             12
#define AVR32_DMACA_DONE_MASK                                0x00001000
#define AVR32_DMACA_DONE_OFFSET                                      12
#define AVR32_DMACA_DONE_SIZE                                         1
#define AVR32_DMACA_DSTT                                              3
#define AVR32_DMACA_DSTT_MASK                                0x00000008
#define AVR32_DMACA_DSTT_OFFSET                                       3
#define AVR32_DMACA_DSTT_SIZE                                         1
#define AVR32_DMACA_DST_MSIZE                                        11
#define AVR32_DMACA_DST_MSIZE_MASK                           0x00003800
#define AVR32_DMACA_DST_MSIZE_OFFSET                                 11
#define AVR32_DMACA_DST_MSIZE_SIZE                                    3
#define AVR32_DMACA_DST_REQ                                           0
#define AVR32_DMACA_DST_REQ_MASK                             0x000000ff
#define AVR32_DMACA_DST_REQ_OFFSET                                    0
#define AVR32_DMACA_DST_REQ_SIZE                                      8
#define AVR32_DMACA_DST_TR_WIDTH                                      1
#define AVR32_DMACA_DST_TR_WIDTH_MASK                        0x0000000e
#define AVR32_DMACA_DST_TR_WIDTH_OFFSET                               1
#define AVR32_DMACA_DST_TR_WIDTH_SIZE                                 3
#define AVR32_DMACA_DS_HS_POL                                        18
#define AVR32_DMACA_DS_HS_POL_MASK                           0x00040000
#define AVR32_DMACA_DS_HS_POL_OFFSET                                 18
#define AVR32_DMACA_DS_HS_POL_SIZE                                    1
#define AVR32_DMACA_DS_UPD_EN                                         5
#define AVR32_DMACA_DS_UPD_EN_MASK                           0x00000020
#define AVR32_DMACA_DS_UPD_EN_OFFSET                                  5
#define AVR32_DMACA_DS_UPD_EN_SIZE                                    1
#define AVR32_DMACA_D_SCAT_EN                                        18
#define AVR32_DMACA_D_SCAT_EN_MASK                           0x00040000
#define AVR32_DMACA_D_SCAT_EN_OFFSET                                 18
#define AVR32_DMACA_D_SCAT_EN_SIZE                                    1
#define AVR32_DMACA_D_SG_REQ                                          0
#define AVR32_DMACA_D_SG_REQ_MASK                            0x000000ff
#define AVR32_DMACA_D_SG_REQ_OFFSET                                   0
#define AVR32_DMACA_D_SG_REQ_SIZE                                     8
#define AVR32_DMACA_ERR                                               4
#define AVR32_DMACA_ERR_MASK                                 0x00000010
#define AVR32_DMACA_ERR_OFFSET                                        4
#define AVR32_DMACA_ERR_SIZE                                          1
#define AVR32_DMACA_FCMODE                                            0
#define AVR32_DMACA_FCMODE_MASK                              0x00000001
#define AVR32_DMACA_FCMODE_OFFSET                                     0
#define AVR32_DMACA_FCMODE_SIZE                                       1
#define AVR32_DMACA_FIFO_EMPTY                                        9
#define AVR32_DMACA_FIFO_EMPTY_MASK                          0x00000200
#define AVR32_DMACA_FIFO_EMPTY_OFFSET                                 9
#define AVR32_DMACA_FIFO_EMPTY_SIZE                                   1
#define AVR32_DMACA_FIFO_MODE                                         1
#define AVR32_DMACA_FIFO_MODE_MASK                           0x00000002
#define AVR32_DMACA_FIFO_MODE_OFFSET                                  1
#define AVR32_DMACA_FIFO_MODE_SIZE                                    1
#define AVR32_DMACA_HS_SEL_DST                                       10
#define AVR32_DMACA_HS_SEL_DST_MASK                          0x00000400
#define AVR32_DMACA_HS_SEL_DST_OFFSET                                10
#define AVR32_DMACA_HS_SEL_DST_SIZE                                   1
#define AVR32_DMACA_HS_SEL_SRC                                       11
#define AVR32_DMACA_HS_SEL_SRC_MASK                          0x00000800
#define AVR32_DMACA_HS_SEL_SRC_OFFSET                                11
#define AVR32_DMACA_HS_SEL_SRC_SIZE                                   1
#define AVR32_DMACA_IDREG                                    0x000003a8
#define AVR32_DMACA_INT_EN                                            0
#define AVR32_DMACA_INT_EN_MASK                              0x00000001
#define AVR32_DMACA_INT_EN_OFFSET                                     0
#define AVR32_DMACA_INT_EN_SIZE                                       1
#define AVR32_DMACA_INT_MASK0                                         0
#define AVR32_DMACA_INT_MASK0_MASK                           0x00000001
#define AVR32_DMACA_INT_MASK0_OFFSET                                  0
#define AVR32_DMACA_INT_MASK0_SIZE                                    1
#define AVR32_DMACA_INT_MASK1                                         1
#define AVR32_DMACA_INT_MASK1_MASK                           0x00000002
#define AVR32_DMACA_INT_MASK1_OFFSET                                  1
#define AVR32_DMACA_INT_MASK1_SIZE                                    1
#define AVR32_DMACA_INT_MASK2                                         2
#define AVR32_DMACA_INT_MASK2_MASK                           0x00000004
#define AVR32_DMACA_INT_MASK2_OFFSET                                  2
#define AVR32_DMACA_INT_MASK2_SIZE                                    1
#define AVR32_DMACA_INT_M_WE0                                         8
#define AVR32_DMACA_INT_M_WE0_MASK                           0x00000100
#define AVR32_DMACA_INT_M_WE0_OFFSET                                  8
#define AVR32_DMACA_INT_M_WE0_SIZE                                    1
#define AVR32_DMACA_INT_M_WE1                                         9
#define AVR32_DMACA_INT_M_WE1_MASK                           0x00000200
#define AVR32_DMACA_INT_M_WE1_OFFSET                                  9
#define AVR32_DMACA_INT_M_WE1_SIZE                                    1
#define AVR32_DMACA_INT_M_WE2                                        10
#define AVR32_DMACA_INT_M_WE2_MASK                           0x00000400
#define AVR32_DMACA_INT_M_WE2_OFFSET                                 10
#define AVR32_DMACA_INT_M_WE2_SIZE                                    1
#define AVR32_DMACA_LLP0                                     0x00000010
#define AVR32_DMACA_LLP0_LMS                                          0
#define AVR32_DMACA_LLP0_LMS_MASK                            0x00000003
#define AVR32_DMACA_LLP0_LMS_OFFSET                                   0
#define AVR32_DMACA_LLP0_LMS_SIZE                                     2
#define AVR32_DMACA_LLP0_LOC                                          2
#define AVR32_DMACA_LLP0_LOC_MASK                            0xfffffffc
#define AVR32_DMACA_LLP0_LOC_OFFSET                                   2
#define AVR32_DMACA_LLP0_LOC_SIZE                                    30
#define AVR32_DMACA_LLP1                                     0x00000068
#define AVR32_DMACA_LLP1_LMS                                          0
#define AVR32_DMACA_LLP1_LMS_MASK                            0x00000003
#define AVR32_DMACA_LLP1_LMS_OFFSET                                   0
#define AVR32_DMACA_LLP1_LMS_SIZE                                     2
#define AVR32_DMACA_LLP1_LOC                                          2
#define AVR32_DMACA_LLP1_LOC_MASK                            0xfffffffc
#define AVR32_DMACA_LLP1_LOC_OFFSET                                   2
#define AVR32_DMACA_LLP1_LOC_SIZE                                    30
#define AVR32_DMACA_LLP2                                     0x000000c0
#define AVR32_DMACA_LLP2_LMS                                          0
#define AVR32_DMACA_LLP2_LMS_MASK                            0x00000003
#define AVR32_DMACA_LLP2_LMS_OFFSET                                   0
#define AVR32_DMACA_LLP2_LMS_SIZE                                     2
#define AVR32_DMACA_LLP2_LOC                                          2
#define AVR32_DMACA_LLP2_LOC_MASK                            0xfffffffc
#define AVR32_DMACA_LLP2_LOC_OFFSET                                   2
#define AVR32_DMACA_LLP2_LOC_SIZE                                    30
#define AVR32_DMACA_LLP_D_EN                                         27
#define AVR32_DMACA_LLP_D_EN_MASK                            0x08000000
#define AVR32_DMACA_LLP_D_EN_OFFSET                                  27
#define AVR32_DMACA_LLP_D_EN_SIZE                                     1
#define AVR32_DMACA_LLP_S_EN                                         28
#define AVR32_DMACA_LLP_S_EN_MASK                            0x10000000
#define AVR32_DMACA_LLP_S_EN_OFFSET                                  28
#define AVR32_DMACA_LLP_S_EN_SIZE                                     1
#define AVR32_DMACA_LMS                                               0
#define AVR32_DMACA_LMS_MASK                                 0x00000003
#define AVR32_DMACA_LMS_OFFSET                                        0
#define AVR32_DMACA_LMS_SIZE                                          2
#define AVR32_DMACA_LOC                                               2
#define AVR32_DMACA_LOCK_B                                           17
#define AVR32_DMACA_LOCK_B_L                                         14
#define AVR32_DMACA_LOCK_B_L_MASK                            0x0000c000
#define AVR32_DMACA_LOCK_B_L_OFFSET                                  14
#define AVR32_DMACA_LOCK_B_L_SIZE                                     2
#define AVR32_DMACA_LOCK_B_MASK                              0x00020000
#define AVR32_DMACA_LOCK_B_OFFSET                                    17
#define AVR32_DMACA_LOCK_B_SIZE                                       1
#define AVR32_DMACA_LOCK_CH                                          16
#define AVR32_DMACA_LOCK_CH_L                                        12
#define AVR32_DMACA_LOCK_CH_L_MASK                           0x00003000
#define AVR32_DMACA_LOCK_CH_L_OFFSET                                 12
#define AVR32_DMACA_LOCK_CH_L_SIZE                                    2
#define AVR32_DMACA_LOCK_CH_MASK                             0x00010000
#define AVR32_DMACA_LOCK_CH_OFFSET                                   16
#define AVR32_DMACA_LOCK_CH_SIZE                                      1
#define AVR32_DMACA_LOC_MASK                                 0xfffffffc
#define AVR32_DMACA_LOC_OFFSET                                        2
#define AVR32_DMACA_LOC_SIZE                                         30
#define AVR32_DMACA_LSTDST                                            0
#define AVR32_DMACA_LSTDSTREQREG                             0x00000390
#define AVR32_DMACA_LSTDSTREQREG_LSTDST                               0
#define AVR32_DMACA_LSTDSTREQREG_LSTDST_MASK                 0x000000ff
#define AVR32_DMACA_LSTDSTREQREG_LSTDST_OFFSET                        0
#define AVR32_DMACA_LSTDSTREQREG_LSTDST_SIZE                          8
#define AVR32_DMACA_LSTDSTREQREG_LSTDS_WE                             8
#define AVR32_DMACA_LSTDSTREQREG_LSTDS_WE_MASK               0x0000ff00
#define AVR32_DMACA_LSTDSTREQREG_LSTDS_WE_OFFSET                      8
#define AVR32_DMACA_LSTDSTREQREG_LSTDS_WE_SIZE                        8
#define AVR32_DMACA_LSTDST_MASK                              0x000000ff
#define AVR32_DMACA_LSTDST_OFFSET                                     0
#define AVR32_DMACA_LSTDST_SIZE                                       8
#define AVR32_DMACA_LSTDS_WE                                          8
#define AVR32_DMACA_LSTDS_WE_MASK                            0x0000ff00
#define AVR32_DMACA_LSTDS_WE_OFFSET                                   8
#define AVR32_DMACA_LSTDS_WE_SIZE                                     8
#define AVR32_DMACA_LSTSRC                                            0
#define AVR32_DMACA_LSTSRCREQREG                             0x00000388
#define AVR32_DMACA_LSTSRCREQREG_LSTSRC                               0
#define AVR32_DMACA_LSTSRCREQREG_LSTSRC_MASK                 0x000000ff
#define AVR32_DMACA_LSTSRCREQREG_LSTSRC_OFFSET                        0
#define AVR32_DMACA_LSTSRCREQREG_LSTSRC_SIZE                          8
#define AVR32_DMACA_LSTSRCREQREG_LSTSR_WE                             8
#define AVR32_DMACA_LSTSRCREQREG_LSTSR_WE_MASK               0x0000ff00
#define AVR32_DMACA_LSTSRCREQREG_LSTSR_WE_OFFSET                      8
#define AVR32_DMACA_LSTSRCREQREG_LSTSR_WE_SIZE                        8
#define AVR32_DMACA_LSTSRC_MASK                              0x000000ff
#define AVR32_DMACA_LSTSRC_OFFSET                                     0
#define AVR32_DMACA_LSTSRC_SIZE                                       8
#define AVR32_DMACA_LSTSR_WE                                          8
#define AVR32_DMACA_LSTSR_WE_MASK                            0x0000ff00
#define AVR32_DMACA_LSTSR_WE_OFFSET                                   8
#define AVR32_DMACA_LSTSR_WE_SIZE                                     8
#define AVR32_DMACA_MASKBLOCK                                0x00000318
#define AVR32_DMACA_MASKBLOCK_INT_MASK0                               0
#define AVR32_DMACA_MASKBLOCK_INT_MASK0_MASK                 0x00000001
#define AVR32_DMACA_MASKBLOCK_INT_MASK0_OFFSET                        0
#define AVR32_DMACA_MASKBLOCK_INT_MASK0_SIZE                          1
#define AVR32_DMACA_MASKBLOCK_INT_MASK1                               1
#define AVR32_DMACA_MASKBLOCK_INT_MASK1_MASK                 0x00000002
#define AVR32_DMACA_MASKBLOCK_INT_MASK1_OFFSET                        1
#define AVR32_DMACA_MASKBLOCK_INT_MASK1_SIZE                          1
#define AVR32_DMACA_MASKBLOCK_INT_MASK2                               2
#define AVR32_DMACA_MASKBLOCK_INT_MASK2_MASK                 0x00000004
#define AVR32_DMACA_MASKBLOCK_INT_MASK2_OFFSET                        2
#define AVR32_DMACA_MASKBLOCK_INT_MASK2_SIZE                          1
#define AVR32_DMACA_MASKBLOCK_INT_M_WE0                               8
#define AVR32_DMACA_MASKBLOCK_INT_M_WE0_MASK                 0x00000100
#define AVR32_DMACA_MASKBLOCK_INT_M_WE0_OFFSET                        8
#define AVR32_DMACA_MASKBLOCK_INT_M_WE0_SIZE                          1
#define AVR32_DMACA_MASKBLOCK_INT_M_WE1                               9
#define AVR32_DMACA_MASKBLOCK_INT_M_WE1_MASK                 0x00000200
#define AVR32_DMACA_MASKBLOCK_INT_M_WE1_OFFSET                        9
#define AVR32_DMACA_MASKBLOCK_INT_M_WE1_SIZE                          1
#define AVR32_DMACA_MASKBLOCK_INT_M_WE2                              10
#define AVR32_DMACA_MASKBLOCK_INT_M_WE2_MASK                 0x00000400
#define AVR32_DMACA_MASKBLOCK_INT_M_WE2_OFFSET                       10
#define AVR32_DMACA_MASKBLOCK_INT_M_WE2_SIZE                          1
#define AVR32_DMACA_MASKDSTTRAN                              0x00000328
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK0                             0
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK0_MASK               0x00000001
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK0_OFFSET                      0
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK0_SIZE                        1
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK1                             1
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK1_MASK               0x00000002
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK1_OFFSET                      1
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK1_SIZE                        1
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK2                             2
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK2_MASK               0x00000004
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK2_OFFSET                      2
#define AVR32_DMACA_MASKDSTTRAN_INT_MASK2_SIZE                        1
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE0                             8
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE0_MASK               0x00000100
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE0_OFFSET                      8
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE0_SIZE                        1
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE1                             9
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE1_MASK               0x00000200
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE1_OFFSET                      9
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE1_SIZE                        1
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE2                            10
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE2_MASK               0x00000400
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE2_OFFSET                     10
#define AVR32_DMACA_MASKDSTTRAN_INT_M_WE2_SIZE                        1
#define AVR32_DMACA_MASKERR                                  0x00000330
#define AVR32_DMACA_MASKERR_INT_MASK0                                 0
#define AVR32_DMACA_MASKERR_INT_MASK0_MASK                   0x00000001
#define AVR32_DMACA_MASKERR_INT_MASK0_OFFSET                          0
#define AVR32_DMACA_MASKERR_INT_MASK0_SIZE                            1
#define AVR32_DMACA_MASKERR_INT_MASK1                                 1
#define AVR32_DMACA_MASKERR_INT_MASK1_MASK                   0x00000002
#define AVR32_DMACA_MASKERR_INT_MASK1_OFFSET                          1
#define AVR32_DMACA_MASKERR_INT_MASK1_SIZE                            1
#define AVR32_DMACA_MASKERR_INT_MASK2                                 2
#define AVR32_DMACA_MASKERR_INT_MASK2_MASK                   0x00000004
#define AVR32_DMACA_MASKERR_INT_MASK2_OFFSET                          2
#define AVR32_DMACA_MASKERR_INT_MASK2_SIZE                            1
#define AVR32_DMACA_MASKERR_INT_M_WE0                                 8
#define AVR32_DMACA_MASKERR_INT_M_WE0_MASK                   0x00000100
#define AVR32_DMACA_MASKERR_INT_M_WE0_OFFSET                          8
#define AVR32_DMACA_MASKERR_INT_M_WE0_SIZE                            1
#define AVR32_DMACA_MASKERR_INT_M_WE1                                 9
#define AVR32_DMACA_MASKERR_INT_M_WE1_MASK                   0x00000200
#define AVR32_DMACA_MASKERR_INT_M_WE1_OFFSET                          9
#define AVR32_DMACA_MASKERR_INT_M_WE1_SIZE                            1
#define AVR32_DMACA_MASKERR_INT_M_WE2                                10
#define AVR32_DMACA_MASKERR_INT_M_WE2_MASK                   0x00000400
#define AVR32_DMACA_MASKERR_INT_M_WE2_OFFSET                         10
#define AVR32_DMACA_MASKERR_INT_M_WE2_SIZE                            1
#define AVR32_DMACA_MASKSRCTRAN                              0x00000320
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK0                             0
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK0_MASK               0x00000001
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK0_OFFSET                      0
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK0_SIZE                        1
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK1                             1
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK1_MASK               0x00000002
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK1_OFFSET                      1
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK1_SIZE                        1
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK2                             2
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK2_MASK               0x00000004
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK2_OFFSET                      2
#define AVR32_DMACA_MASKSRCTRAN_INT_MASK2_SIZE                        1
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE0                             8
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE0_MASK               0x00000100
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE0_OFFSET                      8
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE0_SIZE                        1
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE1                             9
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE1_MASK               0x00000200
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE1_OFFSET                      9
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE1_SIZE                        1
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE2                            10
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE2_MASK               0x00000400
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE2_OFFSET                     10
#define AVR32_DMACA_MASKSRCTRAN_INT_M_WE2_SIZE                        1
#define AVR32_DMACA_MASKTFR                                  0x00000310
#define AVR32_DMACA_MASKTFR_INT_MASK0                                 0
#define AVR32_DMACA_MASKTFR_INT_MASK0_MASK                   0x00000001
#define AVR32_DMACA_MASKTFR_INT_MASK0_OFFSET                          0
#define AVR32_DMACA_MASKTFR_INT_MASK0_SIZE                            1
#define AVR32_DMACA_MASKTFR_INT_MASK1                                 1
#define AVR32_DMACA_MASKTFR_INT_MASK1_MASK                   0x00000002
#define AVR32_DMACA_MASKTFR_INT_MASK1_OFFSET                          1
#define AVR32_DMACA_MASKTFR_INT_MASK1_SIZE                            1
#define AVR32_DMACA_MASKTFR_INT_MASK2                                 2
#define AVR32_DMACA_MASKTFR_INT_MASK2_MASK                   0x00000004
#define AVR32_DMACA_MASKTFR_INT_MASK2_OFFSET                          2
#define AVR32_DMACA_MASKTFR_INT_MASK2_SIZE                            1
#define AVR32_DMACA_MASKTFR_INT_M_WE0                                 8
#define AVR32_DMACA_MASKTFR_INT_M_WE0_MASK                   0x00000100
#define AVR32_DMACA_MASKTFR_INT_M_WE0_OFFSET                          8
#define AVR32_DMACA_MASKTFR_INT_M_WE0_SIZE                            1
#define AVR32_DMACA_MASKTFR_INT_M_WE1                                 9
#define AVR32_DMACA_MASKTFR_INT_M_WE1_MASK                   0x00000200
#define AVR32_DMACA_MASKTFR_INT_M_WE1_OFFSET                          9
#define AVR32_DMACA_MASKTFR_INT_M_WE1_SIZE                            1
#define AVR32_DMACA_MASKTFR_INT_M_WE2                                10
#define AVR32_DMACA_MASKTFR_INT_M_WE2_MASK                   0x00000400
#define AVR32_DMACA_MASKTFR_INT_M_WE2_OFFSET                         10
#define AVR32_DMACA_MASKTFR_INT_M_WE2_SIZE                            1
#define AVR32_DMACA_MAX_ABRST                                        20
#define AVR32_DMACA_MAX_ABRST_MASK                           0x3ff00000
#define AVR32_DMACA_MAX_ABRST_OFFSET                                 20
#define AVR32_DMACA_MAX_ABRST_SIZE                                   10
#define AVR32_DMACA_PROTCTL                                           2
#define AVR32_DMACA_PROTCTL_MASK                             0x0000001c
#define AVR32_DMACA_PROTCTL_OFFSET                                    2
#define AVR32_DMACA_PROTCTL_SIZE                                      3
#define AVR32_DMACA_RAW0                                              0
#define AVR32_DMACA_RAW0_MASK                                0x00000001
#define AVR32_DMACA_RAW0_OFFSET                                       0
#define AVR32_DMACA_RAW0_SIZE                                         1
#define AVR32_DMACA_RAW1                                              1
#define AVR32_DMACA_RAW1_MASK                                0x00000002
#define AVR32_DMACA_RAW1_OFFSET                                       1
#define AVR32_DMACA_RAW1_SIZE                                         1
#define AVR32_DMACA_RAW2                                              2
#define AVR32_DMACA_RAW2_MASK                                0x00000004
#define AVR32_DMACA_RAW2_OFFSET                                       2
#define AVR32_DMACA_RAW2_SIZE                                         1
#define AVR32_DMACA_RAWBLOCK                                 0x000002c8
#define AVR32_DMACA_RAWBLOCK_RAW0                                     0
#define AVR32_DMACA_RAWBLOCK_RAW0_MASK                       0x00000001
#define AVR32_DMACA_RAWBLOCK_RAW0_OFFSET                              0
#define AVR32_DMACA_RAWBLOCK_RAW0_SIZE                                1
#define AVR32_DMACA_RAWBLOCK_RAW1                                     1
#define AVR32_DMACA_RAWBLOCK_RAW1_MASK                       0x00000002
#define AVR32_DMACA_RAWBLOCK_RAW1_OFFSET                              1
#define AVR32_DMACA_RAWBLOCK_RAW1_SIZE                                1
#define AVR32_DMACA_RAWBLOCK_RAW2                                     2
#define AVR32_DMACA_RAWBLOCK_RAW2_MASK                       0x00000004
#define AVR32_DMACA_RAWBLOCK_RAW2_OFFSET                              2
#define AVR32_DMACA_RAWBLOCK_RAW2_SIZE                                1
#define AVR32_DMACA_RAWDSTTRAN                               0x000002d8
#define AVR32_DMACA_RAWDSTTRAN_RAW0                                   0
#define AVR32_DMACA_RAWDSTTRAN_RAW0_MASK                     0x00000001
#define AVR32_DMACA_RAWDSTTRAN_RAW0_OFFSET                            0
#define AVR32_DMACA_RAWDSTTRAN_RAW0_SIZE                              1
#define AVR32_DMACA_RAWDSTTRAN_RAW1                                   1
#define AVR32_DMACA_RAWDSTTRAN_RAW1_MASK                     0x00000002
#define AVR32_DMACA_RAWDSTTRAN_RAW1_OFFSET                            1
#define AVR32_DMACA_RAWDSTTRAN_RAW1_SIZE                              1
#define AVR32_DMACA_RAWDSTTRAN_RAW2                                   2
#define AVR32_DMACA_RAWDSTTRAN_RAW2_MASK                     0x00000004
#define AVR32_DMACA_RAWDSTTRAN_RAW2_OFFSET                            2
#define AVR32_DMACA_RAWDSTTRAN_RAW2_SIZE                              1
#define AVR32_DMACA_RAWERR                                   0x000002e0
#define AVR32_DMACA_RAWERR_RAW0                                       0
#define AVR32_DMACA_RAWERR_RAW0_MASK                         0x00000001
#define AVR32_DMACA_RAWERR_RAW0_OFFSET                                0
#define AVR32_DMACA_RAWERR_RAW0_SIZE                                  1
#define AVR32_DMACA_RAWERR_RAW1                                       1
#define AVR32_DMACA_RAWERR_RAW1_MASK                         0x00000002
#define AVR32_DMACA_RAWERR_RAW1_OFFSET                                1
#define AVR32_DMACA_RAWERR_RAW1_SIZE                                  1
#define AVR32_DMACA_RAWERR_RAW2                                       2
#define AVR32_DMACA_RAWERR_RAW2_MASK                         0x00000004
#define AVR32_DMACA_RAWERR_RAW2_OFFSET                                2
#define AVR32_DMACA_RAWERR_RAW2_SIZE                                  1
#define AVR32_DMACA_RAWSRCTRAN                               0x000002d0
#define AVR32_DMACA_RAWSRCTRAN_RAW0                                   0
#define AVR32_DMACA_RAWSRCTRAN_RAW0_MASK                     0x00000001
#define AVR32_DMACA_RAWSRCTRAN_RAW0_OFFSET                            0
#define AVR32_DMACA_RAWSRCTRAN_RAW0_SIZE                              1
#define AVR32_DMACA_RAWSRCTRAN_RAW1                                   1
#define AVR32_DMACA_RAWSRCTRAN_RAW1_MASK                     0x00000002
#define AVR32_DMACA_RAWSRCTRAN_RAW1_OFFSET                            1
#define AVR32_DMACA_RAWSRCTRAN_RAW1_SIZE                              1
#define AVR32_DMACA_RAWSRCTRAN_RAW2                                   2
#define AVR32_DMACA_RAWSRCTRAN_RAW2_MASK                     0x00000004
#define AVR32_DMACA_RAWSRCTRAN_RAW2_OFFSET                            2
#define AVR32_DMACA_RAWSRCTRAN_RAW2_SIZE                              1
#define AVR32_DMACA_RAWTFR                                   0x000002c0
#define AVR32_DMACA_RAWTFR_RAW0                                       0
#define AVR32_DMACA_RAWTFR_RAW0_MASK                         0x00000001
#define AVR32_DMACA_RAWTFR_RAW0_OFFSET                                0
#define AVR32_DMACA_RAWTFR_RAW0_SIZE                                  1
#define AVR32_DMACA_RAWTFR_RAW1                                       1
#define AVR32_DMACA_RAWTFR_RAW1_MASK                         0x00000002
#define AVR32_DMACA_RAWTFR_RAW1_OFFSET                                1
#define AVR32_DMACA_RAWTFR_RAW1_SIZE                                  1
#define AVR32_DMACA_RAWTFR_RAW2                                       2
#define AVR32_DMACA_RAWTFR_RAW2_MASK                         0x00000004
#define AVR32_DMACA_RAWTFR_RAW2_OFFSET                                2
#define AVR32_DMACA_RAWTFR_RAW2_SIZE                                  1
#define AVR32_DMACA_RELOAD_DS                                        31
#define AVR32_DMACA_RELOAD_DS_MASK                           0x80000000
#define AVR32_DMACA_RELOAD_DS_OFFSET                                 31
#define AVR32_DMACA_RELOAD_DS_SIZE                                    1
#define AVR32_DMACA_RELOAD_SR                                        30
#define AVR32_DMACA_RELOAD_SR_MASK                           0x40000000
#define AVR32_DMACA_RELOAD_SR_OFFSET                                 30
#define AVR32_DMACA_RELOAD_SR_SIZE                                    1
#define AVR32_DMACA_REQDSTREG                                0x00000370
#define AVR32_DMACA_REQDSTREG_DST_REQ                                 0
#define AVR32_DMACA_REQDSTREG_DST_REQ_MASK                   0x000000ff
#define AVR32_DMACA_REQDSTREG_DST_REQ_OFFSET                          0
#define AVR32_DMACA_REQDSTREG_DST_REQ_SIZE                            8
#define AVR32_DMACA_REQDSTREG_REQ_WE                                  8
#define AVR32_DMACA_REQDSTREG_REQ_WE_MASK                    0x0000ff00
#define AVR32_DMACA_REQDSTREG_REQ_WE_OFFSET                           8
#define AVR32_DMACA_REQDSTREG_REQ_WE_SIZE                             8
#define AVR32_DMACA_REQSRCREG                                0x00000368
#define AVR32_DMACA_REQSRCREG_REQ_WE                                  8
#define AVR32_DMACA_REQSRCREG_REQ_WE_MASK                    0x0000ff00
#define AVR32_DMACA_REQSRCREG_REQ_WE_OFFSET                           8
#define AVR32_DMACA_REQSRCREG_REQ_WE_SIZE                             8
#define AVR32_DMACA_REQSRCREG_SRC_REQ                                 0
#define AVR32_DMACA_REQSRCREG_SRC_REQ_MASK                   0x000000ff
#define AVR32_DMACA_REQSRCREG_SRC_REQ_OFFSET                          0
#define AVR32_DMACA_REQSRCREG_SRC_REQ_SIZE                            8
#define AVR32_DMACA_REQ_WE                                            8
#define AVR32_DMACA_REQ_WE_MASK                              0x0000ff00
#define AVR32_DMACA_REQ_WE_OFFSET                                     8
#define AVR32_DMACA_REQ_WE_SIZE                                       8
#define AVR32_DMACA_SADD                                              0
#define AVR32_DMACA_SADD_MASK                                0xffffffff
#define AVR32_DMACA_SADD_OFFSET                                       0
#define AVR32_DMACA_SADD_SIZE                                        32
#define AVR32_DMACA_SAR0                                     0x00000000
#define AVR32_DMACA_SAR0_SADD                                         0
#define AVR32_DMACA_SAR0_SADD_MASK                           0xffffffff
#define AVR32_DMACA_SAR0_SADD_OFFSET                                  0
#define AVR32_DMACA_SAR0_SADD_SIZE                                   32
#define AVR32_DMACA_SAR1                                     0x00000058
#define AVR32_DMACA_SAR1_SADD                                         0
#define AVR32_DMACA_SAR1_SADD_MASK                           0xffffffff
#define AVR32_DMACA_SAR1_SADD_OFFSET                                  0
#define AVR32_DMACA_SAR1_SADD_SIZE                                   32
#define AVR32_DMACA_SAR2                                     0x000000b0
#define AVR32_DMACA_SAR2_SADD                                         0
#define AVR32_DMACA_SAR2_SADD_MASK                           0xffffffff
#define AVR32_DMACA_SAR2_SADD_OFFSET                                  0
#define AVR32_DMACA_SAR2_SADD_SIZE                                   32
#define AVR32_DMACA_SGLREQDSTREG                             0x00000380
#define AVR32_DMACA_SGLREQDSTREG_D_SG_REQ                             0
#define AVR32_DMACA_SGLREQDSTREG_D_SG_REQ_MASK               0x000000ff
#define AVR32_DMACA_SGLREQDSTREG_D_SG_REQ_OFFSET                      0
#define AVR32_DMACA_SGLREQDSTREG_D_SG_REQ_SIZE                        8
#define AVR32_DMACA_SGLREQDSTREG_REQ_WE                               8
#define AVR32_DMACA_SGLREQDSTREG_REQ_WE_MASK                 0x0000ff00
#define AVR32_DMACA_SGLREQDSTREG_REQ_WE_OFFSET                        8
#define AVR32_DMACA_SGLREQDSTREG_REQ_WE_SIZE                          8
#define AVR32_DMACA_SGLREQSRCREG                             0x00000378
#define AVR32_DMACA_SGLREQSRCREG_REQ_WE                               8
#define AVR32_DMACA_SGLREQSRCREG_REQ_WE_MASK                 0x0000ff00
#define AVR32_DMACA_SGLREQSRCREG_REQ_WE_OFFSET                        8
#define AVR32_DMACA_SGLREQSRCREG_REQ_WE_SIZE                          8
#define AVR32_DMACA_SGLREQSRCREG_S_SG_REQ                             0
#define AVR32_DMACA_SGLREQSRCREG_S_SG_REQ_MASK               0x000000ff
#define AVR32_DMACA_SGLREQSRCREG_S_SG_REQ_OFFSET                      0
#define AVR32_DMACA_SGLREQSRCREG_S_SG_REQ_SIZE                        8
#define AVR32_DMACA_SINC                                              9
#define AVR32_DMACA_SINC_MASK                                0x00000600
#define AVR32_DMACA_SINC_OFFSET                                       9
#define AVR32_DMACA_SINC_SIZE                                         2
#define AVR32_DMACA_SMS                                              25
#define AVR32_DMACA_SMS_MASK                                 0x06000000
#define AVR32_DMACA_SMS_OFFSET                                       25
#define AVR32_DMACA_SMS_SIZE                                          2
#define AVR32_DMACA_SRCT                                              2
#define AVR32_DMACA_SRCT_MASK                                0x00000004
#define AVR32_DMACA_SRCT_OFFSET                                       2
#define AVR32_DMACA_SRCT_SIZE                                         1
#define AVR32_DMACA_SRC_MSIZE                                        14
#define AVR32_DMACA_SRC_MSIZE_MASK                           0x0001c000
#define AVR32_DMACA_SRC_MSIZE_OFFSET                                 14
#define AVR32_DMACA_SRC_MSIZE_SIZE                                    3
#define AVR32_DMACA_SRC_PER                                           7
#define AVR32_DMACA_SRC_PER_MASK                             0x00000780
#define AVR32_DMACA_SRC_PER_OFFSET                                    7
#define AVR32_DMACA_SRC_PER_SIZE                                      4
#define AVR32_DMACA_SRC_REQ                                           0
#define AVR32_DMACA_SRC_REQ_MASK                             0x000000ff
#define AVR32_DMACA_SRC_REQ_OFFSET                                    0
#define AVR32_DMACA_SRC_REQ_SIZE                                      8
#define AVR32_DMACA_SRC_TR_WIDTH                                      4
#define AVR32_DMACA_SRC_TR_WIDTH_MASK                        0x00000070
#define AVR32_DMACA_SRC_TR_WIDTH_OFFSET                               4
#define AVR32_DMACA_SRC_TR_WIDTH_SIZE                                 3
#define AVR32_DMACA_SR_HS_POL                                        19
#define AVR32_DMACA_SR_HS_POL_MASK                           0x00080000
#define AVR32_DMACA_SR_HS_POL_OFFSET                                 19
#define AVR32_DMACA_SR_HS_POL_SIZE                                    1
#define AVR32_DMACA_SS_UPD_EN                                         6
#define AVR32_DMACA_SS_UPD_EN_MASK                           0x00000040
#define AVR32_DMACA_SS_UPD_EN_OFFSET                                  6
#define AVR32_DMACA_SS_UPD_EN_SIZE                                    1
#define AVR32_DMACA_STATUS0                                           0
#define AVR32_DMACA_STATUS0_MASK                             0x00000001
#define AVR32_DMACA_STATUS0_OFFSET                                    0
#define AVR32_DMACA_STATUS0_SIZE                                      1
#define AVR32_DMACA_STATUS1                                           1
#define AVR32_DMACA_STATUS1_MASK                             0x00000002
#define AVR32_DMACA_STATUS1_OFFSET                                    1
#define AVR32_DMACA_STATUS1_SIZE                                      1
#define AVR32_DMACA_STATUS2                                           2
#define AVR32_DMACA_STATUS2_MASK                             0x00000004
#define AVR32_DMACA_STATUS2_OFFSET                                    2
#define AVR32_DMACA_STATUS2_SIZE                                      1
#define AVR32_DMACA_STATUSBLOCK                              0x000002f0
#define AVR32_DMACA_STATUSBLOCK_STATUS0                               0
#define AVR32_DMACA_STATUSBLOCK_STATUS0_MASK                 0x00000001
#define AVR32_DMACA_STATUSBLOCK_STATUS0_OFFSET                        0
#define AVR32_DMACA_STATUSBLOCK_STATUS0_SIZE                          1
#define AVR32_DMACA_STATUSBLOCK_STATUS1                               1
#define AVR32_DMACA_STATUSBLOCK_STATUS1_MASK                 0x00000002
#define AVR32_DMACA_STATUSBLOCK_STATUS1_OFFSET                        1
#define AVR32_DMACA_STATUSBLOCK_STATUS1_SIZE                          1
#define AVR32_DMACA_STATUSBLOCK_STATUS2                               2
#define AVR32_DMACA_STATUSBLOCK_STATUS2_MASK                 0x00000004
#define AVR32_DMACA_STATUSBLOCK_STATUS2_OFFSET                        2
#define AVR32_DMACA_STATUSBLOCK_STATUS2_SIZE                          1
#define AVR32_DMACA_STATUSDSTTRAN                            0x00000300
#define AVR32_DMACA_STATUSDSTTRAN_STATUS0                             0
#define AVR32_DMACA_STATUSDSTTRAN_STATUS0_MASK               0x00000001
#define AVR32_DMACA_STATUSDSTTRAN_STATUS0_OFFSET                      0
#define AVR32_DMACA_STATUSDSTTRAN_STATUS0_SIZE                        1
#define AVR32_DMACA_STATUSDSTTRAN_STATUS1                             1
#define AVR32_DMACA_STATUSDSTTRAN_STATUS1_MASK               0x00000002
#define AVR32_DMACA_STATUSDSTTRAN_STATUS1_OFFSET                      1
#define AVR32_DMACA_STATUSDSTTRAN_STATUS1_SIZE                        1
#define AVR32_DMACA_STATUSDSTTRAN_STATUS2                             2
#define AVR32_DMACA_STATUSDSTTRAN_STATUS2_MASK               0x00000004
#define AVR32_DMACA_STATUSDSTTRAN_STATUS2_OFFSET                      2
#define AVR32_DMACA_STATUSDSTTRAN_STATUS2_SIZE                        1
#define AVR32_DMACA_STATUSERR                                0x00000308
#define AVR32_DMACA_STATUSERR_STATUS0                                 0
#define AVR32_DMACA_STATUSERR_STATUS0_MASK                   0x00000001
#define AVR32_DMACA_STATUSERR_STATUS0_OFFSET                          0
#define AVR32_DMACA_STATUSERR_STATUS0_SIZE                            1
#define AVR32_DMACA_STATUSERR_STATUS1                                 1
#define AVR32_DMACA_STATUSERR_STATUS1_MASK                   0x00000002
#define AVR32_DMACA_STATUSERR_STATUS1_OFFSET                          1
#define AVR32_DMACA_STATUSERR_STATUS1_SIZE                            1
#define AVR32_DMACA_STATUSERR_STATUS2                                 2
#define AVR32_DMACA_STATUSERR_STATUS2_MASK                   0x00000004
#define AVR32_DMACA_STATUSERR_STATUS2_OFFSET                          2
#define AVR32_DMACA_STATUSERR_STATUS2_SIZE                            1
#define AVR32_DMACA_STATUSINT                                0x00000360
#define AVR32_DMACA_STATUSINT_BLOCK                                   1
#define AVR32_DMACA_STATUSINT_BLOCK_MASK                     0x00000002
#define AVR32_DMACA_STATUSINT_BLOCK_OFFSET                            1
#define AVR32_DMACA_STATUSINT_BLOCK_SIZE                              1
#define AVR32_DMACA_STATUSINT_DSTT                                    3
#define AVR32_DMACA_STATUSINT_DSTT_MASK                      0x00000008
#define AVR32_DMACA_STATUSINT_DSTT_OFFSET                             3
#define AVR32_DMACA_STATUSINT_DSTT_SIZE                               1
#define AVR32_DMACA_STATUSINT_ERR                                     4
#define AVR32_DMACA_STATUSINT_ERR_MASK                       0x00000010
#define AVR32_DMACA_STATUSINT_ERR_OFFSET                              4
#define AVR32_DMACA_STATUSINT_ERR_SIZE                                1
#define AVR32_DMACA_STATUSINT_SRCT                                    2
#define AVR32_DMACA_STATUSINT_SRCT_MASK                      0x00000004
#define AVR32_DMACA_STATUSINT_SRCT_OFFSET                             2
#define AVR32_DMACA_STATUSINT_SRCT_SIZE                               1
#define AVR32_DMACA_STATUSINT_TFR                                     0
#define AVR32_DMACA_STATUSINT_TFR_MASK                       0x00000001
#define AVR32_DMACA_STATUSINT_TFR_OFFSET                              0
#define AVR32_DMACA_STATUSINT_TFR_SIZE                                1
#define AVR32_DMACA_STATUSSRCTRAN                            0x000002f8
#define AVR32_DMACA_STATUSSRCTRAN_STATUS0                             0
#define AVR32_DMACA_STATUSSRCTRAN_STATUS0_MASK               0x00000001
#define AVR32_DMACA_STATUSSRCTRAN_STATUS0_OFFSET                      0
#define AVR32_DMACA_STATUSSRCTRAN_STATUS0_SIZE                        1
#define AVR32_DMACA_STATUSSRCTRAN_STATUS1                             1
#define AVR32_DMACA_STATUSSRCTRAN_STATUS1_MASK               0x00000002
#define AVR32_DMACA_STATUSSRCTRAN_STATUS1_OFFSET                      1
#define AVR32_DMACA_STATUSSRCTRAN_STATUS1_SIZE                        1
#define AVR32_DMACA_STATUSSRCTRAN_STATUS2                             2
#define AVR32_DMACA_STATUSSRCTRAN_STATUS2_MASK               0x00000004
#define AVR32_DMACA_STATUSSRCTRAN_STATUS2_OFFSET                      2
#define AVR32_DMACA_STATUSSRCTRAN_STATUS2_SIZE                        1
#define AVR32_DMACA_STATUSTFR                                0x000002e8
#define AVR32_DMACA_STATUSTFR_STATUS0                                 0
#define AVR32_DMACA_STATUSTFR_STATUS0_MASK                   0x00000001
#define AVR32_DMACA_STATUSTFR_STATUS0_OFFSET                          0
#define AVR32_DMACA_STATUSTFR_STATUS0_SIZE                            1
#define AVR32_DMACA_STATUSTFR_STATUS1                                 1
#define AVR32_DMACA_STATUSTFR_STATUS1_MASK                   0x00000002
#define AVR32_DMACA_STATUSTFR_STATUS1_OFFSET                          1
#define AVR32_DMACA_STATUSTFR_STATUS1_SIZE                            1
#define AVR32_DMACA_STATUSTFR_STATUS2                                 2
#define AVR32_DMACA_STATUSTFR_STATUS2_MASK                   0x00000004
#define AVR32_DMACA_STATUSTFR_STATUS2_OFFSET                          2
#define AVR32_DMACA_STATUSTFR_STATUS2_SIZE                            1
#define AVR32_DMACA_S_GATH_EN                                        17
#define AVR32_DMACA_S_GATH_EN_MASK                           0x00020000
#define AVR32_DMACA_S_GATH_EN_OFFSET                                 17
#define AVR32_DMACA_S_GATH_EN_SIZE                                    1
#define AVR32_DMACA_S_SG_REQ                                          0
#define AVR32_DMACA_S_SG_REQ_MASK                            0x000000ff
#define AVR32_DMACA_S_SG_REQ_OFFSET                                   0
#define AVR32_DMACA_S_SG_REQ_SIZE                                     8
#define AVR32_DMACA_TEST_SLV_IF                                       0
#define AVR32_DMACA_TEST_SLV_IF_MASK                         0x00000001
#define AVR32_DMACA_TEST_SLV_IF_OFFSET                                0
#define AVR32_DMACA_TEST_SLV_IF_SIZE                                  1
#define AVR32_DMACA_TFR                                               0
#define AVR32_DMACA_TFR_MASK                                 0x00000001
#define AVR32_DMACA_TFR_OFFSET                                        0
#define AVR32_DMACA_TFR_SIZE                                          1
#define AVR32_DMACA_TT_FC                                            20
#define AVR32_DMACA_TT_FC_MASK                               0x00700000
#define AVR32_DMACA_TT_FC_OFFSET                                     20
#define AVR32_DMACA_TT_FC_SIZE                                        3




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_dmaca_llp0_t {
    unsigned int loc             :30;
    unsigned int lms             : 2;
} avr32_dmaca_llp0_t;



typedef struct avr32_dmaca_ctl0l_t {
    unsigned int                 : 3;
    unsigned int llp_s_en        : 1;
    unsigned int llp_d_en        : 1;
    unsigned int sms             : 2;
    unsigned int dms             : 2;
    unsigned int tt_fc           : 3;
    unsigned int                 : 1;
    unsigned int d_scat_en       : 1;
    unsigned int s_gath_en       : 1;
    unsigned int src_msize       : 3;
    unsigned int dst_msize       : 3;
    unsigned int sinc            : 2;
    unsigned int dinc            : 2;
    unsigned int src_tr_width    : 3;
    unsigned int dst_tr_width    : 3;
    unsigned int int_en          : 1;
} avr32_dmaca_ctl0l_t;



typedef struct avr32_dmaca_ctl0h_t {
    unsigned int                 :19;
    unsigned int done            : 1;
    unsigned int block_ts        :12;
} avr32_dmaca_ctl0h_t;



typedef struct avr32_dmaca_cfg0l_t {
    unsigned int reload_ds       : 1;
    unsigned int reload_sr       : 1;
    unsigned int max_abrst       :10;
    unsigned int sr_hs_pol       : 1;
    unsigned int ds_hs_pol       : 1;
    unsigned int lock_b          : 1;
    unsigned int lock_ch         : 1;
    unsigned int lock_b_l        : 2;
    unsigned int lock_ch_l       : 2;
    unsigned int hs_sel_src      : 1;
    unsigned int hs_sel_dst      : 1;
    unsigned int fifo_empty      : 1;
    unsigned int ch_susp         : 1;
    unsigned int ch_prior        : 3;
    unsigned int                 : 5;
} avr32_dmaca_cfg0l_t;



typedef struct avr32_dmaca_cfg0h_t {
    unsigned int                 :17;
    unsigned int dest_per        : 4;
    unsigned int src_per         : 4;
    unsigned int ss_upd_en       : 1;
    unsigned int ds_upd_en       : 1;
    unsigned int protctl         : 3;
    unsigned int fifo_mode       : 1;
    unsigned int fcmode          : 1;
} avr32_dmaca_cfg0h_t;



typedef struct avr32_dmaca_llp1_t {
    unsigned int loc             :30;
    unsigned int lms             : 2;
} avr32_dmaca_llp1_t;



typedef struct avr32_dmaca_ctl1l_t {
    unsigned int                 : 3;
    unsigned int llp_s_en        : 1;
    unsigned int llp_d_en        : 1;
    unsigned int sms             : 2;
    unsigned int dms             : 2;
    unsigned int tt_fc           : 3;
    unsigned int                 : 1;
    unsigned int d_scat_en       : 1;
    unsigned int s_gath_en       : 1;
    unsigned int src_msize       : 3;
    unsigned int dst_msize       : 3;
    unsigned int sinc            : 2;
    unsigned int dinc            : 2;
    unsigned int src_tr_width    : 3;
    unsigned int dst_tr_width    : 3;
    unsigned int int_en          : 1;
} avr32_dmaca_ctl1l_t;



typedef struct avr32_dmaca_ctl1h_t {
    unsigned int                 :19;
    unsigned int done            : 1;
    unsigned int block_ts        :12;
} avr32_dmaca_ctl1h_t;



typedef struct avr32_dmaca_cfg1l_t {
    unsigned int reload_ds       : 1;
    unsigned int reload_sr       : 1;
    unsigned int max_abrst       :10;
    unsigned int sr_hs_pol       : 1;
    unsigned int ds_hs_pol       : 1;
    unsigned int lock_b          : 1;
    unsigned int lock_ch         : 1;
    unsigned int lock_b_l        : 2;
    unsigned int lock_ch_l       : 2;
    unsigned int hs_sel_src      : 1;
    unsigned int hs_sel_dst      : 1;
    unsigned int fifo_empty      : 1;
    unsigned int ch_susp         : 1;
    unsigned int ch_prior        : 3;
    unsigned int                 : 5;
} avr32_dmaca_cfg1l_t;



typedef struct avr32_dmaca_cfg1h_t {
    unsigned int                 :17;
    unsigned int dest_per        : 4;
    unsigned int src_per         : 4;
    unsigned int ss_upd_en       : 1;
    unsigned int ds_upd_en       : 1;
    unsigned int protctl         : 3;
    unsigned int fifo_mode       : 1;
    unsigned int fcmode          : 1;
} avr32_dmaca_cfg1h_t;



typedef struct avr32_dmaca_llp2_t {
    unsigned int loc             :30;
    unsigned int lms             : 2;
} avr32_dmaca_llp2_t;



typedef struct avr32_dmaca_ctl2l_t {
    unsigned int                 : 3;
    unsigned int llp_s_en        : 1;
    unsigned int llp_d_en        : 1;
    unsigned int sms             : 2;
    unsigned int dms             : 2;
    unsigned int tt_fc           : 3;
    unsigned int                 : 1;
    unsigned int d_scat_en       : 1;
    unsigned int s_gath_en       : 1;
    unsigned int src_msize       : 3;
    unsigned int dst_msize       : 3;
    unsigned int sinc            : 2;
    unsigned int dinc            : 2;
    unsigned int src_tr_width    : 3;
    unsigned int dst_tr_width    : 3;
    unsigned int int_en          : 1;
} avr32_dmaca_ctl2l_t;



typedef struct avr32_dmaca_ctl2h_t {
    unsigned int                 :19;
    unsigned int done            : 1;
    unsigned int block_ts        :12;
} avr32_dmaca_ctl2h_t;



typedef struct avr32_dmaca_cfg2l_t {
    unsigned int reload_ds       : 1;
    unsigned int reload_sr       : 1;
    unsigned int max_abrst       :10;
    unsigned int sr_hs_pol       : 1;
    unsigned int ds_hs_pol       : 1;
    unsigned int lock_b          : 1;
    unsigned int lock_ch         : 1;
    unsigned int lock_b_l        : 2;
    unsigned int lock_ch_l       : 2;
    unsigned int hs_sel_src      : 1;
    unsigned int hs_sel_dst      : 1;
    unsigned int fifo_empty      : 1;
    unsigned int ch_susp         : 1;
    unsigned int ch_prior        : 3;
    unsigned int                 : 5;
} avr32_dmaca_cfg2l_t;



typedef struct avr32_dmaca_cfg2h_t {
    unsigned int                 :17;
    unsigned int dest_per        : 4;
    unsigned int src_per         : 4;
    unsigned int ss_upd_en       : 1;
    unsigned int ds_upd_en       : 1;
    unsigned int protctl         : 3;
    unsigned int fifo_mode       : 1;
    unsigned int fcmode          : 1;
} avr32_dmaca_cfg2h_t;



typedef struct avr32_dmaca_rawtfr_t {
    unsigned int                 :29;
    unsigned int raw2            : 1;
    unsigned int raw1            : 1;
    unsigned int raw0            : 1;
} avr32_dmaca_rawtfr_t;



typedef struct avr32_dmaca_rawblock_t {
    unsigned int                 :29;
    unsigned int raw2            : 1;
    unsigned int raw1            : 1;
    unsigned int raw0            : 1;
} avr32_dmaca_rawblock_t;



typedef struct avr32_dmaca_rawsrctran_t {
    unsigned int                 :29;
    unsigned int raw2            : 1;
    unsigned int raw1            : 1;
    unsigned int raw0            : 1;
} avr32_dmaca_rawsrctran_t;



typedef struct avr32_dmaca_rawdsttran_t {
    unsigned int                 :29;
    unsigned int raw2            : 1;
    unsigned int raw1            : 1;
    unsigned int raw0            : 1;
} avr32_dmaca_rawdsttran_t;



typedef struct avr32_dmaca_rawerr_t {
    unsigned int                 :29;
    unsigned int raw2            : 1;
    unsigned int raw1            : 1;
    unsigned int raw0            : 1;
} avr32_dmaca_rawerr_t;



typedef struct avr32_dmaca_statustfr_t {
    unsigned int                 :29;
    unsigned int status2         : 1;
    unsigned int status1         : 1;
    unsigned int status0         : 1;
} avr32_dmaca_statustfr_t;



typedef struct avr32_dmaca_statusblock_t {
    unsigned int                 :29;
    unsigned int status2         : 1;
    unsigned int status1         : 1;
    unsigned int status0         : 1;
} avr32_dmaca_statusblock_t;



typedef struct avr32_dmaca_statussrctran_t {
    unsigned int                 :29;
    unsigned int status2         : 1;
    unsigned int status1         : 1;
    unsigned int status0         : 1;
} avr32_dmaca_statussrctran_t;



typedef struct avr32_dmaca_statusdsttran_t {
    unsigned int                 :29;
    unsigned int status2         : 1;
    unsigned int status1         : 1;
    unsigned int status0         : 1;
} avr32_dmaca_statusdsttran_t;



typedef struct avr32_dmaca_statuserr_t {
    unsigned int                 :29;
    unsigned int status2         : 1;
    unsigned int status1         : 1;
    unsigned int status0         : 1;
} avr32_dmaca_statuserr_t;



typedef struct avr32_dmaca_masktfr_t {
    unsigned int                 :21;
    unsigned int int_m_we2       : 1;
    unsigned int int_m_we1       : 1;
    unsigned int int_m_we0       : 1;
    unsigned int                 : 5;
    unsigned int int_mask2       : 1;
    unsigned int int_mask1       : 1;
    unsigned int int_mask0       : 1;
} avr32_dmaca_masktfr_t;



typedef struct avr32_dmaca_maskblock_t {
    unsigned int                 :21;
    unsigned int int_m_we2       : 1;
    unsigned int int_m_we1       : 1;
    unsigned int int_m_we0       : 1;
    unsigned int                 : 5;
    unsigned int int_mask2       : 1;
    unsigned int int_mask1       : 1;
    unsigned int int_mask0       : 1;
} avr32_dmaca_maskblock_t;



typedef struct avr32_dmaca_masksrctran_t {
    unsigned int                 :21;
    unsigned int int_m_we2       : 1;
    unsigned int int_m_we1       : 1;
    unsigned int int_m_we0       : 1;
    unsigned int                 : 5;
    unsigned int int_mask2       : 1;
    unsigned int int_mask1       : 1;
    unsigned int int_mask0       : 1;
} avr32_dmaca_masksrctran_t;



typedef struct avr32_dmaca_maskdsttran_t {
    unsigned int                 :21;
    unsigned int int_m_we2       : 1;
    unsigned int int_m_we1       : 1;
    unsigned int int_m_we0       : 1;
    unsigned int                 : 5;
    unsigned int int_mask2       : 1;
    unsigned int int_mask1       : 1;
    unsigned int int_mask0       : 1;
} avr32_dmaca_maskdsttran_t;



typedef struct avr32_dmaca_maskerr_t {
    unsigned int                 :21;
    unsigned int int_m_we2       : 1;
    unsigned int int_m_we1       : 1;
    unsigned int int_m_we0       : 1;
    unsigned int                 : 5;
    unsigned int int_mask2       : 1;
    unsigned int int_mask1       : 1;
    unsigned int int_mask0       : 1;
} avr32_dmaca_maskerr_t;



typedef struct avr32_dmaca_cleartfr_t {
    unsigned int                 :29;
    unsigned int clear2          : 1;
    unsigned int clear1          : 1;
    unsigned int clear0          : 1;
} avr32_dmaca_cleartfr_t;



typedef struct avr32_dmaca_clearblock_t {
    unsigned int                 :29;
    unsigned int clear2          : 1;
    unsigned int clear1          : 1;
    unsigned int clear0          : 1;
} avr32_dmaca_clearblock_t;



typedef struct avr32_dmaca_clearsrctran_t {
    unsigned int                 :29;
    unsigned int clear2          : 1;
    unsigned int clear1          : 1;
    unsigned int clear0          : 1;
} avr32_dmaca_clearsrctran_t;



typedef struct avr32_dmaca_cleardsttran_t {
    unsigned int                 :29;
    unsigned int clear2          : 1;
    unsigned int clear1          : 1;
    unsigned int clear0          : 1;
} avr32_dmaca_cleardsttran_t;



typedef struct avr32_dmaca_clearerr_t {
    unsigned int                 :29;
    unsigned int clear2          : 1;
    unsigned int clear1          : 1;
    unsigned int clear0          : 1;
} avr32_dmaca_clearerr_t;



typedef struct avr32_dmaca_statusint_t {
    unsigned int                 :27;
    unsigned int err             : 1;
    unsigned int dstt            : 1;
    unsigned int srct            : 1;
    unsigned int block           : 1;
    unsigned int tfr             : 1;
} avr32_dmaca_statusint_t;



typedef struct avr32_dmaca_reqsrcreg_t {
    unsigned int                 :16;
    unsigned int req_we          : 8;
    unsigned int src_req         : 8;
} avr32_dmaca_reqsrcreg_t;



typedef struct avr32_dmaca_reqdstreg_t {
    unsigned int                 :16;
    unsigned int req_we          : 8;
    unsigned int dst_req         : 8;
} avr32_dmaca_reqdstreg_t;



typedef struct avr32_dmaca_sglreqsrcreg_t {
    unsigned int                 :16;
    unsigned int req_we          : 8;
    unsigned int s_sg_req        : 8;
} avr32_dmaca_sglreqsrcreg_t;



typedef struct avr32_dmaca_sglreqdstreg_t {
    unsigned int                 :16;
    unsigned int req_we          : 8;
    unsigned int d_sg_req        : 8;
} avr32_dmaca_sglreqdstreg_t;



typedef struct avr32_dmaca_lstsrcreqreg_t {
    unsigned int                 :16;
    unsigned int lstsr_we        : 8;
    unsigned int lstsrc          : 8;
} avr32_dmaca_lstsrcreqreg_t;



typedef struct avr32_dmaca_lstdstreqreg_t {
    unsigned int                 :16;
    unsigned int lstds_we        : 8;
    unsigned int lstdst          : 8;
} avr32_dmaca_lstdstreqreg_t;



typedef struct avr32_dmaca_dmacfgreg_t {
    unsigned int                 :31;
    unsigned int dma_en          : 1;
} avr32_dmaca_dmacfgreg_t;



typedef struct avr32_dmaca_chenreg_t {
    unsigned int                 :16;
    unsigned int ch_en_we        : 8;
    unsigned int ch_en           : 8;
} avr32_dmaca_chenreg_t;



typedef struct avr32_dmaca_dmatestreg_t {
    unsigned int                 :31;
    unsigned int test_slv_if     : 1;
} avr32_dmaca_dmatestreg_t;



typedef struct avr32_dmaca_t {
          unsigned long                  sar0      ;//0x0000
          unsigned int                   :32       ;//0x0004
          unsigned long                  dar0      ;//0x0008
          unsigned int                   :32       ;//0x000c
  union {
          unsigned long                  llp0      ;//0x0010
          avr32_dmaca_llp0_t             LLP0      ;
  };
          unsigned int                   :32       ;//0x0014
  union {
          unsigned long                  ctl0l     ;//0x0018
          avr32_dmaca_ctl0l_t            CTL0L     ;
  };
  union {
          unsigned long                  ctl0h     ;//0x001c
          avr32_dmaca_ctl0h_t            CTL0H     ;
  };
          unsigned int                   :32       ;//0x0020
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
          unsigned long                  cfg0l     ;//0x0040
          avr32_dmaca_cfg0l_t            CFG0L     ;
  };
  union {
          unsigned long                  cfg0h     ;//0x0044
          avr32_dmaca_cfg0h_t            CFG0H     ;
  };
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
          unsigned int                   :32       ;//0x0050
          unsigned int                   :32       ;//0x0054
          unsigned long                  sar1      ;//0x0058
          unsigned int                   :32       ;//0x005c
          unsigned long                  dar1      ;//0x0060
          unsigned int                   :32       ;//0x0064
  union {
          unsigned long                  llp1      ;//0x0068
          avr32_dmaca_llp1_t             LLP1      ;
  };
          unsigned int                   :32       ;//0x006c
  union {
          unsigned long                  ctl1l     ;//0x0070
          avr32_dmaca_ctl1l_t            CTL1L     ;
  };
  union {
          unsigned long                  ctl1h     ;//0x0074
          avr32_dmaca_ctl1h_t            CTL1H     ;
  };
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
          unsigned int                   :32       ;//0x0080
          unsigned int                   :32       ;//0x0084
          unsigned int                   :32       ;//0x0088
          unsigned int                   :32       ;//0x008c
          unsigned int                   :32       ;//0x0090
          unsigned int                   :32       ;//0x0094
  union {
          unsigned long                  cfg1l     ;//0x0098
          avr32_dmaca_cfg1l_t            CFG1L     ;
  };
  union {
          unsigned long                  cfg1h     ;//0x009c
          avr32_dmaca_cfg1h_t            CFG1H     ;
  };
          unsigned int                   :32       ;//0x00a0
          unsigned int                   :32       ;//0x00a4
          unsigned int                   :32       ;//0x00a8
          unsigned int                   :32       ;//0x00ac
          unsigned long                  sar2      ;//0x00b0
          unsigned int                   :32       ;//0x00b4
          unsigned long                  dar2      ;//0x00b8
          unsigned int                   :32       ;//0x00bc
  union {
          unsigned long                  llp2      ;//0x00c0
          avr32_dmaca_llp2_t             LLP2      ;
  };
          unsigned int                   :32       ;//0x00c4
  union {
          unsigned long                  ctl2l     ;//0x00c8
          avr32_dmaca_ctl2l_t            CTL2L     ;
  };
  union {
          unsigned long                  ctl2h     ;//0x00cc
          avr32_dmaca_ctl2h_t            CTL2H     ;
  };
          unsigned int                   :32       ;//0x00d0
          unsigned int                   :32       ;//0x00d4
          unsigned int                   :32       ;//0x00d8
          unsigned int                   :32       ;//0x00dc
          unsigned int                   :32       ;//0x00e0
          unsigned int                   :32       ;//0x00e4
          unsigned int                   :32       ;//0x00e8
          unsigned int                   :32       ;//0x00ec
  union {
          unsigned long                  cfg2l     ;//0x00f0
          avr32_dmaca_cfg2l_t            CFG2L     ;
  };
  union {
          unsigned long                  cfg2h     ;//0x00f4
          avr32_dmaca_cfg2h_t            CFG2H     ;
  };
          unsigned int                   :32       ;//0x00f8
          unsigned int                   :32       ;//0x00fc
          unsigned int                   :32       ;//0x0100
          unsigned int                   :32       ;//0x0104
          unsigned int                   :32       ;//0x0108
          unsigned int                   :32       ;//0x010c
          unsigned int                   :32       ;//0x0110
          unsigned int                   :32       ;//0x0114
          unsigned int                   :32       ;//0x0118
          unsigned int                   :32       ;//0x011c
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
          unsigned int                   :32       ;//0x0130
          unsigned int                   :32       ;//0x0134
          unsigned int                   :32       ;//0x0138
          unsigned int                   :32       ;//0x013c
          unsigned int                   :32       ;//0x0140
          unsigned int                   :32       ;//0x0144
          unsigned int                   :32       ;//0x0148
          unsigned int                   :32       ;//0x014c
          unsigned int                   :32       ;//0x0150
          unsigned int                   :32       ;//0x0154
          unsigned int                   :32       ;//0x0158
          unsigned int                   :32       ;//0x015c
          unsigned int                   :32       ;//0x0160
          unsigned int                   :32       ;//0x0164
          unsigned int                   :32       ;//0x0168
          unsigned int                   :32       ;//0x016c
          unsigned int                   :32       ;//0x0170
          unsigned int                   :32       ;//0x0174
          unsigned int                   :32       ;//0x0178
          unsigned int                   :32       ;//0x017c
          unsigned int                   :32       ;//0x0180
          unsigned int                   :32       ;//0x0184
          unsigned int                   :32       ;//0x0188
          unsigned int                   :32       ;//0x018c
          unsigned int                   :32       ;//0x0190
          unsigned int                   :32       ;//0x0194
          unsigned int                   :32       ;//0x0198
          unsigned int                   :32       ;//0x019c
          unsigned int                   :32       ;//0x01a0
          unsigned int                   :32       ;//0x01a4
          unsigned int                   :32       ;//0x01a8
          unsigned int                   :32       ;//0x01ac
          unsigned int                   :32       ;//0x01b0
          unsigned int                   :32       ;//0x01b4
          unsigned int                   :32       ;//0x01b8
          unsigned int                   :32       ;//0x01bc
          unsigned int                   :32       ;//0x01c0
          unsigned int                   :32       ;//0x01c4
          unsigned int                   :32       ;//0x01c8
          unsigned int                   :32       ;//0x01cc
          unsigned int                   :32       ;//0x01d0
          unsigned int                   :32       ;//0x01d4
          unsigned int                   :32       ;//0x01d8
          unsigned int                   :32       ;//0x01dc
          unsigned int                   :32       ;//0x01e0
          unsigned int                   :32       ;//0x01e4
          unsigned int                   :32       ;//0x01e8
          unsigned int                   :32       ;//0x01ec
          unsigned int                   :32       ;//0x01f0
          unsigned int                   :32       ;//0x01f4
          unsigned int                   :32       ;//0x01f8
          unsigned int                   :32       ;//0x01fc
          unsigned int                   :32       ;//0x0200
          unsigned int                   :32       ;//0x0204
          unsigned int                   :32       ;//0x0208
          unsigned int                   :32       ;//0x020c
          unsigned int                   :32       ;//0x0210
          unsigned int                   :32       ;//0x0214
          unsigned int                   :32       ;//0x0218
          unsigned int                   :32       ;//0x021c
          unsigned int                   :32       ;//0x0220
          unsigned int                   :32       ;//0x0224
          unsigned int                   :32       ;//0x0228
          unsigned int                   :32       ;//0x022c
          unsigned int                   :32       ;//0x0230
          unsigned int                   :32       ;//0x0234
          unsigned int                   :32       ;//0x0238
          unsigned int                   :32       ;//0x023c
          unsigned int                   :32       ;//0x0240
          unsigned int                   :32       ;//0x0244
          unsigned int                   :32       ;//0x0248
          unsigned int                   :32       ;//0x024c
          unsigned int                   :32       ;//0x0250
          unsigned int                   :32       ;//0x0254
          unsigned int                   :32       ;//0x0258
          unsigned int                   :32       ;//0x025c
          unsigned int                   :32       ;//0x0260
          unsigned int                   :32       ;//0x0264
          unsigned int                   :32       ;//0x0268
          unsigned int                   :32       ;//0x026c
          unsigned int                   :32       ;//0x0270
          unsigned int                   :32       ;//0x0274
          unsigned int                   :32       ;//0x0278
          unsigned int                   :32       ;//0x027c
          unsigned int                   :32       ;//0x0280
          unsigned int                   :32       ;//0x0284
          unsigned int                   :32       ;//0x0288
          unsigned int                   :32       ;//0x028c
          unsigned int                   :32       ;//0x0290
          unsigned int                   :32       ;//0x0294
          unsigned int                   :32       ;//0x0298
          unsigned int                   :32       ;//0x029c
          unsigned int                   :32       ;//0x02a0
          unsigned int                   :32       ;//0x02a4
          unsigned int                   :32       ;//0x02a8
          unsigned int                   :32       ;//0x02ac
          unsigned int                   :32       ;//0x02b0
          unsigned int                   :32       ;//0x02b4
          unsigned int                   :32       ;//0x02b8
          unsigned int                   :32       ;//0x02bc
  union {
    const unsigned long                  rawtfr    ;//0x02c0
    const avr32_dmaca_rawtfr_t           RAWTFR    ;
  };
          unsigned int                   :32       ;//0x02c4
  union {
    const unsigned long                  rawblock  ;//0x02c8
    const avr32_dmaca_rawblock_t         RAWBLOCK  ;
  };
          unsigned int                   :32       ;//0x02cc
  union {
    const unsigned long                  rawsrctran;//0x02d0
    const avr32_dmaca_rawsrctran_t       RAWSRCTRAN;
  };
          unsigned int                   :32       ;//0x02d4
  union {
    const unsigned long                  rawdsttran;//0x02d8
    const avr32_dmaca_rawdsttran_t       RAWDSTTRAN;
  };
          unsigned int                   :32       ;//0x02dc
  union {
    const unsigned long                  rawerr    ;//0x02e0
    const avr32_dmaca_rawerr_t           RAWERR    ;
  };
          unsigned int                   :32       ;//0x02e4
  union {
    const unsigned long                  statustfr ;//0x02e8
    const avr32_dmaca_statustfr_t        STATUSTFR ;
  };
          unsigned int                   :32       ;//0x02ec
  union {
    const unsigned long                  statusblock;//0x02f0
    const avr32_dmaca_statusblock_t      STATUSBLOCK;
  };
          unsigned int                   :32       ;//0x02f4
  union {
    const unsigned long                  statussrctran;//0x02f8
    const avr32_dmaca_statussrctran_t    STATUSSRCTRAN;
  };
          unsigned int                   :32       ;//0x02fc
  union {
    const unsigned long                  statusdsttran;//0x0300
    const avr32_dmaca_statusdsttran_t    STATUSDSTTRAN;
  };
          unsigned int                   :32       ;//0x0304
  union {
    const unsigned long                  statuserr ;//0x0308
    const avr32_dmaca_statuserr_t        STATUSERR ;
  };
          unsigned int                   :32       ;//0x030c
  union {
          unsigned long                  masktfr   ;//0x0310
          avr32_dmaca_masktfr_t          MASKTFR   ;
  };
          unsigned int                   :32       ;//0x0314
  union {
          unsigned long                  maskblock ;//0x0318
          avr32_dmaca_maskblock_t        MASKBLOCK ;
  };
          unsigned int                   :32       ;//0x031c
  union {
          unsigned long                  masksrctran;//0x0320
          avr32_dmaca_masksrctran_t      MASKSRCTRAN;
  };
          unsigned int                   :32       ;//0x0324
  union {
          unsigned long                  maskdsttran;//0x0328
          avr32_dmaca_maskdsttran_t      MASKDSTTRAN;
  };
          unsigned int                   :32       ;//0x032c
  union {
          unsigned long                  maskerr   ;//0x0330
          avr32_dmaca_maskerr_t          MASKERR   ;
  };
          unsigned int                   :32       ;//0x0334
  union {
          unsigned long                  cleartfr  ;//0x0338
          avr32_dmaca_cleartfr_t         CLEARTFR  ;
  };
          unsigned int                   :32       ;//0x033c
  union {
          unsigned long                  clearblock;//0x0340
          avr32_dmaca_clearblock_t       CLEARBLOCK;
  };
          unsigned int                   :32       ;//0x0344
  union {
          unsigned long                  clearsrctran;//0x0348
          avr32_dmaca_clearsrctran_t     CLEARSRCTRAN;
  };
          unsigned int                   :32       ;//0x034c
  union {
          unsigned long                  cleardsttran;//0x0350
          avr32_dmaca_cleardsttran_t     CLEARDSTTRAN;
  };
          unsigned int                   :32       ;//0x0354
  union {
          unsigned long                  clearerr  ;//0x0358
          avr32_dmaca_clearerr_t         CLEARERR  ;
  };
          unsigned int                   :32       ;//0x035c
  union {
    const unsigned long                  statusint ;//0x0360
    const avr32_dmaca_statusint_t        STATUSINT ;
  };
          unsigned int                   :32       ;//0x0364
  union {
          unsigned long                  reqsrcreg ;//0x0368
          avr32_dmaca_reqsrcreg_t        REQSRCREG ;
  };
          unsigned int                   :32       ;//0x036c
  union {
          unsigned long                  reqdstreg ;//0x0370
          avr32_dmaca_reqdstreg_t        REQDSTREG ;
  };
          unsigned int                   :32       ;//0x0374
  union {
          unsigned long                  sglreqsrcreg;//0x0378
          avr32_dmaca_sglreqsrcreg_t     SGLREQSRCREG;
  };
          unsigned int                   :32       ;//0x037c
  union {
          unsigned long                  sglreqdstreg;//0x0380
          avr32_dmaca_sglreqdstreg_t     SGLREQDSTREG;
  };
          unsigned int                   :32       ;//0x0384
  union {
          unsigned long                  lstsrcreqreg;//0x0388
          avr32_dmaca_lstsrcreqreg_t     LSTSRCREQREG;
  };
          unsigned int                   :32       ;//0x038c
  union {
          unsigned long                  lstdstreqreg;//0x0390
          avr32_dmaca_lstdstreqreg_t     LSTDSTREQREG;
  };
          unsigned int                   :32       ;//0x0394
  union {
          unsigned long                  dmacfgreg ;//0x0398
          avr32_dmaca_dmacfgreg_t        DMACFGREG ;
  };
          unsigned int                   :32       ;//0x039c
  union {
          unsigned long                  chenreg   ;//0x03a0
          avr32_dmaca_chenreg_t          CHENREG   ;
  };
          unsigned int                   :32       ;//0x03a4
          unsigned long                  idreg     ;//0x03a8
          unsigned int                   :32       ;//0x03ac
  union {
          unsigned long                  dmatestreg;//0x03b0
          avr32_dmaca_dmatestreg_t       DMATESTREG;
  };
} avr32_dmaca_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_DMACA_206A_H_INCLUDED*/
#endif


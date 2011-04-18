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
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_USBA_140_H_INCLUDED
#define AVR32_USBA_140_H_INCLUDED

#define AVR32_USBA_H_VERSION 140

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_USBA_<register>
 - Bitfield mask:   AVR32_USBA_<register>_<bitfield>
 - Bitfield offset: AVR32_USBA_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBA_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_USBA_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_USBA_<bitfield>
 - Bitfield offset: AVR32_USBA_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBA_<bitfield>_SIZE
 - Bitfield values: AVR32_USBA_<bitfield>_<value name>
 - Bitfield values: AVR32_USBA_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_USBA_AUTO_VALID                                        1
#define AVR32_USBA_AUTO_VALID_MASK                          0x00000002
#define AVR32_USBA_AUTO_VALID_OFFSET                                 1
#define AVR32_USBA_AUTO_VALID_SIZE                                   1
#define AVR32_USBA_BK_NUMBER                                         6
#define AVR32_USBA_BK_NUMBER_DOUBLE                         0x00000002
#define AVR32_USBA_BK_NUMBER_MASK                           0x000000c0
#define AVR32_USBA_BK_NUMBER_OFFSET                                  6
#define AVR32_USBA_BK_NUMBER_ONE                            0x00000001
#define AVR32_USBA_BK_NUMBER_SIZE                                    2
#define AVR32_USBA_BK_NUMBER_TRIPLE                         0x00000003
#define AVR32_USBA_BK_NUMBER_ZERO                           0x00000000
#define AVR32_USBA_BUFF_ADD                                          0
#define AVR32_USBA_BUFF_ADD_MASK                            0xffffffff
#define AVR32_USBA_BUFF_ADD_OFFSET                                   0
#define AVR32_USBA_BUFF_ADD_SIZE                                    32
#define AVR32_USBA_BUFF_COUNT                                       16
#define AVR32_USBA_BUFF_COUNT_MASK                          0xffff0000
#define AVR32_USBA_BUFF_COUNT_OFFSET                                16
#define AVR32_USBA_BUFF_COUNT_SIZE                                  16
#define AVR32_USBA_BUFF_LENGTH                                      16
#define AVR32_USBA_BUFF_LENGTH_MASK                         0xffff0000
#define AVR32_USBA_BUFF_LENGTH_OFFSET                               16
#define AVR32_USBA_BUFF_LENGTH_SIZE                                 16
#define AVR32_USBA_BULK                                     0x00000002
#define AVR32_USBA_BURST_LCK                                         7
#define AVR32_USBA_BURST_LCK_MASK                           0x00000080
#define AVR32_USBA_BURST_LCK_OFFSET                                  7
#define AVR32_USBA_BURST_LCK_SIZE                                    1
#define AVR32_USBA_BUSY_BANK                                        18
#define AVR32_USBA_BUSY_BANK_MASK                           0x00040000
#define AVR32_USBA_BUSY_BANK_OFFSET                                 18
#define AVR32_USBA_BUSY_BANK_SIZE                                    1
#define AVR32_USBA_BUSY_BANK_STA                                    18
#define AVR32_USBA_BUSY_BANK_STA_MASK                       0x000c0000
#define AVR32_USBA_BUSY_BANK_STA_OFFSET                             18
#define AVR32_USBA_BUSY_BANK_STA_SIZE                                2
#define AVR32_USBA_BW_DPRAM                                         15
#define AVR32_USBA_BW_DPRAM_MASK                            0x00008000
#define AVR32_USBA_BW_DPRAM_OFFSET                                  15
#define AVR32_USBA_BW_DPRAM_SIZE                                     1
#define AVR32_USBA_BYTE_COUNT                                       20
#define AVR32_USBA_BYTE_COUNT_MASK                          0x7ff00000
#define AVR32_USBA_BYTE_COUNT_OFFSET                                20
#define AVR32_USBA_BYTE_COUNT_SIZE                                  11
#define AVR32_USBA_CHANN_ACT                                         1
#define AVR32_USBA_CHANN_ACT_MASK                           0x00000002
#define AVR32_USBA_CHANN_ACT_OFFSET                                  1
#define AVR32_USBA_CHANN_ACT_SIZE                                    1
#define AVR32_USBA_CHANN_ENB                                         0
#define AVR32_USBA_CHANN_ENB_MASK                           0x00000001
#define AVR32_USBA_CHANN_ENB_OFFSET                                  0
#define AVR32_USBA_CHANN_ENB_SIZE                                    1
#define AVR32_USBA_CLRINT                                   0x00000018
#define AVR32_USBA_CLRINT_DET_SUSPD                                  1
#define AVR32_USBA_CLRINT_DET_SUSPD_MASK                    0x00000002
#define AVR32_USBA_CLRINT_DET_SUSPD_OFFSET                           1
#define AVR32_USBA_CLRINT_DET_SUSPD_SIZE                             1
#define AVR32_USBA_CLRINT_ENDOFRSM                                   6
#define AVR32_USBA_CLRINT_ENDOFRSM_MASK                     0x00000040
#define AVR32_USBA_CLRINT_ENDOFRSM_OFFSET                            6
#define AVR32_USBA_CLRINT_ENDOFRSM_SIZE                              1
#define AVR32_USBA_CLRINT_ENDRESET                                   4
#define AVR32_USBA_CLRINT_ENDRESET_MASK                     0x00000010
#define AVR32_USBA_CLRINT_ENDRESET_OFFSET                            4
#define AVR32_USBA_CLRINT_ENDRESET_SIZE                              1
#define AVR32_USBA_CLRINT_INT_SOF                                    3
#define AVR32_USBA_CLRINT_INT_SOF_MASK                      0x00000008
#define AVR32_USBA_CLRINT_INT_SOF_OFFSET                             3
#define AVR32_USBA_CLRINT_INT_SOF_SIZE                               1
#define AVR32_USBA_CLRINT_MICRO_SOF                                  2
#define AVR32_USBA_CLRINT_MICRO_SOF_MASK                    0x00000004
#define AVR32_USBA_CLRINT_MICRO_SOF_OFFSET                           2
#define AVR32_USBA_CLRINT_MICRO_SOF_SIZE                             1
#define AVR32_USBA_CLRINT_UPSTR_RES                                  7
#define AVR32_USBA_CLRINT_UPSTR_RES_MASK                    0x00000080
#define AVR32_USBA_CLRINT_UPSTR_RES_OFFSET                           7
#define AVR32_USBA_CLRINT_UPSTR_RES_SIZE                             1
#define AVR32_USBA_CLRINT_WAKE_UP                                    5
#define AVR32_USBA_CLRINT_WAKE_UP_MASK                      0x00000020
#define AVR32_USBA_CLRINT_WAKE_UP_OFFSET                             5
#define AVR32_USBA_CLRINT_WAKE_UP_SIZE                               1
#define AVR32_USBA_CNTALOAD                                         15
#define AVR32_USBA_CNTALOAD_MASK                            0x00008000
#define AVR32_USBA_CNTALOAD_OFFSET                                  15
#define AVR32_USBA_CNTALOAD_SIZE                                     1
#define AVR32_USBA_CNTAMAX                                           0
#define AVR32_USBA_CNTAMAX_MASK                             0x00003fff
#define AVR32_USBA_CNTAMAX_OFFSET                                    0
#define AVR32_USBA_CNTAMAX_SIZE                                     14
#define AVR32_USBA_CNTBLOAD                                          7
#define AVR32_USBA_CNTBLOAD_MASK                            0x00000080
#define AVR32_USBA_CNTBLOAD_OFFSET                                   7
#define AVR32_USBA_CNTBLOAD_SIZE                                     1
#define AVR32_USBA_CNTBMAX                                           0
#define AVR32_USBA_CNTBMAX_MASK                             0x0000003f
#define AVR32_USBA_CNTBMAX_OFFSET                                    0
#define AVR32_USBA_CNTBMAX_SIZE                                      6
#define AVR32_USBA_CONTROL                                  0x00000000
#define AVR32_USBA_CONTROL_DIR                                      16
#define AVR32_USBA_CONTROL_DIR_MASK                         0x00030000
#define AVR32_USBA_CONTROL_DIR_OFFSET                               16
#define AVR32_USBA_CONTROL_DIR_SIZE                                  2
#define AVR32_USBA_CTRL                                     0x00000000
#define AVR32_USBA_CTRL_DETACH                                       9
#define AVR32_USBA_CTRL_DETACH_MASK                         0x00000200
#define AVR32_USBA_CTRL_DETACH_OFFSET                                9
#define AVR32_USBA_CTRL_DETACH_SIZE                                  1
#define AVR32_USBA_CTRL_DEV_ADDR                                     0
#define AVR32_USBA_CTRL_DEV_ADDR_MASK                       0x0000007f
#define AVR32_USBA_CTRL_DEV_ADDR_OFFSET                              0
#define AVR32_USBA_CTRL_DEV_ADDR_SIZE                                7
#define AVR32_USBA_CTRL_EN_USBA                                      8
#define AVR32_USBA_CTRL_EN_USBA_MASK                        0x00000100
#define AVR32_USBA_CTRL_EN_USBA_OFFSET                               8
#define AVR32_USBA_CTRL_EN_USBA_SIZE                                 1
#define AVR32_USBA_CTRL_FADDR_EN                                     7
#define AVR32_USBA_CTRL_FADDR_EN_MASK                       0x00000080
#define AVR32_USBA_CTRL_FADDR_EN_OFFSET                              7
#define AVR32_USBA_CTRL_FADDR_EN_SIZE                                1
#define AVR32_USBA_CTRL_REWAKEUP                                    10
#define AVR32_USBA_CTRL_REWAKEUP_MASK                       0x00000400
#define AVR32_USBA_CTRL_REWAKEUP_OFFSET                             10
#define AVR32_USBA_CTRL_REWAKEUP_SIZE                                1
#define AVR32_USBA_CURRENT_BANK                                     16
#define AVR32_USBA_CURRENT_BANK_MASK                        0x00030000
#define AVR32_USBA_CURRENT_BANK_OFFSET                              16
#define AVR32_USBA_CURRENT_BANK_SIZE                                 2
#define AVR32_USBA_DATAB16_8                                        16
#define AVR32_USBA_DATAB16_8_MASK                           0x00010000
#define AVR32_USBA_DATAB16_8_OFFSET                                 16
#define AVR32_USBA_DATAB16_8_SIZE                                    1
#define AVR32_USBA_DATAX_RX                                          6
#define AVR32_USBA_DATAX_RX_MASK                            0x00000040
#define AVR32_USBA_DATAX_RX_OFFSET                                   6
#define AVR32_USBA_DATAX_RX_SIZE                                     1
#define AVR32_USBA_DESC_LDST                                         6
#define AVR32_USBA_DESC_LDST_MASK                           0x00000040
#define AVR32_USBA_DESC_LDST_OFFSET                                  6
#define AVR32_USBA_DESC_LDST_SIZE                                    1
#define AVR32_USBA_DESC_LD_IT                                        6
#define AVR32_USBA_DESC_LD_IT_MASK                          0x00000040
#define AVR32_USBA_DESC_LD_IT_OFFSET                                 6
#define AVR32_USBA_DESC_LD_IT_SIZE                                   1
#define AVR32_USBA_DETACH                                            9
#define AVR32_USBA_DETACH_MASK                              0x00000200
#define AVR32_USBA_DETACH_OFFSET                                     9
#define AVR32_USBA_DETACH_SIZE                                       1
#define AVR32_USBA_DET_SUSPD                                         1
#define AVR32_USBA_DET_SUSPD_MASK                           0x00000002
#define AVR32_USBA_DET_SUSPD_OFFSET                                  1
#define AVR32_USBA_DET_SUSPD_SIZE                                    1
#define AVR32_USBA_DEV_ADDR                                          0
#define AVR32_USBA_DEV_ADDR_MASK                            0x0000007f
#define AVR32_USBA_DEV_ADDR_OFFSET                                   0
#define AVR32_USBA_DEV_ADDR_SIZE                                     7
#define AVR32_USBA_DMAADDRESS1                              0x00000314
#define AVR32_USBA_DMAADDRESS1_BUFF_ADD                              0
#define AVR32_USBA_DMAADDRESS1_BUFF_ADD_MASK                0xffffffff
#define AVR32_USBA_DMAADDRESS1_BUFF_ADD_OFFSET                       0
#define AVR32_USBA_DMAADDRESS1_BUFF_ADD_SIZE                        32
#define AVR32_USBA_DMAADDRESS2                              0x00000324
#define AVR32_USBA_DMAADDRESS2_BUFF_ADD                              0
#define AVR32_USBA_DMAADDRESS2_BUFF_ADD_MASK                0xffffffff
#define AVR32_USBA_DMAADDRESS2_BUFF_ADD_OFFSET                       0
#define AVR32_USBA_DMAADDRESS2_BUFF_ADD_SIZE                        32
#define AVR32_USBA_DMAADDRESS3                              0x00000334
#define AVR32_USBA_DMAADDRESS3_BUFF_ADD                              0
#define AVR32_USBA_DMAADDRESS3_BUFF_ADD_MASK                0xffffffff
#define AVR32_USBA_DMAADDRESS3_BUFF_ADD_OFFSET                       0
#define AVR32_USBA_DMAADDRESS3_BUFF_ADD_SIZE                        32
#define AVR32_USBA_DMAADDRESS4                              0x00000344
#define AVR32_USBA_DMAADDRESS4_BUFF_ADD                              0
#define AVR32_USBA_DMAADDRESS4_BUFF_ADD_MASK                0xffffffff
#define AVR32_USBA_DMAADDRESS4_BUFF_ADD_OFFSET                       0
#define AVR32_USBA_DMAADDRESS4_BUFF_ADD_SIZE                        32
#define AVR32_USBA_DMAADDRESS5                              0x00000354
#define AVR32_USBA_DMAADDRESS5_BUFF_ADD                              0
#define AVR32_USBA_DMAADDRESS5_BUFF_ADD_MASK                0xffffffff
#define AVR32_USBA_DMAADDRESS5_BUFF_ADD_OFFSET                       0
#define AVR32_USBA_DMAADDRESS5_BUFF_ADD_SIZE                        32
#define AVR32_USBA_DMAADDRESS6                              0x00000364
#define AVR32_USBA_DMAADDRESS6_BUFF_ADD                              0
#define AVR32_USBA_DMAADDRESS6_BUFF_ADD_MASK                0xffffffff
#define AVR32_USBA_DMAADDRESS6_BUFF_ADD_OFFSET                       0
#define AVR32_USBA_DMAADDRESS6_BUFF_ADD_SIZE                        32
#define AVR32_USBA_DMACONTROL1                              0x00000318
#define AVR32_USBA_DMACONTROL1_BUFF_LENGTH                          16
#define AVR32_USBA_DMACONTROL1_BUFF_LENGTH_MASK             0xffff0000
#define AVR32_USBA_DMACONTROL1_BUFF_LENGTH_OFFSET                   16
#define AVR32_USBA_DMACONTROL1_BUFF_LENGTH_SIZE                     16
#define AVR32_USBA_DMACONTROL1_BURST_LCK                             7
#define AVR32_USBA_DMACONTROL1_BURST_LCK_MASK               0x00000080
#define AVR32_USBA_DMACONTROL1_BURST_LCK_OFFSET                      7
#define AVR32_USBA_DMACONTROL1_BURST_LCK_SIZE                        1
#define AVR32_USBA_DMACONTROL1_CHANN_ENB                             0
#define AVR32_USBA_DMACONTROL1_CHANN_ENB_MASK               0x00000001
#define AVR32_USBA_DMACONTROL1_CHANN_ENB_OFFSET                      0
#define AVR32_USBA_DMACONTROL1_CHANN_ENB_SIZE                        1
#define AVR32_USBA_DMACONTROL1_DESC_LD_IT                            6
#define AVR32_USBA_DMACONTROL1_DESC_LD_IT_MASK              0x00000040
#define AVR32_USBA_DMACONTROL1_DESC_LD_IT_OFFSET                     6
#define AVR32_USBA_DMACONTROL1_DESC_LD_IT_SIZE                       1
#define AVR32_USBA_DMACONTROL1_END_BUFFIT                            5
#define AVR32_USBA_DMACONTROL1_END_BUFFIT_MASK              0x00000020
#define AVR32_USBA_DMACONTROL1_END_BUFFIT_OFFSET                     5
#define AVR32_USBA_DMACONTROL1_END_BUFFIT_SIZE                       1
#define AVR32_USBA_DMACONTROL1_END_B_EN                              3
#define AVR32_USBA_DMACONTROL1_END_B_EN_MASK                0x00000008
#define AVR32_USBA_DMACONTROL1_END_B_EN_OFFSET                       3
#define AVR32_USBA_DMACONTROL1_END_B_EN_SIZE                         1
#define AVR32_USBA_DMACONTROL1_END_TR_EN                             2
#define AVR32_USBA_DMACONTROL1_END_TR_EN_MASK               0x00000004
#define AVR32_USBA_DMACONTROL1_END_TR_EN_OFFSET                      2
#define AVR32_USBA_DMACONTROL1_END_TR_EN_SIZE                        1
#define AVR32_USBA_DMACONTROL1_END_TR_IT                             4
#define AVR32_USBA_DMACONTROL1_END_TR_IT_MASK               0x00000010
#define AVR32_USBA_DMACONTROL1_END_TR_IT_OFFSET                      4
#define AVR32_USBA_DMACONTROL1_END_TR_IT_SIZE                        1
#define AVR32_USBA_DMACONTROL1_LDNXT_DSC                             1
#define AVR32_USBA_DMACONTROL1_LDNXT_DSC_MASK               0x00000002
#define AVR32_USBA_DMACONTROL1_LDNXT_DSC_OFFSET                      1
#define AVR32_USBA_DMACONTROL1_LDNXT_DSC_SIZE                        1
#define AVR32_USBA_DMACONTROL2                              0x00000328
#define AVR32_USBA_DMACONTROL2_BUFF_LENGTH                          16
#define AVR32_USBA_DMACONTROL2_BUFF_LENGTH_MASK             0xffff0000
#define AVR32_USBA_DMACONTROL2_BUFF_LENGTH_OFFSET                   16
#define AVR32_USBA_DMACONTROL2_BUFF_LENGTH_SIZE                     16
#define AVR32_USBA_DMACONTROL2_BURST_LCK                             7
#define AVR32_USBA_DMACONTROL2_BURST_LCK_MASK               0x00000080
#define AVR32_USBA_DMACONTROL2_BURST_LCK_OFFSET                      7
#define AVR32_USBA_DMACONTROL2_BURST_LCK_SIZE                        1
#define AVR32_USBA_DMACONTROL2_CHANN_ENB                             0
#define AVR32_USBA_DMACONTROL2_CHANN_ENB_MASK               0x00000001
#define AVR32_USBA_DMACONTROL2_CHANN_ENB_OFFSET                      0
#define AVR32_USBA_DMACONTROL2_CHANN_ENB_SIZE                        1
#define AVR32_USBA_DMACONTROL2_DESC_LD_IT                            6
#define AVR32_USBA_DMACONTROL2_DESC_LD_IT_MASK              0x00000040
#define AVR32_USBA_DMACONTROL2_DESC_LD_IT_OFFSET                     6
#define AVR32_USBA_DMACONTROL2_DESC_LD_IT_SIZE                       1
#define AVR32_USBA_DMACONTROL2_END_BUFFIT                            5
#define AVR32_USBA_DMACONTROL2_END_BUFFIT_MASK              0x00000020
#define AVR32_USBA_DMACONTROL2_END_BUFFIT_OFFSET                     5
#define AVR32_USBA_DMACONTROL2_END_BUFFIT_SIZE                       1
#define AVR32_USBA_DMACONTROL2_END_B_EN                              3
#define AVR32_USBA_DMACONTROL2_END_B_EN_MASK                0x00000008
#define AVR32_USBA_DMACONTROL2_END_B_EN_OFFSET                       3
#define AVR32_USBA_DMACONTROL2_END_B_EN_SIZE                         1
#define AVR32_USBA_DMACONTROL2_END_TR_EN                             2
#define AVR32_USBA_DMACONTROL2_END_TR_EN_MASK               0x00000004
#define AVR32_USBA_DMACONTROL2_END_TR_EN_OFFSET                      2
#define AVR32_USBA_DMACONTROL2_END_TR_EN_SIZE                        1
#define AVR32_USBA_DMACONTROL2_END_TR_IT                             4
#define AVR32_USBA_DMACONTROL2_END_TR_IT_MASK               0x00000010
#define AVR32_USBA_DMACONTROL2_END_TR_IT_OFFSET                      4
#define AVR32_USBA_DMACONTROL2_END_TR_IT_SIZE                        1
#define AVR32_USBA_DMACONTROL2_LDNXT_DSC                             1
#define AVR32_USBA_DMACONTROL2_LDNXT_DSC_MASK               0x00000002
#define AVR32_USBA_DMACONTROL2_LDNXT_DSC_OFFSET                      1
#define AVR32_USBA_DMACONTROL2_LDNXT_DSC_SIZE                        1
#define AVR32_USBA_DMACONTROL3                              0x00000338
#define AVR32_USBA_DMACONTROL3_BUFF_LENGTH                          16
#define AVR32_USBA_DMACONTROL3_BUFF_LENGTH_MASK             0xffff0000
#define AVR32_USBA_DMACONTROL3_BUFF_LENGTH_OFFSET                   16
#define AVR32_USBA_DMACONTROL3_BUFF_LENGTH_SIZE                     16
#define AVR32_USBA_DMACONTROL3_BURST_LCK                             7
#define AVR32_USBA_DMACONTROL3_BURST_LCK_MASK               0x00000080
#define AVR32_USBA_DMACONTROL3_BURST_LCK_OFFSET                      7
#define AVR32_USBA_DMACONTROL3_BURST_LCK_SIZE                        1
#define AVR32_USBA_DMACONTROL3_CHANN_ENB                             0
#define AVR32_USBA_DMACONTROL3_CHANN_ENB_MASK               0x00000001
#define AVR32_USBA_DMACONTROL3_CHANN_ENB_OFFSET                      0
#define AVR32_USBA_DMACONTROL3_CHANN_ENB_SIZE                        1
#define AVR32_USBA_DMACONTROL3_DESC_LD_IT                            6
#define AVR32_USBA_DMACONTROL3_DESC_LD_IT_MASK              0x00000040
#define AVR32_USBA_DMACONTROL3_DESC_LD_IT_OFFSET                     6
#define AVR32_USBA_DMACONTROL3_DESC_LD_IT_SIZE                       1
#define AVR32_USBA_DMACONTROL3_END_BUFFIT                            5
#define AVR32_USBA_DMACONTROL3_END_BUFFIT_MASK              0x00000020
#define AVR32_USBA_DMACONTROL3_END_BUFFIT_OFFSET                     5
#define AVR32_USBA_DMACONTROL3_END_BUFFIT_SIZE                       1
#define AVR32_USBA_DMACONTROL3_END_B_EN                              3
#define AVR32_USBA_DMACONTROL3_END_B_EN_MASK                0x00000008
#define AVR32_USBA_DMACONTROL3_END_B_EN_OFFSET                       3
#define AVR32_USBA_DMACONTROL3_END_B_EN_SIZE                         1
#define AVR32_USBA_DMACONTROL3_END_TR_EN                             2
#define AVR32_USBA_DMACONTROL3_END_TR_EN_MASK               0x00000004
#define AVR32_USBA_DMACONTROL3_END_TR_EN_OFFSET                      2
#define AVR32_USBA_DMACONTROL3_END_TR_EN_SIZE                        1
#define AVR32_USBA_DMACONTROL3_END_TR_IT                             4
#define AVR32_USBA_DMACONTROL3_END_TR_IT_MASK               0x00000010
#define AVR32_USBA_DMACONTROL3_END_TR_IT_OFFSET                      4
#define AVR32_USBA_DMACONTROL3_END_TR_IT_SIZE                        1
#define AVR32_USBA_DMACONTROL3_LDNXT_DSC                             1
#define AVR32_USBA_DMACONTROL3_LDNXT_DSC_MASK               0x00000002
#define AVR32_USBA_DMACONTROL3_LDNXT_DSC_OFFSET                      1
#define AVR32_USBA_DMACONTROL3_LDNXT_DSC_SIZE                        1
#define AVR32_USBA_DMACONTROL4                              0x00000348
#define AVR32_USBA_DMACONTROL4_BUFF_LENGTH                          16
#define AVR32_USBA_DMACONTROL4_BUFF_LENGTH_MASK             0xffff0000
#define AVR32_USBA_DMACONTROL4_BUFF_LENGTH_OFFSET                   16
#define AVR32_USBA_DMACONTROL4_BUFF_LENGTH_SIZE                     16
#define AVR32_USBA_DMACONTROL4_BURST_LCK                             7
#define AVR32_USBA_DMACONTROL4_BURST_LCK_MASK               0x00000080
#define AVR32_USBA_DMACONTROL4_BURST_LCK_OFFSET                      7
#define AVR32_USBA_DMACONTROL4_BURST_LCK_SIZE                        1
#define AVR32_USBA_DMACONTROL4_CHANN_ENB                             0
#define AVR32_USBA_DMACONTROL4_CHANN_ENB_MASK               0x00000001
#define AVR32_USBA_DMACONTROL4_CHANN_ENB_OFFSET                      0
#define AVR32_USBA_DMACONTROL4_CHANN_ENB_SIZE                        1
#define AVR32_USBA_DMACONTROL4_DESC_LD_IT                            6
#define AVR32_USBA_DMACONTROL4_DESC_LD_IT_MASK              0x00000040
#define AVR32_USBA_DMACONTROL4_DESC_LD_IT_OFFSET                     6
#define AVR32_USBA_DMACONTROL4_DESC_LD_IT_SIZE                       1
#define AVR32_USBA_DMACONTROL4_END_BUFFIT                            5
#define AVR32_USBA_DMACONTROL4_END_BUFFIT_MASK              0x00000020
#define AVR32_USBA_DMACONTROL4_END_BUFFIT_OFFSET                     5
#define AVR32_USBA_DMACONTROL4_END_BUFFIT_SIZE                       1
#define AVR32_USBA_DMACONTROL4_END_B_EN                              3
#define AVR32_USBA_DMACONTROL4_END_B_EN_MASK                0x00000008
#define AVR32_USBA_DMACONTROL4_END_B_EN_OFFSET                       3
#define AVR32_USBA_DMACONTROL4_END_B_EN_SIZE                         1
#define AVR32_USBA_DMACONTROL4_END_TR_EN                             2
#define AVR32_USBA_DMACONTROL4_END_TR_EN_MASK               0x00000004
#define AVR32_USBA_DMACONTROL4_END_TR_EN_OFFSET                      2
#define AVR32_USBA_DMACONTROL4_END_TR_EN_SIZE                        1
#define AVR32_USBA_DMACONTROL4_END_TR_IT                             4
#define AVR32_USBA_DMACONTROL4_END_TR_IT_MASK               0x00000010
#define AVR32_USBA_DMACONTROL4_END_TR_IT_OFFSET                      4
#define AVR32_USBA_DMACONTROL4_END_TR_IT_SIZE                        1
#define AVR32_USBA_DMACONTROL4_LDNXT_DSC                             1
#define AVR32_USBA_DMACONTROL4_LDNXT_DSC_MASK               0x00000002
#define AVR32_USBA_DMACONTROL4_LDNXT_DSC_OFFSET                      1
#define AVR32_USBA_DMACONTROL4_LDNXT_DSC_SIZE                        1
#define AVR32_USBA_DMACONTROL5                              0x00000358
#define AVR32_USBA_DMACONTROL5_BUFF_LENGTH                          16
#define AVR32_USBA_DMACONTROL5_BUFF_LENGTH_MASK             0xffff0000
#define AVR32_USBA_DMACONTROL5_BUFF_LENGTH_OFFSET                   16
#define AVR32_USBA_DMACONTROL5_BUFF_LENGTH_SIZE                     16
#define AVR32_USBA_DMACONTROL5_BURST_LCK                             7
#define AVR32_USBA_DMACONTROL5_BURST_LCK_MASK               0x00000080
#define AVR32_USBA_DMACONTROL5_BURST_LCK_OFFSET                      7
#define AVR32_USBA_DMACONTROL5_BURST_LCK_SIZE                        1
#define AVR32_USBA_DMACONTROL5_CHANN_ENB                             0
#define AVR32_USBA_DMACONTROL5_CHANN_ENB_MASK               0x00000001
#define AVR32_USBA_DMACONTROL5_CHANN_ENB_OFFSET                      0
#define AVR32_USBA_DMACONTROL5_CHANN_ENB_SIZE                        1
#define AVR32_USBA_DMACONTROL5_DESC_LD_IT                            6
#define AVR32_USBA_DMACONTROL5_DESC_LD_IT_MASK              0x00000040
#define AVR32_USBA_DMACONTROL5_DESC_LD_IT_OFFSET                     6
#define AVR32_USBA_DMACONTROL5_DESC_LD_IT_SIZE                       1
#define AVR32_USBA_DMACONTROL5_END_BUFFIT                            5
#define AVR32_USBA_DMACONTROL5_END_BUFFIT_MASK              0x00000020
#define AVR32_USBA_DMACONTROL5_END_BUFFIT_OFFSET                     5
#define AVR32_USBA_DMACONTROL5_END_BUFFIT_SIZE                       1
#define AVR32_USBA_DMACONTROL5_END_B_EN                              3
#define AVR32_USBA_DMACONTROL5_END_B_EN_MASK                0x00000008
#define AVR32_USBA_DMACONTROL5_END_B_EN_OFFSET                       3
#define AVR32_USBA_DMACONTROL5_END_B_EN_SIZE                         1
#define AVR32_USBA_DMACONTROL5_END_TR_EN                             2
#define AVR32_USBA_DMACONTROL5_END_TR_EN_MASK               0x00000004
#define AVR32_USBA_DMACONTROL5_END_TR_EN_OFFSET                      2
#define AVR32_USBA_DMACONTROL5_END_TR_EN_SIZE                        1
#define AVR32_USBA_DMACONTROL5_END_TR_IT                             4
#define AVR32_USBA_DMACONTROL5_END_TR_IT_MASK               0x00000010
#define AVR32_USBA_DMACONTROL5_END_TR_IT_OFFSET                      4
#define AVR32_USBA_DMACONTROL5_END_TR_IT_SIZE                        1
#define AVR32_USBA_DMACONTROL5_LDNXT_DSC                             1
#define AVR32_USBA_DMACONTROL5_LDNXT_DSC_MASK               0x00000002
#define AVR32_USBA_DMACONTROL5_LDNXT_DSC_OFFSET                      1
#define AVR32_USBA_DMACONTROL5_LDNXT_DSC_SIZE                        1
#define AVR32_USBA_DMACONTROL6                              0x00000368
#define AVR32_USBA_DMACONTROL6_BUFF_LENGTH                          16
#define AVR32_USBA_DMACONTROL6_BUFF_LENGTH_MASK             0xffff0000
#define AVR32_USBA_DMACONTROL6_BUFF_LENGTH_OFFSET                   16
#define AVR32_USBA_DMACONTROL6_BUFF_LENGTH_SIZE                     16
#define AVR32_USBA_DMACONTROL6_BURST_LCK                             7
#define AVR32_USBA_DMACONTROL6_BURST_LCK_MASK               0x00000080
#define AVR32_USBA_DMACONTROL6_BURST_LCK_OFFSET                      7
#define AVR32_USBA_DMACONTROL6_BURST_LCK_SIZE                        1
#define AVR32_USBA_DMACONTROL6_CHANN_ENB                             0
#define AVR32_USBA_DMACONTROL6_CHANN_ENB_MASK               0x00000001
#define AVR32_USBA_DMACONTROL6_CHANN_ENB_OFFSET                      0
#define AVR32_USBA_DMACONTROL6_CHANN_ENB_SIZE                        1
#define AVR32_USBA_DMACONTROL6_DESC_LD_IT                            6
#define AVR32_USBA_DMACONTROL6_DESC_LD_IT_MASK              0x00000040
#define AVR32_USBA_DMACONTROL6_DESC_LD_IT_OFFSET                     6
#define AVR32_USBA_DMACONTROL6_DESC_LD_IT_SIZE                       1
#define AVR32_USBA_DMACONTROL6_END_BUFFIT                            5
#define AVR32_USBA_DMACONTROL6_END_BUFFIT_MASK              0x00000020
#define AVR32_USBA_DMACONTROL6_END_BUFFIT_OFFSET                     5
#define AVR32_USBA_DMACONTROL6_END_BUFFIT_SIZE                       1
#define AVR32_USBA_DMACONTROL6_END_B_EN                              3
#define AVR32_USBA_DMACONTROL6_END_B_EN_MASK                0x00000008
#define AVR32_USBA_DMACONTROL6_END_B_EN_OFFSET                       3
#define AVR32_USBA_DMACONTROL6_END_B_EN_SIZE                         1
#define AVR32_USBA_DMACONTROL6_END_TR_EN                             2
#define AVR32_USBA_DMACONTROL6_END_TR_EN_MASK               0x00000004
#define AVR32_USBA_DMACONTROL6_END_TR_EN_OFFSET                      2
#define AVR32_USBA_DMACONTROL6_END_TR_EN_SIZE                        1
#define AVR32_USBA_DMACONTROL6_END_TR_IT                             4
#define AVR32_USBA_DMACONTROL6_END_TR_IT_MASK               0x00000010
#define AVR32_USBA_DMACONTROL6_END_TR_IT_OFFSET                      4
#define AVR32_USBA_DMACONTROL6_END_TR_IT_SIZE                        1
#define AVR32_USBA_DMACONTROL6_LDNXT_DSC                             1
#define AVR32_USBA_DMACONTROL6_LDNXT_DSC_MASK               0x00000002
#define AVR32_USBA_DMACONTROL6_LDNXT_DSC_OFFSET                      1
#define AVR32_USBA_DMACONTROL6_LDNXT_DSC_SIZE                        1
#define AVR32_USBA_DMANXTDSC1                               0x00000310
#define AVR32_USBA_DMANXTDSC1_NXT_DSC_ADD                            0
#define AVR32_USBA_DMANXTDSC1_NXT_DSC_ADD_MASK              0xffffffff
#define AVR32_USBA_DMANXTDSC1_NXT_DSC_ADD_OFFSET                     0
#define AVR32_USBA_DMANXTDSC1_NXT_DSC_ADD_SIZE                      32
#define AVR32_USBA_DMANXTDSC2                               0x00000320
#define AVR32_USBA_DMANXTDSC2_NXT_DSC_ADD                            0
#define AVR32_USBA_DMANXTDSC2_NXT_DSC_ADD_MASK              0xffffffff
#define AVR32_USBA_DMANXTDSC2_NXT_DSC_ADD_OFFSET                     0
#define AVR32_USBA_DMANXTDSC2_NXT_DSC_ADD_SIZE                      32
#define AVR32_USBA_DMANXTDSC3                               0x00000330
#define AVR32_USBA_DMANXTDSC3_NXT_DSC_ADD                            0
#define AVR32_USBA_DMANXTDSC3_NXT_DSC_ADD_MASK              0xffffffff
#define AVR32_USBA_DMANXTDSC3_NXT_DSC_ADD_OFFSET                     0
#define AVR32_USBA_DMANXTDSC3_NXT_DSC_ADD_SIZE                      32
#define AVR32_USBA_DMANXTDSC4                               0x00000340
#define AVR32_USBA_DMANXTDSC4_NXT_DSC_ADD                            0
#define AVR32_USBA_DMANXTDSC4_NXT_DSC_ADD_MASK              0xffffffff
#define AVR32_USBA_DMANXTDSC4_NXT_DSC_ADD_OFFSET                     0
#define AVR32_USBA_DMANXTDSC4_NXT_DSC_ADD_SIZE                      32
#define AVR32_USBA_DMANXTDSC5                               0x00000350
#define AVR32_USBA_DMANXTDSC5_NXT_DSC_ADD                            0
#define AVR32_USBA_DMANXTDSC5_NXT_DSC_ADD_MASK              0xffffffff
#define AVR32_USBA_DMANXTDSC5_NXT_DSC_ADD_OFFSET                     0
#define AVR32_USBA_DMANXTDSC5_NXT_DSC_ADD_SIZE                      32
#define AVR32_USBA_DMANXTDSC6                               0x00000360
#define AVR32_USBA_DMANXTDSC6_NXT_DSC_ADD                            0
#define AVR32_USBA_DMANXTDSC6_NXT_DSC_ADD_MASK              0xffffffff
#define AVR32_USBA_DMANXTDSC6_NXT_DSC_ADD_OFFSET                     0
#define AVR32_USBA_DMANXTDSC6_NXT_DSC_ADD_SIZE                      32
#define AVR32_USBA_DMASTATUS1                               0x0000031c
#define AVR32_USBA_DMASTATUS1_BUFF_COUNT                            16
#define AVR32_USBA_DMASTATUS1_BUFF_COUNT_MASK               0xffff0000
#define AVR32_USBA_DMASTATUS1_BUFF_COUNT_OFFSET                     16
#define AVR32_USBA_DMASTATUS1_BUFF_COUNT_SIZE                       16
#define AVR32_USBA_DMASTATUS1_CHANN_ACT                              1
#define AVR32_USBA_DMASTATUS1_CHANN_ACT_MASK                0x00000002
#define AVR32_USBA_DMASTATUS1_CHANN_ACT_OFFSET                       1
#define AVR32_USBA_DMASTATUS1_CHANN_ACT_SIZE                         1
#define AVR32_USBA_DMASTATUS1_CHANN_ENB                              0
#define AVR32_USBA_DMASTATUS1_CHANN_ENB_MASK                0x00000001
#define AVR32_USBA_DMASTATUS1_CHANN_ENB_OFFSET                       0
#define AVR32_USBA_DMASTATUS1_CHANN_ENB_SIZE                         1
#define AVR32_USBA_DMASTATUS1_DESC_LDST                              6
#define AVR32_USBA_DMASTATUS1_DESC_LDST_MASK                0x00000040
#define AVR32_USBA_DMASTATUS1_DESC_LDST_OFFSET                       6
#define AVR32_USBA_DMASTATUS1_DESC_LDST_SIZE                         1
#define AVR32_USBA_DMASTATUS1_END_BF_ST                              5
#define AVR32_USBA_DMASTATUS1_END_BF_ST_MASK                0x00000020
#define AVR32_USBA_DMASTATUS1_END_BF_ST_OFFSET                       5
#define AVR32_USBA_DMASTATUS1_END_BF_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS1_END_TR_ST                              4
#define AVR32_USBA_DMASTATUS1_END_TR_ST_MASK                0x00000010
#define AVR32_USBA_DMASTATUS1_END_TR_ST_OFFSET                       4
#define AVR32_USBA_DMASTATUS1_END_TR_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS2                               0x0000032c
#define AVR32_USBA_DMASTATUS2_BUFF_COUNT                            16
#define AVR32_USBA_DMASTATUS2_BUFF_COUNT_MASK               0xffff0000
#define AVR32_USBA_DMASTATUS2_BUFF_COUNT_OFFSET                     16
#define AVR32_USBA_DMASTATUS2_BUFF_COUNT_SIZE                       16
#define AVR32_USBA_DMASTATUS2_CHANN_ACT                              1
#define AVR32_USBA_DMASTATUS2_CHANN_ACT_MASK                0x00000002
#define AVR32_USBA_DMASTATUS2_CHANN_ACT_OFFSET                       1
#define AVR32_USBA_DMASTATUS2_CHANN_ACT_SIZE                         1
#define AVR32_USBA_DMASTATUS2_CHANN_ENB                              0
#define AVR32_USBA_DMASTATUS2_CHANN_ENB_MASK                0x00000001
#define AVR32_USBA_DMASTATUS2_CHANN_ENB_OFFSET                       0
#define AVR32_USBA_DMASTATUS2_CHANN_ENB_SIZE                         1
#define AVR32_USBA_DMASTATUS2_DESC_LDST                              6
#define AVR32_USBA_DMASTATUS2_DESC_LDST_MASK                0x00000040
#define AVR32_USBA_DMASTATUS2_DESC_LDST_OFFSET                       6
#define AVR32_USBA_DMASTATUS2_DESC_LDST_SIZE                         1
#define AVR32_USBA_DMASTATUS2_END_BF_ST                              5
#define AVR32_USBA_DMASTATUS2_END_BF_ST_MASK                0x00000020
#define AVR32_USBA_DMASTATUS2_END_BF_ST_OFFSET                       5
#define AVR32_USBA_DMASTATUS2_END_BF_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS2_END_TR_ST                              4
#define AVR32_USBA_DMASTATUS2_END_TR_ST_MASK                0x00000010
#define AVR32_USBA_DMASTATUS2_END_TR_ST_OFFSET                       4
#define AVR32_USBA_DMASTATUS2_END_TR_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS3                               0x0000033c
#define AVR32_USBA_DMASTATUS3_BUFF_COUNT                            16
#define AVR32_USBA_DMASTATUS3_BUFF_COUNT_MASK               0xffff0000
#define AVR32_USBA_DMASTATUS3_BUFF_COUNT_OFFSET                     16
#define AVR32_USBA_DMASTATUS3_BUFF_COUNT_SIZE                       16
#define AVR32_USBA_DMASTATUS3_CHANN_ACT                              1
#define AVR32_USBA_DMASTATUS3_CHANN_ACT_MASK                0x00000002
#define AVR32_USBA_DMASTATUS3_CHANN_ACT_OFFSET                       1
#define AVR32_USBA_DMASTATUS3_CHANN_ACT_SIZE                         1
#define AVR32_USBA_DMASTATUS3_CHANN_ENB                              0
#define AVR32_USBA_DMASTATUS3_CHANN_ENB_MASK                0x00000001
#define AVR32_USBA_DMASTATUS3_CHANN_ENB_OFFSET                       0
#define AVR32_USBA_DMASTATUS3_CHANN_ENB_SIZE                         1
#define AVR32_USBA_DMASTATUS3_DESC_LDST                              6
#define AVR32_USBA_DMASTATUS3_DESC_LDST_MASK                0x00000040
#define AVR32_USBA_DMASTATUS3_DESC_LDST_OFFSET                       6
#define AVR32_USBA_DMASTATUS3_DESC_LDST_SIZE                         1
#define AVR32_USBA_DMASTATUS3_END_BF_ST                              5
#define AVR32_USBA_DMASTATUS3_END_BF_ST_MASK                0x00000020
#define AVR32_USBA_DMASTATUS3_END_BF_ST_OFFSET                       5
#define AVR32_USBA_DMASTATUS3_END_BF_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS3_END_TR_ST                              4
#define AVR32_USBA_DMASTATUS3_END_TR_ST_MASK                0x00000010
#define AVR32_USBA_DMASTATUS3_END_TR_ST_OFFSET                       4
#define AVR32_USBA_DMASTATUS3_END_TR_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS4                               0x0000034c
#define AVR32_USBA_DMASTATUS4_BUFF_COUNT                            16
#define AVR32_USBA_DMASTATUS4_BUFF_COUNT_MASK               0xffff0000
#define AVR32_USBA_DMASTATUS4_BUFF_COUNT_OFFSET                     16
#define AVR32_USBA_DMASTATUS4_BUFF_COUNT_SIZE                       16
#define AVR32_USBA_DMASTATUS4_CHANN_ACT                              1
#define AVR32_USBA_DMASTATUS4_CHANN_ACT_MASK                0x00000002
#define AVR32_USBA_DMASTATUS4_CHANN_ACT_OFFSET                       1
#define AVR32_USBA_DMASTATUS4_CHANN_ACT_SIZE                         1
#define AVR32_USBA_DMASTATUS4_CHANN_ENB                              0
#define AVR32_USBA_DMASTATUS4_CHANN_ENB_MASK                0x00000001
#define AVR32_USBA_DMASTATUS4_CHANN_ENB_OFFSET                       0
#define AVR32_USBA_DMASTATUS4_CHANN_ENB_SIZE                         1
#define AVR32_USBA_DMASTATUS4_DESC_LDST                              6
#define AVR32_USBA_DMASTATUS4_DESC_LDST_MASK                0x00000040
#define AVR32_USBA_DMASTATUS4_DESC_LDST_OFFSET                       6
#define AVR32_USBA_DMASTATUS4_DESC_LDST_SIZE                         1
#define AVR32_USBA_DMASTATUS4_END_BF_ST                              5
#define AVR32_USBA_DMASTATUS4_END_BF_ST_MASK                0x00000020
#define AVR32_USBA_DMASTATUS4_END_BF_ST_OFFSET                       5
#define AVR32_USBA_DMASTATUS4_END_BF_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS4_END_TR_ST                              4
#define AVR32_USBA_DMASTATUS4_END_TR_ST_MASK                0x00000010
#define AVR32_USBA_DMASTATUS4_END_TR_ST_OFFSET                       4
#define AVR32_USBA_DMASTATUS4_END_TR_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS5                               0x0000035c
#define AVR32_USBA_DMASTATUS5_BUFF_COUNT                            16
#define AVR32_USBA_DMASTATUS5_BUFF_COUNT_MASK               0xffff0000
#define AVR32_USBA_DMASTATUS5_BUFF_COUNT_OFFSET                     16
#define AVR32_USBA_DMASTATUS5_BUFF_COUNT_SIZE                       16
#define AVR32_USBA_DMASTATUS5_CHANN_ACT                              1
#define AVR32_USBA_DMASTATUS5_CHANN_ACT_MASK                0x00000002
#define AVR32_USBA_DMASTATUS5_CHANN_ACT_OFFSET                       1
#define AVR32_USBA_DMASTATUS5_CHANN_ACT_SIZE                         1
#define AVR32_USBA_DMASTATUS5_CHANN_ENB                              0
#define AVR32_USBA_DMASTATUS5_CHANN_ENB_MASK                0x00000001
#define AVR32_USBA_DMASTATUS5_CHANN_ENB_OFFSET                       0
#define AVR32_USBA_DMASTATUS5_CHANN_ENB_SIZE                         1
#define AVR32_USBA_DMASTATUS5_DESC_LDST                              6
#define AVR32_USBA_DMASTATUS5_DESC_LDST_MASK                0x00000040
#define AVR32_USBA_DMASTATUS5_DESC_LDST_OFFSET                       6
#define AVR32_USBA_DMASTATUS5_DESC_LDST_SIZE                         1
#define AVR32_USBA_DMASTATUS5_END_BF_ST                              5
#define AVR32_USBA_DMASTATUS5_END_BF_ST_MASK                0x00000020
#define AVR32_USBA_DMASTATUS5_END_BF_ST_OFFSET                       5
#define AVR32_USBA_DMASTATUS5_END_BF_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS5_END_TR_ST                              4
#define AVR32_USBA_DMASTATUS5_END_TR_ST_MASK                0x00000010
#define AVR32_USBA_DMASTATUS5_END_TR_ST_OFFSET                       4
#define AVR32_USBA_DMASTATUS5_END_TR_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS6                               0x0000036c
#define AVR32_USBA_DMASTATUS6_BUFF_COUNT                            16
#define AVR32_USBA_DMASTATUS6_BUFF_COUNT_MASK               0xffff0000
#define AVR32_USBA_DMASTATUS6_BUFF_COUNT_OFFSET                     16
#define AVR32_USBA_DMASTATUS6_BUFF_COUNT_SIZE                       16
#define AVR32_USBA_DMASTATUS6_CHANN_ACT                              1
#define AVR32_USBA_DMASTATUS6_CHANN_ACT_MASK                0x00000002
#define AVR32_USBA_DMASTATUS6_CHANN_ACT_OFFSET                       1
#define AVR32_USBA_DMASTATUS6_CHANN_ACT_SIZE                         1
#define AVR32_USBA_DMASTATUS6_CHANN_ENB                              0
#define AVR32_USBA_DMASTATUS6_CHANN_ENB_MASK                0x00000001
#define AVR32_USBA_DMASTATUS6_CHANN_ENB_OFFSET                       0
#define AVR32_USBA_DMASTATUS6_CHANN_ENB_SIZE                         1
#define AVR32_USBA_DMASTATUS6_DESC_LDST                              6
#define AVR32_USBA_DMASTATUS6_DESC_LDST_MASK                0x00000040
#define AVR32_USBA_DMASTATUS6_DESC_LDST_OFFSET                       6
#define AVR32_USBA_DMASTATUS6_DESC_LDST_SIZE                         1
#define AVR32_USBA_DMASTATUS6_END_BF_ST                              5
#define AVR32_USBA_DMASTATUS6_END_BF_ST_MASK                0x00000020
#define AVR32_USBA_DMASTATUS6_END_BF_ST_OFFSET                       5
#define AVR32_USBA_DMASTATUS6_END_BF_ST_SIZE                         1
#define AVR32_USBA_DMASTATUS6_END_TR_ST                              4
#define AVR32_USBA_DMASTATUS6_END_TR_ST_MASK                0x00000010
#define AVR32_USBA_DMASTATUS6_END_TR_ST_OFFSET                       4
#define AVR32_USBA_DMASTATUS6_END_TR_ST_SIZE                         1
#define AVR32_USBA_DMA_B_SIZ                                         7
#define AVR32_USBA_DMA_B_SIZ_MASK                           0x00000080
#define AVR32_USBA_DMA_B_SIZ_OFFSET                                  7
#define AVR32_USBA_DMA_B_SIZ_SIZE                                    1
#define AVR32_USBA_DMA_CHANNEL_NBR                                   4
#define AVR32_USBA_DMA_CHANNEL_NBR_MASK                     0x00000070
#define AVR32_USBA_DMA_CHANNEL_NBR_OFFSET                            4
#define AVR32_USBA_DMA_CHANNEL_NBR_SIZE                              3
#define AVR32_USBA_DMA_FIFO_WORD_DEPTH                               8
#define AVR32_USBA_DMA_FIFO_WORD_DEPTH_MASK                 0x00000f00
#define AVR32_USBA_DMA_FIFO_WORD_DEPTH_OFFSET                        8
#define AVR32_USBA_DMA_FIFO_WORD_DEPTH_SIZE                          4
#define AVR32_USBA_DMA_INT_1                                        25
#define AVR32_USBA_DMA_INT_1_MASK                           0x02000000
#define AVR32_USBA_DMA_INT_1_OFFSET                                 25
#define AVR32_USBA_DMA_INT_1_SIZE                                    1
#define AVR32_USBA_DMA_INT_2                                        26
#define AVR32_USBA_DMA_INT_2_MASK                           0x04000000
#define AVR32_USBA_DMA_INT_2_OFFSET                                 26
#define AVR32_USBA_DMA_INT_2_SIZE                                    1
#define AVR32_USBA_DMA_INT_3                                        27
#define AVR32_USBA_DMA_INT_3_MASK                           0x08000000
#define AVR32_USBA_DMA_INT_3_OFFSET                                 27
#define AVR32_USBA_DMA_INT_3_SIZE                                    1
#define AVR32_USBA_DMA_INT_4                                        28
#define AVR32_USBA_DMA_INT_4_MASK                           0x10000000
#define AVR32_USBA_DMA_INT_4_OFFSET                                 28
#define AVR32_USBA_DMA_INT_4_SIZE                                    1
#define AVR32_USBA_DMA_INT_5                                        29
#define AVR32_USBA_DMA_INT_5_MASK                           0x20000000
#define AVR32_USBA_DMA_INT_5_OFFSET                                 29
#define AVR32_USBA_DMA_INT_5_SIZE                                    1
#define AVR32_USBA_DMA_INT_6                                        30
#define AVR32_USBA_DMA_INT_6_MASK                           0x40000000
#define AVR32_USBA_DMA_INT_6_OFFSET                                 30
#define AVR32_USBA_DMA_INT_6_SIZE                                    1
#define AVR32_USBA_DOUBLE                                   0x00000002
#define AVR32_USBA_ENDOFRSM                                          6
#define AVR32_USBA_ENDOFRSM_MASK                            0x00000040
#define AVR32_USBA_ENDOFRSM_OFFSET                                   6
#define AVR32_USBA_ENDOFRSM_SIZE                                     1
#define AVR32_USBA_ENDRESET                                          4
#define AVR32_USBA_ENDRESET_MASK                            0x00000010
#define AVR32_USBA_ENDRESET_OFFSET                                   4
#define AVR32_USBA_ENDRESET_SIZE                                     1
#define AVR32_USBA_END_BF_ST                                         5
#define AVR32_USBA_END_BF_ST_MASK                           0x00000020
#define AVR32_USBA_END_BF_ST_OFFSET                                  5
#define AVR32_USBA_END_BF_ST_SIZE                                    1
#define AVR32_USBA_END_BUFFIT                                        5
#define AVR32_USBA_END_BUFFIT_MASK                          0x00000020
#define AVR32_USBA_END_BUFFIT_OFFSET                                 5
#define AVR32_USBA_END_BUFFIT_SIZE                                   1
#define AVR32_USBA_END_B_EN                                          3
#define AVR32_USBA_END_B_EN_MASK                            0x00000008
#define AVR32_USBA_END_B_EN_OFFSET                                   3
#define AVR32_USBA_END_B_EN_SIZE                                     1
#define AVR32_USBA_END_TR_EN                                         2
#define AVR32_USBA_END_TR_EN_MASK                           0x00000004
#define AVR32_USBA_END_TR_EN_OFFSET                                  2
#define AVR32_USBA_END_TR_EN_SIZE                                    1
#define AVR32_USBA_END_TR_IT                                         4
#define AVR32_USBA_END_TR_IT_MASK                           0x00000010
#define AVR32_USBA_END_TR_IT_OFFSET                                  4
#define AVR32_USBA_END_TR_IT_SIZE                                    1
#define AVR32_USBA_END_TR_ST                                         4
#define AVR32_USBA_END_TR_ST_MASK                           0x00000010
#define AVR32_USBA_END_TR_ST_OFFSET                                  4
#define AVR32_USBA_END_TR_ST_SIZE                                    1
#define AVR32_USBA_EN_USBA                                           8
#define AVR32_USBA_EN_USBA_MASK                             0x00000100
#define AVR32_USBA_EN_USBA_OFFSET                                    8
#define AVR32_USBA_EN_USBA_SIZE                                      1
#define AVR32_USBA_EPTCFG0                                  0x00000100
#define AVR32_USBA_EPTCFG0_BK_NUMBER                                 6
#define AVR32_USBA_EPTCFG0_BK_NUMBER_DOUBLE                 0x00000002
#define AVR32_USBA_EPTCFG0_BK_NUMBER_MASK                   0x000000c0
#define AVR32_USBA_EPTCFG0_BK_NUMBER_OFFSET                          6
#define AVR32_USBA_EPTCFG0_BK_NUMBER_ONE                    0x00000001
#define AVR32_USBA_EPTCFG0_BK_NUMBER_SIZE                            2
#define AVR32_USBA_EPTCFG0_BK_NUMBER_TRIPLE                 0x00000003
#define AVR32_USBA_EPTCFG0_BK_NUMBER_ZERO                   0x00000000
#define AVR32_USBA_EPTCFG0_EPT_DIR                                   3
#define AVR32_USBA_EPTCFG0_EPT_DIR_MASK                     0x00000008
#define AVR32_USBA_EPTCFG0_EPT_DIR_OFFSET                            3
#define AVR32_USBA_EPTCFG0_EPT_DIR_SIZE                              1
#define AVR32_USBA_EPTCFG0_EPT_MAPD                                 31
#define AVR32_USBA_EPTCFG0_EPT_MAPD_MASK                    0x80000000
#define AVR32_USBA_EPTCFG0_EPT_MAPD_OFFSET                          31
#define AVR32_USBA_EPTCFG0_EPT_MAPD_SIZE                             1
#define AVR32_USBA_EPTCFG0_EPT_SIZE                                  0
#define AVR32_USBA_EPTCFG0_EPT_SIZE_MASK                    0x00000007
#define AVR32_USBA_EPTCFG0_EPT_SIZE_OFFSET                           0
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SIZE                             3
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_1024                 0x00000007
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_128                  0x00000004
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_16                   0x00000001
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_256                  0x00000005
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_32                   0x00000002
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_512                  0x00000006
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_64                   0x00000003
#define AVR32_USBA_EPTCFG0_EPT_SIZE_SZ_8                    0x00000000
#define AVR32_USBA_EPTCFG0_EPT_TYPE                                  4
#define AVR32_USBA_EPTCFG0_EPT_TYPE_BULK                    0x00000002
#define AVR32_USBA_EPTCFG0_EPT_TYPE_CONTROL                 0x00000000
#define AVR32_USBA_EPTCFG0_EPT_TYPE_INT                     0x00000003
#define AVR32_USBA_EPTCFG0_EPT_TYPE_ISO                     0x00000001
#define AVR32_USBA_EPTCFG0_EPT_TYPE_MASK                    0x00000030
#define AVR32_USBA_EPTCFG0_EPT_TYPE_OFFSET                           4
#define AVR32_USBA_EPTCFG0_EPT_TYPE_SIZE                             2
#define AVR32_USBA_EPTCFG0_NB_TRANS                                  8
#define AVR32_USBA_EPTCFG0_NB_TRANS_MASK                    0x00000300
#define AVR32_USBA_EPTCFG0_NB_TRANS_OFFSET                           8
#define AVR32_USBA_EPTCFG0_NB_TRANS_SIZE                             2
#define AVR32_USBA_EPTCFG1                                  0x00000120
#define AVR32_USBA_EPTCFG1_BK_NUMBER                                 6
#define AVR32_USBA_EPTCFG1_BK_NUMBER_DOUBLE                 0x00000002
#define AVR32_USBA_EPTCFG1_BK_NUMBER_MASK                   0x000000c0
#define AVR32_USBA_EPTCFG1_BK_NUMBER_OFFSET                          6
#define AVR32_USBA_EPTCFG1_BK_NUMBER_ONE                    0x00000001
#define AVR32_USBA_EPTCFG1_BK_NUMBER_SIZE                            2
#define AVR32_USBA_EPTCFG1_BK_NUMBER_TRIPLE                 0x00000003
#define AVR32_USBA_EPTCFG1_BK_NUMBER_ZERO                   0x00000000
#define AVR32_USBA_EPTCFG1_EPT_DIR                                   3
#define AVR32_USBA_EPTCFG1_EPT_DIR_MASK                     0x00000008
#define AVR32_USBA_EPTCFG1_EPT_DIR_OFFSET                            3
#define AVR32_USBA_EPTCFG1_EPT_DIR_SIZE                              1
#define AVR32_USBA_EPTCFG1_EPT_MAPD                                 31
#define AVR32_USBA_EPTCFG1_EPT_MAPD_MASK                    0x80000000
#define AVR32_USBA_EPTCFG1_EPT_MAPD_OFFSET                          31
#define AVR32_USBA_EPTCFG1_EPT_MAPD_SIZE                             1
#define AVR32_USBA_EPTCFG1_EPT_SIZE                                  0
#define AVR32_USBA_EPTCFG1_EPT_SIZE_MASK                    0x00000007
#define AVR32_USBA_EPTCFG1_EPT_SIZE_OFFSET                           0
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SIZE                             3
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_1024                 0x00000007
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_128                  0x00000004
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_16                   0x00000001
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_256                  0x00000005
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_32                   0x00000002
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_512                  0x00000006
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_64                   0x00000003
#define AVR32_USBA_EPTCFG1_EPT_SIZE_SZ_8                    0x00000000
#define AVR32_USBA_EPTCFG1_EPT_TYPE                                  4
#define AVR32_USBA_EPTCFG1_EPT_TYPE_BULK                    0x00000002
#define AVR32_USBA_EPTCFG1_EPT_TYPE_CONTROL                 0x00000000
#define AVR32_USBA_EPTCFG1_EPT_TYPE_INT                     0x00000003
#define AVR32_USBA_EPTCFG1_EPT_TYPE_ISO                     0x00000001
#define AVR32_USBA_EPTCFG1_EPT_TYPE_MASK                    0x00000030
#define AVR32_USBA_EPTCFG1_EPT_TYPE_OFFSET                           4
#define AVR32_USBA_EPTCFG1_EPT_TYPE_SIZE                             2
#define AVR32_USBA_EPTCFG1_NB_TRANS                                  8
#define AVR32_USBA_EPTCFG1_NB_TRANS_MASK                    0x00000300
#define AVR32_USBA_EPTCFG1_NB_TRANS_OFFSET                           8
#define AVR32_USBA_EPTCFG1_NB_TRANS_SIZE                             2
#define AVR32_USBA_EPTCFG2                                  0x00000140
#define AVR32_USBA_EPTCFG2_BK_NUMBER                                 6
#define AVR32_USBA_EPTCFG2_BK_NUMBER_DOUBLE                 0x00000002
#define AVR32_USBA_EPTCFG2_BK_NUMBER_MASK                   0x000000c0
#define AVR32_USBA_EPTCFG2_BK_NUMBER_OFFSET                          6
#define AVR32_USBA_EPTCFG2_BK_NUMBER_ONE                    0x00000001
#define AVR32_USBA_EPTCFG2_BK_NUMBER_SIZE                            2
#define AVR32_USBA_EPTCFG2_BK_NUMBER_TRIPLE                 0x00000003
#define AVR32_USBA_EPTCFG2_BK_NUMBER_ZERO                   0x00000000
#define AVR32_USBA_EPTCFG2_EPT_DIR                                   3
#define AVR32_USBA_EPTCFG2_EPT_DIR_MASK                     0x00000008
#define AVR32_USBA_EPTCFG2_EPT_DIR_OFFSET                            3
#define AVR32_USBA_EPTCFG2_EPT_DIR_SIZE                              1
#define AVR32_USBA_EPTCFG2_EPT_MAPD                                 31
#define AVR32_USBA_EPTCFG2_EPT_MAPD_MASK                    0x80000000
#define AVR32_USBA_EPTCFG2_EPT_MAPD_OFFSET                          31
#define AVR32_USBA_EPTCFG2_EPT_MAPD_SIZE                             1
#define AVR32_USBA_EPTCFG2_EPT_SIZE                                  0
#define AVR32_USBA_EPTCFG2_EPT_SIZE_MASK                    0x00000007
#define AVR32_USBA_EPTCFG2_EPT_SIZE_OFFSET                           0
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SIZE                             3
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_1024                 0x00000007
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_128                  0x00000004
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_16                   0x00000001
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_256                  0x00000005
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_32                   0x00000002
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_512                  0x00000006
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_64                   0x00000003
#define AVR32_USBA_EPTCFG2_EPT_SIZE_SZ_8                    0x00000000
#define AVR32_USBA_EPTCFG2_EPT_TYPE                                  4
#define AVR32_USBA_EPTCFG2_EPT_TYPE_BULK                    0x00000002
#define AVR32_USBA_EPTCFG2_EPT_TYPE_CONTROL                 0x00000000
#define AVR32_USBA_EPTCFG2_EPT_TYPE_INT                     0x00000003
#define AVR32_USBA_EPTCFG2_EPT_TYPE_ISO                     0x00000001
#define AVR32_USBA_EPTCFG2_EPT_TYPE_MASK                    0x00000030
#define AVR32_USBA_EPTCFG2_EPT_TYPE_OFFSET                           4
#define AVR32_USBA_EPTCFG2_EPT_TYPE_SIZE                             2
#define AVR32_USBA_EPTCFG2_NB_TRANS                                  8
#define AVR32_USBA_EPTCFG2_NB_TRANS_MASK                    0x00000300
#define AVR32_USBA_EPTCFG2_NB_TRANS_OFFSET                           8
#define AVR32_USBA_EPTCFG2_NB_TRANS_SIZE                             2
#define AVR32_USBA_EPTCFG3                                  0x00000160
#define AVR32_USBA_EPTCFG3_BK_NUMBER                                 6
#define AVR32_USBA_EPTCFG3_BK_NUMBER_DOUBLE                 0x00000002
#define AVR32_USBA_EPTCFG3_BK_NUMBER_MASK                   0x000000c0
#define AVR32_USBA_EPTCFG3_BK_NUMBER_OFFSET                          6
#define AVR32_USBA_EPTCFG3_BK_NUMBER_ONE                    0x00000001
#define AVR32_USBA_EPTCFG3_BK_NUMBER_SIZE                            2
#define AVR32_USBA_EPTCFG3_BK_NUMBER_TRIPLE                 0x00000003
#define AVR32_USBA_EPTCFG3_BK_NUMBER_ZERO                   0x00000000
#define AVR32_USBA_EPTCFG3_EPT_DIR                                   3
#define AVR32_USBA_EPTCFG3_EPT_DIR_MASK                     0x00000008
#define AVR32_USBA_EPTCFG3_EPT_DIR_OFFSET                            3
#define AVR32_USBA_EPTCFG3_EPT_DIR_SIZE                              1
#define AVR32_USBA_EPTCFG3_EPT_MAPD                                 31
#define AVR32_USBA_EPTCFG3_EPT_MAPD_MASK                    0x80000000
#define AVR32_USBA_EPTCFG3_EPT_MAPD_OFFSET                          31
#define AVR32_USBA_EPTCFG3_EPT_MAPD_SIZE                             1
#define AVR32_USBA_EPTCFG3_EPT_SIZE                                  0
#define AVR32_USBA_EPTCFG3_EPT_SIZE_MASK                    0x00000007
#define AVR32_USBA_EPTCFG3_EPT_SIZE_OFFSET                           0
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SIZE                             3
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_1024                 0x00000007
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_128                  0x00000004
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_16                   0x00000001
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_256                  0x00000005
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_32                   0x00000002
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_512                  0x00000006
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_64                   0x00000003
#define AVR32_USBA_EPTCFG3_EPT_SIZE_SZ_8                    0x00000000
#define AVR32_USBA_EPTCFG3_EPT_TYPE                                  4
#define AVR32_USBA_EPTCFG3_EPT_TYPE_BULK                    0x00000002
#define AVR32_USBA_EPTCFG3_EPT_TYPE_CONTROL                 0x00000000
#define AVR32_USBA_EPTCFG3_EPT_TYPE_INT                     0x00000003
#define AVR32_USBA_EPTCFG3_EPT_TYPE_ISO                     0x00000001
#define AVR32_USBA_EPTCFG3_EPT_TYPE_MASK                    0x00000030
#define AVR32_USBA_EPTCFG3_EPT_TYPE_OFFSET                           4
#define AVR32_USBA_EPTCFG3_EPT_TYPE_SIZE                             2
#define AVR32_USBA_EPTCFG3_NB_TRANS                                  8
#define AVR32_USBA_EPTCFG3_NB_TRANS_MASK                    0x00000300
#define AVR32_USBA_EPTCFG3_NB_TRANS_OFFSET                           8
#define AVR32_USBA_EPTCFG3_NB_TRANS_SIZE                             2
#define AVR32_USBA_EPTCFG4                                  0x00000180
#define AVR32_USBA_EPTCFG4_BK_NUMBER                                 6
#define AVR32_USBA_EPTCFG4_BK_NUMBER_DOUBLE                 0x00000002
#define AVR32_USBA_EPTCFG4_BK_NUMBER_MASK                   0x000000c0
#define AVR32_USBA_EPTCFG4_BK_NUMBER_OFFSET                          6
#define AVR32_USBA_EPTCFG4_BK_NUMBER_ONE                    0x00000001
#define AVR32_USBA_EPTCFG4_BK_NUMBER_SIZE                            2
#define AVR32_USBA_EPTCFG4_BK_NUMBER_TRIPLE                 0x00000003
#define AVR32_USBA_EPTCFG4_BK_NUMBER_ZERO                   0x00000000
#define AVR32_USBA_EPTCFG4_EPT_DIR                                   3
#define AVR32_USBA_EPTCFG4_EPT_DIR_MASK                     0x00000008
#define AVR32_USBA_EPTCFG4_EPT_DIR_OFFSET                            3
#define AVR32_USBA_EPTCFG4_EPT_DIR_SIZE                              1
#define AVR32_USBA_EPTCFG4_EPT_MAPD                                 31
#define AVR32_USBA_EPTCFG4_EPT_MAPD_MASK                    0x80000000
#define AVR32_USBA_EPTCFG4_EPT_MAPD_OFFSET                          31
#define AVR32_USBA_EPTCFG4_EPT_MAPD_SIZE                             1
#define AVR32_USBA_EPTCFG4_EPT_SIZE                                  0
#define AVR32_USBA_EPTCFG4_EPT_SIZE_MASK                    0x00000007
#define AVR32_USBA_EPTCFG4_EPT_SIZE_OFFSET                           0
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SIZE                             3
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_1024                 0x00000007
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_128                  0x00000004
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_16                   0x00000001
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_256                  0x00000005
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_32                   0x00000002
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_512                  0x00000006
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_64                   0x00000003
#define AVR32_USBA_EPTCFG4_EPT_SIZE_SZ_8                    0x00000000
#define AVR32_USBA_EPTCFG4_EPT_TYPE                                  4
#define AVR32_USBA_EPTCFG4_EPT_TYPE_BULK                    0x00000002
#define AVR32_USBA_EPTCFG4_EPT_TYPE_CONTROL                 0x00000000
#define AVR32_USBA_EPTCFG4_EPT_TYPE_INT                     0x00000003
#define AVR32_USBA_EPTCFG4_EPT_TYPE_ISO                     0x00000001
#define AVR32_USBA_EPTCFG4_EPT_TYPE_MASK                    0x00000030
#define AVR32_USBA_EPTCFG4_EPT_TYPE_OFFSET                           4
#define AVR32_USBA_EPTCFG4_EPT_TYPE_SIZE                             2
#define AVR32_USBA_EPTCFG4_NB_TRANS                                  8
#define AVR32_USBA_EPTCFG4_NB_TRANS_MASK                    0x00000300
#define AVR32_USBA_EPTCFG4_NB_TRANS_OFFSET                           8
#define AVR32_USBA_EPTCFG4_NB_TRANS_SIZE                             2
#define AVR32_USBA_EPTCFG5                                  0x000001a0
#define AVR32_USBA_EPTCFG5_BK_NUMBER                                 6
#define AVR32_USBA_EPTCFG5_BK_NUMBER_DOUBLE                 0x00000002
#define AVR32_USBA_EPTCFG5_BK_NUMBER_MASK                   0x000000c0
#define AVR32_USBA_EPTCFG5_BK_NUMBER_OFFSET                          6
#define AVR32_USBA_EPTCFG5_BK_NUMBER_ONE                    0x00000001
#define AVR32_USBA_EPTCFG5_BK_NUMBER_SIZE                            2
#define AVR32_USBA_EPTCFG5_BK_NUMBER_TRIPLE                 0x00000003
#define AVR32_USBA_EPTCFG5_BK_NUMBER_ZERO                   0x00000000
#define AVR32_USBA_EPTCFG5_EPT_DIR                                   3
#define AVR32_USBA_EPTCFG5_EPT_DIR_MASK                     0x00000008
#define AVR32_USBA_EPTCFG5_EPT_DIR_OFFSET                            3
#define AVR32_USBA_EPTCFG5_EPT_DIR_SIZE                              1
#define AVR32_USBA_EPTCFG5_EPT_MAPD                                 31
#define AVR32_USBA_EPTCFG5_EPT_MAPD_MASK                    0x80000000
#define AVR32_USBA_EPTCFG5_EPT_MAPD_OFFSET                          31
#define AVR32_USBA_EPTCFG5_EPT_MAPD_SIZE                             1
#define AVR32_USBA_EPTCFG5_EPT_SIZE                                  0
#define AVR32_USBA_EPTCFG5_EPT_SIZE_MASK                    0x00000007
#define AVR32_USBA_EPTCFG5_EPT_SIZE_OFFSET                           0
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SIZE                             3
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_1024                 0x00000007
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_128                  0x00000004
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_16                   0x00000001
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_256                  0x00000005
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_32                   0x00000002
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_512                  0x00000006
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_64                   0x00000003
#define AVR32_USBA_EPTCFG5_EPT_SIZE_SZ_8                    0x00000000
#define AVR32_USBA_EPTCFG5_EPT_TYPE                                  4
#define AVR32_USBA_EPTCFG5_EPT_TYPE_BULK                    0x00000002
#define AVR32_USBA_EPTCFG5_EPT_TYPE_CONTROL                 0x00000000
#define AVR32_USBA_EPTCFG5_EPT_TYPE_INT                     0x00000003
#define AVR32_USBA_EPTCFG5_EPT_TYPE_ISO                     0x00000001
#define AVR32_USBA_EPTCFG5_EPT_TYPE_MASK                    0x00000030
#define AVR32_USBA_EPTCFG5_EPT_TYPE_OFFSET                           4
#define AVR32_USBA_EPTCFG5_EPT_TYPE_SIZE                             2
#define AVR32_USBA_EPTCFG5_NB_TRANS                                  8
#define AVR32_USBA_EPTCFG5_NB_TRANS_MASK                    0x00000300
#define AVR32_USBA_EPTCFG5_NB_TRANS_OFFSET                           8
#define AVR32_USBA_EPTCFG5_NB_TRANS_SIZE                             2
#define AVR32_USBA_EPTCFG6                                  0x000001c0
#define AVR32_USBA_EPTCFG6_BK_NUMBER                                 6
#define AVR32_USBA_EPTCFG6_BK_NUMBER_DOUBLE                 0x00000002
#define AVR32_USBA_EPTCFG6_BK_NUMBER_MASK                   0x000000c0
#define AVR32_USBA_EPTCFG6_BK_NUMBER_OFFSET                          6
#define AVR32_USBA_EPTCFG6_BK_NUMBER_ONE                    0x00000001
#define AVR32_USBA_EPTCFG6_BK_NUMBER_SIZE                            2
#define AVR32_USBA_EPTCFG6_BK_NUMBER_TRIPLE                 0x00000003
#define AVR32_USBA_EPTCFG6_BK_NUMBER_ZERO                   0x00000000
#define AVR32_USBA_EPTCFG6_EPT_DIR                                   3
#define AVR32_USBA_EPTCFG6_EPT_DIR_MASK                     0x00000008
#define AVR32_USBA_EPTCFG6_EPT_DIR_OFFSET                            3
#define AVR32_USBA_EPTCFG6_EPT_DIR_SIZE                              1
#define AVR32_USBA_EPTCFG6_EPT_MAPD                                 31
#define AVR32_USBA_EPTCFG6_EPT_MAPD_MASK                    0x80000000
#define AVR32_USBA_EPTCFG6_EPT_MAPD_OFFSET                          31
#define AVR32_USBA_EPTCFG6_EPT_MAPD_SIZE                             1
#define AVR32_USBA_EPTCFG6_EPT_SIZE                                  0
#define AVR32_USBA_EPTCFG6_EPT_SIZE_MASK                    0x00000007
#define AVR32_USBA_EPTCFG6_EPT_SIZE_OFFSET                           0
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SIZE                             3
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_1024                 0x00000007
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_128                  0x00000004
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_16                   0x00000001
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_256                  0x00000005
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_32                   0x00000002
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_512                  0x00000006
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_64                   0x00000003
#define AVR32_USBA_EPTCFG6_EPT_SIZE_SZ_8                    0x00000000
#define AVR32_USBA_EPTCFG6_EPT_TYPE                                  4
#define AVR32_USBA_EPTCFG6_EPT_TYPE_BULK                    0x00000002
#define AVR32_USBA_EPTCFG6_EPT_TYPE_CONTROL                 0x00000000
#define AVR32_USBA_EPTCFG6_EPT_TYPE_INT                     0x00000003
#define AVR32_USBA_EPTCFG6_EPT_TYPE_ISO                     0x00000001
#define AVR32_USBA_EPTCFG6_EPT_TYPE_MASK                    0x00000030
#define AVR32_USBA_EPTCFG6_EPT_TYPE_OFFSET                           4
#define AVR32_USBA_EPTCFG6_EPT_TYPE_SIZE                             2
#define AVR32_USBA_EPTCFG6_NB_TRANS                                  8
#define AVR32_USBA_EPTCFG6_NB_TRANS_MASK                    0x00000300
#define AVR32_USBA_EPTCFG6_NB_TRANS_OFFSET                           8
#define AVR32_USBA_EPTCFG6_NB_TRANS_SIZE                             2
#define AVR32_USBA_EPTCLRSTA0                               0x00000118
#define AVR32_USBA_EPTCLRSTA0_ERR_FLUSH                             14
#define AVR32_USBA_EPTCLRSTA0_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCLRSTA0_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCLRSTA0_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCLRSTA0_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCLRSTA0_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCLRSTA0_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCLRSTA0_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCLRSTA0_ERR_NBTRA                             13
#define AVR32_USBA_EPTCLRSTA0_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA0_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA0_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCLRSTA0_FRCESTALL                              5
#define AVR32_USBA_EPTCLRSTA0_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTCLRSTA0_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTCLRSTA0_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTCLRSTA0_NAK_IN                                14
#define AVR32_USBA_EPTCLRSTA0_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCLRSTA0_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCLRSTA0_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCLRSTA0_NAK_OUT                               15
#define AVR32_USBA_EPTCLRSTA0_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCLRSTA0_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCLRSTA0_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCLRSTA0_RX_BK_RDY                              9
#define AVR32_USBA_EPTCLRSTA0_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCLRSTA0_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCLRSTA0_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCLRSTA0_RX_SETUP                              12
#define AVR32_USBA_EPTCLRSTA0_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCLRSTA0_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCLRSTA0_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCLRSTA0_STALL_SNT                             13
#define AVR32_USBA_EPTCLRSTA0_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA0_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA0_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA0_TOGGLESQ                               6
#define AVR32_USBA_EPTCLRSTA0_TOGGLESQ_MASK                 0x00000040
#define AVR32_USBA_EPTCLRSTA0_TOGGLESQ_OFFSET                        6
#define AVR32_USBA_EPTCLRSTA0_TOGGLESQ_SIZE                          1
#define AVR32_USBA_EPTCLRSTA0_TX_COMPLT                             10
#define AVR32_USBA_EPTCLRSTA0_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCLRSTA0_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCLRSTA0_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA1                               0x00000138
#define AVR32_USBA_EPTCLRSTA1_ERR_FLUSH                             14
#define AVR32_USBA_EPTCLRSTA1_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCLRSTA1_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCLRSTA1_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCLRSTA1_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCLRSTA1_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCLRSTA1_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCLRSTA1_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCLRSTA1_ERR_NBTRA                             13
#define AVR32_USBA_EPTCLRSTA1_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA1_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA1_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCLRSTA1_FRCESTALL                              5
#define AVR32_USBA_EPTCLRSTA1_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTCLRSTA1_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTCLRSTA1_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTCLRSTA1_NAK_IN                                14
#define AVR32_USBA_EPTCLRSTA1_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCLRSTA1_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCLRSTA1_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCLRSTA1_NAK_OUT                               15
#define AVR32_USBA_EPTCLRSTA1_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCLRSTA1_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCLRSTA1_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCLRSTA1_RX_BK_RDY                              9
#define AVR32_USBA_EPTCLRSTA1_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCLRSTA1_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCLRSTA1_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCLRSTA1_RX_SETUP                              12
#define AVR32_USBA_EPTCLRSTA1_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCLRSTA1_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCLRSTA1_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCLRSTA1_STALL_SNT                             13
#define AVR32_USBA_EPTCLRSTA1_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA1_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA1_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA1_TOGGLESQ                               6
#define AVR32_USBA_EPTCLRSTA1_TOGGLESQ_MASK                 0x00000040
#define AVR32_USBA_EPTCLRSTA1_TOGGLESQ_OFFSET                        6
#define AVR32_USBA_EPTCLRSTA1_TOGGLESQ_SIZE                          1
#define AVR32_USBA_EPTCLRSTA1_TX_COMPLT                             10
#define AVR32_USBA_EPTCLRSTA1_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCLRSTA1_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCLRSTA1_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA2                               0x00000158
#define AVR32_USBA_EPTCLRSTA2_ERR_FLUSH                             14
#define AVR32_USBA_EPTCLRSTA2_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCLRSTA2_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCLRSTA2_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCLRSTA2_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCLRSTA2_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCLRSTA2_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCLRSTA2_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCLRSTA2_ERR_NBTRA                             13
#define AVR32_USBA_EPTCLRSTA2_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA2_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA2_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCLRSTA2_FRCESTALL                              5
#define AVR32_USBA_EPTCLRSTA2_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTCLRSTA2_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTCLRSTA2_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTCLRSTA2_NAK_IN                                14
#define AVR32_USBA_EPTCLRSTA2_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCLRSTA2_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCLRSTA2_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCLRSTA2_NAK_OUT                               15
#define AVR32_USBA_EPTCLRSTA2_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCLRSTA2_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCLRSTA2_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCLRSTA2_RX_BK_RDY                              9
#define AVR32_USBA_EPTCLRSTA2_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCLRSTA2_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCLRSTA2_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCLRSTA2_RX_SETUP                              12
#define AVR32_USBA_EPTCLRSTA2_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCLRSTA2_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCLRSTA2_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCLRSTA2_STALL_SNT                             13
#define AVR32_USBA_EPTCLRSTA2_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA2_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA2_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA2_TOGGLESQ                               6
#define AVR32_USBA_EPTCLRSTA2_TOGGLESQ_MASK                 0x00000040
#define AVR32_USBA_EPTCLRSTA2_TOGGLESQ_OFFSET                        6
#define AVR32_USBA_EPTCLRSTA2_TOGGLESQ_SIZE                          1
#define AVR32_USBA_EPTCLRSTA2_TX_COMPLT                             10
#define AVR32_USBA_EPTCLRSTA2_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCLRSTA2_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCLRSTA2_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA3                               0x00000178
#define AVR32_USBA_EPTCLRSTA3_ERR_FLUSH                             14
#define AVR32_USBA_EPTCLRSTA3_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCLRSTA3_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCLRSTA3_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCLRSTA3_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCLRSTA3_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCLRSTA3_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCLRSTA3_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCLRSTA3_ERR_NBTRA                             13
#define AVR32_USBA_EPTCLRSTA3_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA3_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA3_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCLRSTA3_FRCESTALL                              5
#define AVR32_USBA_EPTCLRSTA3_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTCLRSTA3_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTCLRSTA3_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTCLRSTA3_NAK_IN                                14
#define AVR32_USBA_EPTCLRSTA3_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCLRSTA3_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCLRSTA3_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCLRSTA3_NAK_OUT                               15
#define AVR32_USBA_EPTCLRSTA3_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCLRSTA3_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCLRSTA3_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCLRSTA3_RX_BK_RDY                              9
#define AVR32_USBA_EPTCLRSTA3_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCLRSTA3_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCLRSTA3_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCLRSTA3_RX_SETUP                              12
#define AVR32_USBA_EPTCLRSTA3_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCLRSTA3_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCLRSTA3_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCLRSTA3_STALL_SNT                             13
#define AVR32_USBA_EPTCLRSTA3_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA3_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA3_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA3_TOGGLESQ                               6
#define AVR32_USBA_EPTCLRSTA3_TOGGLESQ_MASK                 0x00000040
#define AVR32_USBA_EPTCLRSTA3_TOGGLESQ_OFFSET                        6
#define AVR32_USBA_EPTCLRSTA3_TOGGLESQ_SIZE                          1
#define AVR32_USBA_EPTCLRSTA3_TX_COMPLT                             10
#define AVR32_USBA_EPTCLRSTA3_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCLRSTA3_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCLRSTA3_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA4                               0x00000198
#define AVR32_USBA_EPTCLRSTA4_ERR_FLUSH                             14
#define AVR32_USBA_EPTCLRSTA4_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCLRSTA4_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCLRSTA4_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCLRSTA4_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCLRSTA4_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCLRSTA4_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCLRSTA4_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCLRSTA4_ERR_NBTRA                             13
#define AVR32_USBA_EPTCLRSTA4_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA4_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA4_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCLRSTA4_FRCESTALL                              5
#define AVR32_USBA_EPTCLRSTA4_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTCLRSTA4_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTCLRSTA4_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTCLRSTA4_NAK_IN                                14
#define AVR32_USBA_EPTCLRSTA4_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCLRSTA4_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCLRSTA4_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCLRSTA4_NAK_OUT                               15
#define AVR32_USBA_EPTCLRSTA4_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCLRSTA4_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCLRSTA4_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCLRSTA4_RX_BK_RDY                              9
#define AVR32_USBA_EPTCLRSTA4_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCLRSTA4_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCLRSTA4_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCLRSTA4_RX_SETUP                              12
#define AVR32_USBA_EPTCLRSTA4_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCLRSTA4_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCLRSTA4_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCLRSTA4_STALL_SNT                             13
#define AVR32_USBA_EPTCLRSTA4_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA4_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA4_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA4_TOGGLESQ                               6
#define AVR32_USBA_EPTCLRSTA4_TOGGLESQ_MASK                 0x00000040
#define AVR32_USBA_EPTCLRSTA4_TOGGLESQ_OFFSET                        6
#define AVR32_USBA_EPTCLRSTA4_TOGGLESQ_SIZE                          1
#define AVR32_USBA_EPTCLRSTA4_TX_COMPLT                             10
#define AVR32_USBA_EPTCLRSTA4_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCLRSTA4_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCLRSTA4_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA5                               0x000001b8
#define AVR32_USBA_EPTCLRSTA5_ERR_FLUSH                             14
#define AVR32_USBA_EPTCLRSTA5_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCLRSTA5_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCLRSTA5_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCLRSTA5_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCLRSTA5_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCLRSTA5_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCLRSTA5_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCLRSTA5_ERR_NBTRA                             13
#define AVR32_USBA_EPTCLRSTA5_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA5_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA5_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCLRSTA5_FRCESTALL                              5
#define AVR32_USBA_EPTCLRSTA5_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTCLRSTA5_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTCLRSTA5_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTCLRSTA5_NAK_IN                                14
#define AVR32_USBA_EPTCLRSTA5_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCLRSTA5_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCLRSTA5_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCLRSTA5_NAK_OUT                               15
#define AVR32_USBA_EPTCLRSTA5_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCLRSTA5_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCLRSTA5_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCLRSTA5_RX_BK_RDY                              9
#define AVR32_USBA_EPTCLRSTA5_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCLRSTA5_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCLRSTA5_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCLRSTA5_RX_SETUP                              12
#define AVR32_USBA_EPTCLRSTA5_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCLRSTA5_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCLRSTA5_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCLRSTA5_STALL_SNT                             13
#define AVR32_USBA_EPTCLRSTA5_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA5_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA5_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA5_TOGGLESQ                               6
#define AVR32_USBA_EPTCLRSTA5_TOGGLESQ_MASK                 0x00000040
#define AVR32_USBA_EPTCLRSTA5_TOGGLESQ_OFFSET                        6
#define AVR32_USBA_EPTCLRSTA5_TOGGLESQ_SIZE                          1
#define AVR32_USBA_EPTCLRSTA5_TX_COMPLT                             10
#define AVR32_USBA_EPTCLRSTA5_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCLRSTA5_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCLRSTA5_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA6                               0x000001d8
#define AVR32_USBA_EPTCLRSTA6_ERR_FLUSH                             14
#define AVR32_USBA_EPTCLRSTA6_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCLRSTA6_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCLRSTA6_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCLRSTA6_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCLRSTA6_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCLRSTA6_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCLRSTA6_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCLRSTA6_ERR_NBTRA                             13
#define AVR32_USBA_EPTCLRSTA6_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA6_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA6_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCLRSTA6_FRCESTALL                              5
#define AVR32_USBA_EPTCLRSTA6_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTCLRSTA6_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTCLRSTA6_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTCLRSTA6_NAK_IN                                14
#define AVR32_USBA_EPTCLRSTA6_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCLRSTA6_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCLRSTA6_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCLRSTA6_NAK_OUT                               15
#define AVR32_USBA_EPTCLRSTA6_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCLRSTA6_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCLRSTA6_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCLRSTA6_RX_BK_RDY                              9
#define AVR32_USBA_EPTCLRSTA6_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCLRSTA6_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCLRSTA6_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCLRSTA6_RX_SETUP                              12
#define AVR32_USBA_EPTCLRSTA6_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCLRSTA6_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCLRSTA6_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCLRSTA6_STALL_SNT                             13
#define AVR32_USBA_EPTCLRSTA6_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCLRSTA6_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCLRSTA6_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCLRSTA6_TOGGLESQ                               6
#define AVR32_USBA_EPTCLRSTA6_TOGGLESQ_MASK                 0x00000040
#define AVR32_USBA_EPTCLRSTA6_TOGGLESQ_OFFSET                        6
#define AVR32_USBA_EPTCLRSTA6_TOGGLESQ_SIZE                          1
#define AVR32_USBA_EPTCLRSTA6_TX_COMPLT                             10
#define AVR32_USBA_EPTCLRSTA6_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCLRSTA6_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCLRSTA6_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTL0                                  0x0000010c
#define AVR32_USBA_EPTCTL0_AUTO_VALID                                1
#define AVR32_USBA_EPTCTL0_AUTO_VALID_MASK                  0x00000002
#define AVR32_USBA_EPTCTL0_AUTO_VALID_OFFSET                         1
#define AVR32_USBA_EPTCTL0_AUTO_VALID_SIZE                           1
#define AVR32_USBA_EPTCTL0_BUSY_BANK                                18
#define AVR32_USBA_EPTCTL0_BUSY_BANK_MASK                   0x00040000
#define AVR32_USBA_EPTCTL0_BUSY_BANK_OFFSET                         18
#define AVR32_USBA_EPTCTL0_BUSY_BANK_SIZE                            1
#define AVR32_USBA_EPTCTL0_DATAX_RX                                  6
#define AVR32_USBA_EPTCTL0_DATAX_RX_MASK                    0x00000040
#define AVR32_USBA_EPTCTL0_DATAX_RX_OFFSET                           6
#define AVR32_USBA_EPTCTL0_DATAX_RX_SIZE                             1
#define AVR32_USBA_EPTCTL0_EPT_ENABL                                 0
#define AVR32_USBA_EPTCTL0_EPT_ENABL_MASK                   0x00000001
#define AVR32_USBA_EPTCTL0_EPT_ENABL_OFFSET                          0
#define AVR32_USBA_EPTCTL0_EPT_ENABL_SIZE                            1
#define AVR32_USBA_EPTCTL0_ERR_CRISO                                13
#define AVR32_USBA_EPTCTL0_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTCTL0_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTCTL0_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTCTL0_ERR_FLUSH                                14
#define AVR32_USBA_EPTCTL0_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTCTL0_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTCTL0_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTCTL0_ERR_FL_ISO                               12
#define AVR32_USBA_EPTCTL0_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTCTL0_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTCTL0_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTCTL0_ERR_NBTRA                                13
#define AVR32_USBA_EPTCTL0_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTCTL0_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTCTL0_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTCTL0_ERR_OVFLW                                 8
#define AVR32_USBA_EPTCTL0_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTCTL0_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTCTL0_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTCTL0_ERR_TRANS                                11
#define AVR32_USBA_EPTCTL0_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTCTL0_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTCTL0_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTCTL0_INTDIS_DMA                                3
#define AVR32_USBA_EPTCTL0_INTDIS_DMA_MASK                  0x00000008
#define AVR32_USBA_EPTCTL0_INTDIS_DMA_OFFSET                         3
#define AVR32_USBA_EPTCTL0_INTDIS_DMA_SIZE                           1
#define AVR32_USBA_EPTCTL0_MDATA_RX                                  7
#define AVR32_USBA_EPTCTL0_MDATA_RX_MASK                    0x00000080
#define AVR32_USBA_EPTCTL0_MDATA_RX_OFFSET                           7
#define AVR32_USBA_EPTCTL0_MDATA_RX_SIZE                             1
#define AVR32_USBA_EPTCTL0_NAK_IN                                   14
#define AVR32_USBA_EPTCTL0_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTCTL0_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTCTL0_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTCTL0_NAK_OUT                                  15
#define AVR32_USBA_EPTCTL0_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTCTL0_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTCTL0_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTCTL0_NYET_DIS                                  4
#define AVR32_USBA_EPTCTL0_NYET_DIS_MASK                    0x00000010
#define AVR32_USBA_EPTCTL0_NYET_DIS_OFFSET                           4
#define AVR32_USBA_EPTCTL0_NYET_DIS_SIZE                             1
#define AVR32_USBA_EPTCTL0_RX_BK_RDY                                 9
#define AVR32_USBA_EPTCTL0_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTCTL0_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTCTL0_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL0_RX_SETUP                                 12
#define AVR32_USBA_EPTCTL0_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTCTL0_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTCTL0_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTCTL0_SHRT_PCKT                                31
#define AVR32_USBA_EPTCTL0_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTCTL0_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTCTL0_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTCTL0_STALL_SNT                                13
#define AVR32_USBA_EPTCTL0_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTCTL0_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTCTL0_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTCTL0_TX_COMPLT                                10
#define AVR32_USBA_EPTCTL0_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTCTL0_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTCTL0_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTCTL0_TX_PK_RDY                                11
#define AVR32_USBA_EPTCTL0_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTCTL0_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTCTL0_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL1                                  0x0000012c
#define AVR32_USBA_EPTCTL1_AUTO_VALID                                1
#define AVR32_USBA_EPTCTL1_AUTO_VALID_MASK                  0x00000002
#define AVR32_USBA_EPTCTL1_AUTO_VALID_OFFSET                         1
#define AVR32_USBA_EPTCTL1_AUTO_VALID_SIZE                           1
#define AVR32_USBA_EPTCTL1_BUSY_BANK                                18
#define AVR32_USBA_EPTCTL1_BUSY_BANK_MASK                   0x00040000
#define AVR32_USBA_EPTCTL1_BUSY_BANK_OFFSET                         18
#define AVR32_USBA_EPTCTL1_BUSY_BANK_SIZE                            1
#define AVR32_USBA_EPTCTL1_DATAX_RX                                  6
#define AVR32_USBA_EPTCTL1_DATAX_RX_MASK                    0x00000040
#define AVR32_USBA_EPTCTL1_DATAX_RX_OFFSET                           6
#define AVR32_USBA_EPTCTL1_DATAX_RX_SIZE                             1
#define AVR32_USBA_EPTCTL1_EPT_ENABL                                 0
#define AVR32_USBA_EPTCTL1_EPT_ENABL_MASK                   0x00000001
#define AVR32_USBA_EPTCTL1_EPT_ENABL_OFFSET                          0
#define AVR32_USBA_EPTCTL1_EPT_ENABL_SIZE                            1
#define AVR32_USBA_EPTCTL1_ERR_CRISO                                13
#define AVR32_USBA_EPTCTL1_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTCTL1_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTCTL1_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTCTL1_ERR_FLUSH                                14
#define AVR32_USBA_EPTCTL1_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTCTL1_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTCTL1_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTCTL1_ERR_FL_ISO                               12
#define AVR32_USBA_EPTCTL1_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTCTL1_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTCTL1_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTCTL1_ERR_NBTRA                                13
#define AVR32_USBA_EPTCTL1_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTCTL1_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTCTL1_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTCTL1_ERR_OVFLW                                 8
#define AVR32_USBA_EPTCTL1_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTCTL1_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTCTL1_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTCTL1_ERR_TRANS                                11
#define AVR32_USBA_EPTCTL1_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTCTL1_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTCTL1_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTCTL1_INTDIS_DMA                                3
#define AVR32_USBA_EPTCTL1_INTDIS_DMA_MASK                  0x00000008
#define AVR32_USBA_EPTCTL1_INTDIS_DMA_OFFSET                         3
#define AVR32_USBA_EPTCTL1_INTDIS_DMA_SIZE                           1
#define AVR32_USBA_EPTCTL1_MDATA_RX                                  7
#define AVR32_USBA_EPTCTL1_MDATA_RX_MASK                    0x00000080
#define AVR32_USBA_EPTCTL1_MDATA_RX_OFFSET                           7
#define AVR32_USBA_EPTCTL1_MDATA_RX_SIZE                             1
#define AVR32_USBA_EPTCTL1_NAK_IN                                   14
#define AVR32_USBA_EPTCTL1_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTCTL1_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTCTL1_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTCTL1_NAK_OUT                                  15
#define AVR32_USBA_EPTCTL1_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTCTL1_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTCTL1_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTCTL1_NYET_DIS                                  4
#define AVR32_USBA_EPTCTL1_NYET_DIS_MASK                    0x00000010
#define AVR32_USBA_EPTCTL1_NYET_DIS_OFFSET                           4
#define AVR32_USBA_EPTCTL1_NYET_DIS_SIZE                             1
#define AVR32_USBA_EPTCTL1_RX_BK_RDY                                 9
#define AVR32_USBA_EPTCTL1_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTCTL1_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTCTL1_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL1_RX_SETUP                                 12
#define AVR32_USBA_EPTCTL1_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTCTL1_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTCTL1_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTCTL1_SHRT_PCKT                                31
#define AVR32_USBA_EPTCTL1_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTCTL1_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTCTL1_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTCTL1_STALL_SNT                                13
#define AVR32_USBA_EPTCTL1_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTCTL1_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTCTL1_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTCTL1_TX_COMPLT                                10
#define AVR32_USBA_EPTCTL1_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTCTL1_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTCTL1_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTCTL1_TX_PK_RDY                                11
#define AVR32_USBA_EPTCTL1_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTCTL1_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTCTL1_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL2                                  0x0000014c
#define AVR32_USBA_EPTCTL2_AUTO_VALID                                1
#define AVR32_USBA_EPTCTL2_AUTO_VALID_MASK                  0x00000002
#define AVR32_USBA_EPTCTL2_AUTO_VALID_OFFSET                         1
#define AVR32_USBA_EPTCTL2_AUTO_VALID_SIZE                           1
#define AVR32_USBA_EPTCTL2_BUSY_BANK                                18
#define AVR32_USBA_EPTCTL2_BUSY_BANK_MASK                   0x00040000
#define AVR32_USBA_EPTCTL2_BUSY_BANK_OFFSET                         18
#define AVR32_USBA_EPTCTL2_BUSY_BANK_SIZE                            1
#define AVR32_USBA_EPTCTL2_DATAX_RX                                  6
#define AVR32_USBA_EPTCTL2_DATAX_RX_MASK                    0x00000040
#define AVR32_USBA_EPTCTL2_DATAX_RX_OFFSET                           6
#define AVR32_USBA_EPTCTL2_DATAX_RX_SIZE                             1
#define AVR32_USBA_EPTCTL2_EPT_ENABL                                 0
#define AVR32_USBA_EPTCTL2_EPT_ENABL_MASK                   0x00000001
#define AVR32_USBA_EPTCTL2_EPT_ENABL_OFFSET                          0
#define AVR32_USBA_EPTCTL2_EPT_ENABL_SIZE                            1
#define AVR32_USBA_EPTCTL2_ERR_CRISO                                13
#define AVR32_USBA_EPTCTL2_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTCTL2_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTCTL2_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTCTL2_ERR_FLUSH                                14
#define AVR32_USBA_EPTCTL2_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTCTL2_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTCTL2_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTCTL2_ERR_FL_ISO                               12
#define AVR32_USBA_EPTCTL2_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTCTL2_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTCTL2_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTCTL2_ERR_NBTRA                                13
#define AVR32_USBA_EPTCTL2_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTCTL2_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTCTL2_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTCTL2_ERR_OVFLW                                 8
#define AVR32_USBA_EPTCTL2_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTCTL2_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTCTL2_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTCTL2_ERR_TRANS                                11
#define AVR32_USBA_EPTCTL2_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTCTL2_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTCTL2_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTCTL2_INTDIS_DMA                                3
#define AVR32_USBA_EPTCTL2_INTDIS_DMA_MASK                  0x00000008
#define AVR32_USBA_EPTCTL2_INTDIS_DMA_OFFSET                         3
#define AVR32_USBA_EPTCTL2_INTDIS_DMA_SIZE                           1
#define AVR32_USBA_EPTCTL2_MDATA_RX                                  7
#define AVR32_USBA_EPTCTL2_MDATA_RX_MASK                    0x00000080
#define AVR32_USBA_EPTCTL2_MDATA_RX_OFFSET                           7
#define AVR32_USBA_EPTCTL2_MDATA_RX_SIZE                             1
#define AVR32_USBA_EPTCTL2_NAK_IN                                   14
#define AVR32_USBA_EPTCTL2_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTCTL2_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTCTL2_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTCTL2_NAK_OUT                                  15
#define AVR32_USBA_EPTCTL2_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTCTL2_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTCTL2_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTCTL2_NYET_DIS                                  4
#define AVR32_USBA_EPTCTL2_NYET_DIS_MASK                    0x00000010
#define AVR32_USBA_EPTCTL2_NYET_DIS_OFFSET                           4
#define AVR32_USBA_EPTCTL2_NYET_DIS_SIZE                             1
#define AVR32_USBA_EPTCTL2_RX_BK_RDY                                 9
#define AVR32_USBA_EPTCTL2_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTCTL2_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTCTL2_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL2_RX_SETUP                                 12
#define AVR32_USBA_EPTCTL2_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTCTL2_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTCTL2_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTCTL2_SHRT_PCKT                                31
#define AVR32_USBA_EPTCTL2_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTCTL2_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTCTL2_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTCTL2_STALL_SNT                                13
#define AVR32_USBA_EPTCTL2_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTCTL2_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTCTL2_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTCTL2_TX_COMPLT                                10
#define AVR32_USBA_EPTCTL2_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTCTL2_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTCTL2_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTCTL2_TX_PK_RDY                                11
#define AVR32_USBA_EPTCTL2_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTCTL2_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTCTL2_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL3                                  0x0000016c
#define AVR32_USBA_EPTCTL3_AUTO_VALID                                1
#define AVR32_USBA_EPTCTL3_AUTO_VALID_MASK                  0x00000002
#define AVR32_USBA_EPTCTL3_AUTO_VALID_OFFSET                         1
#define AVR32_USBA_EPTCTL3_AUTO_VALID_SIZE                           1
#define AVR32_USBA_EPTCTL3_BUSY_BANK                                18
#define AVR32_USBA_EPTCTL3_BUSY_BANK_MASK                   0x00040000
#define AVR32_USBA_EPTCTL3_BUSY_BANK_OFFSET                         18
#define AVR32_USBA_EPTCTL3_BUSY_BANK_SIZE                            1
#define AVR32_USBA_EPTCTL3_DATAX_RX                                  6
#define AVR32_USBA_EPTCTL3_DATAX_RX_MASK                    0x00000040
#define AVR32_USBA_EPTCTL3_DATAX_RX_OFFSET                           6
#define AVR32_USBA_EPTCTL3_DATAX_RX_SIZE                             1
#define AVR32_USBA_EPTCTL3_EPT_ENABL                                 0
#define AVR32_USBA_EPTCTL3_EPT_ENABL_MASK                   0x00000001
#define AVR32_USBA_EPTCTL3_EPT_ENABL_OFFSET                          0
#define AVR32_USBA_EPTCTL3_EPT_ENABL_SIZE                            1
#define AVR32_USBA_EPTCTL3_ERR_CRISO                                13
#define AVR32_USBA_EPTCTL3_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTCTL3_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTCTL3_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTCTL3_ERR_FLUSH                                14
#define AVR32_USBA_EPTCTL3_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTCTL3_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTCTL3_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTCTL3_ERR_FL_ISO                               12
#define AVR32_USBA_EPTCTL3_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTCTL3_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTCTL3_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTCTL3_ERR_NBTRA                                13
#define AVR32_USBA_EPTCTL3_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTCTL3_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTCTL3_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTCTL3_ERR_OVFLW                                 8
#define AVR32_USBA_EPTCTL3_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTCTL3_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTCTL3_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTCTL3_ERR_TRANS                                11
#define AVR32_USBA_EPTCTL3_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTCTL3_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTCTL3_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTCTL3_INTDIS_DMA                                3
#define AVR32_USBA_EPTCTL3_INTDIS_DMA_MASK                  0x00000008
#define AVR32_USBA_EPTCTL3_INTDIS_DMA_OFFSET                         3
#define AVR32_USBA_EPTCTL3_INTDIS_DMA_SIZE                           1
#define AVR32_USBA_EPTCTL3_MDATA_RX                                  7
#define AVR32_USBA_EPTCTL3_MDATA_RX_MASK                    0x00000080
#define AVR32_USBA_EPTCTL3_MDATA_RX_OFFSET                           7
#define AVR32_USBA_EPTCTL3_MDATA_RX_SIZE                             1
#define AVR32_USBA_EPTCTL3_NAK_IN                                   14
#define AVR32_USBA_EPTCTL3_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTCTL3_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTCTL3_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTCTL3_NAK_OUT                                  15
#define AVR32_USBA_EPTCTL3_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTCTL3_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTCTL3_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTCTL3_NYET_DIS                                  4
#define AVR32_USBA_EPTCTL3_NYET_DIS_MASK                    0x00000010
#define AVR32_USBA_EPTCTL3_NYET_DIS_OFFSET                           4
#define AVR32_USBA_EPTCTL3_NYET_DIS_SIZE                             1
#define AVR32_USBA_EPTCTL3_RX_BK_RDY                                 9
#define AVR32_USBA_EPTCTL3_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTCTL3_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTCTL3_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL3_RX_SETUP                                 12
#define AVR32_USBA_EPTCTL3_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTCTL3_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTCTL3_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTCTL3_SHRT_PCKT                                31
#define AVR32_USBA_EPTCTL3_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTCTL3_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTCTL3_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTCTL3_STALL_SNT                                13
#define AVR32_USBA_EPTCTL3_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTCTL3_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTCTL3_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTCTL3_TX_COMPLT                                10
#define AVR32_USBA_EPTCTL3_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTCTL3_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTCTL3_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTCTL3_TX_PK_RDY                                11
#define AVR32_USBA_EPTCTL3_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTCTL3_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTCTL3_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL4                                  0x0000018c
#define AVR32_USBA_EPTCTL4_AUTO_VALID                                1
#define AVR32_USBA_EPTCTL4_AUTO_VALID_MASK                  0x00000002
#define AVR32_USBA_EPTCTL4_AUTO_VALID_OFFSET                         1
#define AVR32_USBA_EPTCTL4_AUTO_VALID_SIZE                           1
#define AVR32_USBA_EPTCTL4_BUSY_BANK                                18
#define AVR32_USBA_EPTCTL4_BUSY_BANK_MASK                   0x00040000
#define AVR32_USBA_EPTCTL4_BUSY_BANK_OFFSET                         18
#define AVR32_USBA_EPTCTL4_BUSY_BANK_SIZE                            1
#define AVR32_USBA_EPTCTL4_DATAX_RX                                  6
#define AVR32_USBA_EPTCTL4_DATAX_RX_MASK                    0x00000040
#define AVR32_USBA_EPTCTL4_DATAX_RX_OFFSET                           6
#define AVR32_USBA_EPTCTL4_DATAX_RX_SIZE                             1
#define AVR32_USBA_EPTCTL4_EPT_ENABL                                 0
#define AVR32_USBA_EPTCTL4_EPT_ENABL_MASK                   0x00000001
#define AVR32_USBA_EPTCTL4_EPT_ENABL_OFFSET                          0
#define AVR32_USBA_EPTCTL4_EPT_ENABL_SIZE                            1
#define AVR32_USBA_EPTCTL4_ERR_CRISO                                13
#define AVR32_USBA_EPTCTL4_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTCTL4_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTCTL4_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTCTL4_ERR_FLUSH                                14
#define AVR32_USBA_EPTCTL4_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTCTL4_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTCTL4_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTCTL4_ERR_FL_ISO                               12
#define AVR32_USBA_EPTCTL4_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTCTL4_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTCTL4_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTCTL4_ERR_NBTRA                                13
#define AVR32_USBA_EPTCTL4_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTCTL4_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTCTL4_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTCTL4_ERR_OVFLW                                 8
#define AVR32_USBA_EPTCTL4_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTCTL4_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTCTL4_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTCTL4_ERR_TRANS                                11
#define AVR32_USBA_EPTCTL4_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTCTL4_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTCTL4_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTCTL4_INTDIS_DMA                                3
#define AVR32_USBA_EPTCTL4_INTDIS_DMA_MASK                  0x00000008
#define AVR32_USBA_EPTCTL4_INTDIS_DMA_OFFSET                         3
#define AVR32_USBA_EPTCTL4_INTDIS_DMA_SIZE                           1
#define AVR32_USBA_EPTCTL4_MDATA_RX                                  7
#define AVR32_USBA_EPTCTL4_MDATA_RX_MASK                    0x00000080
#define AVR32_USBA_EPTCTL4_MDATA_RX_OFFSET                           7
#define AVR32_USBA_EPTCTL4_MDATA_RX_SIZE                             1
#define AVR32_USBA_EPTCTL4_NAK_IN                                   14
#define AVR32_USBA_EPTCTL4_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTCTL4_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTCTL4_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTCTL4_NAK_OUT                                  15
#define AVR32_USBA_EPTCTL4_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTCTL4_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTCTL4_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTCTL4_NYET_DIS                                  4
#define AVR32_USBA_EPTCTL4_NYET_DIS_MASK                    0x00000010
#define AVR32_USBA_EPTCTL4_NYET_DIS_OFFSET                           4
#define AVR32_USBA_EPTCTL4_NYET_DIS_SIZE                             1
#define AVR32_USBA_EPTCTL4_RX_BK_RDY                                 9
#define AVR32_USBA_EPTCTL4_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTCTL4_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTCTL4_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL4_RX_SETUP                                 12
#define AVR32_USBA_EPTCTL4_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTCTL4_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTCTL4_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTCTL4_SHRT_PCKT                                31
#define AVR32_USBA_EPTCTL4_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTCTL4_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTCTL4_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTCTL4_STALL_SNT                                13
#define AVR32_USBA_EPTCTL4_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTCTL4_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTCTL4_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTCTL4_TX_COMPLT                                10
#define AVR32_USBA_EPTCTL4_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTCTL4_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTCTL4_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTCTL4_TX_PK_RDY                                11
#define AVR32_USBA_EPTCTL4_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTCTL4_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTCTL4_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL5                                  0x000001ac
#define AVR32_USBA_EPTCTL5_AUTO_VALID                                1
#define AVR32_USBA_EPTCTL5_AUTO_VALID_MASK                  0x00000002
#define AVR32_USBA_EPTCTL5_AUTO_VALID_OFFSET                         1
#define AVR32_USBA_EPTCTL5_AUTO_VALID_SIZE                           1
#define AVR32_USBA_EPTCTL5_BUSY_BANK                                18
#define AVR32_USBA_EPTCTL5_BUSY_BANK_MASK                   0x00040000
#define AVR32_USBA_EPTCTL5_BUSY_BANK_OFFSET                         18
#define AVR32_USBA_EPTCTL5_BUSY_BANK_SIZE                            1
#define AVR32_USBA_EPTCTL5_DATAX_RX                                  6
#define AVR32_USBA_EPTCTL5_DATAX_RX_MASK                    0x00000040
#define AVR32_USBA_EPTCTL5_DATAX_RX_OFFSET                           6
#define AVR32_USBA_EPTCTL5_DATAX_RX_SIZE                             1
#define AVR32_USBA_EPTCTL5_EPT_ENABL                                 0
#define AVR32_USBA_EPTCTL5_EPT_ENABL_MASK                   0x00000001
#define AVR32_USBA_EPTCTL5_EPT_ENABL_OFFSET                          0
#define AVR32_USBA_EPTCTL5_EPT_ENABL_SIZE                            1
#define AVR32_USBA_EPTCTL5_ERR_CRISO                                13
#define AVR32_USBA_EPTCTL5_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTCTL5_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTCTL5_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTCTL5_ERR_FLUSH                                14
#define AVR32_USBA_EPTCTL5_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTCTL5_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTCTL5_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTCTL5_ERR_FL_ISO                               12
#define AVR32_USBA_EPTCTL5_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTCTL5_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTCTL5_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTCTL5_ERR_NBTRA                                13
#define AVR32_USBA_EPTCTL5_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTCTL5_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTCTL5_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTCTL5_ERR_OVFLW                                 8
#define AVR32_USBA_EPTCTL5_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTCTL5_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTCTL5_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTCTL5_ERR_TRANS                                11
#define AVR32_USBA_EPTCTL5_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTCTL5_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTCTL5_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTCTL5_INTDIS_DMA                                3
#define AVR32_USBA_EPTCTL5_INTDIS_DMA_MASK                  0x00000008
#define AVR32_USBA_EPTCTL5_INTDIS_DMA_OFFSET                         3
#define AVR32_USBA_EPTCTL5_INTDIS_DMA_SIZE                           1
#define AVR32_USBA_EPTCTL5_MDATA_RX                                  7
#define AVR32_USBA_EPTCTL5_MDATA_RX_MASK                    0x00000080
#define AVR32_USBA_EPTCTL5_MDATA_RX_OFFSET                           7
#define AVR32_USBA_EPTCTL5_MDATA_RX_SIZE                             1
#define AVR32_USBA_EPTCTL5_NAK_IN                                   14
#define AVR32_USBA_EPTCTL5_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTCTL5_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTCTL5_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTCTL5_NAK_OUT                                  15
#define AVR32_USBA_EPTCTL5_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTCTL5_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTCTL5_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTCTL5_NYET_DIS                                  4
#define AVR32_USBA_EPTCTL5_NYET_DIS_MASK                    0x00000010
#define AVR32_USBA_EPTCTL5_NYET_DIS_OFFSET                           4
#define AVR32_USBA_EPTCTL5_NYET_DIS_SIZE                             1
#define AVR32_USBA_EPTCTL5_RX_BK_RDY                                 9
#define AVR32_USBA_EPTCTL5_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTCTL5_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTCTL5_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL5_RX_SETUP                                 12
#define AVR32_USBA_EPTCTL5_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTCTL5_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTCTL5_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTCTL5_SHRT_PCKT                                31
#define AVR32_USBA_EPTCTL5_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTCTL5_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTCTL5_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTCTL5_STALL_SNT                                13
#define AVR32_USBA_EPTCTL5_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTCTL5_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTCTL5_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTCTL5_TX_COMPLT                                10
#define AVR32_USBA_EPTCTL5_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTCTL5_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTCTL5_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTCTL5_TX_PK_RDY                                11
#define AVR32_USBA_EPTCTL5_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTCTL5_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTCTL5_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL6                                  0x000001cc
#define AVR32_USBA_EPTCTL6_AUTO_VALID                                1
#define AVR32_USBA_EPTCTL6_AUTO_VALID_MASK                  0x00000002
#define AVR32_USBA_EPTCTL6_AUTO_VALID_OFFSET                         1
#define AVR32_USBA_EPTCTL6_AUTO_VALID_SIZE                           1
#define AVR32_USBA_EPTCTL6_BUSY_BANK                                18
#define AVR32_USBA_EPTCTL6_BUSY_BANK_MASK                   0x00040000
#define AVR32_USBA_EPTCTL6_BUSY_BANK_OFFSET                         18
#define AVR32_USBA_EPTCTL6_BUSY_BANK_SIZE                            1
#define AVR32_USBA_EPTCTL6_DATAX_RX                                  6
#define AVR32_USBA_EPTCTL6_DATAX_RX_MASK                    0x00000040
#define AVR32_USBA_EPTCTL6_DATAX_RX_OFFSET                           6
#define AVR32_USBA_EPTCTL6_DATAX_RX_SIZE                             1
#define AVR32_USBA_EPTCTL6_EPT_ENABL                                 0
#define AVR32_USBA_EPTCTL6_EPT_ENABL_MASK                   0x00000001
#define AVR32_USBA_EPTCTL6_EPT_ENABL_OFFSET                          0
#define AVR32_USBA_EPTCTL6_EPT_ENABL_SIZE                            1
#define AVR32_USBA_EPTCTL6_ERR_CRISO                                13
#define AVR32_USBA_EPTCTL6_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTCTL6_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTCTL6_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTCTL6_ERR_FLUSH                                14
#define AVR32_USBA_EPTCTL6_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTCTL6_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTCTL6_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTCTL6_ERR_FL_ISO                               12
#define AVR32_USBA_EPTCTL6_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTCTL6_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTCTL6_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTCTL6_ERR_NBTRA                                13
#define AVR32_USBA_EPTCTL6_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTCTL6_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTCTL6_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTCTL6_ERR_OVFLW                                 8
#define AVR32_USBA_EPTCTL6_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTCTL6_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTCTL6_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTCTL6_ERR_TRANS                                11
#define AVR32_USBA_EPTCTL6_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTCTL6_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTCTL6_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTCTL6_INTDIS_DMA                                3
#define AVR32_USBA_EPTCTL6_INTDIS_DMA_MASK                  0x00000008
#define AVR32_USBA_EPTCTL6_INTDIS_DMA_OFFSET                         3
#define AVR32_USBA_EPTCTL6_INTDIS_DMA_SIZE                           1
#define AVR32_USBA_EPTCTL6_MDATA_RX                                  7
#define AVR32_USBA_EPTCTL6_MDATA_RX_MASK                    0x00000080
#define AVR32_USBA_EPTCTL6_MDATA_RX_OFFSET                           7
#define AVR32_USBA_EPTCTL6_MDATA_RX_SIZE                             1
#define AVR32_USBA_EPTCTL6_NAK_IN                                   14
#define AVR32_USBA_EPTCTL6_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTCTL6_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTCTL6_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTCTL6_NAK_OUT                                  15
#define AVR32_USBA_EPTCTL6_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTCTL6_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTCTL6_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTCTL6_NYET_DIS                                  4
#define AVR32_USBA_EPTCTL6_NYET_DIS_MASK                    0x00000010
#define AVR32_USBA_EPTCTL6_NYET_DIS_OFFSET                           4
#define AVR32_USBA_EPTCTL6_NYET_DIS_SIZE                             1
#define AVR32_USBA_EPTCTL6_RX_BK_RDY                                 9
#define AVR32_USBA_EPTCTL6_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTCTL6_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTCTL6_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTL6_RX_SETUP                                 12
#define AVR32_USBA_EPTCTL6_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTCTL6_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTCTL6_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTCTL6_SHRT_PCKT                                31
#define AVR32_USBA_EPTCTL6_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTCTL6_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTCTL6_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTCTL6_STALL_SNT                                13
#define AVR32_USBA_EPTCTL6_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTCTL6_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTCTL6_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTCTL6_TX_COMPLT                                10
#define AVR32_USBA_EPTCTL6_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTCTL6_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTCTL6_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTCTL6_TX_PK_RDY                                11
#define AVR32_USBA_EPTCTL6_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTCTL6_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTCTL6_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTCTLDIS0                               0x00000108
#define AVR32_USBA_EPTCTLDIS0_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLDIS0_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLDIS0_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLDIS0_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLDIS0_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLDIS0_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLDIS0_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLDIS0_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_DATAX_RX                               6
#define AVR32_USBA_EPTCTLDIS0_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLDIS0_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLDIS0_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS0_EPT_DISABL                             0
#define AVR32_USBA_EPTCTLDIS0_EPT_DISABL_MASK               0x00000001
#define AVR32_USBA_EPTCTLDIS0_EPT_DISABL_OFFSET                      0
#define AVR32_USBA_EPTCTLDIS0_EPT_DISABL_SIZE                        1
#define AVR32_USBA_EPTCTLDIS0_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLDIS0_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS0_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS0_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLDIS0_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLDIS0_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLDIS0_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLDIS0_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLDIS0_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLDIS0_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLDIS0_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLDIS0_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS0_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS0_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLDIS0_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLDIS0_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLDIS0_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLDIS0_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS0_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS0_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLDIS0_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLDIS0_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLDIS0_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLDIS0_MDATA_RX                               7
#define AVR32_USBA_EPTCTLDIS0_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLDIS0_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLDIS0_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS0_NAK_IN                                14
#define AVR32_USBA_EPTCTLDIS0_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLDIS0_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLDIS0_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLDIS0_NAK_OUT                               15
#define AVR32_USBA_EPTCTLDIS0_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLDIS0_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLDIS0_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLDIS0_NYET_DIS                               4
#define AVR32_USBA_EPTCTLDIS0_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLDIS0_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLDIS0_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLDIS0_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLDIS0_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLDIS0_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLDIS0_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_RX_SETUP                              12
#define AVR32_USBA_EPTCTLDIS0_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLDIS0_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLDIS0_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLDIS0_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLDIS0_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLDIS0_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLDIS0_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_STALL_SNT                             13
#define AVR32_USBA_EPTCTLDIS0_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS0_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS0_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLDIS0_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLDIS0_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLDIS0_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS0_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLDIS0_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS0_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS0_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1                               0x00000128
#define AVR32_USBA_EPTCTLDIS1_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLDIS1_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLDIS1_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLDIS1_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLDIS1_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLDIS1_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLDIS1_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLDIS1_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_DATAX_RX                               6
#define AVR32_USBA_EPTCTLDIS1_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLDIS1_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLDIS1_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS1_EPT_DISABL                             0
#define AVR32_USBA_EPTCTLDIS1_EPT_DISABL_MASK               0x00000001
#define AVR32_USBA_EPTCTLDIS1_EPT_DISABL_OFFSET                      0
#define AVR32_USBA_EPTCTLDIS1_EPT_DISABL_SIZE                        1
#define AVR32_USBA_EPTCTLDIS1_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLDIS1_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS1_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS1_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLDIS1_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLDIS1_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLDIS1_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLDIS1_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLDIS1_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLDIS1_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLDIS1_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLDIS1_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS1_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS1_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLDIS1_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLDIS1_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLDIS1_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLDIS1_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS1_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS1_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLDIS1_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLDIS1_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLDIS1_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLDIS1_MDATA_RX                               7
#define AVR32_USBA_EPTCTLDIS1_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLDIS1_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLDIS1_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS1_NAK_IN                                14
#define AVR32_USBA_EPTCTLDIS1_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLDIS1_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLDIS1_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLDIS1_NAK_OUT                               15
#define AVR32_USBA_EPTCTLDIS1_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLDIS1_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLDIS1_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLDIS1_NYET_DIS                               4
#define AVR32_USBA_EPTCTLDIS1_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLDIS1_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLDIS1_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLDIS1_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLDIS1_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLDIS1_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLDIS1_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_RX_SETUP                              12
#define AVR32_USBA_EPTCTLDIS1_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLDIS1_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLDIS1_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLDIS1_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLDIS1_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLDIS1_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLDIS1_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_STALL_SNT                             13
#define AVR32_USBA_EPTCTLDIS1_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS1_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS1_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLDIS1_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLDIS1_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLDIS1_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS1_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLDIS1_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS1_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS1_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2                               0x00000148
#define AVR32_USBA_EPTCTLDIS2_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLDIS2_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLDIS2_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLDIS2_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLDIS2_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLDIS2_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLDIS2_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLDIS2_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_DATAX_RX                               6
#define AVR32_USBA_EPTCTLDIS2_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLDIS2_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLDIS2_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS2_EPT_DISABL                             0
#define AVR32_USBA_EPTCTLDIS2_EPT_DISABL_MASK               0x00000001
#define AVR32_USBA_EPTCTLDIS2_EPT_DISABL_OFFSET                      0
#define AVR32_USBA_EPTCTLDIS2_EPT_DISABL_SIZE                        1
#define AVR32_USBA_EPTCTLDIS2_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLDIS2_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS2_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS2_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLDIS2_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLDIS2_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLDIS2_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLDIS2_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLDIS2_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLDIS2_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLDIS2_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLDIS2_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS2_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS2_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLDIS2_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLDIS2_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLDIS2_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLDIS2_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS2_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS2_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLDIS2_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLDIS2_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLDIS2_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLDIS2_MDATA_RX                               7
#define AVR32_USBA_EPTCTLDIS2_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLDIS2_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLDIS2_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS2_NAK_IN                                14
#define AVR32_USBA_EPTCTLDIS2_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLDIS2_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLDIS2_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLDIS2_NAK_OUT                               15
#define AVR32_USBA_EPTCTLDIS2_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLDIS2_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLDIS2_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLDIS2_NYET_DIS                               4
#define AVR32_USBA_EPTCTLDIS2_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLDIS2_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLDIS2_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLDIS2_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLDIS2_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLDIS2_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLDIS2_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_RX_SETUP                              12
#define AVR32_USBA_EPTCTLDIS2_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLDIS2_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLDIS2_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLDIS2_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLDIS2_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLDIS2_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLDIS2_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_STALL_SNT                             13
#define AVR32_USBA_EPTCTLDIS2_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS2_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS2_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLDIS2_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLDIS2_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLDIS2_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS2_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLDIS2_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS2_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS2_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3                               0x00000168
#define AVR32_USBA_EPTCTLDIS3_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLDIS3_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLDIS3_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLDIS3_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLDIS3_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLDIS3_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLDIS3_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLDIS3_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_DATAX_RX                               6
#define AVR32_USBA_EPTCTLDIS3_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLDIS3_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLDIS3_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS3_EPT_DISABL                             0
#define AVR32_USBA_EPTCTLDIS3_EPT_DISABL_MASK               0x00000001
#define AVR32_USBA_EPTCTLDIS3_EPT_DISABL_OFFSET                      0
#define AVR32_USBA_EPTCTLDIS3_EPT_DISABL_SIZE                        1
#define AVR32_USBA_EPTCTLDIS3_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLDIS3_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS3_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS3_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLDIS3_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLDIS3_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLDIS3_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLDIS3_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLDIS3_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLDIS3_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLDIS3_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLDIS3_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS3_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS3_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLDIS3_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLDIS3_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLDIS3_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLDIS3_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS3_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS3_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLDIS3_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLDIS3_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLDIS3_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLDIS3_MDATA_RX                               7
#define AVR32_USBA_EPTCTLDIS3_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLDIS3_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLDIS3_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS3_NAK_IN                                14
#define AVR32_USBA_EPTCTLDIS3_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLDIS3_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLDIS3_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLDIS3_NAK_OUT                               15
#define AVR32_USBA_EPTCTLDIS3_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLDIS3_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLDIS3_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLDIS3_NYET_DIS                               4
#define AVR32_USBA_EPTCTLDIS3_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLDIS3_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLDIS3_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLDIS3_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLDIS3_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLDIS3_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLDIS3_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_RX_SETUP                              12
#define AVR32_USBA_EPTCTLDIS3_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLDIS3_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLDIS3_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLDIS3_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLDIS3_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLDIS3_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLDIS3_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_STALL_SNT                             13
#define AVR32_USBA_EPTCTLDIS3_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS3_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS3_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLDIS3_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLDIS3_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLDIS3_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS3_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLDIS3_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS3_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS3_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4                               0x00000188
#define AVR32_USBA_EPTCTLDIS4_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLDIS4_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLDIS4_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLDIS4_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLDIS4_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLDIS4_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLDIS4_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLDIS4_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_DATAX_RX                               6
#define AVR32_USBA_EPTCTLDIS4_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLDIS4_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLDIS4_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS4_EPT_DISABL                             0
#define AVR32_USBA_EPTCTLDIS4_EPT_DISABL_MASK               0x00000001
#define AVR32_USBA_EPTCTLDIS4_EPT_DISABL_OFFSET                      0
#define AVR32_USBA_EPTCTLDIS4_EPT_DISABL_SIZE                        1
#define AVR32_USBA_EPTCTLDIS4_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLDIS4_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS4_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS4_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLDIS4_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLDIS4_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLDIS4_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLDIS4_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLDIS4_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLDIS4_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLDIS4_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLDIS4_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS4_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS4_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLDIS4_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLDIS4_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLDIS4_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLDIS4_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS4_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS4_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLDIS4_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLDIS4_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLDIS4_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLDIS4_MDATA_RX                               7
#define AVR32_USBA_EPTCTLDIS4_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLDIS4_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLDIS4_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS4_NAK_IN                                14
#define AVR32_USBA_EPTCTLDIS4_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLDIS4_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLDIS4_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLDIS4_NAK_OUT                               15
#define AVR32_USBA_EPTCTLDIS4_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLDIS4_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLDIS4_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLDIS4_NYET_DIS                               4
#define AVR32_USBA_EPTCTLDIS4_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLDIS4_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLDIS4_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLDIS4_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLDIS4_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLDIS4_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLDIS4_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_RX_SETUP                              12
#define AVR32_USBA_EPTCTLDIS4_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLDIS4_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLDIS4_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLDIS4_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLDIS4_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLDIS4_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLDIS4_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_STALL_SNT                             13
#define AVR32_USBA_EPTCTLDIS4_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS4_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS4_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLDIS4_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLDIS4_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLDIS4_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS4_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLDIS4_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS4_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS4_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5                               0x000001a8
#define AVR32_USBA_EPTCTLDIS5_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLDIS5_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLDIS5_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLDIS5_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLDIS5_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLDIS5_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLDIS5_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLDIS5_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_DATAX_RX                               6
#define AVR32_USBA_EPTCTLDIS5_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLDIS5_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLDIS5_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS5_EPT_DISABL                             0
#define AVR32_USBA_EPTCTLDIS5_EPT_DISABL_MASK               0x00000001
#define AVR32_USBA_EPTCTLDIS5_EPT_DISABL_OFFSET                      0
#define AVR32_USBA_EPTCTLDIS5_EPT_DISABL_SIZE                        1
#define AVR32_USBA_EPTCTLDIS5_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLDIS5_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS5_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS5_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLDIS5_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLDIS5_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLDIS5_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLDIS5_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLDIS5_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLDIS5_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLDIS5_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLDIS5_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS5_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS5_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLDIS5_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLDIS5_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLDIS5_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLDIS5_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS5_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS5_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLDIS5_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLDIS5_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLDIS5_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLDIS5_MDATA_RX                               7
#define AVR32_USBA_EPTCTLDIS5_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLDIS5_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLDIS5_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS5_NAK_IN                                14
#define AVR32_USBA_EPTCTLDIS5_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLDIS5_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLDIS5_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLDIS5_NAK_OUT                               15
#define AVR32_USBA_EPTCTLDIS5_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLDIS5_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLDIS5_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLDIS5_NYET_DIS                               4
#define AVR32_USBA_EPTCTLDIS5_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLDIS5_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLDIS5_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLDIS5_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLDIS5_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLDIS5_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLDIS5_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_RX_SETUP                              12
#define AVR32_USBA_EPTCTLDIS5_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLDIS5_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLDIS5_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLDIS5_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLDIS5_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLDIS5_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLDIS5_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_STALL_SNT                             13
#define AVR32_USBA_EPTCTLDIS5_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS5_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS5_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLDIS5_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLDIS5_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLDIS5_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS5_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLDIS5_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS5_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS5_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6                               0x000001c8
#define AVR32_USBA_EPTCTLDIS6_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLDIS6_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLDIS6_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLDIS6_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLDIS6_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLDIS6_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLDIS6_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLDIS6_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_DATAX_RX                               6
#define AVR32_USBA_EPTCTLDIS6_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLDIS6_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLDIS6_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS6_EPT_DISABL                             0
#define AVR32_USBA_EPTCTLDIS6_EPT_DISABL_MASK               0x00000001
#define AVR32_USBA_EPTCTLDIS6_EPT_DISABL_OFFSET                      0
#define AVR32_USBA_EPTCTLDIS6_EPT_DISABL_SIZE                        1
#define AVR32_USBA_EPTCTLDIS6_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLDIS6_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS6_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS6_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLDIS6_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLDIS6_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLDIS6_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLDIS6_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLDIS6_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLDIS6_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLDIS6_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLDIS6_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS6_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS6_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLDIS6_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLDIS6_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLDIS6_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLDIS6_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS6_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS6_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLDIS6_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLDIS6_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLDIS6_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLDIS6_MDATA_RX                               7
#define AVR32_USBA_EPTCTLDIS6_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLDIS6_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLDIS6_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLDIS6_NAK_IN                                14
#define AVR32_USBA_EPTCTLDIS6_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLDIS6_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLDIS6_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLDIS6_NAK_OUT                               15
#define AVR32_USBA_EPTCTLDIS6_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLDIS6_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLDIS6_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLDIS6_NYET_DIS                               4
#define AVR32_USBA_EPTCTLDIS6_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLDIS6_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLDIS6_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLDIS6_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLDIS6_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLDIS6_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLDIS6_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_RX_SETUP                              12
#define AVR32_USBA_EPTCTLDIS6_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLDIS6_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLDIS6_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLDIS6_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLDIS6_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLDIS6_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLDIS6_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_STALL_SNT                             13
#define AVR32_USBA_EPTCTLDIS6_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLDIS6_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLDIS6_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLDIS6_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLDIS6_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLDIS6_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLDIS6_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLDIS6_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLDIS6_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLDIS6_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB0                               0x00000104
#define AVR32_USBA_EPTCTLENB0_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLENB0_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLENB0_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLENB0_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLENB0_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLENB0_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLENB0_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLENB0_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_DATAX_RX                               6
#define AVR32_USBA_EPTCTLENB0_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLENB0_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLENB0_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB0_EPT_ENABL                              0
#define AVR32_USBA_EPTCTLENB0_EPT_ENABL_MASK                0x00000001
#define AVR32_USBA_EPTCTLENB0_EPT_ENABL_OFFSET                       0
#define AVR32_USBA_EPTCTLENB0_EPT_ENABL_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLENB0_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB0_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLENB0_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLENB0_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLENB0_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLENB0_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLENB0_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLENB0_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLENB0_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLENB0_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLENB0_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB0_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLENB0_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLENB0_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLENB0_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLENB0_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLENB0_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB0_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLENB0_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLENB0_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLENB0_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLENB0_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLENB0_MDATA_RX                               7
#define AVR32_USBA_EPTCTLENB0_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLENB0_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLENB0_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB0_NAK_IN                                14
#define AVR32_USBA_EPTCTLENB0_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLENB0_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLENB0_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLENB0_NAK_OUT                               15
#define AVR32_USBA_EPTCTLENB0_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLENB0_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLENB0_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLENB0_NYET_DIS                               4
#define AVR32_USBA_EPTCTLENB0_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLENB0_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLENB0_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLENB0_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLENB0_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLENB0_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLENB0_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_RX_SETUP                              12
#define AVR32_USBA_EPTCTLENB0_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLENB0_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLENB0_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLENB0_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLENB0_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLENB0_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLENB0_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_STALL_SNT                             13
#define AVR32_USBA_EPTCTLENB0_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB0_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLENB0_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLENB0_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLENB0_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLENB0_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLENB0_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLENB0_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB0_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLENB0_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB1                               0x00000124
#define AVR32_USBA_EPTCTLENB1_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLENB1_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLENB1_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLENB1_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLENB1_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLENB1_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLENB1_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLENB1_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_DATAX_RX                               6
#define AVR32_USBA_EPTCTLENB1_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLENB1_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLENB1_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB1_EPT_ENABL                              0
#define AVR32_USBA_EPTCTLENB1_EPT_ENABL_MASK                0x00000001
#define AVR32_USBA_EPTCTLENB1_EPT_ENABL_OFFSET                       0
#define AVR32_USBA_EPTCTLENB1_EPT_ENABL_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLENB1_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB1_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLENB1_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLENB1_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLENB1_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLENB1_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLENB1_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLENB1_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLENB1_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLENB1_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLENB1_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB1_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLENB1_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLENB1_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLENB1_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLENB1_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLENB1_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB1_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLENB1_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLENB1_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLENB1_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLENB1_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLENB1_MDATA_RX                               7
#define AVR32_USBA_EPTCTLENB1_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLENB1_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLENB1_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB1_NAK_IN                                14
#define AVR32_USBA_EPTCTLENB1_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLENB1_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLENB1_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLENB1_NAK_OUT                               15
#define AVR32_USBA_EPTCTLENB1_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLENB1_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLENB1_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLENB1_NYET_DIS                               4
#define AVR32_USBA_EPTCTLENB1_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLENB1_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLENB1_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLENB1_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLENB1_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLENB1_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLENB1_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_RX_SETUP                              12
#define AVR32_USBA_EPTCTLENB1_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLENB1_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLENB1_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLENB1_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLENB1_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLENB1_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLENB1_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_STALL_SNT                             13
#define AVR32_USBA_EPTCTLENB1_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB1_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLENB1_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLENB1_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLENB1_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLENB1_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLENB1_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLENB1_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB1_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLENB1_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB2                               0x00000144
#define AVR32_USBA_EPTCTLENB2_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLENB2_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLENB2_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLENB2_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLENB2_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLENB2_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLENB2_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLENB2_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_DATAX_RX                               6
#define AVR32_USBA_EPTCTLENB2_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLENB2_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLENB2_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB2_EPT_ENABL                              0
#define AVR32_USBA_EPTCTLENB2_EPT_ENABL_MASK                0x00000001
#define AVR32_USBA_EPTCTLENB2_EPT_ENABL_OFFSET                       0
#define AVR32_USBA_EPTCTLENB2_EPT_ENABL_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLENB2_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB2_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLENB2_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLENB2_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLENB2_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLENB2_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLENB2_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLENB2_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLENB2_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLENB2_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLENB2_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB2_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLENB2_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLENB2_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLENB2_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLENB2_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLENB2_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB2_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLENB2_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLENB2_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLENB2_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLENB2_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLENB2_MDATA_RX                               7
#define AVR32_USBA_EPTCTLENB2_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLENB2_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLENB2_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB2_NAK_IN                                14
#define AVR32_USBA_EPTCTLENB2_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLENB2_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLENB2_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLENB2_NAK_OUT                               15
#define AVR32_USBA_EPTCTLENB2_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLENB2_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLENB2_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLENB2_NYET_DIS                               4
#define AVR32_USBA_EPTCTLENB2_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLENB2_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLENB2_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLENB2_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLENB2_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLENB2_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLENB2_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_RX_SETUP                              12
#define AVR32_USBA_EPTCTLENB2_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLENB2_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLENB2_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLENB2_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLENB2_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLENB2_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLENB2_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_STALL_SNT                             13
#define AVR32_USBA_EPTCTLENB2_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB2_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLENB2_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLENB2_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLENB2_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLENB2_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLENB2_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLENB2_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB2_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLENB2_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB3                               0x00000164
#define AVR32_USBA_EPTCTLENB3_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLENB3_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLENB3_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLENB3_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLENB3_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLENB3_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLENB3_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLENB3_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_DATAX_RX                               6
#define AVR32_USBA_EPTCTLENB3_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLENB3_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLENB3_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB3_EPT_ENABL                              0
#define AVR32_USBA_EPTCTLENB3_EPT_ENABL_MASK                0x00000001
#define AVR32_USBA_EPTCTLENB3_EPT_ENABL_OFFSET                       0
#define AVR32_USBA_EPTCTLENB3_EPT_ENABL_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLENB3_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB3_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLENB3_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLENB3_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLENB3_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLENB3_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLENB3_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLENB3_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLENB3_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLENB3_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLENB3_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB3_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLENB3_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLENB3_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLENB3_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLENB3_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLENB3_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB3_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLENB3_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLENB3_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLENB3_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLENB3_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLENB3_MDATA_RX                               7
#define AVR32_USBA_EPTCTLENB3_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLENB3_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLENB3_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB3_NAK_IN                                14
#define AVR32_USBA_EPTCTLENB3_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLENB3_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLENB3_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLENB3_NAK_OUT                               15
#define AVR32_USBA_EPTCTLENB3_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLENB3_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLENB3_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLENB3_NYET_DIS                               4
#define AVR32_USBA_EPTCTLENB3_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLENB3_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLENB3_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLENB3_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLENB3_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLENB3_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLENB3_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_RX_SETUP                              12
#define AVR32_USBA_EPTCTLENB3_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLENB3_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLENB3_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLENB3_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLENB3_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLENB3_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLENB3_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_STALL_SNT                             13
#define AVR32_USBA_EPTCTLENB3_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB3_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLENB3_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLENB3_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLENB3_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLENB3_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLENB3_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLENB3_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB3_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLENB3_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB4                               0x00000184
#define AVR32_USBA_EPTCTLENB4_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLENB4_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLENB4_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLENB4_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLENB4_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLENB4_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLENB4_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLENB4_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_DATAX_RX                               6
#define AVR32_USBA_EPTCTLENB4_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLENB4_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLENB4_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB4_EPT_ENABL                              0
#define AVR32_USBA_EPTCTLENB4_EPT_ENABL_MASK                0x00000001
#define AVR32_USBA_EPTCTLENB4_EPT_ENABL_OFFSET                       0
#define AVR32_USBA_EPTCTLENB4_EPT_ENABL_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLENB4_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB4_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLENB4_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLENB4_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLENB4_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLENB4_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLENB4_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLENB4_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLENB4_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLENB4_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLENB4_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB4_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLENB4_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLENB4_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLENB4_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLENB4_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLENB4_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB4_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLENB4_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLENB4_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLENB4_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLENB4_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLENB4_MDATA_RX                               7
#define AVR32_USBA_EPTCTLENB4_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLENB4_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLENB4_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB4_NAK_IN                                14
#define AVR32_USBA_EPTCTLENB4_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLENB4_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLENB4_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLENB4_NAK_OUT                               15
#define AVR32_USBA_EPTCTLENB4_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLENB4_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLENB4_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLENB4_NYET_DIS                               4
#define AVR32_USBA_EPTCTLENB4_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLENB4_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLENB4_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLENB4_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLENB4_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLENB4_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLENB4_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_RX_SETUP                              12
#define AVR32_USBA_EPTCTLENB4_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLENB4_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLENB4_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLENB4_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLENB4_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLENB4_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLENB4_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_STALL_SNT                             13
#define AVR32_USBA_EPTCTLENB4_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB4_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLENB4_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLENB4_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLENB4_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLENB4_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLENB4_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLENB4_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB4_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLENB4_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB5                               0x000001a4
#define AVR32_USBA_EPTCTLENB5_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLENB5_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLENB5_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLENB5_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLENB5_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLENB5_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLENB5_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLENB5_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_DATAX_RX                               6
#define AVR32_USBA_EPTCTLENB5_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLENB5_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLENB5_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB5_EPT_ENABL                              0
#define AVR32_USBA_EPTCTLENB5_EPT_ENABL_MASK                0x00000001
#define AVR32_USBA_EPTCTLENB5_EPT_ENABL_OFFSET                       0
#define AVR32_USBA_EPTCTLENB5_EPT_ENABL_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLENB5_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB5_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLENB5_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLENB5_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLENB5_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLENB5_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLENB5_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLENB5_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLENB5_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLENB5_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLENB5_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB5_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLENB5_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLENB5_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLENB5_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLENB5_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLENB5_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB5_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLENB5_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLENB5_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLENB5_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLENB5_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLENB5_MDATA_RX                               7
#define AVR32_USBA_EPTCTLENB5_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLENB5_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLENB5_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB5_NAK_IN                                14
#define AVR32_USBA_EPTCTLENB5_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLENB5_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLENB5_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLENB5_NAK_OUT                               15
#define AVR32_USBA_EPTCTLENB5_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLENB5_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLENB5_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLENB5_NYET_DIS                               4
#define AVR32_USBA_EPTCTLENB5_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLENB5_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLENB5_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLENB5_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLENB5_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLENB5_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLENB5_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_RX_SETUP                              12
#define AVR32_USBA_EPTCTLENB5_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLENB5_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLENB5_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLENB5_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLENB5_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLENB5_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLENB5_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_STALL_SNT                             13
#define AVR32_USBA_EPTCTLENB5_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB5_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLENB5_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLENB5_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLENB5_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLENB5_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLENB5_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLENB5_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB5_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLENB5_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB6                               0x000001c4
#define AVR32_USBA_EPTCTLENB6_AUTO_VALID                             1
#define AVR32_USBA_EPTCTLENB6_AUTO_VALID_MASK               0x00000002
#define AVR32_USBA_EPTCTLENB6_AUTO_VALID_OFFSET                      1
#define AVR32_USBA_EPTCTLENB6_AUTO_VALID_SIZE                        1
#define AVR32_USBA_EPTCTLENB6_BUSY_BANK                             18
#define AVR32_USBA_EPTCTLENB6_BUSY_BANK_MASK                0x00040000
#define AVR32_USBA_EPTCTLENB6_BUSY_BANK_OFFSET                      18
#define AVR32_USBA_EPTCTLENB6_BUSY_BANK_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_DATAX_RX                               6
#define AVR32_USBA_EPTCTLENB6_DATAX_RX_MASK                 0x00000040
#define AVR32_USBA_EPTCTLENB6_DATAX_RX_OFFSET                        6
#define AVR32_USBA_EPTCTLENB6_DATAX_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB6_EPT_ENABL                              0
#define AVR32_USBA_EPTCTLENB6_EPT_ENABL_MASK                0x00000001
#define AVR32_USBA_EPTCTLENB6_EPT_ENABL_OFFSET                       0
#define AVR32_USBA_EPTCTLENB6_EPT_ENABL_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_ERR_CRISO                             13
#define AVR32_USBA_EPTCTLENB6_ERR_CRISO_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB6_ERR_CRISO_OFFSET                      13
#define AVR32_USBA_EPTCTLENB6_ERR_CRISO_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_ERR_FLUSH                             14
#define AVR32_USBA_EPTCTLENB6_ERR_FLUSH_MASK                0x00004000
#define AVR32_USBA_EPTCTLENB6_ERR_FLUSH_OFFSET                      14
#define AVR32_USBA_EPTCTLENB6_ERR_FLUSH_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_ERR_FL_ISO                            12
#define AVR32_USBA_EPTCTLENB6_ERR_FL_ISO_MASK               0x00001000
#define AVR32_USBA_EPTCTLENB6_ERR_FL_ISO_OFFSET                     12
#define AVR32_USBA_EPTCTLENB6_ERR_FL_ISO_SIZE                        1
#define AVR32_USBA_EPTCTLENB6_ERR_NBTRA                             13
#define AVR32_USBA_EPTCTLENB6_ERR_NBTRA_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB6_ERR_NBTRA_OFFSET                      13
#define AVR32_USBA_EPTCTLENB6_ERR_NBTRA_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_ERR_OVFLW                              8
#define AVR32_USBA_EPTCTLENB6_ERR_OVFLW_MASK                0x00000100
#define AVR32_USBA_EPTCTLENB6_ERR_OVFLW_OFFSET                       8
#define AVR32_USBA_EPTCTLENB6_ERR_OVFLW_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_ERR_TRANS                             11
#define AVR32_USBA_EPTCTLENB6_ERR_TRANS_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB6_ERR_TRANS_OFFSET                      11
#define AVR32_USBA_EPTCTLENB6_ERR_TRANS_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_INTDIS_DMA                             3
#define AVR32_USBA_EPTCTLENB6_INTDIS_DMA_MASK               0x00000008
#define AVR32_USBA_EPTCTLENB6_INTDIS_DMA_OFFSET                      3
#define AVR32_USBA_EPTCTLENB6_INTDIS_DMA_SIZE                        1
#define AVR32_USBA_EPTCTLENB6_MDATA_RX                               7
#define AVR32_USBA_EPTCTLENB6_MDATA_RX_MASK                 0x00000080
#define AVR32_USBA_EPTCTLENB6_MDATA_RX_OFFSET                        7
#define AVR32_USBA_EPTCTLENB6_MDATA_RX_SIZE                          1
#define AVR32_USBA_EPTCTLENB6_NAK_IN                                14
#define AVR32_USBA_EPTCTLENB6_NAK_IN_MASK                   0x00004000
#define AVR32_USBA_EPTCTLENB6_NAK_IN_OFFSET                         14
#define AVR32_USBA_EPTCTLENB6_NAK_IN_SIZE                            1
#define AVR32_USBA_EPTCTLENB6_NAK_OUT                               15
#define AVR32_USBA_EPTCTLENB6_NAK_OUT_MASK                  0x00008000
#define AVR32_USBA_EPTCTLENB6_NAK_OUT_OFFSET                        15
#define AVR32_USBA_EPTCTLENB6_NAK_OUT_SIZE                           1
#define AVR32_USBA_EPTCTLENB6_NYET_DIS                               4
#define AVR32_USBA_EPTCTLENB6_NYET_DIS_MASK                 0x00000010
#define AVR32_USBA_EPTCTLENB6_NYET_DIS_OFFSET                        4
#define AVR32_USBA_EPTCTLENB6_NYET_DIS_SIZE                          1
#define AVR32_USBA_EPTCTLENB6_RX_BK_RDY                              9
#define AVR32_USBA_EPTCTLENB6_RX_BK_RDY_MASK                0x00000200
#define AVR32_USBA_EPTCTLENB6_RX_BK_RDY_OFFSET                       9
#define AVR32_USBA_EPTCTLENB6_RX_BK_RDY_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_RX_SETUP                              12
#define AVR32_USBA_EPTCTLENB6_RX_SETUP_MASK                 0x00001000
#define AVR32_USBA_EPTCTLENB6_RX_SETUP_OFFSET                       12
#define AVR32_USBA_EPTCTLENB6_RX_SETUP_SIZE                          1
#define AVR32_USBA_EPTCTLENB6_SHRT_PCKT                             31
#define AVR32_USBA_EPTCTLENB6_SHRT_PCKT_MASK                0x80000000
#define AVR32_USBA_EPTCTLENB6_SHRT_PCKT_OFFSET                      31
#define AVR32_USBA_EPTCTLENB6_SHRT_PCKT_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_STALL_SNT                             13
#define AVR32_USBA_EPTCTLENB6_STALL_SNT_MASK                0x00002000
#define AVR32_USBA_EPTCTLENB6_STALL_SNT_OFFSET                      13
#define AVR32_USBA_EPTCTLENB6_STALL_SNT_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_TX_COMPLT                             10
#define AVR32_USBA_EPTCTLENB6_TX_COMPLT_MASK                0x00000400
#define AVR32_USBA_EPTCTLENB6_TX_COMPLT_OFFSET                      10
#define AVR32_USBA_EPTCTLENB6_TX_COMPLT_SIZE                         1
#define AVR32_USBA_EPTCTLENB6_TX_PK_RDY                             11
#define AVR32_USBA_EPTCTLENB6_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTCTLENB6_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTCTLENB6_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTRST                                   0x0000001c
#define AVR32_USBA_EPTRST_RST_EPT_0                                  0
#define AVR32_USBA_EPTRST_RST_EPT_0_MASK                    0x00000001
#define AVR32_USBA_EPTRST_RST_EPT_0_OFFSET                           0
#define AVR32_USBA_EPTRST_RST_EPT_0_SIZE                             1
#define AVR32_USBA_EPTRST_RST_EPT_1                                  1
#define AVR32_USBA_EPTRST_RST_EPT_1_MASK                    0x00000002
#define AVR32_USBA_EPTRST_RST_EPT_1_OFFSET                           1
#define AVR32_USBA_EPTRST_RST_EPT_1_SIZE                             1
#define AVR32_USBA_EPTRST_RST_EPT_2                                  2
#define AVR32_USBA_EPTRST_RST_EPT_2_MASK                    0x00000004
#define AVR32_USBA_EPTRST_RST_EPT_2_OFFSET                           2
#define AVR32_USBA_EPTRST_RST_EPT_2_SIZE                             1
#define AVR32_USBA_EPTRST_RST_EPT_3                                  3
#define AVR32_USBA_EPTRST_RST_EPT_3_MASK                    0x00000008
#define AVR32_USBA_EPTRST_RST_EPT_3_OFFSET                           3
#define AVR32_USBA_EPTRST_RST_EPT_3_SIZE                             1
#define AVR32_USBA_EPTRST_RST_EPT_4                                  4
#define AVR32_USBA_EPTRST_RST_EPT_4_MASK                    0x00000010
#define AVR32_USBA_EPTRST_RST_EPT_4_OFFSET                           4
#define AVR32_USBA_EPTRST_RST_EPT_4_SIZE                             1
#define AVR32_USBA_EPTRST_RST_EPT_5                                  5
#define AVR32_USBA_EPTRST_RST_EPT_5_MASK                    0x00000020
#define AVR32_USBA_EPTRST_RST_EPT_5_OFFSET                           5
#define AVR32_USBA_EPTRST_RST_EPT_5_SIZE                             1
#define AVR32_USBA_EPTRST_RST_EPT_6                                  6
#define AVR32_USBA_EPTRST_RST_EPT_6_MASK                    0x00000040
#define AVR32_USBA_EPTRST_RST_EPT_6_OFFSET                           6
#define AVR32_USBA_EPTRST_RST_EPT_6_SIZE                             1
#define AVR32_USBA_EPTRST_RST_EPT_7                                  7
#define AVR32_USBA_EPTRST_RST_EPT_7_MASK                    0x00000080
#define AVR32_USBA_EPTRST_RST_EPT_7_OFFSET                           7
#define AVR32_USBA_EPTRST_RST_EPT_7_SIZE                             1
#define AVR32_USBA_EPTSETSTA0                               0x00000114
#define AVR32_USBA_EPTSETSTA0_FRCESTALL                              5
#define AVR32_USBA_EPTSETSTA0_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTSETSTA0_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTSETSTA0_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTSETSTA0_KILL_BANK                              9
#define AVR32_USBA_EPTSETSTA0_KILL_BANK_MASK                0x00000200
#define AVR32_USBA_EPTSETSTA0_KILL_BANK_OFFSET                       9
#define AVR32_USBA_EPTSETSTA0_KILL_BANK_SIZE                         1
#define AVR32_USBA_EPTSETSTA0_TX_PK_RDY                             11
#define AVR32_USBA_EPTSETSTA0_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTSETSTA0_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTSETSTA0_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTSETSTA1                               0x00000134
#define AVR32_USBA_EPTSETSTA1_FRCESTALL                              5
#define AVR32_USBA_EPTSETSTA1_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTSETSTA1_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTSETSTA1_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTSETSTA1_KILL_BANK                              9
#define AVR32_USBA_EPTSETSTA1_KILL_BANK_MASK                0x00000200
#define AVR32_USBA_EPTSETSTA1_KILL_BANK_OFFSET                       9
#define AVR32_USBA_EPTSETSTA1_KILL_BANK_SIZE                         1
#define AVR32_USBA_EPTSETSTA1_TX_PK_RDY                             11
#define AVR32_USBA_EPTSETSTA1_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTSETSTA1_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTSETSTA1_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTSETSTA2                               0x00000154
#define AVR32_USBA_EPTSETSTA2_FRCESTALL                              5
#define AVR32_USBA_EPTSETSTA2_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTSETSTA2_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTSETSTA2_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTSETSTA2_KILL_BANK                              9
#define AVR32_USBA_EPTSETSTA2_KILL_BANK_MASK                0x00000200
#define AVR32_USBA_EPTSETSTA2_KILL_BANK_OFFSET                       9
#define AVR32_USBA_EPTSETSTA2_KILL_BANK_SIZE                         1
#define AVR32_USBA_EPTSETSTA2_TX_PK_RDY                             11
#define AVR32_USBA_EPTSETSTA2_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTSETSTA2_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTSETSTA2_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTSETSTA3                               0x00000174
#define AVR32_USBA_EPTSETSTA3_FRCESTALL                              5
#define AVR32_USBA_EPTSETSTA3_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTSETSTA3_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTSETSTA3_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTSETSTA3_KILL_BANK                              9
#define AVR32_USBA_EPTSETSTA3_KILL_BANK_MASK                0x00000200
#define AVR32_USBA_EPTSETSTA3_KILL_BANK_OFFSET                       9
#define AVR32_USBA_EPTSETSTA3_KILL_BANK_SIZE                         1
#define AVR32_USBA_EPTSETSTA3_TX_PK_RDY                             11
#define AVR32_USBA_EPTSETSTA3_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTSETSTA3_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTSETSTA3_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTSETSTA4                               0x00000194
#define AVR32_USBA_EPTSETSTA4_FRCESTALL                              5
#define AVR32_USBA_EPTSETSTA4_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTSETSTA4_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTSETSTA4_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTSETSTA4_KILL_BANK                              9
#define AVR32_USBA_EPTSETSTA4_KILL_BANK_MASK                0x00000200
#define AVR32_USBA_EPTSETSTA4_KILL_BANK_OFFSET                       9
#define AVR32_USBA_EPTSETSTA4_KILL_BANK_SIZE                         1
#define AVR32_USBA_EPTSETSTA4_TX_PK_RDY                             11
#define AVR32_USBA_EPTSETSTA4_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTSETSTA4_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTSETSTA4_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTSETSTA5                               0x000001b4
#define AVR32_USBA_EPTSETSTA5_FRCESTALL                              5
#define AVR32_USBA_EPTSETSTA5_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTSETSTA5_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTSETSTA5_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTSETSTA5_KILL_BANK                              9
#define AVR32_USBA_EPTSETSTA5_KILL_BANK_MASK                0x00000200
#define AVR32_USBA_EPTSETSTA5_KILL_BANK_OFFSET                       9
#define AVR32_USBA_EPTSETSTA5_KILL_BANK_SIZE                         1
#define AVR32_USBA_EPTSETSTA5_TX_PK_RDY                             11
#define AVR32_USBA_EPTSETSTA5_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTSETSTA5_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTSETSTA5_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTSETSTA6                               0x000001d4
#define AVR32_USBA_EPTSETSTA6_FRCESTALL                              5
#define AVR32_USBA_EPTSETSTA6_FRCESTALL_MASK                0x00000020
#define AVR32_USBA_EPTSETSTA6_FRCESTALL_OFFSET                       5
#define AVR32_USBA_EPTSETSTA6_FRCESTALL_SIZE                         1
#define AVR32_USBA_EPTSETSTA6_KILL_BANK                              9
#define AVR32_USBA_EPTSETSTA6_KILL_BANK_MASK                0x00000200
#define AVR32_USBA_EPTSETSTA6_KILL_BANK_OFFSET                       9
#define AVR32_USBA_EPTSETSTA6_KILL_BANK_SIZE                         1
#define AVR32_USBA_EPTSETSTA6_TX_PK_RDY                             11
#define AVR32_USBA_EPTSETSTA6_TX_PK_RDY_MASK                0x00000800
#define AVR32_USBA_EPTSETSTA6_TX_PK_RDY_OFFSET                      11
#define AVR32_USBA_EPTSETSTA6_TX_PK_RDY_SIZE                         1
#define AVR32_USBA_EPTSTA0                                  0x0000011c
#define AVR32_USBA_EPTSTA0_BUSY_BANK_STA                            18
#define AVR32_USBA_EPTSTA0_BUSY_BANK_STA_MASK               0x000c0000
#define AVR32_USBA_EPTSTA0_BUSY_BANK_STA_OFFSET                     18
#define AVR32_USBA_EPTSTA0_BUSY_BANK_STA_SIZE                        2
#define AVR32_USBA_EPTSTA0_BYTE_COUNT                               20
#define AVR32_USBA_EPTSTA0_BYTE_COUNT_MASK                  0x7ff00000
#define AVR32_USBA_EPTSTA0_BYTE_COUNT_OFFSET                        20
#define AVR32_USBA_EPTSTA0_BYTE_COUNT_SIZE                          11
#define AVR32_USBA_EPTSTA0_CONTROL_DIR                              16
#define AVR32_USBA_EPTSTA0_CONTROL_DIR_MASK                 0x00030000
#define AVR32_USBA_EPTSTA0_CONTROL_DIR_OFFSET                       16
#define AVR32_USBA_EPTSTA0_CONTROL_DIR_SIZE                          2
#define AVR32_USBA_EPTSTA0_CURRENT_BANK                             16
#define AVR32_USBA_EPTSTA0_CURRENT_BANK_MASK                0x00030000
#define AVR32_USBA_EPTSTA0_CURRENT_BANK_OFFSET                      16
#define AVR32_USBA_EPTSTA0_CURRENT_BANK_SIZE                         2
#define AVR32_USBA_EPTSTA0_ERR_CRISO                                13
#define AVR32_USBA_EPTSTA0_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTSTA0_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTSTA0_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTSTA0_ERR_FLUSH                                14
#define AVR32_USBA_EPTSTA0_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTSTA0_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTSTA0_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTSTA0_ERR_FL_ISO                               12
#define AVR32_USBA_EPTSTA0_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTSTA0_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTSTA0_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTSTA0_ERR_NBTRA                                13
#define AVR32_USBA_EPTSTA0_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTSTA0_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTSTA0_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTSTA0_ERR_OVFLW                                 8
#define AVR32_USBA_EPTSTA0_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTSTA0_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTSTA0_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTSTA0_ERR_TRANS                                11
#define AVR32_USBA_EPTSTA0_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTSTA0_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTSTA0_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTSTA0_FRCESTALL                                 5
#define AVR32_USBA_EPTSTA0_FRCESTALL_MASK                   0x00000020
#define AVR32_USBA_EPTSTA0_FRCESTALL_OFFSET                          5
#define AVR32_USBA_EPTSTA0_FRCESTALL_SIZE                            1
#define AVR32_USBA_EPTSTA0_KILL_BANK                                 9
#define AVR32_USBA_EPTSTA0_KILL_BANK_MASK                   0x00000200
#define AVR32_USBA_EPTSTA0_KILL_BANK_OFFSET                          9
#define AVR32_USBA_EPTSTA0_KILL_BANK_SIZE                            1
#define AVR32_USBA_EPTSTA0_NAK_IN                                   14
#define AVR32_USBA_EPTSTA0_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTSTA0_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTSTA0_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTSTA0_NAK_OUT                                  15
#define AVR32_USBA_EPTSTA0_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTSTA0_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTSTA0_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTSTA0_RX_BK_RDY                                 9
#define AVR32_USBA_EPTSTA0_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTSTA0_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTSTA0_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA0_RX_SETUP                                 12
#define AVR32_USBA_EPTSTA0_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTSTA0_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTSTA0_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTSTA0_SHRT_PCKT                                31
#define AVR32_USBA_EPTSTA0_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTSTA0_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTSTA0_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTSTA0_STALL_SNT                                13
#define AVR32_USBA_EPTSTA0_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTSTA0_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTSTA0_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTSTA0_TOGGLESQ_STA                              6
#define AVR32_USBA_EPTSTA0_TOGGLESQ_STA_MASK                0x000000c0
#define AVR32_USBA_EPTSTA0_TOGGLESQ_STA_OFFSET                       6
#define AVR32_USBA_EPTSTA0_TOGGLESQ_STA_SIZE                         2
#define AVR32_USBA_EPTSTA0_TX_COMPLT                                10
#define AVR32_USBA_EPTSTA0_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTSTA0_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTSTA0_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTSTA0_TX_PK_RDY                                11
#define AVR32_USBA_EPTSTA0_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTSTA0_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTSTA0_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA1                                  0x0000013c
#define AVR32_USBA_EPTSTA1_BUSY_BANK_STA                            18
#define AVR32_USBA_EPTSTA1_BUSY_BANK_STA_MASK               0x000c0000
#define AVR32_USBA_EPTSTA1_BUSY_BANK_STA_OFFSET                     18
#define AVR32_USBA_EPTSTA1_BUSY_BANK_STA_SIZE                        2
#define AVR32_USBA_EPTSTA1_BYTE_COUNT                               20
#define AVR32_USBA_EPTSTA1_BYTE_COUNT_MASK                  0x7ff00000
#define AVR32_USBA_EPTSTA1_BYTE_COUNT_OFFSET                        20
#define AVR32_USBA_EPTSTA1_BYTE_COUNT_SIZE                          11
#define AVR32_USBA_EPTSTA1_CONTROL_DIR                              16
#define AVR32_USBA_EPTSTA1_CONTROL_DIR_MASK                 0x00030000
#define AVR32_USBA_EPTSTA1_CONTROL_DIR_OFFSET                       16
#define AVR32_USBA_EPTSTA1_CONTROL_DIR_SIZE                          2
#define AVR32_USBA_EPTSTA1_CURRENT_BANK                             16
#define AVR32_USBA_EPTSTA1_CURRENT_BANK_MASK                0x00030000
#define AVR32_USBA_EPTSTA1_CURRENT_BANK_OFFSET                      16
#define AVR32_USBA_EPTSTA1_CURRENT_BANK_SIZE                         2
#define AVR32_USBA_EPTSTA1_ERR_CRISO                                13
#define AVR32_USBA_EPTSTA1_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTSTA1_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTSTA1_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTSTA1_ERR_FLUSH                                14
#define AVR32_USBA_EPTSTA1_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTSTA1_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTSTA1_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTSTA1_ERR_FL_ISO                               12
#define AVR32_USBA_EPTSTA1_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTSTA1_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTSTA1_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTSTA1_ERR_NBTRA                                13
#define AVR32_USBA_EPTSTA1_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTSTA1_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTSTA1_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTSTA1_ERR_OVFLW                                 8
#define AVR32_USBA_EPTSTA1_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTSTA1_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTSTA1_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTSTA1_ERR_TRANS                                11
#define AVR32_USBA_EPTSTA1_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTSTA1_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTSTA1_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTSTA1_FRCESTALL                                 5
#define AVR32_USBA_EPTSTA1_FRCESTALL_MASK                   0x00000020
#define AVR32_USBA_EPTSTA1_FRCESTALL_OFFSET                          5
#define AVR32_USBA_EPTSTA1_FRCESTALL_SIZE                            1
#define AVR32_USBA_EPTSTA1_KILL_BANK                                 9
#define AVR32_USBA_EPTSTA1_KILL_BANK_MASK                   0x00000200
#define AVR32_USBA_EPTSTA1_KILL_BANK_OFFSET                          9
#define AVR32_USBA_EPTSTA1_KILL_BANK_SIZE                            1
#define AVR32_USBA_EPTSTA1_NAK_IN                                   14
#define AVR32_USBA_EPTSTA1_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTSTA1_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTSTA1_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTSTA1_NAK_OUT                                  15
#define AVR32_USBA_EPTSTA1_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTSTA1_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTSTA1_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTSTA1_RX_BK_RDY                                 9
#define AVR32_USBA_EPTSTA1_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTSTA1_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTSTA1_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA1_RX_SETUP                                 12
#define AVR32_USBA_EPTSTA1_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTSTA1_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTSTA1_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTSTA1_SHRT_PCKT                                31
#define AVR32_USBA_EPTSTA1_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTSTA1_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTSTA1_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTSTA1_STALL_SNT                                13
#define AVR32_USBA_EPTSTA1_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTSTA1_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTSTA1_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTSTA1_TOGGLESQ_STA                              6
#define AVR32_USBA_EPTSTA1_TOGGLESQ_STA_MASK                0x000000c0
#define AVR32_USBA_EPTSTA1_TOGGLESQ_STA_OFFSET                       6
#define AVR32_USBA_EPTSTA1_TOGGLESQ_STA_SIZE                         2
#define AVR32_USBA_EPTSTA1_TX_COMPLT                                10
#define AVR32_USBA_EPTSTA1_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTSTA1_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTSTA1_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTSTA1_TX_PK_RDY                                11
#define AVR32_USBA_EPTSTA1_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTSTA1_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTSTA1_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA2                                  0x0000015c
#define AVR32_USBA_EPTSTA2_BUSY_BANK_STA                            18
#define AVR32_USBA_EPTSTA2_BUSY_BANK_STA_MASK               0x000c0000
#define AVR32_USBA_EPTSTA2_BUSY_BANK_STA_OFFSET                     18
#define AVR32_USBA_EPTSTA2_BUSY_BANK_STA_SIZE                        2
#define AVR32_USBA_EPTSTA2_BYTE_COUNT                               20
#define AVR32_USBA_EPTSTA2_BYTE_COUNT_MASK                  0x7ff00000
#define AVR32_USBA_EPTSTA2_BYTE_COUNT_OFFSET                        20
#define AVR32_USBA_EPTSTA2_BYTE_COUNT_SIZE                          11
#define AVR32_USBA_EPTSTA2_CONTROL_DIR                              16
#define AVR32_USBA_EPTSTA2_CONTROL_DIR_MASK                 0x00030000
#define AVR32_USBA_EPTSTA2_CONTROL_DIR_OFFSET                       16
#define AVR32_USBA_EPTSTA2_CONTROL_DIR_SIZE                          2
#define AVR32_USBA_EPTSTA2_CURRENT_BANK                             16
#define AVR32_USBA_EPTSTA2_CURRENT_BANK_MASK                0x00030000
#define AVR32_USBA_EPTSTA2_CURRENT_BANK_OFFSET                      16
#define AVR32_USBA_EPTSTA2_CURRENT_BANK_SIZE                         2
#define AVR32_USBA_EPTSTA2_ERR_CRISO                                13
#define AVR32_USBA_EPTSTA2_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTSTA2_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTSTA2_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTSTA2_ERR_FLUSH                                14
#define AVR32_USBA_EPTSTA2_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTSTA2_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTSTA2_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTSTA2_ERR_FL_ISO                               12
#define AVR32_USBA_EPTSTA2_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTSTA2_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTSTA2_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTSTA2_ERR_NBTRA                                13
#define AVR32_USBA_EPTSTA2_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTSTA2_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTSTA2_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTSTA2_ERR_OVFLW                                 8
#define AVR32_USBA_EPTSTA2_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTSTA2_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTSTA2_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTSTA2_ERR_TRANS                                11
#define AVR32_USBA_EPTSTA2_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTSTA2_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTSTA2_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTSTA2_FRCESTALL                                 5
#define AVR32_USBA_EPTSTA2_FRCESTALL_MASK                   0x00000020
#define AVR32_USBA_EPTSTA2_FRCESTALL_OFFSET                          5
#define AVR32_USBA_EPTSTA2_FRCESTALL_SIZE                            1
#define AVR32_USBA_EPTSTA2_KILL_BANK                                 9
#define AVR32_USBA_EPTSTA2_KILL_BANK_MASK                   0x00000200
#define AVR32_USBA_EPTSTA2_KILL_BANK_OFFSET                          9
#define AVR32_USBA_EPTSTA2_KILL_BANK_SIZE                            1
#define AVR32_USBA_EPTSTA2_NAK_IN                                   14
#define AVR32_USBA_EPTSTA2_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTSTA2_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTSTA2_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTSTA2_NAK_OUT                                  15
#define AVR32_USBA_EPTSTA2_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTSTA2_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTSTA2_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTSTA2_RX_BK_RDY                                 9
#define AVR32_USBA_EPTSTA2_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTSTA2_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTSTA2_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA2_RX_SETUP                                 12
#define AVR32_USBA_EPTSTA2_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTSTA2_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTSTA2_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTSTA2_SHRT_PCKT                                31
#define AVR32_USBA_EPTSTA2_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTSTA2_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTSTA2_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTSTA2_STALL_SNT                                13
#define AVR32_USBA_EPTSTA2_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTSTA2_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTSTA2_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTSTA2_TOGGLESQ_STA                              6
#define AVR32_USBA_EPTSTA2_TOGGLESQ_STA_MASK                0x000000c0
#define AVR32_USBA_EPTSTA2_TOGGLESQ_STA_OFFSET                       6
#define AVR32_USBA_EPTSTA2_TOGGLESQ_STA_SIZE                         2
#define AVR32_USBA_EPTSTA2_TX_COMPLT                                10
#define AVR32_USBA_EPTSTA2_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTSTA2_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTSTA2_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTSTA2_TX_PK_RDY                                11
#define AVR32_USBA_EPTSTA2_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTSTA2_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTSTA2_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA3                                  0x0000017c
#define AVR32_USBA_EPTSTA3_BUSY_BANK_STA                            18
#define AVR32_USBA_EPTSTA3_BUSY_BANK_STA_MASK               0x000c0000
#define AVR32_USBA_EPTSTA3_BUSY_BANK_STA_OFFSET                     18
#define AVR32_USBA_EPTSTA3_BUSY_BANK_STA_SIZE                        2
#define AVR32_USBA_EPTSTA3_BYTE_COUNT                               20
#define AVR32_USBA_EPTSTA3_BYTE_COUNT_MASK                  0x7ff00000
#define AVR32_USBA_EPTSTA3_BYTE_COUNT_OFFSET                        20
#define AVR32_USBA_EPTSTA3_BYTE_COUNT_SIZE                          11
#define AVR32_USBA_EPTSTA3_CONTROL_DIR                              16
#define AVR32_USBA_EPTSTA3_CONTROL_DIR_MASK                 0x00030000
#define AVR32_USBA_EPTSTA3_CONTROL_DIR_OFFSET                       16
#define AVR32_USBA_EPTSTA3_CONTROL_DIR_SIZE                          2
#define AVR32_USBA_EPTSTA3_CURRENT_BANK                             16
#define AVR32_USBA_EPTSTA3_CURRENT_BANK_MASK                0x00030000
#define AVR32_USBA_EPTSTA3_CURRENT_BANK_OFFSET                      16
#define AVR32_USBA_EPTSTA3_CURRENT_BANK_SIZE                         2
#define AVR32_USBA_EPTSTA3_ERR_CRISO                                13
#define AVR32_USBA_EPTSTA3_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTSTA3_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTSTA3_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTSTA3_ERR_FLUSH                                14
#define AVR32_USBA_EPTSTA3_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTSTA3_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTSTA3_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTSTA3_ERR_FL_ISO                               12
#define AVR32_USBA_EPTSTA3_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTSTA3_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTSTA3_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTSTA3_ERR_NBTRA                                13
#define AVR32_USBA_EPTSTA3_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTSTA3_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTSTA3_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTSTA3_ERR_OVFLW                                 8
#define AVR32_USBA_EPTSTA3_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTSTA3_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTSTA3_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTSTA3_ERR_TRANS                                11
#define AVR32_USBA_EPTSTA3_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTSTA3_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTSTA3_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTSTA3_FRCESTALL                                 5
#define AVR32_USBA_EPTSTA3_FRCESTALL_MASK                   0x00000020
#define AVR32_USBA_EPTSTA3_FRCESTALL_OFFSET                          5
#define AVR32_USBA_EPTSTA3_FRCESTALL_SIZE                            1
#define AVR32_USBA_EPTSTA3_KILL_BANK                                 9
#define AVR32_USBA_EPTSTA3_KILL_BANK_MASK                   0x00000200
#define AVR32_USBA_EPTSTA3_KILL_BANK_OFFSET                          9
#define AVR32_USBA_EPTSTA3_KILL_BANK_SIZE                            1
#define AVR32_USBA_EPTSTA3_NAK_IN                                   14
#define AVR32_USBA_EPTSTA3_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTSTA3_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTSTA3_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTSTA3_NAK_OUT                                  15
#define AVR32_USBA_EPTSTA3_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTSTA3_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTSTA3_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTSTA3_RX_BK_RDY                                 9
#define AVR32_USBA_EPTSTA3_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTSTA3_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTSTA3_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA3_RX_SETUP                                 12
#define AVR32_USBA_EPTSTA3_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTSTA3_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTSTA3_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTSTA3_SHRT_PCKT                                31
#define AVR32_USBA_EPTSTA3_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTSTA3_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTSTA3_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTSTA3_STALL_SNT                                13
#define AVR32_USBA_EPTSTA3_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTSTA3_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTSTA3_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTSTA3_TOGGLESQ_STA                              6
#define AVR32_USBA_EPTSTA3_TOGGLESQ_STA_MASK                0x000000c0
#define AVR32_USBA_EPTSTA3_TOGGLESQ_STA_OFFSET                       6
#define AVR32_USBA_EPTSTA3_TOGGLESQ_STA_SIZE                         2
#define AVR32_USBA_EPTSTA3_TX_COMPLT                                10
#define AVR32_USBA_EPTSTA3_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTSTA3_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTSTA3_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTSTA3_TX_PK_RDY                                11
#define AVR32_USBA_EPTSTA3_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTSTA3_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTSTA3_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA4                                  0x0000019c
#define AVR32_USBA_EPTSTA4_BUSY_BANK_STA                            18
#define AVR32_USBA_EPTSTA4_BUSY_BANK_STA_MASK               0x000c0000
#define AVR32_USBA_EPTSTA4_BUSY_BANK_STA_OFFSET                     18
#define AVR32_USBA_EPTSTA4_BUSY_BANK_STA_SIZE                        2
#define AVR32_USBA_EPTSTA4_BYTE_COUNT                               20
#define AVR32_USBA_EPTSTA4_BYTE_COUNT_MASK                  0x7ff00000
#define AVR32_USBA_EPTSTA4_BYTE_COUNT_OFFSET                        20
#define AVR32_USBA_EPTSTA4_BYTE_COUNT_SIZE                          11
#define AVR32_USBA_EPTSTA4_CONTROL_DIR                              16
#define AVR32_USBA_EPTSTA4_CONTROL_DIR_MASK                 0x00030000
#define AVR32_USBA_EPTSTA4_CONTROL_DIR_OFFSET                       16
#define AVR32_USBA_EPTSTA4_CONTROL_DIR_SIZE                          2
#define AVR32_USBA_EPTSTA4_CURRENT_BANK                             16
#define AVR32_USBA_EPTSTA4_CURRENT_BANK_MASK                0x00030000
#define AVR32_USBA_EPTSTA4_CURRENT_BANK_OFFSET                      16
#define AVR32_USBA_EPTSTA4_CURRENT_BANK_SIZE                         2
#define AVR32_USBA_EPTSTA4_ERR_CRISO                                13
#define AVR32_USBA_EPTSTA4_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTSTA4_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTSTA4_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTSTA4_ERR_FLUSH                                14
#define AVR32_USBA_EPTSTA4_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTSTA4_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTSTA4_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTSTA4_ERR_FL_ISO                               12
#define AVR32_USBA_EPTSTA4_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTSTA4_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTSTA4_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTSTA4_ERR_NBTRA                                13
#define AVR32_USBA_EPTSTA4_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTSTA4_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTSTA4_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTSTA4_ERR_OVFLW                                 8
#define AVR32_USBA_EPTSTA4_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTSTA4_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTSTA4_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTSTA4_ERR_TRANS                                11
#define AVR32_USBA_EPTSTA4_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTSTA4_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTSTA4_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTSTA4_FRCESTALL                                 5
#define AVR32_USBA_EPTSTA4_FRCESTALL_MASK                   0x00000020
#define AVR32_USBA_EPTSTA4_FRCESTALL_OFFSET                          5
#define AVR32_USBA_EPTSTA4_FRCESTALL_SIZE                            1
#define AVR32_USBA_EPTSTA4_KILL_BANK                                 9
#define AVR32_USBA_EPTSTA4_KILL_BANK_MASK                   0x00000200
#define AVR32_USBA_EPTSTA4_KILL_BANK_OFFSET                          9
#define AVR32_USBA_EPTSTA4_KILL_BANK_SIZE                            1
#define AVR32_USBA_EPTSTA4_NAK_IN                                   14
#define AVR32_USBA_EPTSTA4_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTSTA4_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTSTA4_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTSTA4_NAK_OUT                                  15
#define AVR32_USBA_EPTSTA4_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTSTA4_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTSTA4_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTSTA4_RX_BK_RDY                                 9
#define AVR32_USBA_EPTSTA4_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTSTA4_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTSTA4_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA4_RX_SETUP                                 12
#define AVR32_USBA_EPTSTA4_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTSTA4_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTSTA4_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTSTA4_SHRT_PCKT                                31
#define AVR32_USBA_EPTSTA4_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTSTA4_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTSTA4_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTSTA4_STALL_SNT                                13
#define AVR32_USBA_EPTSTA4_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTSTA4_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTSTA4_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTSTA4_TOGGLESQ_STA                              6
#define AVR32_USBA_EPTSTA4_TOGGLESQ_STA_MASK                0x000000c0
#define AVR32_USBA_EPTSTA4_TOGGLESQ_STA_OFFSET                       6
#define AVR32_USBA_EPTSTA4_TOGGLESQ_STA_SIZE                         2
#define AVR32_USBA_EPTSTA4_TX_COMPLT                                10
#define AVR32_USBA_EPTSTA4_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTSTA4_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTSTA4_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTSTA4_TX_PK_RDY                                11
#define AVR32_USBA_EPTSTA4_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTSTA4_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTSTA4_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA5                                  0x000001bc
#define AVR32_USBA_EPTSTA5_BUSY_BANK_STA                            18
#define AVR32_USBA_EPTSTA5_BUSY_BANK_STA_MASK               0x000c0000
#define AVR32_USBA_EPTSTA5_BUSY_BANK_STA_OFFSET                     18
#define AVR32_USBA_EPTSTA5_BUSY_BANK_STA_SIZE                        2
#define AVR32_USBA_EPTSTA5_BYTE_COUNT                               20
#define AVR32_USBA_EPTSTA5_BYTE_COUNT_MASK                  0x7ff00000
#define AVR32_USBA_EPTSTA5_BYTE_COUNT_OFFSET                        20
#define AVR32_USBA_EPTSTA5_BYTE_COUNT_SIZE                          11
#define AVR32_USBA_EPTSTA5_CONTROL_DIR                              16
#define AVR32_USBA_EPTSTA5_CONTROL_DIR_MASK                 0x00030000
#define AVR32_USBA_EPTSTA5_CONTROL_DIR_OFFSET                       16
#define AVR32_USBA_EPTSTA5_CONTROL_DIR_SIZE                          2
#define AVR32_USBA_EPTSTA5_CURRENT_BANK                             16
#define AVR32_USBA_EPTSTA5_CURRENT_BANK_MASK                0x00030000
#define AVR32_USBA_EPTSTA5_CURRENT_BANK_OFFSET                      16
#define AVR32_USBA_EPTSTA5_CURRENT_BANK_SIZE                         2
#define AVR32_USBA_EPTSTA5_ERR_CRISO                                13
#define AVR32_USBA_EPTSTA5_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTSTA5_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTSTA5_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTSTA5_ERR_FLUSH                                14
#define AVR32_USBA_EPTSTA5_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTSTA5_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTSTA5_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTSTA5_ERR_FL_ISO                               12
#define AVR32_USBA_EPTSTA5_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTSTA5_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTSTA5_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTSTA5_ERR_NBTRA                                13
#define AVR32_USBA_EPTSTA5_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTSTA5_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTSTA5_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTSTA5_ERR_OVFLW                                 8
#define AVR32_USBA_EPTSTA5_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTSTA5_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTSTA5_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTSTA5_ERR_TRANS                                11
#define AVR32_USBA_EPTSTA5_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTSTA5_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTSTA5_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTSTA5_FRCESTALL                                 5
#define AVR32_USBA_EPTSTA5_FRCESTALL_MASK                   0x00000020
#define AVR32_USBA_EPTSTA5_FRCESTALL_OFFSET                          5
#define AVR32_USBA_EPTSTA5_FRCESTALL_SIZE                            1
#define AVR32_USBA_EPTSTA5_KILL_BANK                                 9
#define AVR32_USBA_EPTSTA5_KILL_BANK_MASK                   0x00000200
#define AVR32_USBA_EPTSTA5_KILL_BANK_OFFSET                          9
#define AVR32_USBA_EPTSTA5_KILL_BANK_SIZE                            1
#define AVR32_USBA_EPTSTA5_NAK_IN                                   14
#define AVR32_USBA_EPTSTA5_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTSTA5_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTSTA5_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTSTA5_NAK_OUT                                  15
#define AVR32_USBA_EPTSTA5_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTSTA5_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTSTA5_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTSTA5_RX_BK_RDY                                 9
#define AVR32_USBA_EPTSTA5_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTSTA5_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTSTA5_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA5_RX_SETUP                                 12
#define AVR32_USBA_EPTSTA5_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTSTA5_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTSTA5_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTSTA5_SHRT_PCKT                                31
#define AVR32_USBA_EPTSTA5_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTSTA5_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTSTA5_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTSTA5_STALL_SNT                                13
#define AVR32_USBA_EPTSTA5_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTSTA5_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTSTA5_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTSTA5_TOGGLESQ_STA                              6
#define AVR32_USBA_EPTSTA5_TOGGLESQ_STA_MASK                0x000000c0
#define AVR32_USBA_EPTSTA5_TOGGLESQ_STA_OFFSET                       6
#define AVR32_USBA_EPTSTA5_TOGGLESQ_STA_SIZE                         2
#define AVR32_USBA_EPTSTA5_TX_COMPLT                                10
#define AVR32_USBA_EPTSTA5_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTSTA5_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTSTA5_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTSTA5_TX_PK_RDY                                11
#define AVR32_USBA_EPTSTA5_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTSTA5_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTSTA5_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA6                                  0x000001dc
#define AVR32_USBA_EPTSTA6_BUSY_BANK_STA                            18
#define AVR32_USBA_EPTSTA6_BUSY_BANK_STA_MASK               0x000c0000
#define AVR32_USBA_EPTSTA6_BUSY_BANK_STA_OFFSET                     18
#define AVR32_USBA_EPTSTA6_BUSY_BANK_STA_SIZE                        2
#define AVR32_USBA_EPTSTA6_BYTE_COUNT                               20
#define AVR32_USBA_EPTSTA6_BYTE_COUNT_MASK                  0x7ff00000
#define AVR32_USBA_EPTSTA6_BYTE_COUNT_OFFSET                        20
#define AVR32_USBA_EPTSTA6_BYTE_COUNT_SIZE                          11
#define AVR32_USBA_EPTSTA6_CONTROL_DIR                              16
#define AVR32_USBA_EPTSTA6_CONTROL_DIR_MASK                 0x00030000
#define AVR32_USBA_EPTSTA6_CONTROL_DIR_OFFSET                       16
#define AVR32_USBA_EPTSTA6_CONTROL_DIR_SIZE                          2
#define AVR32_USBA_EPTSTA6_CURRENT_BANK                             16
#define AVR32_USBA_EPTSTA6_CURRENT_BANK_MASK                0x00030000
#define AVR32_USBA_EPTSTA6_CURRENT_BANK_OFFSET                      16
#define AVR32_USBA_EPTSTA6_CURRENT_BANK_SIZE                         2
#define AVR32_USBA_EPTSTA6_ERR_CRISO                                13
#define AVR32_USBA_EPTSTA6_ERR_CRISO_MASK                   0x00002000
#define AVR32_USBA_EPTSTA6_ERR_CRISO_OFFSET                         13
#define AVR32_USBA_EPTSTA6_ERR_CRISO_SIZE                            1
#define AVR32_USBA_EPTSTA6_ERR_FLUSH                                14
#define AVR32_USBA_EPTSTA6_ERR_FLUSH_MASK                   0x00004000
#define AVR32_USBA_EPTSTA6_ERR_FLUSH_OFFSET                         14
#define AVR32_USBA_EPTSTA6_ERR_FLUSH_SIZE                            1
#define AVR32_USBA_EPTSTA6_ERR_FL_ISO                               12
#define AVR32_USBA_EPTSTA6_ERR_FL_ISO_MASK                  0x00001000
#define AVR32_USBA_EPTSTA6_ERR_FL_ISO_OFFSET                        12
#define AVR32_USBA_EPTSTA6_ERR_FL_ISO_SIZE                           1
#define AVR32_USBA_EPTSTA6_ERR_NBTRA                                13
#define AVR32_USBA_EPTSTA6_ERR_NBTRA_MASK                   0x00002000
#define AVR32_USBA_EPTSTA6_ERR_NBTRA_OFFSET                         13
#define AVR32_USBA_EPTSTA6_ERR_NBTRA_SIZE                            1
#define AVR32_USBA_EPTSTA6_ERR_OVFLW                                 8
#define AVR32_USBA_EPTSTA6_ERR_OVFLW_MASK                   0x00000100
#define AVR32_USBA_EPTSTA6_ERR_OVFLW_OFFSET                          8
#define AVR32_USBA_EPTSTA6_ERR_OVFLW_SIZE                            1
#define AVR32_USBA_EPTSTA6_ERR_TRANS                                11
#define AVR32_USBA_EPTSTA6_ERR_TRANS_MASK                   0x00000800
#define AVR32_USBA_EPTSTA6_ERR_TRANS_OFFSET                         11
#define AVR32_USBA_EPTSTA6_ERR_TRANS_SIZE                            1
#define AVR32_USBA_EPTSTA6_FRCESTALL                                 5
#define AVR32_USBA_EPTSTA6_FRCESTALL_MASK                   0x00000020
#define AVR32_USBA_EPTSTA6_FRCESTALL_OFFSET                          5
#define AVR32_USBA_EPTSTA6_FRCESTALL_SIZE                            1
#define AVR32_USBA_EPTSTA6_KILL_BANK                                 9
#define AVR32_USBA_EPTSTA6_KILL_BANK_MASK                   0x00000200
#define AVR32_USBA_EPTSTA6_KILL_BANK_OFFSET                          9
#define AVR32_USBA_EPTSTA6_KILL_BANK_SIZE                            1
#define AVR32_USBA_EPTSTA6_NAK_IN                                   14
#define AVR32_USBA_EPTSTA6_NAK_IN_MASK                      0x00004000
#define AVR32_USBA_EPTSTA6_NAK_IN_OFFSET                            14
#define AVR32_USBA_EPTSTA6_NAK_IN_SIZE                               1
#define AVR32_USBA_EPTSTA6_NAK_OUT                                  15
#define AVR32_USBA_EPTSTA6_NAK_OUT_MASK                     0x00008000
#define AVR32_USBA_EPTSTA6_NAK_OUT_OFFSET                           15
#define AVR32_USBA_EPTSTA6_NAK_OUT_SIZE                              1
#define AVR32_USBA_EPTSTA6_RX_BK_RDY                                 9
#define AVR32_USBA_EPTSTA6_RX_BK_RDY_MASK                   0x00000200
#define AVR32_USBA_EPTSTA6_RX_BK_RDY_OFFSET                          9
#define AVR32_USBA_EPTSTA6_RX_BK_RDY_SIZE                            1
#define AVR32_USBA_EPTSTA6_RX_SETUP                                 12
#define AVR32_USBA_EPTSTA6_RX_SETUP_MASK                    0x00001000
#define AVR32_USBA_EPTSTA6_RX_SETUP_OFFSET                          12
#define AVR32_USBA_EPTSTA6_RX_SETUP_SIZE                             1
#define AVR32_USBA_EPTSTA6_SHRT_PCKT                                31
#define AVR32_USBA_EPTSTA6_SHRT_PCKT_MASK                   0x80000000
#define AVR32_USBA_EPTSTA6_SHRT_PCKT_OFFSET                         31
#define AVR32_USBA_EPTSTA6_SHRT_PCKT_SIZE                            1
#define AVR32_USBA_EPTSTA6_STALL_SNT                                13
#define AVR32_USBA_EPTSTA6_STALL_SNT_MASK                   0x00002000
#define AVR32_USBA_EPTSTA6_STALL_SNT_OFFSET                         13
#define AVR32_USBA_EPTSTA6_STALL_SNT_SIZE                            1
#define AVR32_USBA_EPTSTA6_TOGGLESQ_STA                              6
#define AVR32_USBA_EPTSTA6_TOGGLESQ_STA_MASK                0x000000c0
#define AVR32_USBA_EPTSTA6_TOGGLESQ_STA_OFFSET                       6
#define AVR32_USBA_EPTSTA6_TOGGLESQ_STA_SIZE                         2
#define AVR32_USBA_EPTSTA6_TX_COMPLT                                10
#define AVR32_USBA_EPTSTA6_TX_COMPLT_MASK                   0x00000400
#define AVR32_USBA_EPTSTA6_TX_COMPLT_OFFSET                         10
#define AVR32_USBA_EPTSTA6_TX_COMPLT_SIZE                            1
#define AVR32_USBA_EPTSTA6_TX_PK_RDY                                11
#define AVR32_USBA_EPTSTA6_TX_PK_RDY_MASK                   0x00000800
#define AVR32_USBA_EPTSTA6_TX_PK_RDY_OFFSET                         11
#define AVR32_USBA_EPTSTA6_TX_PK_RDY_SIZE                            1
#define AVR32_USBA_EPT_DIR                                           3
#define AVR32_USBA_EPT_DIR_MASK                             0x00000008
#define AVR32_USBA_EPT_DIR_OFFSET                                    3
#define AVR32_USBA_EPT_DIR_SIZE                                      1
#define AVR32_USBA_EPT_DISABL                                        0
#define AVR32_USBA_EPT_DISABL_MASK                          0x00000001
#define AVR32_USBA_EPT_DISABL_OFFSET                                 0
#define AVR32_USBA_EPT_DISABL_SIZE                                   1
#define AVR32_USBA_EPT_ENABL                                         0
#define AVR32_USBA_EPT_ENABL_MASK                           0x00000001
#define AVR32_USBA_EPT_ENABL_OFFSET                                  0
#define AVR32_USBA_EPT_ENABL_SIZE                                    1
#define AVR32_USBA_EPT_INT_0                                         8
#define AVR32_USBA_EPT_INT_0_MASK                           0x00000100
#define AVR32_USBA_EPT_INT_0_OFFSET                                  8
#define AVR32_USBA_EPT_INT_0_SIZE                                    1
#define AVR32_USBA_EPT_INT_1                                         9
#define AVR32_USBA_EPT_INT_1_MASK                           0x00000200
#define AVR32_USBA_EPT_INT_1_OFFSET                                  9
#define AVR32_USBA_EPT_INT_1_SIZE                                    1
#define AVR32_USBA_EPT_INT_2                                        10
#define AVR32_USBA_EPT_INT_2_MASK                           0x00000400
#define AVR32_USBA_EPT_INT_2_OFFSET                                 10
#define AVR32_USBA_EPT_INT_2_SIZE                                    1
#define AVR32_USBA_EPT_INT_3                                        11
#define AVR32_USBA_EPT_INT_3_MASK                           0x00000800
#define AVR32_USBA_EPT_INT_3_OFFSET                                 11
#define AVR32_USBA_EPT_INT_3_SIZE                                    1
#define AVR32_USBA_EPT_INT_4                                        12
#define AVR32_USBA_EPT_INT_4_MASK                           0x00001000
#define AVR32_USBA_EPT_INT_4_OFFSET                                 12
#define AVR32_USBA_EPT_INT_4_SIZE                                    1
#define AVR32_USBA_EPT_INT_5                                        13
#define AVR32_USBA_EPT_INT_5_MASK                           0x00002000
#define AVR32_USBA_EPT_INT_5_OFFSET                                 13
#define AVR32_USBA_EPT_INT_5_SIZE                                    1
#define AVR32_USBA_EPT_INT_6                                        14
#define AVR32_USBA_EPT_INT_6_MASK                           0x00004000
#define AVR32_USBA_EPT_INT_6_OFFSET                                 14
#define AVR32_USBA_EPT_INT_6_SIZE                                    1
#define AVR32_USBA_EPT_INT_7                                        15
#define AVR32_USBA_EPT_INT_7_MASK                           0x00008000
#define AVR32_USBA_EPT_INT_7_OFFSET                                 15
#define AVR32_USBA_EPT_INT_7_SIZE                                    1
#define AVR32_USBA_EPT_MAPD                                         31
#define AVR32_USBA_EPT_MAPD_MASK                            0x80000000
#define AVR32_USBA_EPT_MAPD_OFFSET                                  31
#define AVR32_USBA_EPT_MAPD_SIZE                                     1
#define AVR32_USBA_EPT_NBR_MAX                                       0
#define AVR32_USBA_EPT_NBR_MAX_MASK                         0x0000000f
#define AVR32_USBA_EPT_NBR_MAX_OFFSET                                0
#define AVR32_USBA_EPT_NBR_MAX_SIZE                                  4
#define AVR32_USBA_EPT_SIZE                                          0
#define AVR32_USBA_EPT_SIZE_MASK                            0x00000007
#define AVR32_USBA_EPT_SIZE_OFFSET                                   0
#define AVR32_USBA_EPT_SIZE_SIZE                                     3
#define AVR32_USBA_EPT_SIZE_SZ_1024                         0x00000007
#define AVR32_USBA_EPT_SIZE_SZ_128                          0x00000004
#define AVR32_USBA_EPT_SIZE_SZ_16                           0x00000001
#define AVR32_USBA_EPT_SIZE_SZ_256                          0x00000005
#define AVR32_USBA_EPT_SIZE_SZ_32                           0x00000002
#define AVR32_USBA_EPT_SIZE_SZ_512                          0x00000006
#define AVR32_USBA_EPT_SIZE_SZ_64                           0x00000003
#define AVR32_USBA_EPT_SIZE_SZ_8                            0x00000000
#define AVR32_USBA_EPT_TYPE                                          4
#define AVR32_USBA_EPT_TYPE_BULK                            0x00000002
#define AVR32_USBA_EPT_TYPE_CONTROL                         0x00000000
#define AVR32_USBA_EPT_TYPE_INT                             0x00000003
#define AVR32_USBA_EPT_TYPE_ISO                             0x00000001
#define AVR32_USBA_EPT_TYPE_MASK                            0x00000030
#define AVR32_USBA_EPT_TYPE_OFFSET                                   4
#define AVR32_USBA_EPT_TYPE_SIZE                                     2
#define AVR32_USBA_ERR_CRISO                                        13
#define AVR32_USBA_ERR_CRISO_MASK                           0x00002000
#define AVR32_USBA_ERR_CRISO_OFFSET                                 13
#define AVR32_USBA_ERR_CRISO_SIZE                                    1
#define AVR32_USBA_ERR_FLUSH                                        14
#define AVR32_USBA_ERR_FLUSH_MASK                           0x00004000
#define AVR32_USBA_ERR_FLUSH_OFFSET                                 14
#define AVR32_USBA_ERR_FLUSH_SIZE                                    1
#define AVR32_USBA_ERR_FL_ISO                                       12
#define AVR32_USBA_ERR_FL_ISO_MASK                          0x00001000
#define AVR32_USBA_ERR_FL_ISO_OFFSET                                12
#define AVR32_USBA_ERR_FL_ISO_SIZE                                   1
#define AVR32_USBA_ERR_NBTRA                                        13
#define AVR32_USBA_ERR_NBTRA_MASK                           0x00002000
#define AVR32_USBA_ERR_NBTRA_OFFSET                                 13
#define AVR32_USBA_ERR_NBTRA_SIZE                                    1
#define AVR32_USBA_ERR_OVFLW                                         8
#define AVR32_USBA_ERR_OVFLW_MASK                           0x00000100
#define AVR32_USBA_ERR_OVFLW_OFFSET                                  8
#define AVR32_USBA_ERR_OVFLW_SIZE                                    1
#define AVR32_USBA_ERR_TRANS                                        11
#define AVR32_USBA_ERR_TRANS_MASK                           0x00000800
#define AVR32_USBA_ERR_TRANS_OFFSET                                 11
#define AVR32_USBA_ERR_TRANS_SIZE                                    1
#define AVR32_USBA_FADDR_EN                                          7
#define AVR32_USBA_FADDR_EN_MASK                            0x00000080
#define AVR32_USBA_FADDR_EN_OFFSET                                   7
#define AVR32_USBA_FADDR_EN_SIZE                                     1
#define AVR32_USBA_FIFO_MAX_SIZE                                    12
#define AVR32_USBA_FIFO_MAX_SIZE_MASK                       0x00007000
#define AVR32_USBA_FIFO_MAX_SIZE_OFFSET                             12
#define AVR32_USBA_FIFO_MAX_SIZE_SIZE                                3
#define AVR32_USBA_FNUM                                     0x00000004
#define AVR32_USBA_FNUM_ERR                                         31
#define AVR32_USBA_FNUM_ERR_MASK                            0x80000000
#define AVR32_USBA_FNUM_ERR_OFFSET                                  31
#define AVR32_USBA_FNUM_ERR_SIZE                                     1
#define AVR32_USBA_FNUM_FNUM_ERR                                    31
#define AVR32_USBA_FNUM_FNUM_ERR_MASK                       0x80000000
#define AVR32_USBA_FNUM_FNUM_ERR_OFFSET                             31
#define AVR32_USBA_FNUM_FNUM_ERR_SIZE                                1
#define AVR32_USBA_FNUM_FRAME_NUMBER                                 3
#define AVR32_USBA_FNUM_FRAME_NUMBER_MASK                   0x00003ff8
#define AVR32_USBA_FNUM_FRAME_NUMBER_OFFSET                          3
#define AVR32_USBA_FNUM_FRAME_NUMBER_SIZE                           11
#define AVR32_USBA_FNUM_MICRO_FRAME_NUM                              0
#define AVR32_USBA_FNUM_MICRO_FRAME_NUM_MASK                0x00000007
#define AVR32_USBA_FNUM_MICRO_FRAME_NUM_OFFSET                       0
#define AVR32_USBA_FNUM_MICRO_FRAME_NUM_SIZE                         3
#define AVR32_USBA_FORCE_FULL                               0x00000003
#define AVR32_USBA_FORCE_HIGH                               0x00000002
#define AVR32_USBA_FRAME_NUMBER                                      3
#define AVR32_USBA_FRAME_NUMBER_MASK                        0x00003ff8
#define AVR32_USBA_FRAME_NUMBER_OFFSET                               3
#define AVR32_USBA_FRAME_NUMBER_SIZE                                11
#define AVR32_USBA_FRCESTALL                                         5
#define AVR32_USBA_FRCESTALL_MASK                           0x00000020
#define AVR32_USBA_FRCESTALL_OFFSET                                  5
#define AVR32_USBA_FRCESTALL_SIZE                                    1
#define AVR32_USBA_IEN                                      0x00000010
#define AVR32_USBA_IEN_DET_SUSPD                                     1
#define AVR32_USBA_IEN_DET_SUSPD_MASK                       0x00000002
#define AVR32_USBA_IEN_DET_SUSPD_OFFSET                              1
#define AVR32_USBA_IEN_DET_SUSPD_SIZE                                1
#define AVR32_USBA_IEN_DMA_INT_1                                    25
#define AVR32_USBA_IEN_DMA_INT_1_MASK                       0x02000000
#define AVR32_USBA_IEN_DMA_INT_1_OFFSET                             25
#define AVR32_USBA_IEN_DMA_INT_1_SIZE                                1
#define AVR32_USBA_IEN_DMA_INT_2                                    26
#define AVR32_USBA_IEN_DMA_INT_2_MASK                       0x04000000
#define AVR32_USBA_IEN_DMA_INT_2_OFFSET                             26
#define AVR32_USBA_IEN_DMA_INT_2_SIZE                                1
#define AVR32_USBA_IEN_DMA_INT_3                                    27
#define AVR32_USBA_IEN_DMA_INT_3_MASK                       0x08000000
#define AVR32_USBA_IEN_DMA_INT_3_OFFSET                             27
#define AVR32_USBA_IEN_DMA_INT_3_SIZE                                1
#define AVR32_USBA_IEN_DMA_INT_4                                    28
#define AVR32_USBA_IEN_DMA_INT_4_MASK                       0x10000000
#define AVR32_USBA_IEN_DMA_INT_4_OFFSET                             28
#define AVR32_USBA_IEN_DMA_INT_4_SIZE                                1
#define AVR32_USBA_IEN_DMA_INT_5                                    29
#define AVR32_USBA_IEN_DMA_INT_5_MASK                       0x20000000
#define AVR32_USBA_IEN_DMA_INT_5_OFFSET                             29
#define AVR32_USBA_IEN_DMA_INT_5_SIZE                                1
#define AVR32_USBA_IEN_DMA_INT_6                                    30
#define AVR32_USBA_IEN_DMA_INT_6_MASK                       0x40000000
#define AVR32_USBA_IEN_DMA_INT_6_OFFSET                             30
#define AVR32_USBA_IEN_DMA_INT_6_SIZE                                1
#define AVR32_USBA_IEN_ENDOFRSM                                      6
#define AVR32_USBA_IEN_ENDOFRSM_MASK                        0x00000040
#define AVR32_USBA_IEN_ENDOFRSM_OFFSET                               6
#define AVR32_USBA_IEN_ENDOFRSM_SIZE                                 1
#define AVR32_USBA_IEN_ENDRESET                                      4
#define AVR32_USBA_IEN_ENDRESET_MASK                        0x00000010
#define AVR32_USBA_IEN_ENDRESET_OFFSET                               4
#define AVR32_USBA_IEN_ENDRESET_SIZE                                 1
#define AVR32_USBA_IEN_EPT_INT_0                                     8
#define AVR32_USBA_IEN_EPT_INT_0_MASK                       0x00000100
#define AVR32_USBA_IEN_EPT_INT_0_OFFSET                              8
#define AVR32_USBA_IEN_EPT_INT_0_SIZE                                1
#define AVR32_USBA_IEN_EPT_INT_1                                     9
#define AVR32_USBA_IEN_EPT_INT_1_MASK                       0x00000200
#define AVR32_USBA_IEN_EPT_INT_1_OFFSET                              9
#define AVR32_USBA_IEN_EPT_INT_1_SIZE                                1
#define AVR32_USBA_IEN_EPT_INT_2                                    10
#define AVR32_USBA_IEN_EPT_INT_2_MASK                       0x00000400
#define AVR32_USBA_IEN_EPT_INT_2_OFFSET                             10
#define AVR32_USBA_IEN_EPT_INT_2_SIZE                                1
#define AVR32_USBA_IEN_EPT_INT_3                                    11
#define AVR32_USBA_IEN_EPT_INT_3_MASK                       0x00000800
#define AVR32_USBA_IEN_EPT_INT_3_OFFSET                             11
#define AVR32_USBA_IEN_EPT_INT_3_SIZE                                1
#define AVR32_USBA_IEN_EPT_INT_4                                    12
#define AVR32_USBA_IEN_EPT_INT_4_MASK                       0x00001000
#define AVR32_USBA_IEN_EPT_INT_4_OFFSET                             12
#define AVR32_USBA_IEN_EPT_INT_4_SIZE                                1
#define AVR32_USBA_IEN_EPT_INT_5                                    13
#define AVR32_USBA_IEN_EPT_INT_5_MASK                       0x00002000
#define AVR32_USBA_IEN_EPT_INT_5_OFFSET                             13
#define AVR32_USBA_IEN_EPT_INT_5_SIZE                                1
#define AVR32_USBA_IEN_EPT_INT_6                                    14
#define AVR32_USBA_IEN_EPT_INT_6_MASK                       0x00004000
#define AVR32_USBA_IEN_EPT_INT_6_OFFSET                             14
#define AVR32_USBA_IEN_EPT_INT_6_SIZE                                1
#define AVR32_USBA_IEN_EPT_INT_7                                    15
#define AVR32_USBA_IEN_EPT_INT_7_MASK                       0x00008000
#define AVR32_USBA_IEN_EPT_INT_7_OFFSET                             15
#define AVR32_USBA_IEN_EPT_INT_7_SIZE                                1
#define AVR32_USBA_IEN_INT_SOF                                       3
#define AVR32_USBA_IEN_INT_SOF_MASK                         0x00000008
#define AVR32_USBA_IEN_INT_SOF_OFFSET                                3
#define AVR32_USBA_IEN_INT_SOF_SIZE                                  1
#define AVR32_USBA_IEN_MICRO_SOF                                     2
#define AVR32_USBA_IEN_MICRO_SOF_MASK                       0x00000004
#define AVR32_USBA_IEN_MICRO_SOF_OFFSET                              2
#define AVR32_USBA_IEN_MICRO_SOF_SIZE                                1
#define AVR32_USBA_IEN_UPSTR_RES                                     7
#define AVR32_USBA_IEN_UPSTR_RES_MASK                       0x00000080
#define AVR32_USBA_IEN_UPSTR_RES_OFFSET                              7
#define AVR32_USBA_IEN_UPSTR_RES_SIZE                                1
#define AVR32_USBA_IEN_WAKE_UP                                       5
#define AVR32_USBA_IEN_WAKE_UP_MASK                         0x00000020
#define AVR32_USBA_IEN_WAKE_UP_OFFSET                                5
#define AVR32_USBA_IEN_WAKE_UP_SIZE                                  1
#define AVR32_USBA_INT                                      0x00000003
#define AVR32_USBA_INTDIS_DMA                                        3
#define AVR32_USBA_INTDIS_DMA_MASK                          0x00000008
#define AVR32_USBA_INTDIS_DMA_OFFSET                                 3
#define AVR32_USBA_INTDIS_DMA_SIZE                                   1
#define AVR32_USBA_INTSTA                                   0x00000014
#define AVR32_USBA_INTSTA_DET_SUSPD                                  1
#define AVR32_USBA_INTSTA_DET_SUSPD_MASK                    0x00000002
#define AVR32_USBA_INTSTA_DET_SUSPD_OFFSET                           1
#define AVR32_USBA_INTSTA_DET_SUSPD_SIZE                             1
#define AVR32_USBA_INTSTA_DMA_INT_1                                 25
#define AVR32_USBA_INTSTA_DMA_INT_1_MASK                    0x02000000
#define AVR32_USBA_INTSTA_DMA_INT_1_OFFSET                          25
#define AVR32_USBA_INTSTA_DMA_INT_1_SIZE                             1
#define AVR32_USBA_INTSTA_DMA_INT_2                                 26
#define AVR32_USBA_INTSTA_DMA_INT_2_MASK                    0x04000000
#define AVR32_USBA_INTSTA_DMA_INT_2_OFFSET                          26
#define AVR32_USBA_INTSTA_DMA_INT_2_SIZE                             1
#define AVR32_USBA_INTSTA_DMA_INT_3                                 27
#define AVR32_USBA_INTSTA_DMA_INT_3_MASK                    0x08000000
#define AVR32_USBA_INTSTA_DMA_INT_3_OFFSET                          27
#define AVR32_USBA_INTSTA_DMA_INT_3_SIZE                             1
#define AVR32_USBA_INTSTA_DMA_INT_4                                 28
#define AVR32_USBA_INTSTA_DMA_INT_4_MASK                    0x10000000
#define AVR32_USBA_INTSTA_DMA_INT_4_OFFSET                          28
#define AVR32_USBA_INTSTA_DMA_INT_4_SIZE                             1
#define AVR32_USBA_INTSTA_DMA_INT_5                                 29
#define AVR32_USBA_INTSTA_DMA_INT_5_MASK                    0x20000000
#define AVR32_USBA_INTSTA_DMA_INT_5_OFFSET                          29
#define AVR32_USBA_INTSTA_DMA_INT_5_SIZE                             1
#define AVR32_USBA_INTSTA_DMA_INT_6                                 30
#define AVR32_USBA_INTSTA_DMA_INT_6_MASK                    0x40000000
#define AVR32_USBA_INTSTA_DMA_INT_6_OFFSET                          30
#define AVR32_USBA_INTSTA_DMA_INT_6_SIZE                             1
#define AVR32_USBA_INTSTA_ENDOFRSM                                   6
#define AVR32_USBA_INTSTA_ENDOFRSM_MASK                     0x00000040
#define AVR32_USBA_INTSTA_ENDOFRSM_OFFSET                            6
#define AVR32_USBA_INTSTA_ENDOFRSM_SIZE                              1
#define AVR32_USBA_INTSTA_ENDRESET                                   4
#define AVR32_USBA_INTSTA_ENDRESET_MASK                     0x00000010
#define AVR32_USBA_INTSTA_ENDRESET_OFFSET                            4
#define AVR32_USBA_INTSTA_ENDRESET_SIZE                              1
#define AVR32_USBA_INTSTA_EPT_INT_0                                  8
#define AVR32_USBA_INTSTA_EPT_INT_0_MASK                    0x00000100
#define AVR32_USBA_INTSTA_EPT_INT_0_OFFSET                           8
#define AVR32_USBA_INTSTA_EPT_INT_0_SIZE                             1
#define AVR32_USBA_INTSTA_EPT_INT_1                                  9
#define AVR32_USBA_INTSTA_EPT_INT_1_MASK                    0x00000200
#define AVR32_USBA_INTSTA_EPT_INT_1_OFFSET                           9
#define AVR32_USBA_INTSTA_EPT_INT_1_SIZE                             1
#define AVR32_USBA_INTSTA_EPT_INT_2                                 10
#define AVR32_USBA_INTSTA_EPT_INT_2_MASK                    0x00000400
#define AVR32_USBA_INTSTA_EPT_INT_2_OFFSET                          10
#define AVR32_USBA_INTSTA_EPT_INT_2_SIZE                             1
#define AVR32_USBA_INTSTA_EPT_INT_3                                 11
#define AVR32_USBA_INTSTA_EPT_INT_3_MASK                    0x00000800
#define AVR32_USBA_INTSTA_EPT_INT_3_OFFSET                          11
#define AVR32_USBA_INTSTA_EPT_INT_3_SIZE                             1
#define AVR32_USBA_INTSTA_EPT_INT_4                                 12
#define AVR32_USBA_INTSTA_EPT_INT_4_MASK                    0x00001000
#define AVR32_USBA_INTSTA_EPT_INT_4_OFFSET                          12
#define AVR32_USBA_INTSTA_EPT_INT_4_SIZE                             1
#define AVR32_USBA_INTSTA_EPT_INT_5                                 13
#define AVR32_USBA_INTSTA_EPT_INT_5_MASK                    0x00002000
#define AVR32_USBA_INTSTA_EPT_INT_5_OFFSET                          13
#define AVR32_USBA_INTSTA_EPT_INT_5_SIZE                             1
#define AVR32_USBA_INTSTA_EPT_INT_6                                 14
#define AVR32_USBA_INTSTA_EPT_INT_6_MASK                    0x00004000
#define AVR32_USBA_INTSTA_EPT_INT_6_OFFSET                          14
#define AVR32_USBA_INTSTA_EPT_INT_6_SIZE                             1
#define AVR32_USBA_INTSTA_EPT_INT_7                                 15
#define AVR32_USBA_INTSTA_EPT_INT_7_MASK                    0x00008000
#define AVR32_USBA_INTSTA_EPT_INT_7_OFFSET                          15
#define AVR32_USBA_INTSTA_EPT_INT_7_SIZE                             1
#define AVR32_USBA_INTSTA_INT_SOF                                    3
#define AVR32_USBA_INTSTA_INT_SOF_MASK                      0x00000008
#define AVR32_USBA_INTSTA_INT_SOF_OFFSET                             3
#define AVR32_USBA_INTSTA_INT_SOF_SIZE                               1
#define AVR32_USBA_INTSTA_MICRO_SOF                                  2
#define AVR32_USBA_INTSTA_MICRO_SOF_MASK                    0x00000004
#define AVR32_USBA_INTSTA_MICRO_SOF_OFFSET                           2
#define AVR32_USBA_INTSTA_MICRO_SOF_SIZE                             1
#define AVR32_USBA_INTSTA_SPEED                                      0
#define AVR32_USBA_INTSTA_SPEED_MASK                        0x00000001
#define AVR32_USBA_INTSTA_SPEED_OFFSET                               0
#define AVR32_USBA_INTSTA_SPEED_SIZE                                 1
#define AVR32_USBA_INTSTA_UPSTR_RES                                  7
#define AVR32_USBA_INTSTA_UPSTR_RES_MASK                    0x00000080
#define AVR32_USBA_INTSTA_UPSTR_RES_OFFSET                           7
#define AVR32_USBA_INTSTA_UPSTR_RES_SIZE                             1
#define AVR32_USBA_INTSTA_WAKE_UP                                    5
#define AVR32_USBA_INTSTA_WAKE_UP_MASK                      0x00000020
#define AVR32_USBA_INTSTA_WAKE_UP_OFFSET                             5
#define AVR32_USBA_INTSTA_WAKE_UP_SIZE                               1
#define AVR32_USBA_INT_SOF                                           3
#define AVR32_USBA_INT_SOF_MASK                             0x00000008
#define AVR32_USBA_INT_SOF_OFFSET                                    3
#define AVR32_USBA_INT_SOF_SIZE                                      1
#define AVR32_USBA_IPFEATURES                               0x000000f8
#define AVR32_USBA_IPFEATURES_BW_DPRAM                              15
#define AVR32_USBA_IPFEATURES_BW_DPRAM_MASK                 0x00008000
#define AVR32_USBA_IPFEATURES_BW_DPRAM_OFFSET                       15
#define AVR32_USBA_IPFEATURES_BW_DPRAM_SIZE                          1
#define AVR32_USBA_IPFEATURES_DATAB16_8                             16
#define AVR32_USBA_IPFEATURES_DATAB16_8_MASK                0x00010000
#define AVR32_USBA_IPFEATURES_DATAB16_8_OFFSET                      16
#define AVR32_USBA_IPFEATURES_DATAB16_8_SIZE                         1
#define AVR32_USBA_IPFEATURES_DMA_B_SIZ                              7
#define AVR32_USBA_IPFEATURES_DMA_B_SIZ_MASK                0x00000080
#define AVR32_USBA_IPFEATURES_DMA_B_SIZ_OFFSET                       7
#define AVR32_USBA_IPFEATURES_DMA_B_SIZ_SIZE                         1
#define AVR32_USBA_IPFEATURES_DMA_CHANNEL_NBR                        4
#define AVR32_USBA_IPFEATURES_DMA_CHANNEL_NBR_MASK          0x00000070
#define AVR32_USBA_IPFEATURES_DMA_CHANNEL_NBR_OFFSET                 4
#define AVR32_USBA_IPFEATURES_DMA_CHANNEL_NBR_SIZE                   3
#define AVR32_USBA_IPFEATURES_DMA_FIFO_WORD_DEPTH                    8
#define AVR32_USBA_IPFEATURES_DMA_FIFO_WORD_DEPTH_MASK      0x00000f00
#define AVR32_USBA_IPFEATURES_DMA_FIFO_WORD_DEPTH_OFFSET             8
#define AVR32_USBA_IPFEATURES_DMA_FIFO_WORD_DEPTH_SIZE               4
#define AVR32_USBA_IPFEATURES_EPT_NBR_MAX                            0
#define AVR32_USBA_IPFEATURES_EPT_NBR_MAX_MASK              0x0000000f
#define AVR32_USBA_IPFEATURES_EPT_NBR_MAX_OFFSET                     0
#define AVR32_USBA_IPFEATURES_EPT_NBR_MAX_SIZE                       4
#define AVR32_USBA_IPFEATURES_FIFO_MAX_SIZE                         12
#define AVR32_USBA_IPFEATURES_FIFO_MAX_SIZE_MASK            0x00007000
#define AVR32_USBA_IPFEATURES_FIFO_MAX_SIZE_OFFSET                  12
#define AVR32_USBA_IPFEATURES_FIFO_MAX_SIZE_SIZE                     3
#define AVR32_USBA_IPFEATURES_ISO_EPT_1                             17
#define AVR32_USBA_IPFEATURES_ISO_EPT_1_MASK                0x00020000
#define AVR32_USBA_IPFEATURES_ISO_EPT_1_OFFSET                      17
#define AVR32_USBA_IPFEATURES_ISO_EPT_1_SIZE                         1
#define AVR32_USBA_IPFEATURES_ISO_EPT_2                             18
#define AVR32_USBA_IPFEATURES_ISO_EPT_2_MASK                0x00040000
#define AVR32_USBA_IPFEATURES_ISO_EPT_2_OFFSET                      18
#define AVR32_USBA_IPFEATURES_ISO_EPT_2_SIZE                         1
#define AVR32_USBA_IPFEATURES_ISO_EPT_3                             19
#define AVR32_USBA_IPFEATURES_ISO_EPT_3_MASK                0x00080000
#define AVR32_USBA_IPFEATURES_ISO_EPT_3_OFFSET                      19
#define AVR32_USBA_IPFEATURES_ISO_EPT_3_SIZE                         1
#define AVR32_USBA_IPFEATURES_ISO_EPT_4                             20
#define AVR32_USBA_IPFEATURES_ISO_EPT_4_MASK                0x00100000
#define AVR32_USBA_IPFEATURES_ISO_EPT_4_OFFSET                      20
#define AVR32_USBA_IPFEATURES_ISO_EPT_4_SIZE                         1
#define AVR32_USBA_IPFEATURES_ISO_EPT_5                             21
#define AVR32_USBA_IPFEATURES_ISO_EPT_5_MASK                0x00200000
#define AVR32_USBA_IPFEATURES_ISO_EPT_5_OFFSET                      21
#define AVR32_USBA_IPFEATURES_ISO_EPT_5_SIZE                         1
#define AVR32_USBA_IPFEATURES_ISO_EPT_6                             22
#define AVR32_USBA_IPFEATURES_ISO_EPT_6_MASK                0x00400000
#define AVR32_USBA_IPFEATURES_ISO_EPT_6_OFFSET                      22
#define AVR32_USBA_IPFEATURES_ISO_EPT_6_SIZE                         1
#define AVR32_USBA_IPFEATURES_ISO_EPT_7                             23
#define AVR32_USBA_IPFEATURES_ISO_EPT_7_MASK                0x00800000
#define AVR32_USBA_IPFEATURES_ISO_EPT_7_OFFSET                      23
#define AVR32_USBA_IPFEATURES_ISO_EPT_7_SIZE                         1
#define AVR32_USBA_IPNAME1                                  0x000000f0
#define AVR32_USBA_IPNAME1_IP_NAME1                                  0
#define AVR32_USBA_IPNAME1_IP_NAME1_MASK                    0xffffffff
#define AVR32_USBA_IPNAME1_IP_NAME1_OFFSET                           0
#define AVR32_USBA_IPNAME1_IP_NAME1_SIZE                            32
#define AVR32_USBA_IPNAME2                                  0x000000f4
#define AVR32_USBA_IPNAME2_IP_NAME2                                  0
#define AVR32_USBA_IPNAME2_IP_NAME2_MASK                    0xffffffff
#define AVR32_USBA_IPNAME2_IP_NAME2_OFFSET                           0
#define AVR32_USBA_IPNAME2_IP_NAME2_SIZE                            32
#define AVR32_USBA_IPPADDRSIZE                              0x000000ec
#define AVR32_USBA_IPPADDRSIZE_IP_PADDRSIZE                          0
#define AVR32_USBA_IPPADDRSIZE_IP_PADDRSIZE_MASK            0xffffffff
#define AVR32_USBA_IPPADDRSIZE_IP_PADDRSIZE_OFFSET                   0
#define AVR32_USBA_IPPADDRSIZE_IP_PADDRSIZE_SIZE                    32
#define AVR32_USBA_IPVERSION                                0x000000fc
#define AVR32_USBA_IPVERSION_METAL_FIX_NUM                          16
#define AVR32_USBA_IPVERSION_METAL_FIX_NUM_MASK             0x00070000
#define AVR32_USBA_IPVERSION_METAL_FIX_NUM_OFFSET                   16
#define AVR32_USBA_IPVERSION_METAL_FIX_NUM_SIZE                      3
#define AVR32_USBA_IPVERSION_VERSION_NUM                             0
#define AVR32_USBA_IPVERSION_VERSION_NUM_MASK               0x0000ffff
#define AVR32_USBA_IPVERSION_VERSION_NUM_OFFSET                      0
#define AVR32_USBA_IPVERSION_VERSION_NUM_SIZE                       16
#define AVR32_USBA_IP_NAME1                                          0
#define AVR32_USBA_IP_NAME1_MASK                            0xffffffff
#define AVR32_USBA_IP_NAME1_OFFSET                                   0
#define AVR32_USBA_IP_NAME1_SIZE                                    32
#define AVR32_USBA_IP_NAME2                                          0
#define AVR32_USBA_IP_NAME2_MASK                            0xffffffff
#define AVR32_USBA_IP_NAME2_OFFSET                                   0
#define AVR32_USBA_IP_NAME2_SIZE                                    32
#define AVR32_USBA_IP_PADDRSIZE                                      0
#define AVR32_USBA_IP_PADDRSIZE_MASK                        0xffffffff
#define AVR32_USBA_IP_PADDRSIZE_OFFSET                               0
#define AVR32_USBA_IP_PADDRSIZE_SIZE                                32
#define AVR32_USBA_ISO                                      0x00000001
#define AVR32_USBA_ISO_EPT_1                                        17
#define AVR32_USBA_ISO_EPT_1_MASK                           0x00020000
#define AVR32_USBA_ISO_EPT_1_OFFSET                                 17
#define AVR32_USBA_ISO_EPT_1_SIZE                                    1
#define AVR32_USBA_ISO_EPT_2                                        18
#define AVR32_USBA_ISO_EPT_2_MASK                           0x00040000
#define AVR32_USBA_ISO_EPT_2_OFFSET                                 18
#define AVR32_USBA_ISO_EPT_2_SIZE                                    1
#define AVR32_USBA_ISO_EPT_3                                        19
#define AVR32_USBA_ISO_EPT_3_MASK                           0x00080000
#define AVR32_USBA_ISO_EPT_3_OFFSET                                 19
#define AVR32_USBA_ISO_EPT_3_SIZE                                    1
#define AVR32_USBA_ISO_EPT_4                                        20
#define AVR32_USBA_ISO_EPT_4_MASK                           0x00100000
#define AVR32_USBA_ISO_EPT_4_OFFSET                                 20
#define AVR32_USBA_ISO_EPT_4_SIZE                                    1
#define AVR32_USBA_ISO_EPT_5                                        21
#define AVR32_USBA_ISO_EPT_5_MASK                           0x00200000
#define AVR32_USBA_ISO_EPT_5_OFFSET                                 21
#define AVR32_USBA_ISO_EPT_5_SIZE                                    1
#define AVR32_USBA_ISO_EPT_6                                        22
#define AVR32_USBA_ISO_EPT_6_MASK                           0x00400000
#define AVR32_USBA_ISO_EPT_6_OFFSET                                 22
#define AVR32_USBA_ISO_EPT_6_SIZE                                    1
#define AVR32_USBA_ISO_EPT_7                                        23
#define AVR32_USBA_ISO_EPT_7_MASK                           0x00800000
#define AVR32_USBA_ISO_EPT_7_OFFSET                                 23
#define AVR32_USBA_ISO_EPT_7_SIZE                                    1
#define AVR32_USBA_KILL_BANK                                         9
#define AVR32_USBA_KILL_BANK_MASK                           0x00000200
#define AVR32_USBA_KILL_BANK_OFFSET                                  9
#define AVR32_USBA_KILL_BANK_SIZE                                    1
#define AVR32_USBA_LDNXT_DSC                                         1
#define AVR32_USBA_LDNXT_DSC_MASK                           0x00000002
#define AVR32_USBA_LDNXT_DSC_OFFSET                                  1
#define AVR32_USBA_LDNXT_DSC_SIZE                                    1
#define AVR32_USBA_MDATA_RX                                          7
#define AVR32_USBA_MDATA_RX_MASK                            0x00000080
#define AVR32_USBA_MDATA_RX_OFFSET                                   7
#define AVR32_USBA_MDATA_RX_SIZE                                     1
#define AVR32_USBA_METAL_FIX_NUM                                    16
#define AVR32_USBA_METAL_FIX_NUM_MASK                       0x00070000
#define AVR32_USBA_METAL_FIX_NUM_OFFSET                             16
#define AVR32_USBA_METAL_FIX_NUM_SIZE                                3
#define AVR32_USBA_MICRO_FRAME_NUM                                   0
#define AVR32_USBA_MICRO_FRAME_NUM_MASK                     0x00000007
#define AVR32_USBA_MICRO_FRAME_NUM_OFFSET                            0
#define AVR32_USBA_MICRO_FRAME_NUM_SIZE                              3
#define AVR32_USBA_MICRO_SOF                                         2
#define AVR32_USBA_MICRO_SOF_MASK                           0x00000004
#define AVR32_USBA_MICRO_SOF_OFFSET                                  2
#define AVR32_USBA_MICRO_SOF_SIZE                                    1
#define AVR32_USBA_NAK_IN                                           14
#define AVR32_USBA_NAK_IN_MASK                              0x00004000
#define AVR32_USBA_NAK_IN_OFFSET                                    14
#define AVR32_USBA_NAK_IN_SIZE                                       1
#define AVR32_USBA_NAK_OUT                                          15
#define AVR32_USBA_NAK_OUT_MASK                             0x00008000
#define AVR32_USBA_NAK_OUT_OFFSET                                   15
#define AVR32_USBA_NAK_OUT_SIZE                                      1
#define AVR32_USBA_NB_TRANS                                          8
#define AVR32_USBA_NB_TRANS_MASK                            0x00000300
#define AVR32_USBA_NB_TRANS_OFFSET                                   8
#define AVR32_USBA_NB_TRANS_SIZE                                     2
#define AVR32_USBA_NORMAL                                   0x00000000
#define AVR32_USBA_NXT_DSC_ADD                                       0
#define AVR32_USBA_NXT_DSC_ADD_MASK                         0xffffffff
#define AVR32_USBA_NXT_DSC_ADD_OFFSET                                0
#define AVR32_USBA_NXT_DSC_ADD_SIZE                                 32
#define AVR32_USBA_NYET_DIS                                          4
#define AVR32_USBA_NYET_DIS_MASK                            0x00000010
#define AVR32_USBA_NYET_DIS_OFFSET                                   4
#define AVR32_USBA_NYET_DIS_SIZE                                     1
#define AVR32_USBA_ONE                                      0x00000001
#define AVR32_USBA_OPMODE2                                           5
#define AVR32_USBA_OPMODE2_MASK                             0x00000020
#define AVR32_USBA_OPMODE2_OFFSET                                    5
#define AVR32_USBA_OPMODE2_SIZE                                      1
#define AVR32_USBA_REWAKEUP                                         10
#define AVR32_USBA_REWAKEUP_MASK                            0x00000400
#define AVR32_USBA_REWAKEUP_OFFSET                                  10
#define AVR32_USBA_REWAKEUP_SIZE                                     1
#define AVR32_USBA_RST_EPT_0                                         0
#define AVR32_USBA_RST_EPT_0_MASK                           0x00000001
#define AVR32_USBA_RST_EPT_0_OFFSET                                  0
#define AVR32_USBA_RST_EPT_0_SIZE                                    1
#define AVR32_USBA_RST_EPT_1                                         1
#define AVR32_USBA_RST_EPT_1_MASK                           0x00000002
#define AVR32_USBA_RST_EPT_1_OFFSET                                  1
#define AVR32_USBA_RST_EPT_1_SIZE                                    1
#define AVR32_USBA_RST_EPT_2                                         2
#define AVR32_USBA_RST_EPT_2_MASK                           0x00000004
#define AVR32_USBA_RST_EPT_2_OFFSET                                  2
#define AVR32_USBA_RST_EPT_2_SIZE                                    1
#define AVR32_USBA_RST_EPT_3                                         3
#define AVR32_USBA_RST_EPT_3_MASK                           0x00000008
#define AVR32_USBA_RST_EPT_3_OFFSET                                  3
#define AVR32_USBA_RST_EPT_3_SIZE                                    1
#define AVR32_USBA_RST_EPT_4                                         4
#define AVR32_USBA_RST_EPT_4_MASK                           0x00000010
#define AVR32_USBA_RST_EPT_4_OFFSET                                  4
#define AVR32_USBA_RST_EPT_4_SIZE                                    1
#define AVR32_USBA_RST_EPT_5                                         5
#define AVR32_USBA_RST_EPT_5_MASK                           0x00000020
#define AVR32_USBA_RST_EPT_5_OFFSET                                  5
#define AVR32_USBA_RST_EPT_5_SIZE                                    1
#define AVR32_USBA_RST_EPT_6                                         6
#define AVR32_USBA_RST_EPT_6_MASK                           0x00000040
#define AVR32_USBA_RST_EPT_6_OFFSET                                  6
#define AVR32_USBA_RST_EPT_6_SIZE                                    1
#define AVR32_USBA_RST_EPT_7                                         7
#define AVR32_USBA_RST_EPT_7_MASK                           0x00000080
#define AVR32_USBA_RST_EPT_7_OFFSET                                  7
#define AVR32_USBA_RST_EPT_7_SIZE                                    1
#define AVR32_USBA_RX_BK_RDY                                         9
#define AVR32_USBA_RX_BK_RDY_MASK                           0x00000200
#define AVR32_USBA_RX_BK_RDY_OFFSET                                  9
#define AVR32_USBA_RX_BK_RDY_SIZE                                    1
#define AVR32_USBA_RX_SETUP                                         12
#define AVR32_USBA_RX_SETUP_MASK                            0x00001000
#define AVR32_USBA_RX_SETUP_OFFSET                                  12
#define AVR32_USBA_RX_SETUP_SIZE                                     1
#define AVR32_USBA_SHRT_PCKT                                        31
#define AVR32_USBA_SHRT_PCKT_MASK                           0x80000000
#define AVR32_USBA_SHRT_PCKT_OFFSET                                 31
#define AVR32_USBA_SHRT_PCKT_SIZE                                    1
#define AVR32_USBA_SOFCNTMAX                                         0
#define AVR32_USBA_SOFCNTMAX_MASK                           0x0000007f
#define AVR32_USBA_SOFCNTMAX_OFFSET                                  0
#define AVR32_USBA_SOFCNTMAX_SIZE                                    7
#define AVR32_USBA_SOFCTLOAD                                         7
#define AVR32_USBA_SOFCTLOAD_MASK                           0x00000080
#define AVR32_USBA_SOFCTLOAD_OFFSET                                  7
#define AVR32_USBA_SOFCTLOAD_SIZE                                    1
#define AVR32_USBA_SPEED                                             0
#define AVR32_USBA_SPEED_CFG                                         0
#define AVR32_USBA_SPEED_CFG_FORCE_FULL                     0x00000003
#define AVR32_USBA_SPEED_CFG_FORCE_HIGH                     0x00000002
#define AVR32_USBA_SPEED_CFG_MASK                           0x00000003
#define AVR32_USBA_SPEED_CFG_NORMAL                         0x00000000
#define AVR32_USBA_SPEED_CFG_OFFSET                                  0
#define AVR32_USBA_SPEED_CFG_SIZE                                    2
#define AVR32_USBA_SPEED_MASK                               0x00000001
#define AVR32_USBA_SPEED_OFFSET                                      0
#define AVR32_USBA_SPEED_SIZE                                        1
#define AVR32_USBA_STALL_SNT                                        13
#define AVR32_USBA_STALL_SNT_MASK                           0x00002000
#define AVR32_USBA_STALL_SNT_OFFSET                                 13
#define AVR32_USBA_STALL_SNT_SIZE                                    1
#define AVR32_USBA_SZ_1024                                  0x00000007
#define AVR32_USBA_SZ_128                                   0x00000004
#define AVR32_USBA_SZ_16                                    0x00000001
#define AVR32_USBA_SZ_256                                   0x00000005
#define AVR32_USBA_SZ_32                                    0x00000002
#define AVR32_USBA_SZ_512                                   0x00000006
#define AVR32_USBA_SZ_64                                    0x00000003
#define AVR32_USBA_SZ_8                                     0x00000000
#define AVR32_USBA_TOGGLESQ                                          6
#define AVR32_USBA_TOGGLESQ_MASK                            0x00000040
#define AVR32_USBA_TOGGLESQ_OFFSET                                   6
#define AVR32_USBA_TOGGLESQ_SIZE                                     1
#define AVR32_USBA_TOGGLESQ_STA                                      6
#define AVR32_USBA_TOGGLESQ_STA_MASK                        0x000000c0
#define AVR32_USBA_TOGGLESQ_STA_OFFSET                               6
#define AVR32_USBA_TOGGLESQ_STA_SIZE                                 2
#define AVR32_USBA_TRIPLE                                   0x00000003
#define AVR32_USBA_TST                                      0x000000e0
#define AVR32_USBA_TSTCNTA                                  0x000000d4
#define AVR32_USBA_TSTCNTA_CNTALOAD                                 15
#define AVR32_USBA_TSTCNTA_CNTALOAD_MASK                    0x00008000
#define AVR32_USBA_TSTCNTA_CNTALOAD_OFFSET                          15
#define AVR32_USBA_TSTCNTA_CNTALOAD_SIZE                             1
#define AVR32_USBA_TSTCNTA_CNTAMAX                                   0
#define AVR32_USBA_TSTCNTA_CNTAMAX_MASK                     0x00003fff
#define AVR32_USBA_TSTCNTA_CNTAMAX_OFFSET                            0
#define AVR32_USBA_TSTCNTA_CNTAMAX_SIZE                             14
#define AVR32_USBA_TSTCNTB                                  0x000000d8
#define AVR32_USBA_TSTCNTB_CNTBLOAD                                  7
#define AVR32_USBA_TSTCNTB_CNTBLOAD_MASK                    0x00000080
#define AVR32_USBA_TSTCNTB_CNTBLOAD_OFFSET                           7
#define AVR32_USBA_TSTCNTB_CNTBLOAD_SIZE                             1
#define AVR32_USBA_TSTCNTB_CNTBMAX                                   0
#define AVR32_USBA_TSTCNTB_CNTBMAX_MASK                     0x0000003f
#define AVR32_USBA_TSTCNTB_CNTBMAX_OFFSET                            0
#define AVR32_USBA_TSTCNTB_CNTBMAX_SIZE                              6
#define AVR32_USBA_TSTMODE                                           0
#define AVR32_USBA_TSTMODEREG                               0x000000dc
#define AVR32_USBA_TSTMODEREG_TSTMODE                                0
#define AVR32_USBA_TSTMODEREG_TSTMODE_MASK                  0x0000003f
#define AVR32_USBA_TSTMODEREG_TSTMODE_OFFSET                         0
#define AVR32_USBA_TSTMODEREG_TSTMODE_SIZE                           6
#define AVR32_USBA_TSTMODE_MASK                             0x0000003f
#define AVR32_USBA_TSTMODE_OFFSET                                    0
#define AVR32_USBA_TSTMODE_SIZE                                      6
#define AVR32_USBA_TSTSOFCNT                                0x000000d0
#define AVR32_USBA_TSTSOFCNT_SOFCNTMAX                               0
#define AVR32_USBA_TSTSOFCNT_SOFCNTMAX_MASK                 0x0000007f
#define AVR32_USBA_TSTSOFCNT_SOFCNTMAX_OFFSET                        0
#define AVR32_USBA_TSTSOFCNT_SOFCNTMAX_SIZE                          7
#define AVR32_USBA_TSTSOFCNT_SOFCTLOAD                               7
#define AVR32_USBA_TSTSOFCNT_SOFCTLOAD_MASK                 0x00000080
#define AVR32_USBA_TSTSOFCNT_SOFCTLOAD_OFFSET                        7
#define AVR32_USBA_TSTSOFCNT_SOFCTLOAD_SIZE                          1
#define AVR32_USBA_TST_J                                             2
#define AVR32_USBA_TST_J_MASK                               0x00000004
#define AVR32_USBA_TST_J_OFFSET                                      2
#define AVR32_USBA_TST_J_SIZE                                        1
#define AVR32_USBA_TST_K                                             3
#define AVR32_USBA_TST_K_MASK                               0x00000008
#define AVR32_USBA_TST_K_OFFSET                                      3
#define AVR32_USBA_TST_K_SIZE                                        1
#define AVR32_USBA_TST_OPMODE2                                       5
#define AVR32_USBA_TST_OPMODE2_MASK                         0x00000020
#define AVR32_USBA_TST_OPMODE2_OFFSET                                5
#define AVR32_USBA_TST_OPMODE2_SIZE                                  1
#define AVR32_USBA_TST_PKT                                           4
#define AVR32_USBA_TST_PKT_MASK                             0x00000010
#define AVR32_USBA_TST_PKT_OFFSET                                    4
#define AVR32_USBA_TST_PKT_SIZE                                      1
#define AVR32_USBA_TST_SPEED_CFG                                     0
#define AVR32_USBA_TST_SPEED_CFG_FORCE_FULL                 0x00000003
#define AVR32_USBA_TST_SPEED_CFG_FORCE_HIGH                 0x00000002
#define AVR32_USBA_TST_SPEED_CFG_MASK                       0x00000003
#define AVR32_USBA_TST_SPEED_CFG_NORMAL                     0x00000000
#define AVR32_USBA_TST_SPEED_CFG_OFFSET                              0
#define AVR32_USBA_TST_SPEED_CFG_SIZE                                2
#define AVR32_USBA_TST_TST_J                                         2
#define AVR32_USBA_TST_TST_J_MASK                           0x00000004
#define AVR32_USBA_TST_TST_J_OFFSET                                  2
#define AVR32_USBA_TST_TST_J_SIZE                                    1
#define AVR32_USBA_TST_TST_K                                         3
#define AVR32_USBA_TST_TST_K_MASK                           0x00000008
#define AVR32_USBA_TST_TST_K_OFFSET                                  3
#define AVR32_USBA_TST_TST_K_SIZE                                    1
#define AVR32_USBA_TST_TST_PKT                                       4
#define AVR32_USBA_TST_TST_PKT_MASK                         0x00000010
#define AVR32_USBA_TST_TST_PKT_OFFSET                                4
#define AVR32_USBA_TST_TST_PKT_SIZE                                  1
#define AVR32_USBA_TX_COMPLT                                        10
#define AVR32_USBA_TX_COMPLT_MASK                           0x00000400
#define AVR32_USBA_TX_COMPLT_OFFSET                                 10
#define AVR32_USBA_TX_COMPLT_SIZE                                    1
#define AVR32_USBA_TX_PK_RDY                                        11
#define AVR32_USBA_TX_PK_RDY_MASK                           0x00000800
#define AVR32_USBA_TX_PK_RDY_OFFSET                                 11
#define AVR32_USBA_TX_PK_RDY_SIZE                                    1
#define AVR32_USBA_UPSTR_RES                                         7
#define AVR32_USBA_UPSTR_RES_MASK                           0x00000080
#define AVR32_USBA_UPSTR_RES_OFFSET                                  7
#define AVR32_USBA_UPSTR_RES_SIZE                                    1
#define AVR32_USBA_VERSION_NUM                                       0
#define AVR32_USBA_VERSION_NUM_MASK                         0x0000ffff
#define AVR32_USBA_VERSION_NUM_OFFSET                                0
#define AVR32_USBA_VERSION_NUM_SIZE                                 16
#define AVR32_USBA_WAKE_UP                                           5
#define AVR32_USBA_WAKE_UP_MASK                             0x00000020
#define AVR32_USBA_WAKE_UP_OFFSET                                    5
#define AVR32_USBA_WAKE_UP_SIZE                                      1
#define AVR32_USBA_ZERO                                     0x00000000




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_usba_ctrl_t {
    unsigned int                 :21;
    unsigned int rewakeup        : 1;
    unsigned int detach          : 1;
    unsigned int en_usba         : 1;
    unsigned int faddr_en        : 1;
    unsigned int dev_addr        : 7;
} avr32_usba_ctrl_t;



typedef struct avr32_usba_fnum_t {
    unsigned int fnum_err        : 1;
    unsigned int                 :17;
    unsigned int frame_number    :11;
    unsigned int micro_frame_num : 3;
} avr32_usba_fnum_t;



typedef struct avr32_usba_ien_t {
    unsigned int                 : 1;
    unsigned int dma_int_6       : 1;
    unsigned int dma_int_5       : 1;
    unsigned int dma_int_4       : 1;
    unsigned int dma_int_3       : 1;
    unsigned int dma_int_2       : 1;
    unsigned int dma_int_1       : 1;
    unsigned int                 : 9;
    unsigned int ept_int_7       : 1;
    unsigned int ept_int_6       : 1;
    unsigned int ept_int_5       : 1;
    unsigned int ept_int_4       : 1;
    unsigned int ept_int_3       : 1;
    unsigned int ept_int_2       : 1;
    unsigned int ept_int_1       : 1;
    unsigned int ept_int_0       : 1;
    unsigned int upstr_res       : 1;
    unsigned int endofrsm        : 1;
    unsigned int wake_up         : 1;
    unsigned int endreset        : 1;
    unsigned int int_sof         : 1;
    unsigned int micro_sof       : 1;
    unsigned int det_suspd       : 1;
    unsigned int                 : 1;
} avr32_usba_ien_t;



typedef struct avr32_usba_intsta_t {
    unsigned int                 : 1;
    unsigned int dma_int_6       : 1;
    unsigned int dma_int_5       : 1;
    unsigned int dma_int_4       : 1;
    unsigned int dma_int_3       : 1;
    unsigned int dma_int_2       : 1;
    unsigned int dma_int_1       : 1;
    unsigned int                 : 9;
    unsigned int ept_int_7       : 1;
    unsigned int ept_int_6       : 1;
    unsigned int ept_int_5       : 1;
    unsigned int ept_int_4       : 1;
    unsigned int ept_int_3       : 1;
    unsigned int ept_int_2       : 1;
    unsigned int ept_int_1       : 1;
    unsigned int ept_int_0       : 1;
    unsigned int upstr_res       : 1;
    unsigned int endofrsm        : 1;
    unsigned int wake_up         : 1;
    unsigned int endreset        : 1;
    unsigned int int_sof         : 1;
    unsigned int micro_sof       : 1;
    unsigned int det_suspd       : 1;
    unsigned int speed           : 1;
} avr32_usba_intsta_t;



typedef struct avr32_usba_clrint_t {
    unsigned int                 :24;
    unsigned int upstr_res       : 1;
    unsigned int endofrsm        : 1;
    unsigned int wake_up         : 1;
    unsigned int endreset        : 1;
    unsigned int int_sof         : 1;
    unsigned int micro_sof       : 1;
    unsigned int det_suspd       : 1;
    unsigned int                 : 1;
} avr32_usba_clrint_t;



typedef struct avr32_usba_eptrst_t {
    unsigned int                 :24;
    unsigned int rst_ept_7       : 1;
    unsigned int rst_ept_6       : 1;
    unsigned int rst_ept_5       : 1;
    unsigned int rst_ept_4       : 1;
    unsigned int rst_ept_3       : 1;
    unsigned int rst_ept_2       : 1;
    unsigned int rst_ept_1       : 1;
    unsigned int rst_ept_0       : 1;
} avr32_usba_eptrst_t;



typedef struct avr32_usba_tstsofcnt_t {
    unsigned int                 :24;
    unsigned int sofctload       : 1;
    unsigned int sofcntmax       : 7;
} avr32_usba_tstsofcnt_t;



typedef struct avr32_usba_tstcnta_t {
    unsigned int                 :16;
    unsigned int cntaload        : 1;
    unsigned int                 : 1;
    unsigned int cntamax         :14;
} avr32_usba_tstcnta_t;



typedef struct avr32_usba_tstcntb_t {
    unsigned int                 :24;
    unsigned int cntbload        : 1;
    unsigned int                 : 1;
    unsigned int cntbmax         : 6;
} avr32_usba_tstcntb_t;



typedef struct avr32_usba_tstmodereg_t {
    unsigned int                 :26;
    unsigned int tstmode         : 6;
} avr32_usba_tstmodereg_t;



typedef struct avr32_usba_tst_t {
    unsigned int                 :26;
    unsigned int opmode2         : 1;
    unsigned int tst_pkt         : 1;
    unsigned int tst_k           : 1;
    unsigned int tst_j           : 1;
    unsigned int speed_cfg       : 2;
} avr32_usba_tst_t;



typedef struct avr32_usba_ipfeatures_t {
    unsigned int                 : 8;
    unsigned int iso_ept_7       : 1;
    unsigned int iso_ept_6       : 1;
    unsigned int iso_ept_5       : 1;
    unsigned int iso_ept_4       : 1;
    unsigned int iso_ept_3       : 1;
    unsigned int iso_ept_2       : 1;
    unsigned int iso_ept_1       : 1;
    unsigned int datab16_8       : 1;
    unsigned int bw_dpram        : 1;
    unsigned int fifo_max_size   : 3;
    unsigned int dma_fifo_word_depth : 4;
    unsigned int dma_b_siz       : 1;
    unsigned int dma_channel_nbr : 3;
    unsigned int ept_nbr_max     : 4;
} avr32_usba_ipfeatures_t;



typedef struct avr32_usba_ipversion_t {
    unsigned int                 :13;
    unsigned int metal_fix_num   : 3;
    unsigned int version_num     :16;
} avr32_usba_ipversion_t;



typedef struct avr32_usba_eptcfg_t {
    unsigned int ept_mapd        : 1;
    unsigned int                 :21;
    unsigned int nb_trans        : 2;
    unsigned int bk_number       : 2;
    unsigned int ept_type        : 2;
    unsigned int ept_dir         : 1;
    unsigned int ept_size        : 3;
} avr32_usba_eptcfg_t;



typedef union avr32_usba_eptctlenb_t {
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int tx_pk_rdy       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_enabl       : 1;
  } default_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_nbtra       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_enabl       : 1;
  } isochronous_in_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_criso       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_enabl       : 1;
  } isochronous_out_mode;
} avr32_usba_eptctlenb_t;



typedef union avr32_usba_eptctldis_t {
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int tx_pk_rdy       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_disabl      : 1;
  } default_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_nbtra       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_disabl      : 1;
  } isochronous_in_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_criso       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_disabl      : 1;
  } isochronous_out_mode;
} avr32_usba_eptctldis_t;



typedef union avr32_usba_eptctl_t {
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int tx_pk_rdy       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_enabl       : 1;
  } default_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_nbtra       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_enabl       : 1;
  } isochronous_in_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int                 :12;
    unsigned int busy_bank       : 1;
    unsigned int                 : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_criso       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int mdata_rx        : 1;
    unsigned int datax_rx        : 1;
    unsigned int                 : 1;
    unsigned int nyet_dis        : 1;
    unsigned int intdis_dma      : 1;
    unsigned int                 : 1;
    unsigned int auto_valid      : 1;
    unsigned int ept_enabl       : 1;
  } isochronous_out_mode;
} avr32_usba_eptctl_t;



typedef struct avr32_usba_eptsetsta_t {
    unsigned int                 :20;
    unsigned int tx_pk_rdy       : 1;
    unsigned int                 : 1;
    unsigned int kill_bank       : 1;
    unsigned int                 : 3;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
} avr32_usba_eptsetsta_t;



typedef union avr32_usba_eptclrsta_t {
  struct {
    unsigned int                 :16;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int                 : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int                 : 2;
    unsigned int togglesq        : 1;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } default_mode;
  struct {
    unsigned int                 :16;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_nbtra       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int                 : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int                 : 2;
    unsigned int togglesq        : 1;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } isochronous_mode;
} avr32_usba_eptclrsta_t;



typedef union avr32_usba_eptsta_t {
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int byte_count      :11;
    unsigned int busy_bank_sta   : 2;
    unsigned int control_dir     : 2;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int tx_pk_rdy       : 1;
    unsigned int tx_complt       : 1;
    unsigned int kill_bank       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int togglesq_sta    : 2;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } control_in_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int byte_count      :11;
    unsigned int busy_bank_sta   : 2;
    unsigned int control_dir     : 2;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int tx_pk_rdy       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int togglesq_sta    : 2;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } control_out_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int byte_count      :11;
    unsigned int busy_bank_sta   : 2;
    unsigned int current_bank    : 2;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int tx_pk_rdy       : 1;
    unsigned int tx_complt       : 1;
    unsigned int kill_bank       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int togglesq_sta    : 2;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } default_in_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int byte_count      :11;
    unsigned int busy_bank_sta   : 2;
    unsigned int current_bank    : 2;
    unsigned int nak_out         : 1;
    unsigned int nak_in          : 1;
    unsigned int stall_snt       : 1;
    unsigned int rx_setup        : 1;
    unsigned int tx_pk_rdy       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int togglesq_sta    : 2;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } default_out_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int byte_count      :11;
    unsigned int busy_bank_sta   : 2;
    unsigned int current_bank    : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_nbtra       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int kill_bank       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int togglesq_sta    : 2;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } isochronous_in_mode;
  struct {
    unsigned int shrt_pckt       : 1;
    unsigned int byte_count      :11;
    unsigned int busy_bank_sta   : 2;
    unsigned int current_bank    : 2;
    unsigned int nak_out         : 1;
    unsigned int err_flush       : 1;
    unsigned int err_criso       : 1;
    unsigned int err_fl_iso      : 1;
    unsigned int err_trans       : 1;
    unsigned int tx_complt       : 1;
    unsigned int rx_bk_rdy       : 1;
    unsigned int err_ovflw       : 1;
    unsigned int togglesq_sta    : 2;
    unsigned int frcestall       : 1;
    unsigned int                 : 5;
  } isochronous_out_mode;
} avr32_usba_eptsta_t;



typedef struct avr32_usba_dmacontrol_t {
    unsigned int buff_length     :16;
    unsigned int                 : 8;
    unsigned int burst_lck       : 1;
    unsigned int desc_ld_it      : 1;
    unsigned int end_buffit      : 1;
    unsigned int end_tr_it       : 1;
    unsigned int end_b_en        : 1;
    unsigned int end_tr_en       : 1;
    unsigned int ldnxt_dsc       : 1;
    unsigned int chann_enb       : 1;
} avr32_usba_dmacontrol_t;



typedef struct avr32_usba_dmastatus_t {
    unsigned int buff_count      :16;
    unsigned int                 : 9;
    unsigned int desc_ldst       : 1;
    unsigned int end_bf_st       : 1;
    unsigned int end_tr_st       : 1;
    unsigned int                 : 2;
    unsigned int chann_act       : 1;
    unsigned int chann_enb       : 1;
} avr32_usba_dmastatus_t;


typedef struct avr32_usba_dma_t {
          unsigned long                  dmanxtdsc ;//0x0000
          unsigned long                  dmaaddress;//0x0004
  union {
          unsigned long                  dmacontrol;//0x0008
          avr32_usba_dmacontrol_t        DMACONTROL;
  };
  union {
          unsigned long                  dmastatus ;//0x000c
          avr32_usba_dmastatus_t         DMASTATUS ;
  };
} avr32_usba_dma_t;

typedef struct avr32_usba_endpoint_t {
  union {
          unsigned long                  eptcfg    ;//0x0000
          avr32_usba_eptcfg_t            EPTCFG    ;
  };
  union {
          unsigned long                  eptctlenb ;//0x0004
          avr32_usba_eptctlenb_t         EPTCTLENB ;
  };
  union {
          unsigned long                  eptctldis ;//0x0008
          avr32_usba_eptctldis_t         EPTCTLDIS ;
  };
  union {
    const unsigned long                  eptctl    ;//0x000c
    const avr32_usba_eptctl_t            EPTCTL    ;
  };
          unsigned int                   :32       ;//0x0010
  union {
          unsigned long                  eptsetsta ;//0x0014
          avr32_usba_eptsetsta_t         EPTSETSTA ;
  };
  union {
          unsigned long                  eptclrsta ;//0x0018
          avr32_usba_eptclrsta_t         EPTCLRSTA ;
  };
  union {
    const unsigned long                  eptsta    ;//0x001c
    const avr32_usba_eptsta_t            EPTSTA    ;
  };
} avr32_usba_endpoint_t;


typedef struct avr32_usba_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_usba_ctrl_t              CTRL      ;
  };
  union {
    const unsigned long                  fnum      ;//0x0004
    const avr32_usba_fnum_t              FNUM      ;
  };
          unsigned int                   :32       ;//0x0008
          unsigned int                   :32       ;//0x000c
  union {
          unsigned long                  ien       ;//0x0010
          avr32_usba_ien_t               IEN       ;
  };
  union {
    const unsigned long                  intsta    ;//0x0014
    const avr32_usba_intsta_t            INTSTA    ;
  };
  union {
          unsigned long                  clrint    ;//0x0018
          avr32_usba_clrint_t            CLRINT    ;
  };
  union {
          unsigned long                  eptrst    ;//0x001c
          avr32_usba_eptrst_t            EPTRST    ;
  };
          unsigned int                   :32       ;//0x0020
          unsigned int                   :32       ;//0x0024
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
  union {
          unsigned long                  tstsofcnt ;//0x00d0
          avr32_usba_tstsofcnt_t         TSTSOFCNT ;
  };
  union {
          unsigned long                  tstcnta   ;//0x00d4
          avr32_usba_tstcnta_t           TSTCNTA   ;
  };
  union {
          unsigned long                  tstcntb   ;//0x00d8
          avr32_usba_tstcntb_t           TSTCNTB   ;
  };
  union {
          unsigned long                  tstmodereg;//0x00dc
          avr32_usba_tstmodereg_t        TSTMODEREG;
  };
  union {
          unsigned long                  tst       ;//0x00e0
          avr32_usba_tst_t               TST       ;
  };
          unsigned int                   :32       ;//0x00e4
          unsigned int                   :32       ;//0x00e8
    const unsigned long                  ippaddrsize;//0x00ec
    const unsigned long                  ipname1   ;//0x00f0
    const unsigned long                  ipname2   ;//0x00f4
  union {
    const unsigned long                  ipfeatures;//0x00f8
    const avr32_usba_ipfeatures_t        IPFEATURES;
  };
  union {
    const unsigned long                  ipversion ;//0x00fc
    const avr32_usba_ipversion_t         IPVERSION ;
  };
  avr32_usba_endpoint_t endpoint[16];//0x100
          unsigned int                   :32       ;//0x0300
          unsigned int                   :32       ;//0x0304
          unsigned int                   :32       ;//0x0308
          unsigned int                   :32       ;//0x030c
  avr32_usba_dma_t dma[7];//0x310
} avr32_usba_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_USBA_140_H_INCLUDED*/
#endif


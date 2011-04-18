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
#ifndef AVR32_ACIFA_100_H_INCLUDED
#define AVR32_ACIFA_100_H_INCLUDED

#define AVR32_ACIFA_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ACIFA_<register>
 - Bitfield mask:   AVR32_ACIFA_<register>_<bitfield>
 - Bitfield offset: AVR32_ACIFA_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ACIFA_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ACIFA_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ACIFA_<bitfield>
 - Bitfield offset: AVR32_ACIFA_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ACIFA_<bitfield>_SIZE
 - Bitfield values: AVR32_ACIFA_<bitfield>_<value name>
 - Bitfield values: AVR32_ACIFA_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ACIFA_ACACPDIS                                          3
#define AVR32_ACIFA_ACACPDIS_MASK                            0x00000008
#define AVR32_ACIFA_ACACPDIS_OFFSET                                   3
#define AVR32_ACIFA_ACACPDIS_SIZE                                     1
#define AVR32_ACIFA_ACACPEN_SIZE                                      1
#define AVR32_ACIFA_ACACS                                            16
#define AVR32_ACIFA_ACACS_MASK                               0x00010000
#define AVR32_ACIFA_ACACS_OFFSET                                     16
#define AVR32_ACIFA_ACACS_SIZE                                        1
#define AVR32_ACIFA_ACADIS                                            0
#define AVR32_ACIFA_ACADIS_MASK                              0x00000001
#define AVR32_ACIFA_ACADIS_OFFSET                                     0
#define AVR32_ACIFA_ACADIS_SIZE                                       1
#define AVR32_ACIFA_ACAEN_SIZE                                        1
#define AVR32_ACIFA_ACAINT                                            0
#define AVR32_ACIFA_ACAINT_MASK                              0x00000001
#define AVR32_ACIFA_ACAINT_OFFSET                                     0
#define AVR32_ACIFA_ACAINT_SIZE                                       1
#define AVR32_ACIFA_ACARDY                                           24
#define AVR32_ACIFA_ACARDY_MASK                              0x01000000
#define AVR32_ACIFA_ACARDY_OFFSET                                    24
#define AVR32_ACIFA_ACARDY_SIZE                                       1
#define AVR32_ACIFA_ACBCPDIS                                          4
#define AVR32_ACIFA_ACBCPDIS_MASK                            0x00000010
#define AVR32_ACIFA_ACBCPDIS_OFFSET                                   4
#define AVR32_ACIFA_ACBCPDIS_SIZE                                     1
#define AVR32_ACIFA_ACBCPEN_SIZE                                      1
#define AVR32_ACIFA_ACBCS                                            17
#define AVR32_ACIFA_ACBCS_MASK                               0x00020000
#define AVR32_ACIFA_ACBCS_OFFSET                                     17
#define AVR32_ACIFA_ACBCS_SIZE                                        1
#define AVR32_ACIFA_ACBDIS                                            1
#define AVR32_ACIFA_ACBDIS_MASK                              0x00000002
#define AVR32_ACIFA_ACBDIS_OFFSET                                     1
#define AVR32_ACIFA_ACBDIS_SIZE                                       1
#define AVR32_ACIFA_ACBEN_SIZE                                        1
#define AVR32_ACIFA_ACBINT                                            1
#define AVR32_ACIFA_ACBINT_MASK                              0x00000002
#define AVR32_ACIFA_ACBINT_OFFSET                                     1
#define AVR32_ACIFA_ACBINT_SIZE                                       1
#define AVR32_ACIFA_ACBRDY                                           25
#define AVR32_ACIFA_ACBRDY_MASK                              0x02000000
#define AVR32_ACIFA_ACBRDY_OFFSET                                    25
#define AVR32_ACIFA_ACBRDY_SIZE                                       1
#define AVR32_ACIFA_ACEV0                                             0
#define AVR32_ACIFA_ACEV0_MASK                               0x00000001
#define AVR32_ACIFA_ACEV0_OFFSET                                      0
#define AVR32_ACIFA_ACEV0_SIZE                                        1
#define AVR32_ACIFA_ACEV1                                             1
#define AVR32_ACIFA_ACEV1_MASK                               0x00000002
#define AVR32_ACIFA_ACEV1_OFFSET                                      1
#define AVR32_ACIFA_ACEV1_SIZE                                        1
#define AVR32_ACIFA_CONFA                                    0x00000000
#define AVR32_ACIFA_CONFA_HS                                         24
#define AVR32_ACIFA_CONFA_HS_MASK                            0x03000000
#define AVR32_ACIFA_CONFA_HS_OFFSET                                  24
#define AVR32_ACIFA_CONFA_HS_SIZE                                     2
#define AVR32_ACIFA_CONFA_INSELN                                     16
#define AVR32_ACIFA_CONFA_INSELN_MASK                        0x000f0000
#define AVR32_ACIFA_CONFA_INSELN_OFFSET                              16
#define AVR32_ACIFA_CONFA_INSELN_SIZE                                 4
#define AVR32_ACIFA_CONFA_INSELP                                      8
#define AVR32_ACIFA_CONFA_INSELP_MASK                        0x00000f00
#define AVR32_ACIFA_CONFA_INSELP_OFFSET                               8
#define AVR32_ACIFA_CONFA_INSELP_SIZE                                 4
#define AVR32_ACIFA_CONFA_IS                                          0
#define AVR32_ACIFA_CONFA_IS_MASK                            0x00000003
#define AVR32_ACIFA_CONFA_IS_OFFSET                                   0
#define AVR32_ACIFA_CONFA_IS_SIZE                                     2
#define AVR32_ACIFA_CONFA_MASK                               0x930f0f03
#define AVR32_ACIFA_CONFA_OEN                                        31
#define AVR32_ACIFA_CONFA_OEN_MASK                           0x80000000
#define AVR32_ACIFA_CONFA_OEN_OFFSET                                 31
#define AVR32_ACIFA_CONFA_OEN_SIZE                                    1
#define AVR32_ACIFA_CONFA_RESETVALUE                         0x80000000
#define AVR32_ACIFA_CONFA_SS                                         28
#define AVR32_ACIFA_CONFA_SS_MASK                            0x10000000
#define AVR32_ACIFA_CONFA_SS_OFFSET                                  28
#define AVR32_ACIFA_CONFA_SS_SIZE                                     1
#define AVR32_ACIFA_CONFB                                    0x00000004
#define AVR32_ACIFA_CONFB_HS                                         24
#define AVR32_ACIFA_CONFB_HS_MASK                            0x03000000
#define AVR32_ACIFA_CONFB_HS_OFFSET                                  24
#define AVR32_ACIFA_CONFB_HS_SIZE                                     2
#define AVR32_ACIFA_CONFB_INSELN                                     16
#define AVR32_ACIFA_CONFB_INSELN_MASK                        0x000f0000
#define AVR32_ACIFA_CONFB_INSELN_OFFSET                              16
#define AVR32_ACIFA_CONFB_INSELN_SIZE                                 4
#define AVR32_ACIFA_CONFB_INSELP                                      8
#define AVR32_ACIFA_CONFB_INSELP_MASK                        0x00000f00
#define AVR32_ACIFA_CONFB_INSELP_OFFSET                               8
#define AVR32_ACIFA_CONFB_INSELP_SIZE                                 4
#define AVR32_ACIFA_CONFB_IS                                          0
#define AVR32_ACIFA_CONFB_IS_MASK                            0x00000003
#define AVR32_ACIFA_CONFB_IS_OFFSET                                   0
#define AVR32_ACIFA_CONFB_IS_SIZE                                     2
#define AVR32_ACIFA_CONFB_MASK                               0x930f0f03
#define AVR32_ACIFA_CONFB_OEN                                        31
#define AVR32_ACIFA_CONFB_OEN_MASK                           0x80000000
#define AVR32_ACIFA_CONFB_OEN_OFFSET                                 31
#define AVR32_ACIFA_CONFB_OEN_SIZE                                    1
#define AVR32_ACIFA_CONFB_RESETVALUE                         0x80000000
#define AVR32_ACIFA_CONFB_SS                                         28
#define AVR32_ACIFA_CONFB_SS_MASK                            0x10000000
#define AVR32_ACIFA_CONFB_SS_OFFSET                                  28
#define AVR32_ACIFA_CONFB_SS_SIZE                                     1
#define AVR32_ACIFA_DIS                                      0x00000020
#define AVR32_ACIFA_DIS_ACACPDIS                                      3
#define AVR32_ACIFA_DIS_ACACPDIS_MASK                        0x00000008
#define AVR32_ACIFA_DIS_ACACPDIS_OFFSET                               3
#define AVR32_ACIFA_DIS_ACACPDIS_SIZE                                 1
#define AVR32_ACIFA_DIS_ACADIS                                        0
#define AVR32_ACIFA_DIS_ACADIS_MASK                          0x00000001
#define AVR32_ACIFA_DIS_ACADIS_OFFSET                                 0
#define AVR32_ACIFA_DIS_ACADIS_SIZE                                   1
#define AVR32_ACIFA_DIS_ACBCPDIS                                      4
#define AVR32_ACIFA_DIS_ACBCPDIS_MASK                        0x00000010
#define AVR32_ACIFA_DIS_ACBCPDIS_OFFSET                               4
#define AVR32_ACIFA_DIS_ACBCPDIS_SIZE                                 1
#define AVR32_ACIFA_DIS_ACBDIS                                        1
#define AVR32_ACIFA_DIS_ACBDIS_MASK                          0x00000002
#define AVR32_ACIFA_DIS_ACBDIS_OFFSET                                 1
#define AVR32_ACIFA_DIS_ACBDIS_SIZE                                   1
#define AVR32_ACIFA_DIS_MASK                                 0x0000001f
#define AVR32_ACIFA_DIS_RESETVALUE                           0x00000000
#define AVR32_ACIFA_DIS_WFDIS                                         2
#define AVR32_ACIFA_DIS_WFDIS_MASK                           0x00000004
#define AVR32_ACIFA_DIS_WFDIS_OFFSET                                  2
#define AVR32_ACIFA_DIS_WFDIS_SIZE                                    1
#define AVR32_ACIFA_EN                                       0x0000001c
#define AVR32_ACIFA_EN_ACACPEN                                        3
#define AVR32_ACIFA_EN_ACACPEN_MASK                          0x00000008
#define AVR32_ACIFA_EN_ACACPEN_OFFSET                                 3
#define AVR32_ACIFA_EN_ACACPEN_SIZE                                   1
#define AVR32_ACIFA_EN_ACAEN                                          0
#define AVR32_ACIFA_EN_ACAEN_MASK                            0x00000001
#define AVR32_ACIFA_EN_ACAEN_OFFSET                                   0
#define AVR32_ACIFA_EN_ACAEN_SIZE                                     1
#define AVR32_ACIFA_EN_ACBCPEN                                        4
#define AVR32_ACIFA_EN_ACBCPEN_MASK                          0x00000010
#define AVR32_ACIFA_EN_ACBCPEN_OFFSET                                 4
#define AVR32_ACIFA_EN_ACBCPEN_SIZE                                   1
#define AVR32_ACIFA_EN_ACBEN                                          1
#define AVR32_ACIFA_EN_ACBEN_MASK                            0x00000002
#define AVR32_ACIFA_EN_ACBEN_OFFSET                                   1
#define AVR32_ACIFA_EN_ACBEN_SIZE                                     1
#define AVR32_ACIFA_EN_MASK                                  0x0000001f
#define AVR32_ACIFA_EN_OFFSET                                         6
#define AVR32_ACIFA_EN_RESETVALUE                            0x00000000
#define AVR32_ACIFA_EN_SIZE                                           1
#define AVR32_ACIFA_EN_WFEN                                           2
#define AVR32_ACIFA_EN_WFEN_MASK                             0x00000004
#define AVR32_ACIFA_EN_WFEN_OFFSET                                    2
#define AVR32_ACIFA_EN_WFEN_SIZE                                      1
#define AVR32_ACIFA_EVD                                      0x00000038
#define AVR32_ACIFA_EVD_ACEV0                                         0
#define AVR32_ACIFA_EVD_ACEV0_MASK                           0x00000001
#define AVR32_ACIFA_EVD_ACEV0_OFFSET                                  0
#define AVR32_ACIFA_EVD_ACEV0_SIZE                                    1
#define AVR32_ACIFA_EVD_ACEV1                                         1
#define AVR32_ACIFA_EVD_ACEV1_MASK                           0x00000002
#define AVR32_ACIFA_EVD_ACEV1_OFFSET                                  1
#define AVR32_ACIFA_EVD_ACEV1_SIZE                                    1
#define AVR32_ACIFA_EVD_MASK                                 0x00000003
#define AVR32_ACIFA_EVD_RESETVALUE                           0x00000000
#define AVR32_ACIFA_EVE                                      0x00000034
#define AVR32_ACIFA_EVE_ACEV0                                         0
#define AVR32_ACIFA_EVE_ACEV0_MASK                           0x00000001
#define AVR32_ACIFA_EVE_ACEV0_OFFSET                                  0
#define AVR32_ACIFA_EVE_ACEV0_SIZE                                    1
#define AVR32_ACIFA_EVE_ACEV1                                         1
#define AVR32_ACIFA_EVE_ACEV1_MASK                           0x00000002
#define AVR32_ACIFA_EVE_ACEV1_OFFSET                                  1
#define AVR32_ACIFA_EVE_ACEV1_SIZE                                    1
#define AVR32_ACIFA_EVE_MASK                                 0x00000003
#define AVR32_ACIFA_EVE_RESETVALUE                           0x00000000
#define AVR32_ACIFA_EVM                                      0x0000003c
#define AVR32_ACIFA_EVM_ACEV0                                         0
#define AVR32_ACIFA_EVM_ACEV0_MASK                           0x00000001
#define AVR32_ACIFA_EVM_ACEV0_OFFSET                                  0
#define AVR32_ACIFA_EVM_ACEV0_SIZE                                    1
#define AVR32_ACIFA_EVM_ACEV1                                         1
#define AVR32_ACIFA_EVM_ACEV1_MASK                           0x00000002
#define AVR32_ACIFA_EVM_ACEV1_OFFSET                                  1
#define AVR32_ACIFA_EVM_ACEV1_SIZE                                    1
#define AVR32_ACIFA_EVM_MASK                                 0x00000003
#define AVR32_ACIFA_EVM_RESETVALUE                           0x00000000
#define AVR32_ACIFA_EVSRC                                             0
#define AVR32_ACIFA_EVSRC0                                   0x0000000c
#define AVR32_ACIFA_EVSRC0_EVSRC                                      0
#define AVR32_ACIFA_EVSRC0_EVSRC_MASK                        0x0000000f
#define AVR32_ACIFA_EVSRC0_EVSRC_OFFSET                               0
#define AVR32_ACIFA_EVSRC0_EVSRC_SIZE                                 4
#define AVR32_ACIFA_EVSRC0_MASK                              0x0000000f
#define AVR32_ACIFA_EVSRC0_RESETVALUE                        0x00000000
#define AVR32_ACIFA_EVSRC1                                   0x00000010
#define AVR32_ACIFA_EVSRC1_EVSRC                                      0
#define AVR32_ACIFA_EVSRC1_EVSRC_MASK                        0x0000000f
#define AVR32_ACIFA_EVSRC1_EVSRC_OFFSET                               0
#define AVR32_ACIFA_EVSRC1_EVSRC_SIZE                                 4
#define AVR32_ACIFA_EVSRC1_MASK                              0x0000000f
#define AVR32_ACIFA_EVSRC1_RESETVALUE                        0x00000000
#define AVR32_ACIFA_EVSRC_MASK                               0x0000000f
#define AVR32_ACIFA_EVSRC_OFFSET                                      0
#define AVR32_ACIFA_EVSRC_SIZE                                        4
#define AVR32_ACIFA_HS                                               24
#define AVR32_ACIFA_HS_MASK                                  0x03000000
#define AVR32_ACIFA_HS_OFFSET                                        24
#define AVR32_ACIFA_HS_SIZE                                           2
#define AVR32_ACIFA_IDR                                      0x0000002c
#define AVR32_ACIFA_IDR_ACAINT                                        0
#define AVR32_ACIFA_IDR_ACAINT_MASK                          0x00000001
#define AVR32_ACIFA_IDR_ACAINT_OFFSET                                 0
#define AVR32_ACIFA_IDR_ACAINT_SIZE                                   1
#define AVR32_ACIFA_IDR_ACBINT                                        1
#define AVR32_ACIFA_IDR_ACBINT_MASK                          0x00000002
#define AVR32_ACIFA_IDR_ACBINT_OFFSET                                 1
#define AVR32_ACIFA_IDR_ACBINT_SIZE                                   1
#define AVR32_ACIFA_IDR_MASK                                 0x0000001f
#define AVR32_ACIFA_IDR_RESETVALUE                           0x00000000
#define AVR32_ACIFA_IDR_SUTAINT                                       3
#define AVR32_ACIFA_IDR_SUTAINT_MASK                         0x00000008
#define AVR32_ACIFA_IDR_SUTAINT_OFFSET                                3
#define AVR32_ACIFA_IDR_SUTAINT_SIZE                                  1
#define AVR32_ACIFA_IDR_SUTBINT                                       4
#define AVR32_ACIFA_IDR_SUTBINT_MASK                         0x00000010
#define AVR32_ACIFA_IDR_SUTBINT_OFFSET                                4
#define AVR32_ACIFA_IDR_SUTBINT_SIZE                                  1
#define AVR32_ACIFA_IDR_WFINT                                         2
#define AVR32_ACIFA_IDR_WFINT_MASK                           0x00000004
#define AVR32_ACIFA_IDR_WFINT_OFFSET                                  2
#define AVR32_ACIFA_IDR_WFINT_SIZE                                    1
#define AVR32_ACIFA_IER                                      0x00000028
#define AVR32_ACIFA_IER_ACAINT                                        0
#define AVR32_ACIFA_IER_ACAINT_MASK                          0x00000001
#define AVR32_ACIFA_IER_ACAINT_OFFSET                                 0
#define AVR32_ACIFA_IER_ACAINT_SIZE                                   1
#define AVR32_ACIFA_IER_ACBINT                                        1
#define AVR32_ACIFA_IER_ACBINT_MASK                          0x00000002
#define AVR32_ACIFA_IER_ACBINT_OFFSET                                 1
#define AVR32_ACIFA_IER_ACBINT_SIZE                                   1
#define AVR32_ACIFA_IER_MASK                                 0x0000001f
#define AVR32_ACIFA_IER_RESETVALUE                           0x00000000
#define AVR32_ACIFA_IER_SUTAINT                                       3
#define AVR32_ACIFA_IER_SUTAINT_MASK                         0x00000008
#define AVR32_ACIFA_IER_SUTAINT_OFFSET                                3
#define AVR32_ACIFA_IER_SUTAINT_SIZE                                  1
#define AVR32_ACIFA_IER_SUTBINT                                       4
#define AVR32_ACIFA_IER_SUTBINT_MASK                         0x00000010
#define AVR32_ACIFA_IER_SUTBINT_OFFSET                                4
#define AVR32_ACIFA_IER_SUTBINT_SIZE                                  1
#define AVR32_ACIFA_IER_WFINT                                         2
#define AVR32_ACIFA_IER_WFINT_MASK                           0x00000004
#define AVR32_ACIFA_IER_WFINT_OFFSET                                  2
#define AVR32_ACIFA_IER_WFINT_SIZE                                    1
#define AVR32_ACIFA_IMR                                      0x00000030
#define AVR32_ACIFA_IMR_ACAINT                                        0
#define AVR32_ACIFA_IMR_ACAINT_MASK                          0x00000001
#define AVR32_ACIFA_IMR_ACAINT_OFFSET                                 0
#define AVR32_ACIFA_IMR_ACAINT_SIZE                                   1
#define AVR32_ACIFA_IMR_ACBINT                                        1
#define AVR32_ACIFA_IMR_ACBINT_MASK                          0x00000002
#define AVR32_ACIFA_IMR_ACBINT_OFFSET                                 1
#define AVR32_ACIFA_IMR_ACBINT_SIZE                                   1
#define AVR32_ACIFA_IMR_MASK                                 0x0000001f
#define AVR32_ACIFA_IMR_RESETVALUE                           0x00000000
#define AVR32_ACIFA_IMR_SUTAINT                                       3
#define AVR32_ACIFA_IMR_SUTAINT_MASK                         0x00000008
#define AVR32_ACIFA_IMR_SUTAINT_OFFSET                                3
#define AVR32_ACIFA_IMR_SUTAINT_SIZE                                  1
#define AVR32_ACIFA_IMR_SUTBINT                                       4
#define AVR32_ACIFA_IMR_SUTBINT_MASK                         0x00000010
#define AVR32_ACIFA_IMR_SUTBINT_OFFSET                                4
#define AVR32_ACIFA_IMR_SUTBINT_SIZE                                  1
#define AVR32_ACIFA_IMR_WFINT                                         2
#define AVR32_ACIFA_IMR_WFINT_MASK                           0x00000004
#define AVR32_ACIFA_IMR_WFINT_OFFSET                                  2
#define AVR32_ACIFA_IMR_WFINT_SIZE                                    1
#define AVR32_ACIFA_INSELN                                           16
#define AVR32_ACIFA_INSELN_MASK                              0x000f0000
#define AVR32_ACIFA_INSELN_OFFSET                                    16
#define AVR32_ACIFA_INSELN_SIZE                                       4
#define AVR32_ACIFA_INSELP                                            8
#define AVR32_ACIFA_INSELP_MASK                              0x00000f00
#define AVR32_ACIFA_INSELP_OFFSET                                     8
#define AVR32_ACIFA_INSELP_SIZE                                       4
#define AVR32_ACIFA_IS                                                0
#define AVR32_ACIFA_IS_MASK                                  0x00000003
#define AVR32_ACIFA_IS_OFFSET                                         0
#define AVR32_ACIFA_IS_SIZE                                           2
#define AVR32_ACIFA_MUX1_INPUTS_NB                                    0
#define AVR32_ACIFA_MUX1_INPUTS_NB_MASK                      0x0000000f
#define AVR32_ACIFA_MUX1_INPUTS_NB_OFFSET                             0
#define AVR32_ACIFA_MUX1_INPUTS_NB_SIZE                               4
#define AVR32_ACIFA_MUX2_INPUTS_NB                                    4
#define AVR32_ACIFA_MUX2_INPUTS_NB_MASK                      0x000000f0
#define AVR32_ACIFA_MUX2_INPUTS_NB_OFFSET                             4
#define AVR32_ACIFA_MUX2_INPUTS_NB_SIZE                               4
#define AVR32_ACIFA_MUX3_INPUTS_NB                                    8
#define AVR32_ACIFA_MUX3_INPUTS_NB_MASK                      0x00000f00
#define AVR32_ACIFA_MUX3_INPUTS_NB_OFFSET                             8
#define AVR32_ACIFA_MUX3_INPUTS_NB_SIZE                               4
#define AVR32_ACIFA_MUX4_INPUTS_NB                                   12
#define AVR32_ACIFA_MUX4_INPUTS_NB_MASK                      0x0000f000
#define AVR32_ACIFA_MUX4_INPUTS_NB_OFFSET                            12
#define AVR32_ACIFA_MUX4_INPUTS_NB_SIZE                               4
#define AVR32_ACIFA_OEN                                              31
#define AVR32_ACIFA_OEN_MASK                                 0x80000000
#define AVR32_ACIFA_OEN_OFFSET                                       31
#define AVR32_ACIFA_OEN_SIZE                                          1
#define AVR32_ACIFA_PARAMETER                                0x0000004c
#define AVR32_ACIFA_PARAMETER_MASK                           0x0000ffff
#define AVR32_ACIFA_PARAMETER_MUX1_INPUTS_NB                          0
#define AVR32_ACIFA_PARAMETER_MUX1_INPUTS_NB_MASK            0x0000000f
#define AVR32_ACIFA_PARAMETER_MUX1_INPUTS_NB_OFFSET                   0
#define AVR32_ACIFA_PARAMETER_MUX1_INPUTS_NB_SIZE                     4
#define AVR32_ACIFA_PARAMETER_MUX2_INPUTS_NB                          4
#define AVR32_ACIFA_PARAMETER_MUX2_INPUTS_NB_MASK            0x000000f0
#define AVR32_ACIFA_PARAMETER_MUX2_INPUTS_NB_OFFSET                   4
#define AVR32_ACIFA_PARAMETER_MUX2_INPUTS_NB_SIZE                     4
#define AVR32_ACIFA_PARAMETER_MUX3_INPUTS_NB                          8
#define AVR32_ACIFA_PARAMETER_MUX3_INPUTS_NB_MASK            0x00000f00
#define AVR32_ACIFA_PARAMETER_MUX3_INPUTS_NB_OFFSET                   8
#define AVR32_ACIFA_PARAMETER_MUX3_INPUTS_NB_SIZE                     4
#define AVR32_ACIFA_PARAMETER_MUX4_INPUTS_NB                         12
#define AVR32_ACIFA_PARAMETER_MUX4_INPUTS_NB_MASK            0x0000f000
#define AVR32_ACIFA_PARAMETER_MUX4_INPUTS_NB_OFFSET                  12
#define AVR32_ACIFA_PARAMETER_MUX4_INPUTS_NB_SIZE                     4
#define AVR32_ACIFA_PARAMETER_RESETVALUE                     0x00004664
#define AVR32_ACIFA_SCALEFACTOR                                       0
#define AVR32_ACIFA_SCALEFACTOR_MASK                         0x0000003f
#define AVR32_ACIFA_SCALEFACTOR_OFFSET                                0
#define AVR32_ACIFA_SCALEFACTOR_SIZE                                  6
#define AVR32_ACIFA_SCFA                                     0x00000014
#define AVR32_ACIFA_SCFA_EN                                           6
#define AVR32_ACIFA_SCFA_EN_MASK                             0x00000040
#define AVR32_ACIFA_SCFA_EN_OFFSET                                    6
#define AVR32_ACIFA_SCFA_EN_SIZE                                      1
#define AVR32_ACIFA_SCFA_MASK                                0x0000007f
#define AVR32_ACIFA_SCFA_RESETVALUE                          0x00000000
#define AVR32_ACIFA_SCFA_SCALEFACTOR                                  0
#define AVR32_ACIFA_SCFA_SCALEFACTOR_MASK                    0x0000003f
#define AVR32_ACIFA_SCFA_SCALEFACTOR_OFFSET                           0
#define AVR32_ACIFA_SCFA_SCALEFACTOR_SIZE                             6
#define AVR32_ACIFA_SCFB                                     0x00000018
#define AVR32_ACIFA_SCFB_EN                                           6
#define AVR32_ACIFA_SCFB_EN_MASK                             0x00000040
#define AVR32_ACIFA_SCFB_EN_OFFSET                                    6
#define AVR32_ACIFA_SCFB_EN_SIZE                                      1
#define AVR32_ACIFA_SCFB_MASK                                0x0000007f
#define AVR32_ACIFA_SCFB_RESETVALUE                          0x00000000
#define AVR32_ACIFA_SCFB_SCALEFACTOR                                  0
#define AVR32_ACIFA_SCFB_SCALEFACTOR_MASK                    0x0000003f
#define AVR32_ACIFA_SCFB_SCALEFACTOR_OFFSET                           0
#define AVR32_ACIFA_SCFB_SCALEFACTOR_SIZE                             6
#define AVR32_ACIFA_SCR                                      0x00000044
#define AVR32_ACIFA_SCR_ACAINT                                        0
#define AVR32_ACIFA_SCR_ACAINT_MASK                          0x00000001
#define AVR32_ACIFA_SCR_ACAINT_OFFSET                                 0
#define AVR32_ACIFA_SCR_ACAINT_SIZE                                   1
#define AVR32_ACIFA_SCR_ACBINT                                        1
#define AVR32_ACIFA_SCR_ACBINT_MASK                          0x00000002
#define AVR32_ACIFA_SCR_ACBINT_OFFSET                                 1
#define AVR32_ACIFA_SCR_ACBINT_SIZE                                   1
#define AVR32_ACIFA_SCR_MASK                                 0x0000001f
#define AVR32_ACIFA_SCR_RESETVALUE                           0x00000000
#define AVR32_ACIFA_SCR_SUTAINT                                       3
#define AVR32_ACIFA_SCR_SUTAINT_MASK                         0x00000008
#define AVR32_ACIFA_SCR_SUTAINT_OFFSET                                3
#define AVR32_ACIFA_SCR_SUTAINT_SIZE                                  1
#define AVR32_ACIFA_SCR_SUTBINT                                       4
#define AVR32_ACIFA_SCR_SUTBINT_MASK                         0x00000010
#define AVR32_ACIFA_SCR_SUTBINT_OFFSET                                4
#define AVR32_ACIFA_SCR_SUTBINT_SIZE                                  1
#define AVR32_ACIFA_SCR_WFINT                                         2
#define AVR32_ACIFA_SCR_WFINT_MASK                           0x00000004
#define AVR32_ACIFA_SCR_WFINT_OFFSET                                  2
#define AVR32_ACIFA_SCR_WFINT_SIZE                                    1
#define AVR32_ACIFA_SR                                       0x00000040
#define AVR32_ACIFA_SR_ACACPEN                                       11
#define AVR32_ACIFA_SR_ACACPEN_MASK                          0x00000800
#define AVR32_ACIFA_SR_ACACPEN_OFFSET                                11
#define AVR32_ACIFA_SR_ACACPEN_SIZE                                   1
#define AVR32_ACIFA_SR_ACACS                                         16
#define AVR32_ACIFA_SR_ACACS_MASK                            0x00010000
#define AVR32_ACIFA_SR_ACACS_OFFSET                                  16
#define AVR32_ACIFA_SR_ACACS_SIZE                                     1
#define AVR32_ACIFA_SR_ACAEN                                          8
#define AVR32_ACIFA_SR_ACAEN_MASK                            0x00000100
#define AVR32_ACIFA_SR_ACAEN_OFFSET                                   8
#define AVR32_ACIFA_SR_ACAEN_SIZE                                     1
#define AVR32_ACIFA_SR_ACAINT                                         0
#define AVR32_ACIFA_SR_ACAINT_MASK                           0x00000001
#define AVR32_ACIFA_SR_ACAINT_OFFSET                                  0
#define AVR32_ACIFA_SR_ACAINT_SIZE                                    1
#define AVR32_ACIFA_SR_ACARDY                                        24
#define AVR32_ACIFA_SR_ACARDY_MASK                           0x01000000
#define AVR32_ACIFA_SR_ACARDY_OFFSET                                 24
#define AVR32_ACIFA_SR_ACARDY_SIZE                                    1
#define AVR32_ACIFA_SR_ACBCPEN                                       12
#define AVR32_ACIFA_SR_ACBCPEN_MASK                          0x00001000
#define AVR32_ACIFA_SR_ACBCPEN_OFFSET                                12
#define AVR32_ACIFA_SR_ACBCPEN_SIZE                                   1
#define AVR32_ACIFA_SR_ACBCS                                         17
#define AVR32_ACIFA_SR_ACBCS_MASK                            0x00020000
#define AVR32_ACIFA_SR_ACBCS_OFFSET                                  17
#define AVR32_ACIFA_SR_ACBCS_SIZE                                     1
#define AVR32_ACIFA_SR_ACBEN                                          9
#define AVR32_ACIFA_SR_ACBEN_MASK                            0x00000200
#define AVR32_ACIFA_SR_ACBEN_OFFSET                                   9
#define AVR32_ACIFA_SR_ACBEN_SIZE                                     1
#define AVR32_ACIFA_SR_ACBINT                                         1
#define AVR32_ACIFA_SR_ACBINT_MASK                           0x00000002
#define AVR32_ACIFA_SR_ACBINT_OFFSET                                  1
#define AVR32_ACIFA_SR_ACBINT_SIZE                                    1
#define AVR32_ACIFA_SR_ACBRDY                                        25
#define AVR32_ACIFA_SR_ACBRDY_MASK                           0x02000000
#define AVR32_ACIFA_SR_ACBRDY_OFFSET                                 25
#define AVR32_ACIFA_SR_ACBRDY_SIZE                                    1
#define AVR32_ACIFA_SR_MASK                                  0x07071f1f
#define AVR32_ACIFA_SR_RESETVALUE                            0x00000000
#define AVR32_ACIFA_SR_SUTAINT                                        3
#define AVR32_ACIFA_SR_SUTAINT_MASK                          0x00000008
#define AVR32_ACIFA_SR_SUTAINT_OFFSET                                 3
#define AVR32_ACIFA_SR_SUTAINT_SIZE                                   1
#define AVR32_ACIFA_SR_SUTBINT                                        4
#define AVR32_ACIFA_SR_SUTBINT_MASK                          0x00000010
#define AVR32_ACIFA_SR_SUTBINT_OFFSET                                 4
#define AVR32_ACIFA_SR_SUTBINT_SIZE                                   1
#define AVR32_ACIFA_SR_WFCS                                          18
#define AVR32_ACIFA_SR_WFCS_MASK                             0x00040000
#define AVR32_ACIFA_SR_WFCS_OFFSET                                   18
#define AVR32_ACIFA_SR_WFCS_SIZE                                      1
#define AVR32_ACIFA_SR_WFEN                                          10
#define AVR32_ACIFA_SR_WFEN_MASK                             0x00000400
#define AVR32_ACIFA_SR_WFEN_OFFSET                                   10
#define AVR32_ACIFA_SR_WFEN_SIZE                                      1
#define AVR32_ACIFA_SR_WFINT                                          2
#define AVR32_ACIFA_SR_WFINT_MASK                            0x00000004
#define AVR32_ACIFA_SR_WFINT_OFFSET                                   2
#define AVR32_ACIFA_SR_WFINT_SIZE                                     1
#define AVR32_ACIFA_SR_WFRDY                                         26
#define AVR32_ACIFA_SR_WFRDY_MASK                            0x04000000
#define AVR32_ACIFA_SR_WFRDY_OFFSET                                  26
#define AVR32_ACIFA_SR_WFRDY_SIZE                                     1
#define AVR32_ACIFA_SS                                               28
#define AVR32_ACIFA_SS_MASK                                  0x10000000
#define AVR32_ACIFA_SS_OFFSET                                        28
#define AVR32_ACIFA_SS_SIZE                                           1
#define AVR32_ACIFA_SUT                                      0x00000024
#define AVR32_ACIFA_SUTAINT                                           3
#define AVR32_ACIFA_SUTAINT_MASK                             0x00000008
#define AVR32_ACIFA_SUTAINT_OFFSET                                    3
#define AVR32_ACIFA_SUTAINT_SIZE                                      1
#define AVR32_ACIFA_SUTBINT                                           4
#define AVR32_ACIFA_SUTBINT_MASK                             0x00000010
#define AVR32_ACIFA_SUTBINT_OFFSET                                    4
#define AVR32_ACIFA_SUTBINT_SIZE                                      1
#define AVR32_ACIFA_SUT_MASK                                 0x0000ffff
#define AVR32_ACIFA_SUT_OFFSET                                        0
#define AVR32_ACIFA_SUT_RESETVALUE                           0x00000000
#define AVR32_ACIFA_SUT_SIZE                                         16
#define AVR32_ACIFA_SUT_SUT                                           0
#define AVR32_ACIFA_SUT_SUT_MASK                             0x0000ffff
#define AVR32_ACIFA_SUT_SUT_OFFSET                                    0
#define AVR32_ACIFA_SUT_SUT_SIZE                                     16
#define AVR32_ACIFA_VARIANT                                          16
#define AVR32_ACIFA_VARIANT_MASK                             0x000f0000
#define AVR32_ACIFA_VARIANT_OFFSET                                   16
#define AVR32_ACIFA_VARIANT_SIZE                                      4
#define AVR32_ACIFA_VERSION                                  0x00000048
#define AVR32_ACIFA_VERSION_MASK                             0x000f0fff
#define AVR32_ACIFA_VERSION_OFFSET                                    0
#define AVR32_ACIFA_VERSION_RESETVALUE                       0x00000100
#define AVR32_ACIFA_VERSION_SIZE                                     12
#define AVR32_ACIFA_VERSION_VARIANT                                  16
#define AVR32_ACIFA_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_ACIFA_VERSION_VARIANT_OFFSET                           16
#define AVR32_ACIFA_VERSION_VARIANT_SIZE                              4
#define AVR32_ACIFA_VERSION_VERSION                                   0
#define AVR32_ACIFA_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_ACIFA_VERSION_VERSION_OFFSET                            0
#define AVR32_ACIFA_VERSION_VERSION_SIZE                             12
#define AVR32_ACIFA_WCONF                                    0x00000008
#define AVR32_ACIFA_WCONF_MASK                               0x00000f03
#define AVR32_ACIFA_WCONF_RESETVALUE                         0x00000000
#define AVR32_ACIFA_WCONF_WINSEL                                      8
#define AVR32_ACIFA_WCONF_WINSEL_MASK                        0x00000f00
#define AVR32_ACIFA_WCONF_WINSEL_OFFSET                               8
#define AVR32_ACIFA_WCONF_WINSEL_SIZE                                 4
#define AVR32_ACIFA_WCONF_WIS                                         0
#define AVR32_ACIFA_WCONF_WIS_MASK                           0x00000003
#define AVR32_ACIFA_WCONF_WIS_OFFSET                                  0
#define AVR32_ACIFA_WCONF_WIS_SIZE                                    2
#define AVR32_ACIFA_WFCS                                             18
#define AVR32_ACIFA_WFCS_MASK                                0x00040000
#define AVR32_ACIFA_WFCS_OFFSET                                      18
#define AVR32_ACIFA_WFCS_SIZE                                         1
#define AVR32_ACIFA_WFDIS                                             2
#define AVR32_ACIFA_WFDIS_MASK                               0x00000004
#define AVR32_ACIFA_WFDIS_OFFSET                                      2
#define AVR32_ACIFA_WFDIS_SIZE                                        1
#define AVR32_ACIFA_WFEN_SIZE                                         1
#define AVR32_ACIFA_WFINT                                             2
#define AVR32_ACIFA_WFINT_MASK                               0x00000004
#define AVR32_ACIFA_WFINT_OFFSET                                      2
#define AVR32_ACIFA_WFINT_SIZE                                        1
#define AVR32_ACIFA_WFRDY                                            26
#define AVR32_ACIFA_WFRDY_MASK                               0x04000000
#define AVR32_ACIFA_WFRDY_OFFSET                                     26
#define AVR32_ACIFA_WFRDY_SIZE                                        1
#define AVR32_ACIFA_WINSEL                                            8
#define AVR32_ACIFA_WINSEL_MASK                              0x00000f00
#define AVR32_ACIFA_WINSEL_OFFSET                                     8
#define AVR32_ACIFA_WINSEL_SIZE                                       4
#define AVR32_ACIFA_WIS                                               0
#define AVR32_ACIFA_WIS_MASK                                 0x00000003
#define AVR32_ACIFA_WIS_OFFSET                                        0
#define AVR32_ACIFA_WIS_SIZE                                          2




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_acifa_confa_t {
    unsigned int oen             : 1;
    unsigned int                 : 2;
    unsigned int ss              : 1;
    unsigned int                 : 2;
    unsigned int hs              : 2;
    unsigned int                 : 4;
    unsigned int inseln          : 4;
    unsigned int                 : 4;
    unsigned int inselp          : 4;
    unsigned int                 : 6;
    unsigned int is              : 2;
} avr32_acifa_confa_t;



typedef struct avr32_acifa_confb_t {
    unsigned int oen             : 1;
    unsigned int                 : 2;
    unsigned int ss              : 1;
    unsigned int                 : 2;
    unsigned int hs              : 2;
    unsigned int                 : 4;
    unsigned int inseln          : 4;
    unsigned int                 : 4;
    unsigned int inselp          : 4;
    unsigned int                 : 6;
    unsigned int is              : 2;
} avr32_acifa_confb_t;



typedef struct avr32_acifa_wconf_t {
    unsigned int                 :20;
    unsigned int winsel          : 4;
    unsigned int                 : 6;
    unsigned int wis             : 2;
} avr32_acifa_wconf_t;



typedef struct avr32_acifa_evsrc0_t {
    unsigned int                 :28;
    unsigned int evsrc           : 4;
} avr32_acifa_evsrc0_t;



typedef struct avr32_acifa_evsrc1_t {
    unsigned int                 :28;
    unsigned int evsrc           : 4;
} avr32_acifa_evsrc1_t;



typedef struct avr32_acifa_scfa_t {
    unsigned int                 :25;
    unsigned int en              : 1;
    unsigned int scalefactor     : 6;
} avr32_acifa_scfa_t;



typedef struct avr32_acifa_scfb_t {
    unsigned int                 :25;
    unsigned int en              : 1;
    unsigned int scalefactor     : 6;
} avr32_acifa_scfb_t;



typedef struct avr32_acifa_en_t {
    unsigned int                 :27;
    unsigned int acbcpen         : 1;
    unsigned int acacpen         : 1;
    unsigned int wfen            : 1;
    unsigned int acben           : 1;
    unsigned int acaen           : 1;
} avr32_acifa_en_t;



typedef struct avr32_acifa_dis_t {
    unsigned int                 :27;
    unsigned int acbcpdis        : 1;
    unsigned int acacpdis        : 1;
    unsigned int wfdis           : 1;
    unsigned int acbdis          : 1;
    unsigned int acadis          : 1;
} avr32_acifa_dis_t;



typedef struct avr32_acifa_sut_t {
    unsigned int                 :16;
    unsigned int sut             :16;
} avr32_acifa_sut_t;



typedef struct avr32_acifa_ier_t {
    unsigned int                 :27;
    unsigned int sutbint         : 1;
    unsigned int sutaint         : 1;
    unsigned int wfint           : 1;
    unsigned int acbint          : 1;
    unsigned int acaint          : 1;
} avr32_acifa_ier_t;



typedef struct avr32_acifa_idr_t {
    unsigned int                 :27;
    unsigned int sutbint         : 1;
    unsigned int sutaint         : 1;
    unsigned int wfint           : 1;
    unsigned int acbint          : 1;
    unsigned int acaint          : 1;
} avr32_acifa_idr_t;



typedef struct avr32_acifa_imr_t {
    unsigned int                 :27;
    unsigned int sutbint         : 1;
    unsigned int sutaint         : 1;
    unsigned int wfint           : 1;
    unsigned int acbint          : 1;
    unsigned int acaint          : 1;
} avr32_acifa_imr_t;



typedef struct avr32_acifa_eve_t {
    unsigned int                 :30;
    unsigned int acev1           : 1;
    unsigned int acev0           : 1;
} avr32_acifa_eve_t;



typedef struct avr32_acifa_evd_t {
    unsigned int                 :30;
    unsigned int acev1           : 1;
    unsigned int acev0           : 1;
} avr32_acifa_evd_t;



typedef struct avr32_acifa_evm_t {
    unsigned int                 :30;
    unsigned int acev1           : 1;
    unsigned int acev0           : 1;
} avr32_acifa_evm_t;



typedef struct avr32_acifa_sr_t {
    unsigned int                 : 5;
    unsigned int wfrdy           : 1;
    unsigned int acbrdy          : 1;
    unsigned int acardy          : 1;
    unsigned int                 : 5;
    unsigned int wfcs            : 1;
    unsigned int acbcs           : 1;
    unsigned int acacs           : 1;
    unsigned int                 : 3;
    unsigned int acbcpen         : 1;
    unsigned int acacpen         : 1;
    unsigned int wfen            : 1;
    unsigned int acben           : 1;
    unsigned int acaen           : 1;
    unsigned int                 : 3;
    unsigned int sutbint         : 1;
    unsigned int sutaint         : 1;
    unsigned int wfint           : 1;
    unsigned int acbint          : 1;
    unsigned int acaint          : 1;
} avr32_acifa_sr_t;



typedef struct avr32_acifa_scr_t {
    unsigned int                 :27;
    unsigned int sutbint         : 1;
    unsigned int sutaint         : 1;
    unsigned int wfint           : 1;
    unsigned int acbint          : 1;
    unsigned int acaint          : 1;
} avr32_acifa_scr_t;



typedef struct avr32_acifa_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_acifa_version_t;



typedef struct avr32_acifa_parameter_t {
    unsigned int                 :16;
    unsigned int mux4_inputs_nb  : 4;
    unsigned int mux3_inputs_nb  : 4;
    unsigned int mux2_inputs_nb  : 4;
    unsigned int mux1_inputs_nb  : 4;
} avr32_acifa_parameter_t;



typedef struct avr32_acifa_t {
  union {
          unsigned long                  confa     ;//0x0000
          avr32_acifa_confa_t            CONFA     ;
  };
  union {
          unsigned long                  confb     ;//0x0004
          avr32_acifa_confb_t            CONFB     ;
  };
  union {
          unsigned long                  wconf     ;//0x0008
          avr32_acifa_wconf_t            WCONF     ;
  };
  union {
          unsigned long                  evsrc0    ;//0x000c
          avr32_acifa_evsrc0_t           EVSRC0    ;
  };
  union {
          unsigned long                  evsrc1    ;//0x0010
          avr32_acifa_evsrc1_t           EVSRC1    ;
  };
  union {
          unsigned long                  scfa      ;//0x0014
          avr32_acifa_scfa_t             SCFA      ;
  };
  union {
          unsigned long                  scfb      ;//0x0018
          avr32_acifa_scfb_t             SCFB      ;
  };
  union {
          unsigned long                  en        ;//0x001c
          avr32_acifa_en_t               EN        ;
  };
  union {
          unsigned long                  dis       ;//0x0020
          avr32_acifa_dis_t              DIS       ;
  };
  union {
          unsigned long                  sut       ;//0x0024
          avr32_acifa_sut_t              SUT       ;
  };
  union {
          unsigned long                  ier       ;//0x0028
          avr32_acifa_ier_t              IER       ;
  };
  union {
          unsigned long                  idr       ;//0x002c
          avr32_acifa_idr_t              IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0030
    const avr32_acifa_imr_t              IMR       ;
  };
  union {
          unsigned long                  eve       ;//0x0034
          avr32_acifa_eve_t              EVE       ;
  };
  union {
          unsigned long                  evd       ;//0x0038
          avr32_acifa_evd_t              EVD       ;
  };
  union {
    const unsigned long                  evm       ;//0x003c
    const avr32_acifa_evm_t              EVM       ;
  };
  union {
    const unsigned long                  sr        ;//0x0040
    const avr32_acifa_sr_t               SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0044
          avr32_acifa_scr_t              SCR       ;
  };
  union {
    const unsigned long                  version   ;//0x0048
    const avr32_acifa_version_t          VERSION   ;
  };
  union {
    const unsigned long                  parameter ;//0x004c
    const avr32_acifa_parameter_t        PARAMETER ;
  };
} avr32_acifa_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ACIFA_100_H_INCLUDED*/
#endif


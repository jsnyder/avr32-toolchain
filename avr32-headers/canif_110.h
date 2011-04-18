/*****************************************************************************
 *
 * Copyright (C) 2010 Atmel Corporation
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
 * Model        : UC3C0512C
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_CANIF_110_H_INCLUDED
#define AVR32_CANIF_110_H_INCLUDED

#define AVR32_CANIF_H_VERSION 110

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_CANIF_<register>
 - Bitfield mask:   AVR32_CANIF_<register>_<bitfield>
 - Bitfield offset: AVR32_CANIF_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_CANIF_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_CANIF_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_CANIF_<bitfield>
 - Bitfield offset: AVR32_CANIF_<bitfield>_OFFSET
 - Bitfield size:   AVR32_CANIF_<bitfield>_SIZE
 - Bitfield values: AVR32_CANIF_<bitfield>_<value name>
 - Bitfield values: AVR32_CANIF_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_CANIF_AERR                                              1
#define AVR32_CANIF_AERRIM                                            1
#define AVR32_CANIF_AERRIM_MASK                              0x00000002
#define AVR32_CANIF_AERRIM_OFFSET                                     1
#define AVR32_CANIF_AERRIM_SIZE                                       1
#define AVR32_CANIF_AERR_MASK                                0x00000002
#define AVR32_CANIF_AERR_OFFSET                                       1
#define AVR32_CANIF_AERR_SIZE                                         1
#define AVR32_CANIF_AM                                                5
#define AVR32_CANIF_AM_MASK                                  0x00000020
#define AVR32_CANIF_AM_OFFSET                                         5
#define AVR32_CANIF_AM_SIZE                                           1
#define AVR32_CANIF_BERR                                              5
#define AVR32_CANIF_BERRIM                                            5
#define AVR32_CANIF_BERRIM_MASK                              0x00000020
#define AVR32_CANIF_BERRIM_OFFSET                                     5
#define AVR32_CANIF_BERRIM_SIZE                                       1
#define AVR32_CANIF_BERR_MASK                                0x00000020
#define AVR32_CANIF_BERR_OFFSET                                       5
#define AVR32_CANIF_BERR_SIZE                                         1
#define AVR32_CANIF_BOFF                                              0
#define AVR32_CANIF_BOFFIM                                            0
#define AVR32_CANIF_BOFFIM_MASK                              0x00000001
#define AVR32_CANIF_BOFFIM_OFFSET                                     0
#define AVR32_CANIF_BOFFIM_SIZE                                       1
#define AVR32_CANIF_BOFF_MASK                                0x00000001
#define AVR32_CANIF_BOFF_OFFSET                                       0
#define AVR32_CANIF_BOFF_SIZE                                         1
#define AVR32_CANIF_CANCFG                                   0x0000000c
#define AVR32_CANIF_CANCFG_CMODE                                     24
#define AVR32_CANIF_CANCFG_CMODE_MASK                        0x03000000
#define AVR32_CANIF_CANCFG_CMODE_OFFSET                              24
#define AVR32_CANIF_CANCFG_CMODE_SIZE                                 2
#define AVR32_CANIF_CANCFG_MASK                              0x073f3f3f
#define AVR32_CANIF_CANCFG_OVRM                                      26
#define AVR32_CANIF_CANCFG_OVRM_MASK                         0x04000000
#define AVR32_CANIF_CANCFG_OVRM_OFFSET                               26
#define AVR32_CANIF_CANCFG_OVRM_SIZE                                  1
#define AVR32_CANIF_CANCFG_PHS1                                       8
#define AVR32_CANIF_CANCFG_PHS1_MASK                         0x00000700
#define AVR32_CANIF_CANCFG_PHS1_OFFSET                                8
#define AVR32_CANIF_CANCFG_PHS1_SIZE                                  3
#define AVR32_CANIF_CANCFG_PHS2                                      11
#define AVR32_CANIF_CANCFG_PHS2_MASK                         0x00003800
#define AVR32_CANIF_CANCFG_PHS2_OFFSET                               11
#define AVR32_CANIF_CANCFG_PHS2_SIZE                                  3
#define AVR32_CANIF_CANCFG_PRES                                       0
#define AVR32_CANIF_CANCFG_PRES_MASK                         0x0000003f
#define AVR32_CANIF_CANCFG_PRES_OFFSET                                0
#define AVR32_CANIF_CANCFG_PRES_SIZE                                  6
#define AVR32_CANIF_CANCFG_PRS                                       16
#define AVR32_CANIF_CANCFG_PRS_MASK                          0x00070000
#define AVR32_CANIF_CANCFG_PRS_OFFSET                                16
#define AVR32_CANIF_CANCFG_PRS_SIZE                                   3
#define AVR32_CANIF_CANCFG_RESETVALUE                        0x00000001
#define AVR32_CANIF_CANCFG_SJW                                       19
#define AVR32_CANIF_CANCFG_SJW_MASK                          0x00180000
#define AVR32_CANIF_CANCFG_SJW_OFFSET                                19
#define AVR32_CANIF_CANCFG_SJW_SIZE                                   2
#define AVR32_CANIF_CANCFG_SM                                        21
#define AVR32_CANIF_CANCFG_SM_MASK                           0x00200000
#define AVR32_CANIF_CANCFG_SM_OFFSET                                 21
#define AVR32_CANIF_CANCFG_SM_SIZE                                    1
#define AVR32_CANIF_CANCTRL                                  0x00000010
#define AVR32_CANIF_CANCTRL_CEN                                       1
#define AVR32_CANIF_CANCTRL_CEN_MASK                         0x00000002
#define AVR32_CANIF_CANCTRL_CEN_OFFSET                                1
#define AVR32_CANIF_CANCTRL_CEN_SIZE                                  1
#define AVR32_CANIF_CANCTRL_INIT                                      0
#define AVR32_CANIF_CANCTRL_INIT_MASK                        0x00000001
#define AVR32_CANIF_CANCTRL_INIT_OFFSET                               0
#define AVR32_CANIF_CANCTRL_INIT_SIZE                                 1
#define AVR32_CANIF_CANCTRL_MASK                             0x0000000f
#define AVR32_CANIF_CANCTRL_OVRQ                                      2
#define AVR32_CANIF_CANCTRL_OVRQ_MASK                        0x00000004
#define AVR32_CANIF_CANCTRL_OVRQ_OFFSET                               2
#define AVR32_CANIF_CANCTRL_OVRQ_SIZE                                 1
#define AVR32_CANIF_CANCTRL_RESETVALUE                       0x00000000
#define AVR32_CANIF_CANCTRL_WKEN                                      3
#define AVR32_CANIF_CANCTRL_WKEN_MASK                        0x00000008
#define AVR32_CANIF_CANCTRL_WKEN_OFFSET                               3
#define AVR32_CANIF_CANCTRL_WKEN_SIZE                                 1
#define AVR32_CANIF_CANFC                                    0x00000018
#define AVR32_CANIF_CANFC_EMODE                                      16
#define AVR32_CANIF_CANFC_EMODE_MASK                         0x00030000
#define AVR32_CANIF_CANFC_EMODE_OFFSET                               16
#define AVR32_CANIF_CANFC_EMODE_SIZE                                  2
#define AVR32_CANIF_CANFC_MASK                               0x0003ffff
#define AVR32_CANIF_CANFC_REC                                         0
#define AVR32_CANIF_CANFC_REC_MASK                           0x000000ff
#define AVR32_CANIF_CANFC_REC_OFFSET                                  0
#define AVR32_CANIF_CANFC_REC_SIZE                                    8
#define AVR32_CANIF_CANFC_RESETVALUE                         0x00000000
#define AVR32_CANIF_CANFC_TEC                                         8
#define AVR32_CANIF_CANFC_TEC_MASK                           0x0000ff00
#define AVR32_CANIF_CANFC_TEC_OFFSET                                  8
#define AVR32_CANIF_CANFC_TEC_SIZE                                    8
#define AVR32_CANIF_CANIDR                                   0x00000020
#define AVR32_CANIF_CANIDR_AERRIM                                     1
#define AVR32_CANIF_CANIDR_AERRIM_MASK                       0x00000002
#define AVR32_CANIF_CANIDR_AERRIM_OFFSET                              1
#define AVR32_CANIF_CANIDR_AERRIM_SIZE                                1
#define AVR32_CANIF_CANIDR_BERRIM                                     5
#define AVR32_CANIF_CANIDR_BERRIM_MASK                       0x00000020
#define AVR32_CANIF_CANIDR_BERRIM_OFFSET                              5
#define AVR32_CANIF_CANIDR_BERRIM_SIZE                                1
#define AVR32_CANIF_CANIDR_BOFFIM                                     0
#define AVR32_CANIF_CANIDR_BOFFIM_MASK                       0x00000001
#define AVR32_CANIF_CANIDR_BOFFIM_OFFSET                              0
#define AVR32_CANIF_CANIDR_BOFFIM_SIZE                                1
#define AVR32_CANIF_CANIDR_CERRIM                                     3
#define AVR32_CANIF_CANIDR_CERRIM_MASK                       0x00000008
#define AVR32_CANIF_CANIDR_CERRIM_OFFSET                              3
#define AVR32_CANIF_CANIDR_CERRIM_SIZE                                1
#define AVR32_CANIF_CANIDR_FERRIM                                     2
#define AVR32_CANIF_CANIDR_FERRIM_MASK                       0x00000004
#define AVR32_CANIF_CANIDR_FERRIM_OFFSET                              2
#define AVR32_CANIF_CANIDR_FERRIM_SIZE                                1
#define AVR32_CANIF_CANIDR_MASK                              0x000001ff
#define AVR32_CANIF_CANIDR_RESETVALUE                        0x00000000
#define AVR32_CANIF_CANIDR_RXOKIM                                     7
#define AVR32_CANIF_CANIDR_RXOKIM_MASK                       0x00000080
#define AVR32_CANIF_CANIDR_RXOKIM_OFFSET                              7
#define AVR32_CANIF_CANIDR_RXOKIM_SIZE                                1
#define AVR32_CANIF_CANIDR_SERRIM                                     4
#define AVR32_CANIF_CANIDR_SERRIM_MASK                       0x00000010
#define AVR32_CANIF_CANIDR_SERRIM_OFFSET                              4
#define AVR32_CANIF_CANIDR_SERRIM_SIZE                                1
#define AVR32_CANIF_CANIDR_TXOKIM                                     8
#define AVR32_CANIF_CANIDR_TXOKIM_MASK                       0x00000100
#define AVR32_CANIF_CANIDR_TXOKIM_OFFSET                              8
#define AVR32_CANIF_CANIDR_TXOKIM_SIZE                                1
#define AVR32_CANIF_CANIDR_WKUPIM                                     6
#define AVR32_CANIF_CANIDR_WKUPIM_MASK                       0x00000040
#define AVR32_CANIF_CANIDR_WKUPIM_OFFSET                              6
#define AVR32_CANIF_CANIDR_WKUPIM_SIZE                                1
#define AVR32_CANIF_CANIER                                   0x0000001c
#define AVR32_CANIF_CANIER_AERRIM                                     1
#define AVR32_CANIF_CANIER_AERRIM_MASK                       0x00000002
#define AVR32_CANIF_CANIER_AERRIM_OFFSET                              1
#define AVR32_CANIF_CANIER_AERRIM_SIZE                                1
#define AVR32_CANIF_CANIER_BERRIM                                     5
#define AVR32_CANIF_CANIER_BERRIM_MASK                       0x00000020
#define AVR32_CANIF_CANIER_BERRIM_OFFSET                              5
#define AVR32_CANIF_CANIER_BERRIM_SIZE                                1
#define AVR32_CANIF_CANIER_BOFFIM                                     0
#define AVR32_CANIF_CANIER_BOFFIM_MASK                       0x00000001
#define AVR32_CANIF_CANIER_BOFFIM_OFFSET                              0
#define AVR32_CANIF_CANIER_BOFFIM_SIZE                                1
#define AVR32_CANIF_CANIER_CERRIM                                     3
#define AVR32_CANIF_CANIER_CERRIM_MASK                       0x00000008
#define AVR32_CANIF_CANIER_CERRIM_OFFSET                              3
#define AVR32_CANIF_CANIER_CERRIM_SIZE                                1
#define AVR32_CANIF_CANIER_FERRIM                                     2
#define AVR32_CANIF_CANIER_FERRIM_MASK                       0x00000004
#define AVR32_CANIF_CANIER_FERRIM_OFFSET                              2
#define AVR32_CANIF_CANIER_FERRIM_SIZE                                1
#define AVR32_CANIF_CANIER_MASK                              0x000001ff
#define AVR32_CANIF_CANIER_RESETVALUE                        0x00000000
#define AVR32_CANIF_CANIER_RXOKIM                                     7
#define AVR32_CANIF_CANIER_RXOKIM_MASK                       0x00000080
#define AVR32_CANIF_CANIER_RXOKIM_OFFSET                              7
#define AVR32_CANIF_CANIER_RXOKIM_SIZE                                1
#define AVR32_CANIF_CANIER_SERRIM                                     4
#define AVR32_CANIF_CANIER_SERRIM_MASK                       0x00000010
#define AVR32_CANIF_CANIER_SERRIM_OFFSET                              4
#define AVR32_CANIF_CANIER_SERRIM_SIZE                                1
#define AVR32_CANIF_CANIER_TXOKIM                                     8
#define AVR32_CANIF_CANIER_TXOKIM_MASK                       0x00000100
#define AVR32_CANIF_CANIER_TXOKIM_OFFSET                              8
#define AVR32_CANIF_CANIER_TXOKIM_SIZE                                1
#define AVR32_CANIF_CANIER_WKUPIM                                     6
#define AVR32_CANIF_CANIER_WKUPIM_MASK                       0x00000040
#define AVR32_CANIF_CANIER_WKUPIM_OFFSET                              6
#define AVR32_CANIF_CANIER_WKUPIM_SIZE                                1
#define AVR32_CANIF_CANIMR                                   0x00000024
#define AVR32_CANIF_CANIMR_AERRIM                                     1
#define AVR32_CANIF_CANIMR_AERRIM_MASK                       0x00000002
#define AVR32_CANIF_CANIMR_AERRIM_OFFSET                              1
#define AVR32_CANIF_CANIMR_AERRIM_SIZE                                1
#define AVR32_CANIF_CANIMR_BERRIM                                     5
#define AVR32_CANIF_CANIMR_BERRIM_MASK                       0x00000020
#define AVR32_CANIF_CANIMR_BERRIM_OFFSET                              5
#define AVR32_CANIF_CANIMR_BERRIM_SIZE                                1
#define AVR32_CANIF_CANIMR_BOFFIM                                     0
#define AVR32_CANIF_CANIMR_BOFFIM_MASK                       0x00000001
#define AVR32_CANIF_CANIMR_BOFFIM_OFFSET                              0
#define AVR32_CANIF_CANIMR_BOFFIM_SIZE                                1
#define AVR32_CANIF_CANIMR_CERRIM                                     3
#define AVR32_CANIF_CANIMR_CERRIM_MASK                       0x00000008
#define AVR32_CANIF_CANIMR_CERRIM_OFFSET                              3
#define AVR32_CANIF_CANIMR_CERRIM_SIZE                                1
#define AVR32_CANIF_CANIMR_FERRIM                                     2
#define AVR32_CANIF_CANIMR_FERRIM_MASK                       0x00000004
#define AVR32_CANIF_CANIMR_FERRIM_OFFSET                              2
#define AVR32_CANIF_CANIMR_FERRIM_SIZE                                1
#define AVR32_CANIF_CANIMR_MASK                              0x000001ff
#define AVR32_CANIF_CANIMR_RESETVALUE                        0x00000000
#define AVR32_CANIF_CANIMR_RXOKIM                                     7
#define AVR32_CANIF_CANIMR_RXOKIM_MASK                       0x00000080
#define AVR32_CANIF_CANIMR_RXOKIM_OFFSET                              7
#define AVR32_CANIF_CANIMR_RXOKIM_SIZE                                1
#define AVR32_CANIF_CANIMR_SERRIM                                     4
#define AVR32_CANIF_CANIMR_SERRIM_MASK                       0x00000010
#define AVR32_CANIF_CANIMR_SERRIM_OFFSET                              4
#define AVR32_CANIF_CANIMR_SERRIM_SIZE                                1
#define AVR32_CANIF_CANIMR_TXOKIM                                     8
#define AVR32_CANIF_CANIMR_TXOKIM_MASK                       0x00000100
#define AVR32_CANIF_CANIMR_TXOKIM_OFFSET                              8
#define AVR32_CANIF_CANIMR_TXOKIM_SIZE                                1
#define AVR32_CANIF_CANIMR_WKUPIM                                     6
#define AVR32_CANIF_CANIMR_WKUPIM_MASK                       0x00000040
#define AVR32_CANIF_CANIMR_WKUPIM_OFFSET                              6
#define AVR32_CANIF_CANIMR_WKUPIM_SIZE                                1
#define AVR32_CANIF_CANISCR                                  0x00000028
#define AVR32_CANIF_CANISCR_AERR                                      1
#define AVR32_CANIF_CANISCR_AERR_MASK                        0x00000002
#define AVR32_CANIF_CANISCR_AERR_OFFSET                               1
#define AVR32_CANIF_CANISCR_AERR_SIZE                                 1
#define AVR32_CANIF_CANISCR_BERR                                      5
#define AVR32_CANIF_CANISCR_BERR_MASK                        0x00000020
#define AVR32_CANIF_CANISCR_BERR_OFFSET                               5
#define AVR32_CANIF_CANISCR_BERR_SIZE                                 1
#define AVR32_CANIF_CANISCR_BOFF                                      0
#define AVR32_CANIF_CANISCR_BOFF_MASK                        0x00000001
#define AVR32_CANIF_CANISCR_BOFF_OFFSET                               0
#define AVR32_CANIF_CANISCR_BOFF_SIZE                                 1
#define AVR32_CANIF_CANISCR_CERR                                      3
#define AVR32_CANIF_CANISCR_CERR_MASK                        0x00000008
#define AVR32_CANIF_CANISCR_CERR_OFFSET                               3
#define AVR32_CANIF_CANISCR_CERR_SIZE                                 1
#define AVR32_CANIF_CANISCR_FERR                                      2
#define AVR32_CANIF_CANISCR_FERR_MASK                        0x00000004
#define AVR32_CANIF_CANISCR_FERR_OFFSET                               2
#define AVR32_CANIF_CANISCR_FERR_SIZE                                 1
#define AVR32_CANIF_CANISCR_LSMOB                                    16
#define AVR32_CANIF_CANISCR_LSMOB_MASK                       0x003f0000
#define AVR32_CANIF_CANISCR_LSMOB_OFFSET                             16
#define AVR32_CANIF_CANISCR_LSMOB_SIZE                                6
#define AVR32_CANIF_CANISCR_MASK                             0x003f007f
#define AVR32_CANIF_CANISCR_RESETVALUE                       0x00200000
#define AVR32_CANIF_CANISCR_SERR                                      4
#define AVR32_CANIF_CANISCR_SERR_MASK                        0x00000010
#define AVR32_CANIF_CANISCR_SERR_OFFSET                               4
#define AVR32_CANIF_CANISCR_SERR_SIZE                                 1
#define AVR32_CANIF_CANISCR_WKUP                                      6
#define AVR32_CANIF_CANISCR_WKUP_MASK                        0x00000040
#define AVR32_CANIF_CANISCR_WKUP_OFFSET                               6
#define AVR32_CANIF_CANISCR_WKUP_SIZE                                 1
#define AVR32_CANIF_CANISR                                   0x0000002c
#define AVR32_CANIF_CANISR_AERR                                       1
#define AVR32_CANIF_CANISR_AERR_MASK                         0x00000002
#define AVR32_CANIF_CANISR_AERR_OFFSET                                1
#define AVR32_CANIF_CANISR_AERR_SIZE                                  1
#define AVR32_CANIF_CANISR_BERR                                       5
#define AVR32_CANIF_CANISR_BERR_MASK                         0x00000020
#define AVR32_CANIF_CANISR_BERR_OFFSET                                5
#define AVR32_CANIF_CANISR_BERR_SIZE                                  1
#define AVR32_CANIF_CANISR_BOFF                                       0
#define AVR32_CANIF_CANISR_BOFF_MASK                         0x00000001
#define AVR32_CANIF_CANISR_BOFF_OFFSET                                0
#define AVR32_CANIF_CANISR_BOFF_SIZE                                  1
#define AVR32_CANIF_CANISR_CERR                                       3
#define AVR32_CANIF_CANISR_CERR_MASK                         0x00000008
#define AVR32_CANIF_CANISR_CERR_OFFSET                                3
#define AVR32_CANIF_CANISR_CERR_SIZE                                  1
#define AVR32_CANIF_CANISR_FERR                                       2
#define AVR32_CANIF_CANISR_FERR_MASK                         0x00000004
#define AVR32_CANIF_CANISR_FERR_OFFSET                                2
#define AVR32_CANIF_CANISR_FERR_SIZE                                  1
#define AVR32_CANIF_CANISR_LSMOB                                     16
#define AVR32_CANIF_CANISR_LSMOB_MASK                        0x003f0000
#define AVR32_CANIF_CANISR_LSMOB_OFFSET                              16
#define AVR32_CANIF_CANISR_LSMOB_SIZE                                 6
#define AVR32_CANIF_CANISR_MASK                              0x003f007f
#define AVR32_CANIF_CANISR_RESETVALUE                        0x00200000
#define AVR32_CANIF_CANISR_SERR                                       4
#define AVR32_CANIF_CANISR_SERR_MASK                         0x00000010
#define AVR32_CANIF_CANISR_SERR_OFFSET                                4
#define AVR32_CANIF_CANISR_SERR_SIZE                                  1
#define AVR32_CANIF_CANISR_WKUP                                       6
#define AVR32_CANIF_CANISR_WKUP_MASK                         0x00000040
#define AVR32_CANIF_CANISR_WKUP_OFFSET                                6
#define AVR32_CANIF_CANISR_WKUP_SIZE                                  1
#define AVR32_CANIF_CANRAMB                                  0x00000008
#define AVR32_CANIF_CANRAMB_MASK                             0xffffffff
#define AVR32_CANIF_CANRAMB_RAMBASE                                   0
#define AVR32_CANIF_CANRAMB_RAMBASE_MASK                     0xffffffff
#define AVR32_CANIF_CANRAMB_RAMBASE_OFFSET                            0
#define AVR32_CANIF_CANRAMB_RAMBASE_SIZE                             32
#define AVR32_CANIF_CANRAMB_RESETVALUE                       0x00000000
#define AVR32_CANIF_CANSR                                    0x00000014
#define AVR32_CANIF_CANSR_CES                                         0
#define AVR32_CANIF_CANSR_CES_MASK                           0x00000001
#define AVR32_CANIF_CANSR_CES_OFFSET                                  0
#define AVR32_CANIF_CANSR_CES_SIZE                                    1
#define AVR32_CANIF_CANSR_MASK                               0x0000000f
#define AVR32_CANIF_CANSR_OVS                                         1
#define AVR32_CANIF_CANSR_OVS_MASK                           0x00000002
#define AVR32_CANIF_CANSR_OVS_OFFSET                                  1
#define AVR32_CANIF_CANSR_OVS_SIZE                                    1
#define AVR32_CANIF_CANSR_RESETVALUE                         0x00000000
#define AVR32_CANIF_CANSR_RS                                          3
#define AVR32_CANIF_CANSR_RS_MASK                            0x00000008
#define AVR32_CANIF_CANSR_RS_OFFSET                                   3
#define AVR32_CANIF_CANSR_RS_SIZE                                     1
#define AVR32_CANIF_CANSR_TS                                          2
#define AVR32_CANIF_CANSR_TS_MASK                            0x00000004
#define AVR32_CANIF_CANSR_TS_OFFSET                                   2
#define AVR32_CANIF_CANSR_TS_SIZE                                     1
#define AVR32_CANIF_CEN                                               1
#define AVR32_CANIF_CEN_MASK                                 0x00000002
#define AVR32_CANIF_CEN_OFFSET                                        1
#define AVR32_CANIF_CEN_SIZE                                          1
#define AVR32_CANIF_CERR                                              3
#define AVR32_CANIF_CERRIM                                            3
#define AVR32_CANIF_CERRIM_MASK                              0x00000008
#define AVR32_CANIF_CERRIM_OFFSET                                     3
#define AVR32_CANIF_CERRIM_SIZE                                       1
#define AVR32_CANIF_CERR_MASK                                0x00000008
#define AVR32_CANIF_CERR_OFFSET                                       3
#define AVR32_CANIF_CERR_SIZE                                         1
#define AVR32_CANIF_CES                                               0
#define AVR32_CANIF_CES_MASK                                 0x00000001
#define AVR32_CANIF_CES_OFFSET                                        0
#define AVR32_CANIF_CES_SIZE                                          1
#define AVR32_CANIF_CHNO                                             20
#define AVR32_CANIF_CHNO_MASK                                0x00700000
#define AVR32_CANIF_CHNO_OFFSET                                      20
#define AVR32_CANIF_CHNO_SIZE                                         3
#define AVR32_CANIF_CMODE                                            24
#define AVR32_CANIF_CMODE_MASK                               0x03000000
#define AVR32_CANIF_CMODE_OFFSET                                     24
#define AVR32_CANIF_CMODE_SIZE                                        2
#define AVR32_CANIF_DIR                                               4
#define AVR32_CANIF_DIR_MASK                                 0x00000010
#define AVR32_CANIF_DIR_OFFSET                                        4
#define AVR32_CANIF_DIR_SIZE                                          1
#define AVR32_CANIF_DLC                                               0
#define AVR32_CANIF_DLCW                                              2
#define AVR32_CANIF_DLCW_MASK                                0x00000004
#define AVR32_CANIF_DLCW_OFFSET                                       2
#define AVR32_CANIF_DLCW_SIZE                                         1
#define AVR32_CANIF_DLC_MASK                                 0x0000000f
#define AVR32_CANIF_DLC_OFFSET                                        0
#define AVR32_CANIF_DLC_SIZE                                          4
#define AVR32_CANIF_EMODE                                            16
#define AVR32_CANIF_EMODE_MASK                               0x00030000
#define AVR32_CANIF_EMODE_OFFSET                                     16
#define AVR32_CANIF_EMODE_SIZE                                        2
#define AVR32_CANIF_FERR                                              2
#define AVR32_CANIF_FERRIM                                            2
#define AVR32_CANIF_FERRIM_MASK                              0x00000004
#define AVR32_CANIF_FERRIM_OFFSET                                     2
#define AVR32_CANIF_FERRIM_SIZE                                       1
#define AVR32_CANIF_FERR_MASK                                0x00000004
#define AVR32_CANIF_FERR_OFFSET                                       2
#define AVR32_CANIF_FERR_SIZE                                         1
#define AVR32_CANIF_INIT                                              0
#define AVR32_CANIF_INIT_MASK                                0x00000001
#define AVR32_CANIF_INIT_OFFSET                                       0
#define AVR32_CANIF_INIT_SIZE                                         1
#define AVR32_CANIF_LSMOB                                            16
#define AVR32_CANIF_LSMOB_MASK                               0x003f0000
#define AVR32_CANIF_LSMOB_OFFSET                                     16
#define AVR32_CANIF_LSMOB_SIZE                                        6
#define AVR32_CANIF_MAV                                               0
#define AVR32_CANIF_MAV_MASK                                 0x0000003f
#define AVR32_CANIF_MAV_OFFSET                                        0
#define AVR32_CANIF_MAV_SIZE                                          6
#define AVR32_CANIF_MEN                                               0
#define AVR32_CANIF_MEN_MASK                                 0xffffffff
#define AVR32_CANIF_MEN_OFFSET                                        0
#define AVR32_CANIF_MEN_SIZE                                         32
#define AVR32_CANIF_MIM                                               0
#define AVR32_CANIF_MIM_MASK                                 0xffffffff
#define AVR32_CANIF_MIM_OFFSET                                        0
#define AVR32_CANIF_MIM_SIZE                                         32
#define AVR32_CANIF_MNCH0                                            24
#define AVR32_CANIF_MNCH0_MASK                               0x3f000000
#define AVR32_CANIF_MNCH0_OFFSET                                     24
#define AVR32_CANIF_MNCH0_SIZE                                        6
#define AVR32_CANIF_MNCH1                                             0
#define AVR32_CANIF_MNCH1_MASK                               0x0000003f
#define AVR32_CANIF_MNCH1_OFFSET                                      0
#define AVR32_CANIF_MNCH1_SIZE                                        6
#define AVR32_CANIF_MNCH2                                             8
#define AVR32_CANIF_MNCH2_MASK                               0x00003f00
#define AVR32_CANIF_MNCH2_OFFSET                                      8
#define AVR32_CANIF_MNCH2_SIZE                                        6
#define AVR32_CANIF_MNCH3                                            16
#define AVR32_CANIF_MNCH3_MASK                               0x003f0000
#define AVR32_CANIF_MNCH3_OFFSET                                     16
#define AVR32_CANIF_MNCH3_SIZE                                        6
#define AVR32_CANIF_MNCH4                                            24
#define AVR32_CANIF_MNCH4_MASK                               0x3f000000
#define AVR32_CANIF_MNCH4_OFFSET                                     24
#define AVR32_CANIF_MNCH4_SIZE                                        6
#define AVR32_CANIF_MOBCTRL                                  0x0000005c
#define AVR32_CANIF_MOBCTRL_AM                                        5
#define AVR32_CANIF_MOBCTRL_AM_MASK                          0x00000020
#define AVR32_CANIF_MOBCTRL_AM_OFFSET                                 5
#define AVR32_CANIF_MOBCTRL_AM_SIZE                                   1
#define AVR32_CANIF_MOBCTRL_DIR                                       4
#define AVR32_CANIF_MOBCTRL_DIR_MASK                         0x00000010
#define AVR32_CANIF_MOBCTRL_DIR_OFFSET                                4
#define AVR32_CANIF_MOBCTRL_DIR_SIZE                                  1
#define AVR32_CANIF_MOBCTRL_DLC                                       0
#define AVR32_CANIF_MOBCTRL_DLC_MASK                         0x0000000f
#define AVR32_CANIF_MOBCTRL_DLC_OFFSET                                0
#define AVR32_CANIF_MOBCTRL_DLC_SIZE                                  4
#define AVR32_CANIF_MOBCTRL_MASK                             0x0000003f
#define AVR32_CANIF_MOBCTRL_RESETVALUE                       0x00000000
#define AVR32_CANIF_MOBDR                                    0x00000038
#define AVR32_CANIF_MOBDR_MASK                               0xffffffff
#define AVR32_CANIF_MOBDR_MEN                                         0
#define AVR32_CANIF_MOBDR_MEN_MASK                           0xffffffff
#define AVR32_CANIF_MOBDR_MEN_OFFSET                                  0
#define AVR32_CANIF_MOBDR_MEN_SIZE                                   32
#define AVR32_CANIF_MOBDR_RESETVALUE                         0x00000000
#define AVR32_CANIF_MOBER                                    0x00000034
#define AVR32_CANIF_MOBER_MASK                               0xffffffff
#define AVR32_CANIF_MOBER_MEN                                         0
#define AVR32_CANIF_MOBER_MEN_MASK                           0xffffffff
#define AVR32_CANIF_MOBER_MEN_OFFSET                                  0
#define AVR32_CANIF_MOBER_MEN_SIZE                                   32
#define AVR32_CANIF_MOBER_RESETVALUE                         0x00000000
#define AVR32_CANIF_MOBESR                                   0x0000003c
#define AVR32_CANIF_MOBESR_MASK                              0xffffffff
#define AVR32_CANIF_MOBESR_MEN                                        0
#define AVR32_CANIF_MOBESR_MEN_MASK                          0xffffffff
#define AVR32_CANIF_MOBESR_MEN_OFFSET                                 0
#define AVR32_CANIF_MOBESR_MEN_SIZE                                  32
#define AVR32_CANIF_MOBESR_RESETVALUE                        0x00000000
#define AVR32_CANIF_MOBIDR                                   0x00000044
#define AVR32_CANIF_MOBIDR_MASK                              0xffffffff
#define AVR32_CANIF_MOBIDR_MIM                                        0
#define AVR32_CANIF_MOBIDR_MIM_MASK                          0xffffffff
#define AVR32_CANIF_MOBIDR_MIM_OFFSET                                 0
#define AVR32_CANIF_MOBIDR_MIM_SIZE                                  32
#define AVR32_CANIF_MOBIDR_RESETVALUE                        0x00000000
#define AVR32_CANIF_MOBIER                                   0x00000040
#define AVR32_CANIF_MOBIER_MASK                              0xffffffff
#define AVR32_CANIF_MOBIER_MIM                                        0
#define AVR32_CANIF_MOBIER_MIM_MASK                          0xffffffff
#define AVR32_CANIF_MOBIER_MIM_OFFSET                                 0
#define AVR32_CANIF_MOBIER_MIM_SIZE                                  32
#define AVR32_CANIF_MOBIER_RESETVALUE                        0x00000000
#define AVR32_CANIF_MOBIMR                                   0x00000048
#define AVR32_CANIF_MOBIMR_MASK                              0xffffffff
#define AVR32_CANIF_MOBIMR_MIM                                        0
#define AVR32_CANIF_MOBIMR_MIM_MASK                          0xffffffff
#define AVR32_CANIF_MOBIMR_MIM_OFFSET                                 0
#define AVR32_CANIF_MOBIMR_MIM_SIZE                                  32
#define AVR32_CANIF_MOBIMR_RESETVALUE                        0x00000000
#define AVR32_CANIF_MOBSCH                                   0x00000030
#define AVR32_CANIF_MOBSCH_MASK                              0x003f3f3f
#define AVR32_CANIF_MOBSCH_MAV                                        0
#define AVR32_CANIF_MOBSCH_MAV_MASK                          0x0000003f
#define AVR32_CANIF_MOBSCH_MAV_OFFSET                                 0
#define AVR32_CANIF_MOBSCH_MAV_SIZE                                   6
#define AVR32_CANIF_MOBSCH_MRXOK                                      8
#define AVR32_CANIF_MOBSCH_MRXOK_MASK                        0x00003f00
#define AVR32_CANIF_MOBSCH_MRXOK_OFFSET                               8
#define AVR32_CANIF_MOBSCH_MRXOK_SIZE                                 6
#define AVR32_CANIF_MOBSCH_MTXOK                                     16
#define AVR32_CANIF_MOBSCH_MTXOK_MASK                        0x003f0000
#define AVR32_CANIF_MOBSCH_MTXOK_OFFSET                              16
#define AVR32_CANIF_MOBSCH_MTXOK_SIZE                                 6
#define AVR32_CANIF_MOBSCH_RESETVALUE                        0x00202020
#define AVR32_CANIF_MOBSCR                                   0x00000060
#define AVR32_CANIF_MOBSCR_DLCW                                       2
#define AVR32_CANIF_MOBSCR_DLCW_MASK                         0x00000004
#define AVR32_CANIF_MOBSCR_DLCW_OFFSET                                2
#define AVR32_CANIF_MOBSCR_DLCW_SIZE                                  1
#define AVR32_CANIF_MOBSCR_MASK                              0x0000000f
#define AVR32_CANIF_MOBSCR_OVW                                        3
#define AVR32_CANIF_MOBSCR_OVW_MASK                          0x00000008
#define AVR32_CANIF_MOBSCR_OVW_OFFSET                                 3
#define AVR32_CANIF_MOBSCR_OVW_SIZE                                   1
#define AVR32_CANIF_MOBSCR_RESETVALUE                        0x00000000
#define AVR32_CANIF_MOBSCR_RXOK                                       0
#define AVR32_CANIF_MOBSCR_RXOK_MASK                         0x00000001
#define AVR32_CANIF_MOBSCR_RXOK_OFFSET                                0
#define AVR32_CANIF_MOBSCR_RXOK_SIZE                                  1
#define AVR32_CANIF_MOBSCR_TXOK                                       1
#define AVR32_CANIF_MOBSCR_TXOK_MASK                         0x00000002
#define AVR32_CANIF_MOBSCR_TXOK_OFFSET                                1
#define AVR32_CANIF_MOBSCR_TXOK_SIZE                                  1
#define AVR32_CANIF_MOBSR                                    0x00000064
#define AVR32_CANIF_MOBSR_DLCW                                        2
#define AVR32_CANIF_MOBSR_DLCW_MASK                          0x00000004
#define AVR32_CANIF_MOBSR_DLCW_OFFSET                                 2
#define AVR32_CANIF_MOBSR_DLCW_SIZE                                   1
#define AVR32_CANIF_MOBSR_MASK                               0x0000000f
#define AVR32_CANIF_MOBSR_OVW                                         3
#define AVR32_CANIF_MOBSR_OVW_MASK                           0x00000008
#define AVR32_CANIF_MOBSR_OVW_OFFSET                                  3
#define AVR32_CANIF_MOBSR_OVW_SIZE                                    1
#define AVR32_CANIF_MOBSR_RESETVALUE                         0x00000000
#define AVR32_CANIF_MOBSR_RXOK                                        0
#define AVR32_CANIF_MOBSR_RXOK_MASK                          0x00000001
#define AVR32_CANIF_MOBSR_RXOK_OFFSET                                 0
#define AVR32_CANIF_MOBSR_RXOK_SIZE                                   1
#define AVR32_CANIF_MOBSR_TXOK                                        1
#define AVR32_CANIF_MOBSR_TXOK_MASK                          0x00000002
#define AVR32_CANIF_MOBSR_TXOK_OFFSET                                 1
#define AVR32_CANIF_MOBSR_TXOK_SIZE                                   1
#define AVR32_CANIF_MRXISCR                                  0x0000004c
#define AVR32_CANIF_MRXISCR_MASK                             0xffffffff
#define AVR32_CANIF_MRXISCR_RESETVALUE                       0x00000000
#define AVR32_CANIF_MRXISCR_RXOK                                      0
#define AVR32_CANIF_MRXISCR_RXOK_MASK                        0xffffffff
#define AVR32_CANIF_MRXISCR_RXOK_OFFSET                               0
#define AVR32_CANIF_MRXISCR_RXOK_SIZE                                32
#define AVR32_CANIF_MRXISR                                   0x00000050
#define AVR32_CANIF_MRXISR_MASK                              0xffffffff
#define AVR32_CANIF_MRXISR_RESETVALUE                        0x00000000
#define AVR32_CANIF_MRXISR_RXOK                                       0
#define AVR32_CANIF_MRXISR_RXOK_MASK                         0xffffffff
#define AVR32_CANIF_MRXISR_RXOK_OFFSET                                0
#define AVR32_CANIF_MRXISR_RXOK_SIZE                                 32
#define AVR32_CANIF_MRXOK                                             8
#define AVR32_CANIF_MRXOK_MASK                               0x00003f00
#define AVR32_CANIF_MRXOK_OFFSET                                      8
#define AVR32_CANIF_MRXOK_SIZE                                        6
#define AVR32_CANIF_MTXISCR                                  0x00000054
#define AVR32_CANIF_MTXISCR_MASK                             0xffffffff
#define AVR32_CANIF_MTXISCR_RESETVALUE                       0x00000000
#define AVR32_CANIF_MTXISCR_TXOK                                      0
#define AVR32_CANIF_MTXISCR_TXOK_MASK                        0xffffffff
#define AVR32_CANIF_MTXISCR_TXOK_OFFSET                               0
#define AVR32_CANIF_MTXISCR_TXOK_SIZE                                32
#define AVR32_CANIF_MTXISR                                   0x00000058
#define AVR32_CANIF_MTXISR_MASK                              0xffffffff
#define AVR32_CANIF_MTXISR_RESETVALUE                        0x00000000
#define AVR32_CANIF_MTXISR_TXOK                                       0
#define AVR32_CANIF_MTXISR_TXOK_MASK                         0xffffffff
#define AVR32_CANIF_MTXISR_TXOK_OFFSET                                0
#define AVR32_CANIF_MTXISR_TXOK_SIZE                                 32
#define AVR32_CANIF_MTXOK                                            16
#define AVR32_CANIF_MTXOK_MASK                               0x003f0000
#define AVR32_CANIF_MTXOK_OFFSET                                     16
#define AVR32_CANIF_MTXOK_SIZE                                        6
#define AVR32_CANIF_OVRM                                             26
#define AVR32_CANIF_OVRM_MASK                                0x04000000
#define AVR32_CANIF_OVRM_OFFSET                                      26
#define AVR32_CANIF_OVRM_SIZE                                         1
#define AVR32_CANIF_OVRQ                                              2
#define AVR32_CANIF_OVRQ_MASK                                0x00000004
#define AVR32_CANIF_OVRQ_OFFSET                                       2
#define AVR32_CANIF_OVRQ_SIZE                                         1
#define AVR32_CANIF_OVS                                               1
#define AVR32_CANIF_OVS_MASK                                 0x00000002
#define AVR32_CANIF_OVS_OFFSET                                        1
#define AVR32_CANIF_OVS_SIZE                                          1
#define AVR32_CANIF_OVW                                               3
#define AVR32_CANIF_OVW_MASK                                 0x00000008
#define AVR32_CANIF_OVW_OFFSET                                        3
#define AVR32_CANIF_OVW_SIZE                                          1
#define AVR32_CANIF_PARAMETER                                0x00000004
#define AVR32_CANIF_PARAMETER_MASK                           0x3f3f3f3f
#define AVR32_CANIF_PARAMETER_MNCH1                                   0
#define AVR32_CANIF_PARAMETER_MNCH1_MASK                     0x0000003f
#define AVR32_CANIF_PARAMETER_MNCH1_OFFSET                            0
#define AVR32_CANIF_PARAMETER_MNCH1_SIZE                              6
#define AVR32_CANIF_PARAMETER_MNCH2                                   8
#define AVR32_CANIF_PARAMETER_MNCH2_MASK                     0x00003f00
#define AVR32_CANIF_PARAMETER_MNCH2_OFFSET                            8
#define AVR32_CANIF_PARAMETER_MNCH2_SIZE                              6
#define AVR32_CANIF_PARAMETER_MNCH3                                  16
#define AVR32_CANIF_PARAMETER_MNCH3_MASK                     0x003f0000
#define AVR32_CANIF_PARAMETER_MNCH3_OFFSET                           16
#define AVR32_CANIF_PARAMETER_MNCH3_SIZE                              6
#define AVR32_CANIF_PARAMETER_MNCH4                                  24
#define AVR32_CANIF_PARAMETER_MNCH4_MASK                     0x3f000000
#define AVR32_CANIF_PARAMETER_MNCH4_OFFSET                           24
#define AVR32_CANIF_PARAMETER_MNCH4_SIZE                              6
#define AVR32_CANIF_PARAMETER_RESETVALUE                     0x00000010
#define AVR32_CANIF_PHS1                                              8
#define AVR32_CANIF_PHS1_MASK                                0x00000700
#define AVR32_CANIF_PHS1_OFFSET                                       8
#define AVR32_CANIF_PHS1_SIZE                                         3
#define AVR32_CANIF_PHS2                                             11
#define AVR32_CANIF_PHS2_MASK                                0x00003800
#define AVR32_CANIF_PHS2_OFFSET                                      11
#define AVR32_CANIF_PHS2_SIZE                                         3
#define AVR32_CANIF_PRES                                              0
#define AVR32_CANIF_PRES_MASK                                0x0000003f
#define AVR32_CANIF_PRES_OFFSET                                       0
#define AVR32_CANIF_PRES_SIZE                                         6
#define AVR32_CANIF_PRS                                              16
#define AVR32_CANIF_PRS_MASK                                 0x00070000
#define AVR32_CANIF_PRS_OFFSET                                       16
#define AVR32_CANIF_PRS_SIZE                                          3
#define AVR32_CANIF_RAMBASE                                           0
#define AVR32_CANIF_RAMBASE_MASK                             0xffffffff
#define AVR32_CANIF_RAMBASE_OFFSET                                    0
#define AVR32_CANIF_RAMBASE_SIZE                                     32
#define AVR32_CANIF_REC                                               0
#define AVR32_CANIF_REC_MASK                                 0x000000ff
#define AVR32_CANIF_REC_OFFSET                                        0
#define AVR32_CANIF_REC_SIZE                                          8
#define AVR32_CANIF_RS                                                3
#define AVR32_CANIF_RS_MASK                                  0x00000008
#define AVR32_CANIF_RS_OFFSET                                         3
#define AVR32_CANIF_RS_SIZE                                           1
#define AVR32_CANIF_RXOK                                              0
#define AVR32_CANIF_RXOKIM                                            7
#define AVR32_CANIF_RXOKIM_MASK                              0x00000080
#define AVR32_CANIF_RXOKIM_OFFSET                                     7
#define AVR32_CANIF_RXOKIM_SIZE                                       1
#define AVR32_CANIF_RXOK_OFFSET                                       0
#define AVR32_CANIF_SERR                                              4
#define AVR32_CANIF_SERRIM                                            4
#define AVR32_CANIF_SERRIM_MASK                              0x00000010
#define AVR32_CANIF_SERRIM_OFFSET                                     4
#define AVR32_CANIF_SERRIM_SIZE                                       1
#define AVR32_CANIF_SERR_MASK                                0x00000010
#define AVR32_CANIF_SERR_OFFSET                                       4
#define AVR32_CANIF_SERR_SIZE                                         1
#define AVR32_CANIF_SJW                                              19
#define AVR32_CANIF_SJW_MASK                                 0x00180000
#define AVR32_CANIF_SJW_OFFSET                                       19
#define AVR32_CANIF_SJW_SIZE                                          2
#define AVR32_CANIF_SM                                               21
#define AVR32_CANIF_SM_MASK                                  0x00200000
#define AVR32_CANIF_SM_OFFSET                                        21
#define AVR32_CANIF_SM_SIZE                                           1
#define AVR32_CANIF_TEC                                               8
#define AVR32_CANIF_TEC_MASK                                 0x0000ff00
#define AVR32_CANIF_TEC_OFFSET                                        8
#define AVR32_CANIF_TEC_SIZE                                          8
#define AVR32_CANIF_TS                                                2
#define AVR32_CANIF_TS_MASK                                  0x00000004
#define AVR32_CANIF_TS_OFFSET                                         2
#define AVR32_CANIF_TS_SIZE                                           1
#define AVR32_CANIF_TXOKIM                                            8
#define AVR32_CANIF_TXOKIM_MASK                              0x00000100
#define AVR32_CANIF_TXOKIM_OFFSET                                     8
#define AVR32_CANIF_TXOKIM_SIZE                                       1
#define AVR32_CANIF_VARIANT                                          16
#define AVR32_CANIF_VARIANT_MASK                             0x000f0000
#define AVR32_CANIF_VARIANT_OFFSET                                   16
#define AVR32_CANIF_VARIANT_SIZE                                      4
#define AVR32_CANIF_VERSION                                  0x00000000
#define AVR32_CANIF_VERSION_CHNO                                     20
#define AVR32_CANIF_VERSION_CHNO_MASK                        0x00700000
#define AVR32_CANIF_VERSION_CHNO_OFFSET                              20
#define AVR32_CANIF_VERSION_CHNO_SIZE                                 3
#define AVR32_CANIF_VERSION_MASK                             0x3f7f0fff
#define AVR32_CANIF_VERSION_MNCH0                                    24
#define AVR32_CANIF_VERSION_MNCH0_MASK                       0x3f000000
#define AVR32_CANIF_VERSION_MNCH0_OFFSET                             24
#define AVR32_CANIF_VERSION_MNCH0_SIZE                                6
#define AVR32_CANIF_VERSION_OFFSET                                    0
#define AVR32_CANIF_VERSION_RESETVALUE                       0x10200110
#define AVR32_CANIF_VERSION_SIZE                                     12
#define AVR32_CANIF_VERSION_VARIANT                                  16
#define AVR32_CANIF_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_CANIF_VERSION_VARIANT_OFFSET                           16
#define AVR32_CANIF_VERSION_VARIANT_SIZE                              4
#define AVR32_CANIF_VERSION_VERSION                                   0
#define AVR32_CANIF_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_CANIF_VERSION_VERSION_OFFSET                            0
#define AVR32_CANIF_VERSION_VERSION_SIZE                             12
#define AVR32_CANIF_WKEN                                              3
#define AVR32_CANIF_WKEN_MASK                                0x00000008
#define AVR32_CANIF_WKEN_OFFSET                                       3
#define AVR32_CANIF_WKEN_SIZE                                         1
#define AVR32_CANIF_WKUP                                              6
#define AVR32_CANIF_WKUPIM                                            6
#define AVR32_CANIF_WKUPIM_MASK                              0x00000040
#define AVR32_CANIF_WKUPIM_OFFSET                                     6
#define AVR32_CANIF_WKUPIM_SIZE                                       1
#define AVR32_CANIF_WKUP_MASK                                0x00000040
#define AVR32_CANIF_WKUP_OFFSET                                       6
#define AVR32_CANIF_WKUP_SIZE                                         1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_canif_version_t {
    unsigned int                 : 2;
    unsigned int mnch0           : 6;
    unsigned int                 : 1;
    unsigned int chno            : 3;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_canif_version_t;



typedef struct avr32_canif_parameter_t {
    unsigned int                 : 2;
    unsigned int mnch4           : 6;
    unsigned int                 : 2;
    unsigned int mnch3           : 6;
    unsigned int                 : 2;
    unsigned int mnch2           : 6;
    unsigned int                 : 2;
    unsigned int mnch1           : 6;
} avr32_canif_parameter_t;



typedef struct avr32_canif_cancfg_t {
    unsigned int                 : 5;
    unsigned int ovrm            : 1;
    unsigned int cmode           : 2;
    unsigned int                 : 2;
    unsigned int sm              : 1;
    unsigned int sjw             : 2;
    unsigned int prs             : 3;
    unsigned int                 : 2;
    unsigned int phs2            : 3;
    unsigned int phs1            : 3;
    unsigned int                 : 2;
    unsigned int pres            : 6;
} avr32_canif_cancfg_t;



typedef struct avr32_canif_canctrl_t {
    unsigned int                 :28;
    unsigned int wken            : 1;
    unsigned int ovrq            : 1;
    unsigned int cen             : 1;
    unsigned int init            : 1;
} avr32_canif_canctrl_t;



typedef struct avr32_canif_cansr_t {
    unsigned int                 :28;
    unsigned int rs              : 1;
    unsigned int ts              : 1;
    unsigned int ovs             : 1;
    unsigned int ces             : 1;
} avr32_canif_cansr_t;



typedef struct avr32_canif_canfc_t {
    unsigned int                 :14;
    unsigned int emode           : 2;
    unsigned int tec             : 8;
    unsigned int rec             : 8;
} avr32_canif_canfc_t;



typedef struct avr32_canif_canier_t {
    unsigned int                 :23;
    unsigned int txokim          : 1;
    unsigned int rxokim          : 1;
    unsigned int wkupim          : 1;
    unsigned int berrim          : 1;
    unsigned int serrim          : 1;
    unsigned int cerrim          : 1;
    unsigned int ferrim          : 1;
    unsigned int aerrim          : 1;
    unsigned int boffim          : 1;
} avr32_canif_canier_t;



typedef struct avr32_canif_canidr_t {
    unsigned int                 :23;
    unsigned int txokim          : 1;
    unsigned int rxokim          : 1;
    unsigned int wkupim          : 1;
    unsigned int berrim          : 1;
    unsigned int serrim          : 1;
    unsigned int cerrim          : 1;
    unsigned int ferrim          : 1;
    unsigned int aerrim          : 1;
    unsigned int boffim          : 1;
} avr32_canif_canidr_t;



typedef struct avr32_canif_canimr_t {
    unsigned int                 :23;
    unsigned int txokim          : 1;
    unsigned int rxokim          : 1;
    unsigned int wkupim          : 1;
    unsigned int berrim          : 1;
    unsigned int serrim          : 1;
    unsigned int cerrim          : 1;
    unsigned int ferrim          : 1;
    unsigned int aerrim          : 1;
    unsigned int boffim          : 1;
} avr32_canif_canimr_t;



typedef struct avr32_canif_caniscr_t {
    unsigned int                 :10;
    unsigned int lsmob           : 6;
    unsigned int                 : 9;
    unsigned int wkup            : 1;
    unsigned int berr            : 1;
    unsigned int serr            : 1;
    unsigned int cerr            : 1;
    unsigned int ferr            : 1;
    unsigned int aerr            : 1;
    unsigned int boff            : 1;
} avr32_canif_caniscr_t;



typedef struct avr32_canif_canisr_t {
    unsigned int                 :10;
    unsigned int lsmob           : 6;
    unsigned int                 : 9;
    unsigned int wkup            : 1;
    unsigned int berr            : 1;
    unsigned int serr            : 1;
    unsigned int cerr            : 1;
    unsigned int ferr            : 1;
    unsigned int aerr            : 1;
    unsigned int boff            : 1;
} avr32_canif_canisr_t;



typedef struct avr32_canif_mobsch_t {
    unsigned int                 :10;
    unsigned int mtxok           : 6;
    unsigned int                 : 2;
    unsigned int mrxok           : 6;
    unsigned int                 : 2;
    unsigned int mav             : 6;
} avr32_canif_mobsch_t;



typedef struct avr32_canif_mobctrl_t {
    unsigned int                 :26;
    unsigned int am              : 1;
    unsigned int dir             : 1;
    unsigned int dlc             : 4;
} avr32_canif_mobctrl_t;



typedef struct avr32_canif_mobscr_t {
    unsigned int                 :28;
    unsigned int ovw             : 1;
    unsigned int dlcw            : 1;
    unsigned int txok            : 1;
    unsigned int rxok            : 1;
} avr32_canif_mobscr_t;



typedef struct avr32_canif_mobsr_t {
    unsigned int                 :28;
    unsigned int ovw             : 1;
    unsigned int dlcw            : 1;
    unsigned int txok            : 1;
    unsigned int rxok            : 1;
} avr32_canif_mobsr_t;


typedef struct avr32_canif_channel_t {
          unsigned long                  canramb   ;//0x0000
  union {
          unsigned long                  cancfg    ;//0x0004
          avr32_canif_cancfg_t           CANCFG    ;
  };
  union {
          unsigned long                  canctrl   ;//0x0008
          avr32_canif_canctrl_t          CANCTRL   ;
  };
  union {
    const unsigned long                  cansr     ;//0x000c
    const avr32_canif_cansr_t            CANSR     ;
  };
  union {
    const unsigned long                  canfc     ;//0x0010
    const avr32_canif_canfc_t            CANFC     ;
  };
  union {
          unsigned long                  canier    ;//0x0014
          avr32_canif_canier_t           CANIER    ;
  };
  union {
          unsigned long                  canidr    ;//0x0018
          avr32_canif_canidr_t           CANIDR    ;
  };
  union {
    const unsigned long                  canimr    ;//0x001c
    const avr32_canif_canimr_t           CANIMR    ;
  };
  union {
          unsigned long                  caniscr   ;//0x0020
          avr32_canif_caniscr_t          CANISCR   ;
  };
  union {
    const unsigned long                  canisr    ;//0x0024
    const avr32_canif_canisr_t           CANISR    ;
  };
  union {
    const unsigned long                  mobsch    ;//0x0028
    const avr32_canif_mobsch_t           MOBSCH    ;
  };
          unsigned long                  mober     ;//0x002c
          unsigned long                  mobdr     ;//0x0030
    const unsigned long                  mobesr    ;//0x0034
          unsigned long                  mobier    ;//0x0038
          unsigned long                  mobidr    ;//0x003c
    const unsigned long                  mobimr    ;//0x0040
          unsigned long                  mrxiscr   ;//0x0044
    const unsigned long                  mrxisr    ;//0x0048
          unsigned long                  mtxiscr   ;//0x004c
    const unsigned long                  mtxisr    ;//0x0050
  union {
          unsigned long                  mobctrl   ;//0x0054
          avr32_canif_mobctrl_t          MOBCTRL   ;
  };
  union {
          unsigned long                  mobscr    ;//0x0058
          avr32_canif_mobscr_t           MOBSCR    ;
  };
  union {
    const unsigned long                  mobsr     ;//0x005c
    const avr32_canif_mobsr_t            MOBSR     ;
  };
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
} avr32_canif_channel_t;


typedef struct avr32_canif_t {
  union {
    const unsigned long                  version   ;//0x0000
    const avr32_canif_version_t          VERSION   ;
  };
  union {
    const unsigned long                  parameter ;//0x0004
    const avr32_canif_parameter_t        PARAMETER ;
  };
  avr32_canif_channel_t channel[AVR32_CANIF_CAN_NB];//0x8
  avr32_canif_channel_t channel_reserved[5 - AVR32_CANIF_CAN_NB];//Padding
} avr32_canif_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_CANIF_110_H_INCLUDED*/
#endif


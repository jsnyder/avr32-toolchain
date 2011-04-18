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
#ifndef AVR32_AC97C_210_H_INCLUDED
#define AVR32_AC97C_210_H_INCLUDED

#define AVR32_AC97C_H_VERSION 210

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_AC97C_<register>
 - Bitfield mask:   AVR32_AC97C_<register>_<bitfield>
 - Bitfield offset: AVR32_AC97C_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AC97C_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_AC97C_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_AC97C_<bitfield>
 - Bitfield offset: AVR32_AC97C_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AC97C_<bitfield>_SIZE
 - Bitfield values: AVR32_AC97C_<bitfield>_<value name>
 - Bitfield values: AVR32_AC97C_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_AC97C_10_BITS                                  0x00000003
#define AVR32_AC97C_16_BITS                                  0x00000002
#define AVR32_AC97C_18_BITS                                  0x00000001
#define AVR32_AC97C_20_BITS                                  0x00000000
#define AVR32_AC97C_CADDR                                            16
#define AVR32_AC97C_CADDR_MASK                               0x007f0000
#define AVR32_AC97C_CADDR_OFFSET                                     16
#define AVR32_AC97C_CADDR_SIZE                                        7
#define AVR32_AC97C_CAEVT                                             3
#define AVR32_AC97C_CAEVT_MASK                               0x00000008
#define AVR32_AC97C_CAEVT_OFFSET                                      3
#define AVR32_AC97C_CAEVT_SIZE                                        1
#define AVR32_AC97C_CAMR                                     0x0000002c
#define AVR32_AC97C_CAMR_CEM                                         18
#define AVR32_AC97C_CAMR_CEM_MASK                            0x00040000
#define AVR32_AC97C_CAMR_CEM_OFFSET                                  18
#define AVR32_AC97C_CAMR_CEM_SIZE                                     1
#define AVR32_AC97C_CAMR_CEN                                         21
#define AVR32_AC97C_CAMR_CEN_MASK                            0x00200000
#define AVR32_AC97C_CAMR_CEN_OFFSET                                  21
#define AVR32_AC97C_CAMR_CEN_SIZE                                     1
#define AVR32_AC97C_CAMR_DMAEN                                       22
#define AVR32_AC97C_CAMR_DMAEN_MASK                          0x00400000
#define AVR32_AC97C_CAMR_DMAEN_OFFSET                                22
#define AVR32_AC97C_CAMR_DMAEN_SIZE                                   1
#define AVR32_AC97C_CAMR_OVRUN                                        5
#define AVR32_AC97C_CAMR_OVRUN_MASK                          0x00000020
#define AVR32_AC97C_CAMR_OVRUN_OFFSET                                 5
#define AVR32_AC97C_CAMR_OVRUN_SIZE                                   1
#define AVR32_AC97C_CAMR_RXRDY                                        4
#define AVR32_AC97C_CAMR_RXRDY_MASK                          0x00000010
#define AVR32_AC97C_CAMR_RXRDY_OFFSET                                 4
#define AVR32_AC97C_CAMR_RXRDY_SIZE                                   1
#define AVR32_AC97C_CAMR_SIZE                                        16
#define AVR32_AC97C_CAMR_SIZE_10_BITS                        0x00000003
#define AVR32_AC97C_CAMR_SIZE_16_BITS                        0x00000002
#define AVR32_AC97C_CAMR_SIZE_18_BITS                        0x00000001
#define AVR32_AC97C_CAMR_SIZE_20_BITS                        0x00000000
#define AVR32_AC97C_CAMR_SIZE_MASK                           0x00030000
#define AVR32_AC97C_CAMR_SIZE_OFFSET                                 16
#define AVR32_AC97C_CAMR_SIZE_SIZE                                    2
#define AVR32_AC97C_CAMR_TXEMPTY                                      1
#define AVR32_AC97C_CAMR_TXEMPTY_MASK                        0x00000002
#define AVR32_AC97C_CAMR_TXEMPTY_OFFSET                               1
#define AVR32_AC97C_CAMR_TXEMPTY_SIZE                                 1
#define AVR32_AC97C_CAMR_TXRDY                                        0
#define AVR32_AC97C_CAMR_TXRDY_MASK                          0x00000001
#define AVR32_AC97C_CAMR_TXRDY_OFFSET                                 0
#define AVR32_AC97C_CAMR_TXRDY_SIZE                                   1
#define AVR32_AC97C_CAMR_UNRUN                                        2
#define AVR32_AC97C_CAMR_UNRUN_MASK                          0x00000004
#define AVR32_AC97C_CAMR_UNRUN_OFFSET                                 2
#define AVR32_AC97C_CAMR_UNRUN_SIZE                                   1
#define AVR32_AC97C_CARHR                                    0x00000020
#define AVR32_AC97C_CARHR_RDATA                                       0
#define AVR32_AC97C_CARHR_RDATA_MASK                         0x000fffff
#define AVR32_AC97C_CARHR_RDATA_OFFSET                                0
#define AVR32_AC97C_CARHR_RDATA_SIZE                                 20
#define AVR32_AC97C_CASR                                     0x00000028
#define AVR32_AC97C_CASR_OVRUN                                        5
#define AVR32_AC97C_CASR_OVRUN_MASK                          0x00000020
#define AVR32_AC97C_CASR_OVRUN_OFFSET                                 5
#define AVR32_AC97C_CASR_OVRUN_SIZE                                   1
#define AVR32_AC97C_CASR_RXRDY                                        4
#define AVR32_AC97C_CASR_RXRDY_MASK                          0x00000010
#define AVR32_AC97C_CASR_RXRDY_OFFSET                                 4
#define AVR32_AC97C_CASR_RXRDY_SIZE                                   1
#define AVR32_AC97C_CASR_TXEMPTY                                      1
#define AVR32_AC97C_CASR_TXEMPTY_MASK                        0x00000002
#define AVR32_AC97C_CASR_TXEMPTY_OFFSET                               1
#define AVR32_AC97C_CASR_TXEMPTY_SIZE                                 1
#define AVR32_AC97C_CASR_TXRDY                                        0
#define AVR32_AC97C_CASR_TXRDY_MASK                          0x00000001
#define AVR32_AC97C_CASR_TXRDY_OFFSET                                 0
#define AVR32_AC97C_CASR_TXRDY_SIZE                                   1
#define AVR32_AC97C_CASR_UNRUN                                        2
#define AVR32_AC97C_CASR_UNRUN_MASK                          0x00000004
#define AVR32_AC97C_CASR_UNRUN_OFFSET                                 2
#define AVR32_AC97C_CASR_UNRUN_SIZE                                   1
#define AVR32_AC97C_CATHR                                    0x00000024
#define AVR32_AC97C_CATHR_TDATA                                       0
#define AVR32_AC97C_CATHR_TDATA_MASK                         0x000fffff
#define AVR32_AC97C_CATHR_TDATA_OFFSET                                0
#define AVR32_AC97C_CATHR_TDATA_SIZE                                 20
#define AVR32_AC97C_CBEVT                                             4
#define AVR32_AC97C_CBEVT_MASK                               0x00000010
#define AVR32_AC97C_CBEVT_OFFSET                                      4
#define AVR32_AC97C_CBEVT_SIZE                                        1
#define AVR32_AC97C_CBMR                                     0x0000003c
#define AVR32_AC97C_CBMR_CEM                                         18
#define AVR32_AC97C_CBMR_CEM_MASK                            0x00040000
#define AVR32_AC97C_CBMR_CEM_OFFSET                                  18
#define AVR32_AC97C_CBMR_CEM_SIZE                                     1
#define AVR32_AC97C_CBMR_CEN                                         21
#define AVR32_AC97C_CBMR_CEN_MASK                            0x00200000
#define AVR32_AC97C_CBMR_CEN_OFFSET                                  21
#define AVR32_AC97C_CBMR_CEN_SIZE                                     1
#define AVR32_AC97C_CBMR_DMAEN                                       22
#define AVR32_AC97C_CBMR_DMAEN_MASK                          0x00400000
#define AVR32_AC97C_CBMR_DMAEN_OFFSET                                22
#define AVR32_AC97C_CBMR_DMAEN_SIZE                                   1
#define AVR32_AC97C_CBMR_OVRUN                                        5
#define AVR32_AC97C_CBMR_OVRUN_MASK                          0x00000020
#define AVR32_AC97C_CBMR_OVRUN_OFFSET                                 5
#define AVR32_AC97C_CBMR_OVRUN_SIZE                                   1
#define AVR32_AC97C_CBMR_RXRDY                                        4
#define AVR32_AC97C_CBMR_RXRDY_MASK                          0x00000010
#define AVR32_AC97C_CBMR_RXRDY_OFFSET                                 4
#define AVR32_AC97C_CBMR_RXRDY_SIZE                                   1
#define AVR32_AC97C_CBMR_SIZE                                        16
#define AVR32_AC97C_CBMR_SIZE_10_BITS                        0x00000003
#define AVR32_AC97C_CBMR_SIZE_16_BITS                        0x00000002
#define AVR32_AC97C_CBMR_SIZE_18_BITS                        0x00000001
#define AVR32_AC97C_CBMR_SIZE_20_BITS                        0x00000000
#define AVR32_AC97C_CBMR_SIZE_MASK                           0x00030000
#define AVR32_AC97C_CBMR_SIZE_OFFSET                                 16
#define AVR32_AC97C_CBMR_SIZE_SIZE                                    2
#define AVR32_AC97C_CBMR_TXEMPTY                                      1
#define AVR32_AC97C_CBMR_TXEMPTY_MASK                        0x00000002
#define AVR32_AC97C_CBMR_TXEMPTY_OFFSET                               1
#define AVR32_AC97C_CBMR_TXEMPTY_SIZE                                 1
#define AVR32_AC97C_CBMR_TXRDY                                        0
#define AVR32_AC97C_CBMR_TXRDY_MASK                          0x00000001
#define AVR32_AC97C_CBMR_TXRDY_OFFSET                                 0
#define AVR32_AC97C_CBMR_TXRDY_SIZE                                   1
#define AVR32_AC97C_CBMR_UNRUN                                        2
#define AVR32_AC97C_CBMR_UNRUN_MASK                          0x00000004
#define AVR32_AC97C_CBMR_UNRUN_OFFSET                                 2
#define AVR32_AC97C_CBMR_UNRUN_SIZE                                   1
#define AVR32_AC97C_CBRHR                                    0x00000030
#define AVR32_AC97C_CBRHR_RDATA                                       0
#define AVR32_AC97C_CBRHR_RDATA_MASK                         0x000fffff
#define AVR32_AC97C_CBRHR_RDATA_OFFSET                                0
#define AVR32_AC97C_CBRHR_RDATA_SIZE                                 20
#define AVR32_AC97C_CBSR                                     0x00000038
#define AVR32_AC97C_CBSR_OVRUN                                        5
#define AVR32_AC97C_CBSR_OVRUN_MASK                          0x00000020
#define AVR32_AC97C_CBSR_OVRUN_OFFSET                                 5
#define AVR32_AC97C_CBSR_OVRUN_SIZE                                   1
#define AVR32_AC97C_CBSR_RXRDY                                        4
#define AVR32_AC97C_CBSR_RXRDY_MASK                          0x00000010
#define AVR32_AC97C_CBSR_RXRDY_OFFSET                                 4
#define AVR32_AC97C_CBSR_RXRDY_SIZE                                   1
#define AVR32_AC97C_CBSR_TXEMPTY                                      1
#define AVR32_AC97C_CBSR_TXEMPTY_MASK                        0x00000002
#define AVR32_AC97C_CBSR_TXEMPTY_OFFSET                               1
#define AVR32_AC97C_CBSR_TXEMPTY_SIZE                                 1
#define AVR32_AC97C_CBSR_TXRDY                                        0
#define AVR32_AC97C_CBSR_TXRDY_MASK                          0x00000001
#define AVR32_AC97C_CBSR_TXRDY_OFFSET                                 0
#define AVR32_AC97C_CBSR_TXRDY_SIZE                                   1
#define AVR32_AC97C_CBSR_UNRUN                                        2
#define AVR32_AC97C_CBSR_UNRUN_MASK                          0x00000004
#define AVR32_AC97C_CBSR_UNRUN_OFFSET                                 2
#define AVR32_AC97C_CBSR_UNRUN_SIZE                                   1
#define AVR32_AC97C_CBTHR                                    0x00000034
#define AVR32_AC97C_CBTHR_TDATA                                       0
#define AVR32_AC97C_CBTHR_TDATA_MASK                         0x000fffff
#define AVR32_AC97C_CBTHR_TDATA_OFFSET                                0
#define AVR32_AC97C_CBTHR_TDATA_SIZE                                 20
#define AVR32_AC97C_CDATA                                             0
#define AVR32_AC97C_CDATA_MASK                               0x0000ffff
#define AVR32_AC97C_CDATA_OFFSET                                      0
#define AVR32_AC97C_CDATA_SIZE                                       16
#define AVR32_AC97C_CEM                                              18
#define AVR32_AC97C_CEM_MASK                                 0x00040000
#define AVR32_AC97C_CEM_OFFSET                                       18
#define AVR32_AC97C_CEM_SIZE                                          1
#define AVR32_AC97C_CEN                                              21
#define AVR32_AC97C_CEN_MASK                                 0x00200000
#define AVR32_AC97C_CEN_OFFSET                                       21
#define AVR32_AC97C_CEN_SIZE                                          1
#define AVR32_AC97C_CHANNELA                                 0x00000001
#define AVR32_AC97C_CHANNELB                                 0x00000002
#define AVR32_AC97C_CHID10                                           21
#define AVR32_AC97C_CHID10_CHANNELA                          0x00000001
#define AVR32_AC97C_CHID10_CHANNELB                          0x00000002
#define AVR32_AC97C_CHID10_MASK                              0x00e00000
#define AVR32_AC97C_CHID10_NONE                              0x00000000
#define AVR32_AC97C_CHID10_OFFSET                                    21
#define AVR32_AC97C_CHID10_SIZE                                       3
#define AVR32_AC97C_CHID11                                           24
#define AVR32_AC97C_CHID11_CHANNELA                          0x00000001
#define AVR32_AC97C_CHID11_CHANNELB                          0x00000002
#define AVR32_AC97C_CHID11_MASK                              0x07000000
#define AVR32_AC97C_CHID11_NONE                              0x00000000
#define AVR32_AC97C_CHID11_OFFSET                                    24
#define AVR32_AC97C_CHID11_SIZE                                       3
#define AVR32_AC97C_CHID12                                           27
#define AVR32_AC97C_CHID12_CHANNELA                          0x00000001
#define AVR32_AC97C_CHID12_CHANNELB                          0x00000002
#define AVR32_AC97C_CHID12_MASK                              0x38000000
#define AVR32_AC97C_CHID12_NONE                              0x00000000
#define AVR32_AC97C_CHID12_OFFSET                                    27
#define AVR32_AC97C_CHID12_SIZE                                       3
#define AVR32_AC97C_CHID3                                             0
#define AVR32_AC97C_CHID3_CHANNELA                           0x00000001
#define AVR32_AC97C_CHID3_CHANNELB                           0x00000002
#define AVR32_AC97C_CHID3_MASK                               0x00000007
#define AVR32_AC97C_CHID3_NONE                               0x00000000
#define AVR32_AC97C_CHID3_OFFSET                                      0
#define AVR32_AC97C_CHID3_SIZE                                        3
#define AVR32_AC97C_CHID4                                             3
#define AVR32_AC97C_CHID4_CHANNELA                           0x00000001
#define AVR32_AC97C_CHID4_CHANNELB                           0x00000002
#define AVR32_AC97C_CHID4_MASK                               0x00000038
#define AVR32_AC97C_CHID4_NONE                               0x00000000
#define AVR32_AC97C_CHID4_OFFSET                                      3
#define AVR32_AC97C_CHID4_SIZE                                        3
#define AVR32_AC97C_CHID5                                             6
#define AVR32_AC97C_CHID5_CHANNELA                           0x00000001
#define AVR32_AC97C_CHID5_CHANNELB                           0x00000002
#define AVR32_AC97C_CHID5_MASK                               0x000001c0
#define AVR32_AC97C_CHID5_NONE                               0x00000000
#define AVR32_AC97C_CHID5_OFFSET                                      6
#define AVR32_AC97C_CHID5_SIZE                                        3
#define AVR32_AC97C_CHID6                                             9
#define AVR32_AC97C_CHID6_CHANNELA                           0x00000001
#define AVR32_AC97C_CHID6_CHANNELB                           0x00000002
#define AVR32_AC97C_CHID6_MASK                               0x00000e00
#define AVR32_AC97C_CHID6_NONE                               0x00000000
#define AVR32_AC97C_CHID6_OFFSET                                      9
#define AVR32_AC97C_CHID6_SIZE                                        3
#define AVR32_AC97C_CHID7                                            12
#define AVR32_AC97C_CHID7_CHANNELA                           0x00000001
#define AVR32_AC97C_CHID7_CHANNELB                           0x00000002
#define AVR32_AC97C_CHID7_MASK                               0x00007000
#define AVR32_AC97C_CHID7_NONE                               0x00000000
#define AVR32_AC97C_CHID7_OFFSET                                     12
#define AVR32_AC97C_CHID7_SIZE                                        3
#define AVR32_AC97C_CHID8                                            15
#define AVR32_AC97C_CHID8_CHANNELA                           0x00000001
#define AVR32_AC97C_CHID8_CHANNELB                           0x00000002
#define AVR32_AC97C_CHID8_MASK                               0x00038000
#define AVR32_AC97C_CHID8_NONE                               0x00000000
#define AVR32_AC97C_CHID8_OFFSET                                     15
#define AVR32_AC97C_CHID8_SIZE                                        3
#define AVR32_AC97C_CHID9                                            18
#define AVR32_AC97C_CHID9_CHANNELA                           0x00000001
#define AVR32_AC97C_CHID9_CHANNELB                           0x00000002
#define AVR32_AC97C_CHID9_MASK                               0x001c0000
#define AVR32_AC97C_CHID9_NONE                               0x00000000
#define AVR32_AC97C_CHID9_OFFSET                                     18
#define AVR32_AC97C_CHID9_SIZE                                        3
#define AVR32_AC97C_COEVT                                             2
#define AVR32_AC97C_COEVT_MASK                               0x00000004
#define AVR32_AC97C_COEVT_OFFSET                                      2
#define AVR32_AC97C_COEVT_SIZE                                        1
#define AVR32_AC97C_COMR                                     0x0000004c
#define AVR32_AC97C_COMR_OVRUN                                        5
#define AVR32_AC97C_COMR_OVRUN_MASK                          0x00000020
#define AVR32_AC97C_COMR_OVRUN_OFFSET                                 5
#define AVR32_AC97C_COMR_OVRUN_SIZE                                   1
#define AVR32_AC97C_COMR_RXRDY                                        4
#define AVR32_AC97C_COMR_RXRDY_MASK                          0x00000010
#define AVR32_AC97C_COMR_RXRDY_OFFSET                                 4
#define AVR32_AC97C_COMR_RXRDY_SIZE                                   1
#define AVR32_AC97C_COMR_TXEMPTY                                      1
#define AVR32_AC97C_COMR_TXEMPTY_MASK                        0x00000002
#define AVR32_AC97C_COMR_TXEMPTY_OFFSET                               1
#define AVR32_AC97C_COMR_TXEMPTY_SIZE                                 1
#define AVR32_AC97C_COMR_TXRDY                                        0
#define AVR32_AC97C_COMR_TXRDY_MASK                          0x00000001
#define AVR32_AC97C_COMR_TXRDY_OFFSET                                 0
#define AVR32_AC97C_COMR_TXRDY_SIZE                                   1
#define AVR32_AC97C_CORHR                                    0x00000040
#define AVR32_AC97C_CORHR_SDATA                                       0
#define AVR32_AC97C_CORHR_SDATA_MASK                         0x0000ffff
#define AVR32_AC97C_CORHR_SDATA_OFFSET                                0
#define AVR32_AC97C_CORHR_SDATA_SIZE                                 16
#define AVR32_AC97C_COSR                                     0x00000048
#define AVR32_AC97C_COSR_OVRUN                                        5
#define AVR32_AC97C_COSR_OVRUN_MASK                          0x00000020
#define AVR32_AC97C_COSR_OVRUN_OFFSET                                 5
#define AVR32_AC97C_COSR_OVRUN_SIZE                                   1
#define AVR32_AC97C_COSR_RXRDY                                        4
#define AVR32_AC97C_COSR_RXRDY_MASK                          0x00000010
#define AVR32_AC97C_COSR_RXRDY_OFFSET                                 4
#define AVR32_AC97C_COSR_RXRDY_SIZE                                   1
#define AVR32_AC97C_COSR_TXEMPTY                                      1
#define AVR32_AC97C_COSR_TXEMPTY_MASK                        0x00000002
#define AVR32_AC97C_COSR_TXEMPTY_OFFSET                               1
#define AVR32_AC97C_COSR_TXEMPTY_SIZE                                 1
#define AVR32_AC97C_COSR_TXRDY                                        0
#define AVR32_AC97C_COSR_TXRDY_MASK                          0x00000001
#define AVR32_AC97C_COSR_TXRDY_OFFSET                                 0
#define AVR32_AC97C_COSR_TXRDY_SIZE                                   1
#define AVR32_AC97C_COTHR                                    0x00000044
#define AVR32_AC97C_COTHR_CADDR                                      16
#define AVR32_AC97C_COTHR_CADDR_MASK                         0x007f0000
#define AVR32_AC97C_COTHR_CADDR_OFFSET                               16
#define AVR32_AC97C_COTHR_CADDR_SIZE                                  7
#define AVR32_AC97C_COTHR_CDATA                                       0
#define AVR32_AC97C_COTHR_CDATA_MASK                         0x0000ffff
#define AVR32_AC97C_COTHR_CDATA_OFFSET                                0
#define AVR32_AC97C_COTHR_CDATA_SIZE                                 16
#define AVR32_AC97C_COTHR_READ                                       23
#define AVR32_AC97C_COTHR_READ_MASK                          0x00800000
#define AVR32_AC97C_COTHR_READ_OFFSET                                23
#define AVR32_AC97C_COTHR_READ_SIZE                                   1
#define AVR32_AC97C_DMAEN                                            22
#define AVR32_AC97C_DMAEN_MASK                               0x00400000
#define AVR32_AC97C_DMAEN_OFFSET                                     22
#define AVR32_AC97C_DMAEN_SIZE                                        1
#define AVR32_AC97C_ENA                                               0
#define AVR32_AC97C_ENA_MASK                                 0x00000001
#define AVR32_AC97C_ENA_OFFSET                                        0
#define AVR32_AC97C_ENA_SIZE                                          1
#define AVR32_AC97C_ICA                                      0x00000010
#define AVR32_AC97C_ICA_CHID10                                       21
#define AVR32_AC97C_ICA_CHID10_CHANNELA                      0x00000001
#define AVR32_AC97C_ICA_CHID10_CHANNELB                      0x00000002
#define AVR32_AC97C_ICA_CHID10_MASK                          0x00e00000
#define AVR32_AC97C_ICA_CHID10_NONE                          0x00000000
#define AVR32_AC97C_ICA_CHID10_OFFSET                                21
#define AVR32_AC97C_ICA_CHID10_SIZE                                   3
#define AVR32_AC97C_ICA_CHID11                                       24
#define AVR32_AC97C_ICA_CHID11_CHANNELA                      0x00000001
#define AVR32_AC97C_ICA_CHID11_CHANNELB                      0x00000002
#define AVR32_AC97C_ICA_CHID11_MASK                          0x07000000
#define AVR32_AC97C_ICA_CHID11_NONE                          0x00000000
#define AVR32_AC97C_ICA_CHID11_OFFSET                                24
#define AVR32_AC97C_ICA_CHID11_SIZE                                   3
#define AVR32_AC97C_ICA_CHID12                                       27
#define AVR32_AC97C_ICA_CHID12_CHANNELA                      0x00000001
#define AVR32_AC97C_ICA_CHID12_CHANNELB                      0x00000002
#define AVR32_AC97C_ICA_CHID12_MASK                          0x38000000
#define AVR32_AC97C_ICA_CHID12_NONE                          0x00000000
#define AVR32_AC97C_ICA_CHID12_OFFSET                                27
#define AVR32_AC97C_ICA_CHID12_SIZE                                   3
#define AVR32_AC97C_ICA_CHID3                                         0
#define AVR32_AC97C_ICA_CHID3_CHANNELA                       0x00000001
#define AVR32_AC97C_ICA_CHID3_CHANNELB                       0x00000002
#define AVR32_AC97C_ICA_CHID3_MASK                           0x00000007
#define AVR32_AC97C_ICA_CHID3_NONE                           0x00000000
#define AVR32_AC97C_ICA_CHID3_OFFSET                                  0
#define AVR32_AC97C_ICA_CHID3_SIZE                                    3
#define AVR32_AC97C_ICA_CHID4                                         3
#define AVR32_AC97C_ICA_CHID4_CHANNELA                       0x00000001
#define AVR32_AC97C_ICA_CHID4_CHANNELB                       0x00000002
#define AVR32_AC97C_ICA_CHID4_MASK                           0x00000038
#define AVR32_AC97C_ICA_CHID4_NONE                           0x00000000
#define AVR32_AC97C_ICA_CHID4_OFFSET                                  3
#define AVR32_AC97C_ICA_CHID4_SIZE                                    3
#define AVR32_AC97C_ICA_CHID5                                         6
#define AVR32_AC97C_ICA_CHID5_CHANNELA                       0x00000001
#define AVR32_AC97C_ICA_CHID5_CHANNELB                       0x00000002
#define AVR32_AC97C_ICA_CHID5_MASK                           0x000001c0
#define AVR32_AC97C_ICA_CHID5_NONE                           0x00000000
#define AVR32_AC97C_ICA_CHID5_OFFSET                                  6
#define AVR32_AC97C_ICA_CHID5_SIZE                                    3
#define AVR32_AC97C_ICA_CHID6                                         9
#define AVR32_AC97C_ICA_CHID6_CHANNELA                       0x00000001
#define AVR32_AC97C_ICA_CHID6_CHANNELB                       0x00000002
#define AVR32_AC97C_ICA_CHID6_MASK                           0x00000e00
#define AVR32_AC97C_ICA_CHID6_NONE                           0x00000000
#define AVR32_AC97C_ICA_CHID6_OFFSET                                  9
#define AVR32_AC97C_ICA_CHID6_SIZE                                    3
#define AVR32_AC97C_ICA_CHID7                                        12
#define AVR32_AC97C_ICA_CHID7_CHANNELA                       0x00000001
#define AVR32_AC97C_ICA_CHID7_CHANNELB                       0x00000002
#define AVR32_AC97C_ICA_CHID7_MASK                           0x00007000
#define AVR32_AC97C_ICA_CHID7_NONE                           0x00000000
#define AVR32_AC97C_ICA_CHID7_OFFSET                                 12
#define AVR32_AC97C_ICA_CHID7_SIZE                                    3
#define AVR32_AC97C_ICA_CHID8                                        15
#define AVR32_AC97C_ICA_CHID8_CHANNELA                       0x00000001
#define AVR32_AC97C_ICA_CHID8_CHANNELB                       0x00000002
#define AVR32_AC97C_ICA_CHID8_MASK                           0x00038000
#define AVR32_AC97C_ICA_CHID8_NONE                           0x00000000
#define AVR32_AC97C_ICA_CHID8_OFFSET                                 15
#define AVR32_AC97C_ICA_CHID8_SIZE                                    3
#define AVR32_AC97C_ICA_CHID9                                        18
#define AVR32_AC97C_ICA_CHID9_CHANNELA                       0x00000001
#define AVR32_AC97C_ICA_CHID9_CHANNELB                       0x00000002
#define AVR32_AC97C_ICA_CHID9_MASK                           0x001c0000
#define AVR32_AC97C_ICA_CHID9_NONE                           0x00000000
#define AVR32_AC97C_ICA_CHID9_OFFSET                                 18
#define AVR32_AC97C_ICA_CHID9_SIZE                                    3
#define AVR32_AC97C_IDR                                      0x00000058
#define AVR32_AC97C_IDR_CAEVT                                         3
#define AVR32_AC97C_IDR_CAEVT_MASK                           0x00000008
#define AVR32_AC97C_IDR_CAEVT_OFFSET                                  3
#define AVR32_AC97C_IDR_CAEVT_SIZE                                    1
#define AVR32_AC97C_IDR_CBEVT                                         4
#define AVR32_AC97C_IDR_CBEVT_MASK                           0x00000010
#define AVR32_AC97C_IDR_CBEVT_OFFSET                                  4
#define AVR32_AC97C_IDR_CBEVT_SIZE                                    1
#define AVR32_AC97C_IDR_COEVT                                         2
#define AVR32_AC97C_IDR_COEVT_MASK                           0x00000004
#define AVR32_AC97C_IDR_COEVT_OFFSET                                  2
#define AVR32_AC97C_IDR_COEVT_SIZE                                    1
#define AVR32_AC97C_IDR_SOF                                           0
#define AVR32_AC97C_IDR_SOF_MASK                             0x00000001
#define AVR32_AC97C_IDR_SOF_OFFSET                                    0
#define AVR32_AC97C_IDR_SOF_SIZE                                      1
#define AVR32_AC97C_IDR_WKUP                                          1
#define AVR32_AC97C_IDR_WKUP_MASK                            0x00000002
#define AVR32_AC97C_IDR_WKUP_OFFSET                                   1
#define AVR32_AC97C_IDR_WKUP_SIZE                                     1
#define AVR32_AC97C_IER                                      0x00000054
#define AVR32_AC97C_IER_CAEVT                                         3
#define AVR32_AC97C_IER_CAEVT_MASK                           0x00000008
#define AVR32_AC97C_IER_CAEVT_OFFSET                                  3
#define AVR32_AC97C_IER_CAEVT_SIZE                                    1
#define AVR32_AC97C_IER_CBEVT                                         4
#define AVR32_AC97C_IER_CBEVT_MASK                           0x00000010
#define AVR32_AC97C_IER_CBEVT_OFFSET                                  4
#define AVR32_AC97C_IER_CBEVT_SIZE                                    1
#define AVR32_AC97C_IER_COEVT                                         2
#define AVR32_AC97C_IER_COEVT_MASK                           0x00000004
#define AVR32_AC97C_IER_COEVT_OFFSET                                  2
#define AVR32_AC97C_IER_COEVT_SIZE                                    1
#define AVR32_AC97C_IER_SOF                                           0
#define AVR32_AC97C_IER_SOF_MASK                             0x00000001
#define AVR32_AC97C_IER_SOF_OFFSET                                    0
#define AVR32_AC97C_IER_SOF_SIZE                                      1
#define AVR32_AC97C_IER_WKUP                                          1
#define AVR32_AC97C_IER_WKUP_MASK                            0x00000002
#define AVR32_AC97C_IER_WKUP_OFFSET                                   1
#define AVR32_AC97C_IER_WKUP_SIZE                                     1
#define AVR32_AC97C_IMR                                      0x0000005c
#define AVR32_AC97C_IMR_CAEVT                                         3
#define AVR32_AC97C_IMR_CAEVT_MASK                           0x00000008
#define AVR32_AC97C_IMR_CAEVT_OFFSET                                  3
#define AVR32_AC97C_IMR_CAEVT_SIZE                                    1
#define AVR32_AC97C_IMR_CBEVT                                         4
#define AVR32_AC97C_IMR_CBEVT_MASK                           0x00000010
#define AVR32_AC97C_IMR_CBEVT_OFFSET                                  4
#define AVR32_AC97C_IMR_CBEVT_SIZE                                    1
#define AVR32_AC97C_IMR_COEVT                                         2
#define AVR32_AC97C_IMR_COEVT_MASK                           0x00000004
#define AVR32_AC97C_IMR_COEVT_OFFSET                                  2
#define AVR32_AC97C_IMR_COEVT_SIZE                                    1
#define AVR32_AC97C_IMR_SOF                                           0
#define AVR32_AC97C_IMR_SOF_MASK                             0x00000001
#define AVR32_AC97C_IMR_SOF_OFFSET                                    0
#define AVR32_AC97C_IMR_SOF_SIZE                                      1
#define AVR32_AC97C_IMR_WKUP                                          1
#define AVR32_AC97C_IMR_WKUP_MASK                            0x00000002
#define AVR32_AC97C_IMR_WKUP_OFFSET                                   1
#define AVR32_AC97C_IMR_WKUP_SIZE                                     1
#define AVR32_AC97C_MR                                       0x00000008
#define AVR32_AC97C_MR_ENA                                            0
#define AVR32_AC97C_MR_ENA_MASK                              0x00000001
#define AVR32_AC97C_MR_ENA_OFFSET                                     0
#define AVR32_AC97C_MR_ENA_SIZE                                       1
#define AVR32_AC97C_MR_VRA                                            2
#define AVR32_AC97C_MR_VRA_MASK                              0x00000004
#define AVR32_AC97C_MR_VRA_OFFSET                                     2
#define AVR32_AC97C_MR_VRA_SIZE                                       1
#define AVR32_AC97C_MR_WRST                                           1
#define AVR32_AC97C_MR_WRST_MASK                             0x00000002
#define AVR32_AC97C_MR_WRST_OFFSET                                    1
#define AVR32_AC97C_MR_WRST_SIZE                                      1
#define AVR32_AC97C_NONE                                     0x00000000
#define AVR32_AC97C_OCA                                      0x00000014
#define AVR32_AC97C_OCA_CHID10                                       21
#define AVR32_AC97C_OCA_CHID10_CHANNELA                      0x00000001
#define AVR32_AC97C_OCA_CHID10_CHANNELB                      0x00000002
#define AVR32_AC97C_OCA_CHID10_MASK                          0x00e00000
#define AVR32_AC97C_OCA_CHID10_NONE                          0x00000000
#define AVR32_AC97C_OCA_CHID10_OFFSET                                21
#define AVR32_AC97C_OCA_CHID10_SIZE                                   3
#define AVR32_AC97C_OCA_CHID11                                       24
#define AVR32_AC97C_OCA_CHID11_CHANNELA                      0x00000001
#define AVR32_AC97C_OCA_CHID11_CHANNELB                      0x00000002
#define AVR32_AC97C_OCA_CHID11_MASK                          0x07000000
#define AVR32_AC97C_OCA_CHID11_NONE                          0x00000000
#define AVR32_AC97C_OCA_CHID11_OFFSET                                24
#define AVR32_AC97C_OCA_CHID11_SIZE                                   3
#define AVR32_AC97C_OCA_CHID12                                       27
#define AVR32_AC97C_OCA_CHID12_CHANNELA                      0x00000001
#define AVR32_AC97C_OCA_CHID12_CHANNELB                      0x00000002
#define AVR32_AC97C_OCA_CHID12_MASK                          0x38000000
#define AVR32_AC97C_OCA_CHID12_NONE                          0x00000000
#define AVR32_AC97C_OCA_CHID12_OFFSET                                27
#define AVR32_AC97C_OCA_CHID12_SIZE                                   3
#define AVR32_AC97C_OCA_CHID3                                         0
#define AVR32_AC97C_OCA_CHID3_CHANNELA                       0x00000001
#define AVR32_AC97C_OCA_CHID3_CHANNELB                       0x00000002
#define AVR32_AC97C_OCA_CHID3_MASK                           0x00000007
#define AVR32_AC97C_OCA_CHID3_NONE                           0x00000000
#define AVR32_AC97C_OCA_CHID3_OFFSET                                  0
#define AVR32_AC97C_OCA_CHID3_SIZE                                    3
#define AVR32_AC97C_OCA_CHID4                                         3
#define AVR32_AC97C_OCA_CHID4_CHANNELA                       0x00000001
#define AVR32_AC97C_OCA_CHID4_CHANNELB                       0x00000002
#define AVR32_AC97C_OCA_CHID4_MASK                           0x00000038
#define AVR32_AC97C_OCA_CHID4_NONE                           0x00000000
#define AVR32_AC97C_OCA_CHID4_OFFSET                                  3
#define AVR32_AC97C_OCA_CHID4_SIZE                                    3
#define AVR32_AC97C_OCA_CHID5                                         6
#define AVR32_AC97C_OCA_CHID5_CHANNELA                       0x00000001
#define AVR32_AC97C_OCA_CHID5_CHANNELB                       0x00000002
#define AVR32_AC97C_OCA_CHID5_MASK                           0x000001c0
#define AVR32_AC97C_OCA_CHID5_NONE                           0x00000000
#define AVR32_AC97C_OCA_CHID5_OFFSET                                  6
#define AVR32_AC97C_OCA_CHID5_SIZE                                    3
#define AVR32_AC97C_OCA_CHID6                                         9
#define AVR32_AC97C_OCA_CHID6_CHANNELA                       0x00000001
#define AVR32_AC97C_OCA_CHID6_CHANNELB                       0x00000002
#define AVR32_AC97C_OCA_CHID6_MASK                           0x00000e00
#define AVR32_AC97C_OCA_CHID6_NONE                           0x00000000
#define AVR32_AC97C_OCA_CHID6_OFFSET                                  9
#define AVR32_AC97C_OCA_CHID6_SIZE                                    3
#define AVR32_AC97C_OCA_CHID7                                        12
#define AVR32_AC97C_OCA_CHID7_CHANNELA                       0x00000001
#define AVR32_AC97C_OCA_CHID7_CHANNELB                       0x00000002
#define AVR32_AC97C_OCA_CHID7_MASK                           0x00007000
#define AVR32_AC97C_OCA_CHID7_NONE                           0x00000000
#define AVR32_AC97C_OCA_CHID7_OFFSET                                 12
#define AVR32_AC97C_OCA_CHID7_SIZE                                    3
#define AVR32_AC97C_OCA_CHID8                                        15
#define AVR32_AC97C_OCA_CHID8_CHANNELA                       0x00000001
#define AVR32_AC97C_OCA_CHID8_CHANNELB                       0x00000002
#define AVR32_AC97C_OCA_CHID8_MASK                           0x00038000
#define AVR32_AC97C_OCA_CHID8_NONE                           0x00000000
#define AVR32_AC97C_OCA_CHID8_OFFSET                                 15
#define AVR32_AC97C_OCA_CHID8_SIZE                                    3
#define AVR32_AC97C_OCA_CHID9                                        18
#define AVR32_AC97C_OCA_CHID9_CHANNELA                       0x00000001
#define AVR32_AC97C_OCA_CHID9_CHANNELB                       0x00000002
#define AVR32_AC97C_OCA_CHID9_MASK                           0x001c0000
#define AVR32_AC97C_OCA_CHID9_NONE                           0x00000000
#define AVR32_AC97C_OCA_CHID9_OFFSET                                 18
#define AVR32_AC97C_OCA_CHID9_SIZE                                    3
#define AVR32_AC97C_OVRUN                                             5
#define AVR32_AC97C_OVRUN_MASK                               0x00000020
#define AVR32_AC97C_OVRUN_OFFSET                                      5
#define AVR32_AC97C_OVRUN_SIZE                                        1
#define AVR32_AC97C_RDATA                                             0
#define AVR32_AC97C_RDATA_MASK                               0x000fffff
#define AVR32_AC97C_RDATA_OFFSET                                      0
#define AVR32_AC97C_RDATA_SIZE                                       20
#define AVR32_AC97C_READ                                             23
#define AVR32_AC97C_READ_MASK                                0x00800000
#define AVR32_AC97C_READ_OFFSET                                      23
#define AVR32_AC97C_READ_SIZE                                         1
#define AVR32_AC97C_RXRDY                                             4
#define AVR32_AC97C_RXRDY_MASK                               0x00000010
#define AVR32_AC97C_RXRDY_OFFSET                                      4
#define AVR32_AC97C_RXRDY_SIZE                                        1
#define AVR32_AC97C_SDATA                                             0
#define AVR32_AC97C_SDATA_MASK                               0x0000ffff
#define AVR32_AC97C_SDATA_OFFSET                                      0
#define AVR32_AC97C_SDATA_SIZE                                       16
#define AVR32_AC97C_SIZE                                             16
#define AVR32_AC97C_SIZE_10_BITS                             0x00000003
#define AVR32_AC97C_SIZE_16_BITS                             0x00000002
#define AVR32_AC97C_SIZE_18_BITS                             0x00000001
#define AVR32_AC97C_SIZE_20_BITS                             0x00000000
#define AVR32_AC97C_SIZE_MASK                                0x00030000
#define AVR32_AC97C_SIZE_OFFSET                                      16
#define AVR32_AC97C_SIZE_SIZE                                         2
#define AVR32_AC97C_SOF                                               0
#define AVR32_AC97C_SOF_MASK                                 0x00000001
#define AVR32_AC97C_SOF_OFFSET                                        0
#define AVR32_AC97C_SOF_SIZE                                          1
#define AVR32_AC97C_SR                                       0x00000050
#define AVR32_AC97C_SR_CAEVT                                          3
#define AVR32_AC97C_SR_CAEVT_MASK                            0x00000008
#define AVR32_AC97C_SR_CAEVT_OFFSET                                   3
#define AVR32_AC97C_SR_CAEVT_SIZE                                     1
#define AVR32_AC97C_SR_CBEVT                                          4
#define AVR32_AC97C_SR_CBEVT_MASK                            0x00000010
#define AVR32_AC97C_SR_CBEVT_OFFSET                                   4
#define AVR32_AC97C_SR_CBEVT_SIZE                                     1
#define AVR32_AC97C_SR_COEVT                                          2
#define AVR32_AC97C_SR_COEVT_MASK                            0x00000004
#define AVR32_AC97C_SR_COEVT_OFFSET                                   2
#define AVR32_AC97C_SR_COEVT_SIZE                                     1
#define AVR32_AC97C_SR_SOF                                            0
#define AVR32_AC97C_SR_SOF_MASK                              0x00000001
#define AVR32_AC97C_SR_SOF_OFFSET                                     0
#define AVR32_AC97C_SR_SOF_SIZE                                       1
#define AVR32_AC97C_SR_WKUP                                           1
#define AVR32_AC97C_SR_WKUP_MASK                             0x00000002
#define AVR32_AC97C_SR_WKUP_OFFSET                                    1
#define AVR32_AC97C_SR_WKUP_SIZE                                      1
#define AVR32_AC97C_TDATA                                             0
#define AVR32_AC97C_TDATA_MASK                               0x000fffff
#define AVR32_AC97C_TDATA_OFFSET                                      0
#define AVR32_AC97C_TDATA_SIZE                                       20
#define AVR32_AC97C_TXEMPTY                                           1
#define AVR32_AC97C_TXEMPTY_MASK                             0x00000002
#define AVR32_AC97C_TXEMPTY_OFFSET                                    1
#define AVR32_AC97C_TXEMPTY_SIZE                                      1
#define AVR32_AC97C_TXRDY                                             0
#define AVR32_AC97C_TXRDY_MASK                               0x00000001
#define AVR32_AC97C_TXRDY_OFFSET                                      0
#define AVR32_AC97C_TXRDY_SIZE                                        1
#define AVR32_AC97C_UNRUN                                             2
#define AVR32_AC97C_UNRUN_MASK                               0x00000004
#define AVR32_AC97C_UNRUN_OFFSET                                      2
#define AVR32_AC97C_UNRUN_SIZE                                        1
#define AVR32_AC97C_VRA                                               2
#define AVR32_AC97C_VRA_MASK                                 0x00000004
#define AVR32_AC97C_VRA_OFFSET                                        2
#define AVR32_AC97C_VRA_SIZE                                          1
#define AVR32_AC97C_WKUP                                              1
#define AVR32_AC97C_WKUP_MASK                                0x00000002
#define AVR32_AC97C_WKUP_OFFSET                                       1
#define AVR32_AC97C_WKUP_SIZE                                         1
#define AVR32_AC97C_WRST                                              1
#define AVR32_AC97C_WRST_MASK                                0x00000002
#define AVR32_AC97C_WRST_OFFSET                                       1
#define AVR32_AC97C_WRST_SIZE                                         1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_ac97c_mr_t {
    unsigned int                 :29;
    unsigned int vra             : 1;
    unsigned int wrst            : 1;
    unsigned int ena             : 1;
} avr32_ac97c_mr_t;



typedef struct avr32_ac97c_ica_t {
    unsigned int                 : 2;
    unsigned int chid12          : 3;
    unsigned int chid11          : 3;
    unsigned int chid10          : 3;
    unsigned int chid9           : 3;
    unsigned int chid8           : 3;
    unsigned int chid7           : 3;
    unsigned int chid6           : 3;
    unsigned int chid5           : 3;
    unsigned int chid4           : 3;
    unsigned int chid3           : 3;
} avr32_ac97c_ica_t;



typedef struct avr32_ac97c_oca_t {
    unsigned int                 : 2;
    unsigned int chid12          : 3;
    unsigned int chid11          : 3;
    unsigned int chid10          : 3;
    unsigned int chid9           : 3;
    unsigned int chid8           : 3;
    unsigned int chid7           : 3;
    unsigned int chid6           : 3;
    unsigned int chid5           : 3;
    unsigned int chid4           : 3;
    unsigned int chid3           : 3;
} avr32_ac97c_oca_t;



typedef struct avr32_ac97c_carhr_t {
    unsigned int                 :12;
    unsigned int rdata           :20;
} avr32_ac97c_carhr_t;



typedef struct avr32_ac97c_cathr_t {
    unsigned int                 :12;
    unsigned int tdata           :20;
} avr32_ac97c_cathr_t;



typedef struct avr32_ac97c_casr_t {
    unsigned int                 :26;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 1;
    unsigned int unrun           : 1;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_ac97c_casr_t;



typedef struct avr32_ac97c_camr_t {
    unsigned int                 : 9;
    unsigned int dmaen           : 1;
    unsigned int cen             : 1;
    unsigned int                 : 2;
    unsigned int cem             : 1;
    unsigned int size            : 2;
    unsigned int                 :10;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 1;
    unsigned int unrun           : 1;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_ac97c_camr_t;



typedef struct avr32_ac97c_cbrhr_t {
    unsigned int                 :12;
    unsigned int rdata           :20;
} avr32_ac97c_cbrhr_t;



typedef struct avr32_ac97c_cbthr_t {
    unsigned int                 :12;
    unsigned int tdata           :20;
} avr32_ac97c_cbthr_t;



typedef struct avr32_ac97c_cbsr_t {
    unsigned int                 :26;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 1;
    unsigned int unrun           : 1;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_ac97c_cbsr_t;



typedef struct avr32_ac97c_cbmr_t {
    unsigned int                 : 9;
    unsigned int dmaen           : 1;
    unsigned int cen             : 1;
    unsigned int                 : 2;
    unsigned int cem             : 1;
    unsigned int size            : 2;
    unsigned int                 :10;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 1;
    unsigned int unrun           : 1;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_ac97c_cbmr_t;



typedef struct avr32_ac97c_corhr_t {
    unsigned int                 :16;
    unsigned int sdata           :16;
} avr32_ac97c_corhr_t;



typedef struct avr32_ac97c_cothr_t {
    unsigned int                 : 8;
    unsigned int read            : 1;
    unsigned int caddr           : 7;
    unsigned int cdata           :16;
} avr32_ac97c_cothr_t;



typedef struct avr32_ac97c_cosr_t {
    unsigned int                 :26;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_ac97c_cosr_t;



typedef struct avr32_ac97c_comr_t {
    unsigned int                 :26;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_ac97c_comr_t;



typedef struct avr32_ac97c_sr_t {
    unsigned int                 :27;
    unsigned int cbevt           : 1;
    unsigned int caevt           : 1;
    unsigned int coevt           : 1;
    unsigned int wkup            : 1;
    unsigned int sof             : 1;
} avr32_ac97c_sr_t;



typedef struct avr32_ac97c_ier_t {
    unsigned int                 :27;
    unsigned int cbevt           : 1;
    unsigned int caevt           : 1;
    unsigned int coevt           : 1;
    unsigned int wkup            : 1;
    unsigned int sof             : 1;
} avr32_ac97c_ier_t;



typedef struct avr32_ac97c_idr_t {
    unsigned int                 :27;
    unsigned int cbevt           : 1;
    unsigned int caevt           : 1;
    unsigned int coevt           : 1;
    unsigned int wkup            : 1;
    unsigned int sof             : 1;
} avr32_ac97c_idr_t;



typedef struct avr32_ac97c_imr_t {
    unsigned int                 :27;
    unsigned int cbevt           : 1;
    unsigned int caevt           : 1;
    unsigned int coevt           : 1;
    unsigned int wkup            : 1;
    unsigned int sof             : 1;
} avr32_ac97c_imr_t;



typedef struct avr32_ac97c_t {
          unsigned int                   :32       ;//0x0000
          unsigned int                   :32       ;//0x0004
  union {
          unsigned long                  mr        ;//0x0008
          avr32_ac97c_mr_t               MR        ;
  };
          unsigned int                   :32       ;//0x000c
  union {
          unsigned long                  ica       ;//0x0010
          avr32_ac97c_ica_t              ICA       ;
  };
  union {
          unsigned long                  oca       ;//0x0014
          avr32_ac97c_oca_t              OCA       ;
  };
          unsigned int                   :32       ;//0x0018
          unsigned int                   :32       ;//0x001c
  union {
    const unsigned long                  carhr     ;//0x0020
    const avr32_ac97c_carhr_t            CARHR     ;
  };
  union {
          unsigned long                  cathr     ;//0x0024
          avr32_ac97c_cathr_t            CATHR     ;
  };
  union {
    const unsigned long                  casr      ;//0x0028
    const avr32_ac97c_casr_t             CASR      ;
  };
  union {
          unsigned long                  camr      ;//0x002c
          avr32_ac97c_camr_t             CAMR      ;
  };
  union {
    const unsigned long                  cbrhr     ;//0x0030
    const avr32_ac97c_cbrhr_t            CBRHR     ;
  };
  union {
          unsigned long                  cbthr     ;//0x0034
          avr32_ac97c_cbthr_t            CBTHR     ;
  };
  union {
    const unsigned long                  cbsr      ;//0x0038
    const avr32_ac97c_cbsr_t             CBSR      ;
  };
  union {
          unsigned long                  cbmr      ;//0x003c
          avr32_ac97c_cbmr_t             CBMR      ;
  };
  union {
    const unsigned long                  corhr     ;//0x0040
    const avr32_ac97c_corhr_t            CORHR     ;
  };
  union {
          unsigned long                  cothr     ;//0x0044
          avr32_ac97c_cothr_t            COTHR     ;
  };
  union {
    const unsigned long                  cosr      ;//0x0048
    const avr32_ac97c_cosr_t             COSR      ;
  };
  union {
          unsigned long                  comr      ;//0x004c
          avr32_ac97c_comr_t             COMR      ;
  };
  union {
    const unsigned long                  sr        ;//0x0050
    const avr32_ac97c_sr_t               SR        ;
  };
  union {
          unsigned long                  ier       ;//0x0054
          avr32_ac97c_ier_t              IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0058
          avr32_ac97c_idr_t              IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x005c
    const avr32_ac97c_imr_t              IMR       ;
  };
} avr32_ac97c_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_AC97C_210_H_INCLUDED*/
#endif


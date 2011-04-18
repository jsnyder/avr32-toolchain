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
#ifndef AVR32_IISC_200_H_INCLUDED
#define AVR32_IISC_200_H_INCLUDED

#define AVR32_IISC_H_VERSION 200

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_IISC_<register>
 - Bitfield mask:   AVR32_IISC_<register>_<bitfield>
 - Bitfield offset: AVR32_IISC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_IISC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_IISC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_IISC_<bitfield>
 - Bitfield offset: AVR32_IISC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_IISC_<bitfield>_SIZE
 - Bitfield values: AVR32_IISC_<bitfield>_<value name>
 - Bitfield values: AVR32_IISC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_IISC_1024                                     0x0000003f
#define AVR32_IISC_128                                      0x00000007
#define AVR32_IISC_16C                                      0x00000005
#define AVR32_IISC_18                                       0x00000003
#define AVR32_IISC_20                                       0x00000002
#define AVR32_IISC_24                                       0x00000001
#define AVR32_IISC_256                                      0x0000000f
#define AVR32_IISC_384                                      0x00000017
#define AVR32_IISC_512                                      0x0000001f
#define AVR32_IISC_64                                       0x00000003
#define AVR32_IISC_768                                      0x0000002f
#define AVR32_IISC_8                                        0x00000006
#define AVR32_IISC_8C                                       0x00000007
#define AVR32_IISC_BIT                                      0x00000002
#define AVR32_IISC_CKDIS                                             3
#define AVR32_IISC_CKDIS_MASK                               0x00000008
#define AVR32_IISC_CKDIS_OFF                                0x00000000
#define AVR32_IISC_CKDIS_OFFSET                                      3
#define AVR32_IISC_CKDIS_ON                                 0x00000001
#define AVR32_IISC_CKDIS_SIZE                                        1
#define AVR32_IISC_CKEN                                              2
#define AVR32_IISC_CKEN_MASK                                0x00000004
#define AVR32_IISC_CKEN_OFF                                 0x00000000
#define AVR32_IISC_CKEN_OFFSET                                       2
#define AVR32_IISC_CKEN_ON                                  0x00000001
#define AVR32_IISC_CKEN_SIZE                                         1
#define AVR32_IISC_CLEAR                                    0x00000001
#define AVR32_IISC_CR                                       0x00000000
#define AVR32_IISC_CR_CKDIS                                          3
#define AVR32_IISC_CR_CKDIS_MASK                            0x00000008
#define AVR32_IISC_CR_CKDIS_OFF                             0x00000000
#define AVR32_IISC_CR_CKDIS_OFFSET                                   3
#define AVR32_IISC_CR_CKDIS_ON                              0x00000001
#define AVR32_IISC_CR_CKDIS_SIZE                                     1
#define AVR32_IISC_CR_CKEN                                           2
#define AVR32_IISC_CR_CKEN_MASK                             0x00000004
#define AVR32_IISC_CR_CKEN_OFF                              0x00000000
#define AVR32_IISC_CR_CKEN_OFFSET                                    2
#define AVR32_IISC_CR_CKEN_ON                               0x00000001
#define AVR32_IISC_CR_CKEN_SIZE                                      1
#define AVR32_IISC_CR_MASK                                  0x000000bf
#define AVR32_IISC_CR_RESETVALUE                            0x00000000
#define AVR32_IISC_CR_RXDIS                                          1
#define AVR32_IISC_CR_RXDIS_MASK                            0x00000002
#define AVR32_IISC_CR_RXDIS_OFF                             0x00000000
#define AVR32_IISC_CR_RXDIS_OFFSET                                   1
#define AVR32_IISC_CR_RXDIS_ON                              0x00000001
#define AVR32_IISC_CR_RXDIS_SIZE                                     1
#define AVR32_IISC_CR_RXEN                                           0
#define AVR32_IISC_CR_RXEN_MASK                             0x00000001
#define AVR32_IISC_CR_RXEN_OFF                              0x00000000
#define AVR32_IISC_CR_RXEN_OFFSET                                    0
#define AVR32_IISC_CR_RXEN_ON                               0x00000001
#define AVR32_IISC_CR_RXEN_SIZE                                      1
#define AVR32_IISC_CR_SWRST                                          7
#define AVR32_IISC_CR_SWRST_MASK                            0x00000080
#define AVR32_IISC_CR_SWRST_OFF                             0x00000000
#define AVR32_IISC_CR_SWRST_OFFSET                                   7
#define AVR32_IISC_CR_SWRST_ON                              0x00000001
#define AVR32_IISC_CR_SWRST_SIZE                                     1
#define AVR32_IISC_CR_TXDIS                                          5
#define AVR32_IISC_CR_TXDIS_MASK                            0x00000020
#define AVR32_IISC_CR_TXDIS_OFF                             0x00000000
#define AVR32_IISC_CR_TXDIS_OFFSET                                   5
#define AVR32_IISC_CR_TXDIS_ON                              0x00000001
#define AVR32_IISC_CR_TXDIS_SIZE                                     1
#define AVR32_IISC_CR_TXEN                                           4
#define AVR32_IISC_CR_TXEN_MASK                             0x00000010
#define AVR32_IISC_CR_TXEN_OFF                              0x00000000
#define AVR32_IISC_CR_TXEN_OFFSET                                    4
#define AVR32_IISC_CR_TXEN_ON                               0x00000001
#define AVR32_IISC_CR_TXEN_SIZE                                      1
#define AVR32_IISC_DATALENGTH                                        2
#define AVR32_IISC_DATALENGTH_16                            0x00000004
#define AVR32_IISC_DATALENGTH_16C                           0x00000005
#define AVR32_IISC_DATALENGTH_18                            0x00000003
#define AVR32_IISC_DATALENGTH_20                            0x00000002
#define AVR32_IISC_DATALENGTH_24                            0x00000001
#define AVR32_IISC_DATALENGTH_32                            0x00000000
#define AVR32_IISC_DATALENGTH_8                             0x00000006
#define AVR32_IISC_DATALENGTH_8C                            0x00000007
#define AVR32_IISC_DATALENGTH_MASK                          0x0000001c
#define AVR32_IISC_DATALENGTH_OFFSET                                 2
#define AVR32_IISC_DATALENGTH_SIZE                                   3
#define AVR32_IISC_DISABLED                                 0x00000000
#define AVR32_IISC_ENABLED                                  0x00000001
#define AVR32_IISC_FORMAT_I2S                               0x00000000
#define AVR32_IISC_FORMAT_LJ                                0x00000001
#define AVR32_IISC_FORMAT_TDM                               0x00000002
#define AVR32_IISC_FORMAT_TDM_LJ                            0x00000003
#define AVR32_IISC_HALF                                     0x00000001
#define AVR32_IISC_I2S                                      0x00000000
#define AVR32_IISC_IDR                                      0x00000018
#define AVR32_IISC_IDR_MASK                                 0x00000066
#define AVR32_IISC_IDR_RESETVALUE                           0x00000000
#define AVR32_IISC_IDR_RXOR                                          2
#define AVR32_IISC_IDR_RXOR_MASK                            0x00000004
#define AVR32_IISC_IDR_RXOR_OFF                             0x00000000
#define AVR32_IISC_IDR_RXOR_OFFSET                                   2
#define AVR32_IISC_IDR_RXOR_ON                              0x00000001
#define AVR32_IISC_IDR_RXOR_SIZE                                     1
#define AVR32_IISC_IDR_RXRDY                                         1
#define AVR32_IISC_IDR_RXRDY_MASK                           0x00000002
#define AVR32_IISC_IDR_RXRDY_OFF                            0x00000000
#define AVR32_IISC_IDR_RXRDY_OFFSET                                  1
#define AVR32_IISC_IDR_RXRDY_ON                             0x00000001
#define AVR32_IISC_IDR_RXRDY_SIZE                                    1
#define AVR32_IISC_IDR_TXRDY                                         5
#define AVR32_IISC_IDR_TXRDY_MASK                           0x00000020
#define AVR32_IISC_IDR_TXRDY_OFF                            0x00000000
#define AVR32_IISC_IDR_TXRDY_OFFSET                                  5
#define AVR32_IISC_IDR_TXRDY_ON                             0x00000001
#define AVR32_IISC_IDR_TXRDY_SIZE                                    1
#define AVR32_IISC_IDR_TXUR                                          6
#define AVR32_IISC_IDR_TXUR_MASK                            0x00000040
#define AVR32_IISC_IDR_TXUR_OFF                             0x00000000
#define AVR32_IISC_IDR_TXUR_OFFSET                                   6
#define AVR32_IISC_IDR_TXUR_ON                              0x00000001
#define AVR32_IISC_IDR_TXUR_SIZE                                     1
#define AVR32_IISC_IER                                      0x00000014
#define AVR32_IISC_IER_MASK                                 0x00000066
#define AVR32_IISC_IER_RESETVALUE                           0x00000000
#define AVR32_IISC_IER_RXOR                                          2
#define AVR32_IISC_IER_RXOR_MASK                            0x00000004
#define AVR32_IISC_IER_RXOR_OFF                             0x00000000
#define AVR32_IISC_IER_RXOR_OFFSET                                   2
#define AVR32_IISC_IER_RXOR_ON                              0x00000001
#define AVR32_IISC_IER_RXOR_SIZE                                     1
#define AVR32_IISC_IER_RXRDY                                         1
#define AVR32_IISC_IER_RXRDY_MASK                           0x00000002
#define AVR32_IISC_IER_RXRDY_OFF                            0x00000000
#define AVR32_IISC_IER_RXRDY_OFFSET                                  1
#define AVR32_IISC_IER_RXRDY_ON                             0x00000001
#define AVR32_IISC_IER_RXRDY_SIZE                                    1
#define AVR32_IISC_IER_TXRDY                                         5
#define AVR32_IISC_IER_TXRDY_MASK                           0x00000020
#define AVR32_IISC_IER_TXRDY_OFF                            0x00000000
#define AVR32_IISC_IER_TXRDY_OFFSET                                  5
#define AVR32_IISC_IER_TXRDY_ON                             0x00000001
#define AVR32_IISC_IER_TXRDY_SIZE                                    1
#define AVR32_IISC_IER_TXUR                                          6
#define AVR32_IISC_IER_TXUR_MASK                            0x00000040
#define AVR32_IISC_IER_TXUR_OFF                             0x00000000
#define AVR32_IISC_IER_TXUR_OFFSET                                   6
#define AVR32_IISC_IER_TXUR_ON                              0x00000001
#define AVR32_IISC_IER_TXUR_SIZE                                     1
#define AVR32_IISC_IMCK                                     0x00000001
#define AVR32_IISC_IMCKFS                                           24
#define AVR32_IISC_IMCKFS_1024                              0x0000003f
#define AVR32_IISC_IMCKFS_128                               0x00000007
#define AVR32_IISC_IMCKFS_16                                0x00000000
#define AVR32_IISC_IMCKFS_256                               0x0000000f
#define AVR32_IISC_IMCKFS_32                                0x00000001
#define AVR32_IISC_IMCKFS_384                               0x00000017
#define AVR32_IISC_IMCKFS_512                               0x0000001f
#define AVR32_IISC_IMCKFS_64                                0x00000003
#define AVR32_IISC_IMCKFS_768                               0x0000002f
#define AVR32_IISC_IMCKFS_MASK                              0x3f000000
#define AVR32_IISC_IMCKFS_OFFSET                                    24
#define AVR32_IISC_IMCKFS_SIZE                                       6
#define AVR32_IISC_IMCKMODE                                         30
#define AVR32_IISC_IMCKMODE_IMCK                            0x00000001
#define AVR32_IISC_IMCKMODE_MASK                            0x40000000
#define AVR32_IISC_IMCKMODE_NO_IMCK                         0x00000000
#define AVR32_IISC_IMCKMODE_OFFSET                                  30
#define AVR32_IISC_IMCKMODE_SIZE                                     1
#define AVR32_IISC_IMR                                      0x0000001c
#define AVR32_IISC_IMR_MASK                                 0x00000066
#define AVR32_IISC_IMR_RESETVALUE                           0x00000000
#define AVR32_IISC_IMR_RXOR                                          2
#define AVR32_IISC_IMR_RXOR_DISABLED                        0x00000000
#define AVR32_IISC_IMR_RXOR_ENABLED                         0x00000001
#define AVR32_IISC_IMR_RXOR_MASK                            0x00000004
#define AVR32_IISC_IMR_RXOR_OFFSET                                   2
#define AVR32_IISC_IMR_RXOR_SIZE                                     1
#define AVR32_IISC_IMR_RXRDY                                         1
#define AVR32_IISC_IMR_RXRDY_DISABLED                       0x00000000
#define AVR32_IISC_IMR_RXRDY_ENABLED                        0x00000001
#define AVR32_IISC_IMR_RXRDY_MASK                           0x00000002
#define AVR32_IISC_IMR_RXRDY_OFFSET                                  1
#define AVR32_IISC_IMR_RXRDY_SIZE                                    1
#define AVR32_IISC_IMR_TXRDY                                         5
#define AVR32_IISC_IMR_TXRDY_DISABLED                       0x00000000
#define AVR32_IISC_IMR_TXRDY_ENABLED                        0x00000001
#define AVR32_IISC_IMR_TXRDY_MASK                           0x00000020
#define AVR32_IISC_IMR_TXRDY_OFFSET                                  5
#define AVR32_IISC_IMR_TXRDY_SIZE                                    1
#define AVR32_IISC_IMR_TXUR                                          6
#define AVR32_IISC_IMR_TXUR_DISABLED                        0x00000000
#define AVR32_IISC_IMR_TXUR_ENABLED                         0x00000001
#define AVR32_IISC_IMR_TXUR_MASK                            0x00000040
#define AVR32_IISC_IMR_TXUR_OFFSET                                   6
#define AVR32_IISC_IMR_TXUR_SIZE                                     1
#define AVR32_IISC_IWS24                                            31
#define AVR32_IISC_IWS24_24                                 0x00000001
#define AVR32_IISC_IWS24_32                                 0x00000000
#define AVR32_IISC_IWS24_MASK                               0x80000000
#define AVR32_IISC_IWS24_OFFSET                                     31
#define AVR32_IISC_IWS24_SIZE                                        1
#define AVR32_IISC_LEFT                                     0x00000000
#define AVR32_IISC_LJ                                       0x00000001
#define AVR32_IISC_MASTER                                   0x00000001
#define AVR32_IISC_MODE                                              0
#define AVR32_IISC_MODE_MASK                                0x00000001
#define AVR32_IISC_MODE_MASTER                              0x00000001
#define AVR32_IISC_MODE_OFFSET                                       0
#define AVR32_IISC_MODE_SIZE                                         1
#define AVR32_IISC_MODE_SLAVE                               0x00000000
#define AVR32_IISC_MONO                                     0x00000001
#define AVR32_IISC_MR                                       0x00000004
#define AVR32_IISC_MR_DATALENGTH                                     2
#define AVR32_IISC_MR_DATALENGTH_16                         0x00000004
#define AVR32_IISC_MR_DATALENGTH_16C                        0x00000005
#define AVR32_IISC_MR_DATALENGTH_18                         0x00000003
#define AVR32_IISC_MR_DATALENGTH_20                         0x00000002
#define AVR32_IISC_MR_DATALENGTH_24                         0x00000001
#define AVR32_IISC_MR_DATALENGTH_32                         0x00000000
#define AVR32_IISC_MR_DATALENGTH_8                          0x00000006
#define AVR32_IISC_MR_DATALENGTH_8C                         0x00000007
#define AVR32_IISC_MR_DATALENGTH_MASK                       0x0000001c
#define AVR32_IISC_MR_DATALENGTH_OFFSET                              2
#define AVR32_IISC_MR_DATALENGTH_SIZE                                3
#define AVR32_IISC_MR_FORMAT                                         6
#define AVR32_IISC_MR_FORMAT_I2S                            0x00000000
#define AVR32_IISC_MR_FORMAT_LJ                             0x00000001
#define AVR32_IISC_MR_FORMAT_MASK                           0x000000c0
#define AVR32_IISC_MR_FORMAT_OFFSET                                  6
#define AVR32_IISC_MR_FORMAT_SIZE                                    2
#define AVR32_IISC_MR_FORMAT_TDM                            0x00000002
#define AVR32_IISC_MR_FORMAT_TDM_LJ                         0x00000003
#define AVR32_IISC_MR_IMCKFS                                        24
#define AVR32_IISC_MR_IMCKFS_1024                           0x0000003f
#define AVR32_IISC_MR_IMCKFS_128                            0x00000007
#define AVR32_IISC_MR_IMCKFS_16                             0x00000000
#define AVR32_IISC_MR_IMCKFS_256                            0x0000000f
#define AVR32_IISC_MR_IMCKFS_32                             0x00000001
#define AVR32_IISC_MR_IMCKFS_384                            0x00000017
#define AVR32_IISC_MR_IMCKFS_512                            0x0000001f
#define AVR32_IISC_MR_IMCKFS_64                             0x00000003
#define AVR32_IISC_MR_IMCKFS_768                            0x0000002f
#define AVR32_IISC_MR_IMCKFS_MASK                           0x3f000000
#define AVR32_IISC_MR_IMCKFS_OFFSET                                 24
#define AVR32_IISC_MR_IMCKFS_SIZE                                    6
#define AVR32_IISC_MR_IMCKMODE                                      30
#define AVR32_IISC_MR_IMCKMODE_IMCK                         0x00000001
#define AVR32_IISC_MR_IMCKMODE_MASK                         0x40000000
#define AVR32_IISC_MR_IMCKMODE_NO_IMCK                      0x00000000
#define AVR32_IISC_MR_IMCKMODE_OFFSET                               30
#define AVR32_IISC_MR_IMCKMODE_SIZE                                  1
#define AVR32_IISC_MR_IWS24                                         31
#define AVR32_IISC_MR_IWS24_24                              0x00000001
#define AVR32_IISC_MR_IWS24_32                              0x00000000
#define AVR32_IISC_MR_IWS24_MASK                            0x80000000
#define AVR32_IISC_MR_IWS24_OFFSET                                  31
#define AVR32_IISC_MR_IWS24_SIZE                                     1
#define AVR32_IISC_MR_MASK                                  0xffc777dd
#define AVR32_IISC_MR_MODE                                           0
#define AVR32_IISC_MR_MODE_MASK                             0x00000001
#define AVR32_IISC_MR_MODE_MASTER                           0x00000001
#define AVR32_IISC_MR_MODE_OFFSET                                    0
#define AVR32_IISC_MR_MODE_SIZE                                      1
#define AVR32_IISC_MR_MODE_SLAVE                            0x00000000
#define AVR32_IISC_MR_NBCHAN                                        16
#define AVR32_IISC_MR_NBCHAN_MASK                           0x00070000
#define AVR32_IISC_MR_NBCHAN_OFFSET                                 16
#define AVR32_IISC_MR_NBCHAN_SIZE                                    3
#define AVR32_IISC_MR_RESETVALUE                            0x00000000
#define AVR32_IISC_MR_RXDMA                                          9
#define AVR32_IISC_MR_RXDMA_MASK                            0x00000200
#define AVR32_IISC_MR_RXDMA_MULTIPLE                        0x00000001
#define AVR32_IISC_MR_RXDMA_OFFSET                                   9
#define AVR32_IISC_MR_RXDMA_SINGLE                          0x00000000
#define AVR32_IISC_MR_RXDMA_SIZE                                     1
#define AVR32_IISC_MR_RXLOOP                                        10
#define AVR32_IISC_MR_RXLOOP_MASK                           0x00000400
#define AVR32_IISC_MR_RXLOOP_OFF                            0x00000000
#define AVR32_IISC_MR_RXLOOP_OFFSET                                 10
#define AVR32_IISC_MR_RXLOOP_ON                             0x00000001
#define AVR32_IISC_MR_RXLOOP_SIZE                                    1
#define AVR32_IISC_MR_RXMONO                                         8
#define AVR32_IISC_MR_RXMONO_MASK                           0x00000100
#define AVR32_IISC_MR_RXMONO_MONO                           0x00000001
#define AVR32_IISC_MR_RXMONO_OFFSET                                  8
#define AVR32_IISC_MR_RXMONO_SIZE                                    1
#define AVR32_IISC_MR_RXMONO_STEREO                         0x00000000
#define AVR32_IISC_MR_TDMFS                                         22
#define AVR32_IISC_MR_TDMFS_BIT                             0x00000002
#define AVR32_IISC_MR_TDMFS_HALF                            0x00000001
#define AVR32_IISC_MR_TDMFS_MASK                            0x00c00000
#define AVR32_IISC_MR_TDMFS_OFFSET                                  22
#define AVR32_IISC_MR_TDMFS_SIZE                                     2
#define AVR32_IISC_MR_TDMFS_SLOT                            0x00000000
#define AVR32_IISC_MR_TXDMA                                         13
#define AVR32_IISC_MR_TXDMA_MASK                            0x00002000
#define AVR32_IISC_MR_TXDMA_MULTIPLE                        0x00000001
#define AVR32_IISC_MR_TXDMA_OFFSET                                  13
#define AVR32_IISC_MR_TXDMA_SINGLE                          0x00000000
#define AVR32_IISC_MR_TXDMA_SIZE                                     1
#define AVR32_IISC_MR_TXMONO                                        12
#define AVR32_IISC_MR_TXMONO_MASK                           0x00001000
#define AVR32_IISC_MR_TXMONO_MONO                           0x00000001
#define AVR32_IISC_MR_TXMONO_OFFSET                                 12
#define AVR32_IISC_MR_TXMONO_SIZE                                    1
#define AVR32_IISC_MR_TXMONO_STEREO                         0x00000000
#define AVR32_IISC_MR_TXSAME                                        14
#define AVR32_IISC_MR_TXSAME_MASK                           0x00004000
#define AVR32_IISC_MR_TXSAME_OFFSET                                 14
#define AVR32_IISC_MR_TXSAME_SAME                           0x00000001
#define AVR32_IISC_MR_TXSAME_SIZE                                    1
#define AVR32_IISC_MR_TXSAME_ZERO                           0x00000000
#define AVR32_IISC_MULTIPLE                                 0x00000001
#define AVR32_IISC_NBCHAN                                           16
#define AVR32_IISC_NBCHAN_MASK                              0x00070000
#define AVR32_IISC_NBCHAN_OFFSET                                    16
#define AVR32_IISC_NBCHAN_SIZE                                       3
#define AVR32_IISC_NBDMACHAN                                         0
#define AVR32_IISC_NBDMACHAN_MASK                           0x00000007
#define AVR32_IISC_NBDMACHAN_OFFSET                                  0
#define AVR32_IISC_NBDMACHAN_SIZE                                    3
#define AVR32_IISC_NO                                       0x00000000
#define AVR32_IISC_NO_IMCK                                  0x00000000
#define AVR32_IISC_OFF                                      0x00000000
#define AVR32_IISC_ON                                       0x00000001
#define AVR32_IISC_PARAMETER                                0x0000002c
#define AVR32_IISC_PARAMETER_FORMAT                                  7
#define AVR32_IISC_PARAMETER_FORMAT_I2S                     0x00000000
#define AVR32_IISC_PARAMETER_FORMAT_MASK                    0x00000080
#define AVR32_IISC_PARAMETER_FORMAT_OFFSET                           7
#define AVR32_IISC_PARAMETER_FORMAT_SIZE                             1
#define AVR32_IISC_PARAMETER_MASK                           0x00070087
#define AVR32_IISC_PARAMETER_NBCHAN                                 16
#define AVR32_IISC_PARAMETER_NBCHAN_MASK                    0x00070000
#define AVR32_IISC_PARAMETER_NBCHAN_OFFSET                          16
#define AVR32_IISC_PARAMETER_NBCHAN_SIZE                             3
#define AVR32_IISC_PARAMETER_NBDMACHAN                               0
#define AVR32_IISC_PARAMETER_NBDMACHAN_MASK                 0x00000007
#define AVR32_IISC_PARAMETER_NBDMACHAN_OFFSET                        0
#define AVR32_IISC_PARAMETER_NBDMACHAN_SIZE                          3
#define AVR32_IISC_PARAMETER_RESETVALUE                     0x00070087
#define AVR32_IISC_RDAT                                              0
#define AVR32_IISC_RDAT_MASK                                0xffffffff
#define AVR32_IISC_RDAT_OFFSET                                       0
#define AVR32_IISC_RDAT_SIZE                                        32
#define AVR32_IISC_RHR                                      0x00000020
#define AVR32_IISC_RHR_MASK                                 0xffffffff
#define AVR32_IISC_RHR_RDAT                                          0
#define AVR32_IISC_RHR_RDAT_MASK                            0xffffffff
#define AVR32_IISC_RHR_RDAT_OFFSET                                   0
#define AVR32_IISC_RHR_RDAT_SIZE                                    32
#define AVR32_IISC_RHR_RESETVALUE                           0x00000000
#define AVR32_IISC_RIGHT                                    0x00000001
#define AVR32_IISC_RXDIS                                             1
#define AVR32_IISC_RXDIS_MASK                               0x00000002
#define AVR32_IISC_RXDIS_OFF                                0x00000000
#define AVR32_IISC_RXDIS_OFFSET                                      1
#define AVR32_IISC_RXDIS_ON                                 0x00000001
#define AVR32_IISC_RXDIS_SIZE                                        1
#define AVR32_IISC_RXDMA                                             9
#define AVR32_IISC_RXDMA_MASK                               0x00000200
#define AVR32_IISC_RXDMA_MULTIPLE                           0x00000001
#define AVR32_IISC_RXDMA_OFFSET                                      9
#define AVR32_IISC_RXDMA_SINGLE                             0x00000000
#define AVR32_IISC_RXDMA_SIZE                                        1
#define AVR32_IISC_RXEN                                              0
#define AVR32_IISC_RXEN_MASK                                0x00000001
#define AVR32_IISC_RXEN_OFF                                 0x00000000
#define AVR32_IISC_RXEN_OFFSET                                       0
#define AVR32_IISC_RXEN_ON                                  0x00000001
#define AVR32_IISC_RXEN_SIZE                                         1
#define AVR32_IISC_RXLOOP                                           10
#define AVR32_IISC_RXLOOP_MASK                              0x00000400
#define AVR32_IISC_RXLOOP_OFF                               0x00000000
#define AVR32_IISC_RXLOOP_OFFSET                                    10
#define AVR32_IISC_RXLOOP_ON                                0x00000001
#define AVR32_IISC_RXLOOP_SIZE                                       1
#define AVR32_IISC_RXMONO                                            8
#define AVR32_IISC_RXMONO_MASK                              0x00000100
#define AVR32_IISC_RXMONO_MONO                              0x00000001
#define AVR32_IISC_RXMONO_OFFSET                                     8
#define AVR32_IISC_RXMONO_SIZE                                       1
#define AVR32_IISC_RXMONO_STEREO                            0x00000000
#define AVR32_IISC_RXOR                                              2
#define AVR32_IISC_RXORCH                                            8
#define AVR32_IISC_RXORCH_LEFT                              0x00000000
#define AVR32_IISC_RXORCH_MASK                              0x0000ff00
#define AVR32_IISC_RXORCH_OFFSET                                     8
#define AVR32_IISC_RXORCH_RIGHT                             0x00000001
#define AVR32_IISC_RXORCH_SIZE                                       8
#define AVR32_IISC_RXOR_CLEAR                               0x00000001
#define AVR32_IISC_RXOR_DISABLED                            0x00000000
#define AVR32_IISC_RXOR_ENABLED                             0x00000001
#define AVR32_IISC_RXOR_MASK                                0x00000004
#define AVR32_IISC_RXOR_NO                                  0x00000000
#define AVR32_IISC_RXOR_OFF                                 0x00000000
#define AVR32_IISC_RXOR_OFFSET                                       2
#define AVR32_IISC_RXOR_ON                                  0x00000001
#define AVR32_IISC_RXOR_SET                                 0x00000001
#define AVR32_IISC_RXOR_SIZE                                         1
#define AVR32_IISC_RXOR_YES                                 0x00000001
#define AVR32_IISC_RXRDY                                             1
#define AVR32_IISC_RXRDY_DISABLED                           0x00000000
#define AVR32_IISC_RXRDY_EMPTY                              0x00000000
#define AVR32_IISC_RXRDY_ENABLED                            0x00000001
#define AVR32_IISC_RXRDY_FULL                               0x00000001
#define AVR32_IISC_RXRDY_MASK                               0x00000002
#define AVR32_IISC_RXRDY_OFF                                0x00000000
#define AVR32_IISC_RXRDY_OFFSET                                      1
#define AVR32_IISC_RXRDY_ON                                 0x00000001
#define AVR32_IISC_RXRDY_SIZE                                        1
#define AVR32_IISC_SAME                                     0x00000001
#define AVR32_IISC_SCR                                      0x0000000c
#define AVR32_IISC_SCR_MASK                                 0x00000044
#define AVR32_IISC_SCR_RESETVALUE                           0x00000000
#define AVR32_IISC_SCR_RXOR                                          2
#define AVR32_IISC_SCR_RXOR_CLEAR                           0x00000001
#define AVR32_IISC_SCR_RXOR_MASK                            0x00000004
#define AVR32_IISC_SCR_RXOR_NO                              0x00000000
#define AVR32_IISC_SCR_RXOR_OFFSET                                   2
#define AVR32_IISC_SCR_RXOR_SIZE                                     1
#define AVR32_IISC_SCR_TXUR                                          6
#define AVR32_IISC_SCR_TXUR_CLEAR                           0x00000001
#define AVR32_IISC_SCR_TXUR_MASK                            0x00000040
#define AVR32_IISC_SCR_TXUR_NO                              0x00000000
#define AVR32_IISC_SCR_TXUR_OFFSET                                   6
#define AVR32_IISC_SCR_TXUR_SIZE                                     1
#define AVR32_IISC_SET                                      0x00000001
#define AVR32_IISC_SINGLE                                   0x00000000
#define AVR32_IISC_SLAVE                                    0x00000000
#define AVR32_IISC_SLOT                                     0x00000000
#define AVR32_IISC_SR                                       0x00000008
#define AVR32_IISC_SR_MASK                                  0x0ff0ff77
#define AVR32_IISC_SR_RESETVALUE                            0x00000000
#define AVR32_IISC_SR_RXEN                                           0
#define AVR32_IISC_SR_RXEN_MASK                             0x00000001
#define AVR32_IISC_SR_RXEN_OFF                              0x00000000
#define AVR32_IISC_SR_RXEN_OFFSET                                    0
#define AVR32_IISC_SR_RXEN_ON                               0x00000001
#define AVR32_IISC_SR_RXEN_SIZE                                      1
#define AVR32_IISC_SR_RXOR                                           2
#define AVR32_IISC_SR_RXORCH                                         8
#define AVR32_IISC_SR_RXORCH_LEFT                           0x00000000
#define AVR32_IISC_SR_RXORCH_MASK                           0x0000ff00
#define AVR32_IISC_SR_RXORCH_OFFSET                                  8
#define AVR32_IISC_SR_RXORCH_RIGHT                          0x00000001
#define AVR32_IISC_SR_RXORCH_SIZE                                    8
#define AVR32_IISC_SR_RXOR_MASK                             0x00000004
#define AVR32_IISC_SR_RXOR_NO                               0x00000000
#define AVR32_IISC_SR_RXOR_OFFSET                                    2
#define AVR32_IISC_SR_RXOR_SIZE                                      1
#define AVR32_IISC_SR_RXOR_YES                              0x00000001
#define AVR32_IISC_SR_RXRDY                                          1
#define AVR32_IISC_SR_RXRDY_EMPTY                           0x00000000
#define AVR32_IISC_SR_RXRDY_FULL                            0x00000001
#define AVR32_IISC_SR_RXRDY_MASK                            0x00000002
#define AVR32_IISC_SR_RXRDY_OFFSET                                   1
#define AVR32_IISC_SR_RXRDY_SIZE                                     1
#define AVR32_IISC_SR_TXEN                                           4
#define AVR32_IISC_SR_TXEN_MASK                             0x00000010
#define AVR32_IISC_SR_TXEN_OFF                              0x00000000
#define AVR32_IISC_SR_TXEN_OFFSET                                    4
#define AVR32_IISC_SR_TXEN_ON                               0x00000001
#define AVR32_IISC_SR_TXEN_SIZE                                      1
#define AVR32_IISC_SR_TXRDY                                          5
#define AVR32_IISC_SR_TXRDY_EMPTY                           0x00000001
#define AVR32_IISC_SR_TXRDY_FULL                            0x00000000
#define AVR32_IISC_SR_TXRDY_MASK                            0x00000020
#define AVR32_IISC_SR_TXRDY_OFFSET                                   5
#define AVR32_IISC_SR_TXRDY_SIZE                                     1
#define AVR32_IISC_SR_TXUR                                           6
#define AVR32_IISC_SR_TXURCH                                        20
#define AVR32_IISC_SR_TXURCH_LEFT                           0x00000000
#define AVR32_IISC_SR_TXURCH_MASK                           0x0ff00000
#define AVR32_IISC_SR_TXURCH_OFFSET                                 20
#define AVR32_IISC_SR_TXURCH_RIGHT                          0x00000001
#define AVR32_IISC_SR_TXURCH_SIZE                                    8
#define AVR32_IISC_SR_TXUR_MASK                             0x00000040
#define AVR32_IISC_SR_TXUR_NO                               0x00000000
#define AVR32_IISC_SR_TXUR_OFFSET                                    6
#define AVR32_IISC_SR_TXUR_SIZE                                      1
#define AVR32_IISC_SR_TXUR_YES                              0x00000001
#define AVR32_IISC_SSR                                      0x00000010
#define AVR32_IISC_SSR_MASK                                 0x0ff0ff44
#define AVR32_IISC_SSR_RESETVALUE                           0x00000000
#define AVR32_IISC_SSR_RXOR                                          2
#define AVR32_IISC_SSR_RXORCH                                        8
#define AVR32_IISC_SSR_RXORCH_MASK                          0x0000ff00
#define AVR32_IISC_SSR_RXORCH_OFFSET                                 8
#define AVR32_IISC_SSR_RXORCH_SIZE                                   8
#define AVR32_IISC_SSR_RXOR_MASK                            0x00000004
#define AVR32_IISC_SSR_RXOR_NO                              0x00000000
#define AVR32_IISC_SSR_RXOR_OFFSET                                   2
#define AVR32_IISC_SSR_RXOR_SET                             0x00000001
#define AVR32_IISC_SSR_RXOR_SIZE                                     1
#define AVR32_IISC_SSR_TXUR                                          6
#define AVR32_IISC_SSR_TXURCH                                       20
#define AVR32_IISC_SSR_TXURCH_MASK                          0x0ff00000
#define AVR32_IISC_SSR_TXURCH_OFFSET                                20
#define AVR32_IISC_SSR_TXURCH_SIZE                                   8
#define AVR32_IISC_SSR_TXUR_MASK                            0x00000040
#define AVR32_IISC_SSR_TXUR_NO                              0x00000000
#define AVR32_IISC_SSR_TXUR_OFFSET                                   6
#define AVR32_IISC_SSR_TXUR_SET                             0x00000001
#define AVR32_IISC_SSR_TXUR_SIZE                                     1
#define AVR32_IISC_STEREO                                   0x00000000
#define AVR32_IISC_SWRST                                             7
#define AVR32_IISC_SWRST_MASK                               0x00000080
#define AVR32_IISC_SWRST_OFF                                0x00000000
#define AVR32_IISC_SWRST_OFFSET                                      7
#define AVR32_IISC_SWRST_ON                                 0x00000001
#define AVR32_IISC_SWRST_SIZE                                        1
#define AVR32_IISC_TDAT                                              0
#define AVR32_IISC_TDAT_MASK                                0xffffffff
#define AVR32_IISC_TDAT_OFFSET                                       0
#define AVR32_IISC_TDAT_SIZE                                        32
#define AVR32_IISC_TDM                                      0x00000002
#define AVR32_IISC_TDMFS                                            22
#define AVR32_IISC_TDMFS_BIT                                0x00000002
#define AVR32_IISC_TDMFS_HALF                               0x00000001
#define AVR32_IISC_TDMFS_MASK                               0x00c00000
#define AVR32_IISC_TDMFS_OFFSET                                     22
#define AVR32_IISC_TDMFS_SIZE                                        2
#define AVR32_IISC_TDMFS_SLOT                               0x00000000
#define AVR32_IISC_TDM_LJ                                   0x00000003
#define AVR32_IISC_THR                                      0x00000024
#define AVR32_IISC_THR_MASK                                 0xffffffff
#define AVR32_IISC_THR_RESETVALUE                           0x00000000
#define AVR32_IISC_THR_TDAT                                          0
#define AVR32_IISC_THR_TDAT_MASK                            0xffffffff
#define AVR32_IISC_THR_TDAT_OFFSET                                   0
#define AVR32_IISC_THR_TDAT_SIZE                                    32
#define AVR32_IISC_TXDIS                                             5
#define AVR32_IISC_TXDIS_MASK                               0x00000020
#define AVR32_IISC_TXDIS_OFF                                0x00000000
#define AVR32_IISC_TXDIS_OFFSET                                      5
#define AVR32_IISC_TXDIS_ON                                 0x00000001
#define AVR32_IISC_TXDIS_SIZE                                        1
#define AVR32_IISC_TXDMA                                            13
#define AVR32_IISC_TXDMA_MASK                               0x00002000
#define AVR32_IISC_TXDMA_MULTIPLE                           0x00000001
#define AVR32_IISC_TXDMA_OFFSET                                     13
#define AVR32_IISC_TXDMA_SINGLE                             0x00000000
#define AVR32_IISC_TXDMA_SIZE                                        1
#define AVR32_IISC_TXEN                                              4
#define AVR32_IISC_TXEN_MASK                                0x00000010
#define AVR32_IISC_TXEN_OFF                                 0x00000000
#define AVR32_IISC_TXEN_OFFSET                                       4
#define AVR32_IISC_TXEN_ON                                  0x00000001
#define AVR32_IISC_TXEN_SIZE                                         1
#define AVR32_IISC_TXMONO                                           12
#define AVR32_IISC_TXMONO_MASK                              0x00001000
#define AVR32_IISC_TXMONO_MONO                              0x00000001
#define AVR32_IISC_TXMONO_OFFSET                                    12
#define AVR32_IISC_TXMONO_SIZE                                       1
#define AVR32_IISC_TXMONO_STEREO                            0x00000000
#define AVR32_IISC_TXRDY                                             5
#define AVR32_IISC_TXRDY_DISABLED                           0x00000000
#define AVR32_IISC_TXRDY_EMPTY                              0x00000001
#define AVR32_IISC_TXRDY_ENABLED                            0x00000001
#define AVR32_IISC_TXRDY_FULL                               0x00000000
#define AVR32_IISC_TXRDY_MASK                               0x00000020
#define AVR32_IISC_TXRDY_OFF                                0x00000000
#define AVR32_IISC_TXRDY_OFFSET                                      5
#define AVR32_IISC_TXRDY_ON                                 0x00000001
#define AVR32_IISC_TXRDY_SIZE                                        1
#define AVR32_IISC_TXSAME                                           14
#define AVR32_IISC_TXSAME_MASK                              0x00004000
#define AVR32_IISC_TXSAME_OFFSET                                    14
#define AVR32_IISC_TXSAME_SAME                              0x00000001
#define AVR32_IISC_TXSAME_SIZE                                       1
#define AVR32_IISC_TXSAME_ZERO                              0x00000000
#define AVR32_IISC_TXUR                                              6
#define AVR32_IISC_TXURCH                                           20
#define AVR32_IISC_TXURCH_LEFT                              0x00000000
#define AVR32_IISC_TXURCH_MASK                              0x0ff00000
#define AVR32_IISC_TXURCH_OFFSET                                    20
#define AVR32_IISC_TXURCH_RIGHT                             0x00000001
#define AVR32_IISC_TXURCH_SIZE                                       8
#define AVR32_IISC_TXUR_CLEAR                               0x00000001
#define AVR32_IISC_TXUR_DISABLED                            0x00000000
#define AVR32_IISC_TXUR_ENABLED                             0x00000001
#define AVR32_IISC_TXUR_MASK                                0x00000040
#define AVR32_IISC_TXUR_NO                                  0x00000000
#define AVR32_IISC_TXUR_OFF                                 0x00000000
#define AVR32_IISC_TXUR_OFFSET                                       6
#define AVR32_IISC_TXUR_ON                                  0x00000001
#define AVR32_IISC_TXUR_SET                                 0x00000001
#define AVR32_IISC_TXUR_SIZE                                         1
#define AVR32_IISC_TXUR_YES                                 0x00000001
#define AVR32_IISC_VARIANT                                          16
#define AVR32_IISC_VARIANT_MASK                             0x000f0000
#define AVR32_IISC_VARIANT_OFFSET                                   16
#define AVR32_IISC_VARIANT_SIZE                                      4
#define AVR32_IISC_VERSION                                  0x00000028
#define AVR32_IISC_VERSION_MASK                             0x000f0fff
#define AVR32_IISC_VERSION_OFFSET                                    0
#define AVR32_IISC_VERSION_RESETVALUE                       0x00000200
#define AVR32_IISC_VERSION_SIZE                                     12
#define AVR32_IISC_VERSION_VARIANT                                  16
#define AVR32_IISC_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_IISC_VERSION_VARIANT_OFFSET                           16
#define AVR32_IISC_VERSION_VARIANT_SIZE                              4
#define AVR32_IISC_VERSION_VERSION                                   0
#define AVR32_IISC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_IISC_VERSION_VERSION_OFFSET                            0
#define AVR32_IISC_VERSION_VERSION_SIZE                             12
#define AVR32_IISC_YES                                      0x00000001
#define AVR32_IISC_ZERO                                     0x00000000




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_iisc_cr_t {
    unsigned int                 :24;
    unsigned int swrst           : 1;
    unsigned int                 : 1;
    unsigned int txdis           : 1;
    unsigned int txen            : 1;
    unsigned int ckdis           : 1;
    unsigned int cken            : 1;
    unsigned int rxdis           : 1;
    unsigned int rxen            : 1;
} avr32_iisc_cr_t;



typedef struct avr32_iisc_mr_t {
    unsigned int iws24           : 1;
    unsigned int imckmode        : 1;
    unsigned int imckfs          : 6;
    unsigned int tdmfs           : 2;
    unsigned int                 : 3;
    unsigned int nbchan          : 3;
    unsigned int                 : 1;
    unsigned int txsame          : 1;
    unsigned int txdma           : 1;
    unsigned int txmono          : 1;
    unsigned int                 : 1;
    unsigned int rxloop          : 1;
    unsigned int rxdma           : 1;
    unsigned int rxmono          : 1;
    unsigned int format          : 2;
    unsigned int                 : 1;
    unsigned int datalength      : 3;
    unsigned int                 : 1;
    unsigned int mode            : 1;
} avr32_iisc_mr_t;



typedef struct avr32_iisc_sr_t {
    unsigned int                 : 4;
    unsigned int txurch          : 8;
    unsigned int                 : 4;
    unsigned int rxorch          : 8;
    unsigned int                 : 1;
    unsigned int txur            : 1;
    unsigned int txrdy           : 1;
    unsigned int txen            : 1;
    unsigned int                 : 1;
    unsigned int rxor            : 1;
    unsigned int rxrdy           : 1;
    unsigned int rxen            : 1;
} avr32_iisc_sr_t;



typedef struct avr32_iisc_scr_t {
    unsigned int                 :25;
    unsigned int txur            : 1;
    unsigned int                 : 3;
    unsigned int rxor            : 1;
    unsigned int                 : 2;
} avr32_iisc_scr_t;



typedef struct avr32_iisc_ssr_t {
    unsigned int                 : 4;
    unsigned int txurch          : 8;
    unsigned int                 : 4;
    unsigned int rxorch          : 8;
    unsigned int                 : 1;
    unsigned int txur            : 1;
    unsigned int                 : 3;
    unsigned int rxor            : 1;
    unsigned int                 : 2;
} avr32_iisc_ssr_t;



typedef struct avr32_iisc_ier_t {
    unsigned int                 :25;
    unsigned int txur            : 1;
    unsigned int txrdy           : 1;
    unsigned int                 : 2;
    unsigned int rxor            : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 1;
} avr32_iisc_ier_t;



typedef struct avr32_iisc_idr_t {
    unsigned int                 :25;
    unsigned int txur            : 1;
    unsigned int txrdy           : 1;
    unsigned int                 : 2;
    unsigned int rxor            : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 1;
} avr32_iisc_idr_t;



typedef struct avr32_iisc_imr_t {
    unsigned int                 :25;
    unsigned int txur            : 1;
    unsigned int txrdy           : 1;
    unsigned int                 : 2;
    unsigned int rxor            : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 1;
} avr32_iisc_imr_t;



typedef struct avr32_iisc_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_iisc_version_t;



typedef struct avr32_iisc_parameter_t {
    unsigned int                 :13;
    unsigned int nbchan          : 3;
    unsigned int                 : 8;
    unsigned int format          : 1;
    unsigned int                 : 4;
    unsigned int nbdmachan       : 3;
} avr32_iisc_parameter_t;



typedef struct avr32_iisc_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_iisc_cr_t                CR        ;
  };
  union {
          unsigned long                  mr        ;//0x0004
          avr32_iisc_mr_t                MR        ;
  };
  union {
    const unsigned long                  sr        ;//0x0008
    const avr32_iisc_sr_t                SR        ;
  };
  union {
          unsigned long                  scr       ;//0x000c
          avr32_iisc_scr_t               SCR       ;
  };
  union {
          unsigned long                  ssr       ;//0x0010
          avr32_iisc_ssr_t               SSR       ;
  };
  union {
          unsigned long                  ier       ;//0x0014
          avr32_iisc_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0018
          avr32_iisc_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x001c
    const avr32_iisc_imr_t               IMR       ;
  };
    const unsigned long                  rhr       ;//0x0020
          unsigned long                  thr       ;//0x0024
  union {
    const unsigned long                  version   ;//0x0028
    const avr32_iisc_version_t           VERSION   ;
  };
  union {
    const unsigned long                  parameter ;//0x002c
    const avr32_iisc_parameter_t         PARAMETER ;
  };
} avr32_iisc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_IISC_200_H_INCLUDED*/
#endif


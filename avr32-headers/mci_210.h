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
#ifndef AVR32_MCI_210_H_INCLUDED
#define AVR32_MCI_210_H_INCLUDED

#define AVR32_MCI_H_VERSION 210

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_MCI_<register>
 - Bitfield mask:   AVR32_MCI_<register>_<bitfield>
 - Bitfield offset: AVR32_MCI_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MCI_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_MCI_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_MCI_<bitfield>
 - Bitfield offset: AVR32_MCI_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MCI_<bitfield>_SIZE
 - Bitfield values: AVR32_MCI_<bitfield>_<value name>
 - Bitfield values: AVR32_MCI_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_MCI_00                                       0x00000000
#define AVR32_MCI_1                                        0x00000000
#define AVR32_MCI_1024                                     0x00000004
#define AVR32_MCI_1048576                                  0x00000007
#define AVR32_MCI_128                                      0x00000002
#define AVR32_MCI_136_BIT_RESP                             0x00000002
#define AVR32_MCI_16                                       0x00000001
#define AVR32_MCI_1_BIT                                    0x00000000
#define AVR32_MCI_256                                      0x00000003
#define AVR32_MCI_4096                                     0x00000005
#define AVR32_MCI_48_BIT_RESP                              0x00000001
#define AVR32_MCI_4_BIT                                    0x00000001
#define AVR32_MCI_5_CYCLE_MAX_LAT                          0x00000000
#define AVR32_MCI_64_CYCLE_MAX_LAT                         0x00000001
#define AVR32_MCI_65536                                    0x00000006
#define AVR32_MCI_ARG                                               0
#define AVR32_MCI_ARGR                                     0x00000010
#define AVR32_MCI_ARGR_ARG                                          0
#define AVR32_MCI_ARGR_ARG_MASK                            0xffffffff
#define AVR32_MCI_ARGR_ARG_OFFSET                                   0
#define AVR32_MCI_ARGR_ARG_SIZE                                    32
#define AVR32_MCI_ARG_MASK                                 0xffffffff
#define AVR32_MCI_ARG_OFFSET                                        0
#define AVR32_MCI_ARG_SIZE                                         32
#define AVR32_MCI_BCNT                                              0
#define AVR32_MCI_BCNT_MASK                                0x0000ffff
#define AVR32_MCI_BCNT_OFFSET                                       0
#define AVR32_MCI_BCNT_SIZE                                        16
#define AVR32_MCI_BLKE                                              3
#define AVR32_MCI_BLKE_MASK                                0x00000008
#define AVR32_MCI_BLKE_OFFSET                                       3
#define AVR32_MCI_BLKE_SIZE                                         1
#define AVR32_MCI_BLKLEN                                           16
#define AVR32_MCI_BLKLEN_MASK                              0xffff0000
#define AVR32_MCI_BLKLEN_OFFSET                                    16
#define AVR32_MCI_BLKLEN_SIZE                                      16
#define AVR32_MCI_BLKR                                     0x00000018
#define AVR32_MCI_BLKR_BCNT                                         0
#define AVR32_MCI_BLKR_BCNT_MASK                           0x0000ffff
#define AVR32_MCI_BLKR_BCNT_OFFSET                                  0
#define AVR32_MCI_BLKR_BCNT_SIZE                                   16
#define AVR32_MCI_BLKR_BLKLEN                                      16
#define AVR32_MCI_BLKR_BLKLEN_MASK                         0xffff0000
#define AVR32_MCI_BLKR_BLKLEN_OFFSET                               16
#define AVR32_MCI_BLKR_BLKLEN_SIZE                                 16
#define AVR32_MCI_BLOCK                                    0x00000000
#define AVR32_MCI_CLKDIV                                            0
#define AVR32_MCI_CLKDIV_MASK                              0x000000ff
#define AVR32_MCI_CLKDIV_OFFSET                                     0
#define AVR32_MCI_CLKDIV_SIZE                                       8
#define AVR32_MCI_CMDNB                                             0
#define AVR32_MCI_CMDNB_MASK                               0x0000003f
#define AVR32_MCI_CMDNB_OFFSET                                      0
#define AVR32_MCI_CMDNB_SIZE                                        6
#define AVR32_MCI_CMDR                                     0x00000014
#define AVR32_MCI_CMDRDY                                            0
#define AVR32_MCI_CMDRDY_MASK                              0x00000001
#define AVR32_MCI_CMDRDY_OFFSET                                     0
#define AVR32_MCI_CMDRDY_SIZE                                       1
#define AVR32_MCI_CMDR_CMDNB                                        0
#define AVR32_MCI_CMDR_CMDNB_MASK                          0x0000003f
#define AVR32_MCI_CMDR_CMDNB_OFFSET                                 0
#define AVR32_MCI_CMDR_CMDNB_SIZE                                   6
#define AVR32_MCI_CMDR_IOSPCMD                                     24
#define AVR32_MCI_CMDR_IOSPCMD_MASK                        0x03000000
#define AVR32_MCI_CMDR_IOSPCMD_NO_SDIO_SPEC_CMD            0x00000000
#define AVR32_MCI_CMDR_IOSPCMD_OFFSET                              24
#define AVR32_MCI_CMDR_IOSPCMD_SDIO_RESUME_CMD             0x00000002
#define AVR32_MCI_CMDR_IOSPCMD_SDIO_SUSPEND_CMD            0x00000001
#define AVR32_MCI_CMDR_IOSPCMD_SIZE                                 2
#define AVR32_MCI_CMDR_MAXLAT                                      12
#define AVR32_MCI_CMDR_MAXLAT_5_CYCLE_MAX_LAT              0x00000000
#define AVR32_MCI_CMDR_MAXLAT_64_CYCLE_MAX_LAT             0x00000001
#define AVR32_MCI_CMDR_MAXLAT_MASK                         0x00001000
#define AVR32_MCI_CMDR_MAXLAT_OFFSET                               12
#define AVR32_MCI_CMDR_MAXLAT_SIZE                                  1
#define AVR32_MCI_CMDR_OPDCMD                                      11
#define AVR32_MCI_CMDR_OPDCMD_MASK                         0x00000800
#define AVR32_MCI_CMDR_OPDCMD_OFFSET                               11
#define AVR32_MCI_CMDR_OPDCMD_SIZE                                  1
#define AVR32_MCI_CMDR_RSPTYP                                       6
#define AVR32_MCI_CMDR_RSPTYP_136_BIT_RESP                 0x00000002
#define AVR32_MCI_CMDR_RSPTYP_48_BIT_RESP                  0x00000001
#define AVR32_MCI_CMDR_RSPTYP_MASK                         0x000000c0
#define AVR32_MCI_CMDR_RSPTYP_NO_RESP                      0x00000000
#define AVR32_MCI_CMDR_RSPTYP_OFFSET                                6
#define AVR32_MCI_CMDR_RSPTYP_SIZE                                  2
#define AVR32_MCI_CMDR_SPCMD                                        8
#define AVR32_MCI_CMDR_SPCMD_INIT_CMD                      0x00000001
#define AVR32_MCI_CMDR_SPCMD_INT_CMD                       0x00000004
#define AVR32_MCI_CMDR_SPCMD_INT_RESP                      0x00000005
#define AVR32_MCI_CMDR_SPCMD_MASK                          0x00000700
#define AVR32_MCI_CMDR_SPCMD_NO_SPEC_CMD                   0x00000000
#define AVR32_MCI_CMDR_SPCMD_OFFSET                                 8
#define AVR32_MCI_CMDR_SPCMD_SIZE                                   3
#define AVR32_MCI_CMDR_SPCMD_SYNC_CMD                      0x00000002
#define AVR32_MCI_CMDR_TRCMD                                       16
#define AVR32_MCI_CMDR_TRCMD_MASK                          0x00030000
#define AVR32_MCI_CMDR_TRCMD_NO_TRANS                      0x00000000
#define AVR32_MCI_CMDR_TRCMD_OFFSET                                16
#define AVR32_MCI_CMDR_TRCMD_SIZE                                   2
#define AVR32_MCI_CMDR_TRCMD_START_TRANS                   0x00000001
#define AVR32_MCI_CMDR_TRCMD_STOP_TRANS                    0x00000002
#define AVR32_MCI_CMDR_TRDIR                                       18
#define AVR32_MCI_CMDR_TRDIR_MASK                          0x00040000
#define AVR32_MCI_CMDR_TRDIR_OFFSET                                18
#define AVR32_MCI_CMDR_TRDIR_READ                          0x00000001
#define AVR32_MCI_CMDR_TRDIR_SIZE                                   1
#define AVR32_MCI_CMDR_TRDIR_WRITE                         0x00000000
#define AVR32_MCI_CMDR_TRTYP                                       19
#define AVR32_MCI_CMDR_TRTYP_BLOCK                         0x00000000
#define AVR32_MCI_CMDR_TRTYP_MASK                          0x00380000
#define AVR32_MCI_CMDR_TRTYP_MULTI_BLOCK                   0x00000001
#define AVR32_MCI_CMDR_TRTYP_OFFSET                                19
#define AVR32_MCI_CMDR_TRTYP_SDIO_BLOCK                    0x00000005
#define AVR32_MCI_CMDR_TRTYP_SDIO_BYTE                     0x00000004
#define AVR32_MCI_CMDR_TRTYP_SIZE                                   3
#define AVR32_MCI_CMDR_TRTYP_STREAM                        0x00000002
#define AVR32_MCI_CR                                       0x00000000
#define AVR32_MCI_CR_MCIDIS                                         1
#define AVR32_MCI_CR_MCIDIS_MASK                           0x00000002
#define AVR32_MCI_CR_MCIDIS_OFFSET                                  1
#define AVR32_MCI_CR_MCIDIS_SIZE                                    1
#define AVR32_MCI_CR_MCIEN                                          0
#define AVR32_MCI_CR_MCIEN_MASK                            0x00000001
#define AVR32_MCI_CR_MCIEN_OFFSET                                   0
#define AVR32_MCI_CR_MCIEN_SIZE                                     1
#define AVR32_MCI_CR_PWSDIS                                         3
#define AVR32_MCI_CR_PWSDIS_MASK                           0x00000008
#define AVR32_MCI_CR_PWSDIS_OFFSET                                  3
#define AVR32_MCI_CR_PWSDIS_SIZE                                    1
#define AVR32_MCI_CR_PWSEN                                          2
#define AVR32_MCI_CR_PWSEN_MASK                            0x00000004
#define AVR32_MCI_CR_PWSEN_OFFSET                                   2
#define AVR32_MCI_CR_PWSEN_SIZE                                     1
#define AVR32_MCI_CR_SWRST                                          7
#define AVR32_MCI_CR_SWRST_MASK                            0x00000080
#define AVR32_MCI_CR_SWRST_OFFSET                                   7
#define AVR32_MCI_CR_SWRST_SIZE                                     1
#define AVR32_MCI_DATA                                              0
#define AVR32_MCI_DATA_MASK                                0xffffffff
#define AVR32_MCI_DATA_OFFSET                                       0
#define AVR32_MCI_DATA_SIZE                                        32
#define AVR32_MCI_DCRCE                                            21
#define AVR32_MCI_DCRCE_MASK                               0x00200000
#define AVR32_MCI_DCRCE_OFFSET                                     21
#define AVR32_MCI_DCRCE_SIZE                                        1
#define AVR32_MCI_DTIP                                              4
#define AVR32_MCI_DTIP_MASK                                0x00000010
#define AVR32_MCI_DTIP_OFFSET                                       4
#define AVR32_MCI_DTIP_SIZE                                         1
#define AVR32_MCI_DTOCYC                                            0
#define AVR32_MCI_DTOCYC_MASK                              0x0000000f
#define AVR32_MCI_DTOCYC_OFFSET                                     0
#define AVR32_MCI_DTOCYC_SIZE                                       4
#define AVR32_MCI_DTOE                                             22
#define AVR32_MCI_DTOE_MASK                                0x00400000
#define AVR32_MCI_DTOE_OFFSET                                      22
#define AVR32_MCI_DTOE_SIZE                                         1
#define AVR32_MCI_DTOMUL                                            4
#define AVR32_MCI_DTOMUL_1                                 0x00000000
#define AVR32_MCI_DTOMUL_1024                              0x00000004
#define AVR32_MCI_DTOMUL_1048576                           0x00000007
#define AVR32_MCI_DTOMUL_128                               0x00000002
#define AVR32_MCI_DTOMUL_16                                0x00000001
#define AVR32_MCI_DTOMUL_256                               0x00000003
#define AVR32_MCI_DTOMUL_4096                              0x00000005
#define AVR32_MCI_DTOMUL_65536                             0x00000006
#define AVR32_MCI_DTOMUL_MASK                              0x00000070
#define AVR32_MCI_DTOMUL_OFFSET                                     4
#define AVR32_MCI_DTOMUL_SIZE                                       3
#define AVR32_MCI_DTOR                                     0x00000008
#define AVR32_MCI_DTOR_DTOCYC                                       0
#define AVR32_MCI_DTOR_DTOCYC_MASK                         0x0000000f
#define AVR32_MCI_DTOR_DTOCYC_OFFSET                                0
#define AVR32_MCI_DTOR_DTOCYC_SIZE                                  4
#define AVR32_MCI_DTOR_DTOMUL                                       4
#define AVR32_MCI_DTOR_DTOMUL_1                            0x00000000
#define AVR32_MCI_DTOR_DTOMUL_1024                         0x00000004
#define AVR32_MCI_DTOR_DTOMUL_1048576                      0x00000007
#define AVR32_MCI_DTOR_DTOMUL_128                          0x00000002
#define AVR32_MCI_DTOR_DTOMUL_16                           0x00000001
#define AVR32_MCI_DTOR_DTOMUL_256                          0x00000003
#define AVR32_MCI_DTOR_DTOMUL_4096                         0x00000005
#define AVR32_MCI_DTOR_DTOMUL_65536                        0x00000006
#define AVR32_MCI_DTOR_DTOMUL_MASK                         0x00000070
#define AVR32_MCI_DTOR_DTOMUL_OFFSET                                4
#define AVR32_MCI_DTOR_DTOMUL_SIZE                                  3
#define AVR32_MCI_ENDRX                                             6
#define AVR32_MCI_ENDRX_MASK                               0x00000040
#define AVR32_MCI_ENDRX_OFFSET                                      6
#define AVR32_MCI_ENDRX_SIZE                                        1
#define AVR32_MCI_ENDTX                                             7
#define AVR32_MCI_ENDTX_MASK                               0x00000080
#define AVR32_MCI_ENDTX_OFFSET                                      7
#define AVR32_MCI_ENDTX_SIZE                                        1
#define AVR32_MCI_FF                                       0x00000001
#define AVR32_MCI_IDR                                      0x00000048
#define AVR32_MCI_IDR_BLKE                                          3
#define AVR32_MCI_IDR_BLKE_MASK                            0x00000008
#define AVR32_MCI_IDR_BLKE_OFFSET                                   3
#define AVR32_MCI_IDR_BLKE_SIZE                                     1
#define AVR32_MCI_IDR_CMDRDY                                        0
#define AVR32_MCI_IDR_CMDRDY_MASK                          0x00000001
#define AVR32_MCI_IDR_CMDRDY_OFFSET                                 0
#define AVR32_MCI_IDR_CMDRDY_SIZE                                   1
#define AVR32_MCI_IDR_DCRCE                                        21
#define AVR32_MCI_IDR_DCRCE_MASK                           0x00200000
#define AVR32_MCI_IDR_DCRCE_OFFSET                                 21
#define AVR32_MCI_IDR_DCRCE_SIZE                                    1
#define AVR32_MCI_IDR_DTIP                                          4
#define AVR32_MCI_IDR_DTIP_MASK                            0x00000010
#define AVR32_MCI_IDR_DTIP_OFFSET                                   4
#define AVR32_MCI_IDR_DTIP_SIZE                                     1
#define AVR32_MCI_IDR_DTOE                                         22
#define AVR32_MCI_IDR_DTOE_MASK                            0x00400000
#define AVR32_MCI_IDR_DTOE_OFFSET                                  22
#define AVR32_MCI_IDR_DTOE_SIZE                                     1
#define AVR32_MCI_IDR_ENDRX                                         6
#define AVR32_MCI_IDR_ENDRX_MASK                           0x00000040
#define AVR32_MCI_IDR_ENDRX_OFFSET                                  6
#define AVR32_MCI_IDR_ENDRX_SIZE                                    1
#define AVR32_MCI_IDR_ENDTX                                         7
#define AVR32_MCI_IDR_ENDTX_MASK                           0x00000080
#define AVR32_MCI_IDR_ENDTX_OFFSET                                  7
#define AVR32_MCI_IDR_ENDTX_SIZE                                    1
#define AVR32_MCI_IDR_NOTBUSY                                       5
#define AVR32_MCI_IDR_NOTBUSY_MASK                         0x00000020
#define AVR32_MCI_IDR_NOTBUSY_OFFSET                                5
#define AVR32_MCI_IDR_NOTBUSY_SIZE                                  1
#define AVR32_MCI_IDR_OVRE                                         30
#define AVR32_MCI_IDR_OVRE_MASK                            0x40000000
#define AVR32_MCI_IDR_OVRE_OFFSET                                  30
#define AVR32_MCI_IDR_OVRE_SIZE                                     1
#define AVR32_MCI_IDR_RCRCE                                        18
#define AVR32_MCI_IDR_RCRCE_MASK                           0x00040000
#define AVR32_MCI_IDR_RCRCE_OFFSET                                 18
#define AVR32_MCI_IDR_RCRCE_SIZE                                    1
#define AVR32_MCI_IDR_RDIRE                                        17
#define AVR32_MCI_IDR_RDIRE_MASK                           0x00020000
#define AVR32_MCI_IDR_RDIRE_OFFSET                                 17
#define AVR32_MCI_IDR_RDIRE_SIZE                                    1
#define AVR32_MCI_IDR_RENDE                                        19
#define AVR32_MCI_IDR_RENDE_MASK                           0x00080000
#define AVR32_MCI_IDR_RENDE_OFFSET                                 19
#define AVR32_MCI_IDR_RENDE_SIZE                                    1
#define AVR32_MCI_IDR_RINDE                                        16
#define AVR32_MCI_IDR_RINDE_MASK                           0x00010000
#define AVR32_MCI_IDR_RINDE_OFFSET                                 16
#define AVR32_MCI_IDR_RINDE_SIZE                                    1
#define AVR32_MCI_IDR_RTOE                                         20
#define AVR32_MCI_IDR_RTOE_MASK                            0x00100000
#define AVR32_MCI_IDR_RTOE_OFFSET                                  20
#define AVR32_MCI_IDR_RTOE_SIZE                                     1
#define AVR32_MCI_IDR_RXBUFF                                       14
#define AVR32_MCI_IDR_RXBUFF_MASK                          0x00004000
#define AVR32_MCI_IDR_RXBUFF_OFFSET                                14
#define AVR32_MCI_IDR_RXBUFF_SIZE                                   1
#define AVR32_MCI_IDR_RXRDY                                         1
#define AVR32_MCI_IDR_RXRDY_MASK                           0x00000002
#define AVR32_MCI_IDR_RXRDY_OFFSET                                  1
#define AVR32_MCI_IDR_RXRDY_SIZE                                    1
#define AVR32_MCI_IDR_SDIOIRQA                                      8
#define AVR32_MCI_IDR_SDIOIRQA_MASK                        0x00000100
#define AVR32_MCI_IDR_SDIOIRQA_OFFSET                               8
#define AVR32_MCI_IDR_SDIOIRQA_SIZE                                 1
#define AVR32_MCI_IDR_SDIOIRQB                                      9
#define AVR32_MCI_IDR_SDIOIRQB_MASK                        0x00000200
#define AVR32_MCI_IDR_SDIOIRQB_OFFSET                               9
#define AVR32_MCI_IDR_SDIOIRQB_SIZE                                 1
#define AVR32_MCI_IDR_SDIOIRQC                                     10
#define AVR32_MCI_IDR_SDIOIRQC_MASK                        0x00000400
#define AVR32_MCI_IDR_SDIOIRQC_OFFSET                              10
#define AVR32_MCI_IDR_SDIOIRQC_SIZE                                 1
#define AVR32_MCI_IDR_SDIOIRQD                                     11
#define AVR32_MCI_IDR_SDIOIRQD_MASK                        0x00000800
#define AVR32_MCI_IDR_SDIOIRQD_OFFSET                              11
#define AVR32_MCI_IDR_SDIOIRQD_SIZE                                 1
#define AVR32_MCI_IDR_TXBUFE                                       15
#define AVR32_MCI_IDR_TXBUFE_MASK                          0x00008000
#define AVR32_MCI_IDR_TXBUFE_OFFSET                                15
#define AVR32_MCI_IDR_TXBUFE_SIZE                                   1
#define AVR32_MCI_IDR_TXRDY                                         2
#define AVR32_MCI_IDR_TXRDY_MASK                           0x00000004
#define AVR32_MCI_IDR_TXRDY_OFFSET                                  2
#define AVR32_MCI_IDR_TXRDY_SIZE                                    1
#define AVR32_MCI_IDR_UNRE                                         31
#define AVR32_MCI_IDR_UNRE_MASK                            0x80000000
#define AVR32_MCI_IDR_UNRE_OFFSET                                  31
#define AVR32_MCI_IDR_UNRE_SIZE                                     1
#define AVR32_MCI_IER                                      0x00000044
#define AVR32_MCI_IER_BLKE                                          3
#define AVR32_MCI_IER_BLKE_MASK                            0x00000008
#define AVR32_MCI_IER_BLKE_OFFSET                                   3
#define AVR32_MCI_IER_BLKE_SIZE                                     1
#define AVR32_MCI_IER_CMDRDY                                        0
#define AVR32_MCI_IER_CMDRDY_MASK                          0x00000001
#define AVR32_MCI_IER_CMDRDY_OFFSET                                 0
#define AVR32_MCI_IER_CMDRDY_SIZE                                   1
#define AVR32_MCI_IER_DCRCE                                        21
#define AVR32_MCI_IER_DCRCE_MASK                           0x00200000
#define AVR32_MCI_IER_DCRCE_OFFSET                                 21
#define AVR32_MCI_IER_DCRCE_SIZE                                    1
#define AVR32_MCI_IER_DTIP                                          4
#define AVR32_MCI_IER_DTIP_MASK                            0x00000010
#define AVR32_MCI_IER_DTIP_OFFSET                                   4
#define AVR32_MCI_IER_DTIP_SIZE                                     1
#define AVR32_MCI_IER_DTOE                                         22
#define AVR32_MCI_IER_DTOE_MASK                            0x00400000
#define AVR32_MCI_IER_DTOE_OFFSET                                  22
#define AVR32_MCI_IER_DTOE_SIZE                                     1
#define AVR32_MCI_IER_ENDRX                                         6
#define AVR32_MCI_IER_ENDRX_MASK                           0x00000040
#define AVR32_MCI_IER_ENDRX_OFFSET                                  6
#define AVR32_MCI_IER_ENDRX_SIZE                                    1
#define AVR32_MCI_IER_ENDTX                                         7
#define AVR32_MCI_IER_ENDTX_MASK                           0x00000080
#define AVR32_MCI_IER_ENDTX_OFFSET                                  7
#define AVR32_MCI_IER_ENDTX_SIZE                                    1
#define AVR32_MCI_IER_NOTBUSY                                       5
#define AVR32_MCI_IER_NOTBUSY_MASK                         0x00000020
#define AVR32_MCI_IER_NOTBUSY_OFFSET                                5
#define AVR32_MCI_IER_NOTBUSY_SIZE                                  1
#define AVR32_MCI_IER_OVRE                                         30
#define AVR32_MCI_IER_OVRE_MASK                            0x40000000
#define AVR32_MCI_IER_OVRE_OFFSET                                  30
#define AVR32_MCI_IER_OVRE_SIZE                                     1
#define AVR32_MCI_IER_RCRCE                                        18
#define AVR32_MCI_IER_RCRCE_MASK                           0x00040000
#define AVR32_MCI_IER_RCRCE_OFFSET                                 18
#define AVR32_MCI_IER_RCRCE_SIZE                                    1
#define AVR32_MCI_IER_RDIRE                                        17
#define AVR32_MCI_IER_RDIRE_MASK                           0x00020000
#define AVR32_MCI_IER_RDIRE_OFFSET                                 17
#define AVR32_MCI_IER_RDIRE_SIZE                                    1
#define AVR32_MCI_IER_RENDE                                        19
#define AVR32_MCI_IER_RENDE_MASK                           0x00080000
#define AVR32_MCI_IER_RENDE_OFFSET                                 19
#define AVR32_MCI_IER_RENDE_SIZE                                    1
#define AVR32_MCI_IER_RINDE                                        16
#define AVR32_MCI_IER_RINDE_MASK                           0x00010000
#define AVR32_MCI_IER_RINDE_OFFSET                                 16
#define AVR32_MCI_IER_RINDE_SIZE                                    1
#define AVR32_MCI_IER_RTOE                                         20
#define AVR32_MCI_IER_RTOE_MASK                            0x00100000
#define AVR32_MCI_IER_RTOE_OFFSET                                  20
#define AVR32_MCI_IER_RTOE_SIZE                                     1
#define AVR32_MCI_IER_RXBUFF                                       14
#define AVR32_MCI_IER_RXBUFF_MASK                          0x00004000
#define AVR32_MCI_IER_RXBUFF_OFFSET                                14
#define AVR32_MCI_IER_RXBUFF_SIZE                                   1
#define AVR32_MCI_IER_RXRDY                                         1
#define AVR32_MCI_IER_RXRDY_MASK                           0x00000002
#define AVR32_MCI_IER_RXRDY_OFFSET                                  1
#define AVR32_MCI_IER_RXRDY_SIZE                                    1
#define AVR32_MCI_IER_SDIOIRQA                                      8
#define AVR32_MCI_IER_SDIOIRQA_MASK                        0x00000100
#define AVR32_MCI_IER_SDIOIRQA_OFFSET                               8
#define AVR32_MCI_IER_SDIOIRQA_SIZE                                 1
#define AVR32_MCI_IER_SDIOIRQB                                      9
#define AVR32_MCI_IER_SDIOIRQB_MASK                        0x00000200
#define AVR32_MCI_IER_SDIOIRQB_OFFSET                               9
#define AVR32_MCI_IER_SDIOIRQB_SIZE                                 1
#define AVR32_MCI_IER_SDIOIRQC                                     10
#define AVR32_MCI_IER_SDIOIRQC_MASK                        0x00000400
#define AVR32_MCI_IER_SDIOIRQC_OFFSET                              10
#define AVR32_MCI_IER_SDIOIRQC_SIZE                                 1
#define AVR32_MCI_IER_SDIOIRQD                                     11
#define AVR32_MCI_IER_SDIOIRQD_MASK                        0x00000800
#define AVR32_MCI_IER_SDIOIRQD_OFFSET                              11
#define AVR32_MCI_IER_SDIOIRQD_SIZE                                 1
#define AVR32_MCI_IER_TXBUFE                                       15
#define AVR32_MCI_IER_TXBUFE_MASK                          0x00008000
#define AVR32_MCI_IER_TXBUFE_OFFSET                                15
#define AVR32_MCI_IER_TXBUFE_SIZE                                   1
#define AVR32_MCI_IER_TXRDY                                         2
#define AVR32_MCI_IER_TXRDY_MASK                           0x00000004
#define AVR32_MCI_IER_TXRDY_OFFSET                                  2
#define AVR32_MCI_IER_TXRDY_SIZE                                    1
#define AVR32_MCI_IER_UNRE                                         31
#define AVR32_MCI_IER_UNRE_MASK                            0x80000000
#define AVR32_MCI_IER_UNRE_OFFSET                                  31
#define AVR32_MCI_IER_UNRE_SIZE                                     1
#define AVR32_MCI_IMR                                      0x0000004c
#define AVR32_MCI_IMR_BLKE                                          3
#define AVR32_MCI_IMR_BLKE_MASK                            0x00000008
#define AVR32_MCI_IMR_BLKE_OFFSET                                   3
#define AVR32_MCI_IMR_BLKE_SIZE                                     1
#define AVR32_MCI_IMR_CMDRDY                                        0
#define AVR32_MCI_IMR_CMDRDY_MASK                          0x00000001
#define AVR32_MCI_IMR_CMDRDY_OFFSET                                 0
#define AVR32_MCI_IMR_CMDRDY_SIZE                                   1
#define AVR32_MCI_IMR_DCRCE                                        21
#define AVR32_MCI_IMR_DCRCE_MASK                           0x00200000
#define AVR32_MCI_IMR_DCRCE_OFFSET                                 21
#define AVR32_MCI_IMR_DCRCE_SIZE                                    1
#define AVR32_MCI_IMR_DTIP                                          4
#define AVR32_MCI_IMR_DTIP_MASK                            0x00000010
#define AVR32_MCI_IMR_DTIP_OFFSET                                   4
#define AVR32_MCI_IMR_DTIP_SIZE                                     1
#define AVR32_MCI_IMR_DTOE                                         22
#define AVR32_MCI_IMR_DTOE_MASK                            0x00400000
#define AVR32_MCI_IMR_DTOE_OFFSET                                  22
#define AVR32_MCI_IMR_DTOE_SIZE                                     1
#define AVR32_MCI_IMR_ENDRX                                         6
#define AVR32_MCI_IMR_ENDRX_MASK                           0x00000040
#define AVR32_MCI_IMR_ENDRX_OFFSET                                  6
#define AVR32_MCI_IMR_ENDRX_SIZE                                    1
#define AVR32_MCI_IMR_ENDTX                                         7
#define AVR32_MCI_IMR_ENDTX_MASK                           0x00000080
#define AVR32_MCI_IMR_ENDTX_OFFSET                                  7
#define AVR32_MCI_IMR_ENDTX_SIZE                                    1
#define AVR32_MCI_IMR_NOTBUSY                                       5
#define AVR32_MCI_IMR_NOTBUSY_MASK                         0x00000020
#define AVR32_MCI_IMR_NOTBUSY_OFFSET                                5
#define AVR32_MCI_IMR_NOTBUSY_SIZE                                  1
#define AVR32_MCI_IMR_OVRE                                         30
#define AVR32_MCI_IMR_OVRE_MASK                            0x40000000
#define AVR32_MCI_IMR_OVRE_OFFSET                                  30
#define AVR32_MCI_IMR_OVRE_SIZE                                     1
#define AVR32_MCI_IMR_RCRCE                                        18
#define AVR32_MCI_IMR_RCRCE_MASK                           0x00040000
#define AVR32_MCI_IMR_RCRCE_OFFSET                                 18
#define AVR32_MCI_IMR_RCRCE_SIZE                                    1
#define AVR32_MCI_IMR_RDIRE                                        17
#define AVR32_MCI_IMR_RDIRE_MASK                           0x00020000
#define AVR32_MCI_IMR_RDIRE_OFFSET                                 17
#define AVR32_MCI_IMR_RDIRE_SIZE                                    1
#define AVR32_MCI_IMR_RENDE                                        19
#define AVR32_MCI_IMR_RENDE_MASK                           0x00080000
#define AVR32_MCI_IMR_RENDE_OFFSET                                 19
#define AVR32_MCI_IMR_RENDE_SIZE                                    1
#define AVR32_MCI_IMR_RINDE                                        16
#define AVR32_MCI_IMR_RINDE_MASK                           0x00010000
#define AVR32_MCI_IMR_RINDE_OFFSET                                 16
#define AVR32_MCI_IMR_RINDE_SIZE                                    1
#define AVR32_MCI_IMR_RTOE                                         20
#define AVR32_MCI_IMR_RTOE_MASK                            0x00100000
#define AVR32_MCI_IMR_RTOE_OFFSET                                  20
#define AVR32_MCI_IMR_RTOE_SIZE                                     1
#define AVR32_MCI_IMR_RXBUFF                                       14
#define AVR32_MCI_IMR_RXBUFF_MASK                          0x00004000
#define AVR32_MCI_IMR_RXBUFF_OFFSET                                14
#define AVR32_MCI_IMR_RXBUFF_SIZE                                   1
#define AVR32_MCI_IMR_RXRDY                                         1
#define AVR32_MCI_IMR_RXRDY_MASK                           0x00000002
#define AVR32_MCI_IMR_RXRDY_OFFSET                                  1
#define AVR32_MCI_IMR_RXRDY_SIZE                                    1
#define AVR32_MCI_IMR_SDIOIRQA                                      8
#define AVR32_MCI_IMR_SDIOIRQA_MASK                        0x00000100
#define AVR32_MCI_IMR_SDIOIRQA_OFFSET                               8
#define AVR32_MCI_IMR_SDIOIRQA_SIZE                                 1
#define AVR32_MCI_IMR_SDIOIRQB                                      9
#define AVR32_MCI_IMR_SDIOIRQB_MASK                        0x00000200
#define AVR32_MCI_IMR_SDIOIRQB_OFFSET                               9
#define AVR32_MCI_IMR_SDIOIRQB_SIZE                                 1
#define AVR32_MCI_IMR_SDIOIRQC                                     10
#define AVR32_MCI_IMR_SDIOIRQC_MASK                        0x00000400
#define AVR32_MCI_IMR_SDIOIRQC_OFFSET                              10
#define AVR32_MCI_IMR_SDIOIRQC_SIZE                                 1
#define AVR32_MCI_IMR_SDIOIRQD                                     11
#define AVR32_MCI_IMR_SDIOIRQD_MASK                        0x00000800
#define AVR32_MCI_IMR_SDIOIRQD_OFFSET                              11
#define AVR32_MCI_IMR_SDIOIRQD_SIZE                                 1
#define AVR32_MCI_IMR_TXBUFE                                       15
#define AVR32_MCI_IMR_TXBUFE_MASK                          0x00008000
#define AVR32_MCI_IMR_TXBUFE_OFFSET                                15
#define AVR32_MCI_IMR_TXBUFE_SIZE                                   1
#define AVR32_MCI_IMR_TXRDY                                         2
#define AVR32_MCI_IMR_TXRDY_MASK                           0x00000004
#define AVR32_MCI_IMR_TXRDY_OFFSET                                  2
#define AVR32_MCI_IMR_TXRDY_SIZE                                    1
#define AVR32_MCI_IMR_UNRE                                         31
#define AVR32_MCI_IMR_UNRE_MASK                            0x80000000
#define AVR32_MCI_IMR_UNRE_OFFSET                                  31
#define AVR32_MCI_IMR_UNRE_SIZE                                     1
#define AVR32_MCI_INIT_CMD                                 0x00000001
#define AVR32_MCI_INT_CMD                                  0x00000004
#define AVR32_MCI_INT_RESP                                 0x00000005
#define AVR32_MCI_IOSPCMD                                          24
#define AVR32_MCI_IOSPCMD_MASK                             0x03000000
#define AVR32_MCI_IOSPCMD_NO_SDIO_SPEC_CMD                 0x00000000
#define AVR32_MCI_IOSPCMD_OFFSET                                   24
#define AVR32_MCI_IOSPCMD_SDIO_RESUME_CMD                  0x00000002
#define AVR32_MCI_IOSPCMD_SDIO_SUSPEND_CMD                 0x00000001
#define AVR32_MCI_IOSPCMD_SIZE                                      2
#define AVR32_MCI_MAXLAT                                           12
#define AVR32_MCI_MAXLAT_5_CYCLE_MAX_LAT                   0x00000000
#define AVR32_MCI_MAXLAT_64_CYCLE_MAX_LAT                  0x00000001
#define AVR32_MCI_MAXLAT_MASK                              0x00001000
#define AVR32_MCI_MAXLAT_OFFSET                                    12
#define AVR32_MCI_MAXLAT_SIZE                                       1
#define AVR32_MCI_MCIDIS                                            1
#define AVR32_MCI_MCIDIS_MASK                              0x00000002
#define AVR32_MCI_MCIDIS_OFFSET                                     1
#define AVR32_MCI_MCIDIS_SIZE                                       1
#define AVR32_MCI_MCIEN                                             0
#define AVR32_MCI_MCIEN_MASK                               0x00000001
#define AVR32_MCI_MCIEN_OFFSET                                      0
#define AVR32_MCI_MCIEN_SIZE                                        1
#define AVR32_MCI_MR                                       0x00000004
#define AVR32_MCI_MR_BLKLEN                                        16
#define AVR32_MCI_MR_BLKLEN_MASK                           0xffff0000
#define AVR32_MCI_MR_BLKLEN_OFFSET                                 16
#define AVR32_MCI_MR_BLKLEN_SIZE                                   16
#define AVR32_MCI_MR_CLKDIV                                         0
#define AVR32_MCI_MR_CLKDIV_MASK                           0x000000ff
#define AVR32_MCI_MR_CLKDIV_OFFSET                                  0
#define AVR32_MCI_MR_CLKDIV_SIZE                                    8
#define AVR32_MCI_MR_PDCFBYTE                                      13
#define AVR32_MCI_MR_PDCFBYTE_MASK                         0x00002000
#define AVR32_MCI_MR_PDCFBYTE_OFFSET                               13
#define AVR32_MCI_MR_PDCFBYTE_SIZE                                  1
#define AVR32_MCI_MR_PDCMODE                                       15
#define AVR32_MCI_MR_PDCMODE_MASK                          0x00008000
#define AVR32_MCI_MR_PDCMODE_OFFSET                                15
#define AVR32_MCI_MR_PDCMODE_SIZE                                   1
#define AVR32_MCI_MR_PDCPADV                                       14
#define AVR32_MCI_MR_PDCPADV_00                            0x00000000
#define AVR32_MCI_MR_PDCPADV_FF                            0x00000001
#define AVR32_MCI_MR_PDCPADV_MASK                          0x00004000
#define AVR32_MCI_MR_PDCPADV_OFFSET                                14
#define AVR32_MCI_MR_PDCPADV_SIZE                                   1
#define AVR32_MCI_MR_PWSDIV                                         8
#define AVR32_MCI_MR_PWSDIV_MASK                           0x00000700
#define AVR32_MCI_MR_PWSDIV_OFFSET                                  8
#define AVR32_MCI_MR_PWSDIV_SIZE                                    3
#define AVR32_MCI_MR_RDPROOF                                       11
#define AVR32_MCI_MR_RDPROOF_MASK                          0x00000800
#define AVR32_MCI_MR_RDPROOF_OFFSET                                11
#define AVR32_MCI_MR_RDPROOF_SIZE                                   1
#define AVR32_MCI_MR_WRPROOF                                       12
#define AVR32_MCI_MR_WRPROOF_MASK                          0x00001000
#define AVR32_MCI_MR_WRPROOF_OFFSET                                12
#define AVR32_MCI_MR_WRPROOF_SIZE                                   1
#define AVR32_MCI_MULTI_BLOCK                              0x00000001
#define AVR32_MCI_NOTBUSY                                           5
#define AVR32_MCI_NOTBUSY_MASK                             0x00000020
#define AVR32_MCI_NOTBUSY_OFFSET                                    5
#define AVR32_MCI_NOTBUSY_SIZE                                      1
#define AVR32_MCI_NO_RESP                                  0x00000000
#define AVR32_MCI_NO_SDIO_SPEC_CMD                         0x00000000
#define AVR32_MCI_NO_SPEC_CMD                              0x00000000
#define AVR32_MCI_NO_TRANS                                 0x00000000
#define AVR32_MCI_OPDCMD                                           11
#define AVR32_MCI_OPDCMD_MASK                              0x00000800
#define AVR32_MCI_OPDCMD_OFFSET                                    11
#define AVR32_MCI_OPDCMD_SIZE                                       1
#define AVR32_MCI_OVRE                                             30
#define AVR32_MCI_OVRE_MASK                                0x40000000
#define AVR32_MCI_OVRE_OFFSET                                      30
#define AVR32_MCI_OVRE_SIZE                                         1
#define AVR32_MCI_PDCFBYTE                                         13
#define AVR32_MCI_PDCFBYTE_MASK                            0x00002000
#define AVR32_MCI_PDCFBYTE_OFFSET                                  13
#define AVR32_MCI_PDCFBYTE_SIZE                                     1
#define AVR32_MCI_PDCMODE                                          15
#define AVR32_MCI_PDCMODE_MASK                             0x00008000
#define AVR32_MCI_PDCMODE_OFFSET                                   15
#define AVR32_MCI_PDCMODE_SIZE                                      1
#define AVR32_MCI_PDCPADV                                          14
#define AVR32_MCI_PDCPADV_00                               0x00000000
#define AVR32_MCI_PDCPADV_FF                               0x00000001
#define AVR32_MCI_PDCPADV_MASK                             0x00004000
#define AVR32_MCI_PDCPADV_OFFSET                                   14
#define AVR32_MCI_PDCPADV_SIZE                                      1
#define AVR32_MCI_PWSDIS                                            3
#define AVR32_MCI_PWSDIS_MASK                              0x00000008
#define AVR32_MCI_PWSDIS_OFFSET                                     3
#define AVR32_MCI_PWSDIS_SIZE                                       1
#define AVR32_MCI_PWSDIV                                            8
#define AVR32_MCI_PWSDIV_MASK                              0x00000700
#define AVR32_MCI_PWSDIV_OFFSET                                     8
#define AVR32_MCI_PWSDIV_SIZE                                       3
#define AVR32_MCI_PWSEN                                             2
#define AVR32_MCI_PWSEN_MASK                               0x00000004
#define AVR32_MCI_PWSEN_OFFSET                                      2
#define AVR32_MCI_PWSEN_SIZE                                        1
#define AVR32_MCI_RCRCE                                            18
#define AVR32_MCI_RCRCE_MASK                               0x00040000
#define AVR32_MCI_RCRCE_OFFSET                                     18
#define AVR32_MCI_RCRCE_SIZE                                        1
#define AVR32_MCI_RDIRE                                            17
#define AVR32_MCI_RDIRE_MASK                               0x00020000
#define AVR32_MCI_RDIRE_OFFSET                                     17
#define AVR32_MCI_RDIRE_SIZE                                        1
#define AVR32_MCI_RDPROOF                                          11
#define AVR32_MCI_RDPROOF_MASK                             0x00000800
#define AVR32_MCI_RDPROOF_OFFSET                                   11
#define AVR32_MCI_RDPROOF_SIZE                                      1
#define AVR32_MCI_RDR                                      0x00000030
#define AVR32_MCI_RDR_DATA                                          0
#define AVR32_MCI_RDR_DATA_MASK                            0xffffffff
#define AVR32_MCI_RDR_DATA_OFFSET                                   0
#define AVR32_MCI_RDR_DATA_SIZE                                    32
#define AVR32_MCI_READ                                     0x00000001
#define AVR32_MCI_RENDE                                            19
#define AVR32_MCI_RENDE_MASK                               0x00080000
#define AVR32_MCI_RENDE_OFFSET                                     19
#define AVR32_MCI_RENDE_SIZE                                        1
#define AVR32_MCI_RINDE                                            16
#define AVR32_MCI_RINDE_MASK                               0x00010000
#define AVR32_MCI_RINDE_OFFSET                                     16
#define AVR32_MCI_RINDE_SIZE                                        1
#define AVR32_MCI_RSP                                               0
#define AVR32_MCI_RSPR0                                    0x00000020
#define AVR32_MCI_RSPR0_RSP                                         0
#define AVR32_MCI_RSPR0_RSP_MASK                           0xffffffff
#define AVR32_MCI_RSPR0_RSP_OFFSET                                  0
#define AVR32_MCI_RSPR0_RSP_SIZE                                   32
#define AVR32_MCI_RSPR1                                    0x00000024
#define AVR32_MCI_RSPR1_RSP                                         0
#define AVR32_MCI_RSPR1_RSP_MASK                           0xffffffff
#define AVR32_MCI_RSPR1_RSP_OFFSET                                  0
#define AVR32_MCI_RSPR1_RSP_SIZE                                   32
#define AVR32_MCI_RSPR2                                    0x00000028
#define AVR32_MCI_RSPR2_RSP                                         0
#define AVR32_MCI_RSPR2_RSP_MASK                           0xffffffff
#define AVR32_MCI_RSPR2_RSP_OFFSET                                  0
#define AVR32_MCI_RSPR2_RSP_SIZE                                   32
#define AVR32_MCI_RSPR3                                    0x0000002c
#define AVR32_MCI_RSPR3_RSP                                         0
#define AVR32_MCI_RSPR3_RSP_MASK                           0xffffffff
#define AVR32_MCI_RSPR3_RSP_OFFSET                                  0
#define AVR32_MCI_RSPR3_RSP_SIZE                                   32
#define AVR32_MCI_RSPTYP                                            6
#define AVR32_MCI_RSPTYP_136_BIT_RESP                      0x00000002
#define AVR32_MCI_RSPTYP_48_BIT_RESP                       0x00000001
#define AVR32_MCI_RSPTYP_MASK                              0x000000c0
#define AVR32_MCI_RSPTYP_NO_RESP                           0x00000000
#define AVR32_MCI_RSPTYP_OFFSET                                     6
#define AVR32_MCI_RSPTYP_SIZE                                       2
#define AVR32_MCI_RSP_MASK                                 0xffffffff
#define AVR32_MCI_RSP_OFFSET                                        0
#define AVR32_MCI_RSP_SIZE                                         32
#define AVR32_MCI_RTOE                                             20
#define AVR32_MCI_RTOE_MASK                                0x00100000
#define AVR32_MCI_RTOE_OFFSET                                      20
#define AVR32_MCI_RTOE_SIZE                                         1
#define AVR32_MCI_RXBUFF                                           14
#define AVR32_MCI_RXBUFF_MASK                              0x00004000
#define AVR32_MCI_RXBUFF_OFFSET                                    14
#define AVR32_MCI_RXBUFF_SIZE                                       1
#define AVR32_MCI_RXRDY                                             1
#define AVR32_MCI_RXRDY_MASK                               0x00000002
#define AVR32_MCI_RXRDY_OFFSET                                      1
#define AVR32_MCI_RXRDY_SIZE                                        1
#define AVR32_MCI_SDCBUS                                            7
#define AVR32_MCI_SDCBUS_1_BIT                             0x00000000
#define AVR32_MCI_SDCBUS_4_BIT                             0x00000001
#define AVR32_MCI_SDCBUS_MASK                              0x00000080
#define AVR32_MCI_SDCBUS_OFFSET                                     7
#define AVR32_MCI_SDCBUS_SIZE                                       1
#define AVR32_MCI_SDCR                                     0x0000000c
#define AVR32_MCI_SDCR_SDCBUS                                       7
#define AVR32_MCI_SDCR_SDCBUS_1_BIT                        0x00000000
#define AVR32_MCI_SDCR_SDCBUS_4_BIT                        0x00000001
#define AVR32_MCI_SDCR_SDCBUS_MASK                         0x00000080
#define AVR32_MCI_SDCR_SDCBUS_OFFSET                                7
#define AVR32_MCI_SDCR_SDCBUS_SIZE                                  1
#define AVR32_MCI_SDCR_SDCSEL                                       0
#define AVR32_MCI_SDCR_SDCSEL_MASK                         0x00000003
#define AVR32_MCI_SDCR_SDCSEL_OFFSET                                0
#define AVR32_MCI_SDCR_SDCSEL_SIZE                                  2
#define AVR32_MCI_SDCSEL                                            0
#define AVR32_MCI_SDCSEL_MASK                              0x00000003
#define AVR32_MCI_SDCSEL_OFFSET                                     0
#define AVR32_MCI_SDCSEL_SIZE                                       2
#define AVR32_MCI_SDIOIRQA                                          8
#define AVR32_MCI_SDIOIRQA_MASK                            0x00000100
#define AVR32_MCI_SDIOIRQA_OFFSET                                   8
#define AVR32_MCI_SDIOIRQA_SIZE                                     1
#define AVR32_MCI_SDIOIRQB                                          9
#define AVR32_MCI_SDIOIRQB_MASK                            0x00000200
#define AVR32_MCI_SDIOIRQB_OFFSET                                   9
#define AVR32_MCI_SDIOIRQB_SIZE                                     1
#define AVR32_MCI_SDIOIRQC                                         10
#define AVR32_MCI_SDIOIRQC_MASK                            0x00000400
#define AVR32_MCI_SDIOIRQC_OFFSET                                  10
#define AVR32_MCI_SDIOIRQC_SIZE                                     1
#define AVR32_MCI_SDIOIRQD                                         11
#define AVR32_MCI_SDIOIRQD_MASK                            0x00000800
#define AVR32_MCI_SDIOIRQD_OFFSET                                  11
#define AVR32_MCI_SDIOIRQD_SIZE                                     1
#define AVR32_MCI_SDIO_BLOCK                               0x00000005
#define AVR32_MCI_SDIO_BYTE                                0x00000004
#define AVR32_MCI_SDIO_RESUME_CMD                          0x00000002
#define AVR32_MCI_SDIO_SUSPEND_CMD                         0x00000001
#define AVR32_MCI_SPCMD                                             8
#define AVR32_MCI_SPCMD_INIT_CMD                           0x00000001
#define AVR32_MCI_SPCMD_INT_CMD                            0x00000004
#define AVR32_MCI_SPCMD_INT_RESP                           0x00000005
#define AVR32_MCI_SPCMD_MASK                               0x00000700
#define AVR32_MCI_SPCMD_NO_SPEC_CMD                        0x00000000
#define AVR32_MCI_SPCMD_OFFSET                                      8
#define AVR32_MCI_SPCMD_SIZE                                        3
#define AVR32_MCI_SPCMD_SYNC_CMD                           0x00000002
#define AVR32_MCI_SR                                       0x00000040
#define AVR32_MCI_SR_BLKE                                           3
#define AVR32_MCI_SR_BLKE_MASK                             0x00000008
#define AVR32_MCI_SR_BLKE_OFFSET                                    3
#define AVR32_MCI_SR_BLKE_SIZE                                      1
#define AVR32_MCI_SR_CMDRDY                                         0
#define AVR32_MCI_SR_CMDRDY_MASK                           0x00000001
#define AVR32_MCI_SR_CMDRDY_OFFSET                                  0
#define AVR32_MCI_SR_CMDRDY_SIZE                                    1
#define AVR32_MCI_SR_DCRCE                                         21
#define AVR32_MCI_SR_DCRCE_MASK                            0x00200000
#define AVR32_MCI_SR_DCRCE_OFFSET                                  21
#define AVR32_MCI_SR_DCRCE_SIZE                                     1
#define AVR32_MCI_SR_DTIP                                           4
#define AVR32_MCI_SR_DTIP_MASK                             0x00000010
#define AVR32_MCI_SR_DTIP_OFFSET                                    4
#define AVR32_MCI_SR_DTIP_SIZE                                      1
#define AVR32_MCI_SR_DTOE                                          22
#define AVR32_MCI_SR_DTOE_MASK                             0x00400000
#define AVR32_MCI_SR_DTOE_OFFSET                                   22
#define AVR32_MCI_SR_DTOE_SIZE                                      1
#define AVR32_MCI_SR_ENDRX                                          6
#define AVR32_MCI_SR_ENDRX_MASK                            0x00000040
#define AVR32_MCI_SR_ENDRX_OFFSET                                   6
#define AVR32_MCI_SR_ENDRX_SIZE                                     1
#define AVR32_MCI_SR_ENDTX                                          7
#define AVR32_MCI_SR_ENDTX_MASK                            0x00000080
#define AVR32_MCI_SR_ENDTX_OFFSET                                   7
#define AVR32_MCI_SR_ENDTX_SIZE                                     1
#define AVR32_MCI_SR_NOTBUSY                                        5
#define AVR32_MCI_SR_NOTBUSY_MASK                          0x00000020
#define AVR32_MCI_SR_NOTBUSY_OFFSET                                 5
#define AVR32_MCI_SR_NOTBUSY_SIZE                                   1
#define AVR32_MCI_SR_OVRE                                          30
#define AVR32_MCI_SR_OVRE_MASK                             0x40000000
#define AVR32_MCI_SR_OVRE_OFFSET                                   30
#define AVR32_MCI_SR_OVRE_SIZE                                      1
#define AVR32_MCI_SR_RCRCE                                         18
#define AVR32_MCI_SR_RCRCE_MASK                            0x00040000
#define AVR32_MCI_SR_RCRCE_OFFSET                                  18
#define AVR32_MCI_SR_RCRCE_SIZE                                     1
#define AVR32_MCI_SR_RDIRE                                         17
#define AVR32_MCI_SR_RDIRE_MASK                            0x00020000
#define AVR32_MCI_SR_RDIRE_OFFSET                                  17
#define AVR32_MCI_SR_RDIRE_SIZE                                     1
#define AVR32_MCI_SR_RENDE                                         19
#define AVR32_MCI_SR_RENDE_MASK                            0x00080000
#define AVR32_MCI_SR_RENDE_OFFSET                                  19
#define AVR32_MCI_SR_RENDE_SIZE                                     1
#define AVR32_MCI_SR_RINDE                                         16
#define AVR32_MCI_SR_RINDE_MASK                            0x00010000
#define AVR32_MCI_SR_RINDE_OFFSET                                  16
#define AVR32_MCI_SR_RINDE_SIZE                                     1
#define AVR32_MCI_SR_RTOE                                          20
#define AVR32_MCI_SR_RTOE_MASK                             0x00100000
#define AVR32_MCI_SR_RTOE_OFFSET                                   20
#define AVR32_MCI_SR_RTOE_SIZE                                      1
#define AVR32_MCI_SR_RXBUFF                                        14
#define AVR32_MCI_SR_RXBUFF_MASK                           0x00004000
#define AVR32_MCI_SR_RXBUFF_OFFSET                                 14
#define AVR32_MCI_SR_RXBUFF_SIZE                                    1
#define AVR32_MCI_SR_RXRDY                                          1
#define AVR32_MCI_SR_RXRDY_MASK                            0x00000002
#define AVR32_MCI_SR_RXRDY_OFFSET                                   1
#define AVR32_MCI_SR_RXRDY_SIZE                                     1
#define AVR32_MCI_SR_SDIOIRQA                                       8
#define AVR32_MCI_SR_SDIOIRQA_MASK                         0x00000100
#define AVR32_MCI_SR_SDIOIRQA_OFFSET                                8
#define AVR32_MCI_SR_SDIOIRQA_SIZE                                  1
#define AVR32_MCI_SR_SDIOIRQB                                       9
#define AVR32_MCI_SR_SDIOIRQB_MASK                         0x00000200
#define AVR32_MCI_SR_SDIOIRQB_OFFSET                                9
#define AVR32_MCI_SR_SDIOIRQB_SIZE                                  1
#define AVR32_MCI_SR_SDIOIRQC                                      10
#define AVR32_MCI_SR_SDIOIRQC_MASK                         0x00000400
#define AVR32_MCI_SR_SDIOIRQC_OFFSET                               10
#define AVR32_MCI_SR_SDIOIRQC_SIZE                                  1
#define AVR32_MCI_SR_SDIOIRQD                                      11
#define AVR32_MCI_SR_SDIOIRQD_MASK                         0x00000800
#define AVR32_MCI_SR_SDIOIRQD_OFFSET                               11
#define AVR32_MCI_SR_SDIOIRQD_SIZE                                  1
#define AVR32_MCI_SR_TXBUFE                                        15
#define AVR32_MCI_SR_TXBUFE_MASK                           0x00008000
#define AVR32_MCI_SR_TXBUFE_OFFSET                                 15
#define AVR32_MCI_SR_TXBUFE_SIZE                                    1
#define AVR32_MCI_SR_TXRDY                                          2
#define AVR32_MCI_SR_TXRDY_MASK                            0x00000004
#define AVR32_MCI_SR_TXRDY_OFFSET                                   2
#define AVR32_MCI_SR_TXRDY_SIZE                                     1
#define AVR32_MCI_SR_UNRE                                          31
#define AVR32_MCI_SR_UNRE_MASK                             0x80000000
#define AVR32_MCI_SR_UNRE_OFFSET                                   31
#define AVR32_MCI_SR_UNRE_SIZE                                      1
#define AVR32_MCI_START_TRANS                              0x00000001
#define AVR32_MCI_STOP_TRANS                               0x00000002
#define AVR32_MCI_STREAM                                   0x00000002
#define AVR32_MCI_SWRST                                             7
#define AVR32_MCI_SWRST_MASK                               0x00000080
#define AVR32_MCI_SWRST_OFFSET                                      7
#define AVR32_MCI_SWRST_SIZE                                        1
#define AVR32_MCI_SYNC_CMD                                 0x00000002
#define AVR32_MCI_TDR                                      0x00000034
#define AVR32_MCI_TDR_DATA                                          0
#define AVR32_MCI_TDR_DATA_MASK                            0xffffffff
#define AVR32_MCI_TDR_DATA_OFFSET                                   0
#define AVR32_MCI_TDR_DATA_SIZE                                    32
#define AVR32_MCI_TRCMD                                            16
#define AVR32_MCI_TRCMD_MASK                               0x00030000
#define AVR32_MCI_TRCMD_NO_TRANS                           0x00000000
#define AVR32_MCI_TRCMD_OFFSET                                     16
#define AVR32_MCI_TRCMD_SIZE                                        2
#define AVR32_MCI_TRCMD_START_TRANS                        0x00000001
#define AVR32_MCI_TRCMD_STOP_TRANS                         0x00000002
#define AVR32_MCI_TRDIR                                            18
#define AVR32_MCI_TRDIR_MASK                               0x00040000
#define AVR32_MCI_TRDIR_OFFSET                                     18
#define AVR32_MCI_TRDIR_READ                               0x00000001
#define AVR32_MCI_TRDIR_SIZE                                        1
#define AVR32_MCI_TRDIR_WRITE                              0x00000000
#define AVR32_MCI_TRTYP                                            19
#define AVR32_MCI_TRTYP_BLOCK                              0x00000000
#define AVR32_MCI_TRTYP_MASK                               0x00380000
#define AVR32_MCI_TRTYP_MULTI_BLOCK                        0x00000001
#define AVR32_MCI_TRTYP_OFFSET                                     19
#define AVR32_MCI_TRTYP_SDIO_BLOCK                         0x00000005
#define AVR32_MCI_TRTYP_SDIO_BYTE                          0x00000004
#define AVR32_MCI_TRTYP_SIZE                                        3
#define AVR32_MCI_TRTYP_STREAM                             0x00000002
#define AVR32_MCI_TXBUFE                                           15
#define AVR32_MCI_TXBUFE_MASK                              0x00008000
#define AVR32_MCI_TXBUFE_OFFSET                                    15
#define AVR32_MCI_TXBUFE_SIZE                                       1
#define AVR32_MCI_TXRDY                                             2
#define AVR32_MCI_TXRDY_MASK                               0x00000004
#define AVR32_MCI_TXRDY_OFFSET                                      2
#define AVR32_MCI_TXRDY_SIZE                                        1
#define AVR32_MCI_UNRE                                             31
#define AVR32_MCI_UNRE_MASK                                0x80000000
#define AVR32_MCI_UNRE_OFFSET                                      31
#define AVR32_MCI_UNRE_SIZE                                         1
#define AVR32_MCI_VARIANT                                          16
#define AVR32_MCI_VARIANT_MASK                             0x00070000
#define AVR32_MCI_VARIANT_OFFSET                                   16
#define AVR32_MCI_VARIANT_SIZE                                      3
#define AVR32_MCI_VERSION                                  0x000000fc
#define AVR32_MCI_VERSION_MASK                             0x00000fff
#define AVR32_MCI_VERSION_OFFSET                                    0
#define AVR32_MCI_VERSION_SIZE                                     12
#define AVR32_MCI_VERSION_VARIANT                                  16
#define AVR32_MCI_VERSION_VARIANT_MASK                     0x00070000
#define AVR32_MCI_VERSION_VARIANT_OFFSET                           16
#define AVR32_MCI_VERSION_VARIANT_SIZE                              3
#define AVR32_MCI_VERSION_VERSION                                   0
#define AVR32_MCI_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_MCI_VERSION_VERSION_OFFSET                            0
#define AVR32_MCI_VERSION_VERSION_SIZE                             12
#define AVR32_MCI_WRITE                                    0x00000000
#define AVR32_MCI_WRPROOF                                          12
#define AVR32_MCI_WRPROOF_MASK                             0x00001000
#define AVR32_MCI_WRPROOF_OFFSET                                   12
#define AVR32_MCI_WRPROOF_SIZE                                      1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_mci_cr_t {
    unsigned int                 :24;
    unsigned int swrst           : 1;
    unsigned int                 : 3;
    unsigned int pwsdis          : 1;
    unsigned int pwsen           : 1;
    unsigned int mcidis          : 1;
    unsigned int mcien           : 1;
} avr32_mci_cr_t;



typedef struct avr32_mci_mr_t {
    unsigned int blklen          :16;
    unsigned int pdcmode         : 1;
    unsigned int pdcpadv         : 1;
    unsigned int pdcfbyte        : 1;
    unsigned int wrproof         : 1;
    unsigned int rdproof         : 1;
    unsigned int pwsdiv          : 3;
    unsigned int clkdiv          : 8;
} avr32_mci_mr_t;



typedef struct avr32_mci_dtor_t {
    unsigned int                 :25;
    unsigned int dtomul          : 3;
    unsigned int dtocyc          : 4;
} avr32_mci_dtor_t;



typedef struct avr32_mci_sdcr_t {
    unsigned int                 :24;
    unsigned int sdcbus          : 1;
    unsigned int                 : 5;
    unsigned int sdcsel          : 2;
} avr32_mci_sdcr_t;



typedef struct avr32_mci_cmdr_t {
    unsigned int                 : 6;
    unsigned int iospcmd         : 2;
    unsigned int                 : 2;
    unsigned int trtyp           : 3;
    unsigned int trdir           : 1;
    unsigned int trcmd           : 2;
    unsigned int                 : 3;
    unsigned int maxlat          : 1;
    unsigned int opdcmd          : 1;
    unsigned int spcmd           : 3;
    unsigned int rsptyp          : 2;
    unsigned int cmdnb           : 6;
} avr32_mci_cmdr_t;



typedef struct avr32_mci_blkr_t {
    unsigned int blklen          :16;
    unsigned int bcnt            :16;
} avr32_mci_blkr_t;



typedef struct avr32_mci_sr_t {
    unsigned int unre            : 1;
    unsigned int ovre            : 1;
    unsigned int                 : 7;
    unsigned int dtoe            : 1;
    unsigned int dcrce           : 1;
    unsigned int rtoe            : 1;
    unsigned int rende           : 1;
    unsigned int rcrce           : 1;
    unsigned int rdire           : 1;
    unsigned int rinde           : 1;
    unsigned int txbufe          : 1;
    unsigned int rxbuff          : 1;
    unsigned int                 : 2;
    unsigned int sdioirqd        : 1;
    unsigned int sdioirqc        : 1;
    unsigned int sdioirqb        : 1;
    unsigned int sdioirqa        : 1;
    unsigned int endtx           : 1;
    unsigned int endrx           : 1;
    unsigned int notbusy         : 1;
    unsigned int dtip            : 1;
    unsigned int blke            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
    unsigned int cmdrdy          : 1;
} avr32_mci_sr_t;



typedef struct avr32_mci_ier_t {
    unsigned int unre            : 1;
    unsigned int ovre            : 1;
    unsigned int                 : 7;
    unsigned int dtoe            : 1;
    unsigned int dcrce           : 1;
    unsigned int rtoe            : 1;
    unsigned int rende           : 1;
    unsigned int rcrce           : 1;
    unsigned int rdire           : 1;
    unsigned int rinde           : 1;
    unsigned int txbufe          : 1;
    unsigned int rxbuff          : 1;
    unsigned int                 : 2;
    unsigned int sdioirqd        : 1;
    unsigned int sdioirqc        : 1;
    unsigned int sdioirqb        : 1;
    unsigned int sdioirqa        : 1;
    unsigned int endtx           : 1;
    unsigned int endrx           : 1;
    unsigned int notbusy         : 1;
    unsigned int dtip            : 1;
    unsigned int blke            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
    unsigned int cmdrdy          : 1;
} avr32_mci_ier_t;



typedef struct avr32_mci_idr_t {
    unsigned int unre            : 1;
    unsigned int ovre            : 1;
    unsigned int                 : 7;
    unsigned int dtoe            : 1;
    unsigned int dcrce           : 1;
    unsigned int rtoe            : 1;
    unsigned int rende           : 1;
    unsigned int rcrce           : 1;
    unsigned int rdire           : 1;
    unsigned int rinde           : 1;
    unsigned int txbufe          : 1;
    unsigned int rxbuff          : 1;
    unsigned int                 : 2;
    unsigned int sdioirqd        : 1;
    unsigned int sdioirqc        : 1;
    unsigned int sdioirqb        : 1;
    unsigned int sdioirqa        : 1;
    unsigned int endtx           : 1;
    unsigned int endrx           : 1;
    unsigned int notbusy         : 1;
    unsigned int dtip            : 1;
    unsigned int blke            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
    unsigned int cmdrdy          : 1;
} avr32_mci_idr_t;



typedef struct avr32_mci_imr_t {
    unsigned int unre            : 1;
    unsigned int ovre            : 1;
    unsigned int                 : 7;
    unsigned int dtoe            : 1;
    unsigned int dcrce           : 1;
    unsigned int rtoe            : 1;
    unsigned int rende           : 1;
    unsigned int rcrce           : 1;
    unsigned int rdire           : 1;
    unsigned int rinde           : 1;
    unsigned int txbufe          : 1;
    unsigned int rxbuff          : 1;
    unsigned int                 : 2;
    unsigned int sdioirqd        : 1;
    unsigned int sdioirqc        : 1;
    unsigned int sdioirqb        : 1;
    unsigned int sdioirqa        : 1;
    unsigned int endtx           : 1;
    unsigned int endrx           : 1;
    unsigned int notbusy         : 1;
    unsigned int dtip            : 1;
    unsigned int blke            : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
    unsigned int cmdrdy          : 1;
} avr32_mci_imr_t;



typedef struct avr32_mci_version_t {
    unsigned int                 :13;
    unsigned int variant         : 3;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_mci_version_t;



typedef struct avr32_mci_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_mci_cr_t                 CR        ;
  };
  union {
          unsigned long                  mr        ;//0x0004
          avr32_mci_mr_t                 MR        ;
  };
  union {
          unsigned long                  dtor      ;//0x0008
          avr32_mci_dtor_t               DTOR      ;
  };
  union {
          unsigned long                  sdcr      ;//0x000c
          avr32_mci_sdcr_t               SDCR      ;
  };
          unsigned long                  argr      ;//0x0010
  union {
          unsigned long                  cmdr      ;//0x0014
          avr32_mci_cmdr_t               CMDR      ;
  };
  union {
          unsigned long                  blkr      ;//0x0018
          avr32_mci_blkr_t               BLKR      ;
  };
          unsigned int                   :32       ;//0x001c
    const unsigned long                  rspr0     ;//0x0020
    const unsigned long                  rspr1     ;//0x0024
    const unsigned long                  rspr2     ;//0x0028
    const unsigned long                  rspr3     ;//0x002c
    const unsigned long                  rdr       ;//0x0030
          unsigned long                  tdr       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
    const unsigned long                  sr        ;//0x0040
    const avr32_mci_sr_t                 SR        ;
  };
  union {
          unsigned long                  ier       ;//0x0044
          avr32_mci_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0048
          avr32_mci_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x004c
    const avr32_mci_imr_t                IMR       ;
  };
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
    const avr32_mci_version_t            VERSION   ;
  };
} avr32_mci_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_MCI_210_H_INCLUDED*/
#endif


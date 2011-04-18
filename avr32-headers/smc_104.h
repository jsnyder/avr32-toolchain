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
#ifndef AVR32_SMC_104_H_INCLUDED
#define AVR32_SMC_104_H_INCLUDED

#define AVR32_SMC_H_VERSION 104

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_SMC_<register>
 - Bitfield mask:   AVR32_SMC_<register>_<bitfield>
 - Bitfield offset: AVR32_SMC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SMC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_SMC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_SMC_<bitfield>
 - Bitfield offset: AVR32_SMC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SMC_<bitfield>_SIZE
 - Bitfield values: AVR32_SMC_<bitfield>_<value name>
 - Bitfield values: AVR32_SMC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_SMC_16_BITS                                  0x00000001
#define AVR32_SMC_32_BITS                                  0x00000002
#define AVR32_SMC_8_BITS                                   0x00000000
#define AVR32_SMC_BAT                                               8
#define AVR32_SMC_BAT_BYTE_SELECT                          0x00000000
#define AVR32_SMC_BAT_BYTE_WRITE                           0x00000001
#define AVR32_SMC_BAT_MASK                                 0x00000100
#define AVR32_SMC_BAT_OFFSET                                        8
#define AVR32_SMC_BAT_SIZE                                          1
#define AVR32_SMC_BYTE_SELECT                              0x00000000
#define AVR32_SMC_BYTE_WRITE                               0x00000001
#define AVR32_SMC_CYCLE0                                   0x00000008
#define AVR32_SMC_CYCLE0_NRD_CYCLE                                 16
#define AVR32_SMC_CYCLE0_NRD_CYCLE_MASK                    0x01ff0000
#define AVR32_SMC_CYCLE0_NRD_CYCLE_OFFSET                          16
#define AVR32_SMC_CYCLE0_NRD_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE0_NWE_CYCLE                                  0
#define AVR32_SMC_CYCLE0_NWE_CYCLE_MASK                    0x000001ff
#define AVR32_SMC_CYCLE0_NWE_CYCLE_OFFSET                           0
#define AVR32_SMC_CYCLE0_NWE_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE1                                   0x00000018
#define AVR32_SMC_CYCLE1_NRD_CYCLE                                 16
#define AVR32_SMC_CYCLE1_NRD_CYCLE_MASK                    0x01ff0000
#define AVR32_SMC_CYCLE1_NRD_CYCLE_OFFSET                          16
#define AVR32_SMC_CYCLE1_NRD_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE1_NWE_CYCLE                                  0
#define AVR32_SMC_CYCLE1_NWE_CYCLE_MASK                    0x000001ff
#define AVR32_SMC_CYCLE1_NWE_CYCLE_OFFSET                           0
#define AVR32_SMC_CYCLE1_NWE_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE2                                   0x00000028
#define AVR32_SMC_CYCLE2_NRD_CYCLE                                 16
#define AVR32_SMC_CYCLE2_NRD_CYCLE_MASK                    0x01ff0000
#define AVR32_SMC_CYCLE2_NRD_CYCLE_OFFSET                          16
#define AVR32_SMC_CYCLE2_NRD_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE2_NWE_CYCLE                                  0
#define AVR32_SMC_CYCLE2_NWE_CYCLE_MASK                    0x000001ff
#define AVR32_SMC_CYCLE2_NWE_CYCLE_OFFSET                           0
#define AVR32_SMC_CYCLE2_NWE_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE3                                   0x00000038
#define AVR32_SMC_CYCLE3_NRD_CYCLE                                 16
#define AVR32_SMC_CYCLE3_NRD_CYCLE_MASK                    0x01ff0000
#define AVR32_SMC_CYCLE3_NRD_CYCLE_OFFSET                          16
#define AVR32_SMC_CYCLE3_NRD_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE3_NWE_CYCLE                                  0
#define AVR32_SMC_CYCLE3_NWE_CYCLE_MASK                    0x000001ff
#define AVR32_SMC_CYCLE3_NWE_CYCLE_OFFSET                           0
#define AVR32_SMC_CYCLE3_NWE_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE4                                   0x00000048
#define AVR32_SMC_CYCLE4_NRD_CYCLE                                 16
#define AVR32_SMC_CYCLE4_NRD_CYCLE_MASK                    0x01ff0000
#define AVR32_SMC_CYCLE4_NRD_CYCLE_OFFSET                          16
#define AVR32_SMC_CYCLE4_NRD_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE4_NWE_CYCLE                                  0
#define AVR32_SMC_CYCLE4_NWE_CYCLE_MASK                    0x000001ff
#define AVR32_SMC_CYCLE4_NWE_CYCLE_OFFSET                           0
#define AVR32_SMC_CYCLE4_NWE_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE5                                   0x00000058
#define AVR32_SMC_CYCLE5_NRD_CYCLE                                 16
#define AVR32_SMC_CYCLE5_NRD_CYCLE_MASK                    0x01ff0000
#define AVR32_SMC_CYCLE5_NRD_CYCLE_OFFSET                          16
#define AVR32_SMC_CYCLE5_NRD_CYCLE_SIZE                             9
#define AVR32_SMC_CYCLE5_NWE_CYCLE                                  0
#define AVR32_SMC_CYCLE5_NWE_CYCLE_MASK                    0x000001ff
#define AVR32_SMC_CYCLE5_NWE_CYCLE_OFFSET                           0
#define AVR32_SMC_CYCLE5_NWE_CYCLE_SIZE                             9
#define AVR32_SMC_DBW                                              12
#define AVR32_SMC_DBW_16_BITS                              0x00000001
#define AVR32_SMC_DBW_32_BITS                              0x00000002
#define AVR32_SMC_DBW_8_BITS                               0x00000000
#define AVR32_SMC_DBW_MASK                                 0x00003000
#define AVR32_SMC_DBW_OFFSET                                       12
#define AVR32_SMC_DBW_SIZE                                          2
#define AVR32_SMC_DISABLED                                 0x00000000
#define AVR32_SMC_EXNW_MODE                                         4
#define AVR32_SMC_EXNW_MODE_DISABLED                       0x00000000
#define AVR32_SMC_EXNW_MODE_FROZEN                         0x00000002
#define AVR32_SMC_EXNW_MODE_MASK                           0x00000030
#define AVR32_SMC_EXNW_MODE_OFFSET                                  4
#define AVR32_SMC_EXNW_MODE_READY                          0x00000003
#define AVR32_SMC_EXNW_MODE_SIZE                                    2
#define AVR32_SMC_FROZEN                                   0x00000002
#define AVR32_SMC_MODE0                                    0x0000000c
#define AVR32_SMC_MODE0_BAT                                         8
#define AVR32_SMC_MODE0_BAT_BYTE_SELECT                    0x00000000
#define AVR32_SMC_MODE0_BAT_BYTE_WRITE                     0x00000001
#define AVR32_SMC_MODE0_BAT_MASK                           0x00000100
#define AVR32_SMC_MODE0_BAT_OFFSET                                  8
#define AVR32_SMC_MODE0_BAT_SIZE                                    1
#define AVR32_SMC_MODE0_DBW                                        12
#define AVR32_SMC_MODE0_DBW_16_BITS                        0x00000001
#define AVR32_SMC_MODE0_DBW_32_BITS                        0x00000002
#define AVR32_SMC_MODE0_DBW_8_BITS                         0x00000000
#define AVR32_SMC_MODE0_DBW_MASK                           0x00003000
#define AVR32_SMC_MODE0_DBW_OFFSET                                 12
#define AVR32_SMC_MODE0_DBW_SIZE                                    2
#define AVR32_SMC_MODE0_EXNW_MODE                                   4
#define AVR32_SMC_MODE0_EXNW_MODE_DISABLED                 0x00000000
#define AVR32_SMC_MODE0_EXNW_MODE_FROZEN                   0x00000002
#define AVR32_SMC_MODE0_EXNW_MODE_MASK                     0x00000030
#define AVR32_SMC_MODE0_EXNW_MODE_OFFSET                            4
#define AVR32_SMC_MODE0_EXNW_MODE_READY                    0x00000003
#define AVR32_SMC_MODE0_EXNW_MODE_SIZE                              2
#define AVR32_SMC_MODE0_PMEN                                       24
#define AVR32_SMC_MODE0_PMEN_MASK                          0x01000000
#define AVR32_SMC_MODE0_PMEN_OFFSET                                24
#define AVR32_SMC_MODE0_PMEN_SIZE                                   1
#define AVR32_SMC_MODE0_PS                                         28
#define AVR32_SMC_MODE0_PS_MASK                            0x30000000
#define AVR32_SMC_MODE0_PS_OFFSET                                  28
#define AVR32_SMC_MODE0_PS_SIZE                                     2
#define AVR32_SMC_MODE0_READ_MODE                                   0
#define AVR32_SMC_MODE0_READ_MODE_MASK                     0x00000001
#define AVR32_SMC_MODE0_READ_MODE_NCS_CONTROLLED           0x00000000
#define AVR32_SMC_MODE0_READ_MODE_NRD_CONTROLLED           0x00000001
#define AVR32_SMC_MODE0_READ_MODE_OFFSET                            0
#define AVR32_SMC_MODE0_READ_MODE_SIZE                              1
#define AVR32_SMC_MODE0_TDF_CYCLES                                 16
#define AVR32_SMC_MODE0_TDF_CYCLES_MASK                    0x000f0000
#define AVR32_SMC_MODE0_TDF_CYCLES_OFFSET                          16
#define AVR32_SMC_MODE0_TDF_CYCLES_SIZE                             4
#define AVR32_SMC_MODE0_TDF_MODE                                   20
#define AVR32_SMC_MODE0_TDF_MODE_MASK                      0x00100000
#define AVR32_SMC_MODE0_TDF_MODE_OFFSET                            20
#define AVR32_SMC_MODE0_TDF_MODE_SIZE                               1
#define AVR32_SMC_MODE0_WRITE_MODE                                  1
#define AVR32_SMC_MODE0_WRITE_MODE_MASK                    0x00000002
#define AVR32_SMC_MODE0_WRITE_MODE_NCS_CONTROLLED          0x00000000
#define AVR32_SMC_MODE0_WRITE_MODE_NWE_CONTROLLED          0x00000001
#define AVR32_SMC_MODE0_WRITE_MODE_OFFSET                           1
#define AVR32_SMC_MODE0_WRITE_MODE_SIZE                             1
#define AVR32_SMC_MODE1                                    0x0000001c
#define AVR32_SMC_MODE1_BAT                                         8
#define AVR32_SMC_MODE1_BAT_BYTE_SELECT                    0x00000000
#define AVR32_SMC_MODE1_BAT_BYTE_WRITE                     0x00000001
#define AVR32_SMC_MODE1_BAT_MASK                           0x00000100
#define AVR32_SMC_MODE1_BAT_OFFSET                                  8
#define AVR32_SMC_MODE1_BAT_SIZE                                    1
#define AVR32_SMC_MODE1_DBW                                        12
#define AVR32_SMC_MODE1_DBW_16_BITS                        0x00000001
#define AVR32_SMC_MODE1_DBW_32_BITS                        0x00000002
#define AVR32_SMC_MODE1_DBW_8_BITS                         0x00000000
#define AVR32_SMC_MODE1_DBW_MASK                           0x00003000
#define AVR32_SMC_MODE1_DBW_OFFSET                                 12
#define AVR32_SMC_MODE1_DBW_SIZE                                    2
#define AVR32_SMC_MODE1_EXNW_MODE                                   4
#define AVR32_SMC_MODE1_EXNW_MODE_DISABLED                 0x00000000
#define AVR32_SMC_MODE1_EXNW_MODE_FROZEN                   0x00000002
#define AVR32_SMC_MODE1_EXNW_MODE_MASK                     0x00000030
#define AVR32_SMC_MODE1_EXNW_MODE_OFFSET                            4
#define AVR32_SMC_MODE1_EXNW_MODE_READY                    0x00000003
#define AVR32_SMC_MODE1_EXNW_MODE_SIZE                              2
#define AVR32_SMC_MODE1_PMEN                                       24
#define AVR32_SMC_MODE1_PMEN_MASK                          0x01000000
#define AVR32_SMC_MODE1_PMEN_OFFSET                                24
#define AVR32_SMC_MODE1_PMEN_SIZE                                   1
#define AVR32_SMC_MODE1_PS                                         28
#define AVR32_SMC_MODE1_PS_MASK                            0x30000000
#define AVR32_SMC_MODE1_PS_OFFSET                                  28
#define AVR32_SMC_MODE1_PS_SIZE                                     2
#define AVR32_SMC_MODE1_READ_MODE                                   0
#define AVR32_SMC_MODE1_READ_MODE_MASK                     0x00000001
#define AVR32_SMC_MODE1_READ_MODE_NCS_CONTROLLED           0x00000000
#define AVR32_SMC_MODE1_READ_MODE_NRD_CONTROLLED           0x00000001
#define AVR32_SMC_MODE1_READ_MODE_OFFSET                            0
#define AVR32_SMC_MODE1_READ_MODE_SIZE                              1
#define AVR32_SMC_MODE1_TDF_CYCLES                                 16
#define AVR32_SMC_MODE1_TDF_CYCLES_MASK                    0x000f0000
#define AVR32_SMC_MODE1_TDF_CYCLES_OFFSET                          16
#define AVR32_SMC_MODE1_TDF_CYCLES_SIZE                             4
#define AVR32_SMC_MODE1_TDF_MODE                                   20
#define AVR32_SMC_MODE1_TDF_MODE_MASK                      0x00100000
#define AVR32_SMC_MODE1_TDF_MODE_OFFSET                            20
#define AVR32_SMC_MODE1_TDF_MODE_SIZE                               1
#define AVR32_SMC_MODE1_WRITE_MODE                                  1
#define AVR32_SMC_MODE1_WRITE_MODE_MASK                    0x00000002
#define AVR32_SMC_MODE1_WRITE_MODE_NCS_CONTROLLED          0x00000000
#define AVR32_SMC_MODE1_WRITE_MODE_NWE_CONTROLLED          0x00000001
#define AVR32_SMC_MODE1_WRITE_MODE_OFFSET                           1
#define AVR32_SMC_MODE1_WRITE_MODE_SIZE                             1
#define AVR32_SMC_MODE2                                    0x0000002c
#define AVR32_SMC_MODE2_BAT                                         8
#define AVR32_SMC_MODE2_BAT_BYTE_SELECT                    0x00000000
#define AVR32_SMC_MODE2_BAT_BYTE_WRITE                     0x00000001
#define AVR32_SMC_MODE2_BAT_MASK                           0x00000100
#define AVR32_SMC_MODE2_BAT_OFFSET                                  8
#define AVR32_SMC_MODE2_BAT_SIZE                                    1
#define AVR32_SMC_MODE2_DBW                                        12
#define AVR32_SMC_MODE2_DBW_16_BITS                        0x00000001
#define AVR32_SMC_MODE2_DBW_32_BITS                        0x00000002
#define AVR32_SMC_MODE2_DBW_8_BITS                         0x00000000
#define AVR32_SMC_MODE2_DBW_MASK                           0x00003000
#define AVR32_SMC_MODE2_DBW_OFFSET                                 12
#define AVR32_SMC_MODE2_DBW_SIZE                                    2
#define AVR32_SMC_MODE2_EXNW_MODE                                   4
#define AVR32_SMC_MODE2_EXNW_MODE_DISABLED                 0x00000000
#define AVR32_SMC_MODE2_EXNW_MODE_FROZEN                   0x00000002
#define AVR32_SMC_MODE2_EXNW_MODE_MASK                     0x00000030
#define AVR32_SMC_MODE2_EXNW_MODE_OFFSET                            4
#define AVR32_SMC_MODE2_EXNW_MODE_READY                    0x00000003
#define AVR32_SMC_MODE2_EXNW_MODE_SIZE                              2
#define AVR32_SMC_MODE2_PMEN                                       24
#define AVR32_SMC_MODE2_PMEN_MASK                          0x01000000
#define AVR32_SMC_MODE2_PMEN_OFFSET                                24
#define AVR32_SMC_MODE2_PMEN_SIZE                                   1
#define AVR32_SMC_MODE2_PS                                         28
#define AVR32_SMC_MODE2_PS_MASK                            0x30000000
#define AVR32_SMC_MODE2_PS_OFFSET                                  28
#define AVR32_SMC_MODE2_PS_SIZE                                     2
#define AVR32_SMC_MODE2_READ_MODE                                   0
#define AVR32_SMC_MODE2_READ_MODE_MASK                     0x00000001
#define AVR32_SMC_MODE2_READ_MODE_NCS_CONTROLLED           0x00000000
#define AVR32_SMC_MODE2_READ_MODE_NRD_CONTROLLED           0x00000001
#define AVR32_SMC_MODE2_READ_MODE_OFFSET                            0
#define AVR32_SMC_MODE2_READ_MODE_SIZE                              1
#define AVR32_SMC_MODE2_TDF_CYCLES                                 16
#define AVR32_SMC_MODE2_TDF_CYCLES_MASK                    0x000f0000
#define AVR32_SMC_MODE2_TDF_CYCLES_OFFSET                          16
#define AVR32_SMC_MODE2_TDF_CYCLES_SIZE                             4
#define AVR32_SMC_MODE2_TDF_MODE                                   20
#define AVR32_SMC_MODE2_TDF_MODE_MASK                      0x00100000
#define AVR32_SMC_MODE2_TDF_MODE_OFFSET                            20
#define AVR32_SMC_MODE2_TDF_MODE_SIZE                               1
#define AVR32_SMC_MODE2_WRITE_MODE                                  1
#define AVR32_SMC_MODE2_WRITE_MODE_MASK                    0x00000002
#define AVR32_SMC_MODE2_WRITE_MODE_NCS_CONTROLLED          0x00000000
#define AVR32_SMC_MODE2_WRITE_MODE_NWE_CONTROLLED          0x00000001
#define AVR32_SMC_MODE2_WRITE_MODE_OFFSET                           1
#define AVR32_SMC_MODE2_WRITE_MODE_SIZE                             1
#define AVR32_SMC_MODE3                                    0x0000003c
#define AVR32_SMC_MODE3_BAT                                         8
#define AVR32_SMC_MODE3_BAT_BYTE_SELECT                    0x00000000
#define AVR32_SMC_MODE3_BAT_BYTE_WRITE                     0x00000001
#define AVR32_SMC_MODE3_BAT_MASK                           0x00000100
#define AVR32_SMC_MODE3_BAT_OFFSET                                  8
#define AVR32_SMC_MODE3_BAT_SIZE                                    1
#define AVR32_SMC_MODE3_DBW                                        12
#define AVR32_SMC_MODE3_DBW_16_BITS                        0x00000001
#define AVR32_SMC_MODE3_DBW_32_BITS                        0x00000002
#define AVR32_SMC_MODE3_DBW_8_BITS                         0x00000000
#define AVR32_SMC_MODE3_DBW_MASK                           0x00003000
#define AVR32_SMC_MODE3_DBW_OFFSET                                 12
#define AVR32_SMC_MODE3_DBW_SIZE                                    2
#define AVR32_SMC_MODE3_EXNW_MODE                                   4
#define AVR32_SMC_MODE3_EXNW_MODE_DISABLED                 0x00000000
#define AVR32_SMC_MODE3_EXNW_MODE_FROZEN                   0x00000002
#define AVR32_SMC_MODE3_EXNW_MODE_MASK                     0x00000030
#define AVR32_SMC_MODE3_EXNW_MODE_OFFSET                            4
#define AVR32_SMC_MODE3_EXNW_MODE_READY                    0x00000003
#define AVR32_SMC_MODE3_EXNW_MODE_SIZE                              2
#define AVR32_SMC_MODE3_PMEN                                       24
#define AVR32_SMC_MODE3_PMEN_MASK                          0x01000000
#define AVR32_SMC_MODE3_PMEN_OFFSET                                24
#define AVR32_SMC_MODE3_PMEN_SIZE                                   1
#define AVR32_SMC_MODE3_PS                                         28
#define AVR32_SMC_MODE3_PS_MASK                            0x30000000
#define AVR32_SMC_MODE3_PS_OFFSET                                  28
#define AVR32_SMC_MODE3_PS_SIZE                                     2
#define AVR32_SMC_MODE3_READ_MODE                                   0
#define AVR32_SMC_MODE3_READ_MODE_MASK                     0x00000001
#define AVR32_SMC_MODE3_READ_MODE_NCS_CONTROLLED           0x00000000
#define AVR32_SMC_MODE3_READ_MODE_NRD_CONTROLLED           0x00000001
#define AVR32_SMC_MODE3_READ_MODE_OFFSET                            0
#define AVR32_SMC_MODE3_READ_MODE_SIZE                              1
#define AVR32_SMC_MODE3_TDF_CYCLES                                 16
#define AVR32_SMC_MODE3_TDF_CYCLES_MASK                    0x000f0000
#define AVR32_SMC_MODE3_TDF_CYCLES_OFFSET                          16
#define AVR32_SMC_MODE3_TDF_CYCLES_SIZE                             4
#define AVR32_SMC_MODE3_TDF_MODE                                   20
#define AVR32_SMC_MODE3_TDF_MODE_MASK                      0x00100000
#define AVR32_SMC_MODE3_TDF_MODE_OFFSET                            20
#define AVR32_SMC_MODE3_TDF_MODE_SIZE                               1
#define AVR32_SMC_MODE3_WRITE_MODE                                  1
#define AVR32_SMC_MODE3_WRITE_MODE_MASK                    0x00000002
#define AVR32_SMC_MODE3_WRITE_MODE_NCS_CONTROLLED          0x00000000
#define AVR32_SMC_MODE3_WRITE_MODE_NWE_CONTROLLED          0x00000001
#define AVR32_SMC_MODE3_WRITE_MODE_OFFSET                           1
#define AVR32_SMC_MODE3_WRITE_MODE_SIZE                             1
#define AVR32_SMC_MODE4                                    0x0000004c
#define AVR32_SMC_MODE4_BAT                                         8
#define AVR32_SMC_MODE4_BAT_BYTE_SELECT                    0x00000000
#define AVR32_SMC_MODE4_BAT_BYTE_WRITE                     0x00000001
#define AVR32_SMC_MODE4_BAT_MASK                           0x00000100
#define AVR32_SMC_MODE4_BAT_OFFSET                                  8
#define AVR32_SMC_MODE4_BAT_SIZE                                    1
#define AVR32_SMC_MODE4_DBW                                        12
#define AVR32_SMC_MODE4_DBW_16_BITS                        0x00000001
#define AVR32_SMC_MODE4_DBW_32_BITS                        0x00000002
#define AVR32_SMC_MODE4_DBW_8_BITS                         0x00000000
#define AVR32_SMC_MODE4_DBW_MASK                           0x00003000
#define AVR32_SMC_MODE4_DBW_OFFSET                                 12
#define AVR32_SMC_MODE4_DBW_SIZE                                    2
#define AVR32_SMC_MODE4_EXNW_MODE                                   4
#define AVR32_SMC_MODE4_EXNW_MODE_DISABLED                 0x00000000
#define AVR32_SMC_MODE4_EXNW_MODE_FROZEN                   0x00000002
#define AVR32_SMC_MODE4_EXNW_MODE_MASK                     0x00000030
#define AVR32_SMC_MODE4_EXNW_MODE_OFFSET                            4
#define AVR32_SMC_MODE4_EXNW_MODE_READY                    0x00000003
#define AVR32_SMC_MODE4_EXNW_MODE_SIZE                              2
#define AVR32_SMC_MODE4_PMEN                                       24
#define AVR32_SMC_MODE4_PMEN_MASK                          0x01000000
#define AVR32_SMC_MODE4_PMEN_OFFSET                                24
#define AVR32_SMC_MODE4_PMEN_SIZE                                   1
#define AVR32_SMC_MODE4_PS                                         28
#define AVR32_SMC_MODE4_PS_MASK                            0x30000000
#define AVR32_SMC_MODE4_PS_OFFSET                                  28
#define AVR32_SMC_MODE4_PS_SIZE                                     2
#define AVR32_SMC_MODE4_READ_MODE                                   0
#define AVR32_SMC_MODE4_READ_MODE_MASK                     0x00000001
#define AVR32_SMC_MODE4_READ_MODE_NCS_CONTROLLED           0x00000000
#define AVR32_SMC_MODE4_READ_MODE_NRD_CONTROLLED           0x00000001
#define AVR32_SMC_MODE4_READ_MODE_OFFSET                            0
#define AVR32_SMC_MODE4_READ_MODE_SIZE                              1
#define AVR32_SMC_MODE4_TDF_CYCLES                                 16
#define AVR32_SMC_MODE4_TDF_CYCLES_MASK                    0x000f0000
#define AVR32_SMC_MODE4_TDF_CYCLES_OFFSET                          16
#define AVR32_SMC_MODE4_TDF_CYCLES_SIZE                             4
#define AVR32_SMC_MODE4_TDF_MODE                                   20
#define AVR32_SMC_MODE4_TDF_MODE_MASK                      0x00100000
#define AVR32_SMC_MODE4_TDF_MODE_OFFSET                            20
#define AVR32_SMC_MODE4_TDF_MODE_SIZE                               1
#define AVR32_SMC_MODE4_WRITE_MODE                                  1
#define AVR32_SMC_MODE4_WRITE_MODE_MASK                    0x00000002
#define AVR32_SMC_MODE4_WRITE_MODE_NCS_CONTROLLED          0x00000000
#define AVR32_SMC_MODE4_WRITE_MODE_NWE_CONTROLLED          0x00000001
#define AVR32_SMC_MODE4_WRITE_MODE_OFFSET                           1
#define AVR32_SMC_MODE4_WRITE_MODE_SIZE                             1
#define AVR32_SMC_MODE5                                    0x0000005c
#define AVR32_SMC_MODE5_BAT                                         8
#define AVR32_SMC_MODE5_BAT_BYTE_SELECT                    0x00000000
#define AVR32_SMC_MODE5_BAT_BYTE_WRITE                     0x00000001
#define AVR32_SMC_MODE5_BAT_MASK                           0x00000100
#define AVR32_SMC_MODE5_BAT_OFFSET                                  8
#define AVR32_SMC_MODE5_BAT_SIZE                                    1
#define AVR32_SMC_MODE5_DBW                                        12
#define AVR32_SMC_MODE5_DBW_16_BITS                        0x00000001
#define AVR32_SMC_MODE5_DBW_32_BITS                        0x00000002
#define AVR32_SMC_MODE5_DBW_8_BITS                         0x00000000
#define AVR32_SMC_MODE5_DBW_MASK                           0x00003000
#define AVR32_SMC_MODE5_DBW_OFFSET                                 12
#define AVR32_SMC_MODE5_DBW_SIZE                                    2
#define AVR32_SMC_MODE5_EXNW_MODE                                   4
#define AVR32_SMC_MODE5_EXNW_MODE_DISABLED                 0x00000000
#define AVR32_SMC_MODE5_EXNW_MODE_FROZEN                   0x00000002
#define AVR32_SMC_MODE5_EXNW_MODE_MASK                     0x00000030
#define AVR32_SMC_MODE5_EXNW_MODE_OFFSET                            4
#define AVR32_SMC_MODE5_EXNW_MODE_READY                    0x00000003
#define AVR32_SMC_MODE5_EXNW_MODE_SIZE                              2
#define AVR32_SMC_MODE5_PMEN                                       24
#define AVR32_SMC_MODE5_PMEN_MASK                          0x01000000
#define AVR32_SMC_MODE5_PMEN_OFFSET                                24
#define AVR32_SMC_MODE5_PMEN_SIZE                                   1
#define AVR32_SMC_MODE5_PS                                         28
#define AVR32_SMC_MODE5_PS_MASK                            0x30000000
#define AVR32_SMC_MODE5_PS_OFFSET                                  28
#define AVR32_SMC_MODE5_PS_SIZE                                     2
#define AVR32_SMC_MODE5_READ_MODE                                   0
#define AVR32_SMC_MODE5_READ_MODE_MASK                     0x00000001
#define AVR32_SMC_MODE5_READ_MODE_NCS_CONTROLLED           0x00000000
#define AVR32_SMC_MODE5_READ_MODE_NRD_CONTROLLED           0x00000001
#define AVR32_SMC_MODE5_READ_MODE_OFFSET                            0
#define AVR32_SMC_MODE5_READ_MODE_SIZE                              1
#define AVR32_SMC_MODE5_TDF_CYCLES                                 16
#define AVR32_SMC_MODE5_TDF_CYCLES_MASK                    0x000f0000
#define AVR32_SMC_MODE5_TDF_CYCLES_OFFSET                          16
#define AVR32_SMC_MODE5_TDF_CYCLES_SIZE                             4
#define AVR32_SMC_MODE5_TDF_MODE                                   20
#define AVR32_SMC_MODE5_TDF_MODE_MASK                      0x00100000
#define AVR32_SMC_MODE5_TDF_MODE_OFFSET                            20
#define AVR32_SMC_MODE5_TDF_MODE_SIZE                               1
#define AVR32_SMC_MODE5_WRITE_MODE                                  1
#define AVR32_SMC_MODE5_WRITE_MODE_MASK                    0x00000002
#define AVR32_SMC_MODE5_WRITE_MODE_NCS_CONTROLLED          0x00000000
#define AVR32_SMC_MODE5_WRITE_MODE_NWE_CONTROLLED          0x00000001
#define AVR32_SMC_MODE5_WRITE_MODE_OFFSET                           1
#define AVR32_SMC_MODE5_WRITE_MODE_SIZE                             1
#define AVR32_SMC_NCS_CONTROLLED                           0x00000000
#define AVR32_SMC_NCS_RD_PULSE                                     24
#define AVR32_SMC_NCS_RD_PULSE_MASK                        0x7f000000
#define AVR32_SMC_NCS_RD_PULSE_OFFSET                              24
#define AVR32_SMC_NCS_RD_PULSE_SIZE                                 7
#define AVR32_SMC_NCS_RD_SETUP                                     24
#define AVR32_SMC_NCS_RD_SETUP_MASK                        0x3f000000
#define AVR32_SMC_NCS_RD_SETUP_OFFSET                              24
#define AVR32_SMC_NCS_RD_SETUP_SIZE                                 6
#define AVR32_SMC_NCS_WR_PULSE                                      8
#define AVR32_SMC_NCS_WR_PULSE_MASK                        0x00007f00
#define AVR32_SMC_NCS_WR_PULSE_OFFSET                               8
#define AVR32_SMC_NCS_WR_PULSE_SIZE                                 7
#define AVR32_SMC_NCS_WR_SETUP                                      8
#define AVR32_SMC_NCS_WR_SETUP_MASK                        0x00003f00
#define AVR32_SMC_NCS_WR_SETUP_OFFSET                               8
#define AVR32_SMC_NCS_WR_SETUP_SIZE                                 6
#define AVR32_SMC_NRD_CONTROLLED                           0x00000001
#define AVR32_SMC_NRD_CYCLE                                        16
#define AVR32_SMC_NRD_CYCLE_MASK                           0x01ff0000
#define AVR32_SMC_NRD_CYCLE_OFFSET                                 16
#define AVR32_SMC_NRD_CYCLE_SIZE                                    9
#define AVR32_SMC_NRD_PULSE                                        16
#define AVR32_SMC_NRD_PULSE_MASK                           0x007f0000
#define AVR32_SMC_NRD_PULSE_OFFSET                                 16
#define AVR32_SMC_NRD_PULSE_SIZE                                    7
#define AVR32_SMC_NRD_SETUP                                        16
#define AVR32_SMC_NRD_SETUP_MASK                           0x003f0000
#define AVR32_SMC_NRD_SETUP_OFFSET                                 16
#define AVR32_SMC_NRD_SETUP_SIZE                                    6
#define AVR32_SMC_NWE_CONTROLLED                           0x00000001
#define AVR32_SMC_NWE_CYCLE                                         0
#define AVR32_SMC_NWE_CYCLE_MASK                           0x000001ff
#define AVR32_SMC_NWE_CYCLE_OFFSET                                  0
#define AVR32_SMC_NWE_CYCLE_SIZE                                    9
#define AVR32_SMC_NWE_PULSE                                         0
#define AVR32_SMC_NWE_PULSE_MASK                           0x0000007f
#define AVR32_SMC_NWE_PULSE_OFFSET                                  0
#define AVR32_SMC_NWE_PULSE_SIZE                                    7
#define AVR32_SMC_NWE_SETUP                                         0
#define AVR32_SMC_NWE_SETUP_MASK                           0x0000003f
#define AVR32_SMC_NWE_SETUP_OFFSET                                  0
#define AVR32_SMC_NWE_SETUP_SIZE                                    6
#define AVR32_SMC_PMEN                                             24
#define AVR32_SMC_PMEN_MASK                                0x01000000
#define AVR32_SMC_PMEN_OFFSET                                      24
#define AVR32_SMC_PMEN_SIZE                                         1
#define AVR32_SMC_PS                                               28
#define AVR32_SMC_PS_MASK                                  0x30000000
#define AVR32_SMC_PS_OFFSET                                        28
#define AVR32_SMC_PS_SIZE                                           2
#define AVR32_SMC_PULSE0                                   0x00000004
#define AVR32_SMC_PULSE0_NCS_RD_PULSE                              24
#define AVR32_SMC_PULSE0_NCS_RD_PULSE_MASK                 0x7f000000
#define AVR32_SMC_PULSE0_NCS_RD_PULSE_OFFSET                       24
#define AVR32_SMC_PULSE0_NCS_RD_PULSE_SIZE                          7
#define AVR32_SMC_PULSE0_NCS_WR_PULSE                               8
#define AVR32_SMC_PULSE0_NCS_WR_PULSE_MASK                 0x00007f00
#define AVR32_SMC_PULSE0_NCS_WR_PULSE_OFFSET                        8
#define AVR32_SMC_PULSE0_NCS_WR_PULSE_SIZE                          7
#define AVR32_SMC_PULSE0_NRD_PULSE                                 16
#define AVR32_SMC_PULSE0_NRD_PULSE_MASK                    0x007f0000
#define AVR32_SMC_PULSE0_NRD_PULSE_OFFSET                          16
#define AVR32_SMC_PULSE0_NRD_PULSE_SIZE                             7
#define AVR32_SMC_PULSE0_NWE_PULSE                                  0
#define AVR32_SMC_PULSE0_NWE_PULSE_MASK                    0x0000007f
#define AVR32_SMC_PULSE0_NWE_PULSE_OFFSET                           0
#define AVR32_SMC_PULSE0_NWE_PULSE_SIZE                             7
#define AVR32_SMC_PULSE1                                   0x00000014
#define AVR32_SMC_PULSE1_NCS_RD_PULSE                              24
#define AVR32_SMC_PULSE1_NCS_RD_PULSE_MASK                 0x7f000000
#define AVR32_SMC_PULSE1_NCS_RD_PULSE_OFFSET                       24
#define AVR32_SMC_PULSE1_NCS_RD_PULSE_SIZE                          7
#define AVR32_SMC_PULSE1_NCS_WR_PULSE                               8
#define AVR32_SMC_PULSE1_NCS_WR_PULSE_MASK                 0x00007f00
#define AVR32_SMC_PULSE1_NCS_WR_PULSE_OFFSET                        8
#define AVR32_SMC_PULSE1_NCS_WR_PULSE_SIZE                          7
#define AVR32_SMC_PULSE1_NRD_PULSE                                 16
#define AVR32_SMC_PULSE1_NRD_PULSE_MASK                    0x007f0000
#define AVR32_SMC_PULSE1_NRD_PULSE_OFFSET                          16
#define AVR32_SMC_PULSE1_NRD_PULSE_SIZE                             7
#define AVR32_SMC_PULSE1_NWE_PULSE                                  0
#define AVR32_SMC_PULSE1_NWE_PULSE_MASK                    0x0000007f
#define AVR32_SMC_PULSE1_NWE_PULSE_OFFSET                           0
#define AVR32_SMC_PULSE1_NWE_PULSE_SIZE                             7
#define AVR32_SMC_PULSE2                                   0x00000024
#define AVR32_SMC_PULSE2_NCS_RD_PULSE                              24
#define AVR32_SMC_PULSE2_NCS_RD_PULSE_MASK                 0x7f000000
#define AVR32_SMC_PULSE2_NCS_RD_PULSE_OFFSET                       24
#define AVR32_SMC_PULSE2_NCS_RD_PULSE_SIZE                          7
#define AVR32_SMC_PULSE2_NCS_WR_PULSE                               8
#define AVR32_SMC_PULSE2_NCS_WR_PULSE_MASK                 0x00007f00
#define AVR32_SMC_PULSE2_NCS_WR_PULSE_OFFSET                        8
#define AVR32_SMC_PULSE2_NCS_WR_PULSE_SIZE                          7
#define AVR32_SMC_PULSE2_NRD_PULSE                                 16
#define AVR32_SMC_PULSE2_NRD_PULSE_MASK                    0x007f0000
#define AVR32_SMC_PULSE2_NRD_PULSE_OFFSET                          16
#define AVR32_SMC_PULSE2_NRD_PULSE_SIZE                             7
#define AVR32_SMC_PULSE2_NWE_PULSE                                  0
#define AVR32_SMC_PULSE2_NWE_PULSE_MASK                    0x0000007f
#define AVR32_SMC_PULSE2_NWE_PULSE_OFFSET                           0
#define AVR32_SMC_PULSE2_NWE_PULSE_SIZE                             7
#define AVR32_SMC_PULSE3                                   0x00000034
#define AVR32_SMC_PULSE3_NCS_RD_PULSE                              24
#define AVR32_SMC_PULSE3_NCS_RD_PULSE_MASK                 0x7f000000
#define AVR32_SMC_PULSE3_NCS_RD_PULSE_OFFSET                       24
#define AVR32_SMC_PULSE3_NCS_RD_PULSE_SIZE                          7
#define AVR32_SMC_PULSE3_NCS_WR_PULSE                               8
#define AVR32_SMC_PULSE3_NCS_WR_PULSE_MASK                 0x00007f00
#define AVR32_SMC_PULSE3_NCS_WR_PULSE_OFFSET                        8
#define AVR32_SMC_PULSE3_NCS_WR_PULSE_SIZE                          7
#define AVR32_SMC_PULSE3_NRD_PULSE                                 16
#define AVR32_SMC_PULSE3_NRD_PULSE_MASK                    0x007f0000
#define AVR32_SMC_PULSE3_NRD_PULSE_OFFSET                          16
#define AVR32_SMC_PULSE3_NRD_PULSE_SIZE                             7
#define AVR32_SMC_PULSE3_NWE_PULSE                                  0
#define AVR32_SMC_PULSE3_NWE_PULSE_MASK                    0x0000007f
#define AVR32_SMC_PULSE3_NWE_PULSE_OFFSET                           0
#define AVR32_SMC_PULSE3_NWE_PULSE_SIZE                             7
#define AVR32_SMC_PULSE4                                   0x00000044
#define AVR32_SMC_PULSE4_NCS_RD_PULSE                              24
#define AVR32_SMC_PULSE4_NCS_RD_PULSE_MASK                 0x7f000000
#define AVR32_SMC_PULSE4_NCS_RD_PULSE_OFFSET                       24
#define AVR32_SMC_PULSE4_NCS_RD_PULSE_SIZE                          7
#define AVR32_SMC_PULSE4_NCS_WR_PULSE                               8
#define AVR32_SMC_PULSE4_NCS_WR_PULSE_MASK                 0x00007f00
#define AVR32_SMC_PULSE4_NCS_WR_PULSE_OFFSET                        8
#define AVR32_SMC_PULSE4_NCS_WR_PULSE_SIZE                          7
#define AVR32_SMC_PULSE4_NRD_PULSE                                 16
#define AVR32_SMC_PULSE4_NRD_PULSE_MASK                    0x007f0000
#define AVR32_SMC_PULSE4_NRD_PULSE_OFFSET                          16
#define AVR32_SMC_PULSE4_NRD_PULSE_SIZE                             7
#define AVR32_SMC_PULSE4_NWE_PULSE                                  0
#define AVR32_SMC_PULSE4_NWE_PULSE_MASK                    0x0000007f
#define AVR32_SMC_PULSE4_NWE_PULSE_OFFSET                           0
#define AVR32_SMC_PULSE4_NWE_PULSE_SIZE                             7
#define AVR32_SMC_PULSE5                                   0x00000054
#define AVR32_SMC_PULSE5_NCS_RD_PULSE                              24
#define AVR32_SMC_PULSE5_NCS_RD_PULSE_MASK                 0x7f000000
#define AVR32_SMC_PULSE5_NCS_RD_PULSE_OFFSET                       24
#define AVR32_SMC_PULSE5_NCS_RD_PULSE_SIZE                          7
#define AVR32_SMC_PULSE5_NCS_WR_PULSE                               8
#define AVR32_SMC_PULSE5_NCS_WR_PULSE_MASK                 0x00007f00
#define AVR32_SMC_PULSE5_NCS_WR_PULSE_OFFSET                        8
#define AVR32_SMC_PULSE5_NCS_WR_PULSE_SIZE                          7
#define AVR32_SMC_PULSE5_NRD_PULSE                                 16
#define AVR32_SMC_PULSE5_NRD_PULSE_MASK                    0x007f0000
#define AVR32_SMC_PULSE5_NRD_PULSE_OFFSET                          16
#define AVR32_SMC_PULSE5_NRD_PULSE_SIZE                             7
#define AVR32_SMC_PULSE5_NWE_PULSE                                  0
#define AVR32_SMC_PULSE5_NWE_PULSE_MASK                    0x0000007f
#define AVR32_SMC_PULSE5_NWE_PULSE_OFFSET                           0
#define AVR32_SMC_PULSE5_NWE_PULSE_SIZE                             7
#define AVR32_SMC_READY                                    0x00000003
#define AVR32_SMC_READ_MODE                                         0
#define AVR32_SMC_READ_MODE_MASK                           0x00000001
#define AVR32_SMC_READ_MODE_NCS_CONTROLLED                 0x00000000
#define AVR32_SMC_READ_MODE_NRD_CONTROLLED                 0x00000001
#define AVR32_SMC_READ_MODE_OFFSET                                  0
#define AVR32_SMC_READ_MODE_SIZE                                    1
#define AVR32_SMC_SETUP0                                   0x00000000
#define AVR32_SMC_SETUP0_NCS_RD_SETUP                              24
#define AVR32_SMC_SETUP0_NCS_RD_SETUP_MASK                 0x3f000000
#define AVR32_SMC_SETUP0_NCS_RD_SETUP_OFFSET                       24
#define AVR32_SMC_SETUP0_NCS_RD_SETUP_SIZE                          6
#define AVR32_SMC_SETUP0_NCS_WR_SETUP                               8
#define AVR32_SMC_SETUP0_NCS_WR_SETUP_MASK                 0x00003f00
#define AVR32_SMC_SETUP0_NCS_WR_SETUP_OFFSET                        8
#define AVR32_SMC_SETUP0_NCS_WR_SETUP_SIZE                          6
#define AVR32_SMC_SETUP0_NRD_SETUP                                 16
#define AVR32_SMC_SETUP0_NRD_SETUP_MASK                    0x003f0000
#define AVR32_SMC_SETUP0_NRD_SETUP_OFFSET                          16
#define AVR32_SMC_SETUP0_NRD_SETUP_SIZE                             6
#define AVR32_SMC_SETUP0_NWE_SETUP                                  0
#define AVR32_SMC_SETUP0_NWE_SETUP_MASK                    0x0000003f
#define AVR32_SMC_SETUP0_NWE_SETUP_OFFSET                           0
#define AVR32_SMC_SETUP0_NWE_SETUP_SIZE                             6
#define AVR32_SMC_SETUP1                                   0x00000010
#define AVR32_SMC_SETUP1_NCS_RD_SETUP                              24
#define AVR32_SMC_SETUP1_NCS_RD_SETUP_MASK                 0x3f000000
#define AVR32_SMC_SETUP1_NCS_RD_SETUP_OFFSET                       24
#define AVR32_SMC_SETUP1_NCS_RD_SETUP_SIZE                          6
#define AVR32_SMC_SETUP1_NCS_WR_SETUP                               8
#define AVR32_SMC_SETUP1_NCS_WR_SETUP_MASK                 0x00003f00
#define AVR32_SMC_SETUP1_NCS_WR_SETUP_OFFSET                        8
#define AVR32_SMC_SETUP1_NCS_WR_SETUP_SIZE                          6
#define AVR32_SMC_SETUP1_NRD_SETUP                                 16
#define AVR32_SMC_SETUP1_NRD_SETUP_MASK                    0x003f0000
#define AVR32_SMC_SETUP1_NRD_SETUP_OFFSET                          16
#define AVR32_SMC_SETUP1_NRD_SETUP_SIZE                             6
#define AVR32_SMC_SETUP1_NWE_SETUP                                  0
#define AVR32_SMC_SETUP1_NWE_SETUP_MASK                    0x0000003f
#define AVR32_SMC_SETUP1_NWE_SETUP_OFFSET                           0
#define AVR32_SMC_SETUP1_NWE_SETUP_SIZE                             6
#define AVR32_SMC_SETUP2                                   0x00000020
#define AVR32_SMC_SETUP2_NCS_RD_SETUP                              24
#define AVR32_SMC_SETUP2_NCS_RD_SETUP_MASK                 0x3f000000
#define AVR32_SMC_SETUP2_NCS_RD_SETUP_OFFSET                       24
#define AVR32_SMC_SETUP2_NCS_RD_SETUP_SIZE                          6
#define AVR32_SMC_SETUP2_NCS_WR_SETUP                               8
#define AVR32_SMC_SETUP2_NCS_WR_SETUP_MASK                 0x00003f00
#define AVR32_SMC_SETUP2_NCS_WR_SETUP_OFFSET                        8
#define AVR32_SMC_SETUP2_NCS_WR_SETUP_SIZE                          6
#define AVR32_SMC_SETUP2_NRD_SETUP                                 16
#define AVR32_SMC_SETUP2_NRD_SETUP_MASK                    0x003f0000
#define AVR32_SMC_SETUP2_NRD_SETUP_OFFSET                          16
#define AVR32_SMC_SETUP2_NRD_SETUP_SIZE                             6
#define AVR32_SMC_SETUP2_NWE_SETUP                                  0
#define AVR32_SMC_SETUP2_NWE_SETUP_MASK                    0x0000003f
#define AVR32_SMC_SETUP2_NWE_SETUP_OFFSET                           0
#define AVR32_SMC_SETUP2_NWE_SETUP_SIZE                             6
#define AVR32_SMC_SETUP3                                   0x00000030
#define AVR32_SMC_SETUP3_NCS_RD_SETUP                              24
#define AVR32_SMC_SETUP3_NCS_RD_SETUP_MASK                 0x3f000000
#define AVR32_SMC_SETUP3_NCS_RD_SETUP_OFFSET                       24
#define AVR32_SMC_SETUP3_NCS_RD_SETUP_SIZE                          6
#define AVR32_SMC_SETUP3_NCS_WR_SETUP                               8
#define AVR32_SMC_SETUP3_NCS_WR_SETUP_MASK                 0x00003f00
#define AVR32_SMC_SETUP3_NCS_WR_SETUP_OFFSET                        8
#define AVR32_SMC_SETUP3_NCS_WR_SETUP_SIZE                          6
#define AVR32_SMC_SETUP3_NRD_SETUP                                 16
#define AVR32_SMC_SETUP3_NRD_SETUP_MASK                    0x003f0000
#define AVR32_SMC_SETUP3_NRD_SETUP_OFFSET                          16
#define AVR32_SMC_SETUP3_NRD_SETUP_SIZE                             6
#define AVR32_SMC_SETUP3_NWE_SETUP                                  0
#define AVR32_SMC_SETUP3_NWE_SETUP_MASK                    0x0000003f
#define AVR32_SMC_SETUP3_NWE_SETUP_OFFSET                           0
#define AVR32_SMC_SETUP3_NWE_SETUP_SIZE                             6
#define AVR32_SMC_SETUP4                                   0x00000040
#define AVR32_SMC_SETUP4_NCS_RD_SETUP                              24
#define AVR32_SMC_SETUP4_NCS_RD_SETUP_MASK                 0x3f000000
#define AVR32_SMC_SETUP4_NCS_RD_SETUP_OFFSET                       24
#define AVR32_SMC_SETUP4_NCS_RD_SETUP_SIZE                          6
#define AVR32_SMC_SETUP4_NCS_WR_SETUP                               8
#define AVR32_SMC_SETUP4_NCS_WR_SETUP_MASK                 0x00003f00
#define AVR32_SMC_SETUP4_NCS_WR_SETUP_OFFSET                        8
#define AVR32_SMC_SETUP4_NCS_WR_SETUP_SIZE                          6
#define AVR32_SMC_SETUP4_NRD_SETUP                                 16
#define AVR32_SMC_SETUP4_NRD_SETUP_MASK                    0x003f0000
#define AVR32_SMC_SETUP4_NRD_SETUP_OFFSET                          16
#define AVR32_SMC_SETUP4_NRD_SETUP_SIZE                             6
#define AVR32_SMC_SETUP4_NWE_SETUP                                  0
#define AVR32_SMC_SETUP4_NWE_SETUP_MASK                    0x0000003f
#define AVR32_SMC_SETUP4_NWE_SETUP_OFFSET                           0
#define AVR32_SMC_SETUP4_NWE_SETUP_SIZE                             6
#define AVR32_SMC_SETUP5                                   0x00000050
#define AVR32_SMC_SETUP5_NCS_RD_SETUP                              24
#define AVR32_SMC_SETUP5_NCS_RD_SETUP_MASK                 0x3f000000
#define AVR32_SMC_SETUP5_NCS_RD_SETUP_OFFSET                       24
#define AVR32_SMC_SETUP5_NCS_RD_SETUP_SIZE                          6
#define AVR32_SMC_SETUP5_NCS_WR_SETUP                               8
#define AVR32_SMC_SETUP5_NCS_WR_SETUP_MASK                 0x00003f00
#define AVR32_SMC_SETUP5_NCS_WR_SETUP_OFFSET                        8
#define AVR32_SMC_SETUP5_NCS_WR_SETUP_SIZE                          6
#define AVR32_SMC_SETUP5_NRD_SETUP                                 16
#define AVR32_SMC_SETUP5_NRD_SETUP_MASK                    0x003f0000
#define AVR32_SMC_SETUP5_NRD_SETUP_OFFSET                          16
#define AVR32_SMC_SETUP5_NRD_SETUP_SIZE                             6
#define AVR32_SMC_SETUP5_NWE_SETUP                                  0
#define AVR32_SMC_SETUP5_NWE_SETUP_MASK                    0x0000003f
#define AVR32_SMC_SETUP5_NWE_SETUP_OFFSET                           0
#define AVR32_SMC_SETUP5_NWE_SETUP_SIZE                             6
#define AVR32_SMC_TDF_CYCLES                                       16
#define AVR32_SMC_TDF_CYCLES_MASK                          0x000f0000
#define AVR32_SMC_TDF_CYCLES_OFFSET                                16
#define AVR32_SMC_TDF_CYCLES_SIZE                                   4
#define AVR32_SMC_TDF_MODE                                         20
#define AVR32_SMC_TDF_MODE_MASK                            0x00100000
#define AVR32_SMC_TDF_MODE_OFFSET                                  20
#define AVR32_SMC_TDF_MODE_SIZE                                     1
#define AVR32_SMC_VARIANT                                          16
#define AVR32_SMC_VARIANT_MASK                             0x00070000
#define AVR32_SMC_VARIANT_OFFSET                                   16
#define AVR32_SMC_VARIANT_SIZE                                      3
#define AVR32_SMC_VERSION                                  0x000001fc
#define AVR32_SMC_VERSION_MASK                             0x00000fff
#define AVR32_SMC_VERSION_OFFSET                                    0
#define AVR32_SMC_VERSION_SIZE                                     12
#define AVR32_SMC_VERSION_VARIANT                                  16
#define AVR32_SMC_VERSION_VARIANT_MASK                     0x00070000
#define AVR32_SMC_VERSION_VARIANT_OFFSET                           16
#define AVR32_SMC_VERSION_VARIANT_SIZE                              3
#define AVR32_SMC_VERSION_VERSION                                   0
#define AVR32_SMC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_SMC_VERSION_VERSION_OFFSET                            0
#define AVR32_SMC_VERSION_VERSION_SIZE                             12
#define AVR32_SMC_WRITE_MODE                                        1
#define AVR32_SMC_WRITE_MODE_MASK                          0x00000002
#define AVR32_SMC_WRITE_MODE_NCS_CONTROLLED                0x00000000
#define AVR32_SMC_WRITE_MODE_NWE_CONTROLLED                0x00000001
#define AVR32_SMC_WRITE_MODE_OFFSET                                 1
#define AVR32_SMC_WRITE_MODE_SIZE                                   1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_smc_setup_t {
    unsigned int                 : 2;
    unsigned int ncs_rd_setup    : 6;
    unsigned int                 : 2;
    unsigned int nrd_setup       : 6;
    unsigned int                 : 2;
    unsigned int ncs_wr_setup    : 6;
    unsigned int                 : 2;
    unsigned int nwe_setup       : 6;
} avr32_smc_setup_t;



typedef struct avr32_smc_pulse_t {
    unsigned int                 : 1;
    unsigned int ncs_rd_pulse    : 7;
    unsigned int                 : 1;
    unsigned int nrd_pulse       : 7;
    unsigned int                 : 1;
    unsigned int ncs_wr_pulse    : 7;
    unsigned int                 : 1;
    unsigned int nwe_pulse       : 7;
} avr32_smc_pulse_t;



typedef struct avr32_smc_cycle_t {
    unsigned int                 : 7;
    unsigned int nrd_cycle       : 9;
    unsigned int                 : 7;
    unsigned int nwe_cycle       : 9;
} avr32_smc_cycle_t;



typedef struct avr32_smc_mode_t {
    unsigned int                 : 2;
    unsigned int ps              : 2;
    unsigned int                 : 3;
    unsigned int pmen            : 1;
    unsigned int                 : 3;
    unsigned int tdf_mode        : 1;
    unsigned int tdf_cycles      : 4;
    unsigned int                 : 2;
    unsigned int dbw             : 2;
    unsigned int                 : 3;
    unsigned int bat             : 1;
    unsigned int                 : 2;
    unsigned int exnw_mode       : 2;
    unsigned int                 : 2;
    unsigned int write_mode      : 1;
    unsigned int read_mode       : 1;
} avr32_smc_mode_t;



typedef struct avr32_smc_version_t {
    unsigned int                 :13;
    unsigned int variant         : 3;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_smc_version_t;


typedef struct avr32_smc_cs_t {
  union {
          unsigned long                  setup     ;//0x0000
          avr32_smc_setup_t              SETUP     ;
  };
  union {
          unsigned long                  pulse     ;//0x0004
          avr32_smc_pulse_t              PULSE     ;
  };
  union {
          unsigned long                  cycle     ;//0x0008
          avr32_smc_cycle_t              CYCLE     ;
  };
  union {
          unsigned long                  mode      ;//0x000c
          avr32_smc_mode_t               MODE      ;
  };
} avr32_smc_cs_t;


typedef struct avr32_smc_t {
  avr32_smc_cs_t cs[6];//0x0
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
  union {
    const unsigned long                  version   ;//0x01fc
    const avr32_smc_version_t            VERSION   ;
  };
} avr32_smc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_SMC_104_H_INCLUDED*/
#endif


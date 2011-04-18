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
#ifndef AVR32_PSIF_100_H_INCLUDED
#define AVR32_PSIF_100_H_INCLUDED

#define AVR32_PSIF_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PSIF_<register>
 - Bitfield mask:   AVR32_PSIF_<register>_<bitfield>
 - Bitfield offset: AVR32_PSIF_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PSIF_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PSIF_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PSIF_<bitfield>
 - Bitfield offset: AVR32_PSIF_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PSIF_<bitfield>_SIZE
 - Bitfield values: AVR32_PSIF_<bitfield>_<value name>
 - Bitfield values: AVR32_PSIF_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PSIF_CR0                                      0x00000000
#define AVR32_PSIF_CR0_RXDIS                                         1
#define AVR32_PSIF_CR0_RXDIS_MASK                           0x00000002
#define AVR32_PSIF_CR0_RXDIS_OFFSET                                  1
#define AVR32_PSIF_CR0_RXDIS_SIZE                                    1
#define AVR32_PSIF_CR0_RXEN                                          0
#define AVR32_PSIF_CR0_RXEN_MASK                            0x00000001
#define AVR32_PSIF_CR0_RXEN_OFFSET                                   0
#define AVR32_PSIF_CR0_RXEN_SIZE                                     1
#define AVR32_PSIF_CR0_SWRST                                        15
#define AVR32_PSIF_CR0_SWRST_MASK                           0x00008000
#define AVR32_PSIF_CR0_SWRST_OFFSET                                 15
#define AVR32_PSIF_CR0_SWRST_SIZE                                    1
#define AVR32_PSIF_CR0_TXDIS                                         9
#define AVR32_PSIF_CR0_TXDIS_MASK                           0x00000200
#define AVR32_PSIF_CR0_TXDIS_OFFSET                                  9
#define AVR32_PSIF_CR0_TXDIS_SIZE                                    1
#define AVR32_PSIF_CR0_TXEN                                          8
#define AVR32_PSIF_CR0_TXEN_MASK                            0x00000100
#define AVR32_PSIF_CR0_TXEN_OFFSET                                   8
#define AVR32_PSIF_CR0_TXEN_SIZE                                     1
#define AVR32_PSIF_CR1                                      0x00000100
#define AVR32_PSIF_CR1_RXDIS                                         1
#define AVR32_PSIF_CR1_RXDIS_MASK                           0x00000002
#define AVR32_PSIF_CR1_RXDIS_OFFSET                                  1
#define AVR32_PSIF_CR1_RXDIS_SIZE                                    1
#define AVR32_PSIF_CR1_RXEN                                          0
#define AVR32_PSIF_CR1_RXEN_MASK                            0x00000001
#define AVR32_PSIF_CR1_RXEN_OFFSET                                   0
#define AVR32_PSIF_CR1_RXEN_SIZE                                     1
#define AVR32_PSIF_CR1_SWRST                                        15
#define AVR32_PSIF_CR1_SWRST_MASK                           0x00008000
#define AVR32_PSIF_CR1_SWRST_OFFSET                                 15
#define AVR32_PSIF_CR1_SWRST_SIZE                                    1
#define AVR32_PSIF_CR1_TXDIS                                         9
#define AVR32_PSIF_CR1_TXDIS_MASK                           0x00000200
#define AVR32_PSIF_CR1_TXDIS_OFFSET                                  9
#define AVR32_PSIF_CR1_TXDIS_SIZE                                    1
#define AVR32_PSIF_CR1_TXEN                                          8
#define AVR32_PSIF_CR1_TXEN_MASK                            0x00000100
#define AVR32_PSIF_CR1_TXEN_OFFSET                                   8
#define AVR32_PSIF_CR1_TXEN_SIZE                                     1
#define AVR32_PSIF_IDR0                                     0x00000018
#define AVR32_PSIF_IDR0_NACK                                         8
#define AVR32_PSIF_IDR0_NACK_MASK                           0x00000100
#define AVR32_PSIF_IDR0_NACK_OFFSET                                  8
#define AVR32_PSIF_IDR0_NACK_SIZE                                    1
#define AVR32_PSIF_IDR0_OVRUN                                        5
#define AVR32_PSIF_IDR0_OVRUN_MASK                          0x00000020
#define AVR32_PSIF_IDR0_OVRUN_OFFSET                                 5
#define AVR32_PSIF_IDR0_OVRUN_SIZE                                   1
#define AVR32_PSIF_IDR0_PARITY                                       9
#define AVR32_PSIF_IDR0_PARITY_MASK                         0x00000200
#define AVR32_PSIF_IDR0_PARITY_OFFSET                                9
#define AVR32_PSIF_IDR0_PARITY_SIZE                                  1
#define AVR32_PSIF_IDR0_RXRDY                                        4
#define AVR32_PSIF_IDR0_RXRDY_MASK                          0x00000010
#define AVR32_PSIF_IDR0_RXRDY_OFFSET                                 4
#define AVR32_PSIF_IDR0_RXRDY_SIZE                                   1
#define AVR32_PSIF_IDR0_TXEMPTY                                      1
#define AVR32_PSIF_IDR0_TXEMPTY_MASK                        0x00000002
#define AVR32_PSIF_IDR0_TXEMPTY_OFFSET                               1
#define AVR32_PSIF_IDR0_TXEMPTY_SIZE                                 1
#define AVR32_PSIF_IDR0_TXRDY                                        0
#define AVR32_PSIF_IDR0_TXRDY_MASK                          0x00000001
#define AVR32_PSIF_IDR0_TXRDY_OFFSET                                 0
#define AVR32_PSIF_IDR0_TXRDY_SIZE                                   1
#define AVR32_PSIF_IDR1                                     0x00000118
#define AVR32_PSIF_IDR1_NACK                                         8
#define AVR32_PSIF_IDR1_NACK_MASK                           0x00000100
#define AVR32_PSIF_IDR1_NACK_OFFSET                                  8
#define AVR32_PSIF_IDR1_NACK_SIZE                                    1
#define AVR32_PSIF_IDR1_OVRUN                                        5
#define AVR32_PSIF_IDR1_OVRUN_MASK                          0x00000020
#define AVR32_PSIF_IDR1_OVRUN_OFFSET                                 5
#define AVR32_PSIF_IDR1_OVRUN_SIZE                                   1
#define AVR32_PSIF_IDR1_PARITY                                       9
#define AVR32_PSIF_IDR1_PARITY_MASK                         0x00000200
#define AVR32_PSIF_IDR1_PARITY_OFFSET                                9
#define AVR32_PSIF_IDR1_PARITY_SIZE                                  1
#define AVR32_PSIF_IDR1_RXRDY                                        4
#define AVR32_PSIF_IDR1_RXRDY_MASK                          0x00000010
#define AVR32_PSIF_IDR1_RXRDY_OFFSET                                 4
#define AVR32_PSIF_IDR1_RXRDY_SIZE                                   1
#define AVR32_PSIF_IDR1_TXEMPTY                                      1
#define AVR32_PSIF_IDR1_TXEMPTY_MASK                        0x00000002
#define AVR32_PSIF_IDR1_TXEMPTY_OFFSET                               1
#define AVR32_PSIF_IDR1_TXEMPTY_SIZE                                 1
#define AVR32_PSIF_IDR1_TXRDY                                        0
#define AVR32_PSIF_IDR1_TXRDY_MASK                          0x00000001
#define AVR32_PSIF_IDR1_TXRDY_OFFSET                                 0
#define AVR32_PSIF_IDR1_TXRDY_SIZE                                   1
#define AVR32_PSIF_IER0                                     0x00000014
#define AVR32_PSIF_IER0_NACK                                         8
#define AVR32_PSIF_IER0_NACK_MASK                           0x00000100
#define AVR32_PSIF_IER0_NACK_OFFSET                                  8
#define AVR32_PSIF_IER0_NACK_SIZE                                    1
#define AVR32_PSIF_IER0_OVRUN                                        5
#define AVR32_PSIF_IER0_OVRUN_MASK                          0x00000020
#define AVR32_PSIF_IER0_OVRUN_OFFSET                                 5
#define AVR32_PSIF_IER0_OVRUN_SIZE                                   1
#define AVR32_PSIF_IER0_PARITY                                       9
#define AVR32_PSIF_IER0_PARITY_MASK                         0x00000200
#define AVR32_PSIF_IER0_PARITY_OFFSET                                9
#define AVR32_PSIF_IER0_PARITY_SIZE                                  1
#define AVR32_PSIF_IER0_RXRDY                                        4
#define AVR32_PSIF_IER0_RXRDY_MASK                          0x00000010
#define AVR32_PSIF_IER0_RXRDY_OFFSET                                 4
#define AVR32_PSIF_IER0_RXRDY_SIZE                                   1
#define AVR32_PSIF_IER0_TXEMPTY                                      1
#define AVR32_PSIF_IER0_TXEMPTY_MASK                        0x00000002
#define AVR32_PSIF_IER0_TXEMPTY_OFFSET                               1
#define AVR32_PSIF_IER0_TXEMPTY_SIZE                                 1
#define AVR32_PSIF_IER0_TXRDY                                        0
#define AVR32_PSIF_IER0_TXRDY_MASK                          0x00000001
#define AVR32_PSIF_IER0_TXRDY_OFFSET                                 0
#define AVR32_PSIF_IER0_TXRDY_SIZE                                   1
#define AVR32_PSIF_IER1                                     0x00000114
#define AVR32_PSIF_IER1_NACK                                         8
#define AVR32_PSIF_IER1_NACK_MASK                           0x00000100
#define AVR32_PSIF_IER1_NACK_OFFSET                                  8
#define AVR32_PSIF_IER1_NACK_SIZE                                    1
#define AVR32_PSIF_IER1_OVRUN                                        5
#define AVR32_PSIF_IER1_OVRUN_MASK                          0x00000020
#define AVR32_PSIF_IER1_OVRUN_OFFSET                                 5
#define AVR32_PSIF_IER1_OVRUN_SIZE                                   1
#define AVR32_PSIF_IER1_PARITY                                       9
#define AVR32_PSIF_IER1_PARITY_MASK                         0x00000200
#define AVR32_PSIF_IER1_PARITY_OFFSET                                9
#define AVR32_PSIF_IER1_PARITY_SIZE                                  1
#define AVR32_PSIF_IER1_RXRDY                                        4
#define AVR32_PSIF_IER1_RXRDY_MASK                          0x00000010
#define AVR32_PSIF_IER1_RXRDY_OFFSET                                 4
#define AVR32_PSIF_IER1_RXRDY_SIZE                                   1
#define AVR32_PSIF_IER1_TXEMPTY                                      1
#define AVR32_PSIF_IER1_TXEMPTY_MASK                        0x00000002
#define AVR32_PSIF_IER1_TXEMPTY_OFFSET                               1
#define AVR32_PSIF_IER1_TXEMPTY_SIZE                                 1
#define AVR32_PSIF_IER1_TXRDY                                        0
#define AVR32_PSIF_IER1_TXRDY_MASK                          0x00000001
#define AVR32_PSIF_IER1_TXRDY_OFFSET                                 0
#define AVR32_PSIF_IER1_TXRDY_SIZE                                   1
#define AVR32_PSIF_IMR0                                     0x0000001c
#define AVR32_PSIF_IMR0_NACK                                         8
#define AVR32_PSIF_IMR0_NACK_MASK                           0x00000100
#define AVR32_PSIF_IMR0_NACK_OFFSET                                  8
#define AVR32_PSIF_IMR0_NACK_SIZE                                    1
#define AVR32_PSIF_IMR0_OVRUN                                        5
#define AVR32_PSIF_IMR0_OVRUN_MASK                          0x00000020
#define AVR32_PSIF_IMR0_OVRUN_OFFSET                                 5
#define AVR32_PSIF_IMR0_OVRUN_SIZE                                   1
#define AVR32_PSIF_IMR0_PARITY                                       9
#define AVR32_PSIF_IMR0_PARITY_MASK                         0x00000200
#define AVR32_PSIF_IMR0_PARITY_OFFSET                                9
#define AVR32_PSIF_IMR0_PARITY_SIZE                                  1
#define AVR32_PSIF_IMR0_RXRDY                                        4
#define AVR32_PSIF_IMR0_RXRDY_MASK                          0x00000010
#define AVR32_PSIF_IMR0_RXRDY_OFFSET                                 4
#define AVR32_PSIF_IMR0_RXRDY_SIZE                                   1
#define AVR32_PSIF_IMR0_TXEMPTY                                      1
#define AVR32_PSIF_IMR0_TXEMPTY_MASK                        0x00000002
#define AVR32_PSIF_IMR0_TXEMPTY_OFFSET                               1
#define AVR32_PSIF_IMR0_TXEMPTY_SIZE                                 1
#define AVR32_PSIF_IMR0_TXRDY                                        0
#define AVR32_PSIF_IMR0_TXRDY_MASK                          0x00000001
#define AVR32_PSIF_IMR0_TXRDY_OFFSET                                 0
#define AVR32_PSIF_IMR0_TXRDY_SIZE                                   1
#define AVR32_PSIF_IMR1                                     0x0000011c
#define AVR32_PSIF_IMR1_NACK                                         8
#define AVR32_PSIF_IMR1_NACK_MASK                           0x00000100
#define AVR32_PSIF_IMR1_NACK_OFFSET                                  8
#define AVR32_PSIF_IMR1_NACK_SIZE                                    1
#define AVR32_PSIF_IMR1_OVRUN                                        5
#define AVR32_PSIF_IMR1_OVRUN_MASK                          0x00000020
#define AVR32_PSIF_IMR1_OVRUN_OFFSET                                 5
#define AVR32_PSIF_IMR1_OVRUN_SIZE                                   1
#define AVR32_PSIF_IMR1_PARITY                                       9
#define AVR32_PSIF_IMR1_PARITY_MASK                         0x00000200
#define AVR32_PSIF_IMR1_PARITY_OFFSET                                9
#define AVR32_PSIF_IMR1_PARITY_SIZE                                  1
#define AVR32_PSIF_IMR1_RXRDY                                        4
#define AVR32_PSIF_IMR1_RXRDY_MASK                          0x00000010
#define AVR32_PSIF_IMR1_RXRDY_OFFSET                                 4
#define AVR32_PSIF_IMR1_RXRDY_SIZE                                   1
#define AVR32_PSIF_IMR1_TXEMPTY                                      1
#define AVR32_PSIF_IMR1_TXEMPTY_MASK                        0x00000002
#define AVR32_PSIF_IMR1_TXEMPTY_OFFSET                               1
#define AVR32_PSIF_IMR1_TXEMPTY_SIZE                                 1
#define AVR32_PSIF_IMR1_TXRDY                                        0
#define AVR32_PSIF_IMR1_TXRDY_MASK                          0x00000001
#define AVR32_PSIF_IMR1_TXRDY_OFFSET                                 0
#define AVR32_PSIF_IMR1_TXRDY_SIZE                                   1
#define AVR32_PSIF_NACK                                              8
#define AVR32_PSIF_NACK_MASK                                0x00000100
#define AVR32_PSIF_NACK_OFFSET                                       8
#define AVR32_PSIF_NACK_SIZE                                         1
#define AVR32_PSIF_OVRUN                                             5
#define AVR32_PSIF_OVRUN_MASK                               0x00000020
#define AVR32_PSIF_OVRUN_OFFSET                                      5
#define AVR32_PSIF_OVRUN_SIZE                                        1
#define AVR32_PSIF_PARITY                                            9
#define AVR32_PSIF_PARITY_MASK                              0x00000200
#define AVR32_PSIF_PARITY_OFFSET                                     9
#define AVR32_PSIF_PARITY_SIZE                                       1
#define AVR32_PSIF_PRSCV                                             0
#define AVR32_PSIF_PRSCV_MASK                               0x00001fff
#define AVR32_PSIF_PRSCV_OFFSET                                      0
#define AVR32_PSIF_PRSCV_SIZE                                       13
#define AVR32_PSIF_PSR0                                     0x00000024
#define AVR32_PSIF_PSR0_PRSCV                                        0
#define AVR32_PSIF_PSR0_PRSCV_MASK                          0x00001fff
#define AVR32_PSIF_PSR0_PRSCV_OFFSET                                 0
#define AVR32_PSIF_PSR0_PRSCV_SIZE                                  13
#define AVR32_PSIF_PSR1                                     0x00000124
#define AVR32_PSIF_PSR1_PRSCV                                        0
#define AVR32_PSIF_PSR1_PRSCV_MASK                          0x00001fff
#define AVR32_PSIF_PSR1_PRSCV_OFFSET                                 0
#define AVR32_PSIF_PSR1_PRSCV_SIZE                                  13
#define AVR32_PSIF_RHR0                                     0x00000004
#define AVR32_PSIF_RHR0_RXDATA                                       0
#define AVR32_PSIF_RHR0_RXDATA_MASK                         0x000000ff
#define AVR32_PSIF_RHR0_RXDATA_OFFSET                                0
#define AVR32_PSIF_RHR0_RXDATA_SIZE                                  8
#define AVR32_PSIF_RHR1                                     0x00000104
#define AVR32_PSIF_RHR1_RXDATA                                       0
#define AVR32_PSIF_RHR1_RXDATA_MASK                         0x000000ff
#define AVR32_PSIF_RHR1_RXDATA_OFFSET                                0
#define AVR32_PSIF_RHR1_RXDATA_SIZE                                  8
#define AVR32_PSIF_RXDATA                                            0
#define AVR32_PSIF_RXDATA_MASK                              0x000000ff
#define AVR32_PSIF_RXDATA_OFFSET                                     0
#define AVR32_PSIF_RXDATA_SIZE                                       8
#define AVR32_PSIF_RXDIS                                             1
#define AVR32_PSIF_RXDIS_MASK                               0x00000002
#define AVR32_PSIF_RXDIS_OFFSET                                      1
#define AVR32_PSIF_RXDIS_SIZE                                        1
#define AVR32_PSIF_RXEN                                              0
#define AVR32_PSIF_RXEN_MASK                                0x00000001
#define AVR32_PSIF_RXEN_OFFSET                                       0
#define AVR32_PSIF_RXEN_SIZE                                         1
#define AVR32_PSIF_RXRDY                                             4
#define AVR32_PSIF_RXRDY_MASK                               0x00000010
#define AVR32_PSIF_RXRDY_OFFSET                                      4
#define AVR32_PSIF_RXRDY_SIZE                                        1
#define AVR32_PSIF_SR0                                      0x00000010
#define AVR32_PSIF_SR0_NACK                                          8
#define AVR32_PSIF_SR0_NACK_MASK                            0x00000100
#define AVR32_PSIF_SR0_NACK_OFFSET                                   8
#define AVR32_PSIF_SR0_NACK_SIZE                                     1
#define AVR32_PSIF_SR0_OVRUN                                         5
#define AVR32_PSIF_SR0_OVRUN_MASK                           0x00000020
#define AVR32_PSIF_SR0_OVRUN_OFFSET                                  5
#define AVR32_PSIF_SR0_OVRUN_SIZE                                    1
#define AVR32_PSIF_SR0_PARITY                                        9
#define AVR32_PSIF_SR0_PARITY_MASK                          0x00000200
#define AVR32_PSIF_SR0_PARITY_OFFSET                                 9
#define AVR32_PSIF_SR0_PARITY_SIZE                                   1
#define AVR32_PSIF_SR0_RXRDY                                         4
#define AVR32_PSIF_SR0_RXRDY_MASK                           0x00000010
#define AVR32_PSIF_SR0_RXRDY_OFFSET                                  4
#define AVR32_PSIF_SR0_RXRDY_SIZE                                    1
#define AVR32_PSIF_SR0_TXEMPTY                                       1
#define AVR32_PSIF_SR0_TXEMPTY_MASK                         0x00000002
#define AVR32_PSIF_SR0_TXEMPTY_OFFSET                                1
#define AVR32_PSIF_SR0_TXEMPTY_SIZE                                  1
#define AVR32_PSIF_SR0_TXRDY                                         0
#define AVR32_PSIF_SR0_TXRDY_MASK                           0x00000001
#define AVR32_PSIF_SR0_TXRDY_OFFSET                                  0
#define AVR32_PSIF_SR0_TXRDY_SIZE                                    1
#define AVR32_PSIF_SR1                                      0x00000110
#define AVR32_PSIF_SR1_NACK                                          8
#define AVR32_PSIF_SR1_NACK_MASK                            0x00000100
#define AVR32_PSIF_SR1_NACK_OFFSET                                   8
#define AVR32_PSIF_SR1_NACK_SIZE                                     1
#define AVR32_PSIF_SR1_OVRUN                                         5
#define AVR32_PSIF_SR1_OVRUN_MASK                           0x00000020
#define AVR32_PSIF_SR1_OVRUN_OFFSET                                  5
#define AVR32_PSIF_SR1_OVRUN_SIZE                                    1
#define AVR32_PSIF_SR1_PARITY                                        9
#define AVR32_PSIF_SR1_PARITY_MASK                          0x00000200
#define AVR32_PSIF_SR1_PARITY_OFFSET                                 9
#define AVR32_PSIF_SR1_PARITY_SIZE                                   1
#define AVR32_PSIF_SR1_RXRDY                                         4
#define AVR32_PSIF_SR1_RXRDY_MASK                           0x00000010
#define AVR32_PSIF_SR1_RXRDY_OFFSET                                  4
#define AVR32_PSIF_SR1_RXRDY_SIZE                                    1
#define AVR32_PSIF_SR1_TXEMPTY                                       1
#define AVR32_PSIF_SR1_TXEMPTY_MASK                         0x00000002
#define AVR32_PSIF_SR1_TXEMPTY_OFFSET                                1
#define AVR32_PSIF_SR1_TXEMPTY_SIZE                                  1
#define AVR32_PSIF_SR1_TXRDY                                         0
#define AVR32_PSIF_SR1_TXRDY_MASK                           0x00000001
#define AVR32_PSIF_SR1_TXRDY_OFFSET                                  0
#define AVR32_PSIF_SR1_TXRDY_SIZE                                    1
#define AVR32_PSIF_SWRST                                            15
#define AVR32_PSIF_SWRST_MASK                               0x00008000
#define AVR32_PSIF_SWRST_OFFSET                                     15
#define AVR32_PSIF_SWRST_SIZE                                        1
#define AVR32_PSIF_THR0                                     0x00000008
#define AVR32_PSIF_THR0_TXDATA                                       0
#define AVR32_PSIF_THR0_TXDATA_MASK                         0x000000ff
#define AVR32_PSIF_THR0_TXDATA_OFFSET                                0
#define AVR32_PSIF_THR0_TXDATA_SIZE                                  8
#define AVR32_PSIF_THR1                                     0x00000108
#define AVR32_PSIF_THR1_TXDATA                                       0
#define AVR32_PSIF_THR1_TXDATA_MASK                         0x000000ff
#define AVR32_PSIF_THR1_TXDATA_OFFSET                                0
#define AVR32_PSIF_THR1_TXDATA_SIZE                                  8
#define AVR32_PSIF_TXDATA                                            0
#define AVR32_PSIF_TXDATA_MASK                              0x000000ff
#define AVR32_PSIF_TXDATA_OFFSET                                     0
#define AVR32_PSIF_TXDATA_SIZE                                       8
#define AVR32_PSIF_TXDIS                                             9
#define AVR32_PSIF_TXDIS_MASK                               0x00000200
#define AVR32_PSIF_TXDIS_OFFSET                                      9
#define AVR32_PSIF_TXDIS_SIZE                                        1
#define AVR32_PSIF_TXEMPTY                                           1
#define AVR32_PSIF_TXEMPTY_MASK                             0x00000002
#define AVR32_PSIF_TXEMPTY_OFFSET                                    1
#define AVR32_PSIF_TXEMPTY_SIZE                                      1
#define AVR32_PSIF_TXEN                                              8
#define AVR32_PSIF_TXEN_MASK                                0x00000100
#define AVR32_PSIF_TXEN_OFFSET                                       8
#define AVR32_PSIF_TXEN_SIZE                                         1
#define AVR32_PSIF_TXRDY                                             0
#define AVR32_PSIF_TXRDY_MASK                               0x00000001
#define AVR32_PSIF_TXRDY_OFFSET                                      0
#define AVR32_PSIF_TXRDY_SIZE                                        1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_psif_cr0_t {
    unsigned int                 :16;
    unsigned int swrst           : 1;
    unsigned int                 : 5;
    unsigned int txdis           : 1;
    unsigned int txen            : 1;
    unsigned int                 : 6;
    unsigned int rxdis           : 1;
    unsigned int rxen            : 1;
} avr32_psif_cr0_t;



typedef struct avr32_psif_rhr0_t {
    unsigned int                 :24;
    unsigned int rxdata          : 8;
} avr32_psif_rhr0_t;



typedef struct avr32_psif_thr0_t {
    unsigned int                 :24;
    unsigned int txdata          : 8;
} avr32_psif_thr0_t;



typedef struct avr32_psif_sr0_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_sr0_t;



typedef struct avr32_psif_ier0_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_ier0_t;



typedef struct avr32_psif_idr0_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_idr0_t;



typedef struct avr32_psif_imr0_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_imr0_t;



typedef struct avr32_psif_psr0_t {
    unsigned int                 :19;
    unsigned int prscv           :13;
} avr32_psif_psr0_t;



typedef struct avr32_psif_cr1_t {
    unsigned int                 :16;
    unsigned int swrst           : 1;
    unsigned int                 : 5;
    unsigned int txdis           : 1;
    unsigned int txen            : 1;
    unsigned int                 : 6;
    unsigned int rxdis           : 1;
    unsigned int rxen            : 1;
} avr32_psif_cr1_t;



typedef struct avr32_psif_rhr1_t {
    unsigned int                 :24;
    unsigned int rxdata          : 8;
} avr32_psif_rhr1_t;



typedef struct avr32_psif_thr1_t {
    unsigned int                 :24;
    unsigned int txdata          : 8;
} avr32_psif_thr1_t;



typedef struct avr32_psif_sr1_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_sr1_t;



typedef struct avr32_psif_ier1_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_ier1_t;



typedef struct avr32_psif_idr1_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_idr1_t;



typedef struct avr32_psif_imr1_t {
    unsigned int                 :22;
    unsigned int parity          : 1;
    unsigned int nack            : 1;
    unsigned int                 : 2;
    unsigned int ovrun           : 1;
    unsigned int rxrdy           : 1;
    unsigned int                 : 2;
    unsigned int txempty         : 1;
    unsigned int txrdy           : 1;
} avr32_psif_imr1_t;



typedef struct avr32_psif_psr1_t {
    unsigned int                 :19;
    unsigned int prscv           :13;
} avr32_psif_psr1_t;



typedef struct avr32_psif_t {
  union {
          unsigned long                  cr0       ;//0x0000
          avr32_psif_cr0_t               CR0       ;
  };
  union {
          unsigned long                  rhr0      ;//0x0004
          avr32_psif_rhr0_t              RHR0      ;
  };
  union {
          unsigned long                  thr0      ;//0x0008
          avr32_psif_thr0_t              THR0      ;
  };
          unsigned int                   :32       ;//0x000c
  union {
    const unsigned long                  sr0       ;//0x0010
    const avr32_psif_sr0_t               SR0       ;
  };
  union {
          unsigned long                  ier0      ;//0x0014
          avr32_psif_ier0_t              IER0      ;
  };
  union {
          unsigned long                  idr0      ;//0x0018
          avr32_psif_idr0_t              IDR0      ;
  };
  union {
    const unsigned long                  imr0      ;//0x001c
    const avr32_psif_imr0_t              IMR0      ;
  };
          unsigned int                   :32       ;//0x0020
  union {
          unsigned long                  psr0      ;//0x0024
          avr32_psif_psr0_t              PSR0      ;
  };
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
  union {
          unsigned long                  cr1       ;//0x0100
          avr32_psif_cr1_t               CR1       ;
  };
  union {
          unsigned long                  rhr1      ;//0x0104
          avr32_psif_rhr1_t              RHR1      ;
  };
  union {
          unsigned long                  thr1      ;//0x0108
          avr32_psif_thr1_t              THR1      ;
  };
          unsigned int                   :32       ;//0x010c
  union {
    const unsigned long                  sr1       ;//0x0110
    const avr32_psif_sr1_t               SR1       ;
  };
  union {
          unsigned long                  ier1      ;//0x0114
          avr32_psif_ier1_t              IER1      ;
  };
  union {
          unsigned long                  idr1      ;//0x0118
          avr32_psif_idr1_t              IDR1      ;
  };
  union {
    const unsigned long                  imr1      ;//0x011c
    const avr32_psif_imr1_t              IMR1      ;
  };
          unsigned int                   :32       ;//0x0120
  union {
          unsigned long                  psr1      ;//0x0124
          avr32_psif_psr1_t              PSR1      ;
  };
} avr32_psif_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_PSIF_100_H_INCLUDED*/
#endif


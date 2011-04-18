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
#ifndef AVR32_AW_201_H_INCLUDED
#define AVR32_AW_201_H_INCLUDED

#define AVR32_AW_H_VERSION 201

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_AW_<register>
 - Bitfield mask:   AVR32_AW_<register>_<bitfield>
 - Bitfield offset: AVR32_AW_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AW_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_AW_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_AW_<bitfield>
 - Bitfield offset: AVR32_AW_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AW_<bitfield>_SIZE
 - Bitfield values: AVR32_AW_<bitfield>_<value name>
 - Bitfield values: AVR32_AW_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_AW_BR                                                0
#define AVR32_AW_BRR                                      0x00000020
#define AVR32_AW_BRR_BR                                            0
#define AVR32_AW_BRR_BR_MASK                              0x0000ffff
#define AVR32_AW_BRR_BR_OFFSET                                     0
#define AVR32_AW_BRR_BR_SIZE                                      16
#define AVR32_AW_BRR_MASK                                 0x0000ffff
#define AVR32_AW_BRR_RESETVALUE                           0x00000000
#define AVR32_AW_BR_MASK                                  0x0000ffff
#define AVR32_AW_BR_OFFSET                                         0
#define AVR32_AW_BR_SIZE                                          16
#define AVR32_AW_BUSY                                              0
#define AVR32_AW_BUSY_MASK                                0x00000001
#define AVR32_AW_BUSY_OFFSET                                       0
#define AVR32_AW_BUSY_SIZE                                         1
#define AVR32_AW_CENABLED                                          2
#define AVR32_AW_CENABLED_MASK                            0x00000004
#define AVR32_AW_CENABLED_OFFSET                                   2
#define AVR32_AW_CENABLED_SIZE                                     1
#define AVR32_AW_CLKEN                                             0
#define AVR32_AW_CLKEN_DISABLE                            0x00000000
#define AVR32_AW_CLKEN_ENABLE                             0x00000001
#define AVR32_AW_CLKEN_MASK                               0x00000001
#define AVR32_AW_CLKEN_OFFSET                                      0
#define AVR32_AW_CLKEN_SIZE                                        1
#define AVR32_AW_CLKR                                     0x00000028
#define AVR32_AW_CLKR_CLKEN                                        0
#define AVR32_AW_CLKR_CLKEN_DISABLE                       0x00000000
#define AVR32_AW_CLKR_CLKEN_ENABLE                        0x00000001
#define AVR32_AW_CLKR_CLKEN_MASK                          0x00000001
#define AVR32_AW_CLKR_CLKEN_OFFSET                                 0
#define AVR32_AW_CLKR_CLKEN_SIZE                                   1
#define AVR32_AW_CLKR_MASK                                0x00000001
#define AVR32_AW_CLKR_RESETVALUE                          0x00000000
#define AVR32_AW_CTRL                                     0x00000000
#define AVR32_AW_CTRL_MASK                                0x00000003
#define AVR32_AW_CTRL_MODE                                         0
#define AVR32_AW_CTRL_MODE_DISABLED                       0x00000000
#define AVR32_AW_CTRL_MODE_MASK                           0x00000003
#define AVR32_AW_CTRL_MODE_OFFSET                                  0
#define AVR32_AW_CTRL_MODE_RECEIVE                        0x00000001
#define AVR32_AW_CTRL_MODE_RECEIVESYNC                    0x00000003
#define AVR32_AW_CTRL_MODE_SIZE                                    2
#define AVR32_AW_CTRL_MODE_TRANSMIT                       0x00000002
#define AVR32_AW_CTRL_RESETVALUE                          0x00000000
#define AVR32_AW_DISABLE                                  0x00000000
#define AVR32_AW_DISABLED                                 0x00000000
#define AVR32_AW_DREADYINT                                         9
#define AVR32_AW_DREADYINT_MASK                           0x00000200
#define AVR32_AW_DREADYINT_OFFSET                                  9
#define AVR32_AW_DREADYINT_SIZE                                    1
#define AVR32_AW_ENABLE                                   0x00000001
#define AVR32_AW_IDR                                      0x00000010
#define AVR32_AW_IDR_DREADYINT                                     9
#define AVR32_AW_IDR_DREADYINT_MASK                       0x00000200
#define AVR32_AW_IDR_DREADYINT_OFFSET                              9
#define AVR32_AW_IDR_DREADYINT_SIZE                                1
#define AVR32_AW_IDR_MASK                                 0x00002700
#define AVR32_AW_IDR_OVERRUN                                      10
#define AVR32_AW_IDR_OVERRUN_MASK                         0x00000400
#define AVR32_AW_IDR_OVERRUN_OFFSET                               10
#define AVR32_AW_IDR_OVERRUN_SIZE                                  1
#define AVR32_AW_IDR_READYINT                                      8
#define AVR32_AW_IDR_READYINT_MASK                        0x00000100
#define AVR32_AW_IDR_READYINT_OFFSET                               8
#define AVR32_AW_IDR_READYINT_SIZE                                 1
#define AVR32_AW_IDR_RESETVALUE                           0x00000000
#define AVR32_AW_IDR_TRMIS                                        13
#define AVR32_AW_IDR_TRMIS_MASK                           0x00002000
#define AVR32_AW_IDR_TRMIS_OFFSET                                 13
#define AVR32_AW_IDR_TRMIS_SIZE                                    1
#define AVR32_AW_IER                                      0x0000000c
#define AVR32_AW_IER_DREADYINT                                     9
#define AVR32_AW_IER_DREADYINT_MASK                       0x00000200
#define AVR32_AW_IER_DREADYINT_OFFSET                              9
#define AVR32_AW_IER_DREADYINT_SIZE                                1
#define AVR32_AW_IER_MASK                                 0x00002700
#define AVR32_AW_IER_OVERRUN                                      10
#define AVR32_AW_IER_OVERRUN_MASK                         0x00000400
#define AVR32_AW_IER_OVERRUN_OFFSET                               10
#define AVR32_AW_IER_OVERRUN_SIZE                                  1
#define AVR32_AW_IER_READYINT                                      8
#define AVR32_AW_IER_READYINT_MASK                        0x00000100
#define AVR32_AW_IER_READYINT_OFFSET                               8
#define AVR32_AW_IER_READYINT_SIZE                                 1
#define AVR32_AW_IER_RESETVALUE                           0x00000000
#define AVR32_AW_IER_TRMIS                                        13
#define AVR32_AW_IER_TRMIS_MASK                           0x00002000
#define AVR32_AW_IER_TRMIS_OFFSET                                 13
#define AVR32_AW_IER_TRMIS_SIZE                                    1
#define AVR32_AW_IMR                                      0x00000014
#define AVR32_AW_IMR_DREADYINT                                     9
#define AVR32_AW_IMR_DREADYINT_MASK                       0x00000200
#define AVR32_AW_IMR_DREADYINT_OFFSET                              9
#define AVR32_AW_IMR_DREADYINT_SIZE                                1
#define AVR32_AW_IMR_MASK                                 0x00002700
#define AVR32_AW_IMR_OVERRUN                                      10
#define AVR32_AW_IMR_OVERRUN_MASK                         0x00000400
#define AVR32_AW_IMR_OVERRUN_OFFSET                               10
#define AVR32_AW_IMR_OVERRUN_SIZE                                  1
#define AVR32_AW_IMR_READYINT                                      8
#define AVR32_AW_IMR_READYINT_MASK                        0x00000100
#define AVR32_AW_IMR_READYINT_OFFSET                               8
#define AVR32_AW_IMR_READYINT_SIZE                                 1
#define AVR32_AW_IMR_RESETVALUE                           0x00000000
#define AVR32_AW_IMR_TRMIS                                        13
#define AVR32_AW_IMR_TRMIS_MASK                           0x00002000
#define AVR32_AW_IMR_TRMIS_OFFSET                                 13
#define AVR32_AW_IMR_TRMIS_SIZE                                    1
#define AVR32_AW_MODE                                              0
#define AVR32_AW_MODE_DISABLED                            0x00000000
#define AVR32_AW_MODE_MASK                                0x00000003
#define AVR32_AW_MODE_OFFSET                                       0
#define AVR32_AW_MODE_RECEIVE                             0x00000001
#define AVR32_AW_MODE_RECEIVESYNC                         0x00000003
#define AVR32_AW_MODE_SIZE                                         2
#define AVR32_AW_MODE_TRANSMIT                            0x00000002
#define AVR32_AW_OVERRUN                                          10
#define AVR32_AW_OVERRUN_MASK                             0x00000400
#define AVR32_AW_OVERRUN_OFFSET                                   10
#define AVR32_AW_OVERRUN_SIZE                                      1
#define AVR32_AW_READYINT                                          8
#define AVR32_AW_READYINT_MASK                            0x00000100
#define AVR32_AW_READYINT_OFFSET                                   8
#define AVR32_AW_READYINT_SIZE                                     1
#define AVR32_AW_RECEIVE                                  0x00000001
#define AVR32_AW_RECEIVESYNC                              0x00000003
#define AVR32_AW_RHR                                      0x00000018
#define AVR32_AW_RHR_MASK                                 0x000000ff
#define AVR32_AW_RHR_RESETVALUE                           0x00000000
#define AVR32_AW_RHR_RXDATA                                        0
#define AVR32_AW_RHR_RXDATA_MASK                          0x000000ff
#define AVR32_AW_RHR_RXDATA_OFFSET                                 0
#define AVR32_AW_RHR_RXDATA_SIZE                                   8
#define AVR32_AW_RXDATA                                            0
#define AVR32_AW_RXDATA_MASK                              0x000000ff
#define AVR32_AW_RXDATA_OFFSET                                     0
#define AVR32_AW_RXDATA_SIZE                                       8
#define AVR32_AW_SCR                                      0x00000008
#define AVR32_AW_SCR_DREADYINT                                     9
#define AVR32_AW_SCR_DREADYINT_MASK                       0x00000200
#define AVR32_AW_SCR_DREADYINT_OFFSET                              9
#define AVR32_AW_SCR_DREADYINT_SIZE                                1
#define AVR32_AW_SCR_MASK                                 0x00002700
#define AVR32_AW_SCR_OVERRUN                                      10
#define AVR32_AW_SCR_OVERRUN_MASK                         0x00000400
#define AVR32_AW_SCR_OVERRUN_OFFSET                               10
#define AVR32_AW_SCR_OVERRUN_SIZE                                  1
#define AVR32_AW_SCR_READYINT                                      8
#define AVR32_AW_SCR_READYINT_MASK                        0x00000100
#define AVR32_AW_SCR_READYINT_OFFSET                               8
#define AVR32_AW_SCR_READYINT_SIZE                                 1
#define AVR32_AW_SCR_RESETVALUE                           0x00000000
#define AVR32_AW_SCR_TRMIS                                        13
#define AVR32_AW_SCR_TRMIS_MASK                           0x00002000
#define AVR32_AW_SCR_TRMIS_OFFSET                                 13
#define AVR32_AW_SCR_TRMIS_SIZE                                    1
#define AVR32_AW_SR                                       0x00000004
#define AVR32_AW_SR_BUSY                                           0
#define AVR32_AW_SR_BUSY_MASK                             0x00000001
#define AVR32_AW_SR_BUSY_OFFSET                                    0
#define AVR32_AW_SR_BUSY_SIZE                                      1
#define AVR32_AW_SR_CENABLED                                       2
#define AVR32_AW_SR_CENABLED_MASK                         0x00000004
#define AVR32_AW_SR_CENABLED_OFFSET                                2
#define AVR32_AW_SR_CENABLED_SIZE                                  1
#define AVR32_AW_SR_DREADYINT                                      9
#define AVR32_AW_SR_DREADYINT_MASK                        0x00000200
#define AVR32_AW_SR_DREADYINT_OFFSET                               9
#define AVR32_AW_SR_DREADYINT_SIZE                                 1
#define AVR32_AW_SR_MASK                                  0x00002705
#define AVR32_AW_SR_OVERRUN                                       10
#define AVR32_AW_SR_OVERRUN_MASK                          0x00000400
#define AVR32_AW_SR_OVERRUN_OFFSET                                10
#define AVR32_AW_SR_OVERRUN_SIZE                                   1
#define AVR32_AW_SR_READYINT                                       8
#define AVR32_AW_SR_READYINT_MASK                         0x00000100
#define AVR32_AW_SR_READYINT_OFFSET                                8
#define AVR32_AW_SR_READYINT_SIZE                                  1
#define AVR32_AW_SR_RESETVALUE                            0x00000000
#define AVR32_AW_SR_TRMIS                                         13
#define AVR32_AW_SR_TRMIS_MASK                            0x00002000
#define AVR32_AW_SR_TRMIS_OFFSET                                  13
#define AVR32_AW_SR_TRMIS_SIZE                                     1
#define AVR32_AW_THR                                      0x0000001c
#define AVR32_AW_THR_MASK                                 0x000000ff
#define AVR32_AW_THR_RESETVALUE                           0x00000000
#define AVR32_AW_THR_TXDATA                                        0
#define AVR32_AW_THR_TXDATA_MASK                          0x000000ff
#define AVR32_AW_THR_TXDATA_OFFSET                                 0
#define AVR32_AW_THR_TXDATA_SIZE                                   8
#define AVR32_AW_TRANSMIT                                 0x00000002
#define AVR32_AW_TRMIS                                            13
#define AVR32_AW_TRMIS_MASK                               0x00002000
#define AVR32_AW_TRMIS_OFFSET                                     13
#define AVR32_AW_TRMIS_SIZE                                        1
#define AVR32_AW_TXDATA                                            0
#define AVR32_AW_TXDATA_MASK                              0x000000ff
#define AVR32_AW_TXDATA_OFFSET                                     0
#define AVR32_AW_TXDATA_SIZE                                       8
#define AVR32_AW_VERSION                                  0x00000024
#define AVR32_AW_VERSION_MASK                             0x00000fff
#define AVR32_AW_VERSION_OFFSET                                    0
#define AVR32_AW_VERSION_RESETVALUE                       0x00000000
#define AVR32_AW_VERSION_SIZE                                     12
#define AVR32_AW_VERSION_VERSION                                   0
#define AVR32_AW_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_AW_VERSION_VERSION_OFFSET                            0
#define AVR32_AW_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_aw_ctrl_t {
    unsigned int                 :30;
    unsigned int mode            : 2;
} avr32_aw_ctrl_t;



typedef struct avr32_aw_sr_t {
    unsigned int                 :18;
    unsigned int trmis           : 1;
    unsigned int                 : 2;
    unsigned int overrun         : 1;
    unsigned int dreadyint       : 1;
    unsigned int readyint        : 1;
    unsigned int                 : 5;
    unsigned int cenabled        : 1;
    unsigned int                 : 1;
    unsigned int busy            : 1;
} avr32_aw_sr_t;



typedef struct avr32_aw_scr_t {
    unsigned int                 :18;
    unsigned int trmis           : 1;
    unsigned int                 : 2;
    unsigned int overrun         : 1;
    unsigned int dreadyint       : 1;
    unsigned int readyint        : 1;
    unsigned int                 : 8;
} avr32_aw_scr_t;



typedef struct avr32_aw_ier_t {
    unsigned int                 :18;
    unsigned int trmis           : 1;
    unsigned int                 : 2;
    unsigned int overrun         : 1;
    unsigned int dreadyint       : 1;
    unsigned int readyint        : 1;
    unsigned int                 : 8;
} avr32_aw_ier_t;



typedef struct avr32_aw_idr_t {
    unsigned int                 :18;
    unsigned int trmis           : 1;
    unsigned int                 : 2;
    unsigned int overrun         : 1;
    unsigned int dreadyint       : 1;
    unsigned int readyint        : 1;
    unsigned int                 : 8;
} avr32_aw_idr_t;



typedef struct avr32_aw_imr_t {
    unsigned int                 :18;
    unsigned int trmis           : 1;
    unsigned int                 : 2;
    unsigned int overrun         : 1;
    unsigned int dreadyint       : 1;
    unsigned int readyint        : 1;
    unsigned int                 : 8;
} avr32_aw_imr_t;



typedef struct avr32_aw_rhr_t {
    unsigned int                 :24;
    unsigned int rxdata          : 8;
} avr32_aw_rhr_t;



typedef struct avr32_aw_thr_t {
    unsigned int                 :24;
    unsigned int txdata          : 8;
} avr32_aw_thr_t;



typedef struct avr32_aw_brr_t {
    unsigned int                 :16;
    unsigned int br              :16;
} avr32_aw_brr_t;



typedef struct avr32_aw_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_aw_version_t;



typedef struct avr32_aw_clkr_t {
    unsigned int                 :31;
    unsigned int clken           : 1;
} avr32_aw_clkr_t;



typedef struct avr32_aw_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_aw_ctrl_t                CTRL      ;
  };
  union {
    const unsigned long                  sr        ;//0x0004
    const avr32_aw_sr_t                  SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0008
          avr32_aw_scr_t                 SCR       ;
  };
  union {
          unsigned long                  ier       ;//0x000c
          avr32_aw_ier_t                 IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0010
          avr32_aw_idr_t                 IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0014
    const avr32_aw_imr_t                 IMR       ;
  };
  union {
    const unsigned long                  rhr       ;//0x0018
    const avr32_aw_rhr_t                 RHR       ;
  };
  union {
          unsigned long                  thr       ;//0x001c
          avr32_aw_thr_t                 THR       ;
  };
  union {
          unsigned long                  brr       ;//0x0020
          avr32_aw_brr_t                 BRR       ;
  };
  union {
    const unsigned long                  version   ;//0x0024
    const avr32_aw_version_t             VERSION   ;
  };
  union {
          unsigned long                  clkr      ;//0x0028
          avr32_aw_clkr_t                CLKR      ;
  };
} avr32_aw_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_AW_201_H_INCLUDED*/
#endif


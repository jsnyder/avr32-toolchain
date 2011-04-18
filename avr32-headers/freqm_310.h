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
#ifndef AVR32_FREQM_310_H_INCLUDED
#define AVR32_FREQM_310_H_INCLUDED

#define AVR32_FREQM_H_VERSION 310

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_FREQM_<register>
 - Bitfield mask:   AVR32_FREQM_<register>_<bitfield>
 - Bitfield offset: AVR32_FREQM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_FREQM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_FREQM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_FREQM_<bitfield>
 - Bitfield offset: AVR32_FREQM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_FREQM_<bitfield>_SIZE
 - Bitfield values: AVR32_FREQM_<bitfield>_<value name>
 - Bitfield values: AVR32_FREQM_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_FREQM_BUSY                                              0
#define AVR32_FREQM_BUSY_MASK                                0x00000001
#define AVR32_FREQM_BUSY_OFFSET                                       0
#define AVR32_FREQM_BUSY_SIZE                                         1
#define AVR32_FREQM_CLKSEL                                           16
#define AVR32_FREQM_CLKSEL_MASK                              0x001f0000
#define AVR32_FREQM_CLKSEL_OFFSET                                    16
#define AVR32_FREQM_CLKSEL_SIZE                                       5
#define AVR32_FREQM_CTRL                                     0x00000000
#define AVR32_FREQM_CTRL_MASK                                0x00000001
#define AVR32_FREQM_CTRL_RESETVALUE                          0x00000000
#define AVR32_FREQM_CTRL_START                                        0
#define AVR32_FREQM_CTRL_START_MASK                          0x00000001
#define AVR32_FREQM_CTRL_START_OFFSET                                 0
#define AVR32_FREQM_CTRL_START_SIZE                                   1
#define AVR32_FREQM_DONE                                              0
#define AVR32_FREQM_DONE_MASK                                0x00000001
#define AVR32_FREQM_DONE_OFFSET                                       0
#define AVR32_FREQM_DONE_SIZE                                         1
#define AVR32_FREQM_ICR                                      0x00000020
#define AVR32_FREQM_ICR_DONE                                          0
#define AVR32_FREQM_ICR_DONE_MASK                            0x00000001
#define AVR32_FREQM_ICR_DONE_OFFSET                                   0
#define AVR32_FREQM_ICR_DONE_SIZE                                     1
#define AVR32_FREQM_ICR_MASK                                 0x00000003
#define AVR32_FREQM_ICR_RCLKRDY                                       1
#define AVR32_FREQM_ICR_RCLKRDY_MASK                         0x00000002
#define AVR32_FREQM_ICR_RCLKRDY_OFFSET                                1
#define AVR32_FREQM_ICR_RCLKRDY_SIZE                                  1
#define AVR32_FREQM_ICR_RESETVALUE                           0x00000000
#define AVR32_FREQM_IDR                                      0x00000014
#define AVR32_FREQM_IDR_DONE                                          0
#define AVR32_FREQM_IDR_DONE_MASK                            0x00000001
#define AVR32_FREQM_IDR_DONE_OFFSET                                   0
#define AVR32_FREQM_IDR_DONE_SIZE                                     1
#define AVR32_FREQM_IDR_MASK                                 0x00000003
#define AVR32_FREQM_IDR_RCLKRDY                                       1
#define AVR32_FREQM_IDR_RCLKRDY_MASK                         0x00000002
#define AVR32_FREQM_IDR_RCLKRDY_OFFSET                                1
#define AVR32_FREQM_IDR_RCLKRDY_SIZE                                  1
#define AVR32_FREQM_IDR_RESETVALUE                           0x00000000
#define AVR32_FREQM_IER                                      0x00000010
#define AVR32_FREQM_IER_DONE                                          0
#define AVR32_FREQM_IER_DONE_MASK                            0x00000001
#define AVR32_FREQM_IER_DONE_OFFSET                                   0
#define AVR32_FREQM_IER_DONE_SIZE                                     1
#define AVR32_FREQM_IER_MASK                                 0x00000003
#define AVR32_FREQM_IER_RCLKRDY                                       1
#define AVR32_FREQM_IER_RCLKRDY_MASK                         0x00000002
#define AVR32_FREQM_IER_RCLKRDY_OFFSET                                1
#define AVR32_FREQM_IER_RCLKRDY_SIZE                                  1
#define AVR32_FREQM_IER_RESETVALUE                           0x00000000
#define AVR32_FREQM_IMR                                      0x00000018
#define AVR32_FREQM_IMR_DONE                                          0
#define AVR32_FREQM_IMR_DONE_MASK                            0x00000001
#define AVR32_FREQM_IMR_DONE_OFFSET                                   0
#define AVR32_FREQM_IMR_DONE_SIZE                                     1
#define AVR32_FREQM_IMR_MASK                                 0x00000003
#define AVR32_FREQM_IMR_RCLKRDY                                       1
#define AVR32_FREQM_IMR_RCLKRDY_MASK                         0x00000002
#define AVR32_FREQM_IMR_RCLKRDY_OFFSET                                1
#define AVR32_FREQM_IMR_RCLKRDY_SIZE                                  1
#define AVR32_FREQM_IMR_RESETVALUE                           0x00000000
#define AVR32_FREQM_ISR                                      0x0000001c
#define AVR32_FREQM_ISR_DONE                                          0
#define AVR32_FREQM_ISR_DONE_MASK                            0x00000001
#define AVR32_FREQM_ISR_DONE_OFFSET                                   0
#define AVR32_FREQM_ISR_DONE_SIZE                                     1
#define AVR32_FREQM_ISR_MASK                                 0x00000003
#define AVR32_FREQM_ISR_RCLKRDY                                       1
#define AVR32_FREQM_ISR_RCLKRDY_MASK                         0x00000002
#define AVR32_FREQM_ISR_RCLKRDY_OFFSET                                1
#define AVR32_FREQM_ISR_RCLKRDY_SIZE                                  1
#define AVR32_FREQM_ISR_RESETVALUE                           0x00000000
#define AVR32_FREQM_MODE                                     0x00000004
#define AVR32_FREQM_MODE_CLKSEL                                      16
#define AVR32_FREQM_MODE_CLKSEL_MASK                         0x001f0000
#define AVR32_FREQM_MODE_CLKSEL_OFFSET                               16
#define AVR32_FREQM_MODE_CLKSEL_SIZE                                  5
#define AVR32_FREQM_MODE_MASK                                0x801fff07
#define AVR32_FREQM_MODE_REFCEN                                      31
#define AVR32_FREQM_MODE_REFCEN_MASK                         0x80000000
#define AVR32_FREQM_MODE_REFCEN_OFFSET                               31
#define AVR32_FREQM_MODE_REFCEN_SIZE                                  1
#define AVR32_FREQM_MODE_REFNUM                                       8
#define AVR32_FREQM_MODE_REFNUM_MASK                         0x0000ff00
#define AVR32_FREQM_MODE_REFNUM_OFFSET                                8
#define AVR32_FREQM_MODE_REFNUM_SIZE                                  8
#define AVR32_FREQM_MODE_REFSEL                                       0
#define AVR32_FREQM_MODE_REFSEL_MASK                         0x00000007
#define AVR32_FREQM_MODE_REFSEL_OFFSET                                0
#define AVR32_FREQM_MODE_REFSEL_SIZE                                  3
#define AVR32_FREQM_MODE_RESETVALUE                          0x00000000
#define AVR32_FREQM_RCLKBUSY                                          1
#define AVR32_FREQM_RCLKBUSY_MASK                            0x00000002
#define AVR32_FREQM_RCLKBUSY_OFFSET                                   1
#define AVR32_FREQM_RCLKBUSY_SIZE                                     1
#define AVR32_FREQM_RCLKRDY                                           1
#define AVR32_FREQM_RCLKRDY_MASK                             0x00000002
#define AVR32_FREQM_RCLKRDY_OFFSET                                    1
#define AVR32_FREQM_RCLKRDY_SIZE                                      1
#define AVR32_FREQM_REFCEN                                           31
#define AVR32_FREQM_REFCEN_MASK                              0x80000000
#define AVR32_FREQM_REFCEN_OFFSET                                    31
#define AVR32_FREQM_REFCEN_SIZE                                       1
#define AVR32_FREQM_REFNUM                                            8
#define AVR32_FREQM_REFNUM_MASK                              0x0000ff00
#define AVR32_FREQM_REFNUM_OFFSET                                     8
#define AVR32_FREQM_REFNUM_SIZE                                       8
#define AVR32_FREQM_REFSEL                                            0
#define AVR32_FREQM_REFSEL_MASK                              0x00000007
#define AVR32_FREQM_REFSEL_OFFSET                                     0
#define AVR32_FREQM_REFSEL_SIZE                                       3
#define AVR32_FREQM_START                                             0
#define AVR32_FREQM_START_MASK                               0x00000001
#define AVR32_FREQM_START_OFFSET                                      0
#define AVR32_FREQM_START_SIZE                                        1
#define AVR32_FREQM_STATUS                                   0x00000008
#define AVR32_FREQM_STATUS_BUSY                                       0
#define AVR32_FREQM_STATUS_BUSY_MASK                         0x00000001
#define AVR32_FREQM_STATUS_BUSY_OFFSET                                0
#define AVR32_FREQM_STATUS_BUSY_SIZE                                  1
#define AVR32_FREQM_STATUS_MASK                              0x00000003
#define AVR32_FREQM_STATUS_RCLKBUSY                                   1
#define AVR32_FREQM_STATUS_RCLKBUSY_MASK                     0x00000002
#define AVR32_FREQM_STATUS_RCLKBUSY_OFFSET                            1
#define AVR32_FREQM_STATUS_RCLKBUSY_SIZE                              1
#define AVR32_FREQM_STATUS_RESETVALUE                        0x00000000
#define AVR32_FREQM_VALUE                                    0x0000000c
#define AVR32_FREQM_VALUE_MASK                               0x00ffffff
#define AVR32_FREQM_VALUE_OFFSET                                      0
#define AVR32_FREQM_VALUE_RESETVALUE                         0x00000000
#define AVR32_FREQM_VALUE_SIZE                                       24
#define AVR32_FREQM_VALUE_VALUE                                       0
#define AVR32_FREQM_VALUE_VALUE_MASK                         0x00ffffff
#define AVR32_FREQM_VALUE_VALUE_OFFSET                                0
#define AVR32_FREQM_VALUE_VALUE_SIZE                                 24
#define AVR32_FREQM_VARIANT                                          16
#define AVR32_FREQM_VARIANT_MASK                             0x000f0000
#define AVR32_FREQM_VARIANT_OFFSET                                   16
#define AVR32_FREQM_VARIANT_SIZE                                      4
#define AVR32_FREQM_VERSION                                  0x000003fc
#define AVR32_FREQM_VERSION_MASK                             0x000f0fff
#define AVR32_FREQM_VERSION_OFFSET                                    0
#define AVR32_FREQM_VERSION_RESETVALUE                       0x00000000
#define AVR32_FREQM_VERSION_SIZE                                     12
#define AVR32_FREQM_VERSION_VARIANT                                  16
#define AVR32_FREQM_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_FREQM_VERSION_VARIANT_OFFSET                           16
#define AVR32_FREQM_VERSION_VARIANT_SIZE                              4
#define AVR32_FREQM_VERSION_VERSION                                   0
#define AVR32_FREQM_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_FREQM_VERSION_VERSION_OFFSET                            0
#define AVR32_FREQM_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_freqm_ctrl_t {
    unsigned int                 :31;
    unsigned int start           : 1;
} avr32_freqm_ctrl_t;



typedef struct avr32_freqm_mode_t {
    unsigned int refcen          : 1;
    unsigned int                 :10;
    unsigned int clksel          : 5;
    unsigned int refnum          : 8;
    unsigned int                 : 5;
    unsigned int refsel          : 3;
} avr32_freqm_mode_t;



typedef struct avr32_freqm_status_t {
    unsigned int                 :30;
    unsigned int rclkbusy        : 1;
    unsigned int busy            : 1;
} avr32_freqm_status_t;



typedef struct avr32_freqm_value_t {
    unsigned int                 : 8;
    unsigned int value           :24;
} avr32_freqm_value_t;



typedef struct avr32_freqm_ier_t {
    unsigned int                 :30;
    unsigned int rclkrdy         : 1;
    unsigned int done            : 1;
} avr32_freqm_ier_t;



typedef struct avr32_freqm_idr_t {
    unsigned int                 :30;
    unsigned int rclkrdy         : 1;
    unsigned int done            : 1;
} avr32_freqm_idr_t;



typedef struct avr32_freqm_imr_t {
    unsigned int                 :30;
    unsigned int rclkrdy         : 1;
    unsigned int done            : 1;
} avr32_freqm_imr_t;



typedef struct avr32_freqm_isr_t {
    unsigned int                 :30;
    unsigned int rclkrdy         : 1;
    unsigned int done            : 1;
} avr32_freqm_isr_t;



typedef struct avr32_freqm_icr_t {
    unsigned int                 :30;
    unsigned int rclkrdy         : 1;
    unsigned int done            : 1;
} avr32_freqm_icr_t;



typedef struct avr32_freqm_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_freqm_version_t;



typedef struct avr32_freqm_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_freqm_ctrl_t             CTRL      ;
  };
  union {
          unsigned long                  mode      ;//0x0004
          avr32_freqm_mode_t             MODE      ;
  };
  union {
    const unsigned long                  status    ;//0x0008
    const avr32_freqm_status_t           STATUS    ;
  };
  union {
    const unsigned long                  value     ;//0x000c
    const avr32_freqm_value_t            VALUE     ;
  };
  union {
          unsigned long                  ier       ;//0x0010
          avr32_freqm_ier_t              IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_freqm_idr_t              IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_freqm_imr_t              IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x001c
    const avr32_freqm_isr_t              ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0020
          avr32_freqm_icr_t              ICR       ;
  };
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
          unsigned int                   :32       ;//0x02c0
          unsigned int                   :32       ;//0x02c4
          unsigned int                   :32       ;//0x02c8
          unsigned int                   :32       ;//0x02cc
          unsigned int                   :32       ;//0x02d0
          unsigned int                   :32       ;//0x02d4
          unsigned int                   :32       ;//0x02d8
          unsigned int                   :32       ;//0x02dc
          unsigned int                   :32       ;//0x02e0
          unsigned int                   :32       ;//0x02e4
          unsigned int                   :32       ;//0x02e8
          unsigned int                   :32       ;//0x02ec
          unsigned int                   :32       ;//0x02f0
          unsigned int                   :32       ;//0x02f4
          unsigned int                   :32       ;//0x02f8
          unsigned int                   :32       ;//0x02fc
          unsigned int                   :32       ;//0x0300
          unsigned int                   :32       ;//0x0304
          unsigned int                   :32       ;//0x0308
          unsigned int                   :32       ;//0x030c
          unsigned int                   :32       ;//0x0310
          unsigned int                   :32       ;//0x0314
          unsigned int                   :32       ;//0x0318
          unsigned int                   :32       ;//0x031c
          unsigned int                   :32       ;//0x0320
          unsigned int                   :32       ;//0x0324
          unsigned int                   :32       ;//0x0328
          unsigned int                   :32       ;//0x032c
          unsigned int                   :32       ;//0x0330
          unsigned int                   :32       ;//0x0334
          unsigned int                   :32       ;//0x0338
          unsigned int                   :32       ;//0x033c
          unsigned int                   :32       ;//0x0340
          unsigned int                   :32       ;//0x0344
          unsigned int                   :32       ;//0x0348
          unsigned int                   :32       ;//0x034c
          unsigned int                   :32       ;//0x0350
          unsigned int                   :32       ;//0x0354
          unsigned int                   :32       ;//0x0358
          unsigned int                   :32       ;//0x035c
          unsigned int                   :32       ;//0x0360
          unsigned int                   :32       ;//0x0364
          unsigned int                   :32       ;//0x0368
          unsigned int                   :32       ;//0x036c
          unsigned int                   :32       ;//0x0370
          unsigned int                   :32       ;//0x0374
          unsigned int                   :32       ;//0x0378
          unsigned int                   :32       ;//0x037c
          unsigned int                   :32       ;//0x0380
          unsigned int                   :32       ;//0x0384
          unsigned int                   :32       ;//0x0388
          unsigned int                   :32       ;//0x038c
          unsigned int                   :32       ;//0x0390
          unsigned int                   :32       ;//0x0394
          unsigned int                   :32       ;//0x0398
          unsigned int                   :32       ;//0x039c
          unsigned int                   :32       ;//0x03a0
          unsigned int                   :32       ;//0x03a4
          unsigned int                   :32       ;//0x03a8
          unsigned int                   :32       ;//0x03ac
          unsigned int                   :32       ;//0x03b0
          unsigned int                   :32       ;//0x03b4
          unsigned int                   :32       ;//0x03b8
          unsigned int                   :32       ;//0x03bc
          unsigned int                   :32       ;//0x03c0
          unsigned int                   :32       ;//0x03c4
          unsigned int                   :32       ;//0x03c8
          unsigned int                   :32       ;//0x03cc
          unsigned int                   :32       ;//0x03d0
          unsigned int                   :32       ;//0x03d4
          unsigned int                   :32       ;//0x03d8
          unsigned int                   :32       ;//0x03dc
          unsigned int                   :32       ;//0x03e0
          unsigned int                   :32       ;//0x03e4
          unsigned int                   :32       ;//0x03e8
          unsigned int                   :32       ;//0x03ec
          unsigned int                   :32       ;//0x03f0
          unsigned int                   :32       ;//0x03f4
          unsigned int                   :32       ;//0x03f8
  union {
    const unsigned long                  version   ;//0x03fc
    const avr32_freqm_version_t          VERSION   ;
  };
} avr32_freqm_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_FREQM_310_H_INCLUDED*/
#endif


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
 * Model        : UC3L064T
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $
 *
 ****************************************************************************/
#ifndef AVR32_GPIO_LOCAL_100_H_INCLUDED
#define AVR32_GPIO_LOCAL_100_H_INCLUDED

#define AVR32_GPIO_LOCAL_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_GPIO_LOCAL_<register>
 - Bitfield mask:   AVR32_GPIO_LOCAL_<register>_<bitfield>
 - Bitfield offset: AVR32_GPIO_LOCAL_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_GPIO_LOCAL_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_GPIO_LOCAL_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_GPIO_LOCAL_<bitfield>
 - Bitfield offset: AVR32_GPIO_LOCAL_<bitfield>_OFFSET
 - Bitfield size:   AVR32_GPIO_LOCAL_<bitfield>_SIZE
 - Bitfield values: AVR32_GPIO_LOCAL_<bitfield>_<value name>
 - Bitfield values: AVR32_GPIO_LOCAL_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_GPIO_LOCAL_ODER                                     0x00000040
#define AVR32_GPIO_LOCAL_ODERC                                    0x00000048
#define AVR32_GPIO_LOCAL_ODERC_MASK                               0x00000000
#define AVR32_GPIO_LOCAL_ODERC_RESETVALUE                         0x00000000
#define AVR32_GPIO_LOCAL_ODERS                                    0x00000044
#define AVR32_GPIO_LOCAL_ODERS_MASK                               0x00000000
#define AVR32_GPIO_LOCAL_ODERS_RESETVALUE                         0x00000000
#define AVR32_GPIO_LOCAL_ODERT                                    0x0000004c
#define AVR32_GPIO_LOCAL_ODERT_MASK                               0x00000000
#define AVR32_GPIO_LOCAL_ODERT_RESETVALUE                         0x00000000
#define AVR32_GPIO_LOCAL_ODER_MASK                                0x00000000
#define AVR32_GPIO_LOCAL_ODER_RESETVALUE                          0x00000000
#define AVR32_GPIO_LOCAL_OVR                                      0x00000050
#define AVR32_GPIO_LOCAL_OVRC                                     0x00000058
#define AVR32_GPIO_LOCAL_OVRC_MASK                                0x00000000
#define AVR32_GPIO_LOCAL_OVRC_RESETVALUE                          0x00000000
#define AVR32_GPIO_LOCAL_OVRS                                     0x00000054
#define AVR32_GPIO_LOCAL_OVRS_MASK                                0x00000000
#define AVR32_GPIO_LOCAL_OVRS_RESETVALUE                          0x00000000
#define AVR32_GPIO_LOCAL_OVRT                                     0x0000005c
#define AVR32_GPIO_LOCAL_OVRT_MASK                                0x00000000
#define AVR32_GPIO_LOCAL_OVRT_RESETVALUE                          0x00000000
#define AVR32_GPIO_LOCAL_OVR_MASK                                 0x00000000
#define AVR32_GPIO_LOCAL_OVR_RESETVALUE                           0x00000000
#define AVR32_GPIO_LOCAL_PVR                                      0x00000060
#define AVR32_GPIO_LOCAL_PVR_MASK                                 0x00000000
#define AVR32_GPIO_LOCAL_PVR_RESETVALUE                           0x00000000




#ifdef __AVR32_ABI_COMPILER__

typedef struct avr32_gpio_local_port_t {
          unsigned int                   :32       ;//0x0000
          unsigned int                   :32       ;//0x0004
          unsigned int                   :32       ;//0x0008
          unsigned int                   :32       ;//0x000c
          unsigned int                   :32       ;//0x0010
          unsigned int                   :32       ;//0x0014
          unsigned int                   :32       ;//0x0018
          unsigned int                   :32       ;//0x001c
          unsigned int                   :32       ;//0x0020
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned long                  oder      ;//0x0040
          unsigned long                  oders     ;//0x0044
          unsigned long                  oderc     ;//0x0048
          unsigned long                  odert     ;//0x004c
          unsigned long                  ovr       ;//0x0050
          unsigned long                  ovrs      ;//0x0054
          unsigned long                  ovrc      ;//0x0058
          unsigned long                  ovrt      ;//0x005c
    const unsigned long                  pvr       ;//0x0060
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
} avr32_gpio_local_port_t;


typedef struct avr32_gpio_local_t {
  avr32_gpio_local_port_t port[AVR32_GPIO_PORT_LENGTH];//0x0
  avr32_gpio_local_port_t port_reserved[64 - AVR32_GPIO_PORT_LENGTH];//Padding
} avr32_gpio_local_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_GPIO_LOCAL_100_H_INCLUDED*/
#endif


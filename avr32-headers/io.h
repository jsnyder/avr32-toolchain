/*This file is prepared for Doxygen automatic documentation generation.*/
/*! \file *********************************************************************
 *
 * \brief Standard part header file.
 *
 * This file includes the appropriate part header file according to the defined
 * MCU.
 *
 * - Compiler:           IAR EWAVR32 and GNU GCC for AVR32
 * - Supported devices:  All AVR32 devices can be used.
 * - AppNote:
 *
 * \author               Atmel Corporation: http://www.atmel.com \n
 *                       Support email: avr32@atmel.com
 *
 ******************************************************************************/

/* Copyright (c) 2007-2009 Atmel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. The name of ATMEL may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY AND
 * SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef _IO_H_
#define _IO_H_

#if (defined __GNUC__)
#   if (defined __AVR32_AP7000__)
#       include <avr32/ap7000.h>
#   elif (defined __AVR32_AP7001__)
#     include <avr32/ap7001.h>
#   elif (defined __AVR32_AP7002__)
#      include <avr32/ap7002.h>
#   elif (defined __AVR32_AP7200__)
#      include <avr32/ap7200.h>
#   elif (defined __AVR32_UC3A0128__)
#      include <avr32/uc3a0128.h>
#   elif (defined __AVR32_UC3A0256__)
#      include <avr32/uc3a0256.h>
#   elif (defined __AVR32_UC3A0512__)
#      include <avr32/uc3a0512.h>
#   elif (defined __AVR32_UC3A0512ES__)
#      include <avr32/uc3a0512es.h>
#   elif (defined __AVR32_UC3A1128__)
#      include <avr32/uc3a1128.h>
#   elif (defined __AVR32_UC3A1256__)
#      include <avr32/uc3a1256.h>
#   elif (defined __AVR32_UC3A1512__)
#     include <avr32/uc3a1512.h>
#   elif (defined __AVR32_UC3A1512ES__)
#      include <avr32/uc3a1512es.h>
#   elif (defined __AVR32_UC3A364__)
#      include <avr32/uc3a364.h>
#   elif (defined __AVR32_UC3A364S__)
#      include <avr32/uc3a364s.h>
#   elif (defined __AVR32_UC3A3128__)
#      include <avr32/uc3a3128.h>
#   elif (defined __AVR32_UC3A3128S__)
#      include <avr32/uc3a3128s.h>
#   elif (defined __AVR32_UC3A3256__)
#      include <avr32/uc3a3256.h>
#   elif (defined __AVR32_UC3A3256S__)
#      include <avr32/uc3a3256s.h>
#   elif (defined __AVR32_UC3B064__)
#      include <avr32/uc3b064.h>
#   elif (defined __AVR32_UC3B0128__)
#      include <avr32/uc3b0128.h>
#   elif (defined __AVR32_UC3B0256__)
#      include <avr32/uc3b0256.h>
#   elif (defined __AVR32_UC3B0256ES__)
#      include <avr32/uc3b0256es.h>
#   elif (defined __AVR32_UC3B164__)
#      include <avr32/uc3b164.h>
#   elif (defined __AVR32_UC3B1128__)
#      include <avr32/uc3b1128.h>
#   elif (defined __AVR32_UC3B1256__)
#      include <avr32/uc3b1256.h>
#   elif (defined __AVR32_UC3B1256ES__)
#      include <avr32/uc3b1256es.h>
#   elif (defined __AVR32_UC3B0512__)
#      include <avr32/uc3b0512.h>
#   elif (defined __AVR32_UC3B0512REVC__)
#      include <avr32/uc3b0512.h>
#   elif (defined __AVR32_UC3B1512__)
#      include <avr32/uc3b1512.h>
#   elif (defined __AVR32_UC3B1512REVC__)
#      include <avr32/uc3b1512.h>
#   elif (defined __AVR32_UC3C064CREVC__)
#      include <avr32/uc3c064crevc.h>
#   elif (defined __AVR32_UC3C064C__)
#      include <avr32/uc3c064c.h>
#   elif (defined __AVR32_UC3C0128CREVC__)
#      include <avr32/uc3c0128crevc.h>
#   elif (defined __AVR32_UC3C0128C__)
#      include <avr32/uc3c0128c.h>
#   elif (defined __AVR32_UC3C0256CREVC__)
#      include <avr32/uc3c0256crevc.h>
#   elif (defined __AVR32_UC3C0256C__)
#      include <avr32/uc3c0256c.h>
#   elif (defined __AVR32_UC3C0512CREVC__)
#      include <avr32/uc3c0512crevc.h>
#   elif (defined __AVR32_UC3C0512C__)
#      include <avr32/uc3c0512c.h>
#   elif (defined __AVR32_UC3C164CREVC__)
#      include <avr32/uc3c164crevc.h>
#   elif (defined __AVR32_UC3C164C__)
#      include <avr32/uc3c164c.h>
#   elif (defined __AVR32_UC3C1128CREVC__)
#      include <avr32/uc3c1128crevc.h>
#   elif (defined __AVR32_UC3C1128C__)
#      include <avr32/uc3c1128c.h>
#   elif (defined __AVR32_UC3C1256CREVC__)
#      include <avr32/uc3c1256crevc.h>
#   elif (defined __AVR32_UC3C1256C__)
#      include <avr32/uc3c1256c.h>
#   elif (defined __AVR32_UC3C1512CREVC__)
#      include <avr32/uc3c1512crevc.h>
#   elif (defined __AVR32_UC3C1512C__)
#      include <avr32/uc3c1512c.h>
#   elif (defined __AVR32_UC3C264CREVC__)
#      include <avr32/uc3c264crevc.h>
#   elif (defined __AVR32_UC3C264C__)
#      include <avr32/uc3c264c.h>
#   elif (defined __AVR32_UC3C2128CREVC__)
#      include <avr32/uc3c2128crevc.h>
#   elif (defined __AVR32_UC3C2128C__)
#      include <avr32/uc3c2128c.h>
#   elif (defined __AVR32_UC3C2256CREVC__)
#      include <avr32/uc3c2256crevc.h>
#   elif (defined __AVR32_UC3C2256C__)
#      include <avr32/uc3c2256c.h>
#   elif (defined __AVR32_UC3C2512CREVC__)
#      include <avr32/uc3c2512crevc.h>
#   elif (defined __AVR32_UC3C2512C__)
#      include <avr32/uc3c2512c.h>
#   elif (defined __AVR32_UC3L016__)
#      include <avr32/uc3l016.h>
#   elif (defined __AVR32_UC3L032__)
#      include <avr32/uc3l032.h>
#   elif (defined __AVR32_UC3L064__)
#      include <avr32/uc3l064.h>
#   elif (defined __AVR32_UC3L064REVB__)
#      include <avr32/uc3l064revb.h>
#   elif (defined __AVR32_UC3L116__)
#      include <avr32/uc3l116.h>
#   elif (defined __AVR32_UC3L132__)
#      include <avr32/uc3l132.h>
#   elif (defined __AVR32_UC3L164__)
#      include <avr32/uc3l164.h>
#   elif (defined __AVR32_UC3L216__)
#      include <avr32/uc3l216.h>
#   elif (defined __AVR32_UC3L232__)
#      include <avr32/uc3l232.h>
#   elif (defined __AVR32_UC3L264__)
#      include <avr32/uc3l264.h>
#   elif (defined __AVR32_UC3L316__)
#      include <avr32/uc3l316.h>
#   elif (defined __AVR32_UC3L332__)
#      include <avr32/uc3l332.h>
#   elif (defined __AVR32_UC3L364__)
#      include <avr32/uc3l364.h>
#   else
#      error No known AVR32 part defined
#   endif /* __AVR32_<PART>__ */
#elif (defined __ICCAVR32__) ||(defined __AAVR32__)
#  if   (defined __AT32AP7000__)
#    include <avr32/ioap7000.h>
#  elif (defined __AT32AP7001__)
#    include <avr32/ioap7001.h>
#  elif (defined __AT32AP7002__)
#    include <avr32/ioap7002.h>
#  elif (defined __AT32AP7200__)
#    include <avr32/ioap7200.h>
#  elif (defined __AT32UC3A364__)
#    include <avr32/iouc3a364.h>
#  elif (defined __AT32UC3A364S__)
#    include <avr32/iouc3a364s.h>
#  elif (defined __AT32UC3A3128__)
#    include <avr32/iouc3a3128.h>
#  elif (defined __AT32UC3A3128S__)
#    include <avr32/iouc3a3128s.h>
#  elif (defined __AT32UC3A3256__)
#    include <avr32/iouc3a3256.h>
#  elif (defined __AT32UC3A3256S__)
#    include <avr32/iouc3a3256s.h>
#  elif (defined __AT32UC3A0512ES__)
#    include <avr32/iouc3a0512es.h>
#  elif (defined __AT32UC3A1512ES__)
#    include <avr32/iouc3a1512es.h>
#  elif (defined __AT32UC3A0128__)
#    include <avr32/iouc3a0128.h>
#  elif (defined __AT32UC3A0256__)
#    include <avr32/iouc3a0256.h>
#  elif (defined __AT32UC3A0512__)
#    include <avr32/iouc3a0512.h>
#  elif (defined __AT32UC3A1128__)
#    include <avr32/iouc3a1128.h>
#  elif (defined __AT32UC3A1256__)
#    include <avr32/iouc3a1256.h>
#  elif (defined __AT32UC3A1512__)
#    include <avr32/iouc3a1512.h>
#  elif (defined __AT32UC3B0256ES__)
#    include <avr32/iouc3b0256es.h>
#  elif (defined __AT32UC3B1256ES__)
#    include <avr32/iouc3b1256es.h>
#  elif (defined __AT32UC3B064__)
#    include <avr32/iouc3b064.h>
#  elif (defined __AT32UC3B0128__)
#    include <avr32/iouc3b0128.h>
#  elif (defined __AT32UC3B0256__)
#    include <avr32/iouc3b0256.h>
#  elif (defined __AT32UC3B164__)
#    include <avr32/iouc3b164.h>
#  elif (defined __AT32UC3B1128__)
#    include <avr32/iouc3b1128.h>
#  elif (defined __AT32UC3B1256__)
#    include <avr32/iouc3b1256.h>
#  elif (defined __AT32UC3B0512__)
#    include <avr32/iouc3b0512.h>
#  elif (defined __AT32UC3B1512__)
#    include <avr32/iouc3b1512.h>
#  elif (defined __AT32UC3C064CREVC__)
#     include <avr32/iouc3c064crevc.h>
#  elif (defined __AT32UC3C064C__)
#     include <avr32/iouc3c064c.h>
#  elif (defined __AT32UC3C0128CREVC__)
#     include <avr32/iouc3c0128crevc.h>
#  elif (defined __AT32UC3C0128C__)
#     include <avr32/iouc3c0128c.h>
#  elif (defined __AT32UC3C0256CREVC__)
#     include <avr32/iouc3c0256crevc.h>
#  elif (defined __AT32UC3C0256C__)
#     include <avr32/iouc3c0256c.h>
#  elif (defined __AT32UC3C0512CREVC__)
#     include <avr32/iouc3c0512crevc.h>
#  elif (defined __AT32UC3C0512C__)
#     include <avr32/iouc3c0512c.h>
#  elif (defined __AT32UC3C164CREVC__)
#     include <avr32/iouc3c164crevc.h>
#  elif (defined __AT32UC3C164C__)
#     include <avr32/iouc3c164c.h>
#  elif (defined __AT32UC3C1128CREVC__)
#     include <avr32/iouc3c1128crevc.h>
#  elif (defined __AT32UC3C1128C__)
#     include <avr32/iouc3c1128c.h>
#  elif (defined __AT32UC3C1256CREVC__)
#     include <avr32/iouc3c1256crevc.h>
#  elif (defined __AT32UC3C1256C__)
#     include <avr32/iouc3c1256c.h>
#  elif (defined __AT32UC3C1512CREVC__)
#     include <avr32/iouc3c1512crevc.h>
#  elif (defined __AT32UC3C1512C__)
#     include <avr32/iouc3c1512c.h>
#  elif (defined __AT32UC3C264CREVC__)
#     include <avr32/iouc3c264crevc.h>
#  elif (defined __AT32UC3C264C__)
#     include <avr32/iouc3c264c.h>
#  elif (defined __AT32UC3C2128CREVC__)
#     include <avr32/iouc3c2128crevc.h>
#  elif (defined __AT32UC3C2128C__)
#     include <avr32/iouc3c2128c.h>
#  elif (defined __AT32UC3C2256CREVC__)
#     include <avr32/iouc3c2256crevc.h>
#  elif (defined __AT32UC3C2256C__)
#     include <avr32/iouc3c2256c.h>
#  elif (defined __AT32UC3C2512CREVC__)
#     include <avr32/iouc3c2512crevc.h>
#  elif (defined __AT32UC3C2512C__)
#     include <avr32/iouc3c2512c.h>
#  elif (defined __AT32UC3L016__)
#     include <avr32/iouc3l016.h>
#  elif (defined __AT32UC3L032__)
#     include <avr32/iouc3l032.h>
#  elif (defined __AT32UC3L064__)
#     include <avr32/iouc3l064.h>
#  elif (defined __AT32UC3L116__)
#     include <avr32/iouc3l116.h>
#  elif (defined __AT32UC3L132__)
#     include <avr32/iouc3l132.h>
#  elif (defined __AT32UC3L164__)
#     include <avr32/iouc3l164.h>
#  elif (defined __AT32UC3L216__)
#     include <avr32/iouc3l216.h>
#  elif (defined __AT32UC3L232__)
#     include <avr32/iouc3l232.h>
#  elif (defined __AT32UC3L264__)
#     include <avr32/iouc3l264.h>
#  elif (defined __AT32UC3L316__)
#     include <avr32/iouc3l316.h>
#  elif (defined __AT32UC3L332__)
#     include <avr32/iouc3l332.h>
#  elif (defined __AT32UC3L364__)
#     include <avr32/iouc3l364.h>
#  else
#    error No known AVR32 part defined
#  endif  /* __AT32<PART>__ */
#else
#   error Unknown compiler
#endif /* __GNUC__ */

#endif /* _IO_H_ */


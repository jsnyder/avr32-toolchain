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
 * Model        : AP7200
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_USBH_291a_H_INCLUDED
#define AVR32_USBH_291a_H_INCLUDED

#define AVR32_USBH_H_VERSION 291a

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_USBH_<register>
 - Bitfield mask:   AVR32_USBH_<register>_<bitfield>
 - Bitfield offset: AVR32_USBH_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBH_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_USBH_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_USBH_<bitfield>
 - Bitfield offset: AVR32_USBH_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBH_<bitfield>_SIZE
 - Bitfield values: AVR32_USBH_<bitfield>_<value name>
 - Bitfield values: AVR32_USBH_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_USBH_1024_ELEMENTS                            0x00000000
#define AVR32_USBH_1_CONTROL_ED_1_BULK_ED                   0x00000000
#define AVR32_USBH_256_ELEMENTS                             0x00000002
#define AVR32_USBH_2_CONTROL_ED_1_BULK_ED                   0x00000001
#define AVR32_USBH_3_CONTROL_ED_1_BULK_ED                   0x00000002
#define AVR32_USBH_4_CONTROL_ED_1_BULK_ED                   0x00000003
#define AVR32_USBH_512_ELEMENTS                             0x00000001
#define AVR32_USBH_AC64                                              0
#define AVR32_USBH_AC64_MASK                                0x00000001
#define AVR32_USBH_AC64_OFFSET                                       0
#define AVR32_USBH_AC64_SIZE                                         1
#define AVR32_USBH_AMBER                                    0x00000001
#define AVR32_USBH_ASPC                                              2
#define AVR32_USBH_ASPC_MASK                                0x00000004
#define AVR32_USBH_ASPC_OFFSET                                       2
#define AVR32_USBH_ASPC_SIZE                                         1
#define AVR32_USBH_ASPMC                                             8
#define AVR32_USBH_ASPMC_MASK                               0x00000300
#define AVR32_USBH_ASPMC_OFFSET                                      8
#define AVR32_USBH_ASPMC_SIZE                                        2
#define AVR32_USBH_ASPM_E                                           11
#define AVR32_USBH_ASPM_E_MASK                              0x00000800
#define AVR32_USBH_ASPM_E_OFFSET                                    11
#define AVR32_USBH_ASPM_E_SIZE                                       1
#define AVR32_USBH_ASS                                              15
#define AVR32_USBH_ASS_DISABLED                             0x00000000
#define AVR32_USBH_ASS_ENABLED                              0x00000001
#define AVR32_USBH_ASS_MASK                                 0x00008000
#define AVR32_USBH_ASS_OFFSET                                       15
#define AVR32_USBH_ASS_SIZE                                          1
#define AVR32_USBH_ASYNCLISTADDR                            0x00000028
#define AVR32_USBH_ASYNCLISTADDR_LPL                                 5
#define AVR32_USBH_ASYNCLISTADDR_LPL_MASK                   0xffffffe0
#define AVR32_USBH_ASYNCLISTADDR_LPL_OFFSET                          5
#define AVR32_USBH_ASYNCLISTADDR_LPL_SIZE                           27
#define AVR32_USBH_AS_E                                              5
#define AVR32_USBH_AS_E_MASK                                0x00000020
#define AVR32_USBH_AS_E_OFFSET                                       5
#define AVR32_USBH_AS_E_SIZE                                         1
#define AVR32_USBH_BAL                                              12
#define AVR32_USBH_BAL_MASK                                 0xfffff000
#define AVR32_USBH_BAL_OFFSET                                       12
#define AVR32_USBH_BAL_SIZE                                         20
#define AVR32_USBH_BCED                                              4
#define AVR32_USBH_BCED_MASK                                0xfffffff0
#define AVR32_USBH_BCED_OFFSET                                       4
#define AVR32_USBH_BCED_SIZE                                        28
#define AVR32_USBH_BHED                                              4
#define AVR32_USBH_BHED_MASK                                0xfffffff0
#define AVR32_USBH_BHED_OFFSET                                       4
#define AVR32_USBH_BHED_SIZE                                        28
#define AVR32_USBH_BLE                                               5
#define AVR32_USBH_BLE_MASK                                 0x00000020
#define AVR32_USBH_BLE_OFFSET                                        5
#define AVR32_USBH_BLE_SIZE                                          1
#define AVR32_USBH_BLF                                               2
#define AVR32_USBH_BLF_MASK                                 0x00000004
#define AVR32_USBH_BLF_OFFSET                                        2
#define AVR32_USBH_BLF_SIZE                                          1
#define AVR32_USBH_CAPLENGTH                                         0
#define AVR32_USBH_CAPLENGTH_MASK                           0x000000ff
#define AVR32_USBH_CAPLENGTH_OFFSET                                  0
#define AVR32_USBH_CAPLENGTH_SIZE                                    8
#define AVR32_USBH_CBSR                                              0
#define AVR32_USBH_CBSR_1_CONTROL_ED_1_BULK_ED              0x00000000
#define AVR32_USBH_CBSR_2_CONTROL_ED_1_BULK_ED              0x00000001
#define AVR32_USBH_CBSR_3_CONTROL_ED_1_BULK_ED              0x00000002
#define AVR32_USBH_CBSR_4_CONTROL_ED_1_BULK_ED              0x00000003
#define AVR32_USBH_CBSR_MASK                                0x00000003
#define AVR32_USBH_CBSR_OFFSET                                       0
#define AVR32_USBH_CBSR_SIZE                                         2
#define AVR32_USBH_CCED                                              4
#define AVR32_USBH_CCED_MASK                                0xfffffff0
#define AVR32_USBH_CCED_OFFSET                                       4
#define AVR32_USBH_CCED_SIZE                                        28
#define AVR32_USBH_CCS                                               0
#define AVR32_USBH_CCS_CLEAR_PORT_ENABLE                    0x00000001
#define AVR32_USBH_CCS_DEVICE_CONNECTED                     0x00000001
#define AVR32_USBH_CCS_DEVICE_PRESENT                       0x00000001
#define AVR32_USBH_CCS_MASK                                 0x00000001
#define AVR32_USBH_CCS_NO_DEVICE                            0x00000000
#define AVR32_USBH_CCS_NO_DEVICE_CONNECTED                  0x00000000
#define AVR32_USBH_CCS_OFFSET                                        0
#define AVR32_USBH_CCS_SIZE                                          1
#define AVR32_USBH_CF                                                0
#define AVR32_USBH_CF_DFLT_PORT_RTNG_CLASSIC_HC             0x00000000
#define AVR32_USBH_CF_DFLT_PORT_RTNG_THIS_HC                0x00000001
#define AVR32_USBH_CF_MASK                                  0x00000001
#define AVR32_USBH_CF_OFFSET                                         0
#define AVR32_USBH_CF_SIZE                                           1
#define AVR32_USBH_CHED                                              4
#define AVR32_USBH_CHED_MASK                                0xfffffff0
#define AVR32_USBH_CHED_OFFSET                                       4
#define AVR32_USBH_CHED_SIZE                                        28
#define AVR32_USBH_CLE                                               4
#define AVR32_USBH_CLEAR_GLOBAL_POWER                       0x00000001
#define AVR32_USBH_CLEAR_PORT_ENABLE                        0x00000001
#define AVR32_USBH_CLEAR_PORT_POWER                         0x00000001
#define AVR32_USBH_CLEAR_SUSPEND_STATUS                     0x00000001
#define AVR32_USBH_CLE_MASK                                 0x00000010
#define AVR32_USBH_CLE_OFFSET                                        4
#define AVR32_USBH_CLE_SIZE                                          1
#define AVR32_USBH_CLF                                               1
#define AVR32_USBH_CLF_MASK                                 0x00000002
#define AVR32_USBH_CLF_OFFSET                                        1
#define AVR32_USBH_CLF_SIZE                                          1
#define AVR32_USBH_COLLECTIVE                               0x00000000
#define AVR32_USBH_COMPOUND_DEVICE                          0x00000001
#define AVR32_USBH_CONFIGFLAG                               0x00000050
#define AVR32_USBH_CONFIGFLAG_CF                                     0
#define AVR32_USBH_CONFIGFLAG_CF_DFLT_PORT_RTNG_CLASSIC_HC  0x00000000
#define AVR32_USBH_CONFIGFLAG_CF_DFLT_PORT_RTNG_THIS_HC     0x00000001
#define AVR32_USBH_CONFIGFLAG_CF_MASK                       0x00000001
#define AVR32_USBH_CONFIGFLAG_CF_OFFSET                              0
#define AVR32_USBH_CONFIGFLAG_CF_SIZE                                1
#define AVR32_USBH_CRWE                                             31
#define AVR32_USBH_CRWE_MASK                                0x80000000
#define AVR32_USBH_CRWE_OFFSET                                      31
#define AVR32_USBH_CRWE_SIZE                                         1
#define AVR32_USBH_CSC_SIZE                                          1
#define AVR32_USBH_CTRLDSSEGMENT                            0x00000020
#define AVR32_USBH_DEVICE_CONNECTED                         0x00000001
#define AVR32_USBH_DEVICE_PRESENT                           0x00000001
#define AVR32_USBH_DFLT_PORT_RTNG_CLASSIC_HC                0x00000000
#define AVR32_USBH_DFLT_PORT_RTNG_THIS_HC                   0x00000001
#define AVR32_USBH_DH                                                4
#define AVR32_USBH_DH_MASK                                  0xfffffff0
#define AVR32_USBH_DH_OFFSET                                         4
#define AVR32_USBH_DH_SIZE                                          28
#define AVR32_USBH_DISABLED                                 0x00000000
#define AVR32_USBH_DPN                                              20
#define AVR32_USBH_DPN_MASK                                 0x00f00000
#define AVR32_USBH_DPN_OFFSET                                       20
#define AVR32_USBH_DPN_SIZE                                          4
#define AVR32_USBH_DR                                                0
#define AVR32_USBH_DRWE                                             15
#define AVR32_USBH_DRWE_MASK                                0x00008000
#define AVR32_USBH_DRWE_OFFSET                                      15
#define AVR32_USBH_DRWE_SET_REMOTE_WAKEUP_ENABLE            0x00000001
#define AVR32_USBH_DRWE_SIZE                                         1
#define AVR32_USBH_DR_MASK                                  0x0000ffff
#define AVR32_USBH_DR_OFFSET                                         0
#define AVR32_USBH_DR_SIZE                                          16
#define AVR32_USBH_DT                                               10
#define AVR32_USBH_DT_COMPOUND_DEVICE                       0x00000001
#define AVR32_USBH_DT_MASK                                  0x00000400
#define AVR32_USBH_DT_NOT_COMPOUND_DEVICE                   0x00000000
#define AVR32_USBH_DT_OFFSET                                        10
#define AVR32_USBH_DT_SIZE                                           1
#define AVR32_USBH_EECP                                              8
#define AVR32_USBH_EECP_MASK                                0x0000ff00
#define AVR32_USBH_EECP_OFFSET                                       8
#define AVR32_USBH_EECP_SIZE                                         8
#define AVR32_USBH_ENABLED                                  0x00000001
#define AVR32_USBH_ENUMERATED                               0x00000001
#define AVR32_USBH_FI                                                0
#define AVR32_USBH_FIT                                              31
#define AVR32_USBH_FIT_MASK                                 0x80000000
#define AVR32_USBH_FIT_OFFSET                                       31
#define AVR32_USBH_FIT_SIZE                                          1
#define AVR32_USBH_FI_MASK                                  0x00003fff
#define AVR32_USBH_FI_OFFSET                                         0
#define AVR32_USBH_FI_SIZE                                          14
#define AVR32_USBH_FLR                                               3
#define AVR32_USBH_FLR_E                                             3
#define AVR32_USBH_FLR_E_MASK                               0x00000008
#define AVR32_USBH_FLR_E_OFFSET                                      3
#define AVR32_USBH_FLR_E_SIZE                                        1
#define AVR32_USBH_FLR_MASK                                 0x00000008
#define AVR32_USBH_FLR_OFFSET                                        3
#define AVR32_USBH_FLR_SIZE                                          1
#define AVR32_USBH_FLS                                               2
#define AVR32_USBH_FLS_1024_ELEMENTS                        0x00000000
#define AVR32_USBH_FLS_256_ELEMENTS                         0x00000002
#define AVR32_USBH_FLS_512_ELEMENTS                         0x00000001
#define AVR32_USBH_FLS_MASK                                 0x0000000c
#define AVR32_USBH_FLS_OFFSET                                        2
#define AVR32_USBH_FLS_SIZE                                          2
#define AVR32_USBH_FN                                                0
#define AVR32_USBH_FNO                                               5
#define AVR32_USBH_FNO_MASK                                 0x00000020
#define AVR32_USBH_FNO_OFFSET                                        5
#define AVR32_USBH_FNO_SIZE                                          1
#define AVR32_USBH_FN_MASK                                  0x0000ffff
#define AVR32_USBH_FN_OFFSET                                         0
#define AVR32_USBH_FN_SIZE                                          16
#define AVR32_USBH_FPR                                               6
#define AVR32_USBH_FPR_MASK                                 0x00000040
#define AVR32_USBH_FPR_OFFSET                                        6
#define AVR32_USBH_FPR_SIZE                                          1
#define AVR32_USBH_FR                                                0
#define AVR32_USBH_FRINDEX                                  0x0000001c
#define AVR32_USBH_FRINDEX_FI                                        0
#define AVR32_USBH_FRINDEX_FI_MASK                          0x00003fff
#define AVR32_USBH_FRINDEX_FI_OFFSET                                 0
#define AVR32_USBH_FRINDEX_FI_SIZE                                  14
#define AVR32_USBH_FRT                                              31
#define AVR32_USBH_FRT_MASK                                 0x80000000
#define AVR32_USBH_FRT_OFFSET                                       31
#define AVR32_USBH_FRT_SIZE                                          1
#define AVR32_USBH_FR_MASK                                  0x00003fff
#define AVR32_USBH_FR_OFFSET                                         0
#define AVR32_USBH_FR_SIZE                                          14
#define AVR32_USBH_FSMPS                                            16
#define AVR32_USBH_FSMPS_MASK                               0x7fff0000
#define AVR32_USBH_FSMPS_OFFSET                                     16
#define AVR32_USBH_FSMPS_SIZE                                       15
#define AVR32_USBH_GREEN                                    0x00000002
#define AVR32_USBH_HCBULKCURRENTED                          0x0000002c
#define AVR32_USBH_HCBULKCURRENTED_BCED                              4
#define AVR32_USBH_HCBULKCURRENTED_BCED_MASK                0xfffffff0
#define AVR32_USBH_HCBULKCURRENTED_BCED_OFFSET                       4
#define AVR32_USBH_HCBULKCURRENTED_BCED_SIZE                        28
#define AVR32_USBH_HCBULKHEADED                             0x00000028
#define AVR32_USBH_HCBULKHEADED_BHED                                 4
#define AVR32_USBH_HCBULKHEADED_BHED_MASK                   0xfffffff0
#define AVR32_USBH_HCBULKHEADED_BHED_OFFSET                          4
#define AVR32_USBH_HCBULKHEADED_BHED_SIZE                           28
#define AVR32_USBH_HCCA                                              8
#define AVR32_USBH_HCCAPBASE                                0x00000000
#define AVR32_USBH_HCCAPBASE_CAPLENGTH                               0
#define AVR32_USBH_HCCAPBASE_CAPLENGTH_MASK                 0x000000ff
#define AVR32_USBH_HCCAPBASE_CAPLENGTH_OFFSET                        0
#define AVR32_USBH_HCCAPBASE_CAPLENGTH_SIZE                          8
#define AVR32_USBH_HCCAPBASE_HCIVERSION                             16
#define AVR32_USBH_HCCAPBASE_HCIVERSION_MASK                0xffff0000
#define AVR32_USBH_HCCAPBASE_HCIVERSION_OFFSET                      16
#define AVR32_USBH_HCCAPBASE_HCIVERSION_SIZE                        16
#define AVR32_USBH_HCCA_MASK                                0xffffff00
#define AVR32_USBH_HCCA_OFFSET                                       8
#define AVR32_USBH_HCCA_SIZE                                        24
#define AVR32_USBH_HCCOMMANDSTATUS                          0x00000008
#define AVR32_USBH_HCCOMMANDSTATUS_BLF                               2
#define AVR32_USBH_HCCOMMANDSTATUS_BLF_MASK                 0x00000004
#define AVR32_USBH_HCCOMMANDSTATUS_BLF_OFFSET                        2
#define AVR32_USBH_HCCOMMANDSTATUS_BLF_SIZE                          1
#define AVR32_USBH_HCCOMMANDSTATUS_CLF                               1
#define AVR32_USBH_HCCOMMANDSTATUS_CLF_MASK                 0x00000002
#define AVR32_USBH_HCCOMMANDSTATUS_CLF_OFFSET                        1
#define AVR32_USBH_HCCOMMANDSTATUS_CLF_SIZE                          1
#define AVR32_USBH_HCCOMMANDSTATUS_HCR                               0
#define AVR32_USBH_HCCOMMANDSTATUS_HCR_MASK                 0x00000001
#define AVR32_USBH_HCCOMMANDSTATUS_HCR_OFFSET                        0
#define AVR32_USBH_HCCOMMANDSTATUS_HCR_SIZE                          1
#define AVR32_USBH_HCCOMMANDSTATUS_OCR                               3
#define AVR32_USBH_HCCOMMANDSTATUS_OCR_MASK                 0x00000008
#define AVR32_USBH_HCCOMMANDSTATUS_OCR_OFFSET                        3
#define AVR32_USBH_HCCOMMANDSTATUS_OCR_SIZE                          1
#define AVR32_USBH_HCCOMMANDSTATUS_SOC                              16
#define AVR32_USBH_HCCOMMANDSTATUS_SOC_MASK                 0x00030000
#define AVR32_USBH_HCCOMMANDSTATUS_SOC_OFFSET                       16
#define AVR32_USBH_HCCOMMANDSTATUS_SOC_SIZE                          2
#define AVR32_USBH_HCCONTROL                                0x00000004
#define AVR32_USBH_HCCONTROLCURRENTED                       0x00000024
#define AVR32_USBH_HCCONTROLCURRENTED_CCED                           4
#define AVR32_USBH_HCCONTROLCURRENTED_CCED_MASK             0xfffffff0
#define AVR32_USBH_HCCONTROLCURRENTED_CCED_OFFSET                    4
#define AVR32_USBH_HCCONTROLCURRENTED_CCED_SIZE                     28
#define AVR32_USBH_HCCONTROLHEADED                          0x00000020
#define AVR32_USBH_HCCONTROLHEADED_CHED                              4
#define AVR32_USBH_HCCONTROLHEADED_CHED_MASK                0xfffffff0
#define AVR32_USBH_HCCONTROLHEADED_CHED_OFFSET                       4
#define AVR32_USBH_HCCONTROLHEADED_CHED_SIZE                        28
#define AVR32_USBH_HCCONTROL_BLE                                     5
#define AVR32_USBH_HCCONTROL_BLE_MASK                       0x00000020
#define AVR32_USBH_HCCONTROL_BLE_OFFSET                              5
#define AVR32_USBH_HCCONTROL_BLE_SIZE                                1
#define AVR32_USBH_HCCONTROL_CBSR                                    0
#define AVR32_USBH_HCCONTROL_CBSR_1_CONTROL_ED_1_BULK_ED    0x00000000
#define AVR32_USBH_HCCONTROL_CBSR_2_CONTROL_ED_1_BULK_ED    0x00000001
#define AVR32_USBH_HCCONTROL_CBSR_3_CONTROL_ED_1_BULK_ED    0x00000002
#define AVR32_USBH_HCCONTROL_CBSR_4_CONTROL_ED_1_BULK_ED    0x00000003
#define AVR32_USBH_HCCONTROL_CBSR_MASK                      0x00000003
#define AVR32_USBH_HCCONTROL_CBSR_OFFSET                             0
#define AVR32_USBH_HCCONTROL_CBSR_SIZE                               2
#define AVR32_USBH_HCCONTROL_CLE                                     4
#define AVR32_USBH_HCCONTROL_CLE_MASK                       0x00000010
#define AVR32_USBH_HCCONTROL_CLE_OFFSET                              4
#define AVR32_USBH_HCCONTROL_CLE_SIZE                                1
#define AVR32_USBH_HCCONTROL_HCFS                                    6
#define AVR32_USBH_HCCONTROL_HCFS_MASK                      0x000000c0
#define AVR32_USBH_HCCONTROL_HCFS_OFFSET                             6
#define AVR32_USBH_HCCONTROL_HCFS_SIZE                               2
#define AVR32_USBH_HCCONTROL_HCFS_USB_OPERATIONAL           0x00000002
#define AVR32_USBH_HCCONTROL_HCFS_USB_RESET                 0x00000000
#define AVR32_USBH_HCCONTROL_HCFS_USB_RESUME                0x00000001
#define AVR32_USBH_HCCONTROL_HCFS_USB_SUSPEND               0x00000003
#define AVR32_USBH_HCCONTROL_IE                                      3
#define AVR32_USBH_HCCONTROL_IE_MASK                        0x00000008
#define AVR32_USBH_HCCONTROL_IE_OFFSET                               3
#define AVR32_USBH_HCCONTROL_IE_SIZE                                 1
#define AVR32_USBH_HCCONTROL_IR                                      8
#define AVR32_USBH_HCCONTROL_IR_MASK                        0x00000100
#define AVR32_USBH_HCCONTROL_IR_OFFSET                               8
#define AVR32_USBH_HCCONTROL_IR_SIZE                                 1
#define AVR32_USBH_HCCONTROL_PLE                                     2
#define AVR32_USBH_HCCONTROL_PLE_MASK                       0x00000004
#define AVR32_USBH_HCCONTROL_PLE_OFFSET                              2
#define AVR32_USBH_HCCONTROL_PLE_SIZE                                1
#define AVR32_USBH_HCCONTROL_RWC                                     9
#define AVR32_USBH_HCCONTROL_RWC_MASK                       0x00000200
#define AVR32_USBH_HCCONTROL_RWC_OFFSET                              9
#define AVR32_USBH_HCCONTROL_RWC_SIZE                                1
#define AVR32_USBH_HCCONTROL_RWE                                    10
#define AVR32_USBH_HCCONTROL_RWE_MASK                       0x00000400
#define AVR32_USBH_HCCONTROL_RWE_OFFSET                             10
#define AVR32_USBH_HCCONTROL_RWE_SIZE                                1
#define AVR32_USBH_HCCPARAMS                                0x00000008
#define AVR32_USBH_HCCPARAMS_AC64                                    0
#define AVR32_USBH_HCCPARAMS_AC64_MASK                      0x00000001
#define AVR32_USBH_HCCPARAMS_AC64_OFFSET                             0
#define AVR32_USBH_HCCPARAMS_AC64_SIZE                               1
#define AVR32_USBH_HCCPARAMS_ASPC                                    2
#define AVR32_USBH_HCCPARAMS_ASPC_MASK                      0x00000004
#define AVR32_USBH_HCCPARAMS_ASPC_OFFSET                             2
#define AVR32_USBH_HCCPARAMS_ASPC_SIZE                               1
#define AVR32_USBH_HCCPARAMS_EECP                                    8
#define AVR32_USBH_HCCPARAMS_EECP_MASK                      0x0000ff00
#define AVR32_USBH_HCCPARAMS_EECP_OFFSET                             8
#define AVR32_USBH_HCCPARAMS_EECP_SIZE                               8
#define AVR32_USBH_HCCPARAMS_IST                                     4
#define AVR32_USBH_HCCPARAMS_IST_MASK                       0x000000f0
#define AVR32_USBH_HCCPARAMS_IST_OFFSET                              4
#define AVR32_USBH_HCCPARAMS_IST_SIZE                                4
#define AVR32_USBH_HCCPARAMS_PFLF                                    1
#define AVR32_USBH_HCCPARAMS_PFLF_MASK                      0x00000002
#define AVR32_USBH_HCCPARAMS_PFLF_OFFSET                             1
#define AVR32_USBH_HCCPARAMS_PFLF_SIZE                               1
#define AVR32_USBH_HCDONEHEAD                               0x00000030
#define AVR32_USBH_HCDONEHEAD_DH                                     4
#define AVR32_USBH_HCDONEHEAD_DH_MASK                       0xfffffff0
#define AVR32_USBH_HCDONEHEAD_DH_OFFSET                              4
#define AVR32_USBH_HCDONEHEAD_DH_SIZE                               28
#define AVR32_USBH_HCFMINTERVAL                             0x00000034
#define AVR32_USBH_HCFMINTERVAL_FI                                   0
#define AVR32_USBH_HCFMINTERVAL_FIT                                 31
#define AVR32_USBH_HCFMINTERVAL_FIT_MASK                    0x80000000
#define AVR32_USBH_HCFMINTERVAL_FIT_OFFSET                          31
#define AVR32_USBH_HCFMINTERVAL_FIT_SIZE                             1
#define AVR32_USBH_HCFMINTERVAL_FI_MASK                     0x00003fff
#define AVR32_USBH_HCFMINTERVAL_FI_OFFSET                            0
#define AVR32_USBH_HCFMINTERVAL_FI_SIZE                             14
#define AVR32_USBH_HCFMINTERVAL_FSMPS                               16
#define AVR32_USBH_HCFMINTERVAL_FSMPS_MASK                  0x7fff0000
#define AVR32_USBH_HCFMINTERVAL_FSMPS_OFFSET                        16
#define AVR32_USBH_HCFMINTERVAL_FSMPS_SIZE                          15
#define AVR32_USBH_HCFMNUMBER                               0x0000003c
#define AVR32_USBH_HCFMNUMBER_FN                                     0
#define AVR32_USBH_HCFMNUMBER_FN_MASK                       0x0000ffff
#define AVR32_USBH_HCFMNUMBER_FN_OFFSET                              0
#define AVR32_USBH_HCFMNUMBER_FN_SIZE                               16
#define AVR32_USBH_HCFMREMAINING                            0x00000038
#define AVR32_USBH_HCFMREMAINING_FR                                  0
#define AVR32_USBH_HCFMREMAINING_FRT                                31
#define AVR32_USBH_HCFMREMAINING_FRT_MASK                   0x80000000
#define AVR32_USBH_HCFMREMAINING_FRT_OFFSET                         31
#define AVR32_USBH_HCFMREMAINING_FRT_SIZE                            1
#define AVR32_USBH_HCFMREMAINING_FR_MASK                    0x00003fff
#define AVR32_USBH_HCFMREMAINING_FR_OFFSET                           0
#define AVR32_USBH_HCFMREMAINING_FR_SIZE                            14
#define AVR32_USBH_HCFS                                              6
#define AVR32_USBH_HCFS_MASK                                0x000000c0
#define AVR32_USBH_HCFS_OFFSET                                       6
#define AVR32_USBH_HCFS_SIZE                                         2
#define AVR32_USBH_HCFS_USB_OPERATIONAL                     0x00000002
#define AVR32_USBH_HCFS_USB_RESET                           0x00000000
#define AVR32_USBH_HCFS_USB_RESUME                          0x00000001
#define AVR32_USBH_HCFS_USB_SUSPEND                         0x00000003
#define AVR32_USBH_HCHALTED                                         12
#define AVR32_USBH_HCHALTED_MASK                            0x00001000
#define AVR32_USBH_HCHALTED_OFFSET                                  12
#define AVR32_USBH_HCHALTED_SIZE                                     1
#define AVR32_USBH_HCHCCA                                   0x00000018
#define AVR32_USBH_HCHCCA_HCCA                                       8
#define AVR32_USBH_HCHCCA_HCCA_MASK                         0xffffff00
#define AVR32_USBH_HCHCCA_HCCA_OFFSET                                8
#define AVR32_USBH_HCHCCA_HCCA_SIZE                                 24
#define AVR32_USBH_HCINTERRUPTDISABLE                       0x00000014
#define AVR32_USBH_HCINTERRUPTDISABLE_FNO                            5
#define AVR32_USBH_HCINTERRUPTDISABLE_FNO_MASK              0x00000020
#define AVR32_USBH_HCINTERRUPTDISABLE_FNO_OFFSET                     5
#define AVR32_USBH_HCINTERRUPTDISABLE_FNO_SIZE                       1
#define AVR32_USBH_HCINTERRUPTDISABLE_MIE                           31
#define AVR32_USBH_HCINTERRUPTDISABLE_MIE_MASK              0x80000000
#define AVR32_USBH_HCINTERRUPTDISABLE_MIE_OFFSET                    31
#define AVR32_USBH_HCINTERRUPTDISABLE_MIE_SIZE                       1
#define AVR32_USBH_HCINTERRUPTDISABLE_OC                            30
#define AVR32_USBH_HCINTERRUPTDISABLE_OC_MASK               0x40000000
#define AVR32_USBH_HCINTERRUPTDISABLE_OC_OFFSET                     30
#define AVR32_USBH_HCINTERRUPTDISABLE_OC_SIZE                        1
#define AVR32_USBH_HCINTERRUPTDISABLE_RD                             3
#define AVR32_USBH_HCINTERRUPTDISABLE_RD_MASK               0x00000008
#define AVR32_USBH_HCINTERRUPTDISABLE_RD_OFFSET                      3
#define AVR32_USBH_HCINTERRUPTDISABLE_RD_SIZE                        1
#define AVR32_USBH_HCINTERRUPTDISABLE_RHSC                           6
#define AVR32_USBH_HCINTERRUPTDISABLE_RHSC_MASK             0x00000040
#define AVR32_USBH_HCINTERRUPTDISABLE_RHSC_OFFSET                    6
#define AVR32_USBH_HCINTERRUPTDISABLE_RHSC_SIZE                      1
#define AVR32_USBH_HCINTERRUPTDISABLE_SF                             2
#define AVR32_USBH_HCINTERRUPTDISABLE_SF_MASK               0x00000004
#define AVR32_USBH_HCINTERRUPTDISABLE_SF_OFFSET                      2
#define AVR32_USBH_HCINTERRUPTDISABLE_SF_SIZE                        1
#define AVR32_USBH_HCINTERRUPTDISABLE_SO                             0
#define AVR32_USBH_HCINTERRUPTDISABLE_SO_MASK               0x00000001
#define AVR32_USBH_HCINTERRUPTDISABLE_SO_OFFSET                      0
#define AVR32_USBH_HCINTERRUPTDISABLE_SO_SIZE                        1
#define AVR32_USBH_HCINTERRUPTDISABLE_UE                             4
#define AVR32_USBH_HCINTERRUPTDISABLE_UE_MASK               0x00000010
#define AVR32_USBH_HCINTERRUPTDISABLE_UE_OFFSET                      4
#define AVR32_USBH_HCINTERRUPTDISABLE_UE_SIZE                        1
#define AVR32_USBH_HCINTERRUPTDISABLE_WDH                            1
#define AVR32_USBH_HCINTERRUPTDISABLE_WDH_MASK              0x00000002
#define AVR32_USBH_HCINTERRUPTDISABLE_WDH_OFFSET                     1
#define AVR32_USBH_HCINTERRUPTDISABLE_WDH_SIZE                       1
#define AVR32_USBH_HCINTERRUPTENABLE                        0x00000010
#define AVR32_USBH_HCINTERRUPTENABLE_FNO                             5
#define AVR32_USBH_HCINTERRUPTENABLE_FNO_MASK               0x00000020
#define AVR32_USBH_HCINTERRUPTENABLE_FNO_OFFSET                      5
#define AVR32_USBH_HCINTERRUPTENABLE_FNO_SIZE                        1
#define AVR32_USBH_HCINTERRUPTENABLE_MIE                            31
#define AVR32_USBH_HCINTERRUPTENABLE_MIE_MASK               0x80000000
#define AVR32_USBH_HCINTERRUPTENABLE_MIE_OFFSET                     31
#define AVR32_USBH_HCINTERRUPTENABLE_MIE_SIZE                        1
#define AVR32_USBH_HCINTERRUPTENABLE_OC                             30
#define AVR32_USBH_HCINTERRUPTENABLE_OC_MASK                0x40000000
#define AVR32_USBH_HCINTERRUPTENABLE_OC_OFFSET                      30
#define AVR32_USBH_HCINTERRUPTENABLE_OC_SIZE                         1
#define AVR32_USBH_HCINTERRUPTENABLE_RD                              3
#define AVR32_USBH_HCINTERRUPTENABLE_RD_MASK                0x00000008
#define AVR32_USBH_HCINTERRUPTENABLE_RD_OFFSET                       3
#define AVR32_USBH_HCINTERRUPTENABLE_RD_SIZE                         1
#define AVR32_USBH_HCINTERRUPTENABLE_RHSC                            6
#define AVR32_USBH_HCINTERRUPTENABLE_RHSC_MASK              0x00000040
#define AVR32_USBH_HCINTERRUPTENABLE_RHSC_OFFSET                     6
#define AVR32_USBH_HCINTERRUPTENABLE_RHSC_SIZE                       1
#define AVR32_USBH_HCINTERRUPTENABLE_SF                              2
#define AVR32_USBH_HCINTERRUPTENABLE_SF_MASK                0x00000004
#define AVR32_USBH_HCINTERRUPTENABLE_SF_OFFSET                       2
#define AVR32_USBH_HCINTERRUPTENABLE_SF_SIZE                         1
#define AVR32_USBH_HCINTERRUPTENABLE_SO                              0
#define AVR32_USBH_HCINTERRUPTENABLE_SO_MASK                0x00000001
#define AVR32_USBH_HCINTERRUPTENABLE_SO_OFFSET                       0
#define AVR32_USBH_HCINTERRUPTENABLE_SO_SIZE                         1
#define AVR32_USBH_HCINTERRUPTENABLE_UE                              4
#define AVR32_USBH_HCINTERRUPTENABLE_UE_MASK                0x00000010
#define AVR32_USBH_HCINTERRUPTENABLE_UE_OFFSET                       4
#define AVR32_USBH_HCINTERRUPTENABLE_UE_SIZE                         1
#define AVR32_USBH_HCINTERRUPTENABLE_WDH                             1
#define AVR32_USBH_HCINTERRUPTENABLE_WDH_MASK               0x00000002
#define AVR32_USBH_HCINTERRUPTENABLE_WDH_OFFSET                      1
#define AVR32_USBH_HCINTERRUPTENABLE_WDH_SIZE                        1
#define AVR32_USBH_HCINTERRUPTSTATUS                        0x0000000c
#define AVR32_USBH_HCINTERRUPTSTATUS_FNO                             5
#define AVR32_USBH_HCINTERRUPTSTATUS_FNO_MASK               0x00000020
#define AVR32_USBH_HCINTERRUPTSTATUS_FNO_OFFSET                      5
#define AVR32_USBH_HCINTERRUPTSTATUS_FNO_SIZE                        1
#define AVR32_USBH_HCINTERRUPTSTATUS_OC                             30
#define AVR32_USBH_HCINTERRUPTSTATUS_OC_MASK                0x40000000
#define AVR32_USBH_HCINTERRUPTSTATUS_OC_OFFSET                      30
#define AVR32_USBH_HCINTERRUPTSTATUS_OC_SIZE                         1
#define AVR32_USBH_HCINTERRUPTSTATUS_RD                              3
#define AVR32_USBH_HCINTERRUPTSTATUS_RD_MASK                0x00000008
#define AVR32_USBH_HCINTERRUPTSTATUS_RD_OFFSET                       3
#define AVR32_USBH_HCINTERRUPTSTATUS_RD_SIZE                         1
#define AVR32_USBH_HCINTERRUPTSTATUS_RHSC                            6
#define AVR32_USBH_HCINTERRUPTSTATUS_RHSC_MASK              0x00000040
#define AVR32_USBH_HCINTERRUPTSTATUS_RHSC_OFFSET                     6
#define AVR32_USBH_HCINTERRUPTSTATUS_RHSC_SIZE                       1
#define AVR32_USBH_HCINTERRUPTSTATUS_SF                              2
#define AVR32_USBH_HCINTERRUPTSTATUS_SF_MASK                0x00000004
#define AVR32_USBH_HCINTERRUPTSTATUS_SF_OFFSET                       2
#define AVR32_USBH_HCINTERRUPTSTATUS_SF_SIZE                         1
#define AVR32_USBH_HCINTERRUPTSTATUS_SO                              0
#define AVR32_USBH_HCINTERRUPTSTATUS_SO_MASK                0x00000001
#define AVR32_USBH_HCINTERRUPTSTATUS_SO_OFFSET                       0
#define AVR32_USBH_HCINTERRUPTSTATUS_SO_SIZE                         1
#define AVR32_USBH_HCINTERRUPTSTATUS_UE                              4
#define AVR32_USBH_HCINTERRUPTSTATUS_UE_MASK                0x00000010
#define AVR32_USBH_HCINTERRUPTSTATUS_UE_OFFSET                       4
#define AVR32_USBH_HCINTERRUPTSTATUS_UE_SIZE                         1
#define AVR32_USBH_HCINTERRUPTSTATUS_WDH                             1
#define AVR32_USBH_HCINTERRUPTSTATUS_WDH_MASK               0x00000002
#define AVR32_USBH_HCINTERRUPTSTATUS_WDH_OFFSET                      1
#define AVR32_USBH_HCINTERRUPTSTATUS_WDH_SIZE                        1
#define AVR32_USBH_HCIVERSION                                       16
#define AVR32_USBH_HCIVERSION_MASK                          0xffff0000
#define AVR32_USBH_HCIVERSION_OFFSET                                16
#define AVR32_USBH_HCIVERSION_SIZE                                  16
#define AVR32_USBH_HCLSTHRESHOLD                            0x00000044
#define AVR32_USBH_HCLSTHRESHOLD_LST                                 0
#define AVR32_USBH_HCLSTHRESHOLD_LST_MASK                   0x00000fff
#define AVR32_USBH_HCLSTHRESHOLD_LST_OFFSET                          0
#define AVR32_USBH_HCLSTHRESHOLD_LST_SIZE                           12
#define AVR32_USBH_HCPERIODCURRENTED                        0x0000001c
#define AVR32_USBH_HCPERIODCURRENTED_PCED                            4
#define AVR32_USBH_HCPERIODCURRENTED_PCED_MASK              0xfffffff0
#define AVR32_USBH_HCPERIODCURRENTED_PCED_OFFSET                     4
#define AVR32_USBH_HCPERIODCURRENTED_PCED_SIZE                      28
#define AVR32_USBH_HCPERIODSTART                            0x00000040
#define AVR32_USBH_HCPERIODSTART_PS                                  0
#define AVR32_USBH_HCPERIODSTART_PS_MASK                    0x00003fff
#define AVR32_USBH_HCPERIODSTART_PS_OFFSET                           0
#define AVR32_USBH_HCPERIODSTART_PS_SIZE                            14
#define AVR32_USBH_HCR                                               0
#define AVR32_USBH_HCRESET                                           1
#define AVR32_USBH_HCRESET_MASK                             0x00000002
#define AVR32_USBH_HCRESET_OFFSET                                    1
#define AVR32_USBH_HCRESET_SIZE                                      1
#define AVR32_USBH_HCREVISION                               0x00000000
#define AVR32_USBH_HCREVISION_REV                                    0
#define AVR32_USBH_HCREVISION_REV_MASK                      0x000000ff
#define AVR32_USBH_HCREVISION_REV_OFFSET                             0
#define AVR32_USBH_HCREVISION_REV_SIZE                               8
#define AVR32_USBH_HCRHDESCRIPTORA                          0x00000048
#define AVR32_USBH_HCRHDESCRIPTORA_DT                               10
#define AVR32_USBH_HCRHDESCRIPTORA_DT_COMPOUND_DEVICE       0x00000001
#define AVR32_USBH_HCRHDESCRIPTORA_DT_MASK                  0x00000400
#define AVR32_USBH_HCRHDESCRIPTORA_DT_NOT_COMPOUND_DEVICE   0x00000000
#define AVR32_USBH_HCRHDESCRIPTORA_DT_OFFSET                        10
#define AVR32_USBH_HCRHDESCRIPTORA_DT_SIZE                           1
#define AVR32_USBH_HCRHDESCRIPTORA_NDP                               0
#define AVR32_USBH_HCRHDESCRIPTORA_NDP_MASK                 0x000000ff
#define AVR32_USBH_HCRHDESCRIPTORA_NDP_OFFSET                        0
#define AVR32_USBH_HCRHDESCRIPTORA_NDP_SIZE                          8
#define AVR32_USBH_HCRHDESCRIPTORA_NOCP                             12
#define AVR32_USBH_HCRHDESCRIPTORA_NOCP_MASK                0x00001000
#define AVR32_USBH_HCRHDESCRIPTORA_NOCP_OFFSET                      12
#define AVR32_USBH_HCRHDESCRIPTORA_NOCP_SIZE                         1
#define AVR32_USBH_HCRHDESCRIPTORA_NPS                               9
#define AVR32_USBH_HCRHDESCRIPTORA_NPS_MASK                 0x00000200
#define AVR32_USBH_HCRHDESCRIPTORA_NPS_OFFSET                        9
#define AVR32_USBH_HCRHDESCRIPTORA_NPS_SIZE                          1
#define AVR32_USBH_HCRHDESCRIPTORA_OCPM                             11
#define AVR32_USBH_HCRHDESCRIPTORA_OCPM_COLLECTIVE          0x00000000
#define AVR32_USBH_HCRHDESCRIPTORA_OCPM_MASK                0x00000800
#define AVR32_USBH_HCRHDESCRIPTORA_OCPM_OFFSET                      11
#define AVR32_USBH_HCRHDESCRIPTORA_OCPM_PER_PORT            0x00000001
#define AVR32_USBH_HCRHDESCRIPTORA_OCPM_SIZE                         1
#define AVR32_USBH_HCRHDESCRIPTORA_POTPGT                           24
#define AVR32_USBH_HCRHDESCRIPTORA_POTPGT_MASK              0xff000000
#define AVR32_USBH_HCRHDESCRIPTORA_POTPGT_OFFSET                    24
#define AVR32_USBH_HCRHDESCRIPTORA_POTPGT_SIZE                       8
#define AVR32_USBH_HCRHDESCRIPTORA_PSM                               8
#define AVR32_USBH_HCRHDESCRIPTORA_PSM_COLLECTIVE           0x00000000
#define AVR32_USBH_HCRHDESCRIPTORA_PSM_MASK                 0x00000100
#define AVR32_USBH_HCRHDESCRIPTORA_PSM_OFFSET                        8
#define AVR32_USBH_HCRHDESCRIPTORA_PSM_PER_PORT             0x00000001
#define AVR32_USBH_HCRHDESCRIPTORA_PSM_SIZE                          1
#define AVR32_USBH_HCRHDESCRIPTORB                          0x0000004c
#define AVR32_USBH_HCRHDESCRIPTORB_DR                                0
#define AVR32_USBH_HCRHDESCRIPTORB_DR_MASK                  0x0000ffff
#define AVR32_USBH_HCRHDESCRIPTORB_DR_OFFSET                         0
#define AVR32_USBH_HCRHDESCRIPTORB_DR_SIZE                          16
#define AVR32_USBH_HCRHDESCRIPTORB_PPCM                             16
#define AVR32_USBH_HCRHDESCRIPTORB_PPCM_MASK                0xffff0000
#define AVR32_USBH_HCRHDESCRIPTORB_PPCM_OFFSET                      16
#define AVR32_USBH_HCRHDESCRIPTORB_PPCM_SIZE                        16
#define AVR32_USBH_HCRHPORTSTATUS                           0x00000054
#define AVR32_USBH_HCRHPORTSTATUS_CCS                                0
#define AVR32_USBH_HCRHPORTSTATUS_CCS_CLEAR_PORT_ENABLE     0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_CCS_DEVICE_CONNECTED      0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_CCS_MASK                  0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_CCS_NO_DEVICE_CONNECTED   0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_CCS_OFFSET                         0
#define AVR32_USBH_HCRHPORTSTATUS_CCS_SIZE                           1
#define AVR32_USBH_HCRHPORTSTATUS_CSC                               16
#define AVR32_USBH_HCRHPORTSTATUS_CSC_MASK                  0x00010000
#define AVR32_USBH_HCRHPORTSTATUS_CSC_OFFSET                        16
#define AVR32_USBH_HCRHPORTSTATUS_CSC_SIZE                           1
#define AVR32_USBH_HCRHPORTSTATUS_LSDA                               9
#define AVR32_USBH_HCRHPORTSTATUS_LSDA_CLEAR_PORT_POWER     0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_LSDA_MASK                 0x00000200
#define AVR32_USBH_HCRHPORTSTATUS_LSDA_OFFSET                        9
#define AVR32_USBH_HCRHPORTSTATUS_LSDA_SIZE                          1
#define AVR32_USBH_HCRHPORTSTATUS_OCIC                              19
#define AVR32_USBH_HCRHPORTSTATUS_OCIC_MASK                 0x00080000
#define AVR32_USBH_HCRHPORTSTATUS_OCIC_OFFSET                       19
#define AVR32_USBH_HCRHPORTSTATUS_OCIC_SIZE                          1
#define AVR32_USBH_HCRHPORTSTATUS_PES                                1
#define AVR32_USBH_HCRHPORTSTATUS_PESC                              17
#define AVR32_USBH_HCRHPORTSTATUS_PESC_MASK                 0x00020000
#define AVR32_USBH_HCRHPORTSTATUS_PESC_OFFSET                       17
#define AVR32_USBH_HCRHPORTSTATUS_PESC_SIZE                          1
#define AVR32_USBH_HCRHPORTSTATUS_PES_MASK                  0x00000002
#define AVR32_USBH_HCRHPORTSTATUS_PES_OFFSET                         1
#define AVR32_USBH_HCRHPORTSTATUS_PES_PORT_DISABLED         0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_PES_PORT_ENABLED          0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PES_SET_PORT_ENABLE       0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PES_SIZE                           1
#define AVR32_USBH_HCRHPORTSTATUS_POCI                               3
#define AVR32_USBH_HCRHPORTSTATUS_POCI_CLEAR_SUSPEND_STATUS 0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_POCI_MASK                 0x00000008
#define AVR32_USBH_HCRHPORTSTATUS_POCI_OFFSET                        3
#define AVR32_USBH_HCRHPORTSTATUS_POCI_SIZE                          1
#define AVR32_USBH_HCRHPORTSTATUS_PPS                                8
#define AVR32_USBH_HCRHPORTSTATUS_PPS_MASK                  0x00000100
#define AVR32_USBH_HCRHPORTSTATUS_PPS_OFFSET                         8
#define AVR32_USBH_HCRHPORTSTATUS_PPS_PORT_POWER_OFF        0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_PPS_PORT_POWER_ON         0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PPS_SET_PORT_POWER        0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PPS_SIZE                           1
#define AVR32_USBH_HCRHPORTSTATUS_PRS                                4
#define AVR32_USBH_HCRHPORTSTATUS_PRSC                              20
#define AVR32_USBH_HCRHPORTSTATUS_PRSC_MASK                 0x00100000
#define AVR32_USBH_HCRHPORTSTATUS_PRSC_OFFSET                       20
#define AVR32_USBH_HCRHPORTSTATUS_PRSC_PORT_RESET_CMPLT     0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PRSC_PORT_RESET_NOT_CMPLT 0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_PRSC_SIZE                          1
#define AVR32_USBH_HCRHPORTSTATUS_PRS_MASK                  0x00000010
#define AVR32_USBH_HCRHPORTSTATUS_PRS_OFFSET                         4
#define AVR32_USBH_HCRHPORTSTATUS_PRS_PORT_RESET_ACTIVE     0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PRS_PORT_RESET_NOT_ACTIVE 0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_PRS_SET_PORT_RESET        0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PRS_SIZE                           1
#define AVR32_USBH_HCRHPORTSTATUS_PSS                                2
#define AVR32_USBH_HCRHPORTSTATUS_PSSC                              18
#define AVR32_USBH_HCRHPORTSTATUS_PSSC_MASK                 0x00040000
#define AVR32_USBH_HCRHPORTSTATUS_PSSC_OFFSET                       18
#define AVR32_USBH_HCRHPORTSTATUS_PSSC_RESUME_COMPLETED     0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PSSC_RESUME_NOT_COMPLETED 0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_PSSC_SIZE                          1
#define AVR32_USBH_HCRHPORTSTATUS_PSS_MASK                  0x00000004
#define AVR32_USBH_HCRHPORTSTATUS_PSS_OFFSET                         2
#define AVR32_USBH_HCRHPORTSTATUS_PSS_PORT_NOT_SUSPENDED    0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_PSS_PORT_SUSPENDED        0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PSS_SET_PORT_SUSPEND      0x00000001
#define AVR32_USBH_HCRHPORTSTATUS_PSS_SIZE                           1
#define AVR32_USBH_HCRHSTATUS                               0x00000050
#define AVR32_USBH_HCRHSTATUS_CRWE                                  31
#define AVR32_USBH_HCRHSTATUS_CRWE_MASK                     0x80000000
#define AVR32_USBH_HCRHSTATUS_CRWE_OFFSET                           31
#define AVR32_USBH_HCRHSTATUS_CRWE_SIZE                              1
#define AVR32_USBH_HCRHSTATUS_DRWE                                  15
#define AVR32_USBH_HCRHSTATUS_DRWE_MASK                     0x00008000
#define AVR32_USBH_HCRHSTATUS_DRWE_OFFSET                           15
#define AVR32_USBH_HCRHSTATUS_DRWE_SET_REMOTE_WAKEUP_ENABLE 0x00000001
#define AVR32_USBH_HCRHSTATUS_DRWE_SIZE                              1
#define AVR32_USBH_HCRHSTATUS_LPS                                    0
#define AVR32_USBH_HCRHSTATUS_LPSC                                  16
#define AVR32_USBH_HCRHSTATUS_LPSC_MASK                     0x00010000
#define AVR32_USBH_HCRHSTATUS_LPSC_OFFSET                           16
#define AVR32_USBH_HCRHSTATUS_LPSC_SET_GLOBAL_POWER         0x00000001
#define AVR32_USBH_HCRHSTATUS_LPSC_SIZE                              1
#define AVR32_USBH_HCRHSTATUS_LPS_CLEAR_GLOBAL_POWER        0x00000001
#define AVR32_USBH_HCRHSTATUS_LPS_MASK                      0x00000001
#define AVR32_USBH_HCRHSTATUS_LPS_OFFSET                             0
#define AVR32_USBH_HCRHSTATUS_LPS_SIZE                               1
#define AVR32_USBH_HCRHSTATUS_OCI                                    1
#define AVR32_USBH_HCRHSTATUS_OCIC                                  17
#define AVR32_USBH_HCRHSTATUS_OCIC_MASK                     0x00020000
#define AVR32_USBH_HCRHSTATUS_OCIC_OFFSET                           17
#define AVR32_USBH_HCRHSTATUS_OCIC_SIZE                              1
#define AVR32_USBH_HCRHSTATUS_OCI_MASK                      0x00000002
#define AVR32_USBH_HCRHSTATUS_OCI_OFFSET                             1
#define AVR32_USBH_HCRHSTATUS_OCI_SIZE                               1
#define AVR32_USBH_HCR_MASK                                 0x00000001
#define AVR32_USBH_HCR_OFFSET                                        0
#define AVR32_USBH_HCR_SIZE                                          1
#define AVR32_USBH_HCSPARAMS                                0x00000004
#define AVR32_USBH_HCSPARAMS_DPN                                    20
#define AVR32_USBH_HCSPARAMS_DPN_MASK                       0x00f00000
#define AVR32_USBH_HCSPARAMS_DPN_OFFSET                             20
#define AVR32_USBH_HCSPARAMS_DPN_SIZE                                4
#define AVR32_USBH_HCSPARAMS_N_CC                                   12
#define AVR32_USBH_HCSPARAMS_N_CC_MASK                      0x0000f000
#define AVR32_USBH_HCSPARAMS_N_CC_OFFSET                            12
#define AVR32_USBH_HCSPARAMS_N_CC_SIZE                               4
#define AVR32_USBH_HCSPARAMS_N_PCC                                   8
#define AVR32_USBH_HCSPARAMS_N_PCC_MASK                     0x00000f00
#define AVR32_USBH_HCSPARAMS_N_PCC_OFFSET                            8
#define AVR32_USBH_HCSPARAMS_N_PCC_SIZE                              4
#define AVR32_USBH_HCSPARAMS_N_PORTS                                 0
#define AVR32_USBH_HCSPARAMS_N_PORTS_MASK                   0x0000000f
#define AVR32_USBH_HCSPARAMS_N_PORTS_OFFSET                          0
#define AVR32_USBH_HCSPARAMS_N_PORTS_SIZE                            4
#define AVR32_USBH_HCSPARAMS_PPC                                     4
#define AVR32_USBH_HCSPARAMS_PPC_MASK                       0x00000010
#define AVR32_USBH_HCSPARAMS_PPC_OFFSET                              4
#define AVR32_USBH_HCSPARAMS_PPC_SIZE                                1
#define AVR32_USBH_HCSPARAMS_PRR                                     7
#define AVR32_USBH_HCSPARAMS_PRR_ENUMERATED                 0x00000001
#define AVR32_USBH_HCSPARAMS_PRR_INCREMENTAL                0x00000000
#define AVR32_USBH_HCSPARAMS_PRR_MASK                       0x00000080
#define AVR32_USBH_HCSPARAMS_PRR_OFFSET                              7
#define AVR32_USBH_HCSPARAMS_PRR_SIZE                                1
#define AVR32_USBH_HCSPARAMS_P_INDICATOR                            16
#define AVR32_USBH_HCSPARAMS_P_INDICATOR_MASK               0x00010000
#define AVR32_USBH_HCSPARAMS_P_INDICATOR_OFFSET                     16
#define AVR32_USBH_HCSPARAMS_P_INDICATOR_SIZE                        1
#define AVR32_USBH_HSE                                               4
#define AVR32_USBH_HSE_E                                             4
#define AVR32_USBH_HSE_E_MASK                               0x00000010
#define AVR32_USBH_HSE_E_OFFSET                                      4
#define AVR32_USBH_HSE_E_SIZE                                        1
#define AVR32_USBH_HSE_MASK                                 0x00000010
#define AVR32_USBH_HSE_OFFSET                                        4
#define AVR32_USBH_HSE_SIZE                                          1
#define AVR32_USBH_IAA                                               5
#define AVR32_USBH_IAAD                                              6
#define AVR32_USBH_IAAD_MASK                                0x00000040
#define AVR32_USBH_IAAD_OFFSET                                       6
#define AVR32_USBH_IAAD_SIZE                                         1
#define AVR32_USBH_IAA_E                                             5
#define AVR32_USBH_IAA_E_MASK                               0x00000020
#define AVR32_USBH_IAA_E_OFFSET                                      5
#define AVR32_USBH_IAA_E_SIZE                                        1
#define AVR32_USBH_IAA_MASK                                 0x00000020
#define AVR32_USBH_IAA_OFFSET                                        5
#define AVR32_USBH_IAA_SIZE                                          1
#define AVR32_USBH_IE                                                3
#define AVR32_USBH_IE_MASK                                  0x00000008
#define AVR32_USBH_IE_OFFSET                                         3
#define AVR32_USBH_IE_SIZE                                           1
#define AVR32_USBH_INCREMENTAL                              0x00000000
#define AVR32_USBH_IR                                                8
#define AVR32_USBH_IR_MASK                                  0x00000100
#define AVR32_USBH_IR_OFFSET                                         8
#define AVR32_USBH_IR_SIZE                                           1
#define AVR32_USBH_IST                                               4
#define AVR32_USBH_IST_MASK                                 0x000000f0
#define AVR32_USBH_IST_OFFSET                                        4
#define AVR32_USBH_IST_SIZE                                          4
#define AVR32_USBH_ITC                                              16
#define AVR32_USBH_ITC_MASK                                 0x00ff0000
#define AVR32_USBH_ITC_OFFSET                                       16
#define AVR32_USBH_ITC_SIZE                                          8
#define AVR32_USBH_J_STATE                                  0x00000002
#define AVR32_USBH_K_STATE                                  0x00000001
#define AVR32_USBH_LHCRESET                                          7
#define AVR32_USBH_LHCRESET_MASK                            0x00000080
#define AVR32_USBH_LHCRESET_OFFSET                                   7
#define AVR32_USBH_LHCRESET_SIZE                                     1
#define AVR32_USBH_LPL                                               5
#define AVR32_USBH_LPL_MASK                                 0xffffffe0
#define AVR32_USBH_LPL_OFFSET                                        5
#define AVR32_USBH_LPL_SIZE                                         27
#define AVR32_USBH_LPS                                               0
#define AVR32_USBH_LPSC                                             16
#define AVR32_USBH_LPSC_MASK                                0x00010000
#define AVR32_USBH_LPSC_OFFSET                                      16
#define AVR32_USBH_LPSC_SET_GLOBAL_POWER                    0x00000001
#define AVR32_USBH_LPSC_SIZE                                         1
#define AVR32_USBH_LPS_CLEAR_GLOBAL_POWER                   0x00000001
#define AVR32_USBH_LPS_MASK                                 0x00000001
#define AVR32_USBH_LPS_OFFSET                                        0
#define AVR32_USBH_LPS_SIZE                                          1
#define AVR32_USBH_LS                                               10
#define AVR32_USBH_LSDA                                              9
#define AVR32_USBH_LSDA_CLEAR_PORT_POWER                    0x00000001
#define AVR32_USBH_LSDA_MASK                                0x00000200
#define AVR32_USBH_LSDA_OFFSET                                       9
#define AVR32_USBH_LSDA_SIZE                                         1
#define AVR32_USBH_LST                                               0
#define AVR32_USBH_LST_MASK                                 0x00000fff
#define AVR32_USBH_LST_OFFSET                                        0
#define AVR32_USBH_LST_SIZE                                         12
#define AVR32_USBH_LS_J_STATE                               0x00000002
#define AVR32_USBH_LS_K_STATE                               0x00000001
#define AVR32_USBH_LS_MASK                                  0x00000c00
#define AVR32_USBH_LS_OFFSET                                        10
#define AVR32_USBH_LS_SE0                                   0x00000000
#define AVR32_USBH_LS_SIZE                                           2
#define AVR32_USBH_MIE                                              31
#define AVR32_USBH_MIE_MASK                                 0x80000000
#define AVR32_USBH_MIE_OFFSET                                       31
#define AVR32_USBH_MIE_SIZE                                          1
#define AVR32_USBH_NDP                                               0
#define AVR32_USBH_NDP_MASK                                 0x000000ff
#define AVR32_USBH_NDP_OFFSET                                        0
#define AVR32_USBH_NDP_SIZE                                          8
#define AVR32_USBH_NOCP                                             12
#define AVR32_USBH_NOCP_MASK                                0x00001000
#define AVR32_USBH_NOCP_OFFSET                                      12
#define AVR32_USBH_NOCP_SIZE                                         1
#define AVR32_USBH_NOT_COMPOUND_DEVICE                      0x00000000
#define AVR32_USBH_NO_DEVICE                                0x00000000
#define AVR32_USBH_NO_DEVICE_CONNECTED                      0x00000000
#define AVR32_USBH_NPS                                               9
#define AVR32_USBH_NPS_MASK                                 0x00000200
#define AVR32_USBH_NPS_OFFSET                                        9
#define AVR32_USBH_NPS_SIZE                                          1
#define AVR32_USBH_N_CC                                             12
#define AVR32_USBH_N_CC_MASK                                0x0000f000
#define AVR32_USBH_N_CC_OFFSET                                      12
#define AVR32_USBH_N_CC_SIZE                                         4
#define AVR32_USBH_N_PCC                                             8
#define AVR32_USBH_N_PCC_MASK                               0x00000f00
#define AVR32_USBH_N_PCC_OFFSET                                      8
#define AVR32_USBH_N_PCC_SIZE                                        4
#define AVR32_USBH_N_PORTS                                           0
#define AVR32_USBH_N_PORTS_MASK                             0x0000000f
#define AVR32_USBH_N_PORTS_OFFSET                                    0
#define AVR32_USBH_N_PORTS_SIZE                                      4
#define AVR32_USBH_OC                                               30
#define AVR32_USBH_OCA                                               4
#define AVR32_USBH_OCA_MASK                                 0x00000010
#define AVR32_USBH_OCA_OFFSET                                        4
#define AVR32_USBH_OCA_SIZE                                          1
#define AVR32_USBH_OCC                                               5
#define AVR32_USBH_OCC_MASK                                 0x00000020
#define AVR32_USBH_OCC_OFFSET                                        5
#define AVR32_USBH_OCC_SIZE                                          1
#define AVR32_USBH_OCI                                               1
#define AVR32_USBH_OCIC_SIZE                                         1
#define AVR32_USBH_OCI_MASK                                 0x00000002
#define AVR32_USBH_OCI_OFFSET                                        1
#define AVR32_USBH_OCI_SIZE                                          1
#define AVR32_USBH_OCPM                                             11
#define AVR32_USBH_OCPM_COLLECTIVE                          0x00000000
#define AVR32_USBH_OCPM_MASK                                0x00000800
#define AVR32_USBH_OCPM_OFFSET                                      11
#define AVR32_USBH_OCPM_PER_PORT                            0x00000001
#define AVR32_USBH_OCPM_SIZE                                         1
#define AVR32_USBH_OCR                                               3
#define AVR32_USBH_OCR_MASK                                 0x00000008
#define AVR32_USBH_OCR_OFFSET                                        3
#define AVR32_USBH_OCR_SIZE                                          1
#define AVR32_USBH_OC_MASK                                  0x40000000
#define AVR32_USBH_OC_OFFSET                                        30
#define AVR32_USBH_OC_SIZE                                           1
#define AVR32_USBH_PCD                                               2
#define AVR32_USBH_PCD_MASK                                 0x00000004
#define AVR32_USBH_PCD_OFFSET                                        2
#define AVR32_USBH_PCD_SIZE                                          1
#define AVR32_USBH_PCED                                              4
#define AVR32_USBH_PCED_MASK                                0xfffffff0
#define AVR32_USBH_PCED_OFFSET                                       4
#define AVR32_USBH_PCED_SIZE                                        28
#define AVR32_USBH_PCI_E                                             2
#define AVR32_USBH_PCI_E_MASK                               0x00000004
#define AVR32_USBH_PCI_E_OFFSET                                      2
#define AVR32_USBH_PCI_E_SIZE                                        1
#define AVR32_USBH_PED                                               2
#define AVR32_USBH_PEDC                                              3
#define AVR32_USBH_PEDC_MASK                                0x00000008
#define AVR32_USBH_PEDC_OFFSET                                       3
#define AVR32_USBH_PEDC_SIZE                                         1
#define AVR32_USBH_PED_DISABLED                             0x00000000
#define AVR32_USBH_PED_ENABLED                              0x00000001
#define AVR32_USBH_PED_MASK                                 0x00000004
#define AVR32_USBH_PED_OFFSET                                        2
#define AVR32_USBH_PED_SIZE                                          1
#define AVR32_USBH_PERIODICLISTBASE                         0x00000024
#define AVR32_USBH_PERIODICLISTBASE_BAL                             12
#define AVR32_USBH_PERIODICLISTBASE_BAL_MASK                0xfffff000
#define AVR32_USBH_PERIODICLISTBASE_BAL_OFFSET                      12
#define AVR32_USBH_PERIODICLISTBASE_BAL_SIZE                        20
#define AVR32_USBH_PER_PORT                                 0x00000001
#define AVR32_USBH_PES                                               1
#define AVR32_USBH_PESC                                             17
#define AVR32_USBH_PESC_MASK                                0x00020000
#define AVR32_USBH_PESC_OFFSET                                      17
#define AVR32_USBH_PESC_SIZE                                         1
#define AVR32_USBH_PES_MASK                                 0x00000002
#define AVR32_USBH_PES_OFFSET                                        1
#define AVR32_USBH_PES_PORT_DISABLED                        0x00000000
#define AVR32_USBH_PES_PORT_ENABLED                         0x00000001
#define AVR32_USBH_PES_SET_PORT_ENABLE                      0x00000001
#define AVR32_USBH_PES_SIZE                                          1
#define AVR32_USBH_PFLF                                              1
#define AVR32_USBH_PFLF_MASK                                0x00000002
#define AVR32_USBH_PFLF_OFFSET                                       1
#define AVR32_USBH_PFLF_SIZE                                         1
#define AVR32_USBH_PIC                                              14
#define AVR32_USBH_PIC_AMBER                                0x00000001
#define AVR32_USBH_PIC_GREEN                                0x00000002
#define AVR32_USBH_PIC_MASK                                 0x0000c000
#define AVR32_USBH_PIC_OFFSET                                       14
#define AVR32_USBH_PIC_PORT_INDICATORS_OFF                  0x00000000
#define AVR32_USBH_PIC_SIZE                                          2
#define AVR32_USBH_PLE                                               2
#define AVR32_USBH_PLE_MASK                                 0x00000004
#define AVR32_USBH_PLE_OFFSET                                        2
#define AVR32_USBH_PLE_SIZE                                          1
#define AVR32_USBH_PO                                               13
#define AVR32_USBH_POCI                                              3
#define AVR32_USBH_POCI_CLEAR_SUSPEND_STATUS                0x00000001
#define AVR32_USBH_POCI_MASK                                0x00000008
#define AVR32_USBH_POCI_OFFSET                                       3
#define AVR32_USBH_POCI_SIZE                                         1
#define AVR32_USBH_PORTSC                                   0x00000054
#define AVR32_USBH_PORTSC_CCS                                        0
#define AVR32_USBH_PORTSC_CCS_DEVICE_PRESENT                0x00000001
#define AVR32_USBH_PORTSC_CCS_MASK                          0x00000001
#define AVR32_USBH_PORTSC_CCS_NO_DEVICE                     0x00000000
#define AVR32_USBH_PORTSC_CCS_OFFSET                                 0
#define AVR32_USBH_PORTSC_CCS_SIZE                                   1
#define AVR32_USBH_PORTSC_CSC                                        1
#define AVR32_USBH_PORTSC_CSC_MASK                          0x00000002
#define AVR32_USBH_PORTSC_CSC_OFFSET                                 1
#define AVR32_USBH_PORTSC_CSC_SIZE                                   1
#define AVR32_USBH_PORTSC_FPR                                        6
#define AVR32_USBH_PORTSC_FPR_MASK                          0x00000040
#define AVR32_USBH_PORTSC_FPR_OFFSET                                 6
#define AVR32_USBH_PORTSC_FPR_SIZE                                   1
#define AVR32_USBH_PORTSC_LS                                        10
#define AVR32_USBH_PORTSC_LS_J_STATE                        0x00000002
#define AVR32_USBH_PORTSC_LS_K_STATE                        0x00000001
#define AVR32_USBH_PORTSC_LS_MASK                           0x00000c00
#define AVR32_USBH_PORTSC_LS_OFFSET                                 10
#define AVR32_USBH_PORTSC_LS_SE0                            0x00000000
#define AVR32_USBH_PORTSC_LS_SIZE                                    2
#define AVR32_USBH_PORTSC_OCA                                        4
#define AVR32_USBH_PORTSC_OCA_MASK                          0x00000010
#define AVR32_USBH_PORTSC_OCA_OFFSET                                 4
#define AVR32_USBH_PORTSC_OCA_SIZE                                   1
#define AVR32_USBH_PORTSC_OCC                                        5
#define AVR32_USBH_PORTSC_OCC_MASK                          0x00000020
#define AVR32_USBH_PORTSC_OCC_OFFSET                                 5
#define AVR32_USBH_PORTSC_OCC_SIZE                                   1
#define AVR32_USBH_PORTSC_PED                                        2
#define AVR32_USBH_PORTSC_PEDC                                       3
#define AVR32_USBH_PORTSC_PEDC_MASK                         0x00000008
#define AVR32_USBH_PORTSC_PEDC_OFFSET                                3
#define AVR32_USBH_PORTSC_PEDC_SIZE                                  1
#define AVR32_USBH_PORTSC_PED_DISABLED                      0x00000000
#define AVR32_USBH_PORTSC_PED_ENABLED                       0x00000001
#define AVR32_USBH_PORTSC_PED_MASK                          0x00000004
#define AVR32_USBH_PORTSC_PED_OFFSET                                 2
#define AVR32_USBH_PORTSC_PED_SIZE                                   1
#define AVR32_USBH_PORTSC_PIC                                       14
#define AVR32_USBH_PORTSC_PIC_AMBER                         0x00000001
#define AVR32_USBH_PORTSC_PIC_GREEN                         0x00000002
#define AVR32_USBH_PORTSC_PIC_MASK                          0x0000c000
#define AVR32_USBH_PORTSC_PIC_OFFSET                                14
#define AVR32_USBH_PORTSC_PIC_PORT_INDICATORS_OFF           0x00000000
#define AVR32_USBH_PORTSC_PIC_SIZE                                   2
#define AVR32_USBH_PORTSC_PO                                        13
#define AVR32_USBH_PORTSC_PO_MASK                           0x00002000
#define AVR32_USBH_PORTSC_PO_OFFSET                                 13
#define AVR32_USBH_PORTSC_PO_SIZE                                    1
#define AVR32_USBH_PORTSC_PP                                        12
#define AVR32_USBH_PORTSC_PP_MASK                           0x00001000
#define AVR32_USBH_PORTSC_PP_OFFSET                                 12
#define AVR32_USBH_PORTSC_PP_SIZE                                    1
#define AVR32_USBH_PORTSC_PRESET                                     8
#define AVR32_USBH_PORTSC_PRESET_MASK                       0x00000100
#define AVR32_USBH_PORTSC_PRESET_OFFSET                              8
#define AVR32_USBH_PORTSC_PRESET_SIZE                                1
#define AVR32_USBH_PORTSC_PTC                                       16
#define AVR32_USBH_PORTSC_PTC_MASK                          0x000f0000
#define AVR32_USBH_PORTSC_PTC_OFFSET                                16
#define AVR32_USBH_PORTSC_PTC_SIZE                                   4
#define AVR32_USBH_PORTSC_PTC_TEST_FORCE_ENABLE             0x00000005
#define AVR32_USBH_PORTSC_PTC_TEST_J_STATE                  0x00000001
#define AVR32_USBH_PORTSC_PTC_TEST_K_STATE                  0x00000002
#define AVR32_USBH_PORTSC_PTC_TEST_MODE_DISABLED            0x00000000
#define AVR32_USBH_PORTSC_PTC_TEST_PACKET                   0x00000004
#define AVR32_USBH_PORTSC_PTC_TEST_SE0_NAK                  0x00000003
#define AVR32_USBH_PORTSC_SUSPEND                                    7
#define AVR32_USBH_PORTSC_SUSPEND_MASK                      0x00000080
#define AVR32_USBH_PORTSC_SUSPEND_OFFSET                             7
#define AVR32_USBH_PORTSC_SUSPEND_SIZE                               1
#define AVR32_USBH_PORTSC_WKCNNT_E                                  20
#define AVR32_USBH_PORTSC_WKCNNT_E_MASK                     0x00100000
#define AVR32_USBH_PORTSC_WKCNNT_E_OFFSET                           20
#define AVR32_USBH_PORTSC_WKCNNT_E_SIZE                              1
#define AVR32_USBH_PORTSC_WKDSCNNT_E                                21
#define AVR32_USBH_PORTSC_WKDSCNNT_E_MASK                   0x00200000
#define AVR32_USBH_PORTSC_WKDSCNNT_E_OFFSET                         21
#define AVR32_USBH_PORTSC_WKDSCNNT_E_SIZE                            1
#define AVR32_USBH_PORTSC_WKOC_E                                    22
#define AVR32_USBH_PORTSC_WKOC_E_MASK                       0x00400000
#define AVR32_USBH_PORTSC_WKOC_E_OFFSET                             22
#define AVR32_USBH_PORTSC_WKOC_E_SIZE                                1
#define AVR32_USBH_PORT_DISABLED                            0x00000000
#define AVR32_USBH_PORT_ENABLED                             0x00000001
#define AVR32_USBH_PORT_INDICATORS_OFF                      0x00000000
#define AVR32_USBH_PORT_NOT_SUSPENDED                       0x00000000
#define AVR32_USBH_PORT_POWER_OFF                           0x00000000
#define AVR32_USBH_PORT_POWER_ON                            0x00000001
#define AVR32_USBH_PORT_RESET_ACTIVE                        0x00000001
#define AVR32_USBH_PORT_RESET_CMPLT                         0x00000001
#define AVR32_USBH_PORT_RESET_NOT_ACTIVE                    0x00000000
#define AVR32_USBH_PORT_RESET_NOT_CMPLT                     0x00000000
#define AVR32_USBH_PORT_SUSPENDED                           0x00000001
#define AVR32_USBH_POTPGT                                           24
#define AVR32_USBH_POTPGT_MASK                              0xff000000
#define AVR32_USBH_POTPGT_OFFSET                                    24
#define AVR32_USBH_POTPGT_SIZE                                       8
#define AVR32_USBH_PO_MASK                                  0x00002000
#define AVR32_USBH_PO_OFFSET                                        13
#define AVR32_USBH_PO_SIZE                                           1
#define AVR32_USBH_PP                                               12
#define AVR32_USBH_PPC                                               4
#define AVR32_USBH_PPCM                                             16
#define AVR32_USBH_PPCM_MASK                                0xffff0000
#define AVR32_USBH_PPCM_OFFSET                                      16
#define AVR32_USBH_PPCM_SIZE                                        16
#define AVR32_USBH_PPC_MASK                                 0x00000010
#define AVR32_USBH_PPC_OFFSET                                        4
#define AVR32_USBH_PPC_SIZE                                          1
#define AVR32_USBH_PPS                                               8
#define AVR32_USBH_PPS_MASK                                 0x00000100
#define AVR32_USBH_PPS_OFFSET                                        8
#define AVR32_USBH_PPS_PORT_POWER_OFF                       0x00000000
#define AVR32_USBH_PPS_PORT_POWER_ON                        0x00000001
#define AVR32_USBH_PPS_SET_PORT_POWER                       0x00000001
#define AVR32_USBH_PPS_SIZE                                          1
#define AVR32_USBH_PP_MASK                                  0x00001000
#define AVR32_USBH_PP_OFFSET                                        12
#define AVR32_USBH_PP_SIZE                                           1
#define AVR32_USBH_PRESET                                            8
#define AVR32_USBH_PRESET_MASK                              0x00000100
#define AVR32_USBH_PRESET_OFFSET                                     8
#define AVR32_USBH_PRESET_SIZE                                       1
#define AVR32_USBH_PRR                                               7
#define AVR32_USBH_PRR_ENUMERATED                           0x00000001
#define AVR32_USBH_PRR_INCREMENTAL                          0x00000000
#define AVR32_USBH_PRR_MASK                                 0x00000080
#define AVR32_USBH_PRR_OFFSET                                        7
#define AVR32_USBH_PRR_SIZE                                          1
#define AVR32_USBH_PRS                                               4
#define AVR32_USBH_PRSC                                             20
#define AVR32_USBH_PRSC_MASK                                0x00100000
#define AVR32_USBH_PRSC_OFFSET                                      20
#define AVR32_USBH_PRSC_PORT_RESET_CMPLT                    0x00000001
#define AVR32_USBH_PRSC_PORT_RESET_NOT_CMPLT                0x00000000
#define AVR32_USBH_PRSC_SIZE                                         1
#define AVR32_USBH_PRS_MASK                                 0x00000010
#define AVR32_USBH_PRS_OFFSET                                        4
#define AVR32_USBH_PRS_PORT_RESET_ACTIVE                    0x00000001
#define AVR32_USBH_PRS_PORT_RESET_NOT_ACTIVE                0x00000000
#define AVR32_USBH_PRS_SET_PORT_RESET                       0x00000001
#define AVR32_USBH_PRS_SIZE                                          1
#define AVR32_USBH_PS                                                0
#define AVR32_USBH_PSM                                               8
#define AVR32_USBH_PSM_COLLECTIVE                           0x00000000
#define AVR32_USBH_PSM_MASK                                 0x00000100
#define AVR32_USBH_PSM_OFFSET                                        8
#define AVR32_USBH_PSM_PER_PORT                             0x00000001
#define AVR32_USBH_PSM_SIZE                                          1
#define AVR32_USBH_PSSC                                             18
#define AVR32_USBH_PSSC_MASK                                0x00040000
#define AVR32_USBH_PSSC_OFFSET                                      18
#define AVR32_USBH_PSSC_RESUME_COMPLETED                    0x00000001
#define AVR32_USBH_PSSC_RESUME_NOT_COMPLETED                0x00000000
#define AVR32_USBH_PSSC_SIZE                                         1
#define AVR32_USBH_PSS_DISABLED                             0x00000000
#define AVR32_USBH_PSS_ENABLED                              0x00000001
#define AVR32_USBH_PSS_PORT_NOT_SUSPENDED                   0x00000000
#define AVR32_USBH_PSS_PORT_SUSPENDED                       0x00000001
#define AVR32_USBH_PSS_SET_PORT_SUSPEND                     0x00000001
#define AVR32_USBH_PSS_SIZE                                          1
#define AVR32_USBH_PS_E                                              4
#define AVR32_USBH_PS_E_MASK                                0x00000010
#define AVR32_USBH_PS_E_OFFSET                                       4
#define AVR32_USBH_PS_E_SIZE                                         1
#define AVR32_USBH_PS_MASK                                  0x00003fff
#define AVR32_USBH_PS_OFFSET                                         0
#define AVR32_USBH_PS_SIZE                                          14
#define AVR32_USBH_PTC                                              16
#define AVR32_USBH_PTC_MASK                                 0x000f0000
#define AVR32_USBH_PTC_OFFSET                                       16
#define AVR32_USBH_PTC_SIZE                                          4
#define AVR32_USBH_PTC_TEST_FORCE_ENABLE                    0x00000005
#define AVR32_USBH_PTC_TEST_J_STATE                         0x00000001
#define AVR32_USBH_PTC_TEST_K_STATE                         0x00000002
#define AVR32_USBH_PTC_TEST_MODE_DISABLED                   0x00000000
#define AVR32_USBH_PTC_TEST_PACKET                          0x00000004
#define AVR32_USBH_PTC_TEST_SE0_NAK                         0x00000003
#define AVR32_USBH_P_INDICATOR                                      16
#define AVR32_USBH_P_INDICATOR_MASK                         0x00010000
#define AVR32_USBH_P_INDICATOR_OFFSET                               16
#define AVR32_USBH_P_INDICATOR_SIZE                                  1
#define AVR32_USBH_RD                                                3
#define AVR32_USBH_RD_MASK                                  0x00000008
#define AVR32_USBH_RD_OFFSET                                         3
#define AVR32_USBH_RD_SIZE                                           1
#define AVR32_USBH_RECL                                             13
#define AVR32_USBH_RECL_MASK                                0x00002000
#define AVR32_USBH_RECL_OFFSET                                      13
#define AVR32_USBH_RECL_SIZE                                         1
#define AVR32_USBH_RESUME_COMPLETED                         0x00000001
#define AVR32_USBH_RESUME_NOT_COMPLETED                     0x00000000
#define AVR32_USBH_REV                                               0
#define AVR32_USBH_REV_MASK                                 0x000000ff
#define AVR32_USBH_REV_OFFSET                                        0
#define AVR32_USBH_REV_SIZE                                          8
#define AVR32_USBH_RHSC                                              6
#define AVR32_USBH_RHSC_MASK                                0x00000040
#define AVR32_USBH_RHSC_OFFSET                                       6
#define AVR32_USBH_RHSC_SIZE                                         1
#define AVR32_USBH_RS                                                0
#define AVR32_USBH_RS_MASK                                  0x00000001
#define AVR32_USBH_RS_OFFSET                                         0
#define AVR32_USBH_RS_RUN                                   0x00000001
#define AVR32_USBH_RS_SIZE                                           1
#define AVR32_USBH_RS_STOP                                  0x00000000
#define AVR32_USBH_RUN                                      0x00000001
#define AVR32_USBH_RWC                                               9
#define AVR32_USBH_RWC_MASK                                 0x00000200
#define AVR32_USBH_RWC_OFFSET                                        9
#define AVR32_USBH_RWC_SIZE                                          1
#define AVR32_USBH_RWE                                              10
#define AVR32_USBH_RWE_MASK                                 0x00000400
#define AVR32_USBH_RWE_OFFSET                                       10
#define AVR32_USBH_RWE_SIZE                                          1
#define AVR32_USBH_SE0                                      0x00000000
#define AVR32_USBH_SET_GLOBAL_POWER                         0x00000001
#define AVR32_USBH_SET_PORT_ENABLE                          0x00000001
#define AVR32_USBH_SET_PORT_POWER                           0x00000001
#define AVR32_USBH_SET_PORT_RESET                           0x00000001
#define AVR32_USBH_SET_PORT_SUSPEND                         0x00000001
#define AVR32_USBH_SET_REMOTE_WAKEUP_ENABLE                 0x00000001
#define AVR32_USBH_SF                                                2
#define AVR32_USBH_SF_MASK                                  0x00000004
#define AVR32_USBH_SF_OFFSET                                         2
#define AVR32_USBH_SF_SIZE                                           1
#define AVR32_USBH_SO                                                0
#define AVR32_USBH_SOC                                              16
#define AVR32_USBH_SOC_MASK                                 0x00030000
#define AVR32_USBH_SOC_OFFSET                                       16
#define AVR32_USBH_SOC_SIZE                                          2
#define AVR32_USBH_SO_MASK                                  0x00000001
#define AVR32_USBH_SO_OFFSET                                         0
#define AVR32_USBH_SO_SIZE                                           1
#define AVR32_USBH_STOP                                     0x00000000
#define AVR32_USBH_SUSPEND                                           7
#define AVR32_USBH_SUSPEND_MASK                             0x00000080
#define AVR32_USBH_SUSPEND_OFFSET                                    7
#define AVR32_USBH_SUSPEND_SIZE                                      1
#define AVR32_USBH_TEST_FORCE_ENABLE                        0x00000005
#define AVR32_USBH_TEST_J_STATE                             0x00000001
#define AVR32_USBH_TEST_K_STATE                             0x00000002
#define AVR32_USBH_TEST_MODE_DISABLED                       0x00000000
#define AVR32_USBH_TEST_PACKET                              0x00000004
#define AVR32_USBH_TEST_SE0_NAK                             0x00000003
#define AVR32_USBH_UE                                                4
#define AVR32_USBH_UE_MASK                                  0x00000010
#define AVR32_USBH_UE_OFFSET                                         4
#define AVR32_USBH_UE_SIZE                                           1
#define AVR32_USBH_USBCMD                                   0x00000010
#define AVR32_USBH_USBCMD_ASPMC                                      8
#define AVR32_USBH_USBCMD_ASPMC_MASK                        0x00000300
#define AVR32_USBH_USBCMD_ASPMC_OFFSET                               8
#define AVR32_USBH_USBCMD_ASPMC_SIZE                                 2
#define AVR32_USBH_USBCMD_ASPM_E                                    11
#define AVR32_USBH_USBCMD_ASPM_E_MASK                       0x00000800
#define AVR32_USBH_USBCMD_ASPM_E_OFFSET                             11
#define AVR32_USBH_USBCMD_ASPM_E_SIZE                                1
#define AVR32_USBH_USBCMD_AS_E                                       5
#define AVR32_USBH_USBCMD_AS_E_MASK                         0x00000020
#define AVR32_USBH_USBCMD_AS_E_OFFSET                                5
#define AVR32_USBH_USBCMD_AS_E_SIZE                                  1
#define AVR32_USBH_USBCMD_FLS                                        2
#define AVR32_USBH_USBCMD_FLS_1024_ELEMENTS                 0x00000000
#define AVR32_USBH_USBCMD_FLS_256_ELEMENTS                  0x00000002
#define AVR32_USBH_USBCMD_FLS_512_ELEMENTS                  0x00000001
#define AVR32_USBH_USBCMD_FLS_MASK                          0x0000000c
#define AVR32_USBH_USBCMD_FLS_OFFSET                                 2
#define AVR32_USBH_USBCMD_FLS_SIZE                                   2
#define AVR32_USBH_USBCMD_HCRESET                                    1
#define AVR32_USBH_USBCMD_HCRESET_MASK                      0x00000002
#define AVR32_USBH_USBCMD_HCRESET_OFFSET                             1
#define AVR32_USBH_USBCMD_HCRESET_SIZE                               1
#define AVR32_USBH_USBCMD_IAAD                                       6
#define AVR32_USBH_USBCMD_IAAD_MASK                         0x00000040
#define AVR32_USBH_USBCMD_IAAD_OFFSET                                6
#define AVR32_USBH_USBCMD_IAAD_SIZE                                  1
#define AVR32_USBH_USBCMD_ITC                                       16
#define AVR32_USBH_USBCMD_ITC_MASK                          0x00ff0000
#define AVR32_USBH_USBCMD_ITC_OFFSET                                16
#define AVR32_USBH_USBCMD_ITC_SIZE                                   8
#define AVR32_USBH_USBCMD_LHCRESET                                   7
#define AVR32_USBH_USBCMD_LHCRESET_MASK                     0x00000080
#define AVR32_USBH_USBCMD_LHCRESET_OFFSET                            7
#define AVR32_USBH_USBCMD_LHCRESET_SIZE                              1
#define AVR32_USBH_USBCMD_PS_E                                       4
#define AVR32_USBH_USBCMD_PS_E_MASK                         0x00000010
#define AVR32_USBH_USBCMD_PS_E_OFFSET                                4
#define AVR32_USBH_USBCMD_PS_E_SIZE                                  1
#define AVR32_USBH_USBCMD_RS                                         0
#define AVR32_USBH_USBCMD_RS_MASK                           0x00000001
#define AVR32_USBH_USBCMD_RS_OFFSET                                  0
#define AVR32_USBH_USBCMD_RS_RUN                            0x00000001
#define AVR32_USBH_USBCMD_RS_SIZE                                    1
#define AVR32_USBH_USBCMD_RS_STOP                           0x00000000
#define AVR32_USBH_USBERRINT                                         1
#define AVR32_USBH_USBERRINT_E                                       1
#define AVR32_USBH_USBERRINT_E_MASK                         0x00000002
#define AVR32_USBH_USBERRINT_E_OFFSET                                1
#define AVR32_USBH_USBERRINT_E_SIZE                                  1
#define AVR32_USBH_USBERRINT_MASK                           0x00000002
#define AVR32_USBH_USBERRINT_OFFSET                                  1
#define AVR32_USBH_USBERRINT_SIZE                                    1
#define AVR32_USBH_USBINT                                            0
#define AVR32_USBH_USBINTR                                  0x00000018
#define AVR32_USBH_USBINTR_FLR_E                                     3
#define AVR32_USBH_USBINTR_FLR_E_MASK                       0x00000008
#define AVR32_USBH_USBINTR_FLR_E_OFFSET                              3
#define AVR32_USBH_USBINTR_FLR_E_SIZE                                1
#define AVR32_USBH_USBINTR_HSE_E                                     4
#define AVR32_USBH_USBINTR_HSE_E_MASK                       0x00000010
#define AVR32_USBH_USBINTR_HSE_E_OFFSET                              4
#define AVR32_USBH_USBINTR_HSE_E_SIZE                                1
#define AVR32_USBH_USBINTR_IAA_E                                     5
#define AVR32_USBH_USBINTR_IAA_E_MASK                       0x00000020
#define AVR32_USBH_USBINTR_IAA_E_OFFSET                              5
#define AVR32_USBH_USBINTR_IAA_E_SIZE                                1
#define AVR32_USBH_USBINTR_PCI_E                                     2
#define AVR32_USBH_USBINTR_PCI_E_MASK                       0x00000004
#define AVR32_USBH_USBINTR_PCI_E_OFFSET                              2
#define AVR32_USBH_USBINTR_PCI_E_SIZE                                1
#define AVR32_USBH_USBINTR_USBERRINT_E                               1
#define AVR32_USBH_USBINTR_USBERRINT_E_MASK                 0x00000002
#define AVR32_USBH_USBINTR_USBERRINT_E_OFFSET                        1
#define AVR32_USBH_USBINTR_USBERRINT_E_SIZE                          1
#define AVR32_USBH_USBINTR_USBINT_E                                  0
#define AVR32_USBH_USBINTR_USBINT_E_MASK                    0x00000001
#define AVR32_USBH_USBINTR_USBINT_E_OFFSET                           0
#define AVR32_USBH_USBINTR_USBINT_E_SIZE                             1
#define AVR32_USBH_USBINT_E                                          0
#define AVR32_USBH_USBINT_E_MASK                            0x00000001
#define AVR32_USBH_USBINT_E_OFFSET                                   0
#define AVR32_USBH_USBINT_E_SIZE                                     1
#define AVR32_USBH_USBINT_MASK                              0x00000001
#define AVR32_USBH_USBINT_OFFSET                                     0
#define AVR32_USBH_USBINT_SIZE                                       1
#define AVR32_USBH_USBSTS                                   0x00000014
#define AVR32_USBH_USBSTS_ASS                                       15
#define AVR32_USBH_USBSTS_ASS_DISABLED                      0x00000000
#define AVR32_USBH_USBSTS_ASS_ENABLED                       0x00000001
#define AVR32_USBH_USBSTS_ASS_MASK                          0x00008000
#define AVR32_USBH_USBSTS_ASS_OFFSET                                15
#define AVR32_USBH_USBSTS_ASS_SIZE                                   1
#define AVR32_USBH_USBSTS_FLR                                        3
#define AVR32_USBH_USBSTS_FLR_MASK                          0x00000008
#define AVR32_USBH_USBSTS_FLR_OFFSET                                 3
#define AVR32_USBH_USBSTS_FLR_SIZE                                   1
#define AVR32_USBH_USBSTS_HCHALTED                                  12
#define AVR32_USBH_USBSTS_HCHALTED_MASK                     0x00001000
#define AVR32_USBH_USBSTS_HCHALTED_OFFSET                           12
#define AVR32_USBH_USBSTS_HCHALTED_SIZE                              1
#define AVR32_USBH_USBSTS_HSE                                        4
#define AVR32_USBH_USBSTS_HSE_MASK                          0x00000010
#define AVR32_USBH_USBSTS_HSE_OFFSET                                 4
#define AVR32_USBH_USBSTS_HSE_SIZE                                   1
#define AVR32_USBH_USBSTS_IAA                                        5
#define AVR32_USBH_USBSTS_IAA_MASK                          0x00000020
#define AVR32_USBH_USBSTS_IAA_OFFSET                                 5
#define AVR32_USBH_USBSTS_IAA_SIZE                                   1
#define AVR32_USBH_USBSTS_PCD                                        2
#define AVR32_USBH_USBSTS_PCD_MASK                          0x00000004
#define AVR32_USBH_USBSTS_PCD_OFFSET                                 2
#define AVR32_USBH_USBSTS_PCD_SIZE                                   1
#define AVR32_USBH_USBSTS_PSS                                       14
#define AVR32_USBH_USBSTS_PSS_DISABLED                      0x00000000
#define AVR32_USBH_USBSTS_PSS_ENABLED                       0x00000001
#define AVR32_USBH_USBSTS_PSS_MASK                          0x00004000
#define AVR32_USBH_USBSTS_PSS_OFFSET                                14
#define AVR32_USBH_USBSTS_PSS_SIZE                                   1
#define AVR32_USBH_USBSTS_RECL                                      13
#define AVR32_USBH_USBSTS_RECL_MASK                         0x00002000
#define AVR32_USBH_USBSTS_RECL_OFFSET                               13
#define AVR32_USBH_USBSTS_RECL_SIZE                                  1
#define AVR32_USBH_USBSTS_USBERRINT                                  1
#define AVR32_USBH_USBSTS_USBERRINT_MASK                    0x00000002
#define AVR32_USBH_USBSTS_USBERRINT_OFFSET                           1
#define AVR32_USBH_USBSTS_USBERRINT_SIZE                             1
#define AVR32_USBH_USBSTS_USBINT                                     0
#define AVR32_USBH_USBSTS_USBINT_MASK                       0x00000001
#define AVR32_USBH_USBSTS_USBINT_OFFSET                              0
#define AVR32_USBH_USBSTS_USBINT_SIZE                                1
#define AVR32_USBH_USB_OPERATIONAL                          0x00000002
#define AVR32_USBH_USB_RESET                                0x00000000
#define AVR32_USBH_USB_RESUME                               0x00000001
#define AVR32_USBH_USB_SUSPEND                              0x00000003
#define AVR32_USBH_WDH                                               1
#define AVR32_USBH_WDH_MASK                                 0x00000002
#define AVR32_USBH_WDH_OFFSET                                        1
#define AVR32_USBH_WDH_SIZE                                          1
#define AVR32_USBH_WKCNNT_E                                         20
#define AVR32_USBH_WKCNNT_E_MASK                            0x00100000
#define AVR32_USBH_WKCNNT_E_OFFSET                                  20
#define AVR32_USBH_WKCNNT_E_SIZE                                     1
#define AVR32_USBH_WKDSCNNT_E                                       21
#define AVR32_USBH_WKDSCNNT_E_MASK                          0x00200000
#define AVR32_USBH_WKDSCNNT_E_OFFSET                                21
#define AVR32_USBH_WKDSCNNT_E_SIZE                                   1
#define AVR32_USBH_WKOC_E                                           22
#define AVR32_USBH_WKOC_E_MASK                              0x00400000
#define AVR32_USBH_WKOC_E_OFFSET                                    22
#define AVR32_USBH_WKOC_E_SIZE                                       1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_usbh_hcrevision_t {
    unsigned int                 :24;
    unsigned int rev             : 8;
} avr32_usbh_hcrevision_t;



typedef struct avr32_usbh_hccontrol_t {
    unsigned int                 :21;
    unsigned int rwe             : 1;
    unsigned int rwc             : 1;
    unsigned int ir              : 1;
    unsigned int hcfs            : 2;
    unsigned int ble             : 1;
    unsigned int cle             : 1;
    unsigned int ie              : 1;
    unsigned int ple             : 1;
    unsigned int cbsr            : 2;
} avr32_usbh_hccontrol_t;



typedef struct avr32_usbh_hccommandstatus_t {
    unsigned int                 :14;
    unsigned int soc             : 2;
    unsigned int                 :12;
    unsigned int ocr             : 1;
    unsigned int blf             : 1;
    unsigned int clf             : 1;
    unsigned int hcr             : 1;
} avr32_usbh_hccommandstatus_t;



typedef struct avr32_usbh_hcinterruptstatus_t {
    unsigned int                 : 1;
    unsigned int oc              : 1;
    unsigned int                 :23;
    unsigned int rhsc            : 1;
    unsigned int fno             : 1;
    unsigned int ue              : 1;
    unsigned int rd              : 1;
    unsigned int sf              : 1;
    unsigned int wdh             : 1;
    unsigned int so              : 1;
} avr32_usbh_hcinterruptstatus_t;



typedef struct avr32_usbh_hcinterruptenable_t {
    unsigned int mie             : 1;
    unsigned int oc              : 1;
    unsigned int                 :23;
    unsigned int rhsc            : 1;
    unsigned int fno             : 1;
    unsigned int ue              : 1;
    unsigned int rd              : 1;
    unsigned int sf              : 1;
    unsigned int wdh             : 1;
    unsigned int so              : 1;
} avr32_usbh_hcinterruptenable_t;



typedef struct avr32_usbh_hcinterruptdisable_t {
    unsigned int mie             : 1;
    unsigned int oc              : 1;
    unsigned int                 :23;
    unsigned int rhsc            : 1;
    unsigned int fno             : 1;
    unsigned int ue              : 1;
    unsigned int rd              : 1;
    unsigned int sf              : 1;
    unsigned int wdh             : 1;
    unsigned int so              : 1;
} avr32_usbh_hcinterruptdisable_t;



typedef struct avr32_usbh_hchcca_t {
    unsigned int hcca            :24;
    unsigned int                 : 8;
} avr32_usbh_hchcca_t;



typedef struct avr32_usbh_hcperiodcurrented_t {
    unsigned int pced            :28;
    unsigned int                 : 4;
} avr32_usbh_hcperiodcurrented_t;



typedef struct avr32_usbh_hccontrolheaded_t {
    unsigned int ched            :28;
    unsigned int                 : 4;
} avr32_usbh_hccontrolheaded_t;



typedef struct avr32_usbh_hccontrolcurrented_t {
    unsigned int cced            :28;
    unsigned int                 : 4;
} avr32_usbh_hccontrolcurrented_t;



typedef struct avr32_usbh_hcbulkheaded_t {
    unsigned int bhed            :28;
    unsigned int                 : 4;
} avr32_usbh_hcbulkheaded_t;



typedef struct avr32_usbh_hcbulkcurrented_t {
    unsigned int bced            :28;
    unsigned int                 : 4;
} avr32_usbh_hcbulkcurrented_t;



typedef struct avr32_usbh_hcdonehead_t {
    unsigned int dh              :28;
    unsigned int                 : 4;
} avr32_usbh_hcdonehead_t;



typedef struct avr32_usbh_hcfminterval_t {
    unsigned int fit             : 1;
    unsigned int fsmps           :15;
    unsigned int                 : 2;
    unsigned int fi              :14;
} avr32_usbh_hcfminterval_t;



typedef struct avr32_usbh_hcfmremaining_t {
    unsigned int frt             : 1;
    unsigned int                 :18;
    unsigned int fr              :14;
} avr32_usbh_hcfmremaining_t;



typedef struct avr32_usbh_hcfmnumber_t {
    unsigned int                 :16;
    unsigned int fn              :16;
} avr32_usbh_hcfmnumber_t;



typedef struct avr32_usbh_hcperiodstart_t {
    unsigned int                 :18;
    unsigned int ps              :14;
} avr32_usbh_hcperiodstart_t;



typedef struct avr32_usbh_hclsthreshold_t {
    unsigned int                 :20;
    unsigned int lst             :12;
} avr32_usbh_hclsthreshold_t;



typedef struct avr32_usbh_hcrhdescriptora_t {
    unsigned int potpgt          : 8;
    unsigned int                 :11;
    unsigned int nocp            : 1;
    unsigned int ocpm            : 1;
    unsigned int dt              : 1;
    unsigned int nps             : 1;
    unsigned int psm             : 1;
    unsigned int ndp             : 8;
} avr32_usbh_hcrhdescriptora_t;



typedef struct avr32_usbh_hcrhdescriptorb_t {
    unsigned int ppcm            :16;
    unsigned int dr              :16;
} avr32_usbh_hcrhdescriptorb_t;



typedef struct avr32_usbh_hcrhstatus_t {
    unsigned int crwe            : 1;
    unsigned int                 :14;
    unsigned int ocic            : 1;
    unsigned int lpsc            : 1;
    unsigned int drwe            : 1;
    unsigned int                 :13;
    unsigned int oci             : 1;
    unsigned int lps             : 1;
} avr32_usbh_hcrhstatus_t;



typedef struct avr32_usbh_hcrhportstatus_t {
    unsigned int                 :11;
    unsigned int prsc            : 1;
    unsigned int ocic            : 1;
    unsigned int pssc            : 1;
    unsigned int pesc            : 1;
    unsigned int csc             : 1;
    unsigned int                 : 6;
    unsigned int lsda            : 1;
    unsigned int pps             : 1;
    unsigned int                 : 3;
    unsigned int prs             : 1;
    unsigned int poci            : 1;
    unsigned int pss             : 1;
    unsigned int pes             : 1;
    unsigned int ccs             : 1;
} avr32_usbh_hcrhportstatus_t;



typedef struct avr32_usbh_hccapbase_t {
    unsigned int hciversion      :16;
    unsigned int                 : 8;
    unsigned int caplength       : 8;
} avr32_usbh_hccapbase_t;



typedef struct avr32_usbh_hcsparams_t {
    unsigned int                 : 8;
    unsigned int dpn             : 4;
    unsigned int                 : 3;
    unsigned int p_indicator     : 1;
    unsigned int n_cc            : 4;
    unsigned int n_pcc           : 4;
    unsigned int prr             : 1;
    unsigned int                 : 2;
    unsigned int ppc             : 1;
    unsigned int n_ports         : 4;
} avr32_usbh_hcsparams_t;



typedef struct avr32_usbh_hccparams_t {
    unsigned int                 :16;
    unsigned int eecp            : 8;
    unsigned int ist             : 4;
    unsigned int                 : 1;
    unsigned int aspc            : 1;
    unsigned int pflf            : 1;
    unsigned int ac64            : 1;
} avr32_usbh_hccparams_t;



typedef struct avr32_usbh_usbcmd_t {
    unsigned int                 : 8;
    unsigned int itc             : 8;
    unsigned int                 : 4;
    unsigned int aspm_e          : 1;
    unsigned int                 : 1;
    unsigned int aspmc           : 2;
    unsigned int lhcreset        : 1;
    unsigned int iaad            : 1;
    unsigned int as_e            : 1;
    unsigned int ps_e            : 1;
    unsigned int fls             : 2;
    unsigned int hcreset         : 1;
    unsigned int rs              : 1;
} avr32_usbh_usbcmd_t;



typedef struct avr32_usbh_usbsts_t {
    unsigned int                 :16;
    unsigned int ass             : 1;
    unsigned int pss             : 1;
    unsigned int recl            : 1;
    unsigned int hchalted        : 1;
    unsigned int                 : 6;
    unsigned int iaa             : 1;
    unsigned int hse             : 1;
    unsigned int flr             : 1;
    unsigned int pcd             : 1;
    unsigned int usberrint       : 1;
    unsigned int usbint          : 1;
} avr32_usbh_usbsts_t;



typedef struct avr32_usbh_usbintr_t {
    unsigned int                 :26;
    unsigned int iaa_e           : 1;
    unsigned int hse_e           : 1;
    unsigned int flr_e           : 1;
    unsigned int pci_e           : 1;
    unsigned int usberrint_e     : 1;
    unsigned int usbint_e        : 1;
} avr32_usbh_usbintr_t;



typedef struct avr32_usbh_frindex_t {
    unsigned int                 :18;
    unsigned int fi              :14;
} avr32_usbh_frindex_t;



typedef struct avr32_usbh_periodiclistbase_t {
    unsigned int bal             :20;
    unsigned int                 :12;
} avr32_usbh_periodiclistbase_t;



typedef struct avr32_usbh_asynclistaddr_t {
    unsigned int lpl             :27;
    unsigned int                 : 5;
} avr32_usbh_asynclistaddr_t;



typedef struct avr32_usbh_configflag_t {
    unsigned int                 :31;
    unsigned int cf              : 1;
} avr32_usbh_configflag_t;



typedef struct avr32_usbh_portsc_t {
    unsigned int                 : 9;
    unsigned int wkoc_e          : 1;
    unsigned int wkdscnnt_e      : 1;
    unsigned int wkcnnt_e        : 1;
    unsigned int ptc             : 4;
    unsigned int pic             : 2;
    unsigned int po              : 1;
    unsigned int pp              : 1;
    unsigned int ls              : 2;
    unsigned int                 : 1;
    unsigned int preset          : 1;
    unsigned int suspend         : 1;
    unsigned int fpr             : 1;
    unsigned int occ             : 1;
    unsigned int oca             : 1;
    unsigned int pedc            : 1;
    unsigned int ped             : 1;
    unsigned int csc             : 1;
    unsigned int ccs             : 1;
} avr32_usbh_portsc_t;


typedef struct avr32_usbh_ohci_t {
  union {
    const unsigned long                  hcrevision;//0x0000
    const avr32_usbh_hcrevision_t        HCREVISION;
  };
  union {
          unsigned long                  hccontrol ;//0x0004
          avr32_usbh_hccontrol_t         HCCONTROL ;
  };
  union {
          unsigned long                  hccommandstatus;//0x0008
          avr32_usbh_hccommandstatus_t   HCCOMMANDSTATUS;
  };
  union {
          unsigned long                  hcinterruptstatus;//0x000c
          avr32_usbh_hcinterruptstatus_t HCINTERRUPTSTATUS;
  };
  union {
          unsigned long                  hcinterruptenable;//0x0010
          avr32_usbh_hcinterruptenable_t HCINTERRUPTENABLE;
  };
  union {
          unsigned long                  hcinterruptdisable;//0x0014
          avr32_usbh_hcinterruptdisable_t HCINTERRUPTDISABLE;
  };
  union {
          unsigned long                  hchcca    ;//0x0018
          avr32_usbh_hchcca_t            HCHCCA    ;
  };
  union {
    const unsigned long                  hcperiodcurrented;//0x001c
    const avr32_usbh_hcperiodcurrented_t HCPERIODCURRENTED;
  };
  union {
          unsigned long                  hccontrolheaded;//0x0020
          avr32_usbh_hccontrolheaded_t   HCCONTROLHEADED;
  };
  union {
          unsigned long                  hccontrolcurrented;//0x0024
          avr32_usbh_hccontrolcurrented_t HCCONTROLCURRENTED;
  };
  union {
          unsigned long                  hcbulkheaded;//0x0028
          avr32_usbh_hcbulkheaded_t      HCBULKHEADED;
  };
  union {
          unsigned long                  hcbulkcurrented;//0x002c
          avr32_usbh_hcbulkcurrented_t   HCBULKCURRENTED;
  };
  union {
    const unsigned long                  hcdonehead;//0x0030
    const avr32_usbh_hcdonehead_t        HCDONEHEAD;
  };
  union {
          unsigned long                  hcfminterval;//0x0034
          avr32_usbh_hcfminterval_t      HCFMINTERVAL;
  };
  union {
    const unsigned long                  hcfmremaining;//0x0038
    const avr32_usbh_hcfmremaining_t     HCFMREMAINING;
  };
  union {
    const unsigned long                  hcfmnumber;//0x003c
    const avr32_usbh_hcfmnumber_t        HCFMNUMBER;
  };
  union {
          unsigned long                  hcperiodstart;//0x0040
          avr32_usbh_hcperiodstart_t     HCPERIODSTART;
  };
  union {
          unsigned long                  hclsthreshold;//0x0044
          avr32_usbh_hclsthreshold_t     HCLSTHRESHOLD;
  };
  union {
          unsigned long                  hcrhdescriptora;//0x0048
          avr32_usbh_hcrhdescriptora_t   HCRHDESCRIPTORA;
  };
  union {
          unsigned long                  hcrhdescriptorb;//0x004c
          avr32_usbh_hcrhdescriptorb_t   HCRHDESCRIPTORB;
  };
  union {
          unsigned long                  hcrhstatus;//0x0050
          avr32_usbh_hcrhstatus_t        HCRHSTATUS;
  };
  union {
          unsigned long                  hcrhportstatus;//0x0054
          avr32_usbh_hcrhportstatus_t    HCRHPORTSTATUS;
  };
} avr32_usbh_ohci_t;


typedef struct avr32_usbh_ehci_t {
  union {
    const unsigned long                  hccapbase ;//0x0000
    const avr32_usbh_hccapbase_t         HCCAPBASE ;
  };
  union {
    const unsigned long                  hcsparams ;//0x0004
    const avr32_usbh_hcsparams_t         HCSPARAMS ;
  };
  union {
    const unsigned long                  hccparams ;//0x0008
    const avr32_usbh_hccparams_t         HCCPARAMS ;
  };
          unsigned int                   :32       ;//0x000c
  union {
          unsigned long                  usbcmd    ;//0x0010
          avr32_usbh_usbcmd_t            USBCMD    ;
  };
  union {
          unsigned long                  usbsts    ;//0x0014
          avr32_usbh_usbsts_t            USBSTS    ;
  };
  union {
          unsigned long                  usbintr   ;//0x0018
          avr32_usbh_usbintr_t           USBINTR   ;
  };
  union {
          unsigned long                  frindex   ;//0x001c
          avr32_usbh_frindex_t           FRINDEX   ;
  };
          unsigned long                  ctrldssegment;//0x0020
  union {
          unsigned long                  periodiclistbase;//0x0024
          avr32_usbh_periodiclistbase_t  PERIODICLISTBASE;
  };
  union {
          unsigned long                  asynclistaddr;//0x0028
          avr32_usbh_asynclistaddr_t     ASYNCLISTADDR;
  };
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned int                   :32       ;//0x0040
          unsigned int                   :32       ;//0x0044
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
  union {
          unsigned long                  configflag;//0x0050
          avr32_usbh_configflag_t        CONFIGFLAG;
  };
  union {
          unsigned long                  portsc    ;//0x0054
          avr32_usbh_portsc_t            PORTSC    ;
  };
} avr32_usbh_ehci_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_USBH_291A_H_INCLUDED*/
#endif


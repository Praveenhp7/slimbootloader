/** @file
  PCH preserved MMIO resource definitions.

  Copyright (c) 2014 - 2019, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/
#ifndef _PCH_PRESERVED_RESOURCES_H_
#define _PCH_PRESERVED_RESOURCES_H_

/**

  Detailed recommended static allocation
  +-------------------------------------------------------------------------+
  | For CNL PCH                                                             |
  | PCH preserved MMIO range, 32 MB, from 0xFC800000 to 0xFE7FFFFF          |
  +-------------------------------------------------------------------------+
  | Size        | Start       | End         | Usage                         |
  | 8 MB        | 0xFC800000  | 0xFCFFFFFF  | TraceHub SW BAR               |
  | 16 MB       | 0xFD000000  | 0xFDFFFFFF  | SBREG                         |
  | 64 KB       | 0xFE000000  | 0xFE00FFFF  | PMC MBAR                      |
  | 4 KB        | 0xFE010000  | 0xFE010FFF  | SPI BAR0                      |
  | 176 KB      | 0xFE020000  | 0xFE04BFFF  | SerialIo BAR in ACPI mode     |
  | 16 KB       | 0xFE050000  | 0xFE053FFF  | PSE DMA1 BAR                  |
  | 16 KB       | 0xFE060000  | 0xFE063FFF  | PSE DMA2 BAR                  |
  | 400 KB      | 0xFE064000  | 0xFE0AFFFF  | Unused                        |
  | 64 KB       | 0xFE0B0000  | 0xFE0BFFFF  | eSPI LGMR BAR                 |
  | 64 KB       | 0xFE0C0000  | 0xFE0CFFFF  | eSPI2 SEGMR BAR               |
  | 192 KB      | 0xFE0D0000  | 0xFE0FFFFF  | Unused                        |
  | 1 MB        | 0xFE100000  | 0xFE1FFFFF  | TraceHub MTB BAR              |
  | 2 MB        | 0xFE200000  | 0xFE3FFFFF  | TraceHub FW BAR               |
  | 2 MB        | 0xFE400000  | 0xFE5FFFFF  | PSE MBAR                      |
  | 2 MB        | 0xFE600000  | 0xFE7FFFFF  | Temp address                  |
  +-------------------------------------------------------------------------+
**/
#define PCH_PCR_BASE_ADDRESS            0xFD000000     ///< SBREG MMIO base address
#define PCH_PCR_MMIO_SIZE               0x01000000     ///< 16MB
#define PCH_PWRM_BASE_ADDRESS           0xFE000000     ///< PMC MBAR MMIO base address
#define PCH_SERIAL_IO_BASE_ADDRESS      0xFE020000     ///< SerialIo MMIO base address
#define PCH_PSE_DMA1_BASE_ADDRESS       0xFE050000     ///< PSE DMA1 MMIO base address
#define PCH_PSE_DMA2_BASE_ADDRESS       0xFE060000     ///< PSE DMA2 MMIO base address
#define PCH_TRACE_HUB_FW_BASE_ADDRESS   0xFE200000     ///< TraceHub FW MMIO base address

#endif // _PCH_PRESERVED_RESOURCES_H_
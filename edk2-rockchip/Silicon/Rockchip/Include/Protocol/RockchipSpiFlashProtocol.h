/** @file
*
*  Copyright (c) 2015, Hisilicon Limited. All rights reserved.
*  Copyright (c) 2015, Linaro Limited. All rights reserved.
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
*
**/


#ifndef _ROCKCHIP_SPI_FLASH_PROTOCOL_H_
#define _ROCKCHIP_SPI_FLASH_PROTOCOL_H_

typedef struct _ROCKCHIP_SPI_FLASH_PROTOCOL ROCKCHIP_SPI_FLASH_PROTOCOL;

typedef
EFI_STATUS
(EFIAPI *ROCKCHIP_SPI_FLASH_ERASE_INTERFACE) (
    IN ROCKCHIP_SPI_FLASH_PROTOCOL   *This,
    IN UINT32                  Offset,
    IN UINT32                  ulLength
    );

typedef
EFI_STATUS
(EFIAPI *ROCKCHIP_SPI_FLASH_WRITE_INTERFACE) (
    IN ROCKCHIP_SPI_FLASH_PROTOCOL  *This,
    IN  UINT32                 Offset,
    IN  UINT8                 *Buffer,
    IN  UINT32                 ulLength
    );

typedef
EFI_STATUS
(EFIAPI *ROCKCHIP_SPI_FLASH_READ_INTERFACE) (
    IN ROCKCHIP_SPI_FLASH_PROTOCOL   *This,
    IN UINT32                  Offset,
    IN OUT UINT8              *Buffer,
    IN UINT32                  ulLength
    );

typedef
EFI_STATUS
(EFIAPI *ROCKCHIP_SPI_FLASH_ERASE_WRITE_INTERFACE) (
    IN ROCKCHIP_SPI_FLASH_PROTOCOL  *This,
    IN  UINT32                 Offset,
    IN  UINT8                 *Buffer,
    IN  UINT32                 ulLength
    );

struct _ROCKCHIP_SPI_FLASH_PROTOCOL {
    ROCKCHIP_SPI_FLASH_ERASE_INTERFACE             Erase;
    ROCKCHIP_SPI_FLASH_WRITE_INTERFACE             Write;
    ROCKCHIP_SPI_FLASH_READ_INTERFACE              Read;
    ROCKCHIP_SPI_FLASH_ERASE_WRITE_INTERFACE       EraseWrite;
};

extern EFI_GUID gRockchipSpiFlashProtocolGuid;

#endif

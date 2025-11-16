// 函数: sub_463540
// 地址: 0x463540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t i = 0
int32_t i_1 = 0
void* edi_1 = arg1 * 0x650 + &data_72d6b0
void* ebx_1 = arg1 * 0x7a0 + &data_98bf04

if (data_7031bc s> 0)
    void* esi_1 = edi_1 + 0x250
    
    do
        *((i << 2) + &data_8c16b0) = 0
        sub_463320(edi_1, ebx_1)
        *edi_1 = 0
        *(esi_1 - 0x24c) = 0
        *(esi_1 - 8) = 0
        *(esi_1 - 4) = 1
        *esi_1 = 0
        *(esi_1 + 4) = 0
        *(esi_1 + 0x1c) = 0xffffffff
        *(esi_1 + 8) = 0
        *(esi_1 + 0xc) = 0
        *(esi_1 + 0x20) = 0xffffffff
        *(esi_1 + 0x24) = 0
        *(esi_1 + 0x28) = 0
        *(esi_1 + 0x44) = 0xffffffff
        *(esi_1 + 0x58) = 0
        *(esi_1 + 0x48) = 0xffffffff
        *(esi_1 + 0x5c) = 0xffffffff
        sub_462b40(esi_1 - 0x104)
        *(esi_1 - 0x2c) = 0
        *(esi_1 - 0x28) = 0
        *(esi_1 - 0x24) = 0xff
        *(esi_1 - 0x20) = 0
        *(esi_1 - 0x1c) = 0
        *(esi_1 - 0x18) = 0
        *(esi_1 - 0x14) = 0
        *(esi_1 - 0x10) = 0xff
        *(esi_1 - 0xc) = 0
        sub_462c50(esi_1 + 0x70)
        *(esi_1 + 0x3e8) = 0xffffffff
        *(esi_1 + 0x3ec) = 0xffffffff
        *(esi_1 + 0x3f0) = 0xffffffff
        *(esi_1 + 0x3f4) = 0xffffffff
        *(esi_1 + 0x3f8) = 0
        *(esi_1 + 0x3fc) = 0
        sub_463110(esi_1 - 0x1cc)
        sub_4631a0(ebx_1 + 0x20)
        esi_1 += 0xca0
        i = i_1 + 1
        edi_1 += 0xca0
        ebx_1 += 0xf40
        i_1 = i
    while (i s< data_7031bc)

return i

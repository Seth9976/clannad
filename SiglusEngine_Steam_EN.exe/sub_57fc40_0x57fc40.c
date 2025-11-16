// 函数: sub_57fc40
// 地址: 0x57fc40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3f)
    return 

int32_t edi_1 = arg3 * 0x2d0
void* esi_1 = arg3 * 0x3920

if (arg2 != 0)
    *(edi_1 + &data_8fcb1c) = 2
    *(esi_1 + 0xf8c784) = 0
    *(esi_1 + &data_f8c794) = 0

if (*(edi_1 + &data_8fcb1c) == 0)
    return 

sub_57f7d0(arg3)
*(esi_1 + 0xf8d304) = 1
*(esi_1 + 0xf8d31c) = 0
*(esi_1 + 0xf8d320) = 0

if (arg4 != 0 && data_1311178 == 0 && *(esi_1 + &data_f8d308) != 0 && *(esi_1 + &data_f8d300) == 0)
    sub_5809f0(0)

int32_t eax
eax.b = *(edi_1 + &data_8fcb1c) == 2
*(esi_1 + &data_f8d300) = eax + 1

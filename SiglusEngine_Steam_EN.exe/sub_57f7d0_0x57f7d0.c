// 函数: sub_57f7d0
// 地址: 0x57f7d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

void* eax_1 = arg1 * 0x3920
void* edx_1 = arg1 * 0x2d0

if (*(eax_1 + &data_f8c794) == 0)
    *(edx_1 + 0x8fcb14) = 0
    *(eax_1 + 0xf8d324) = 2

int32_t ecx = 0
*(edx_1 + 0x8fcb0c) = *(edx_1 + 0x8fcb14)
int32_t eax = *(arg1 * 0x1d4 + 0x1090c00)

if (eax != 0)
    ecx = eax

*(edx_1 + 0x8fcb10) = ecx

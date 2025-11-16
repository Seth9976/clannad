// 函数: sub_57e4a0
// 地址: 0x57e4a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

sub_57e420(arg1 * 0x3920 + &data_f89afc)

if (arg2 == 0)
    return 

int32_t eax = sub_4a5770(arg2)

if (eax s<= 0)
    return 

int32_t ecx_2 = *(arg1 * 0x1d4 + 0x1090b40)
int32_t eax_1 = *(arg1 * 0x1d4 + 0x1090b44)
int32_t edx_1 = (eax + 1) s>> 1

if (edx_1 s< *(arg1 * 0x1d4 + 0x1090b48))
    edx_1 = *(arg1 * 0x1d4 + 0x1090b48)

*(arg1 * 0x3920 + 0xf89b3c) = ecx_2 + 0xe
*(arg1 * 0x3920 + 0xf89b38) = (ecx_2 + eax_1) * edx_1 - eax_1 + 0xe

if ((ecx_2 + eax_1) * edx_1 - eax_1 + 0xe s> 0 && ecx_2 + 0xe s> 0)
    *(arg1 * 0x3920 + 0xf89b40) = 1

int32_t eax_3 = *(arg1 * 0x1d4 + 0x1090b4c)
*(arg1 * 0x3920 + 0xf89ce4) += 1
*(arg1 * 0x3920 + 0xf89b30) = (ecx_2 + eax_1) * edx_1 - eax_1 + 2 + (eax_3 << 1)
*(arg1 * 0x3920 + 0xf89b34) = ecx_2 + 2 + (*(arg1 * 0x1d4 + 0x1090b50) << 1)

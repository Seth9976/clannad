// 函数: sub_48e530
// 地址: 0x48e530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
uint32_t var_8_1 = arg2

if ((*arg1 & 0x10) != 0)
    return 

uint32_t eax
eax.b = *(arg1 + 0x30)

if (eax.b u< 0x30 || eax.b u> 0x39)
    return 

arg2.b = *(arg1 + 0x31)

if (arg2.b u< 0x30 || arg2.b u> 0x39)
    return 

int32_t ebx
ebx.b = *(arg1 + 0x32)

if (ebx.b u< 0x30 || ebx.b u> 0x39)
    return 

arg2:1.b = *(arg1 + 0x33)

if (arg2:1.b u< 0x30 || arg2:1.b u> 0x39)
    return 

int32_t ecx_4 =
    zx.d(arg2:1.b) + (((zx.d(ebx.b) + (zx.d(arg2.b) + zx.d(eax.b) * 0xa) * 0xa) * 5 - 0x6828) << 1)

if (ecx_4 u<= 0x270f)
    *(ecx_4 + 0x1af19e0) = var_8_1.b

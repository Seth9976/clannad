// 函数: sub_4101d0
// 地址: 0x4101d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x18)

if (result s<= *(arg1 + 0x1c) + arg2)
    int32_t ecx = *(arg1 + 0x10)
    *(arg1 + 0x18) = result + arg2 + 0x20
    int32_t eax_2 = _realloc(ecx, (result + arg2 + 0x20) << 2)
    int32_t edx_2 = *(arg1 + 0x18)
    *(arg1 + 0x10) = eax_2
    result = _realloc(*(arg1 + 0x14), edx_2 << 3)
    *(arg1 + 0x14) = result

return result

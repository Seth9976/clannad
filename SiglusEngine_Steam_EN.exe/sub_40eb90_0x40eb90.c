// 函数: sub_40eb90
// 地址: 0x40eb90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + (arg3 << 2))

if (result s< 0)
    return *(arg2 + (arg3 << 2))

int32_t ecx = *(arg2 + (arg3 << 2))

if (ecx s< 0)
    return result

return (result + ecx) s>> 1

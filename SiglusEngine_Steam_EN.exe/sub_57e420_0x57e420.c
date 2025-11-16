// 函数: sub_57e420
// 地址: 0x57e420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x44) != 0)
    *(arg1 + 0x1e8) += 1

*(arg1 + 0x44) = 0

if (sub_45e320(arg1 + 0x3854, arg1 + 0x3850, arg1 + 0x48, arg1 + 0x3854, arg1 + 0x3858, 
        arg1 + 0x385c) != 0)
    *(arg1 + 0x384c) = 1

int32_t result = sub_4d6c40(arg1 + 0x50, arg1 + 0x54)
__builtin_memset(arg1 + 0x48, 0, 0x14)
return result

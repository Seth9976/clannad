// 函数: sub_1000fe30
// 地址: 0x1000fe30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_10001d70(*(arg1 - 0x14)) __tailcall

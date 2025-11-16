// 函数: sub_48f040
// 地址: 0x48f040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_4 = *arg1

if (eax_4 s> 0 && eax_4 s< 0x2710 && *(arg2 + 4) != 0)
    *(arg2 + 0x20) = *(arg2 + 0x18) + arg1[2]
    return 1

*(arg2 + 0x20) = 0xffffffff
return 0

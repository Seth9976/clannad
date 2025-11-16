// 函数: sub_4030f0
// 地址: 0x4030f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x1c)

if (eax == 0)
    return 0xffffffff

return *(eax + (arg2 << 2))

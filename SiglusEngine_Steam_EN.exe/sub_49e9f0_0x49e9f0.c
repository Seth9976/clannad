// 函数: sub_49e9f0
// 地址: 0x49e9f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
BOOL eax

if (arg1 == 0 || *(arg1 + 0x278) == 0)
    eax = sub_4c31a0(arg2)
    
    if (arg1 != 0)
        sub_4d1c30(eax, arg1, arg1 + 0x500, 0x280)
        *(arg1 + 0x748) = eax
else
    int64_t xmm0_1
    eax, xmm0_1 = sub_4cbad0(arg2)
    sub_4d1c30(eax, arg1, arg1 + 0x500, 0x280)
    *(arg1 + 0x768) = xmm0_1

return sub_49e720(eax, arg2, arg1, 0)

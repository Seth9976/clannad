// 函数: sub_4674e6
// 地址: 0x4674e6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0 || (*(arg2 + 8) & 1) == 0 || arg3 == 0)
    return 0

*arg3 = fconvert.d(fconvert.t(*(arg2 + 0x28)))
return 1

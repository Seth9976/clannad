// 函数: sub_5c80c0
// 地址: 0x5c80c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

*arg2 = SysAllocString(*(arg1 + 0x9c))
return 0

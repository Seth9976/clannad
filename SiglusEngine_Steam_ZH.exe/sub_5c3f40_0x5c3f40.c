// 函数: sub_5c3f40
// 地址: 0x5c3f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xd8) != 0xffffffff)
    if (*(arg1 + 0xe0) != 0)
        *(arg1 + 0xc0) += arg3
    else
        *(arg1 + 0xc0) += arg2

if (*(arg1 + 0x104) != 0xffffffff)
    if (*(arg1 + 0x10c) == 0)
        *(arg1 + 0xec) += arg2
        return arg3
    
    *(arg1 + 0xec) += arg3

return arg3

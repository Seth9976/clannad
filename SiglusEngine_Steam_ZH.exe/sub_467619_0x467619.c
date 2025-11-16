// 函数: sub_467619
// 地址: 0x467619
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0 || (*(arg2 + 8) & 8) == 0 || arg3 == 0)
    return 0

*arg3 = *(arg2 + 0x10)
*arg4 = zx.d(*(arg2 + 0x14))
return 8

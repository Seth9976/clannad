// 函数: sub_5b4b50
// 地址: 0x5b4b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
arg1[1] = 0
int32_t ecx = arg2[1]
arg2[1] = arg1[1]
arg1[1] = ecx
*arg2 = 0
return arg1

// 函数: sub_6b1df0
// 地址: 0x6b1df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg1[1] != 0
*arg1 = 1

if (not(cond:0))
    arg1[1] = 1

if (arg1[3] == 0)
    arg1[3] = 1

__builtin_memset(&arg1[4], 0, 0x20)

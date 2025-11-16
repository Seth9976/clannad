// 函数: sub_66ea80
// 地址: 0x66ea80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2[1] = *arg2
*(*arg2 + 4) = arg2[1]

if (arg2[7] u>= 8)
    j__free(arg2[2])

arg2[7] = 7
arg2[6] = 0
arg2[2].w = 0
int32_t result = j__free(arg2)
*(arg1 + 4) -= 1
return result

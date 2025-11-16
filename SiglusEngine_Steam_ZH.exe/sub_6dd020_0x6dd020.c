// 函数: sub_6dd020
// 地址: 0x6dd020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = arg2
arg1[3] = 0
arg1[4] = 0
arg1[1] = 0
arg1[2] = 0
arg1[6] = 0
arg1[5].b = 1
arg1[7] = 0
arg1[1] = zx.d(*arg3)
arg1[2] = zx.d(arg3[1])
arg1[3] = zx.d(arg3[3])
arg1[4] = zx.d(arg3[4])
uint32_t eax_4
eax_4.b = arg3[2].b == 1
arg1[5].b = eax_4.b
int32_t eax_6 = arg1[4] * arg1[3]
arg1[6] = &arg3[0x2e]
*arg4 = &arg3[0x2e + eax_6 * 2]
return arg4

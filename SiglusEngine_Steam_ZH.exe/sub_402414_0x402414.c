// 函数: sub_402414
// 地址: 0x402414
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7 = fconvert.t(arg2[1])
arg1[1] = fconvert.s(fconvert.t(arg2[4]))
arg1[4] = fconvert.s(x87_r7)
long double x87_r7_1 = fconvert.t(arg2[2])
arg1[2] = arg2[8]
arg1[8] = fconvert.s(x87_r7_1)
long double x87_r7_2 = fconvert.t(arg2[3])
arg1[3] = arg2[0xc]
arg1[0xc] = fconvert.s(x87_r7_2)
long double x87_r7_3 = fconvert.t(arg2[6])
arg1[6] = arg2[9]
arg1[9] = fconvert.s(x87_r7_3)
long double x87_r7_4 = fconvert.t(arg2[7])
arg1[7] = arg2[0xd]
arg1[0xd] = fconvert.s(x87_r7_4)
long double x87_r7_5 = fconvert.t(arg2[0xb])
arg1[0xb] = arg2[0xe]
arg1[0xe] = fconvert.s(x87_r7_5)

if (arg1 != arg2)
    *arg1 = *arg2
    arg1[5] = arg2[5]
    arg1[0xa] = arg2[0xa]
    arg1[0xf] = arg2[0xf]

return arg1

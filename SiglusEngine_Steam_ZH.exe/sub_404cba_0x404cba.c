// 函数: sub_404cba
// 地址: 0x404cba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
long double x87_r5_4 = fconvert.t(*arg2) * fconvert.t(arg3[1])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[5]) + fconvert.t(arg2[2]) * fconvert.t(arg3[9])
    + fconvert.t(arg3[0xd])
long double x87_r6_4 = fconvert.t(*arg2) * fconvert.t(arg3[2])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[6]) + fconvert.t(arg2[2]) * fconvert.t(arg3[0xa])
    + fconvert.t(arg3[0xe])
long double x87_r7_5 = fconvert.t(*arg2) * fconvert.t(arg3[3])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[7]) + fconvert.t(arg2[2]) * fconvert.t(arg3[0xb])
    + fconvert.t(arg3[0xf])
*arg1 = fconvert.s(fconvert.t(*arg2) * fconvert.t(*arg3) + fconvert.t(arg2[1]) * fconvert.t(arg3[4])
    + fconvert.t(arg2[2]) * fconvert.t(arg3[8]) + fconvert.t(arg3[0xc]))
arg1[1] = fconvert.s(x87_r5_4)
arg1[2] = fconvert.s(x87_r6_4)
float var_8_1 = fconvert.s(x87_r7_5)
float* var_c = arg1
float* var_10 = arg1
int32_t eax_1
int80_t st0
st0, eax_1 = sub_401000(fconvert.s(fconvert.t(var_8_1)), fconvert.s(float.t(1)))

if (eax_1 == 0)
    long double x87_r7_9 = float.t(1) / fconvert.t(var_8_1)
    *arg1 = fconvert.s(x87_r7_9 * fconvert.t(*arg1))
    arg1[1] = fconvert.s(x87_r7_9 * fconvert.t(arg1[1]))
    arg1[2] = fconvert.s(x87_r7_9 * fconvert.t(arg1[2]))

return arg1

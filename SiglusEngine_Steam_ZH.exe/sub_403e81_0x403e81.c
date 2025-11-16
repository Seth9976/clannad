// 函数: sub_403e81
// 地址: 0x403e81
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* edx = arg2
long double x87_r7 = fconvert.t(edx[3])
long double x87_r6 = fconvert.t(edx[2])
long double x87_r5 = fconvert.t(edx[1])
long double x87_r4 = fconvert.t(*edx)
arg2 = fconvert.s(x87_r4 * x87_r4 + x87_r5 * x87_r5 + x87_r6 * x87_r6 + x87_r7 * x87_r7)
long double x87_r7_2 = fconvert.t(arg2)
long double temp1 = fconvert.t(1.08420217e-19f)
x87_r7_2 - temp1

if ((((x87_r7_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    *arg1 = fconvert.s(float.t(0))
    arg1[1] = fconvert.s(float.t(0))
    arg1[2] = fconvert.s(float.t(0))
    arg1[3] = fconvert.s(float.t(0))
else
    float* var_8_1 = arg1
    float* var_c_1 = arg1
    *arg1 = fconvert.s(fneg(fconvert.t(*edx)))
    arg1[1] = fconvert.s(fneg(fconvert.t(edx[1])))
    arg1[2] = fconvert.s(fneg(fconvert.t(edx[2])))
    arg1[3] = edx[3]
    int32_t eax_2
    int80_t st0_1
    st0_1, eax_2 = sub_401000(fconvert.s(fconvert.t(arg2)), fconvert.s(float.t(1)))
    
    if (eax_2 == 0)
        long double x87_r7_12 = float.t(1) / fconvert.t(arg2)
        *arg1 = fconvert.s(x87_r7_12 * fconvert.t(*arg1))
        arg1[1] = fconvert.s(x87_r7_12 * fconvert.t(arg1[1]))
        arg1[2] = fconvert.s(x87_r7_12 * fconvert.t(arg1[2]))
        arg1[3] = fconvert.s(x87_r7_12 * fconvert.t(arg1[3]))

return arg1

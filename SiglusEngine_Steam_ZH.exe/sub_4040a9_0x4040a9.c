// 函数: sub_4040a9
// 地址: 0x4040a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float* ecx_1 = arg2
float* edx = arg3
long double result_1 = fconvert.t(*ecx_1) * fconvert.t(*edx)
    + fconvert.t(edx[2]) * fconvert.t(ecx_1[2]) + fconvert.t(edx[1]) * fconvert.t(ecx_1[1])
    + fconvert.t(edx[3]) * fconvert.t(ecx_1[3])
long double temp1 = fconvert.t(0f)
result_1 - temp1

if ((((result_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(result_1, temp1) ? 1 : 0) << 0xa
        | (result_1 == temp1 ? 1 : 0) << 0xe | 0x3000):1.b & 1) != 0)
    arg2 = -1f
else
    arg2 = fconvert.s(float.t(1))

long double x87_r5_10 = float.t(1) - result_1
long double temp2 = fconvert.t(1.1920929e-07f)
x87_r5_10 - temp2
long double x87_r6_10
long double result

if ((((x87_r5_10 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_10, temp2) ? 1 : 0) << 0xa
        | (x87_r5_10 == temp2 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
    result = result_1
    x87_r6_10 = fconvert.t(arg4)
else
    arg3 = fconvert.s(__fpatan(fconvert.t(fconvert.s(fconvert.t(arg2) * result_1)), result_1))
    float var_8_1 = fconvert.s(float.t(1) / result_1)
    long double st0_1
    bool c2_2
    st0_1, c2_2 = __fsin(fconvert.t(arg3) * result_1)
    result = result_1 * fconvert.t(var_8_1)
    long double st0_2
    bool c2_3
    st0_2, c2_3 = __fsin(fconvert.t(arg3) * fconvert.t(arg4))
    x87_r6_10 = st0_2 * fconvert.t(var_8_1)

long double x87_r6_11 = x87_r6_10 * fconvert.t(arg2)
*arg1 = fconvert.s(result * fconvert.t(*ecx_1) + x87_r6_11 * fconvert.t(*edx))
arg1[1] = fconvert.s(x87_r6_11 * fconvert.t(edx[1]) + result * fconvert.t(ecx_1[1]))
arg1[2] = fconvert.s(x87_r6_11 * fconvert.t(edx[2]) + result * fconvert.t(ecx_1[2]))
arg1[3] = fconvert.s(x87_r6_11 * fconvert.t(edx[3]) + result * fconvert.t(ecx_1[3]))
return result

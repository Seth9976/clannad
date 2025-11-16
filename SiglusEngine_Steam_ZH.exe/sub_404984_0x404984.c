// 函数: sub_404984
// 地址: 0x404984
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* ecx_1 = arg2
long double x87_r7 = fconvert.t(ecx_1[1])
int32_t* var_10 = ecx_1
long double x87_r6 = fconvert.t(*ecx_1)
int32_t* var_14 = ecx_1
arg2 = fconvert.s(x87_r6 * x87_r6 + x87_r7 * x87_r7)
int32_t eax
int80_t st0
st0, eax = sub_401000(fconvert.s(fconvert.t(arg2)), fconvert.s(float.t(1)))
int32_t* result

if (eax == 0)
    long double x87_r7_4 = fconvert.t(arg2)
    long double temp1_1 = fconvert.t(1.17549435e-38f)
    x87_r7_4 - temp1_1
    eax.w = (x87_r7_4 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe
    result = arg1
    
    if ((eax:1.b & 0x41) != 0)
        *result = fconvert.s(float.t(0))
        result[1] = fconvert.s(float.t(0))
    else
        long double x87_r7_7 = fconvert.t(1f) / sqrt(fconvert.t(arg2))
        long double x87_r7_8 = x87_r7_7 * fconvert.t(ecx_1[1])
        *result = fconvert.s(x87_r7_7 * fconvert.t(*ecx_1))
        result[1] = fconvert.s(x87_r7_8)
else
    result = arg1
    
    if (result != ecx_1)
        *result = *ecx_1
        result[1] = ecx_1[1]

return result

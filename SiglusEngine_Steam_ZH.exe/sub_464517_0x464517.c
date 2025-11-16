// 函数: sub_464517
// 地址: 0x464517
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_10 = edi
long double x87_r7_3 = fconvert.t(arg2[2]) * fconvert.t(arg2[2])
    + fconvert.t(arg2[1]) * fconvert.t(arg2[1]) + fconvert.t(*arg2) * fconvert.t(*arg2)
float var_c_1 = fconvert.s(x87_r7_3)

if (var_c_1 == 0)
    *arg1 = var_c_1
    arg1[1] = var_c_1
    arg1[2] = var_c_1
else if ((fconvert.s(x87_r7_3 - float.t(1)) & 0x7fffffff) s> 0x3727c5ac)
    void* edi_3 = var_c_1 u>> 0xc & 0xff8
    long double x87_r7_8 = (
        fconvert.t((var_c_1 & 0xffffff) | 0x3f000000) * fconvert.t(*(edi_3 + 0xb53da8))
        + fconvert.t(*(edi_3 + 0xb53dac))) * fconvert.t((0xbeffffff i- var_c_1) u>> 1 & 0xff800000)
    long double x87_r5_4 = fconvert.t(arg2[1]) * x87_r7_8
    long double x87_r4_2 = fconvert.t(arg2[2]) * x87_r7_8
    *arg1 = fconvert.s(fconvert.t(*arg2) * x87_r7_8)
    arg1[1] = fconvert.s(x87_r5_4)
    arg1[2] = fconvert.s(x87_r4_2)
else if (arg1 != arg2)
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]

return arg1

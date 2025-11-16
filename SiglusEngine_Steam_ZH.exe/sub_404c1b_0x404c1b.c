// 函数: sub_404c1b
// 地址: 0x404c1b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg2
long double x87_r7 = fconvert.t(esi[2])
int32_t edi
int32_t var_18 = edi
long double x87_r6 = fconvert.t(esi[1])
int32_t ecx
int32_t var_1c = ecx
long double x87_r5 = fconvert.t(*esi)
int32_t var_20 = ecx
arg2 = fconvert.s(x87_r5 * x87_r5 + x87_r6 * x87_r6 + x87_r7 * x87_r7)
int32_t eax
int80_t st0
st0, eax = sub_401000(fconvert.s(fconvert.t(arg2)), fconvert.s(float.t(1)))
float* result

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
        result[2] = fconvert.s(float.t(0))
    else
        long double x87_r7_7 = fconvert.t(1f) / sqrt(fconvert.t(arg2))
        float var_10 = fconvert.s(x87_r7_7 * fconvert.t(*esi))
        float var_c_1 = fconvert.s(x87_r7_7 * fconvert.t(esi[1]))
        long double x87_r7_8 = x87_r7_7 * fconvert.t(esi[2])
        esi = &var_10
        float var_8_1 = fconvert.s(x87_r7_8)
    label_404c69:
        *result = *esi
        void* edi_2 = &result[1]
        void* esi_1 = &esi[1]
        *edi_2 = *esi_1
        *(edi_2 + 4) = *(esi_1 + 4)
else
    result = arg1
    
    if (result != esi)
        goto label_404c69

return result

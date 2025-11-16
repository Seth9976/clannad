// 函数: sub_4042fa
// 地址: 0x4042fa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg2
long double x87_r7 = fconvert.t(esi[2])
int32_t ecx
int32_t var_c = ecx
long double x87_r6 = fconvert.t(esi[1])
int32_t var_10 = ecx
long double x87_r5 = fconvert.t(*esi)
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
    long double x87_r7_8
    
    if ((eax:1.b & 0x41) != 0)
        *result = fconvert.s(float.t(0))
        result[1] = fconvert.s(float.t(0))
        result[2] = fconvert.s(float.t(0))
        x87_r7_8 = float.t(0)
    else
        long double x87_r7_7 = fconvert.t(1f) / sqrt(fconvert.t(arg2))
        *result = fconvert.s(x87_r7_7 * fconvert.t(*esi))
        result[1] = fconvert.s(x87_r7_7 * fconvert.t(esi[1]))
        result[2] = fconvert.s(x87_r7_7 * fconvert.t(esi[2]))
        x87_r7_8 = x87_r7_7 * fconvert.t(esi[3])
    
    result[3] = fconvert.s(x87_r7_8)
else
    result = arg1
    
    if (result != esi)
        int32_t edi
        int32_t var_c_2 = edi
        *result = *esi
        void* edi_2 = &result[1]
        void* esi_1 = &esi[1]
        *edi_2 = *esi_1
        void* edi_3 = edi_2 + 4
        void* esi_2 = esi_1 + 4
        *edi_3 = *esi_2
        *(edi_3 + 4) = *(esi_2 + 4)

return result

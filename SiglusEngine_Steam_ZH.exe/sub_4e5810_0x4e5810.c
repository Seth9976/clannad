// 函数: sub_4e5810
// 地址: 0x4e5810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx = arg3
float* edx_1 = *(arg2 i+ 0x50)
int32_t esi
int32_t var_128 = esi
int32_t edi
int32_t var_12c = edi
int32_t ebx_1 = *(arg1 + 0x148) + 0x80
void var_120
void* eax_1 = &var_120
int32_t var_14 = 8
bool cond:1_1

do
    esi.w = ecx[8]
    
    if (esi.w != 0 || ecx[0x10] != esi.w || ecx[0x18] != esi.w || ecx[0x20] != esi.w
            || ecx[0x28] != esi.w || ecx[0x30] != esi.w || ecx[0x38] != esi.w)
        long double x87_r7_4 = float.t(sx.d(*ecx)) * fconvert.t(*edx_1)
        float.t(sx.d(ecx[0x10])) * fconvert.t(edx_1[0x10])
        long double x87_r5_2 = float.t(sx.d(ecx[0x20])) * fconvert.t(edx_1[0x20])
        arg3 = fconvert.s(float.t(sx.d(ecx[0x30])) * fconvert.t(edx_1[0x30]))
        arg2 = fconvert.s(x87_r5_2 + x87_r7_4)
        float var_c_1 = fconvert.s(x87_r7_4 - x87_r5_2)
        arg1 = fconvert.s(fconvert.t(arg3) + x87_r5_2)
        long double x87_r7_8 =
            (x87_r5_2 - fconvert.t(arg3)) * fconvert.t(1.41421354f) - fconvert.t(arg1)
        long double x87_r6_6 = fconvert.t(arg1) + fconvert.t(arg2)
        arg3 = fconvert.s(fconvert.t(arg2) - fconvert.t(arg1))
        float var_18_1 = fconvert.s(x87_r7_8 + fconvert.t(var_c_1))
        float var_20_1 = fconvert.s(fconvert.t(var_c_1) - x87_r7_8)
        long double x87_r5_12 = float.t(sx.d(esi.w)) * fconvert.t(edx_1[8])
        long double x87_r4_6 = float.t(sx.d(ecx[0x18])) * fconvert.t(edx_1[0x18])
        long double x87_r3_2 = float.t(sx.d(ecx[0x28])) * fconvert.t(edx_1[0x28])
        arg1 = fconvert.s(float.t(sx.d(ecx[0x38])) * fconvert.t(edx_1[0x38]))
        float var_1c_1 = fconvert.s(x87_r3_2 + x87_r4_6)
        long double x87_r4_7 = x87_r3_2 - x87_r4_6
        arg2 = fconvert.s(fconvert.t(arg1) + x87_r5_12)
        float var_10_1 = fconvert.s(x87_r5_12 - fconvert.t(arg1))
        arg1 = fconvert.s(fconvert.t(arg2) + fconvert.t(var_1c_1))
        float var_8_1 = fconvert.s((fconvert.t(var_10_1) + x87_r4_7) * fconvert.t(1.84775901f))
        float var_c_2 =
            fconvert.s(fconvert.t(var_8_1) - x87_r4_7 * fconvert.t(2.61312604f) - fconvert.t(arg1))
        arg2 = fconvert.s((fconvert.t(arg2) - fconvert.t(var_1c_1)) * fconvert.t(1.41421354f)
            - fconvert.t(var_c_2))
        float var_8_2 = fconvert.s(fconvert.t(var_10_1) * fconvert.t(1.08239222f)
            - fconvert.t(var_8_1) + fconvert.t(arg2))
        *eax_1 = fconvert.s(fconvert.t(arg1) + x87_r6_6)
        *(eax_1 + 0xe0) = fconvert.s(x87_r6_6 - fconvert.t(arg1))
        *(eax_1 + 0x20) = fconvert.s(fconvert.t(var_c_2) + fconvert.t(var_18_1))
        *(eax_1 + 0xc0) = fconvert.s(fconvert.t(var_18_1) - fconvert.t(var_c_2))
        *(eax_1 + 0x40) = fconvert.s(fconvert.t(arg2) + fconvert.t(var_20_1))
        *(eax_1 + 0xa0) = fconvert.s(fconvert.t(var_20_1) - fconvert.t(arg2))
        *(eax_1 + 0x80) = fconvert.s(fconvert.t(var_8_2) + fconvert.t(arg3))
        *(eax_1 + 0x60) = fconvert.s(fconvert.t(arg3) - fconvert.t(var_8_2))
    else
        long double x87_r7_2 = float.t(sx.d(*ecx)) * fconvert.t(*edx_1)
        *eax_1 = fconvert.s(x87_r7_2)
        *(eax_1 + 0x20) = fconvert.s(x87_r7_2)
        *(eax_1 + 0x40) = fconvert.s(x87_r7_2)
        *(eax_1 + 0x60) = fconvert.s(x87_r7_2)
        *(eax_1 + 0x80) = fconvert.s(x87_r7_2)
        *(eax_1 + 0xa0) = fconvert.s(x87_r7_2)
        *(eax_1 + 0xc0) = fconvert.s(x87_r7_2)
        *(eax_1 + 0xe0) = fconvert.s(x87_r7_2)
    
    edx_1 = &edx_1[1]
    ecx = &ecx[1]
    eax_1 += 4
    cond:1_1 = var_14 != 1
    var_14 -= 1
while (cond:1_1)
int32_t var_c_3 = 0
void var_118
void* esi_7 = &var_118
long double result
bool cond:0_1

do
    long double x87_r7_22 = fconvert.t(*(esi_7 + 8)) + fconvert.t(*(esi_7 - 8))
    result = fconvert.t(*(esi_7 - 8)) - fconvert.t(*(esi_7 + 8))
    char* edi_6 = *(arg4 + (var_c_3 << 2)) + arg5
    long double x87_r5_28 = fconvert.t(*esi_7) + fconvert.t(*(esi_7 + 0x10))
    float var_14_1 = fconvert.s(x87_r5_28 + x87_r7_22)
    arg3 = fconvert.s(x87_r7_22 - x87_r5_28)
    float var_18_2 = fconvert.s(fconvert.t(fconvert.s(
        (fconvert.t(*esi_7) - fconvert.t(*(esi_7 + 0x10))) * fconvert.t(1.41421354f) - x87_r5_28))
        + x87_r5_28)
    long double x87_r6_12 = fconvert.t(*(esi_7 + 0xc)) + fconvert.t(*(esi_7 + 4))
    long double x87_r5_32 = fconvert.t(*(esi_7 + 0xc)) - fconvert.t(*(esi_7 + 4))
    arg2 = fconvert.s(fconvert.t(*(esi_7 + 0x14)) + fconvert.t(*(esi_7 - 4)))
    float var_10_2 = fconvert.s(fconvert.t(*(esi_7 - 4)) - fconvert.t(*(esi_7 + 0x14)))
    arg1 = fconvert.s(fconvert.t(arg2) + x87_r6_12)
    float var_8_3 = fconvert.s((fconvert.t(var_10_2) + x87_r5_32) * fconvert.t(1.84775901f))
    long double x87_r5_35 =
        fconvert.t(var_8_3) - x87_r5_32 * fconvert.t(2.61312604f) - fconvert.t(arg1)
    arg2 = fconvert.s((fconvert.t(arg2) - x87_r6_12) * fconvert.t(1.41421354f) - x87_r5_35)
    float var_8_4 = fconvert.s(fconvert.t(var_10_2) * fconvert.t(1.08239222f) - fconvert.t(var_8_3)
        + fconvert.t(arg2))
    int32_t eax_4
    int16_t x87control
    int16_t x87control_1
    eax_4, x87control_1 = __ftol(x87control, fconvert.t(arg1) + fconvert.t(var_14_1))
    *edi_6 = ((eax_4 + 4) s>> 3 & 0x3ff)[ebx_1]
    int32_t eax_8
    int16_t x87control_2
    eax_8, x87control_2 = __ftol(x87control_1, fconvert.t(var_14_1) - fconvert.t(arg1))
    char* eax_11
    eax_11.b = ((eax_8 + 4) s>> 3 & 0x3ff)[ebx_1]
    edi_6[7] = eax_11.b
    int32_t eax_12
    int16_t x87control_3
    eax_12, x87control_3 = __ftol(x87control_2, fconvert.t(var_18_2) + x87_r5_35)
    int32_t ecx_1
    ecx_1.b = ((eax_12 + 4) s>> 3 & 0x3ff)[ebx_1]
    edi_6[1] = ecx_1.b
    int32_t eax_16
    int16_t x87control_4
    eax_16, x87control_4 = __ftol(x87control_3, fconvert.t(var_18_2) - x87_r5_35)
    edi_6[6] = ((eax_16 + 4) s>> 3 & 0x3ff)[ebx_1]
    int32_t eax_20
    int16_t x87control_5
    eax_20, x87control_5 = __ftol(x87control_4, fconvert.t(arg2) + x87_r5_35)
    char* eax_23
    eax_23.b = ((eax_20 + 4) s>> 3 & 0x3ff)[ebx_1]
    edi_6[2] = eax_23.b
    int32_t eax_24
    int16_t x87control_6
    eax_24, x87control_6 = __ftol(x87control_5, x87_r5_35 - fconvert.t(arg2))
    ecx_1.b = ((eax_24 + 4) s>> 3 & 0x3ff)[ebx_1]
    edi_6[5] = ecx_1.b
    int32_t eax_28
    int16_t x87control_7
    eax_28, x87control_7 = __ftol(x87control_6, fconvert.t(var_8_4) + fconvert.t(arg3))
    edi_6[4] = ((eax_28 + 4) s>> 3 & 0x3ff)[ebx_1]
    int32_t eax_32
    eax_32, x87control = __ftol(x87control_7, fconvert.t(arg3) - fconvert.t(var_8_4))
    char* eax_35
    eax_35.b = ((eax_32 + 4) s>> 3 & 0x3ff)[ebx_1]
    edi_6[3] = eax_35.b
    esi_7 += 0x20
    cond:0_1 = var_c_3 + 1 s< 8
    var_c_3 += 1
while (cond:0_1)
return result

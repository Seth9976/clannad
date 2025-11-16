// 函数: sub_487e2d
// 地址: 0x487e2d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* ecx = arg2
long double x87_r7_2 = fconvert.t(ecx[5]) + fconvert.t(*ecx) + fconvert.t(ecx[0xa])
long double temp1 = fconvert.t(0f)
x87_r7_2 - temp1
long double result

if ((((x87_r7_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
    float eax_2 = ecx[5]
    long double x87_r7_6 = fconvert.t(*ecx)
    float eax_3 = ecx[0xa]
    float var_18 = fconvert.s(x87_r7_6)
    long double temp2_1 = fconvert.t(eax_2)
    x87_r7_6 - temp2_1
    float var_10_1 = eax_3
    float* ebx_1 = nullptr
    eax_3.w = (x87_r7_6 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe
    int32_t edi
    int32_t var_24_1 = edi
    
    if ((eax_3:1.b & 1) != 0)
        ebx_1 = 1
    
    long double x87_r7_7 = fconvert.t((&var_18)[ebx_1])
    arg2 = ebx_1
    long double temp3_1 = fconvert.t(var_10_1)
    x87_r7_7 - temp3_1
    eax_3.w = (x87_r7_7 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe
    
    if ((eax_3:1.b & 1) != 0)
        ebx_1 = 2
        arg2 = 2
    
    int32_t edx_2 = ebx_1 << 2
    int32_t edi_1 = *(edx_2 + 0xac7d70)
    float* esi_2 = edi_1 << 2
    int32_t eax_4 = esi_2[0x2b1f5c]
    long double x87_r7_13 = sqrt(fconvert.t((&var_18)[ebx_1]) - fconvert.t(*(&var_18 + esi_2))
        - fconvert.t((&var_18)[eax_4]) + fconvert.t(1f)) * fconvert.t(0.5f)
    arg1[ebx_1] = fconvert.s(x87_r7_13)
    result = fconvert.t(0.25f) / x87_r7_13
    *(esi_2 + arg1) =
        fconvert.s((fconvert.t(ecx[ebx_1 + esi_2]) + fconvert.t(ecx[edi_1 + edx_2])) * result)
    float* edx_5 = eax_4 << 2
    *(edx_5 + arg1) =
        fconvert.s((fconvert.t(ecx[&arg2[eax_4]]) + fconvert.t(ecx[edx_2 + eax_4])) * result)
    arg1[3] = fconvert.s((fconvert.t(ecx[esi_2 + eax_4]) - fconvert.t(ecx[edx_5 + edi_1])) * result)
else
    long double x87_r7_5 = sqrt(x87_r7_2 + fconvert.t(1f)) * fconvert.t(0.5f)
    arg1[3] = fconvert.s(x87_r7_5)
    result = fconvert.t(0.25f) / x87_r7_5
    *arg1 = fconvert.s((fconvert.t(ecx[6]) - fconvert.t(ecx[9])) * result)
    arg1[1] = fconvert.s((fconvert.t(ecx[8]) - fconvert.t(ecx[2])) * result)
    arg1[2] = fconvert.s((fconvert.t(ecx[1]) - fconvert.t(ecx[4])) * result)

return result

// 函数: sub_403adc
// 地址: 0x403adc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* ecx = arg2
long double x87_r7_2 = fconvert.t(ecx[5]) + fconvert.t(*ecx) + fconvert.t(ecx[0xa])
long double temp1 = fconvert.t(0f)
x87_r7_2 - temp1
long double result

if ((((x87_r7_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
    int32_t var_18_1 = 0
    int32_t edi
    int32_t var_2c_1 = edi
    long double x87_r7_8 = fconvert.t(*ecx) - fconvert.t(ecx[5]) - fconvert.t(ecx[0xa])
    float* ebx_1 = 1
    float var_14 = fconvert.s(x87_r7_8)
    int32_t var_20 = 1
    int32_t var_1c_1 = 2
    long double temp2_1 =
        fconvert.t(fconvert.s(fconvert.t(ecx[5]) - fconvert.t(*ecx) - fconvert.t(ecx[0xa])))
    x87_r7_8 - temp2_1
    
    if ((1 & ((x87_r7_8 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe):1.b) == 0)
        ebx_1 = nullptr
    
    long double x87_r7_9 = fconvert.t((&var_14)[ebx_1])
    arg2 = ebx_1
    long double temp3_1 =
        fconvert.t(fconvert.s(fconvert.t(ecx[0xa]) - (fconvert.t(ecx[5]) + fconvert.t(*ecx))))
    x87_r7_9 - temp3_1
    
    if ((((x87_r7_9 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe):1.b & 1) != 0)
        ebx_1 = 2
        arg2 = 2
    
    int32_t edx_2 = ebx_1 << 2
    int32_t edi_1 = (&var_20)[ebx_1]
    float* eax_2 = arg1
    float* esi_2 = edi_1 << 2
    long double x87_r7_13 = sqrt(fconvert.t((&var_14)[ebx_1]) + fconvert.t(1f)) * fconvert.t(0.5f)
    eax_2[ebx_1] = fconvert.s(x87_r7_13)
    result = fconvert.t(0.25f) / x87_r7_13
    arg1 = *(&var_20 + esi_2) << 2
    int32_t edi_5 = *(&var_20 + esi_2)
    *(esi_2 + eax_2) =
        fconvert.s((fconvert.t(ecx[ebx_1 + esi_2]) + fconvert.t(ecx[edi_1 + edx_2])) * result)
    *(arg1 + eax_2) = fconvert.s((fconvert.t(ecx[&arg2[*(&var_20 + esi_2)]])
        + fconvert.t(ecx[edx_2 + edi_5])) * result)
    eax_2[3] = fconvert.s((fconvert.t(ecx[esi_2 + edi_5]) - fconvert.t(ecx[arg1 + edi_1])) * result)
else
    long double x87_r7_5 = sqrt(x87_r7_2 + fconvert.t(1f)) * fconvert.t(0.5f)
    arg1[3] = fconvert.s(x87_r7_5)
    result = fconvert.t(0.25f) / x87_r7_5
    *arg1 = fconvert.s((fconvert.t(ecx[6]) - fconvert.t(ecx[9])) * result)
    arg1[1] = fconvert.s((fconvert.t(ecx[8]) - fconvert.t(ecx[2])) * result)
    arg1[2] = fconvert.s((fconvert.t(ecx[1]) - fconvert.t(ecx[4])) * result)

return result

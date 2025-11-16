// 函数: sub_408e00
// 地址: 0x408e00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float* eax = arg1
int32_t ebx = arg2
float* edx = arg4
int32_t ebp_1 = eax * ebx
float* esi = arg3
int32_t var_1c = ebp_1
void* var_50 = nullptr

if (ebx s> 0)
    float* ebx_1 = &esi[ebp_1]
    float* var_5c_1 = esi
    float* var_44_1 = ebx_1
    float* var_54_1 = &esi[ebp_1 * 3]
    float* var_58_1 = &esi[ebp_1 * 2]
    int32_t var_48_1 = arg2
    bool cond:2_1
    
    do
        long double x87_r7_2 = fconvert.t(*ebx_1) + fconvert.t(*var_54_1)
        long double x87_r6_2 = fconvert.t(*var_58_1) + fconvert.t(*var_5c_1)
        int32_t ecx_9 = var_50 << 2
        edx[ecx_9] = fconvert.s(x87_r6_2 + x87_r7_2)
        edx[(eax << 2) + ecx_9 - 1] = fconvert.s(x87_r6_2 - x87_r7_2)
        int32_t ecx_10 = ecx_9 + eax * 2
        edx[ecx_10 - 1] = fconvert.s(fconvert.t(*var_5c_1) - fconvert.t(*var_58_1))
        long double x87_r7_6 = fconvert.t(*var_54_1) - fconvert.t(*var_44_1)
        ebx_1 = &var_44_1[eax]
        var_44_1 = ebx_1
        edx[ecx_10] = fconvert.s(x87_r7_6)
        var_50 += eax
        var_5c_1 = &var_5c_1[eax]
        var_58_1 = &var_58_1[eax]
        var_54_1 = &var_54_1[eax]
        cond:2_1 = var_48_1 != 1
        var_48_1 -= 1
    while (cond:2_1)
    ebx = arg2

if (eax s< 2)
    return 

if (eax == 2)
label_40919c:
    
    if (ebx s> 0)
        void* edx_14 = &edx[eax * 3]
        float* ebx_40 = &esi[eax + ebp_1 - 1]
        float* ebp_3 = &edx[eax]
        float* eax_8 = &esi[eax + ebp_1 - 1 + ebp_1]
        float* esi_2 = &esi[eax + ebp_1 - 1 - ebp_1]
        float* edi_7 = &esi[eax + ebp_1 - 1 + (ebp_1 << 1)]
        
        while (true)
            (fconvert.t(*edi_7) + fconvert.t(*ebx_40)) * fconvert.t(data_632fec)
            long double x87_r6_25 = fconvert.t(*ebx_40) - fconvert.t(*edi_7)
            ebx_40 = &ebx_40[eax]
            long double x87_r6_26 = x87_r6_25 * fconvert.t(data_632fec)
            ebp_3[-1] = fconvert.s(x87_r6_26 + fconvert.t(*esi_2))
            long double x87_r5_28 = fconvert.t(*esi_2) - x87_r6_26
            esi_2 = &esi_2[eax]
            *(edx_14 - 4) = fconvert.s(x87_r5_28)
            *ebp_3 = fconvert.s(x87_r6_26 - fconvert.t(*eax_8))
            ebp_3 = &ebp_3[eax * 4]
            long double x87_r7_21 = x87_r6_26 + fconvert.t(*eax_8)
            eax_8 = &eax_8[eax]
            *edx_14 = fconvert.s(x87_r7_21)
            edx_14 += eax << 4
            bool cond:5_1 = arg2 != 1
            arg2 -= 1
            
            if (not(cond:5_1))
                break
            
            edi_7 = &edi_7[eax]
    
    return 

void* edi_2 = nullptr
void* var_18_1 = nullptr

if (ebx s> 0)
    int32_t ebx_8 = eax * 2
    int32_t var_10_1 = ebx_8
    float* var_4c_1 = edx
    float* var_44_2 = &esi[ebp_1 * 3]
    float* var_48_2 = &esi[ebp_1]
    int32_t var_14_1 = arg2
    
    while (true)
        int32_t ecx_28 = ebx_8 + (edi_2 << 2)
        
        if (eax s> 2)
            float* var_54_2 = &edx[ecx_28]
            float* ebp_2 = &esi[edi_2]
            void* var_58_2 = &edx[ebx_8 + (edi_2 << 2)]
            void* var_5c_2 = &edx[ecx_28 + ebx_8]
            float* esi_1 = &esi[edi_2 + (var_1c << 1)]
            float* edx_5 = arg6 - arg5
            float* edi_3 = var_44_2
            float* edx_7 = arg7 - arg5
            float* edx_9 = arg6 - arg7
            void* eax_5 = arg5 + 4
            float* var_50_1 = var_4c_1
            float* ecx_31 = var_48_2
            uint32_t var_20_1 = (arg1 - 1) u>> 1
            float* edx_13 = arg7
            bool cond:8_1
            
            do
                long double x87_r7_8 = fconvert.t(ecx_31[1]) * fconvert.t(*(eax_5 - 4))
                ecx_31 = &ecx_31[2]
                esi_1 = &esi_1[2]
                var_50_1 = &var_50_1[2]
                edi_3 = &edi_3[2]
                long double x87_r7_9 = x87_r7_8 + fconvert.t(*eax_5) * fconvert.t(*ecx_31)
                var_58_2 += 8
                ebp_2 = &ebp_2[2]
                var_54_2 -= 8
                var_5c_2 -= 8
                float var_38_1 = fconvert.s(fconvert.t(*(eax_5 - 4)) * fconvert.t(*ecx_31)
                    - fconvert.t(*eax_5) * fconvert.t(ecx_31[-1]))
                float var_2c_1 = fconvert.s(fconvert.t(esi_1[-1]) * fconvert.t(*(edx_9 + edx_13))
                    + fconvert.t(*(edx_5 + eax_5)) * fconvert.t(*esi_1))
                float var_30_1 = fconvert.s(fconvert.t(*esi_1) * fconvert.t(*(edx_9 + edx_13))
                    - fconvert.t(esi_1[-1]) * fconvert.t(*(edx_5 + eax_5)))
                long double x87_r6_17 = fconvert.t(*(edx_7 + eax_5)) * fconvert.t(*edi_3)
                    + fconvert.t(edi_3[-1]) * fconvert.t(*edx_13)
                float var_34_1 = fconvert.s(fconvert.t(*edi_3) * fconvert.t(*edx_13)
                    - fconvert.t(edi_3[-1]) * fconvert.t(*(edx_7 + eax_5)))
                float var_28_1 = fconvert.s(x87_r6_17 + x87_r7_9)
                float var_24_2 = fconvert.s(fconvert.t(var_34_1) + fconvert.t(var_38_1))
                long double x87_r6_21 = fconvert.t(var_38_1) - fconvert.t(var_34_1)
                float var_38_2 = fconvert.s(fconvert.t(var_30_1) + fconvert.t(*ebp_2))
                float var_30_2 = fconvert.s(fconvert.t(*ebp_2) - fconvert.t(var_30_1))
                float var_34_2 = fconvert.s(fconvert.t(var_2c_1) + fconvert.t(ebp_2[-1]))
                long double x87_r5_23 = fconvert.t(ebp_2[-1]) - fconvert.t(var_2c_1)
                var_50_1[-1] = fconvert.s(fconvert.t(var_34_2) + fconvert.t(var_28_1))
                *var_50_1 = fconvert.s(fconvert.t(var_38_2) + fconvert.t(var_24_2))
                eax_5 += 8
                edx_13 = &edx_13[2]
                var_54_2[-1] = fconvert.s(x87_r5_23 - x87_r6_21)
                *var_54_2 = fconvert.s(x87_r6_17 - x87_r7_9 - fconvert.t(var_30_2))
                *(var_58_2 - 4) = fconvert.s(x87_r5_23 + x87_r6_21)
                *var_58_2 = fconvert.s(fconvert.t(var_30_2) + x87_r6_21)
                *(var_5c_2 - 4) = fconvert.s(fconvert.t(var_34_2) - fconvert.t(var_28_1))
                *var_5c_2 = fconvert.s(fconvert.t(var_24_2) - fconvert.t(var_38_2))
                cond:8_1 = var_20_1 != 1
                var_20_1 -= 1
            while (cond:8_1)
            esi = arg3
            edx = arg4
            edi_2 = var_18_1
            ebp_1 = var_1c
            eax = arg1
        
        var_4c_1 = &var_4c_1[eax * 4]
        edi_2 += eax
        var_48_2 = &var_48_2[eax]
        bool cond:7_1 = var_14_1 != 1
        var_18_1 = edi_2
        var_44_2 = &var_44_2[eax]
        var_14_1 -= 1
        
        if (not(cond:7_1))
            break
        
        ebx_8 = var_10_1
    
    ebx = arg2

if ((eax.b & 1) == 0)
    goto label_40919c

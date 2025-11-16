// 函数: sub_9a31a0
// 地址: 0x9a31a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2
int32_t edx = arg3
int32_t ecx = arg3 * result
int32_t ebx = 0
void* var_c = result
int32_t var_5c = edx
int32_t* esi = arg5
int32_t var_8 = ecx
int32_t edi = arg4

if (result s> 0)
    float* ecx_1 = edi + (ecx << 2)
    float* var_18_1 = ecx_1
    int32_t* var_14_1 = edi + var_8 * 0xc
    float* var_10_1 = edi + (var_8 << 3)
    void* i_4 = var_c
    int32_t eax_6 = edx << 2
    void* i
    
    do
        float xmm2_2 = *var_14_1 + *ecx_1
        esi = arg5
        float xmm1_2 = *(edi + (ebx << 2)) + *var_10_1
        int32_t ecx_3 = ebx << 2
        esi[ecx_3] = xmm1_2 + xmm2_2
        int32_t ecx_4 = ecx_3 + (edx << 1)
        esi[eax_6 + ecx_3 - 1] = xmm1_2 - xmm2_2
        float xmm0_3 = *(edi + (ebx << 2))
        ebx += edx
        esi[ecx_4 - 1] = xmm0_3 - *var_10_1
        float xmm0_6 = *var_14_1 - *var_18_1
        eax_6 = edx << 2
        var_10_1 += eax_6
        var_14_1 += eax_6
        esi[ecx_4] = xmm0_6
        ecx_1 = var_18_1 + eax_6
        i = i_4
        i_4 -= 1
        var_18_1 = ecx_1
    while (i != 1)
    ecx = var_8
    result = var_c

if (edx s>= 2)
    if (edx == 2)
    label_9a350b:
        int32_t ebx_8 = edx - 1 + ecx
        
        if (result s> 0)
            int32_t eax_46 = edx << 4
            void* ebx_9 = &esi[edx]
            float* var_44_2 = edi + ((ebx_8 + (ecx << 1)) << 2)
            void* var_50_1 = edi + (ebx_8 << 2)
            void* edx_2 = &esi[edx * 3]
            result = edi + ((ebx_8 + var_8) << 2)
            int32_t* esi_5 = edi + ((ebx_8 - var_8) << 2)
            float* edi_2 = var_44_2
            void* i_1
            
            do
                float xmm0_25 = *edi_2
                float* edi_3 = var_50_1
                float xmm1_7 = *edi_3
                var_50_1 = &edi_3[edx]
                edi_2 = &var_44_2[edx]
                var_44_2 = edi_2
                float xmm1_9 = (xmm1_7 - xmm0_25) * 0.707106769f
                float xmm2_14 = (xmm1_7 + xmm0_25) * -0.707106769f
                *(ebx_9 - 4) = *esi_5 + xmm1_9
                float xmm0_28 = *esi_5
                esi_5 = &esi_5[edx]
                *(edx_2 - 4) = xmm0_28 - xmm1_9
                *ebx_9 = xmm2_14 f- *result
                float xmm0_32 = *result
                result += edx << 2
                ebx_9 += eax_46
                *edx_2 = xmm0_32 + xmm2_14
                edx_2 += eax_46
                i_1 = var_c
                var_c -= 1
            while (i_1 != 1)
    else
        int32_t ebx_1 = 0
        int32_t var_38_1 = 0
        
        if (result s> 0)
            int32_t* var_3c_1 = esi
            int32_t* var_44_1 = edi + ecx * 0xc
            float* var_40_1 = edi + (ecx << 2)
            void* i_3 = var_c
            void* i_2
            
            do
                int32_t eax_18 = (ebx_1 << 2) + (edx << 1)
                
                if (edx s> 2)
                    float* var_30_1 = &esi[eax_18 + (edx << 1)]
                    int32_t ecx_7 = ebx_1 << 2
                    int32_t* var_24_1 = var_3c_1
                    float* var_34_1 = arg8
                    float* var_18_2 = var_40_1
                    float* var_20_1 = ecx_7 + edi
                    float* var_2c_1 = &esi[ecx_7 + (edx << 1)]
                    float* var_14_2 = edi + ((var_38_1 + (var_8 << 1)) << 2)
                    int32_t* ebx_5 = arg7 - arg8
                    void* edx_1 = arg6 + 4
                    int32_t* var_1c_1 = var_44_1
                    int32_t* ecx_10 = ebx_5
                    int32_t* ebx_6 = &esi[eax_18]
                    int32_t j_1 = ((edx - 3) u>> 1) + 1
                    int32_t j
                    
                    do
                        var_18_2 = &var_18_2[2]
                        ebx_6 -= 8
                        float xmm4_1 = *(edx_1 - 4)
                        float xmm2_3 = *edx_1
                        var_14_2 = &var_14_2[2]
                        var_1c_1 = &var_1c_1[2]
                        var_20_1 = &var_20_1[2]
                        var_24_1 = &var_24_1[2]
                        float xmm5_3 = xmm4_1 * var_18_2[-1] + *var_18_2 * xmm2_3
                        var_2c_1 = &var_2c_1[2]
                        var_30_1 -= 8
                        float xmm4_3 = xmm4_1 * *var_18_2 - xmm2_3 * var_18_2[-1]
                        float xmm2_5 = *(arg7 - arg6 + edx_1)
                        float xmm3_1 = var_14_2[-1]
                        float xmm7_1 = *(ecx_10 + var_34_1)
                        float xmm4_6 = xmm7_1 * xmm3_1 + xmm2_5 * *var_14_2
                        float xmm7_3 = xmm7_1 * *var_14_2 - xmm2_5 * xmm3_1
                        float xmm2_7 = *(arg8 - arg6 + edx_1)
                        float xmm4_7 = *var_1c_1
                        float xmm6_3 = var_1c_1[-1] f* *var_34_1 + xmm2_7 * xmm4_7
                        float xmm4_9 = xmm4_7 * *var_34_1 - xmm2_7 f* var_1c_1[-1]
                        float xmm1_4 = var_20_1[-1]
                        float xmm3_2 = *var_20_1
                        float xmm2_10 = xmm1_4 + xmm4_6
                        float xmm6_4 = xmm6_3 + xmm5_3
                        float xmm0_14 = xmm6_3 - xmm5_3
                        float xmm1_5 = xmm1_4 - xmm4_6
                        float xmm5_5 = xmm4_9 + xmm4_3
                        float xmm0_16 = xmm4_3 - xmm4_9
                        float xmm4_11 = xmm3_2 + xmm7_3
                        float xmm3_3 = xmm3_2 - xmm7_3
                        var_24_1[-1] = xmm2_10 + xmm6_4
                        *var_24_1 = xmm4_11 + xmm5_5
                        ebx_6[-1] = xmm1_5 - xmm0_16
                        *ebx_6 = xmm0_14 - xmm3_3
                        var_34_1 = &var_34_1[2]
                        ecx_10 = ebx_5
                        var_2c_1[-1] = xmm1_5 + xmm0_16
                        edx_1 += 8
                        j = j_1
                        j_1 -= 1
                        *var_2c_1 = xmm3_3 + xmm0_14
                        var_30_1[-1] = xmm2_10 - xmm6_4
                        *var_30_1 = xmm5_5 - xmm4_11
                    while (j != 1)
                    edx = var_5c
                    esi = arg5
                    edi = arg4
                    ebx_1 = var_38_1
                    ecx = var_8
                
                ebx_1 += edx
                var_3c_1 = &var_3c_1[edx * 4]
                var_40_1 = &var_40_1[edx]
                var_44_1 = &var_44_1[edx]
                i_2 = i_3
                i_3 -= 1
                var_38_1 = ebx_1
            while (i_2 != 1)
            result = var_c
        
        if ((edx.b & 1) == 0)
            goto label_9a350b

return result

// 函数: sub_61d6d0
// 地址: 0x61d6d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_bac450
int32_t result = *esi

if (result == 0xd2 || result == 0xd3)
    float xmm4_1 = 1f
    int32_t xmm5_1 = 0x3f800000
    
    if (result == 0xd2)
        xmm5_1 = (zx.o(0)).d
    else if (result == 0xd3)
        xmm5_1 = 0x3f800000
        xmm4_1 = (zx.o(0)).d
    
    int32_t ebx
    ebx.b = 0xff
    char ecx = 0xff
    
    if (result != 0xd2)
        if (result == 0xd3 && esi[3] == 1)
            ebx.b = 0xff
            ecx = 0
    else if (esi[3] == 1)
        ebx.b = 0
        ecx = 0xff
    
    int32_t edi_1 = arg2
    int32_t edx_1
    
    if (edi_1 s>= 0)
        edx_1 = edi_1
        
        if (edi_1 s> 0x10000)
            edx_1 = 0x10000
    else
        edx_1 = 0
    
    int32_t eax_3
    int16_t edx_2
    edx_2:eax_3 = sx.q((zx.d(ecx) - zx.d(ebx.b)) * edx_1)
    result.b = ((eax_3 + zx.d(edx_2)) s>> 0x10).b + ebx.b
    *(arg1 + 0x7c) = result.b
    result.b = 0
    
    switch (esi[2])
        case 0
            float xmm2_2 = *(arg1 + 0x10) * 0.5f
            float xmm1_2 = *(arg1 + 0x14) * 0.5f
            *(arg1 + 0x1c) = xmm2_2
            *(arg1 + 0x28) = xmm2_2
            *(arg1 + 0x20) = xmm1_2
            *(arg1 + 0x2c) = xmm1_2
        label_61d935:
            result.b = 1
            goto label_61d93e
        case 1
            goto label_61d935
        case 2
            int32_t xmm0_1 = *(arg1 + 0x10)
            *(arg1 + 0x1c) = xmm0_1
            *(arg1 + 0x28) = xmm0_1
            goto label_61d935
        case 3
            int32_t xmm0_2 = *(arg1 + 0x14)
            *(arg1 + 0x20) = xmm0_2
            *(arg1 + 0x2c) = xmm0_2
            goto label_61d935
        case 4
            int32_t xmm1_3 = *(arg1 + 0x10)
            int32_t xmm0_3 = *(arg1 + 0x14)
            *(arg1 + 0x1c) = xmm1_3
            *(arg1 + 0x20) = xmm0_3
            *(arg1 + 0x28) = xmm1_3
            *(arg1 + 0x2c) = xmm0_3
            goto label_61d935
        case 5
            float xmm2_4 = *(arg1 + 0x10) * 0.5f
            float xmm1_5 = *(arg1 + 0x14) * 0.5f
            *(arg1 + 0x1c) = xmm2_4
            *(arg1 + 0x28) = xmm2_4
            *(arg1 + 0x20) = xmm1_5
            *(arg1 + 0x2c) = xmm1_5
        label_61d846:
            
            if (edi_1 s< 0)
                edi_1 = 0
            else if (edi_1 s> 0x10000)
                edi_1 = 0x10000
            
            *(arg1 + 0x38) =
                (xmm4_1 f- xmm5_1) * _mm_cvtepi32_ps(zx.o(edi_1)) * 1.52587891e-05f f+ xmm5_1
        case 6
            float xmm2_6 = *(arg1 + 0x10) * 0.5f
            float xmm1_7 = *(arg1 + 0x14) * 0.5f
            *(arg1 + 0x1c) = xmm2_6
            *(arg1 + 0x28) = xmm2_6
            *(arg1 + 0x20) = xmm1_7
            *(arg1 + 0x2c) = xmm1_7
        label_61d93e:
            int32_t edx_5
            
            if (edi_1 s>= 0)
                edx_5 = edi_1
                
                if (edi_1 s> 0x10000)
                    edx_5 = 0x10000
            else
                edx_5 = 0
            
            *(arg1 + 0x34) =
                (xmm4_1 f- xmm5_1) * _mm_cvtepi32_ps(zx.o(edx_5)) * 1.52587891e-05f f+ xmm5_1
            
            if (result.b != 0)
                goto label_61d846
        case 7
            goto label_61d846
        case 8
            int32_t xmm0_4 = *(arg1 + 0x14)
            *(arg1 + 0x20) = xmm0_4
            *(arg1 + 0x2c) = xmm0_4
            goto label_61d846
        case 9
            goto label_61d93e
        case 0xa
            int32_t xmm0_5 = *(arg1 + 0x10)
            *(arg1 + 0x1c) = xmm0_5
            *(arg1 + 0x28) = xmm0_5
            goto label_61d93e
        case 0xb
            if (esi[4] s< 0)
                esi[4] = 0
            
            float xmm1_8 = *(arg1 + 0x10)
            
            if (not(_mm_cvtepi32_ps(zx.o(esi[4])) f<= xmm1_8))
                esi[4] = int.d(xmm1_8)
            
            if (esi[5] s< 0)
                esi[5] = 0
            
            float xmm1_9 = *(arg1 + 0x14)
            
            if (not(_mm_cvtepi32_ps(zx.o(esi[5])) f<= xmm1_9))
                esi[5] = int.d(xmm1_9)
            
            uint128_t xmm0_10 = zx.o(esi[5])
            float xmm3_1 = *(arg1 + 0x10)
            float xmm2_7 = *(arg1 + 0x14)
            float xmm3_2 = xmm3_1 * _mm_cvtepi32_ps(zx.o(esi[4])) / xmm3_1
            float xmm2_8 = xmm2_7 * _mm_cvtepi32_ps(xmm0_10) / xmm2_7
            *(arg1 + 0x1c) = xmm3_2
            *(arg1 + 0x28) = xmm3_2
            *(arg1 + 0x20) = xmm2_8
            *(arg1 + 0x2c) = xmm2_8
            goto label_61d935

return result

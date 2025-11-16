// 函数: sub_61d9e0
// 地址: 0x61d9e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_bac450
float eax = *edi
int32_t edx

if (eax == 0xd4 || eax == 0xd5 || eax == 0xd6)
    float xmm1_6 = (zx.o(0)).d
    float xmm3_3 = 1f
    *arg1 = data_b0db30
    int32_t var_18_5 = 0
    int32_t var_14_5 = 0x3f000000
    int32_t var_10_6 = 0x3f800000
    int32_t var_14_6 = 0x3f000000
    arg1[1] = (*(arg3 + 0x10)).o
    int32_t var_10_7 = 0x3f800000
    int32_t var_18_6 = *(arg3 + 0x14)
    int32_t var_14_7 = 0x3f000000
    int32_t var_10_8 = 0x3f800000
    arg1[2] = 0.o
    int32_t var_18_7 = *(arg3 + 0x14)
    arg1[3] = (*(arg3 + 0x10)).o
    int32_t eax_13 = *edi
    float xmm4_1
    float xmm6_1
    
    if (eax_13 == 0xd4)
        float xmm2_5 = _mm_cvtepi32_ps(zx.o(arg4))
        
        if (0.5f <= xmm2_5 * 1.52587891e-05f)
            float xmm4_2 = xmm2_5
            
            if (not(32768f <= xmm4_2))
                xmm4_2 = 32768f
            else if (not(xmm4_2 <= 65536f))
                xmm4_2 = 65536f
            
            xmm4_1 = (xmm4_2 - 32768f) * 0.999000013f * 3.05175781e-05f + 0.00100000005f
            xmm6_1 = xmm4_1
        else
            if (not(0 f<= xmm2_5))
                xmm2_5 = (zx.o(0)).d
            else if (not(xmm2_5 <= 32768f))
                xmm2_5 = 32768f
            
            xmm4_1 = 1f - (xmm2_5 - 0f) * 0.999000013f * 3.05175781e-05f
            xmm6_1 = xmm4_1
    else if (eax_13 != 0xd5)
        if (eax_13 == 0xd6)
            float ecx_13 = arg4
            float xmm0_28 = _mm_cvtepi32_ps(zx.o(ecx_13))
            
            if (not(0 f<= xmm0_28))
                xmm0_28 = (zx.o(0)).d
            else if (not(xmm0_28 <= 65536f))
                xmm0_28 = 65536f
            
            int32_t var_2c_4 = 0
            arg4 = 1f - (xmm0_28 - 0f) * 0.666999996f * 1.52587891e-05f
            xmm3_3 = 1f
            *(arg3 + 0x7c) = sub_61f700(eax_13, edx, ecx_13, 0xff, ecx_13.b)
            xmm1_6 = (zx.o(0)).d
        
        xmm6_1 = arg4
        xmm4_1 = arg4
    else
        float eax_14 = arg4
        float xmm4_7 = _mm_cvtepi32_ps(zx.o(eax_14))
        
        if (not(0 f<= xmm4_7))
            xmm4_7 = (zx.o(0)).d
        else if (not(xmm4_7 <= 65536f))
            xmm4_7 = 65536f
        
        xmm4_1 = (xmm4_7 - 0f) * 0.666999996f * 1.52587891e-05f + 0.333000004f
        xmm6_1 = xmm4_1
        
        if (eax_14 s< 0)
            eax_14 = 0f
        else if (eax_14 s> 0x10000)
            eax_14 = 9.18354962e-41f
        
        int32_t eax_16
        int16_t edx_5
        edx_5:eax_16 = sx.q(eax_14 i* 0xff)
        *(arg3 + 0x7c) = ((eax_16 + zx.d(edx_5)) s>> 0x10).b
    
    float xmm7_1 = (zx.o(0)).d
    float xmm5_1 = 1f
    
    switch (edi[2])
        case 0
            float xmm5_3 = xmm4_1 * 0.5f
            float xmm3_6 = xmm6_1 * 0.5f
            xmm7_1 = 0.5f - xmm5_3
            xmm5_1 = xmm5_3 + 0.5f
            xmm1_6 = 0.5f - xmm3_6
            xmm3_3 = xmm3_6 + 0.5f
        case 1
            xmm7_1 = (zx.o(0)).d
            xmm5_1 = xmm4_1
            xmm3_3 = xmm6_1
        case 2
            xmm5_1 = 1f
            xmm7_1 = 1f - xmm4_1
            xmm3_3 = xmm6_1
        case 3
            xmm7_1 = (zx.o(0)).d
            xmm5_1 = xmm4_1
            xmm1_6 = 1f - xmm6_1
        case 4
            xmm7_1 = 1f - xmm4_1
            xmm5_1 = 1f
            xmm1_6 = 1f - xmm6_1
        case 5
            if (not(0 f<= xmm6_1))
                xmm6_1 = (zx.o(0)).d
            else if (not(xmm6_1 <= 1f))
                xmm6_1 = 1f
            
            xmm7_1 = (zx.o(0)).d
            xmm5_1 = 1f
            float xmm6_4 = (xmm6_1 - 0f) * 0.50999999f + 0.49000001f
            xmm1_6 = 1f - xmm6_4
            xmm3_3 = xmm6_4
        case 6
            float xmm5_4 = xmm4_1
            
            if (not(0f <= xmm4_1))
                xmm5_4 = (zx.o(0)).d
            else if (not(xmm4_1 <= 1f))
                xmm5_4 = 1f
            
            xmm5_1 = (xmm5_4 - 0f) * 0.50999999f + 0.49000001f
            xmm7_1 = 1f - xmm5_1
        case 7
            xmm5_1 = 1f
            xmm7_1 = (zx.o(0)).d
            xmm3_3 = xmm6_1
        case 8
            xmm7_1 = (zx.o(0)).d
            xmm5_1 = 1f
            xmm1_6 = 1f - xmm6_1
        case 9
            xmm7_1 = (zx.o(0)).d
            xmm5_1 = xmm4_1
        case 0xa
            xmm5_1 = 1f
            xmm7_1 = 1f - xmm4_1
        case 0xb
            if (edi[4] s< 0)
                edi[4] = 0
            
            float xmm1_7 = *(arg3 + 0x10)
            
            if (not(_mm_cvtepi32_ps(zx.o(edi[4])) f<= xmm1_7))
                edi[4] = int.d(xmm1_7)
            
            if (edi[5] s< 0)
                edi[5] = 0
            
            float xmm1_8 = *(arg3 + 0x14)
            
            if (not(_mm_cvtepi32_ps(zx.o(edi[5])) f<= xmm1_8))
                edi[5] = int.d(xmm1_8)
            
            uint128_t xmm2_9 = zx.o(edi[5])
            float xmm1_10 = _mm_cvtepi32_ps(zx.o(edi[4]))
            float xmm2_10 = _mm_cvtepi32_ps(xmm2_9)
            float xmm1_11 = xmm1_10 f/ *(arg3 + 0x10)
            float xmm2_11 = xmm2_10 f/ *(arg3 + 0x14)
            float xmm5_7 = 1f - xmm1_11
            xmm5_1 = xmm5_7 * xmm4_1 + xmm1_11
            xmm7_1 = xmm1_11 - (1f - xmm5_7) * xmm4_1
            float xmm0_38 = 1f - xmm2_11
            xmm1_6 = xmm2_11 - (1f - xmm0_38) * xmm6_1
            xmm3_3 = xmm0_38 * xmm6_1 + xmm2_11
    
    *arg2 = xmm7_1
    arg2[1] = xmm1_6
    arg2[2] = xmm5_1
    arg2[3] = xmm1_6
    arg2[4] = xmm7_1
    arg2[5] = xmm3_3
    arg2[6] = xmm5_1
    eax = xmm3_3
    arg2[7] = eax
else if (eax == 0xd7)
    int32_t* ecx_1 = arg2
    *ecx_1 = 0
    ecx_1[1] = 0
    ecx_1[2] = 0x3f800000
    ecx_1[3] = 0
    ecx_1[4] = 0
    ecx_1[5] = 0x3f800000
    ecx_1[6] = 0x3f800000
    ecx_1[7] = 0x3f800000
    int32_t eax_1 = edi[2]
    char var_8 = 0xff
    arg2.b = 0xff
    
    if (eax_1 == 0)
        arg2.b = 0xff
        var_8 = 0xff
    else if (eax_1 == 1)
        var_8 = 0
        arg2.b = 0xff
    else if (eax_1 == 2)
        arg2.b = 0
        var_8 = 0xff
    
    int32_t* var_2c_1 = arg2
    char eax_2 = sub_61f700(eax_1, edx, arg4, var_8, ecx_1.b)
    float xmm2_1 = *(arg3 + 0x10)
    *(arg3 + 0x7c) = eax_2
    int32_t eax_3 = edi[4]
    int32_t esi_1 = edi[5]
    
    if (eax_3 s< 0)
        eax_3 = 0
    
    int32_t ebx = edi[6]
    int32_t ecx_3 = edi[7]
    
    if (not(_mm_cvtepi32_ps(zx.o(eax_3)) f<= xmm2_1))
        eax_3 = int.d(xmm2_1)
    
    float xmm1_1 = *(arg3 + 0x14)
    
    if (esi_1 s< 0)
        esi_1 = 0
    
    if (not(_mm_cvtepi32_ps(zx.o(esi_1)) f<= xmm1_1))
        esi_1 = int.d(xmm1_1)
    
    if (ebx s< 0)
        ebx = 0
    
    if (not(_mm_cvtepi32_ps(zx.o(ebx)) f<= xmm2_1))
        ebx = int.d(xmm2_1)
    
    if (ecx_3 s< 0)
        ecx_3 = 0
    
    arg2 = ecx_3
    
    if (not(_mm_cvtepi32_ps(zx.o(ecx_3)) f<= xmm1_1))
        ecx_3 = int.d(xmm1_1)
        arg2 = ecx_3
    
    if (eax_3 s>= ebx)
        if (eax_3 != ebx)
            int32_t eax_4 = eax_3 ^ ebx
            ebx ^= eax_4
            eax_3 = eax_4 ^ ebx
        else if (_mm_cvtepi32_ps(zx.o(eax_3 + 1)) f< xmm2_1)
            ebx = eax_3 + 1
        else
            eax_3 = ebx - 1
    
    if (esi_1 s>= ecx_3)
        if (esi_1 != ecx_3)
            int32_t esi_2 = esi_1 ^ ecx_3
            int32_t ecx_4 = ecx_3 ^ esi_2
            arg2 = ecx_4
            esi_1 = esi_2 ^ ecx_4
        else if (_mm_cvtepi32_ps(zx.o(esi_1 + 1)) f< xmm1_1)
            arg2 = esi_1 + 1
        else
            esi_1 = ecx_3 - 1
    
    int32_t edi_1 = edi[3]
    var_8.d = 0
    int32_t var_c = 0
    int32_t ecx_5 = int.d(xmm2_1)
    int32_t* edx_4 = int.d(xmm1_1)
    int32_t eax_7
    
    if (edi_1 == 0)
        int32_t eax_5 = sub_5b08c0(eax_3, 0, arg4, eax_3, 0x10000, edi_1)
        var_8.d = eax_5
        int32_t eax_6 = sub_5b08c0(eax_5, 0, arg4, esi_1, 0x10000, 0)
        var_c = eax_6
        eax_7 = sub_5b08c0(eax_6, 0, arg4, ebx, 0x10000, ecx_5)
        int32_t var_54_1 = 0x10000
        ecx_5 = eax_7
        edx_4 = sub_5b08c0(eax_7, 0, arg4, arg2, 0x10000, edx_4)
    else if (edi_1 == 1)
        int32_t eax_8 = sub_5b08c0(eax_3, 0, arg4, 0, 0x10000, eax_3)
        var_8.d = eax_8
        int32_t eax_9 = sub_5b08c0(eax_8, 0, arg4, 0, 0x10000, esi_1)
        var_c = eax_9
        eax_7 = sub_5b08c0(eax_9, 0, arg4, ecx_5, 0x10000, ebx)
        int32_t var_54_2 = 0x10000
        ecx_5 = eax_7
        edx_4 = sub_5b08c0(eax_7, 0, arg4, edx_4, 0x10000, arg2)
    int32_t xmm1_3 = _mm_cvtepi32_ps(zx.o(var_c))
    int32_t var_14_1 = 0x3f000000
    int32_t var_10_2 = 0x3f800000
    int32_t xmm3_2 = _mm_cvtepi32_ps(zx.o(var_8.d))
    int32_t var_18_1 = xmm1_3
    int32_t var_14_2 = 0x3f000000
    int32_t var_18_2 = xmm1_3
    int32_t xmm2_3 = _mm_cvtepi32_ps(zx.o(ecx_5))
    int32_t var_10_3 = 0x3f800000
    int32_t xmm1_5 = _mm_cvtepi32_ps(zx.o(edx_4))
    *arg1 = xmm3_2.o
    int32_t var_14_3 = 0x3f000000
    int32_t var_18_3 = xmm1_5
    int32_t var_10_4 = 0x3f800000
    arg1[1] = xmm2_3.o
    int32_t var_14_4 = 0x3f000000
    arg1[2] = xmm3_2.o
    int32_t var_10_5 = 0x3f800000
    int32_t var_18_4 = xmm1_5
    arg1[3] = xmm2_3.o
    return arg1
return eax

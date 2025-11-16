// 函数: sub_61bc00
// 地址: 0x61bc00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm4_1 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t* ecx = data_bac450
float xmm4_2 = xmm4_1 * 1.52587891e-05f
*(arg2 + 0x100) = xmm4_2
*(arg2 + 0x104) = xmm4_2
*(arg2 + 0x108) = xmm4_2
*(arg2 + 0x10c) = xmm4_2
int32_t eax = *ecx
int32_t result
uint128_t xmm0_1
float xmm1_1
uint128_t xmm2_1
uint128_t xmm3_1

if (eax == 0xdc)
    if (ecx[3] s<= 0)
        ecx[3] = 1
    
    if (ecx[2] != 0)
        result = *(arg1 + 0x1938)
        *(arg2 + 0xfc) = result
        xmm2_1 = zx.o(ecx[4])
        xmm3_1 = zx.o(ecx[5])
        xmm0_1 = zx.o(ecx[3])
        *(arg2 + 0x10c) = xmm4_2
    label_61bd45:
        xmm1_1 = *(arg2 + 0x10)
        goto label_61bd4a
    
    result = *(arg1 + 0x193c)
    xmm1_1 = *(arg2 + 0x14)
    *(arg2 + 0xfc) = result
    xmm2_1 = zx.o(ecx[4])
    xmm3_1 = zx.o(ecx[5])
    xmm0_1 = zx.o(ecx[3])
    *(arg2 + 0x10c) = xmm4_2
label_61bd4a:
    float xmm0_2 = _mm_cvtepi32_ps(xmm0_1)
    int32_t xmm3_2 = _mm_cvtepi32_ps(xmm3_1)
    int32_t xmm2_2 = _mm_cvtepi32_ps(xmm2_1)
    *(arg2 + 0x108) = xmm3_2
    *(arg2 + 0x104) = xmm2_2
    *(arg2 + 0x100) = xmm1_1 / xmm0_2
else
    result = eax - 0xdd
    
    if (eax == 0xdd)
        if (ecx[3] s<= result)
            ecx[3] = 1
        
        if (ecx[2] != 0)
            result = *(arg1 + 0x1940)
            *(arg2 + 0xfc) = result
            float xmm5_2
            
            if (ecx[6] == 0)
                xmm5_2 = xmm4_2
            else
                xmm5_2 = 1f - xmm4_2
            
            xmm2_1 = zx.o(ecx[4])
            xmm3_1 = zx.o(ecx[5])
            xmm0_1 = zx.o(ecx[3])
            *(arg2 + 0x10c) = xmm5_2
            goto label_61bd45
        
        result = *(arg1 + 0x1944)
        *(arg2 + 0xfc) = result
        float xmm5_1
        
        if (ecx[6] == 0)
            xmm5_1 = xmm4_2
        else
            xmm5_1 = 1f - xmm4_2
        
        xmm2_1 = zx.o(ecx[4])
        xmm3_1 = zx.o(ecx[5])
        xmm0_1 = zx.o(ecx[3])
        xmm1_1 = *(arg2 + 0x14)
        *(arg2 + 0x10c) = xmm5_1
        goto label_61bd4a
return result

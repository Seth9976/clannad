// 函数: sub_9a8c40
// 地址: 0x9a8c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx_1 = arg2 - arg3
int32_t edi = arg4
int32_t esi_1 = arg5 - edi
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(esi_1)
int32_t temp0 = divs.dp.d(sx.q(esi_1), ebx_1)
int32_t eax_8 = temp0 - 1

if (esi_1 s>= 0)
    eax_8 = temp0 + 1

int32_t esi_2 = 0
float xmm1 = *(arg6 + (arg3 << 2))
int32_t ecx = int.d(xmm1 * 7.31428576f + 1023.5f)

if (ecx s> 0x3ff)
    ecx = 0x3ff
else if (ecx s< 0)
    ecx = 0

int32_t var_8 = 1
int32_t eax_12
int32_t edx_3
edx_3:eax_12 = sx.q(temp0 * ebx_1)
int32_t edx_5 = edi - ecx
void* eax_15 = arg8
float xmm5 = *(eax_15 + 0x458)
arg5 = edx_5 * edx_5
int32_t edx_8 = arg5

if (not(arg7[arg3] + xmm5 < xmm1))
    float xmm0_5 = *(eax_15 + 0x448)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(edi))
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx))
    
    if (not(xmm2_2 f<= xmm0_5 + xmm1_2) || xmm1_2 f- *(eax_15 + 0x44c) f> xmm2_2)
        return 1

int32_t ebx_3 = arg3 + 1

if (ebx_3 s< arg2)
    int32_t* edx_9 = arg6 + (ebx_3 << 2)
    
    do
        esi_2 += (eax_2 ^ edx) - edx - ((eax_12 ^ edx_3) - edx_3)
        
        if (esi_2 s< ebx_1)
            edi += temp0
        else
            esi_2 -= ebx_1
            edi += eax_8
        
        float xmm1_4 = *edx_9
        int32_t ecx_1 = int.d(xmm1_4 * 7.31428576f + 1023.5f)
        
        if (ecx_1 s> 0x3ff)
            ecx_1 = 0x3ff
        else if (ecx_1 s< 0)
            ecx_1 = 0
        
        var_8 += 1
        int32_t eax_20 = edi - ecx_1
        arg5 += eax_20 * eax_20
        eax_15 = arg8
        
        if (not(*(arg7 - arg6 + edx_9) + xmm5 < xmm1_4) && ecx_1 != 0)
            float xmm1_6 = _mm_cvtepi32_ps(zx.o(edi))
            float xmm0_13 = xmm1_6 f+ *(eax_15 + 0x448)
            int32_t xmm2_4 = _mm_cvtepi32_ps(zx.o(ecx_1))
            
            if (xmm2_4 f> xmm0_13)
                return 1
            
            if (xmm1_6 f- *(eax_15 + 0x44c) f> xmm2_4)
                return 1
        
        ebx_3 += 1
        edx_9 = &edx_9[1]
    while (ebx_3 s< arg2)
    
    edx_8 = arg5

float xmm0_14 = *(eax_15 + 0x448)
float xmm2_6 = _mm_cvtepi32_ps(zx.o(var_8))
int32_t xmm1_8 = *(eax_15 + 0x450)

if (xmm0_14 * xmm0_14 / xmm2_6 f<= xmm1_8)
    float xmm0_17 = *(eax_15 + 0x44c)
    
    if (not(xmm0_17 * xmm0_17 / xmm2_6 f> xmm1_8))
        int32_t result
        result.b = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(edx_8), var_8))) f> xmm1_8
        return result

return 0

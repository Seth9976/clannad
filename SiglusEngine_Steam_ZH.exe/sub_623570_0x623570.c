// 函数: sub_623570
// 地址: 0x623570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (*(arg1 + 0x4a680) != 0 && *(arg1 + 0x4a681) != 0 && *(arg1 + 0x4ae8d) == 0)
    if (sub_621890() != 0)
        sub_621480()
        void* eax_2
        eax_2.b = 1
        return eax_2
    
    double xmm5_1 = *(arg1 + 0x4a710)
    double xmm3_1 = *(arg1 + 0x4a718)
    double xmm4_1 = *(arg1 + 0x4a720)
    char edx = *(data_bac4a0 + 0xcc)
    double xmm2_1 = *(arg1 + 0x4a728)
    void* edi_1 = data_bac484
    int32_t ebx_1 = data_bac498
    bool ecx
    
    if (edx != 0)
        ecx = false
    else if (*(edi_1 + 0x138) == 0)
        ecx = *(ebx_1 + 2) == 0
    else
        ecx = false
    
    void* eax_4 = data_bac4c8
    double xmm1_1 = 0.5
    
    if (*(eax_4 + 0xc90) == 1)
        if (ecx != 0)
            eax_4 = data_bac458
        
        if (ecx == 0 || *(eax_4 + 0x3b3) == 0)
            xmm5_1 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x4b034))) * xmm1_1 + xmm5_1
    
    if (edx != 0)
        ecx = false
    else if (*(edi_1 + 0x138) == 0)
        ecx = *(ebx_1 + 2) == 0
    else
        ecx = false
    
    if (sub_635790(eax_4, 0x27, ecx, 0, 0) != 0)
        xmm3_1 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x4b034))) * xmm1_1 + xmm3_1
    
    void* eax_6 = data_bac4a0
    bool ecx_1
    
    if (*(eax_6 + 0xcc) != 0)
        ecx_1 = false
    else if (*(edi_1 + 0x138) == 0)
        ecx_1 = *(ebx_1 + 2) == 0
    else
        ecx_1 = false
    
    if (sub_635790(eax_6, 0x26, ecx_1, 0, 0) != 0)
        xmm4_1 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x4b034))) * xmm1_1 + xmm4_1
    
    void* eax_8 = data_bac4a0
    bool ecx_2
    
    if (*(eax_8 + 0xcc) != 0)
        ecx_2 = false
    else if (*(edi_1 + 0x138) == 0)
        ecx_2 = *(ebx_1 + 2) == 0
    else
        ecx_2 = false
    
    if (sub_635790(eax_8, 0x28, ecx_2, 0, 0) != 0)
        xmm2_1 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x4b034))) * xmm1_1 + xmm2_1
    
    eax = int.d(xmm5_1)
    int32_t edx_1 = int.d(xmm3_1)
    POINT point
    point.y = eax
    int32_t ebx_2 = int.d(xmm4_1)
    double xmm5_2 = xmm5_1 - _mm_cvtepi32_pd(zx.q(eax))
    double xmm0_20 = _mm_cvtepi32_pd(zx.q(edx_1))
    *(arg1 + 0x4a710) = xmm5_2
    int32_t edi_2 = int.d(xmm2_1)
    *(arg1 + 0x4a718) = xmm3_1 - xmm0_20
    double xmm4_2 = xmm4_1 - _mm_cvtepi32_pd(zx.q(ebx_2))
    double xmm0_24 = _mm_cvtepi32_pd(zx.q(edi_2))
    *(arg1 + 0x4a720) = xmm4_2
    *(arg1 + 0x4a728) = xmm2_1 - xmm0_24
    
    if (eax != 0 || edx_1 != 0 || ebx_2 != 0 || edi_2 != 0)
        int32_t* eax_10 = data_bac42c
        int32_t X = *eax_10 + edx_1 - point.y
        int32_t Y = eax_10[1] + edi_2 - ebx_2
        point.x = X
        point.y = Y
        SetCursorPos(X, Y)
        GetCursorPos(&point)
        int32_t* ecx_4 = data_bac42c
        *ecx_4 = point.x
        ecx_4[1] = point.y

eax.b = 1
return eax

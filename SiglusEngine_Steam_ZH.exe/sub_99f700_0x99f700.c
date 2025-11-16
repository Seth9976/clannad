// 函数: sub_99f700
// 地址: 0x99f700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
char* eax = *(arg3 + 4)
int32_t i_1 = arg9
__alloca_probe_16(i_1 << 2)
char* eax_2 = eax
int32_t __saved_edi
int32_t* var_20 = &__saved_edi

if (*(eax_2 + 0x1f4) != 0)
    i_1 = *(eax_2 + 0x1f8) - arg8
    
    if (i_1 s> arg9)
        i_1 = arg9

int32_t edx = arg7
int32_t i_3 = 0
int32_t xmm0 = (zx.o(0)).d
int32_t var_18 = 0
int32_t i_2 = 0
int32_t mxcsr
int16_t x87control

if (i_1 s> 0)
    eax_2 = arg5
    void* ecx_1 = edx - eax_2
    i_2 = i_1
    char* esi_1 = eax_2
    void* ecx_3 = arg6 - eax_2
    void* ecx_5 = arg4 - eax_2
    void* ecx_7 = arg10 - eax_2
    void* ecx_8 = ecx_1
    int32_t i
    
    do
        if (edx == 0 || *(ecx_8 + esi_1) == 0)
            bool cond:0_1 = 0f f<= *(ecx_5 + esi_1)
            double xmm0_3 = _mm_cvtps_pd(*esi_1 f/ *(ecx_3 + esi_1))
            
            if (cond:0_1)
                int16_t x87control_2
                double xmm0_8
                x87control_2, xmm0_8 = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_3)
                long double st0_2
                st0_2, x87control =
                    sub_74c3d0(mxcsr, x87control_2, fconvert.d(fconvert.t(xmm0_8 + 0.5)))
                eax_2 = sub_9ab1b0(st0_2)
            else
                int16_t x87control_1
                double xmm0_4
                x87control_1, xmm0_4 = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_3)
                long double st0_1
                st0_1, x87control =
                    sub_74c3d0(mxcsr, x87control_1, fconvert.d(fconvert.t(xmm0_4 + 0.5)))
                eax_2 = int.d(__xorpd_xmmxuq_memxuq(zx.o(fconvert.d(st0_1)), data_b0dbd0.o))
            
            edx = arg7
            *(ecx_7 + esi_1) = eax_2
            ecx_8 = ecx_1
        
        esi_1 = &esi_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    xmm0 = 0
    i_3 = i_2

if (i_3 s< arg9)
    int32_t edi_2 = edx - arg4
    int32_t* edi_4 = arg4 - arg10
    int32_t* esi_2 = arg10 + (i_3 << 2)
    float* edi_6 = arg6 - arg10
    void* var_1c_3 = arg5 - arg10
    int32_t edi_8 = 0
    
    do
        if (edx != 0)
            i_3 = i_2
        
        if (edx != 0 && *(edi_4 + edi_2 + esi_2) != 0)
            eax_2 = var_20
        else
            void* edx_2 = var_1c_3 + esi_2
            float xmm1_2[0x2] = *edx_2 f/ *(edi_6 + esi_2)
            
            if (0.25f f<= xmm1_2 || (arg7 != 0 && i_3 s< arg2 - arg8))
                double xmm0_10 = _mm_cvtps_pd(xmm1_2)
                int32_t eax_12
                
                if (0 f<= *(edi_4 + esi_2))
                    int16_t x87control_4
                    double xmm0_15
                    x87control_4, xmm0_15 = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_10)
                    long double st0_4
                    st0_4, x87control =
                        sub_74c3d0(mxcsr, x87control_4, fconvert.d(fconvert.t(xmm0_15 + 0.5)))
                    eax_12 = sub_9ab1b0(st0_4)
                else
                    int16_t x87control_3
                    double xmm0_11
                    x87control_3, xmm0_11 = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_10)
                    long double st0_3
                    st0_3, x87control =
                        sub_74c3d0(mxcsr, x87control_3, fconvert.d(fconvert.t(xmm0_11 + 0.5)))
                    eax_12 = int.d(__xorpd_xmmxuq_memxuq(zx.o(fconvert.d(st0_3)), data_b0dbd0.o))
                
                i_3 = i_2
                edx = arg7
                *esi_2 = eax_12
                *(var_1c_3 + esi_2) = _mm_cvtepi32_ps(zx.o(eax_12 * eax_12)) f* *(edi_6 + esi_2)
                xmm0 = var_18
                eax_2 = var_20
            else
                eax_2 = var_20
                xmm0 = xmm0 f+ xmm1_2
                *(eax_2 + (edi_8 << 2)) = edx_2
                edi_8 += 1
                edx = arg7
                var_18 = xmm0
        
        i_3 += 1
        esi_2 = &esi_2[1]
        i_2 = i_3
    while (i_3 s< arg9)
    
    if (edi_8 != 0)
        int32_t esi_3 = edi_8
        eax_2 = sub_761c30(eax_2, esi_3, 0x99fae000000004)
        int32_t edx_3 = 0
        
        if (esi_3 s> 0)
            int128_t xmm1_3 = var_18
            int32_t eax_24
            
            do
                int32_t ecx_12 = (var_20[edx_3] - arg5) s>> 2
                
                if (fconvert.d(xmm1_3) f< *(eax + 0x200))
                    eax_24 = arg10
                    *(eax_24 + (ecx_12 << 2)) = 0
                    *(arg5 + (ecx_12 << 2)) = 0
                else
                    xmm1_3 = xmm1_3 f- 1f
                    *(arg10 + (ecx_12 << 2)) =
                        int.d(fconvert.t((*(arg4 + (ecx_12 << 2)) & 0xbf800000) | 0x3f800000))
                    esi_3 = edi_8
                    eax_24 = *(arg6 + (ecx_12 << 2))
                    *(arg5 + (ecx_12 << 2)) = eax_24
                
                edx_3 += 1
            while (edx_3 s< esi_3)
            
            return eax_24

return eax_2

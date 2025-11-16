// 函数: sub_9a3850
// 地址: 0x9a3850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t eax = 0xffffffff
int32_t var_18 = arg3
int32_t i = arg3
int32_t edi = 0

while (true)
    int32_t eax_1 = eax + 1
    
    if (eax_1 s>= 4)
        ebx += 2
    else
        ebx = *((eax_1 << 2) + &data_ae4ba0)
    
    int32_t i_1 = divs.dp.d(sx.q(arg3), ebx)
    eax = eax_1
    int32_t i_2 = i_1
    bool cond:0_1 = arg3 != i_1 * ebx
    arg3 = i
    
    if (not(cond:0_1))
        int32_t* eax_7 = arg4 + (edi << 2) + 4
        
        do
            edi += 1
            i = i_1
            eax_7[1] = ebx
            void* result
            
            if (ebx != 2 || edi == 1)
                result = arg4
            else
                if (edi s> 1)
                    int32_t* edx_3 = &eax_7[1]
                    int32_t j_3 = edi - 1
                    int32_t j
                    
                    do
                        int32_t eax_9 = edx_3[-1]
                        edx_3 = &edx_3[-1]
                        edx_3[1] = eax_9
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    i_1 = i_2
                
                result = arg4
                *(result + 8) = 2
            
            if (i_1 == 1)
                int32_t edx_6 = var_18
                *(result + 4) = edi
                *result = edx_6
                arg4 = nullptr
                int32_t j_2 = edi - 1
                int32_t var_c_1 = 1
                float xmm2 = 6.28318548f / _mm_cvtepi32_ps(zx.o(edx_6))
                float var_2c = xmm2
                
                if (edi - 1 s> 0)
                    result += 8
                    void* result_1 = result
                    int32_t edi_1 = 1
                    int32_t j_1
                    
                    do
                        int32_t ecx_3 = *result
                        int32_t esi_1 = 0
                        int32_t ebx_2 = ecx_3 * edi_1
                        int32_t k_1 = ecx_3 - 1
                        int32_t k_2 = k_1
                        int32_t edx_8 = divs.dp.d(sx.q(edx_6), ebx_2)
                        int32_t var_34_1 = edx_8
                        
                        if (k_1 s> 0)
                            int32_t eax_17 = edx_8 << 2
                            float* ebx_4 = arg2 + (arg4 << 2)
                            arg4 += k_1 * edx_8
                            int32_t eax_21 = edx_8 << 2
                            int32_t k
                            
                            do
                                esi_1 += edi_1
                                float xmm0_2 = (zx.o(0)).d
                                float xmm1_3 = _mm_cvtepi32_ps(zx.o(esi_1)) * xmm2
                                float var_28_1 = xmm1_3
                                
                                if (edx_8 s> 2)
                                    float* edi_2 = ebx_4
                                    int32_t esi_4 = ((edx_8 - 3) u>> 1) + 1
                                    int32_t temp7_1
                                    
                                    do
                                        float xmm0_3 = xmm0_2 + 1f
                                        float xmm0_4[0x2] = xmm0_3 * xmm1_3
                                        int32_t mxcsr
                                        int16_t x87control
                                        int16_t x87control_1
                                        double xmm0_6
                                        x87control_1, xmm0_6 = __libm_sse2_cos_precise(mxcsr, 
                                            x87control, _mm_cvtps_pd(xmm0_4))
                                        *edi_2 = fconvert.s(xmm0_6)
                                        double xmm0_10
                                        x87control, xmm0_10 = __libm_sse2_sin_precise(mxcsr, 
                                            x87control_1, _mm_cvtps_pd(xmm0_4))
                                        xmm1_3 = var_28_1
                                        edi_2[1] = fconvert.s(xmm0_10)
                                        edi_2 = &edi_2[2]
                                        xmm0_2 = xmm0_3
                                        temp7_1 = esi_4
                                        esi_4 -= 1
                                    while (temp7_1 != 1)
                                    xmm2 = var_2c
                                    k_1 = k_2
                                    edx_8 = var_34_1
                                    edi_1 = var_c_1
                                    eax_21 = eax_17
                                
                                ebx_4 += eax_21
                                k = k_1
                                k_1 -= 1
                                k_2 = k_1
                            while (k != 1)
                        
                        edi_1 = ebx_2
                        edx_6 = var_18
                        result = result_1 + 4
                        j_1 = j_2
                        j_2 -= 1
                        var_c_1 = edi_1
                        result_1 = result
                    while (j_1 != 1)
                
                return result
            
            int32_t i_3 = divs.dp.d(sx.q(i_1), ebx)
            i_1 = i_3
            i_2 = i_3
            eax_7 = &eax_7[1]
        while (i == i_1 * ebx)
        
        arg3 = i
        eax = eax_1

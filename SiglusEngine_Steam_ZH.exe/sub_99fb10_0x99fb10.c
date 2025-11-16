// 函数: sub_99fb10
// 地址: 0x99fb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
float* edi = arg5
int32_t edx = 0
float* result = arg3[1]
int32_t ecx = *arg3
float xmm3 = arg3[0xc]
float xmm5 = result[edi + 3]

if (ecx s> 0)
    int32_t* ecx_1 = arg4
    arg6 -= ecx_1
    arg8 -= ecx_1
    double xmm4_1 = 1.0
    arg5 = arg2 - ecx_1
    int32_t* ebx_3 = arg7 - ecx_1
    
    do
        float xmm0_2 = *(*(arg3[3] + (edi << 2)) + (edx << 2)) f+ *(arg5 + ecx_1)
        float xmm1_1 = *(arg3[1] + 0x6c)
        
        if (not(xmm0_2 <= xmm1_1))
            xmm0_2 = xmm1_1
        
        float xmm1_3 = *ecx_1 + xmm5
        
        if (not(xmm0_2 <= xmm1_3))
            xmm1_3 = xmm0_2
        
        result = arg6
        *(result + ecx_1) = xmm1_3
        
        if (edi == 1)
            result = arg8
            float xmm0_3 = xmm0_2 f- *(result + ecx_1)
            double xmm1_4 = _mm_cvtps_pd(xmm0_3 - -17.2000008f)
            double xmm0_5 = fconvert.d(xmm3)
            float xmm1_7
            
            if (xmm0_3 <= -17.2000008f)
                xmm1_7 = _mm_cvtpd_ps(xmm4_1 - xmm1_4 * 0.00029999999999999997 * xmm0_5)
            else
                xmm1_7 = _mm_cvtpd_ps(xmm4_1 - xmm1_4 * 0.0050000000000000001 * xmm0_5)
                
                if (not(0 f<= xmm1_7))
                    xmm1_7 = 9.99999975e-05f
            
            *(ebx_3 + ecx_1) = *(ebx_3 + ecx_1) * xmm1_7
        
        edx += 1
        ecx_1 = &ecx_1[1]
    while (edx s< ecx)

return result

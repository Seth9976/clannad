// 函数: sub_99d1f0
// 地址: 0x99d1f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t var_14 = 0
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t eax = arg3[3]

if (eax != 1 && eax != 2)
    return 0

int32_t ecx = arg3[4]
double xmm0_1[0x2] = _mm_cvtepi32_pd(zx.q(ecx) & 0x1fffff)

if (ecx s< 0)
    xmm0_1 = __xorpd_xmmxuq_memxuq(xmm0_1, data_b0dbd0.o)

sub_76097a(arg2, xmm0_1.q, (ecx s>> 0x15 & 0x3ff) - 0x314)
int32_t ecx_1 = arg3[5]
float var_20 = fconvert.s(arg4)
double xmm0_3[0x2] = _mm_cvtepi32_pd(zx.q(ecx_1) & 0x1fffff)

if (ecx_1 s< 0)
    xmm0_3 = __xorpd_xmmxuq_memxuq(xmm0_3, data_b0dbd0.o)

int32_t ecx_2
int32_t edx
edx, ecx_2 = sub_76097a(arg2, xmm0_3.q, (ecx_1 s>> 0x15 & 0x3ff) - 0x314)
int32_t esi_1 = *arg3
int32_t eax_15 = esi_1 * arg2
float var_24 = fconvert.s(arg4)
int32_t var_3c_2 = 4
int64_t var_44_2
var_44_2:4.d = eax_15
int32_t result = sub_74c590(eax_15, edx, ecx_2)
int32_t eax_17 = arg3[3]

if (eax_17 == 1)
    int32_t eax_32 = sub_99d4d0(arg3)
    int32_t edx_3 = 0
    int32_t var_14_1 = 0
    int32_t eax_34 = arg3[1]
    
    if (eax_34 s> 0)
        int32_t* ecx_9 = arg5
        int32_t eax_35 = 0
        int32_t edi_1 = eax_34
        int32_t var_10_2 = 0
        int32_t* var_18_2 = ecx_9
        
        do
            if (ecx_9 != 0)
                eax_35 = var_10_2
            
            if (ecx_9 == 0 || *(edx_3 + arg3[2]) != 0)
                int32_t ecx_10 = 0
                float xmm2_2 = (zx.o(0)).d
                int32_t edi_2 = 1
                
                if (esi_1 s> 0)
                    int32_t edx_4 = arg3[8]
                    int32_t eax_39 = arg3[7]
                    edx_3 = var_14_1
                    
                    do
                        float xmm0_15 = _mm_cvtpd_ps(_mm_and_pd(
                            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(edx_4 +
                                (mods.dp.d(sx.q(divs.dp.d(sx.q(edx_3), edi_2)), eax_32) << 2))))), 
                            0x7fffffffffffffff) * fconvert.d(var_24) + fconvert.d(var_20)
                            + fconvert.d(xmm2_2))
                        
                        if (eax_39 != 0)
                            xmm2_2 = xmm0_15
                        
                        int32_t eax_47
                        
                        if (arg5 == 0)
                            eax_47 = var_10_2
                        else
                            eax_47 = *var_18_2 * esi_1
                        
                        edi_2 *= eax_32
                        int32_t eax_48 = eax_47 + ecx_10
                        ecx_10 += 1
                        *(result + (eax_48 << 2)) = xmm0_15
                        edx_3 = var_14_1
                    while (ecx_10 s< esi_1)
                    
                    eax_35 = var_10_2
                
                var_18_2 = &var_18_2[1]
                eax_35 += esi_1
                ecx_9 = arg5
                edi_1 = eax_34
                var_10_2 = eax_35
            
            edx_3 += 1
            var_14_1 = edx_3
        while (edx_3 s< edi_1)
else if (eax_17 == 2)
    int32_t eax_20 = arg3[1]
    int32_t ecx_4 = 0
    int32_t var_18_1 = 0
    
    if (eax_20 s> 0)
        int32_t* edx_1 = arg5
        int32_t* eax_21 = edx_1
        int32_t* var_10_1 = eax_21
        
        do
            if (edx_1 != 0)
                eax_21 = var_10_1
            
            if (edx_1 == 0 || *(ecx_4 + arg3[2]) != 0)
                int32_t edx_2 = 0
                float xmm2_1 = (zx.o(0)).d
                
                if (esi_1 s> 0)
                    int32_t ecx_5 = arg3[7]
                    int32_t* ecx_8 = arg3[8] + ((esi_1 * var_18_1) << 2)
                    
                    do
                        float xmm0_9 = _mm_cvtpd_ps(_mm_and_pd(
                            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*ecx_8))), 0x7fffffffffffffff)
                            * fconvert.d(var_24) + fconvert.d(var_20) + fconvert.d(xmm2_1))
                        
                        if (ecx_5 != 0)
                            xmm2_1 = xmm0_9
                        
                        int32_t eax_28
                        
                        if (arg5 == 0)
                            eax_28 = esi_1 * var_14
                        else
                            eax_28 = *var_10_1 * esi_1
                        
                        int32_t eax_30 = eax_28 + edx_2
                        ecx_8 = &ecx_8[1]
                        edx_2 += 1
                        *(result + (eax_30 << 2)) = xmm0_9
                    while (edx_2 s< esi_1)
                    
                    eax_21 = var_10_1
                    ecx_4 = var_18_1
                
                var_14 += 1
                eax_21 = &eax_21[1]
                edx_1 = arg5
                var_10_1 = eax_21
            
            ecx_4 += 1
            var_18_1 = ecx_4
        while (ecx_4 s< eax_20)

return result

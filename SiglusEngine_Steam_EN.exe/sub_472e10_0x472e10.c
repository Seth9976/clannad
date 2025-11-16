// 函数: sub_472e10
// 地址: 0x472e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double xmm2 = 1000.0
void* esi = arg2
int32_t i = 0
void* var_10 = esi
char* edi_1 = arg3 + 0x1b4

do
    if (*(edi_1 + 4) u> 0)
        int32_t var_c
        void* var_8
        
        if (i == 0)
            *(edi_1 + 0x1c) -= *(edi_1 + 0x14)
            *(edi_1 + 0x20) -= *(edi_1 + 0x18)
            sub_472d10(&var_c, &var_8, edi_1, &var_c)
            int32_t eax_15 = *(edi_1 + 0x14)
            *(edi_1 + 0x1c) += eax_15
            int32_t ecx_6 = *(edi_1 + 0x18)
            void* edx_8 = var_8 + eax_15
            *(edi_1 + 0x20) += ecx_6
            arg1 = var_c + ecx_6
            var_8 = edx_8
            var_c = arg1
            *arg4 += edx_8
            *arg5 += arg1
        else if (i == 1)
            *(edi_1 + 0x1c) -= *(edi_1 + 0x14)
            *(edi_1 + 0x20) -= *(edi_1 + 0x18)
            sub_472d10(&var_c, &var_8, edi_1, &var_c)
            int32_t eax_11 = *(edi_1 + 0x18)
            int32_t edx_5 = *(edi_1 + 0x14)
            void* ecx_4 = var_8 + edx_5
            *(edi_1 + 0x20) += eax_11
            var_c += eax_11
            *(edi_1 + 0x1c) += edx_5
            arg1 = *(edi_1 + 0xc)
            var_8 = ecx_4
            
            if (arg1 u> *(edi_1 + 8) && ecx_4 == 0)
                ecx_4.b = *(edi_1 + 0x1c) s>= edx_5
                ecx_4 = (ecx_4 << 1) + 0xffffffff
                var_8 = ecx_4
            
            *(esi + 0x60) += ecx_4
        else if (i == 2)
            *(edi_1 + 0x1c) -= *(edi_1 + 0x14)
            *(edi_1 + 0x20) -= *(edi_1 + 0x18)
            sub_472d10(&var_c, &var_8, edi_1, &var_c)
            int32_t eax_6 = *(edi_1 + 0x14)
            void* edx_2 = var_8 + eax_6
            *(edi_1 + 0x1c) += eax_6
            int32_t ecx_1 = *(edi_1 + 0x18)
            *(edi_1 + 0x20) += ecx_1
            int32_t esi_2 = var_c + ecx_1
            double xmm1_2 = _mm_cvtepi32_pd(zx.q(edx_2))
            var_8 = edx_2
            var_c = esi_2
            double xmm1_4 = xmm1_2 / xmm2 * _mm_cvtepi32_pd(zx.q(*(var_10 + 0x58)))
            double xmm0_4 = _mm_cvtepi32_pd(zx.q(*(var_10 + 0x5c)))
            esi = var_10
            double xmm1_6 = _mm_cvtepi32_pd(zx.q(esi_2))
            *(var_10 + 0x58) = int.d(xmm1_4)
            *(var_10 + 0x5c) = int.d(xmm1_6 / xmm2 * xmm0_4)
    
    i += 1
    edi_1 = &edi_1[0x28]
while (i s< 3)

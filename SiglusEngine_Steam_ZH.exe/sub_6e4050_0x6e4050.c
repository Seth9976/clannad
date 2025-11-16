// 函数: sub_6e4050
// 地址: 0x6e4050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_4ecd13c != 0)
    return 

int32_t eax = 0
int32_t var_14_1 = 0

for (void* i = &data_c6d170; i s< &data_4c6d170; )
    int32_t eax_1 = 0xffffff80
    double xmm3_2 = _mm_cvtepi32_pd(zx.q(eax))
    int32_t var_c_1 = 0xffffff80
    int32_t j_1 = 0x100
    int32_t j
    
    do
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(eax_1))
        int32_t edi_1 = 0xffffff80
        int32_t k_1 = 0x100
        int32_t esi_1 = int.d(xmm1_2 * 1.772 + xmm3_2)
        int32_t k
        
        do
            double xmm1_6 = _mm_cvtepi32_pd(zx.q(edi_1))
            int32_t ecx_1 = int.d(xmm1_6 * 1.4019999999999999 + xmm3_2)
            
            if (ecx_1 s< 0)
                ecx_1 = 0
            else if (ecx_1 s> 0xff)
                ecx_1 = 0xff
            
            int32_t eax_2 = int.d(xmm3_2 - xmm1_2 * 0.34414 - xmm1_6 * 0.71414)
            
            if (eax_2 s< 0)
                eax_2 = 0
            else if (eax_2 s> 0xff)
                eax_2 = 0xff
            
            char edx_1
            
            if (esi_1 s>= 0)
                edx_1 = esi_1.b
                
                if (esi_1 s> 0xff)
                    edx_1 = -1
            else
                edx_1 = 0
            
            edi_1 += 1
            *i = ((zx.d(ecx_1.b) | 0xffffff00) << 8 | zx.d(eax_2.b)) << 8 | zx.d(edx_1)
            i += 4
            k = k_1
            k_1 -= 1
        while (k != 1)
        eax_1 = var_c_1 + 1
        j = j_1
        j_1 -= 1
        var_c_1 = eax_1
    while (j != 1)
    eax = var_14_1 + 1
    var_14_1 = eax

data_4ecd13c = 1

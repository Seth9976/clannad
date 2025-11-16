// 函数: sub_4cddf0
// 地址: 0x4cddf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg4
int32_t i_7 = arg7

if (i_7 s<= 0)
label_4cde6f:
    
    if (i_7 s< 0)
        i_7 = 0
    
    arg7 = i_7
else
    if (arg9 != 0)
        int16_t* ecx_1 = arg6 - 2
        
        if (i_7 s> 0)
            int32_t i_3 = i_7
            int32_t i
            
            do
                int32_t eax_1 = sx.d(*ecx_1) - arg9
                
                if (eax_1 s< 0xffff8008)
                    eax_1 = 0xffff8008
                else if (eax_1 s> 0x7ff8)
                    eax_1 = 0x7ff8
                
                *ecx_1 = eax_1.w
                ecx_1 -= 2
                i = i_3
                i_3 -= 1
            while (i != 1)
            edx = arg4
    
    void* ecx_3 = arg3 - i_7 * 2
    
    if (ecx_3 u< arg5)
        if (ecx_3 u< edx)
            i_7 -= (edx - ecx_3) u>> 1
        
        goto label_4cde6f
    
    arg7 = 0

int32_t i_6 = arg8
bool cond:0 = i_6 s>= 0

if (i_6 s<= 0)
label_4cded8:
    
    if (not(cond:0))
        i_6 = 0
    else if (i_6 s> 0)
        void* edx_1 = arg6
        void* esi_1 = arg3
        int32_t i_5 = i_6
        int32_t i_1
        
        do
            int32_t eax_5
            eax_5.w = *edx_1
            esi_1 += 2
            int16_t ecx_9 = *(esi_1 - 2)
            edx_1 += 2
            *(esi_1 - 2) = eax_5.w
            *(edx_1 - 2) = ecx_9
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
else
    if (arg9 != 0)
        void* ecx_4 = arg6
        
        if (i_6 s> 0)
            int32_t i_4 = i_6
            int32_t i_2
            
            do
                int32_t eax_7 = sx.d(*ecx_4) + arg9
                
                if (eax_7 s< 0xffff8008)
                    eax_7 = 0xffff8008
                else if (eax_7 s> 0x7ff8)
                    eax_7 = 0x7ff8
                
                *ecx_4 = eax_7.w
                ecx_4 += 2
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    
    void* ecx_6 = arg3 + ((i_6 - 1) << 1)
    
    if (ecx_6 u>= arg4)
        if (ecx_6 u>= arg5)
            i_6 += 0xffffffff - ((ecx_6 - arg5) u>> 1)
        
        cond:0 = i_6 s>= 0
        goto label_4cded8
    
    i_6 = 0

int32_t result = arg7
int32_t esi_2 = result + i_6

if (esi_2 s> 0)
    int32_t edx_2 = esi_2 - 1
    result *= 2
    int32_t ecx_10 = 0
    int16_t* edi_1 = arg3 - result
    
    if (esi_2 s> 0)
        void* ebx_3 = arg6 - result - edi_1
        double xmm3_2 = _mm_cvtepi32_pd(zx.q(edx_2))
        
        do
            int32_t eax_8 = sx.d(*(ebx_3 + edi_1))
            double xmm0_2 = _mm_cvtepi32_pd(zx.q(ecx_10))
            result = int.d(_mm_cvtepi32_pd(zx.q(eax_8)) / xmm3_2 * xmm0_2
                + _mm_cvtepi32_pd(zx.q(sx.d(*edi_1))) / xmm3_2 * _mm_cvtepi32_pd(zx.q(edx_2)))
            
            if (result s< 0xffff8008)
                result = 0xffff8008
            else if (result s> 0x7ff8)
                result = 0x7ff8
            
            *edi_1 = result.w
            ecx_10 += 1
            edi_1 = &edi_1[1]
            edx_2 -= 1
        while (ecx_10 s< esi_2)

return result

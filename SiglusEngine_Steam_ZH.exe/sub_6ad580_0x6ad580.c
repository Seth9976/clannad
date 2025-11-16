// 函数: sub_6ad580
// 地址: 0x6ad580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ecx
uint32_t var_8 = ecx
int32_t edx = arg2
int32_t i_6 = arg5
int32_t esi = arg1

if (i_6 s<= 0)
label_6ad5fd:
    
    if (i_6 s< 0)
        i_6 = 0
    
    arg5 = i_6
else
    if (arg7 != 0)
        int16_t* ecx_2 = arg4 - 2
        
        if (i_6 s> 0)
            int32_t i_3 = i_6
            int32_t i
            
            do
                int32_t eax_2 = sx.d(*ecx_2) - arg7
                
                if (eax_2 s< 0xffff8008)
                    eax_2 = 0xffff8008
                else if (eax_2 s> 0x7ff8)
                    eax_2 = 0x7ff8
                
                *ecx_2 = eax_2.w
                ecx_2 -= 2
                i = i_3
                i_3 -= 1
            while (i != 1)
            edx = arg2
    
    ecx = esi - i_6 * 2
    
    if (ecx u< arg3)
        if (ecx u< edx)
            i_6 -= (edx - ecx) u>> 1
        
        goto label_6ad5fd
    
    arg5 = 0

int32_t i_7 = arg6
bool cond:0 = i_7 s>= 0

if (i_7 s<= 0)
label_6ad668:
    
    if (not(cond:0))
        i_7 = 0
    else if (i_7 s> 0)
        void* edx_1 = arg4
        int32_t i_5 = i_7
        void* ebx_4 = esi - edx_1
        int32_t i_1
        
        do
            int32_t eax_6
            eax_6.w = *edx_1
            edx_1 += 2
            int16_t ecx_8 = *(ebx_4 + edx_1 - 2)
            *(ebx_4 + edx_1 - 2) = eax_6.w
            *(edx_1 - 2) = ecx_8
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        esi = arg1
else
    if (arg7 != 0)
        void* ecx_4 = arg4
        
        if (i_7 s> 0)
            int32_t i_4 = i_7
            int32_t i_2
            
            do
                int32_t eax_8 = sx.d(*ecx_4) + arg7
                
                if (eax_8 s< 0xffff8008)
                    eax_8 = 0xffff8008
                else if (eax_8 s> 0x7ff8)
                    eax_8 = 0x7ff8
                
                *ecx_4 = eax_8.w
                ecx_4 += 2
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    
    ecx = esi + ((i_7 - 1) << 1)
    
    if (ecx u>= arg2)
        if (ecx u>= arg3)
            i_7 += 0xffffffff - ((ecx - arg3) u>> 1)
        
        cond:0 = i_7 s>= 0
        goto label_6ad668
    
    i_7 = 0

int32_t result = arg5
int32_t edi_2 = i_7 + result

if (edi_2 s> 0)
    result *= 2
    int32_t edx_2 = edi_2 - 1
    int16_t* esi_1 = esi - result
    int32_t ecx_9 = 0
    
    if (edi_2 s> 0)
        void* ebx_7 = arg4 - result - esi_1
        double xmm3_2 = _mm_cvtepi32_pd(zx.q(edx_2))
        
        do
            int32_t eax_9 = sx.d(*(ebx_7 + esi_1))
            double xmm0_2 = _mm_cvtepi32_pd(zx.q(ecx_9))
            result = int.d(_mm_cvtepi32_pd(zx.q(eax_9)) / xmm3_2 * xmm0_2
                + _mm_cvtepi32_pd(zx.q(sx.d(*esi_1))) / xmm3_2 * _mm_cvtepi32_pd(zx.q(edx_2)))
            
            if (result s< 0xffff8008)
                result = 0xffff8008
            else if (result s> 0x7ff8)
                result = 0x7ff8
            
            *esi_1 = result.w
            ecx_9 += 1
            esi_1 = &esi_1[1]
            edx_2 -= 1
        while (ecx_9 s< edi_2)

return result

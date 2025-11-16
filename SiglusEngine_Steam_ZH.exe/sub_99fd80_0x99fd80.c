// 函数: sub_99fd80
// 地址: 0x99fd80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t i_9 = *arg3
int32_t* var_18 = ebx
int32_t i_10 = i_9
int32_t eax_2
int32_t ecx
eax_2, ecx = __alloca_probe_16(i_9 << 2)
int128_t* edi = arg4
int32_t __saved_edi
int32_t* var_8 = &__saved_edi
int32_t var_3c = ecx
sub_9a0110(eax_2, arg3[6], i_9, ebx, edi, 140f, 0xffffffff)
int32_t i = 0

if (i_9 s> 0)
    int32_t* edx_2 = var_8
    
    if (i_9 u>= 8 && (edx_2 u> edi - 4 + (i_9 << 2) || &edx_2[-1 + i_9] u< edi)
            && (edx_2 u> &ebx[-1 + i_9] || &edx_2[-1 + i_9] u< ebx))
        int32_t eax_12 = i_9 & 0x80000007
        
        if (eax_12 s< 0)
            eax_12 = ((eax_12 - 1) | 0xfffffff8) + 1
        
        void* eax_15 = &ebx[4]
        int128_t* edi_3 = arg4
        i = 0
        
        do
            i += 8
            *(var_8 - arg4 + edi_3) = _mm_sub_ps(*(eax_15 - 0x10), *edi_3)
            edi_3 = &edi_3[2]
            *(edx_2 - ebx + eax_15) = _mm_sub_ps(*eax_15, *(arg4 - ebx + eax_15))
            eax_15 += 0x20
        while (i s< i_9 - eax_12)
        
        i_9 = i_10
        edi = arg4
        ebx = var_18
        edx_2 = var_8
    
    if (i s< i_9)
        if (i_9 - i s>= 4)
            int32_t eax_18 = i_9 - 3
            void* eax_22 = edi + ((i + 1) << 2)
            void* edx_5 = &edx_2[i + 2]
            
            do
                *(edx_5 - 8) = ebx[i] f- *(eax_22 - 4)
                *(edx_2 - edi + eax_22) = *(ebx - edi + eax_22) f- *eax_22
                i_9 = i_10
                *edx_5 = *(ebx - edx_2 + edx_5) f- *(eax_22 + 4)
                float xmm0_10 = ebx[i + 3]
                i += 4
                float xmm0_11 = xmm0_10 f- *(eax_22 + 8)
                eax_22 += 0x10
                *(edx_5 + 4) = xmm0_11
                edx_5 += 0x10
            while (i s< eax_18)
            
            edi = arg4
            edx_2 = var_8
        
        if (i s< i_9)
            void* eax_23 = edi + (i << 2)
            int32_t i_8 = i_9 - i
            int32_t i_1
            
            do
                *(edx_2 - edi + eax_23) = *(eax_23 + ebx - edi) f- *eax_23
                eax_23 += 4
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
            edi = arg4

void* eax_24 = arg3[1]
int32_t* var_3c_1 = arg3
int32_t* result = sub_9a0110(eax_24, arg3[6], i_9, var_8, edi, 0f, *(eax_24 + 0x80))
int32_t i_2 = 0

if (i_9 s> 0)
    int32_t* ecx_5 = var_8
    
    if (i_9 u>= 8)
        if (ecx_5 u<= &ebx[i_9 - 1])
            result = &ecx_5[-1 + i_9]
        
        if (ecx_5 u> &ebx[i_9 - 1] || result u< ebx)
            int32_t eax_29 = i_9 & 0x80000007
            
            if (eax_29 s< 0)
                eax_29 = ((eax_29 - 1) | 0xfffffff8) + 1
            
            result = &ecx_5[4]
            int32_t* edi_10 = ebx
            
            do
                i_2 += 8
                float xmm0_14[0x4] = *edi_10
                edi_10 = &edi_10[8]
                *(result - 0x10) = _mm_sub_ps(xmm0_14, *(result - 0x10))
                *result = _mm_sub_ps(*(result + ebx - ecx_5), *result)
                result = &result[8]
            while (i_2 s< i_9 - eax_29)
            
            edi = arg4
            ecx_5 = var_8
    
    if (i_2 s< i_9)
        result = i_9 - i_2
        
        if (result s>= 4)
            result = &ecx_5[i_2 + 1]
            void* ecx_7 = &ebx[i_2 + 3]
            int32_t i_6 = ((i_9 - i_2 - 4) u>> 2) + 1
            i_2 += (((i_9 - i_2 - 4) u>> 2) + 1) << 2
            edi = arg4
            int32_t i_3
            
            do
                result[-1] = *(ecx_7 - 0xc) f- result[-1]
                *result = *(result + ebx - ecx_5) f- *result
                result[1] = *(ecx_7 - 4) f- result[1]
                float xmm0_23 = *ecx_7
                ecx_7 += 0x10
                result[2] = xmm0_23 f- result[2]
                result = &result[4]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            ebx = var_18
            ecx_5 = var_8
        
        if (i_2 s< i_9)
            result = &ecx_5[i_2]
            int32_t i_7 = i_9 - i_2
            int32_t i_4
            
            do
                *result = *(result + ebx - ecx_5) f- *result
                result = &result[1]
                i_4 = i_7
                i_7 -= 1
            while (i_4 != 1)
    
    if (i_9 s> 0)
        float* edx_10 = var_8 - edi
        int32_t i_5
        
        do
            int32_t ecx_9 = int.d(_mm_cvtps_pd(*edi) + 0.5)
            
            if (ecx_9 s>= 0x28)
                ecx_9 = 0x27
            else if (ecx_9 s< 0)
                ecx_9 = 0
            
            result = arg3[1]
            *edi = result[ecx_9 + 0x54] f+ *(edx_10 + edi)
            edi += 4
            i_5 = i_9
            i_9 -= 1
        while (i_5 != 1)

return result

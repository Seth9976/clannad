// 函数: sub_9a69a0
// 地址: 0x9a69a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* esi = arg2
int32_t edx = arg1[0xd]
int32_t i_10 = *arg1
int32_t ecx = arg1[0xc]
void* edx_1 = arg1[0xb]
int32_t eax_2 = edx_1 s>> 1
void* result = nullptr
int128_t* var_14 = esi
int32_t i_11 = i_10
void* result_2 = nullptr
int128_t var_78
__builtin_memset(&var_78, 0, 0x20)

if (edx == 1)
    if (i_10 s> 0)
        int32_t i_8 = i_10
        void* ebx_1 = &var_78 + (i_10 << 2)
        int32_t eax_18 = esi - &var_78
        int32_t var_30_2 = eax_18
        int32_t i
        
        do
            int32_t ecx_5 = *(ebx_1 + eax_18 - 4)
            ebx_1 -= 4
            int32_t ecx_6 = ecx_5 - ecx
            void* eax_21
            
            if (ecx_6 s>= eax_2)
                eax_21 = (ecx_6 - eax_2) * 2
            else
                eax_21 = ((eax_2 - ecx_6) << 1) + 0xffffffff
            
            if (eax_21 s< 0)
                eax_21 = nullptr
            else if (eax_21 s>= edx_1)
                eax_21 = edx_1 - 1
            
            result = result * edx_1 + eax_21
            i = i_8
            i_8 -= 1
            *ebx_1 = ecx + ecx_6
            eax_18 = var_30_2
        while (i != 1)
    label_9a6ad8:
        i_10 = i_11
        esi = var_14
        result_2 = result
else if (i_10 s> 0)
    int32_t edx_3 = edx s>> 1
    void* var_18_2 = esi - &var_78
    void* eax_4 = &var_78 + (i_10 << 2)
    int32_t i_7 = i_10
    int32_t var_34_1 = edx_3
    int32_t i_1
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(*(var_18_2 + eax_4 - 4) - ecx + edx_3), edx)
        void* eax_13
        
        if (temp0_1 s>= eax_2)
            eax_13 = (temp0_1 - eax_2) * 2
        else
            eax_13 = ((eax_2 - temp0_1) << 1) + 0xffffffff
        
        if (eax_13 s< 0)
            eax_13 = nullptr
        else if (eax_13 s>= edx_1)
            eax_13 = edx_1 - 1
        
        edx_3 = var_34_1
        result = result * edx_1 + eax_13
        i_1 = i_7
        i_7 -= 1
        eax_4 -= 4
        *eax_4 = temp0_1 * edx + ecx
    while (i_1 != 1)
    goto label_9a6ad8

char* eax_28 = *(arg1[3] + 8)
int128_t var_68

if (*(eax_28 + result) s<= 0)
    int128_t xmm4_1 = zx.o(0)
    int128_t xmm5_1 = zx.o(0)
    int32_t var_28_1 = 0xffffffff
    int128_t var_58
    __builtin_memset(&var_58, 0, 0x20)
    int32_t i_4 = (edx_1 - 1) * edx + ecx
    int32_t ecx_7 = arg1[1]
    void* result_3 = nullptr
    int32_t i_6 = i_4
    void* result_1 = nullptr
    
    if (ecx_7 s> 0)
        while (true)
            int128_t var_48
            
            if (*(eax_28 + result_3) s> 0)
                int32_t ecx_9 = 0
                int32_t i_2 = 0
                int32_t var_18_3 = 0
                
                if (i_10 s> 0 && i_10 u>= 8 && data_b94f20 s>= 2)
                    int32_t eax_31 = i_10 & 0x80000007
                    
                    if (eax_31 s< 0)
                        eax_31 = ((eax_31 - 1) | 0xfffffff8) + 1
                    
                    int32_t xmm3_1[0x4] = zx.o(0)
                    int128_t* eax_34 = esi
                    int32_t xmm2_1[0x4] = zx.o(0)
                    result = result_2
                    
                    do
                        int32_t xmm0_1[0x4] = *eax_34
                        i_2 += 8
                        eax_34 = &eax_34[2]
                        int32_t xmm1_2[0x4] =
                            _mm_sub_epi32(*(&var_58 - esi + eax_34 - 0x20), xmm0_1)
                        int32_t xmm0_2[0x4] = eax_34[-1]
                        xmm3_1 = _mm_add_epi32(xmm3_1, _mm_mullo_epi32(xmm1_2, xmm1_2))
                        int32_t xmm1_5[0x4] =
                            _mm_sub_epi32(*(&var_48 - esi + eax_34 - 0x20), xmm0_2)
                        xmm2_1 = _mm_add_epi32(xmm2_1, _mm_mullo_epi32(xmm1_5, xmm1_5))
                    while (i_2 s< i_10 - eax_31)
                    
                    esi = var_14
                    int32_t xmm2_2[0x4] = _mm_add_epi32(xmm2_1, xmm3_1)
                    i_10 = i_11
                    int32_t xmm2_3[0x4] = _mm_add_epi32(xmm2_2, _mm_bsrli_si128(xmm2_2, 8))
                    ecx_9 = _mm_add_epi32(xmm2_3, _mm_bsrli_si128(xmm2_3, 4))
                    var_18_3 = ecx_9
                
                int32_t var_8_1 = 0
                int32_t var_20_2 = 0
                
                if (i_2 s< i_10)
                    if (i_10 - i_2 s>= 2)
                        void* edi_4 = esi + (i_2 << 2)
                        void* eax_37 = &var_58:4 - esi
                        int32_t i_9 = ((i_10 - i_2 - 2) u>> 1) + 1
                        void* var_2c_2 = eax_37
                        i_2 += i_9 << 1
                        int32_t i_3
                        
                        do
                            int32_t eax_38 = *(eax_37 + edi_4 - 4)
                            edi_4 += 8
                            int32_t eax_39 = eax_38 - *(edi_4 - 8)
                            var_8_1 += eax_39 * eax_39
                            int32_t eax_42 = *(eax_37 + edi_4 - 8) - *(edi_4 - 4)
                            var_20_2 += eax_42 * eax_42
                            i_3 = i_9
                            i_9 -= 1
                        while (i_3 != 1)
                        esi = var_14
                        result = result_2
                    
                    int32_t ecx_16 = var_18_3
                    
                    if (i_2 s< i_10)
                        int32_t eax_45 = *(&var_58 + (i_2 << 2)) - *(esi + (i_2 << 2))
                        ecx_16 += eax_45 * eax_45
                    
                    ecx_9 = ecx_16 + var_8_1 + var_20_2
                
                if (var_28_1 == 0xffffffff || ecx_9 s< var_28_1)
                    result = result_1
                    var_78 = xmm4_1
                    var_28_1 = ecx_9
                    var_68 = xmm5_1
                    result_2 = result
                
                i_4 = i_6
            
            int32_t eax_50 = 0
            
            if (var_58.d s>= i_4)
                int128_t* ecx_17 = &var_58
                
                do
                    eax_50 += 1
                    *ecx_17 = 0
                    ecx_17 = &var_58 + (eax_50 << 2)
                while (*(&var_58 + (eax_50 << 2)) s>= i_4)
            
            void* ecx_18 = &var_58 + (eax_50 << 2)
            int32_t eax_51 = *ecx_18
            
            if (eax_51 s>= 0)
                esi = var_14
                *ecx_18 = eax_51 + edx
            
            *ecx_18 = neg.d(*ecx_18)
            result_3 = result_1 + 1
            result_1 = result_3
            
            if (result_3 s>= ecx_7)
                break
            
            xmm5_1 = var_48
            xmm4_1 = var_58

if (result s> 0xffffffff)
    int32_t i_5 = 0
    
    if (i_10 s> 0)
        int32_t __saved_ebp
        
        if (i_10 u>= 8
                && (esi u> &(&__saved_ebp)[i_10 - 0x1e] || esi + ((i_10 - 1) << 2) u< &var_78))
            int32_t eax_58 = i_10 & 0x80000007
            
            if (eax_58 s< 0)
                eax_58 = ((eax_58 - 1) | 0xfffffff8) + 1
            
            int128_t* eax_61 = &var_68
            
            do
                i_5 += 8
                eax_61 = &eax_61[2]
                int32_t xmm1_8[0x4] = _mm_sub_epi32(*esi, eax_61[-3])
                int32_t xmm0_8[0x4] = eax_61[-2]
                *esi = xmm1_8
                esi[1] = _mm_sub_epi32(esi[1], xmm0_8)
                esi = &esi[2]
            while (i_5 s< i_10 - eax_58)
        
        for (; i_5 s< i_10; i_5 += 1)
            esi += 4
            *(esi - 4) -= *(&var_78 + (i_5 << 2))

return result

// 函数: sub_9a97a0
// 地址: 0x9a97a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = arg1[7]
int32_t edi = 0
int32_t esi = 0xffffffff
int32_t ecx
int32_t edx
int32_t* result = sub_74c590(eax_1, edx, ecx, 1, 0x460)
int32_t* ebx = arg2
uint32_t xmm4[0x4] = _mm_shuffle_epi32(zx.o(result), 0)
int32_t eax_2 = sub_742fa0(ebx, 5)
int32_t* result_1 = result
int32_t var_8 = 0
*result_1 = eax_2
int32_t* result_2

if (eax_2 s<= 0)
label_9a9835:
    int32_t i_3 = 0
    
    if (esi + 1 s> 0)
        int32_t* esi_1 = arg2
        void* var_8_1 = &result_1[0x50]
        void* ebx_2 = &result_1[0x40]
        int32_t i
        
        do
            *(ebx_2 - 0x80) = sub_742fa0(esi_1, 3) + 1
            int32_t eax_11 = sub_742fa0(esi_1, 2)
            *(ebx_2 - 0x40) = eax_11
            
            if (eax_11 s< 0)
                goto label_9a9ad3_1
            
            if (eax_11 != 0)
                *ebx_2 = sub_742fa0(esi_1, 8)
            
            int32_t eax_13 = *ebx_2
            
            if (eax_13 s< 0)
                goto label_9a9ad3_1
            
            if (eax_13 s>= *(eax_1 + 0x18))
                goto label_9a9ad3_1
            
            int32_t j = 0
            
            if (1 << (*(ebx_2 - 0x40)).b s> 0)
                void* esi_2 = var_8_1
                
                do
                    int32_t eax_16 = sub_742fa0(arg2, 8) - 1
                    *esi_2 = eax_16
                    
                    if (eax_16 s< 0xffffffff)
                        goto label_9a9ad3_1
                    
                    if (eax_16 s>= *(eax_1 + 0x18))
                        goto label_9a9ad3_1
                    
                    j += 1
                    esi_2 += 4
                while (j s< 1 << (*(ebx_2 - 0x40)).b)
                
                esi_1 = arg2
            
            ebx_2 += 4
            var_8_1 += 0x20
            i = i_3 + 1
            i_3 = i
        while (i s< esi + 1)
        ebx = arg2
        edi = 0
    
    result[0xd0] = sub_742fa0(ebx, 2) + 1
    int32_t eax_21 = sub_742fa0(ebx, 4)
    result_2 = result
    
    if (eax_21 s>= 0)
        int32_t i_1 = 0
        int32_t esi_3 = 0
        int32_t i_4 = 0
        
        if (*result_2 s> 0)
            void* eax_22 = &result_2[1]
            void* var_8_2 = eax_22
            
            do
                edi += result_2[*eax_22 + 0x20]
                
                if (edi s> 0x3f)
                    goto label_9a9ade
                
                if (esi_3 s< edi)
                    void* edi_2 = &result_2[esi_3 + 0xd3]
                    
                    do
                        int32_t eax_24 = sub_742fa0(arg2, eax_21)
                        *edi_2 = eax_24
                        
                        if (eax_24 s< 0)
                            goto label_9a9ad3_1
                        
                        if (eax_24 s>= 1 << eax_21.b)
                            goto label_9a9ad3_1
                        
                        esi_3 += 1
                        edi_2 += 4
                    while (esi_3 s< edi)
                    
                    result_2 = result
                    i_1 = i_4
                
                i_1 += 1
                eax_22 = var_8_2 + 4
                i_4 = i_1
                var_8_2 = eax_22
            while (i_1 s< *result_2)
        
        result_2[0xd1] = 0
        int32_t i_2 = 0
        result_2[0xd2] = 1 << eax_21.b
        int32_t var_118[0x4]
        
        if (edi + 2 s> 0)
            if (edi + 2 u>= 8)
                int32_t xmm1_1[0x4] = data_b0da70
                int32_t eax_28 = (edi + 2) & 0x80000007
                
                if (eax_28 s< 0)
                    eax_28 = ((eax_28 - 1) | 0xfffffff8) + 1
                
                int32_t xmm2_1[0x4] = data_b0da80
                void var_108
                void* edx_3 = &var_108
                uint128_t xmm3_1 = 2
                
                do
                    int32_t eax_31 = i_2 + 4
                    edx_3 += 0x20
                    int32_t xmm0_3[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_2), 0), xmm1_1)
                    i_2 += 8
                    *(edx_3 - 0x30) =
                        _mm_add_epi32(_mm_sll_epi32(_mm_add_epi32(xmm0_3, xmm2_1), xmm3_1), xmm4)
                    *(edx_3 - 0x20) = _mm_add_epi32(
                        _mm_sll_epi32(
                            _mm_add_epi32(
                                _mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_31), 0), xmm1_1), xmm2_1), 
                            xmm3_1), 
                        xmm4)
                while (i_2 s< edi + 2 - eax_28)
                
                result_2 = result
            
            if (i_2 s< edi + 2)
                void* eax_33 = &result_2[i_2 + 0xd1]
                
                do
                    var_118[i_2] = eax_33
                    i_2 += 1
                    eax_33 += 4
                while (i_2 s< edi + 2)
        
        sub_761c30(&var_118, edi + 2, 4, sub_9a9b00)
        int32_t edx_4 = 1
        
        if (edi + 2 s<= 1)
            return result
        
        int32_t __saved_ebx
        
        while (*(&__saved_ebx)[edx_4] != *var_118[edx_4])
            edx_4 += 1
            
            if (edx_4 s>= edi + 2)
                return result
        
    label_9a9ad3:
        result_2 = result
else
    void* var_c_1 = &result_1[1]
    
    while (true)
        int32_t eax_4 = sub_742fa0(ebx, 4)
        *var_c_1 = eax_4
        
        if (eax_4 s< 0)
            break
        
        if (esi s< eax_4)
            esi = eax_4
        
        int32_t eax_6 = var_8 + 1
        var_c_1 += 4
        result_1 = result
        var_8 = eax_6
        
        if (eax_6 s>= *result_1)
            goto label_9a9835
    
label_9a9ad3_1:
    result_2 = result

label_9a9ade:
_memset(result_2, 0, 0x460)
_free(result)
return 0

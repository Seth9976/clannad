// 函数: sub_4b1aaf
// 地址: 0x4b1aaf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0

if ((*(arg1 + 0x6f) & 0xc) == 0)
    return 1

int32_t result = sub_49ff18(arg1)

if (result s< 0)
    return result

int32_t var_7c[0x19]
int32_t eax_2 = sub_4aba37(arg1, &var_7c, *(arg1 + 0x88), *(arg1 + 0x2c) - 1)
int32_t eax_3

if (eax_2 s>= 0)
    eax_3 = sub_4ac102(arg1, &var_7c, nullptr)

if (eax_2 s>= 0 && eax_3 s>= 0)
label_4b1b49:
    int32_t eax_8 = sub_745f3f(*(arg1 + 0xc) << 2)
    var_8 = eax_8
    
    if (eax_8 != 0)
        int32_t ecx_8 = *(arg1 + 0xc) << 2
        int32_t edi
        int32_t var_88_5 = edi
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(eax_8, *(arg1 + 0x18), ecx_8 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, ecx_8 & 3)
        int32_t var_10_1 = sub_4a23b2(arg1)
        uint32_t i = 0
        uint32_t i_2 = 0
        
        if (*(arg1 + 0xc) u> 0)
            do
                if ((*(*(*(arg1 + 0x18) + (i << 2)) + 0x2c) & 1) != 0)
                    uint32_t var_c_1 = i
                    
                    if (i u> 0)
                        uint32_t j
                        
                        do
                            if (sub_4a2464(arg1, var_c_1) == 0)
                                break
                            
                            int32_t eax_12 = sub_4a23b2(arg1)
                            
                            if (eax_12 u<= var_10_1)
                                if (eax_12 != var_10_1)
                                label_4b1be4:
                                    
                                    if (sub_4ac102(arg1, &var_7c, nullptr) s>= 0)
                                        int32_t esi_4
                                        int32_t edi_4
                                        edi_4, esi_4 = __builtin_memcpy(var_8, *(arg1 + 0x18), 
                                            ((i_2 << 2) + 4) u>> 2 << 2)
                                        __builtin_memcpy(edi_4, esi_4, ((i_2 << 2) + 4) & 3)
                                        var_10_1 = eax_12
                                else if ((*(arg1 + 0x6f) & 8) == 0)
                                    int32_t* eax_14 = *(arg1 + 0x18) + (var_c_1 << 2)
                                    
                                    if (*(*eax_14 + 0x2c) == *(eax_14[-1] + 0x2c))
                                        goto label_4b1be4
                            
                            j = var_c_1
                            var_c_1 -= 1
                        while (j != 1)
                        i = i_2
                    
                    int32_t esi_6
                    int32_t edi_6
                    edi_6, esi_6 =
                        __builtin_memcpy(*(arg1 + 0x18), var_8, ((i << 2) + 4) u>> 2 << 2)
                    __builtin_memcpy(edi_6, esi_6, ((i << 2) + 4) & 3)
                
                i += 1
                i_2 = i
            while (i u< *(arg1 + 0xc))
        
        int32_t edx_2 = *(arg1 + 0xc)
        int32_t eax_20 = 0
        int32_t var_14_1 = 0
        
        if (edx_2 u> 0)
            do
                int32_t ecx_29 = eax_20 << 2
                
                if ((*((*(arg1 + 0x18))[eax_20] + 0x2c) & 1) != 0)
                    int32_t esi_9 = eax_20 + 1
                    
                    if (esi_9 u< edx_2)
                        int32_t* eax_21 = *(arg1 + 0x18)
                        void* eax_22 = &eax_21[esi_9]
                        
                        while (*(eax_21[eax_20] + 0x2c) == *(*eax_22 + 0x2c))
                            esi_9 += 1
                            eax_22 += 4
                            
                            if (esi_9 u>= *(arg1 + 0xc))
                                break
                        
                        eax_20 = var_14_1
                    
                    uint32_t i_4 = (esi_9 - eax_20) u>> 1
                    
                    if (i_4 != 0)
                        int32_t var_14_2 = ecx_29
                        int32_t eax_24 = esi_9 << 2
                        uint32_t i_3 = i_4
                        uint32_t i_1
                        
                        do
                            int32_t ecx_30 = *(arg1 + 0x18)
                            int32_t edx_7 = var_14_2
                            var_14_2 += 4
                            int32_t* edx_8 = edx_7 + ecx_30
                            int32_t edi_8 = *edx_8
                            *edx_8 = *(eax_24 + ecx_30 - 4)
                            *(eax_24 + *(arg1 + 0x18) - 4) = edi_8
                            eax_24 -= 4
                            i_1 = i_3
                            i_3 -= 1
                        while (i_1 != 1)
                    
                    eax_20 = esi_9 - 1
                
                edx_2 = *(arg1 + 0xc)
                eax_20 += 1
                var_14_1 = eax_20
            while (eax_20 u< edx_2)
else
    sub_4a36d6(&var_7c)
    
    if (sub_4aba37(arg1, &var_7c, *(arg1 + 0x88), *(arg1 + 0x2c)) s>= 0
            && sub_4ac102(arg1, &var_7c, nullptr) s>= 0)
        goto label_4b1b49

sub_4a36d6(&var_7c)
j__free(var_8)
return 0

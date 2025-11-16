// 函数: sub_41372a
// 地址: 0x41372a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
void* edi_1 = arg2
int32_t* eax = edi_1 + 0x218
int32_t var_c = 0
*eax = ((*(arg1 + 0x218) ^ *eax) & 0x20) ^ *(arg1 + 0x218)
void* var_10 = nullptr
int32_t result_1 = sub_40ea72(edi_1, *(arg1 + 0x264), *(arg1 + 0x23c))
int32_t result = result_1

if (result_1 s>= 0)
    int32_t result_2 = sub_40b67c(edi_1, &var_10, 0)
    result = result_2
    
    if (result_2 s>= 0)
        int32_t result_3 = sub_40b67c(arg1, &var_c, 0x10)
        result = result_3
        
        if (result_3 s>= 0)
            if ((*(arg1 + 0x218) & 4) != 0)
                int32_t ecx_8 = *(arg1 + 0x264) << 2
                int32_t esi_2
                int32_t edi_3
                edi_3, esi_2 = __builtin_memcpy(*(edi_1 + 0x254), *(arg1 + 0x254), ecx_8 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_2, ecx_8 & 3)
                edi_1 = arg2
            
            if ((*(arg1 + 0x218) & 8) != 0)
                int32_t ecx_13 = *(arg1 + 0x264) << 1
                int32_t esi_4
                int32_t edi_5
                edi_5, esi_4 =
                    __builtin_memcpy(*(edi_1 + 0x258), *(arg1 + 0x258), ecx_13 u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_4, ecx_13 & 3)
                edi_1 = arg2
            
            if (*(arg1 + 0x25c) == 0)
            label_41386a:
                int32_t eax_9 = 0
                arg2 = nullptr
                
                if (*(arg1 + 0x264) u> 0)
                    do
                        int32_t* ecx_26 = var_10 + eax_9
                        int32_t* edx_3 = var_c + eax_9 - ecx_26
                        int32_t j_2 = 3
                        int32_t j
                        
                        do
                            int32_t esi_7 = *(edx_3 + ecx_26)
                            
                            if (esi_7 == 0xffffffff)
                                *ecx_26 = 0xffffffff
                            else
                                *ecx_26 = esi_7
                            
                            ecx_26 = &ecx_26[1]
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        arg2 += 1
                        eax_9 += 0xc
                    while (arg2 u< *(arg1 + 0x264))
                
                if ((*(arg1 + 0x218) & 1) != 0)
                    int32_t esi_8 = 0
                    arg2 = nullptr
                    
                    if (*(arg1 + 0x264) u> 0)
                        do
                            int32_t* eax_11 = *(edi_1 + 0x250) + esi_8
                            void* ecx_30 = *(arg1 + 0x250) + esi_8 - eax_11
                            int32_t j_3 = 3
                            int32_t j_1
                            
                            do
                                int32_t edx_4 = *(eax_11 + ecx_30)
                                
                                if (edx_4 == 0xffffffff)
                                    *eax_11 = 0xffffffff
                                else
                                    *eax_11 = edx_4
                                
                                eax_11 = &eax_11[1]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                            arg2 += 1
                            esi_8 += 0xc
                        while (arg2 u< *(arg1 + 0x264))
            else
                int32_t eax_6 = sub_745f3f(*(arg1 + 0x260) * 0x14)
                *(edi_1 + 0x25c) = eax_6
                
                if (eax_6 != 0)
                    int32_t ecx_20 = *(arg1 + 0x260) * 0x14
                    int32_t esi_6
                    int32_t edi_7
                    edi_7, esi_6 = __builtin_memcpy(eax_6, *(arg1 + 0x25c), ecx_20 u>> 2 << 2)
                    __builtin_memcpy(edi_7, esi_6, ecx_20 & 3)
                    *(arg2 + 0x260) = *(arg1 + 0x260)
                    edi_1 = arg2
                    goto label_41386a
                
                result = 0x8007000e

if (var_c != 0)
    int32_t* ebx_1 = *(arg1 + 0x248)
    (*(*ebx_1 + 0x30))(ebx_1)

if (var_10 != 0)
    int32_t* edi_8 = *(edi_1 + 0x248)
    (*(*edi_8 + 0x30))(edi_8)

return result

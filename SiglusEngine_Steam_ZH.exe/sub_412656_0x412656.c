// 函数: sub_412656
// 地址: 0x412656
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
void* edi_1 = arg2
int32_t* eax = edi_1 + 0x218
int32_t var_c = 0
*eax = ((*(arg1 + 0x218) ^ *eax) & 0x20) ^ *(arg1 + 0x218)
void* var_10 = nullptr
int32_t result_1 = sub_40dd7c(edi_1, *(arg1 + 0x264), *(arg1 + 0x23c))
int32_t result = result_1

if (result_1 s>= 0)
    int32_t result_2 = sub_40b67c(edi_1, &var_10, 0)
    result = result_2
    
    if (result_2 s>= 0)
        int32_t result_3
        int16_t* edx_1
        result_3, edx_1 = sub_40b67c(arg1, &var_c, 0x10)
        result = result_3
        
        if (result_3 s>= 0)
            if ((*(arg1 + 0x218) & 4) != 0)
                int32_t ecx_8 = *(arg1 + 0x264) << 2
                int32_t esi_3
                int32_t edi_3
                edi_3, esi_3 = __builtin_memcpy(*(edi_1 + 0x254), *(arg1 + 0x254), ecx_8 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_3, ecx_8 & 3)
                edi_1 = arg2
            
            if ((*(arg1 + 0x218) & 8) != 0)
                int32_t ecx_13 = *(arg1 + 0x264) << 1
                int32_t esi_5
                int32_t edi_5
                edi_5, esi_5 =
                    __builtin_memcpy(*(edi_1 + 0x258), *(arg1 + 0x258), ecx_13 u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_5, ecx_13 & 3)
                edi_1 = arg2
            
            if (*(arg1 + 0x25c) == 0)
            label_412796:
                int32_t eax_9 = 0
                arg2 = nullptr
                
                if (*(arg1 + 0x264) u> 0)
                    do
                        int16_t* ecx_26 = var_10 + eax_9
                        edx_1 = var_c + eax_9 - ecx_26
                        int32_t j_2 = 3
                        int32_t j
                        
                        do
                            int16_t esi_1 = *(edx_1 + ecx_26)
                            
                            if (esi_1 == 0xffff)
                                *ecx_26 = 0xffff
                            else
                                *ecx_26 = esi_1
                            
                            ecx_26 = &ecx_26[1]
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        arg2 += 1
                        eax_9 += 6
                    while (arg2 u< *(arg1 + 0x264))
                
                if ((*(arg1 + 0x218) & 1) != 0)
                    int32_t esi_8 = 0
                    arg2 = nullptr
                    
                    if (*(arg1 + 0x264) u> 0)
                        do
                            int16_t* eax_11 = *(edi_1 + 0x250) + esi_8
                            void* ecx_31 = *(arg1 + 0x250) + esi_8 - eax_11
                            int32_t j_3 = 3
                            int32_t j_1
                            
                            do
                                edx_1.w = *(eax_11 + ecx_31)
                                
                                if (edx_1.w == 0xffff)
                                    *eax_11 = 0xffff
                                else
                                    *eax_11 = edx_1.w
                                
                                eax_11 = &eax_11[1]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                            arg2 += 1
                            esi_8 += 6
                        while (arg2 u< *(arg1 + 0x264))
            else
                int32_t eax_6
                eax_6, edx_1 = sub_745f3f(*(arg1 + 0x260) * 0x14)
                *(edi_1 + 0x25c) = eax_6
                
                if (eax_6 != 0)
                    int32_t ecx_20 = *(arg1 + 0x260) * 0x14
                    int32_t esi_7
                    int32_t edi_7
                    edi_7, esi_7 = __builtin_memcpy(eax_6, *(arg1 + 0x25c), ecx_20 u>> 2 << 2)
                    __builtin_memcpy(edi_7, esi_7, ecx_20 & 3)
                    *(arg2 + 0x260) = *(arg1 + 0x260)
                    edi_1 = arg2
                    goto label_412796
                
                result = 0x8007000e

if (var_c != 0)
    int32_t* ebx_1 = *(arg1 + 0x248)
    (*(*ebx_1 + 0x30))(ebx_1)

if (var_10 != 0)
    int32_t* edi_8 = *(edi_1 + 0x248)
    (*(*edi_8 + 0x30))(edi_8)

return result

// 函数: sub_413503
// 地址: 0x413503
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
void* edi_1 = arg2
int32_t* eax = edi_1 + 0x218
int32_t esi = 0
int32_t var_14 = 0
*eax = ((*(arg1 + 0x218) ^ *eax) & 0x20) ^ *(arg1 + 0x218)
int32_t var_18 = 0
int32_t result_1 = sub_40dd7c(edi_1, *(arg1 + 0x264), *(arg1 + 0x23c))
int32_t result = result_1

if (result_1 s>= 0)
    int32_t result_2 = sub_40b67c(edi_1, &var_18, 0)
    result = result_2
    
    if (result_2 s>= 0)
        int32_t result_3 = sub_40b67c(arg1, &var_14, 0x10)
        result = result_3
        
        if (result_3 s>= 0)
            if ((*(arg1 + 0x218) & 4) != 0)
                int32_t ecx_8 = *(arg1 + 0x264) << 2
                int32_t esi_2
                int32_t edi_3
                edi_3, esi_2 = __builtin_memcpy(*(edi_1 + 0x254), *(arg1 + 0x254), ecx_8 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_2, ecx_8 & 3)
                edi_1 = arg2
                esi = 0
            
            if ((*(arg1 + 0x218) & 8) != 0)
                int32_t ecx_13 = *(arg1 + 0x264) << 1
                int32_t esi_4
                int32_t edi_5
                edi_5, esi_4 =
                    __builtin_memcpy(*(edi_1 + 0x258), *(arg1 + 0x258), ecx_13 u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_4, ecx_13 & 3)
                edi_1 = arg2
                esi = 0
            
            if (*(arg1 + 0x25c) == 0)
            label_41364e:
                int32_t i = 0
                
                if (*(arg1 + 0x264) u> 0)
                    int32_t var_10_1 = 0
                    
                    do
                        int32_t ecx_25 = esi + var_18
                        int32_t edx_2 = var_10_1 + var_14
                        
                        for (int32_t j = 0; j u< 3; j += 1)
                            if (*(edx_2 + (j << 2)) == 0xffffffff)
                                *(ecx_25 + (j << 1)) = 0xffff
                            else
                                edi_1.w = *(edx_2 + (j << 2))
                                *(ecx_25 + (j << 1)) = edi_1.w
                                edi_1 = arg2
                        
                        i += 1
                        var_10_1 += 0xc
                        esi += 6
                    while (i u< *(arg1 + 0x264))
                
                if ((*(arg1 + 0x218) & 1) != 0)
                    int32_t i_1 = 0
                    
                    if (*(arg1 + 0x264) u> 0)
                        int32_t var_10_2 = 0
                        arg2 = nullptr
                        
                        do
                            void* eax_13 = *(edi_1 + 0x250) + arg2
                            int32_t ecx_27 = *(arg1 + 0x250) + var_10_2
                            
                            for (int32_t j_1 = 0; j_1 u< 3; j_1 += 1)
                                if (*(ecx_27 + (j_1 << 2)) == 0xffffffff)
                                    *(eax_13 + (j_1 << 1)) = 0xffff
                                else
                                    esi.w = *(ecx_27 + (j_1 << 2))
                                    *(eax_13 + (j_1 << 1)) = esi.w
                            
                            i_1 += 1
                            arg2 += 6
                            var_10_2 += 0xc
                        while (i_1 u< *(arg1 + 0x264))
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
                    esi = 0
                    goto label_41364e
                
                result = 0x8007000e

if (var_14 != 0)
    int32_t* ebx_1 = *(arg1 + 0x248)
    (*(*ebx_1 + 0x30))(ebx_1)

if (var_18 != 0)
    int32_t* edi_8 = *(edi_1 + 0x248)
    (*(*edi_8 + 0x30))(edi_8)

return result

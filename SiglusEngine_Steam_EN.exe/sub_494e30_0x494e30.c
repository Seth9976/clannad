// 函数: sub_494e30
// 地址: 0x494e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i = arg1
void* i_2 = i
int32_t* edi = *(i + 4)
int32_t* var_1c = edi

if (edi != 0)
    i = *(i + 0xc)
    
    if (i s> 0)
        int32_t esi_1 = data_1be46dc
        void* i_1 = nullptr
        
        do
            int32_t var_18 = edi[3]
            int32_t var_14 = edi[2]
            int32_t var_10 = edi[1]
            int32_t var_c = *edi
            
            if (esi_1 != 0)
                if (sub_4d2220(&var_c, data_1bfe278, data_1bfe274, data_1bfe27c, data_1bfe280, 
                        &var_c, &var_10, &var_14, &var_18) != 0)
                    int32_t eax_7 = var_10 s>> 3
                    int32_t edx_3 = data_1be46d0 * eax_7
                    int32_t ecx_2 = var_c s>> 3
                    int32_t esi_4 = (var_14 s>> 3) - ecx_2
                    int32_t ebx_3 = (var_18 s>> 3) - eax_7
                    data_1be46d4 = 1
                    int32_t edx_4 = edx_3 + data_1be46dc
                    int32_t esi_5 = esi_4 + 1
                    int32_t j_1 = ebx_3 + 1
                    int32_t eax_9 = data_1be46d0 - esi_5
                    var_14 = esi_5
                    int32_t edx_5 = edx_4 + ecx_2
                    var_18 = eax_9
                    
                    if (j_1 s> 0)
                        int32_t j
                        
                        do
                            if (esi_5 s> 0)
                                int32_t edi_2 = __builtin_memset(edx_5, 0x1010101, esi_5 u>> 2 << 2)
                                int32_t ecx_5 = esi_5
                                esi_5 = var_14
                                edx_5 += esi_5
                                __builtin_memset(edi_2, 1, ecx_5 & 3)
                                eax_9 = var_18
                            
                            edx_5 += eax_9
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        edi = var_1c
                    
                    esi_1 = data_1be46dc
                
                arg1 = i_2
            
            edi = &edi[4]
            i = i_1 + 1
            var_1c = edi
            i_1 = i
        while (i s< *(arg1 + 0xc))

return i

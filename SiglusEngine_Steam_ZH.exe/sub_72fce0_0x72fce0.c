// 函数: sub_72fce0
// 地址: 0x72fce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = *(arg1 + 0x1c0)
int32_t edi = *(arg1 + 0x64)
int32_t j_3 = *(arg1 + 0x5c)
char* result = *(arg1 + 0x12c)
int32_t var_44 = edi
int32_t j_2 = j_3
char* result_1 = result

if (arg4 s> 0)
    int32_t* esi_1 = arg3
    arg2 -= esi_1
    void* ebx_1 = ebx
    int32_t i
    
    do
        _memset(*esi_1, 0, j_3)
        int32_t edx_1 = 0
        int32_t var_28_1 = 0
        
        if (edi s> 0)
            void* eax_1 = ebx
            void* ecx = eax_1 + 0x44
            
            while (true)
                char* esi_2 = *esi_1
                char* ebx_3 = *(arg2 + esi_1) + edx_1
                char* var_10_1 = esi_2
                int32_t var_20_1
                int32_t var_c_1
                int32_t ecx_4
                int16_t* edi_4
                
                if (*(eax_1 + 0x54) == 0)
                    ecx_4 = edx_1 << 2
                    var_20_1 = edi
                    edi_4 = *(eax_1 + ecx_4 + 0x44)
                    var_c_1 = 1
                else
                    var_c_1 = 0xffffffff
                    esi_2 = &esi_2[j_2 - 1]
                    ecx_4 = edx_1 << 2
                    var_10_1 = esi_2
                    var_20_1 = neg.d(edi)
                    ebx_3 = &ebx_3[(j_2 - 1) * edi]
                    edi_4 = *(ecx + ecx_4) + ((j_2 + 1) << 1)
                    eax_1 = ebx
                
                int16_t* var_14_1 = edi_4
                int32_t eax_7 = *(ecx_4 + *(eax_1 + 0x18))
                int32_t eax_10 = *(ecx_4 + *(ebx + 0x10))
                result = nullptr
                int16_t var_18_1 = 0
                int16_t var_1c_1 = 0
                int32_t j_1 = j_2
                int16_t ecx_17
                
                if (j_2 == 0)
                    ecx_17 = 0
                else
                    int32_t edx_2 = var_c_1 * 2
                    int32_t var_40_1 = edx_2
                    int32_t j
                    
                    do
                        uint32_t eax_12 = zx.d(*ebx_3)
                        ebx_3 = &ebx_3[var_20_1]
                        uint32_t eax_13 =
                            zx.d(result_1[(&result[8 + sx.d(*(edi_4 + edx_2))] s>> 4) + eax_12])
                        uint32_t ecx_12 = zx.d(*(eax_13 + eax_7))
                        *esi_2 += ecx_12.b
                        uint32_t eax_14 = eax_13 - zx.d(*(ecx_12 + eax_10))
                        uint32_t eax_15 = eax_14 * 3
                        uint32_t esi_3 = eax_15 * 2
                        uint32_t eax_16 = eax_15 + esi_3
                        *var_14_1 = var_18_1 + eax_15.w
                        edi_4 += edx_2
                        ecx_17 = var_1c_1 + eax_16.w
                        result = eax_16 + esi_3
                        var_1c_1 = eax_14.w
                        esi_2 = &var_10_1[var_c_1]
                        j = j_1
                        j_1 -= 1
                        edx_2 = var_40_1
                        var_18_1 = ecx_17
                        var_10_1 = esi_2
                        var_14_1 = edi_4
                    while (j != 1)
                    edx_1 = var_28_1
                
                esi_1 = arg3
                edx_1 += 1
                *edi_4 = ecx_17
                edi = var_44
                var_28_1 = edx_1
                
                if (edx_1 s>= edi)
                    break
                
                eax_1 = ebx
            
            ebx_1 = ebx
        
        j_3 = j_2
        result.b = *(ebx_1 + 0x54) == 0
        esi_1 = &esi_1[1]
        i = arg4
        arg4 -= 1
        *(ebx_1 + 0x54) = result.b
        arg3 = esi_1
    while (i != 1)

return result

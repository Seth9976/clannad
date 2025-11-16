// 函数: sub_730a70
// 地址: 0x730a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t (** result)(void* arg1) = (*arg1[1])(arg1, 1, 0xa0)
arg1[0x6e] = result
int32_t (** result_1)(void* arg1) = result
*result = sub_730750
result[1] = sub_730770
result[2].b = 0

if (arg1[0x44].b != 0)
    *(*arg1 + 0x14) = 0x1a
    (**arg1)(arg1)
    result = result_1

int32_t var_8 = 0

if (arg1[9] s> 0)
    int32_t* edi_1 = arg1[0x31] + 8
    int32_t* (** ecx_1)(void* arg1, int32_t* arg2, int32_t* arg3) = &result[0xd]
    int32_t* var_14_1 = edi_1
    int32_t* (** var_10_1)(void* arg1, int32_t* arg2, int32_t* arg3) = ecx_1
    int32_t ebx_2
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(edi_1[7] * *edi_1), arg1[0x48])
        int32_t temp0_2 = divs.dp.d(sx.q(edi_1[8] * edi_1[1]), arg1[0x49])
        int32_t edx_3 = arg1[0x46]
        result = arg1[0x47]
        ecx_1[0xc] = temp0_2
        ebx_2 = var_8
        
        if (var_14_1[0xb].b != 0)
            ebx_2 = var_8
            
            if (temp0_1 != edx_3 || temp0_2 != result)
                if (temp0_1 * 2 == edx_3 && temp0_2 == result)
                    *ecx_1 = sub_730990
                else if (temp0_1 * 2 != edx_3 || temp0_2 * 2 != result)
                    int32_t eax_15
                    int32_t edx_4
                    edx_4:eax_15 = sx.q(edx_3)
                    int32_t eax_18
                    int32_t edx_6
                    
                    if (mods.dp.d(edx_4:eax_15, temp0_1) == 0)
                        edx_6:eax_18 = sx.q(result)
                    
                    if (mods.dp.d(edx_4:eax_15, temp0_1) != 0
                            || mods.dp.d(edx_6:eax_18, temp0_2) != 0)
                        *(*arg1 + 0x14) = 0x27
                        (**arg1)(arg1)
                    else
                        *var_10_1 = sub_730860
                        *(var_8 + result_1 + 0x8c) = (divs.dp.d(edx_4:eax_15, temp0_1)).b
                        *(var_8 + result_1 + 0x96) = (divs.dp.d(edx_6:eax_18, temp0_2)).b
                else
                    *var_10_1 = sub_7309f0
                
                int32_t ecx_6 = arg1[0x46]
                int32_t edi_5 = arg1[0x17] - 1 + ecx_6
                result =
                    (*(arg1[1] + 8))(arg1, 1, edi_5 - mods.dp.d(sx.q(edi_5), ecx_6), arg1[0x47])
                ecx_1 = var_10_1
                ebx_2 = var_8
                ecx_1[-0xa] = result
            else
                *ecx_1 = sub_730840
        else
            *ecx_1 = sub_730850
        
        ecx_1 = &ecx_1[1]
        var_8 = ebx_2 + 1
        edi_1 = &var_14_1[0x16]
        var_10_1 = ecx_1
        var_14_1 = edi_1
    while (ebx_2 + 1 s< arg1[9])

return result

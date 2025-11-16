// 函数: sub_46ea00
// 地址: 0x46ea00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg5

if (result s>= 2)
    int32_t i_1 = result s>> 1
    int32_t edi_2 = result - i_1
    int32_t* var_c_1 = arg4
    void* eax = &arg4[edi_2]
    int32_t* var_8_1 = eax
    
    if (edi_2 s> 1)
        sub_46ea00(arg4, edi_2)
        eax = var_8_1
    
    if (i_1 s> 1)
        sub_46ea00(eax, i_1)
    
    int32_t* esi_2 = data_1cd63f0
label_46ea5c:
    int32_t* eax_1 = var_8_1
    int32_t i
    
    do
        int32_t ecx_1 = *eax_1
        int32_t eax_3 = *var_c_1
        
        if (sub_46e840(eax_3, arg2, arg3, eax_3, ecx_1) == 0)
            var_c_1 = &var_c_1[1]
            *esi_2 = eax_3
            esi_2 = &esi_2[1]
            int32_t temp0_1 = edi_2
            edi_2 -= 1
            
            if (temp0_1 != 1)
                goto label_46ea5c
            
            goto label_46eab4
        
        *esi_2 = ecx_1
        esi_2 = &esi_2[1]
        eax_1 = &var_8_1[1]
        var_8_1 = eax_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t eax_7
    int32_t* edx_2
    
    if (edi_2 == 0)
    label_46eab4:
        edx_2 = var_8_1
        eax_7 = i_1 << 2
    else
        edx_2 = var_c_1
        eax_7 = edi_2 << 2
    
    sub_4d1c30(eax_7, edx_2, esi_2, eax_7)
    result = arg5 << 2
    sub_4d1c30(result, data_1cd63f0, arg4, result)

return result

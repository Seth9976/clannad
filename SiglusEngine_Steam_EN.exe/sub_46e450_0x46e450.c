// 函数: sub_46e450
// 地址: 0x46e450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4

if (result s>= 2)
    int32_t* var_c_1 = arg2
    int32_t i_1 = result s>> 1
    int32_t edi_2 = result - i_1
    int32_t* var_8_1 = &arg2[edi_2]
    
    if (edi_2 s> 1)
        sub_46e450(edi_2)
    
    if (i_1 s> 1)
        sub_46e450(i_1)
    
    int32_t* esi_1 = data_1cd5398
label_46e4a6:
    int32_t* eax_1 = var_8_1
    int32_t i
    
    do
        int32_t ecx_1 = *eax_1
        int32_t eax_3 = *var_c_1
        
        if (sub_46e220(eax_3, eax_3, arg3, ecx_1) == 0)
            var_c_1 = &var_c_1[1]
            *esi_1 = eax_3
            esi_1 = &esi_1[1]
            int32_t temp0_1 = edi_2
            edi_2 -= 1
            
            if (temp0_1 != 1)
                goto label_46e4a6
            
            goto label_46e502
        
        *esi_1 = ecx_1
        esi_1 = &esi_1[1]
        eax_1 = &var_8_1[1]
        var_8_1 = eax_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t eax_7
    int32_t* edx_2
    
    if (edi_2 == 0)
    label_46e502:
        edx_2 = var_8_1
        eax_7 = i_1 << 2
    else
        edx_2 = var_c_1
        eax_7 = edi_2 << 2
    
    sub_4d1c30(eax_7, edx_2, esi_1, eax_7)
    result = arg4 << 2
    sub_4d1c30(result, data_1cd5398, arg2, result)

return result

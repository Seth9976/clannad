// 函数: ___init_numeric
// 地址: 0x751703
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** var_18 = arg1
int32_t var_14 = 0
int32_t result
int32_t* var_8_1
void** esi_1
int32_t* edi_1

if (arg1[0x2c] != 0 || arg1[0x2b] != 0)
    int32_t result_1 = 1
    void** eax_1 = sub_74cccf(1, 0x50)
    
    if (eax_1 == 0)
        return 1
    
    __builtin_memcpy(eax_1, arg1[0x21], 0x50)
    int32_t* eax_2 = sub_74cd17(4)
    var_8_1 = eax_2
    
    if (eax_2 == 0)
        _free(eax_1)
        return 1
    
    edi_1 = nullptr
    *eax_2 = 0
    
    if (arg1[0x2c] == 0)
        esi_1 = eax_1
        *esi_1 = data_b4c190
        esi_1[1] = data_b4c194
        esi_1[2] = data_b4c198
        esi_1[0xc] = data_b4c1c0
        esi_1[0xd] = data_b4c1c4
    label_751872:
        *var_8_1 = 1
        
        if (edi_1 != 0)
            *edi_1 = 1
        
        goto label_75187a
    
    int32_t* eax_3 = sub_74cd17(4)
    
    if (eax_3 == 0)
        goto label_751836
    
    *eax_3 = 0
    int32_t edi_3 = arg1[0x2c]
    int32_t esi_6 = sub_74d4e6(&var_18, 1, edi_3, 0xe, eax_1)
        | sub_74d4e6(&var_18, 1, edi_3, 0xf, &eax_1[1])
        | sub_74d4e6(&var_18, 1, edi_3, 0x10, &eax_1[2])
        | sub_74d4e6(&var_18, 2, edi_3, 0xe, &eax_1[0xc])
    
    if ((sub_74d4e6(&var_18, 2, edi_3, 0xf, &eax_1[0xd]) | esi_6) == 0)
        char* edx_2 = eax_1[2]
        
        while (*edx_2 != 0)
            int32_t eax_15
            eax_15.b = *edx_2
            
            if (eax_15.b s>= 0x30 && eax_15.b s<= 0x39)
                eax_15.b -= 0x30
                *edx_2 = eax_15.b
            else if (eax_15.b == 0x3b)
                char* esi_7 = edx_2
                
                do
                    eax_15.b = esi_7[1]
                    *esi_7 = eax_15.b
                    esi_7 = &esi_7[1]
                while (*esi_7 != 0)
                
                continue
            
            edx_2 = &edx_2[1]
        
        edi_1 = eax_3
        esi_1 = eax_1
        goto label_751872
    
    ___free_lconv_num(eax_1)
    result_1 = 0xffffffff
label_751836:
    _free(eax_1)
    _free(var_8_1)
    result = result_1
else
    edi_1 = nullptr
    var_8_1 = nullptr
    esi_1 = &data_b4c190
label_75187a:
    int32_t* edx_3 = arg1[0x1f]
    
    if (edx_3 != 0)
        *edx_3
        *edx_3 -= 1
    
    int32_t* eax_17 = arg1[0x1e]
    
    if (eax_17 != 0)
        int32_t ecx_11 = *eax_17
        *eax_17 -= 1
        
        if (ecx_11 == 1)
            _free(arg1[0x1e])
            _free(arg1[0x21])
    
    arg1[0x1e] = var_8_1
    result = 0
    arg1[0x1f] = edi_1
    arg1[0x21] = esi_1
return result

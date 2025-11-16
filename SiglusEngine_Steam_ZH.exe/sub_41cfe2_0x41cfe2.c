// 函数: sub_41cfe2
// 地址: 0x41cfe2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t var_3c
(*(*ebx + 0x30))(ebx, &var_3c)
int32_t result_1 = 0
int32_t var_14
int32_t result = (*(*ebx + 0x34))(ebx, &var_14, 0, 0)

if (result s>= 0)
    int32_t edi
    int32_t var_48_1 = edi
    int32_t* edi_1 = arg2
    int32_t var_1c
    int32_t result_2 = (*(*edi_1 + 0x34))(edi_1, &var_1c, 0, 0)
    
    if (result_2 s>= 0)
        int32_t eax_3 = var_3c
        uint32_t var_20
        uint32_t ecx_3
        
        if (eax_3 == 0x31545844 || eax_3 == 0x32545844 || eax_3 == 0x33545844 || eax_3 == 0x34545844
                || eax_3 == 0x35545844)
            ecx_3 = (var_20 + 3) u>> 2
            var_20 = ecx_3
        else
            ecx_3 = var_20
        
        int32_t edx_1 = var_1c
        int32_t eax_4 = var_14
        int32_t var_c_1 = edx_1
        
        if (edx_1 s>= eax_4)
            var_c_1 = eax_4
        
        int32_t var_10
        int32_t eax_5 = var_10
        int32_t var_18
        int32_t edx_2 = var_18
        int32_t var_8_1 = 0
        
        if (ecx_3 u> 0)
            do
                int32_t esi_1
                int32_t edi_3
                edi_3, esi_1 = __builtin_memcpy(edx_2, eax_5, var_c_1 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_1, var_c_1 & 3)
                eax_5 += var_14
                edx_2 += var_1c
                var_8_1 += 1
            while (var_8_1 u< var_20)
            
            edi_1 = arg2
            ebx = arg1
            result_1 = 0
        
        (*(*edi_1 + 0x38))(edi_1)
    else
        result_1 = result_2
    
    (*(*ebx + 0x38))(ebx)
    result = result_1

return result

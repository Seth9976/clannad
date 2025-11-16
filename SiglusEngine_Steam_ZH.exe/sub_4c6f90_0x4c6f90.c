// 函数: sub_4c6f90
// 地址: 0x4c6f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
void*** eax = sub_42cfa1(0x60)
void*** result_1
void*** result

if (eax == 0)
    result_1 = nullptr
    result = nullptr
else
    result = sub_4c6e83(eax)
    result_1 = result

if (result != 0)
    int32_t edi
    int32_t var_18_1 = edi
    __builtin_memcpy(&result[4], arg1 + 0x10, 0x20)
    result[0xc] = *(arg1 + 0x30)
    result[0xd] = *(arg1 + 0x34)
    result[0xe] = *(arg1 + 0x38)
    result[0x15] = *(arg1 + 0x54)
    result[0x16] = *(arg1 + 0x58)
    
    if (*(arg1 + 0x3c) == 0)
        goto label_4c7006
    
    int32_t eax_2 = (*(**(arg1 + 0x3c) + 4))()
    result_1[0xf] = eax_2
    
    if (eax_2 != 0)
        result = result_1
    label_4c7006:
        
        if (*(arg1 + 0x40) == 0)
            goto label_4c7021
        
        int32_t eax_4 = (*(**(arg1 + 0x40) + 4))()
        result_1[0x10] = eax_4
        
        if (eax_4 != 0)
            result = result_1
        label_4c7021:
            int32_t var_c_1 = 0
            void* esi_2 = arg1 + 0x44
            void* edi_3 = result - arg1
            
            while (true)
                if (*esi_2 != 0)
                    int32_t eax_6 = (*(**esi_2 + 4))()
                    *(edi_3 + esi_2) = eax_6
                    
                    if (eax_6 == 0)
                        break
                    
                    result = result_1
                
                var_c_1 += 1
                esi_2 += 4
                
                if (var_c_1 u>= 4)
                    return result
    
    result = nullptr

return result

// 函数: sub_46c8cf
// 地址: 0x46c8cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void*** eax = sub_42cfa1(0x50)
void*** result_1
void*** result

if (eax == 0)
    result_1 = nullptr
    result = nullptr
else
    result = sub_46beac(eax)
    result_1 = result

if (result != 0)
    result[5] = *(arg1 + 0x14)
    result[6] = *(arg1 + 0x18)
    int32_t edi
    int32_t var_14_1 = edi
    result[7] = *(arg1 + 0x1c)
    result[0xa] = *(arg1 + 0x28)
    __builtin_memcpy(&result[0xc], arg1 + 0x30, 0x20)
    
    if (*(arg1 + 0x10) == 0)
        goto label_46c93a
    
    int32_t eax_2 = (*(**(arg1 + 0x10) + 4))()
    result_1[4] = eax_2
    
    if (eax_2 == 0)
        result = nullptr
    else
        result = result_1
    label_46c93a:
        
        if (*(arg1 + 0x20) == 0)
            goto label_46c953
        
        int32_t eax_4 = (*(**(arg1 + 0x20) + 4))()
        result_1[8] = eax_4
        
        if (eax_4 == 0)
            result = nullptr
        else
            result = result_1
        label_46c953:
            
            if (*(arg1 + 0x24) != 0)
                int32_t eax_6 = (*(**(arg1 + 0x24) + 4))()
                result_1[9] = eax_6
                
                result = eax_6 != 0 ? result_1 : nullptr

return result

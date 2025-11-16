// 函数: sub_46c4bf
// 地址: 0x46c4bf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x30)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46b9a9(eax)

if (result != 0)
    result[4] = *(arg1 + 0x10)
    result[8] = *(arg1 + 0x20)
    result[9] = *(arg1 + 0x24)
    result[0xa] = *(arg1 + 0x28)
    result[0xb] = *(arg1 + 0x2c)
    int32_t eax_8
    
    if (*(arg1 + 0x14) != 0)
        eax_8 = (*(**(arg1 + 0x14) + 4))()
        result[5] = eax_8
    
    if (*(arg1 + 0x14) == 0 || eax_8 != 0)
        int32_t eax_10
        
        if (*(arg1 + 0x18) != 0)
            eax_10 = (*(**(arg1 + 0x18) + 4))()
            result[6] = eax_10
        
        if (*(arg1 + 0x18) == 0 || eax_10 != 0)
            int32_t eax_12
            
            if (*(arg1 + 0x1c) != 0)
                eax_12 = (*(**(arg1 + 0x1c) + 4))()
                result[7] = eax_12
            
            if (*(arg1 + 0x1c) == 0 || eax_12 != 0)
                return result

return nullptr

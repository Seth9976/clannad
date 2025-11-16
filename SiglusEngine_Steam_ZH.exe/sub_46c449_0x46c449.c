// 函数: sub_46c449
// 地址: 0x46c449
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x24)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46b8ee(eax)

if (result != 0)
    result[4] = *(arg1 + 0x10)
    result[5] = *(arg1 + 0x14)
    int32_t eax_5
    
    if (*(arg1 + 0x18) != 0)
        eax_5 = (*(**(arg1 + 0x18) + 4))()
        result[6] = eax_5
    
    if (*(arg1 + 0x18) == 0 || eax_5 != 0)
        int32_t eax_7
        
        if (*(arg1 + 0x1c) != 0)
            eax_7 = (*(**(arg1 + 0x1c) + 4))()
            result[7] = eax_7
        
        if (*(arg1 + 0x1c) == 0 || eax_7 != 0)
            int32_t eax_9
            
            if (*(arg1 + 0x20) != 0)
                eax_9 = (*(**(arg1 + 0x20) + 4))()
                result[8] = eax_9
            
            if (*(arg1 + 0x20) == 0 || eax_9 != 0)
                return result

return nullptr

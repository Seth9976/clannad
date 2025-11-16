// 函数: sub_46c547
// 地址: 0x46c547
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x1c)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46ba8f(eax)

if (result != 0)
    result[4] = *(arg1 + 0x10)
    int32_t eax_4
    
    if (*(arg1 + 0x14) != 0)
        eax_4 = (*(**(arg1 + 0x14) + 4))()
        result[5] = eax_4
    
    if (*(arg1 + 0x14) == 0 || eax_4 != 0)
        int32_t eax_6
        
        if (*(arg1 + 0x18) != 0)
            eax_6 = (*(**(arg1 + 0x18) + 4))()
            result[6] = eax_6
        
        if (*(arg1 + 0x18) == 0 || eax_6 != 0)
            return result

return nullptr

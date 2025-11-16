// 函数: sub_46ca89
// 地址: 0x46ca89
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x18)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46c252(eax)

if (result != 0)
    int32_t eax_3
    
    if (*(arg1 + 0x10) != 0)
        eax_3 = (*(**(arg1 + 0x10) + 4))()
        result[4] = eax_3
    
    if (*(arg1 + 0x10) == 0 || eax_3 != 0)
        int32_t eax_5
        
        if (*(arg1 + 0x14) != 0)
            eax_5 = (*(**(arg1 + 0x14) + 4))()
            result[5] = eax_5
        
        if (*(arg1 + 0x14) == 0 || eax_5 != 0)
            return result

return nullptr

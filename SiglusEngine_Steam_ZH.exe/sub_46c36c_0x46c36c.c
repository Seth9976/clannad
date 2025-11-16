// 函数: sub_46c36c
// 地址: 0x46c36c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x18)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46b68b(eax)

if (result != 0)
    result[5] = *(arg1 + 0x14)
    int32_t eax_4
    
    if (*(arg1 + 8) != 0)
        eax_4 = (*(**(arg1 + 8) + 4))()
        result[2] = eax_4
    
    if (*(arg1 + 8) == 0 || eax_4 != 0)
        int32_t eax_6
        
        if (*(arg1 + 0xc) != 0)
            eax_6 = (*(**(arg1 + 0xc) + 4))()
            result[3] = eax_6
        
        if (*(arg1 + 0xc) == 0 || eax_6 != 0)
            return result

return nullptr

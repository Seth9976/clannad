// 函数: sub_46c5a2
// 地址: 0x46c5a2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x18)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46bb21(eax)

if (result != 0)
    result[5] = *(arg1 + 0x14)
    int32_t eax_4
    
    if (*(arg1 + 0x10) != 0)
        eax_4 = (*(**(arg1 + 0x10) + 4))()
        result[4] = eax_4
    
    if (*(arg1 + 0x10) == 0 || eax_4 != 0)
        return result

return nullptr

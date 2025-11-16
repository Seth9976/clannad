// 函数: sub_46c3f7
// 地址: 0x46c3f7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x20)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46b859(eax)

if (result != 0)
    result[4] = *(arg1 + 0x10)
    result[5] = *(arg1 + 0x14)
    result[6] = *(arg1 + 0x18)
    int32_t eax_6
    
    if (*(arg1 + 0x1c) != 0)
        eax_6 = (*(**(arg1 + 0x1c) + 4))()
        result[7] = eax_6
    
    if (*(arg1 + 0x1c) == 0 || eax_6 != 0)
        return result

return nullptr

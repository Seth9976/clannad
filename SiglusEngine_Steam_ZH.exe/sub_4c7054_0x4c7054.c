// 函数: sub_4c7054
// 地址: 0x4c7054
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void*** eax = sub_42cfa1(0x2c)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_4c6f13(eax)

if (result != 0)
    result[4] = *(arg1 + 0x10)
    result[5] = *(arg1 + 0x14)
    result[6] = *(arg1 + 0x18)
    result[7] = *(arg1 + 0x1c)
    result[8] = *(arg1 + 0x20)
    result[9] = *(arg1 + 0x24)
    int32_t eax_9
    
    if (*(arg1 + 0x28) != 0)
        eax_9 = (*(**(arg1 + 0x28) + 4))()
        result[0xa] = eax_9
    
    if (*(arg1 + 0x28) == 0 || eax_9 != 0)
        return result

return nullptr

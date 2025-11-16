// 函数: sub_46c978
// 地址: 0x46c978
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void*** eax = sub_42cfa1(0x40)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46bfb3(eax)

if (result != 0)
    int32_t edi
    int32_t var_14_1 = edi
    result[4] = *(arg1 + 0x10)
    void* edi_2 = &result[5]
    void* esi_2 = arg1 + 0x14
    *edi_2 = *esi_2
    void* edi_3 = edi_2 + 4
    void* esi_3 = esi_2 + 4
    *edi_3 = *esi_3
    *(edi_3 + 4) = *(esi_3 + 4)
    __builtin_memcpy(&result[8], arg1 + 0x20, 0x20)
    
    if (*(arg1 + 0x10) != 4)
        return result
    
    int32_t* eax_3 = *(arg1 + 0x18)
    
    if (eax_3 == 0)
        return result
    
    int32_t eax_4 = sub_46b5aa(eax_3)
    *(arg1 + 0x18) = eax_4
    
    if (eax_4 != 0)
        return result

return nullptr

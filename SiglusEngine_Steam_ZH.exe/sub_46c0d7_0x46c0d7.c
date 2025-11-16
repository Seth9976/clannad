// 函数: sub_46c0d7
// 地址: 0x46c0d7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void* const result = sub_46b56e(arg1, arg2)

if (result == 0)
    return result

int32_t* esi_1 = arg1 + 0x10
int32_t eax = *esi_1
int32_t* edi_2 = arg2 + 0x10

if (eax == *edi_2)
    int32_t i = 4
    bool cond:1_1 = false
    
    while (i != 0)
        int32_t temp1_1 = *esi_1
        int32_t temp2_1 = *edi_2
        cond:1_1 = temp1_1 != temp2_1
        esi_1 = &esi_1[1]
        edi_2 = &edi_2[1]
        i -= 1
        
        if (temp1_1 != temp2_1)
            break
    
    if (not(cond:1_1))
        return 1
    
    if (eax == 4 && sub_46b589(*(arg1 + 0x18), *(arg2 + 0x18)) != 0)
        return 1

return nullptr

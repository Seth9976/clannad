// 函数: sub_46c2f3
// 地址: 0x46c2f3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1
result = nullptr
int32_t edi
int32_t var_10 = edi
int32_t* i = arg1
int32_t* edi_1 = &result

while (i != 0)
    if (i[1] != 1)
        *edi_1 = (*(*i + 4))()
        break
    
    void*** eax_1 = sub_42cfa1(0x14)
    void*** eax_2
    
    if (eax_1 == 0)
        eax_2 = nullptr
    else
        eax_2 = sub_46b5ec(eax_1)
    
    *edi_1 = eax_2
    
    if (eax_2 == 0)
        break
    
    eax_2[4] = i[4]
    
    if (i[2] != 0)
        *(*edi_1 + 8) = (*(*i[2] + 4))()
        
        if (*(*edi_1 + 8) == 0)
            *edi_1 = 0
            break
    
    i = i[3]
    edi_1 = *edi_1 + 0xc

return result

// 函数: sub_43782f
// 地址: 0x43782f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t edi
int32_t var_10 = edi
void* edi_1 = arg1

while (true)
    if (edi_1 == 0)
        int32_t result
        result.b = esi == 0
        return result
    
    int32_t eax_1 = *(edi_1 + 4)
    
    if (eax_1 == 1)
        if (esi == 0)
            break
        
        if (*(esi + 4) == eax_1)
            if (sub_43782f(*(edi_1 + 8), *(esi + 8)) == 0)
                break
            
            edi_1 = *(edi_1 + 0xc)
            esi = *(esi + 0xc)
            continue
    
    if (esi == 0)
        break
    
    if (eax_1 != *(esi + 4))
        break
    
    if (eax_1 == 6)
        esi = *(esi + 0x18)
        edi_1 = *(edi_1 + 0x18)
    else if (eax_1 == 8)
        if (*(edi_1 + 0x14) != *(esi + 0x14))
            break
        
        esi = *(esi + 0x10)
        edi_1 = *(edi_1 + 0x10)
    else
        if (eax_1 == 9)
            if (*(edi_1 + 0x10) == *(esi + 0x10) && *(edi_1 + 0x14) == *(esi + 0x14)
                    && *(edi_1 + 0x18) == *(esi + 0x18) && *(edi_1 + 0x1c) == *(esi + 0x1c))
                return 1
            
            break
        
        if (eax_1 != 0xb)
            break
        
        esi = *(esi + 0x20)
        edi_1 = *(edi_1 + 0x20)

return 0

// 函数: sub_6c8870
// 地址: 0x6c8870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t eax = arg2
int32_t* esi = arg3
int32_t var_8_1 = eax

if (esi == eax)
    return arg4

int32_t* ebx = arg4

do
    void* edx = esi[1]
    int32_t edi_1 = *esi
    
    if (edx != 0)
        *(edx + 4) += 1
        eax = var_8_1
    
    *ebx = edi_1
    int32_t* edi_2 = ebx[1]
    ebx[1] = edx
    
    if (edi_2 != 0)
        bool cond:0_1 = edi_2[1] != 1
        edi_2[1] -= 1
        
        if (not(cond:0_1))
            (*(*edi_2 + 4))()
            bool cond:1_1 = edi_2[2] != 1
            edi_2[2]
            edi_2[2] -= 1
            
            if (not(cond:1_1))
                (*(*edi_2 + 8))()
        
        eax = var_8_1
    
    esi = &esi[2]
    ebx = &ebx[2]
while (esi != eax)

return ebx

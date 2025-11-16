// 函数: sub_408829
// 地址: 0x408829
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* eax = arg1
int16_t* ecx = arg2

if (*eax == 0xff)
label_40888d:
    
    if (*ecx == 0xff)
        return 1
else
    int32_t edi
    int32_t var_c_1 = edi
    void* edi_2 = ecx - eax
    
    do
        int16_t edx = *ecx
        
        if (edx == 0xff)
            break
        
        if (edx != *eax && *(edi_2 + eax + 2) != eax[1])
            break
        
        edx.b = ecx[2].b
        
        if (edx.b != eax[2].b)
            break
        
        edx.b = *(ecx + 5)
        
        if (edx.b != *(eax + 5))
            break
        
        edx.b = ecx[3].b
        
        if (edx.b != eax[3].b)
            break
        
        edx.b = *(ecx + 7)
        
        if (edx.b != *(eax + 7))
            break
        
        eax = &eax[4]
        ecx = &ecx[4]
    while (*eax != 0xff)
    
    if (*eax == 0xff)
        goto label_40888d

return 0

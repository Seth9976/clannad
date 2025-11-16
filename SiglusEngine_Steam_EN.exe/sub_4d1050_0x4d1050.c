// 函数: sub_4d1050
// 地址: 0x4d1050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
char* edi = arg2

if (esi == 0)
    return 0xffffffff

if (edi == 0)
    return 1

arg1.b = *esi

while (arg1.b != 0)
    arg2.b = *edi
    
    if (arg2.b == 0)
        return 2
    
    void* eax
    
    if (arg1.b != arg2.b)
        if (arg1.b u>= 0x80 && (arg1.b u< 0xa0 || arg1.b u> 0xdf) && arg1.b u< 0xfe)
            eax.b = *edi
            
            if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                return (sbb.d(eax, eax, eax.b u< *esi) & 2) - 1
            
            return 0xffffffff
        
        if (arg2.b u>= 0x80 && (arg2.b u< 0xa0 || arg2.b u> 0xdf) && arg2.b u< 0xfe)
            return 1
        
        if (arg1.b - 0x61 u<= 0x19)
            arg1.b -= 0x20
        
        if ((&arg2[0xffffff9f]).b u<= 0x19)
            arg2.b -= 0x20
        
        if (arg1.b u> arg2.b)
            return 1
        
        if (arg1.b u< arg2.b)
            return 0xffffffff
        
        esi = &esi[1]
        edi = &edi[1]
    else if (arg1.b u< 0x80)
        esi = &esi[1]
        edi = &edi[1]
    else if (arg1.b u< 0xa0)
        if (arg1.b u< 0xfe)
            goto label_4d10ed
        
        esi = &esi[1]
        edi = &edi[1]
    else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
        esi = &esi[1]
        edi = &edi[1]
    else
    label_4d10ed:
        eax.b = esi[1]
        
        if (eax.b != edi[1])
            eax.b = esi[1]
            return (sbb.d(eax, eax, edi[1] u< eax.b) & 2) - 1
        
        esi = &esi[2]
        edi = &edi[2]
    arg1.b = *esi

if (*edi == 0)
    return 0

return 0xfffffffe

// 函数: sub_4d0f10
// 地址: 0x4d0f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0xffffffff

if (arg2 == 0)
    return 1

int32_t eax
eax.b = *arg1
int32_t ebx
int32_t var_4 = ebx

while (eax.b != 0)
    ebx.b = *arg2
    
    if (ebx.b == 0)
        return 2
    
    if (eax.b != ebx.b)
        eax.b = *arg1
        
        if (eax.b u< 0x80 || (eax.b u>= 0xa0 && eax.b u<= 0xdf) || eax.b u>= 0xfe)
            arg1.b = *arg2
            
            if (arg1.b u>= 0x80 && (arg1.b u< 0xa0 || arg1.b u> 0xdf) && arg1.b u< 0xfe)
                return 1
        else
            arg1.b = *arg2
            
            if (arg1.b u< 0x80)
                return 0xffffffff
            
            if (arg1.b u< 0xa0)
                if (arg1.b u>= 0xfe)
                    return 0xffffffff
            else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
                return 0xffffffff
        
        return (sbb.d(eax, eax, arg1.b u< eax.b) & 2) - 1
    
    if (eax.b u< 0x80)
        arg1 = &arg1[1]
        arg2 = &arg2[1]
    else if (eax.b u< 0xa0)
        if (eax.b u< 0xfe)
            goto label_4d0f4e
        
        arg1 = &arg1[1]
        arg2 = &arg2[1]
    else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
        arg1 = &arg1[1]
        arg2 = &arg2[1]
    else
    label_4d0f4e:
        eax.b = arg1[1]
        
        if (eax.b != arg2[1])
            eax.b = arg1[1]
            return (sbb.d(eax, eax, arg2[1] u< eax.b) & 2) - 1
        
        arg1 = &arg1[2]
        arg2 = &arg2[2]
    
    eax.b = *arg1

if (*arg2 == 0)
    return 0

return 0xfffffffe

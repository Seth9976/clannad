// 函数: sub_4d1280
// 地址: 0x4d1280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
int32_t* eax = arg5
char* ebx = arg3
*eax = 0

if (ebx == 0)
    return &arg3[1]

int32_t** edi = arg4

while (true)
    *edi = nullptr
    
    if (ebx == 0)
        break
    
    int32_t esi_1 = 0
    char* edx = ebx
    int32_t ecx = 0
    
    while (true)
        eax.b = *edx
        
        if (eax.b == 0)
            break
        
        if (eax.b != 0x20 && eax.b != 0x2c && eax.b u> 0x1f)
            break
        
        edx = &edx[1]
    
    while (true)
        eax.b = *edx
        
        if (eax.b u>= 0x80)
            if (eax.b u< 0xa0)
                if (eax.b u< 0xfe || eax.b == 0)
                    goto label_4d132a
                
                goto label_4d12ec
            
            if ((eax.b u<= 0xdf || eax.b u>= 0xfe) && eax.b != 0)
                goto label_4d12ec
            
            goto label_4d132a
        
        if (eax.b == 0)
        label_4d132a:
            
            if (ecx != 0)
                break
        else
        label_4d12ec:
            
            if (eax.b u< 0x30 || eax.b u> 0x39)
                if (ecx != 0)
                    break
                
                if (eax.b == 0x2d)
                    esi_1 ^= 1
                    edx = &edx[1]
                    continue
                else if (eax.b == 0x2b)
                    edx = &edx[1]
                    continue
            else
                ecx = 1
                *edi = zx.d(eax.b) + *edi * 0xa - 0x30
                edx = &edx[1]
                continue
        
        eax = arg5
        goto label_4d1319
    
    if (esi_1 != 0)
        *edi = neg.d(*edi)
    
    eax = arg5
    edi = &edi[1]
    ebx = edx
    *eax += 1
    
    if (*eax == 0x400)
        break

label_4d1319:

if (*eax == 0)
    return 2

if (arg2 != 0)
    *arg2 = ebx

return 0

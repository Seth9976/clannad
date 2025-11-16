// 函数: sub_66e9f0
// 地址: 0x66e9f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t edi = 0

while (true)
    if (arg1[3].b == 0)
        char* ecx = *arg1
        
        if (ecx == arg1[1])
            arg1[2] = 0xffffffff
            break
        
        if (arg1[2] == 0xa)
            arg1[4] += 1
        
        arg1[2] = zx.d(*ecx)
        *arg1 = &ecx[1]
    else
        arg1[3].b = 0
    
    int32_t eax_3 = arg1[2]
    
    if (eax_3 == 0xffffffff)
        break
    
    int32_t eax_4
    
    if (eax_3 - 0x30 u<= 9)
        eax_4 = eax_3 - 0x30
    else if (eax_3 - 0x41 u> 5)
        if (eax_3 - 0x61 u> 5)
            if (arg1[2] == 0xffffffff)
                break
            
            arg1[3].b = 1
            return 0xffffffff
        
        eax_4 = eax_3 - 0x57
    else
        eax_4 = eax_3 - 0x37
    
    edi += 1
    result = (result << 4) + eax_4
    
    if (edi s>= 4)
        return result

return 0xffffffff

// 函数: sub_1a97440
// 地址: 0x1a97440
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t ecx_1 = zx.d(*arg3)
int32_t result = 0
void* edi_1 = arg1 + ((arg2 - *(arg1 + 0x10)) s>> 0xc << 3) + 0x18

if (ecx_1 u<= arg4)
    if (ecx_1 u>= arg4)
        return result
    
    void* esi_1 = &arg3[arg4]
    
    if (esi_1 u> &arg2[0x3e])
        return result
    
    void* eax_6 = &arg3[ecx_1]
    bool cond:2_1
    
    while (true)
        cond:2_1 = eax_6 != esi_1
        
        if (eax_6 u>= esi_1)
            break
        
        if (*eax_6 != 0)
            cond:2_1 = eax_6 != esi_1
            break
        
        eax_6 += 1
    
    if (cond:2_1)
        return result
    
    eax_6.b = arg4.b
    *arg3 = eax_6.b
    void* eax_7 = *arg2
    
    if (arg3 u<= eax_7 && esi_1 u> eax_7)
        if (esi_1 u>= &arg2[0x3e])
            arg2[1] = 0
            *arg2 = &arg2[2]
        else
            int32_t eax_9 = 0
            *arg2 = esi_1
            
            if (*esi_1 == 0)
                do
                    eax_9 += 1
                while (*(esi_1 + eax_9) == 0)
            
            arg2[1] = eax_9
    
    *edi_1 += ecx_1 - arg4
else
    *arg3 = arg4.b
    *edi_1 += ecx_1 - arg4
    *(edi_1 + 4) = 0xf1

return 1

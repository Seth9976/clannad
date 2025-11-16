// 函数: sub_438042
// 地址: 0x438042
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1

while (true)
    if (esi != 0)
        int32_t eax_1 = *(esi + 4)
        
        if (eax_1 == 1)
            if (sub_438042(*(esi + 8)) != 0)
                return 1
            
            esi = *(esi + 0xc)
            continue
        
        if (eax_1 == 0xe)
            break
        
        if (eax_1 == 0xd)
            int32_t eax_3 = *(esi + 0x1c)
            bool cond:0_1
            
            if (eax_3 s> 0x17)
                if (eax_3 s< 0x19)
                    return 1
                
                cond:0_1 = eax_3 s<= 0x1a
            else if (eax_3 s>= 0x16)
                esi = *(esi + 0x20)
                continue
                continue
            else
                if (eax_3 s< 0)
                    return 1
                
                if (eax_3 s> 1)
                    if (eax_3 s<= 0x13)
                        return 1
                    
                    cond:0_1 = eax_3 s<= 0x15
                else
                    esi = *(esi + 0x20)
                    continue
                    continue
            
            if (not(cond:0_1))
                return 1
    
    return 0

int32_t result
result.b = *(esi + 0x10) != 6
return result

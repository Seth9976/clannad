// 函数: sub_4380be
// 地址: 0x4380be
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t __saved_ecx
int32_t __saved_ecx_3 = __saved_ecx

while (true)
    if (esi != 0)
        int32_t eax_1 = *(esi + 4)
        
        if (eax_1 == 1)
            if (sub_4380be(*(esi + 8)) == 0)
                return 0
            
            esi = *(esi + 0xc)
            continue
        
        if (eax_1 == 0xe)
            break
        
        if (eax_1 == 0xd)
            int32_t eax_3 = *(esi + 0x1c)
            int32_t var_10_3
            
            if (eax_3 s< 0x14)
            label_4381b8:
                
                if (sub_4380be(*(esi + 0x20)) == 0)
                    return 0
                
                var_10_3 = *(esi + 0x24)
            else
                if (eax_3 s<= 0x15 || eax_3 == 0x19)
                    return 0
                
                if (eax_3 != 0x1a)
                    if (eax_3 != 0x1b)
                        goto label_4381b8
                    
                    void* esi_1 = *(esi + 0x24)
                    
                    if (esi_1 == 0 || *(esi_1 + 4) != 0xd)
                        return 0
                    
                    esi = *(esi_1 + 0x24)
                    continue
                
                int32_t eax_6 = *(*(*(esi + 0x20) + 8) + 0x18)
                
                if (eax_6 s> 0x46)
                    if (eax_6 s>= 0x49 && (eax_6 s<= 0x4b || (eax_6 s> 0x4d
                            && (eax_6 s<= 0x50 || (eax_6 s> 0x52 && eax_6 s<= 0x55)))))
                        return 0
                else if (eax_6 s>= 0x44 || eax_6 == 9 || eax_6 == 0x1a || eax_6 == 0x28
                        || eax_6 == 0x3d)
                    return 0
                
                if (sub_4380be(*(*(esi + 0x24) + 8)) == 0)
                    return 0
                
                var_10_3 = *(*(esi + 0x24) + 0xc)
            
            if (sub_4380be(var_10_3) == 0)
                return 0
    
    return 1

int32_t result
result.b = *(esi + 0x10) != 6
return result

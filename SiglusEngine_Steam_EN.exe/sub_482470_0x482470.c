// 函数: sub_482470
// 地址: 0x482470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg1
void* esi = &data_1b16490
int32_t result = 0

while (true)
    if (*(esi + 0x24) != 0)
        void* ecx = esi
        int32_t eax
        
        while (true)
            eax.b = *ecx
            
            if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                ecx += 2
                continue
            
            if (eax.b == 0)
                break
            
            if (eax.b u>= 0x61 && eax.b u<= 0x7a)
                eax.b -= 0x20
                *ecx = eax.b
            
            ecx += 1
        
        char* ecx_1 = arg1
        
        if (arg1 != 0)
            while (true)
                eax.b = *ecx_1
                
                if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                    ecx_1 = &ecx_1[2]
                    continue
                
                if (eax.b == 0)
                    break
                
                if (eax.b u>= 0x61 && eax.b u<= 0x7a)
                    eax.b -= 0x20
                    *ecx_1 = eax.b
                
                ecx_1 = &ecx_1[1]
        
        if (sub_4d0f10(esi, arg1) == 0)
            if (arg2 == 0)
                *(esi + 0x24) += 1
            
            return result
    
    result += 1
    esi += 0x58
    
    if (result s>= 0x100)
        break

return 0xffffffff

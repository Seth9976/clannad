// 函数: sub_4e8f20
// 地址: 0x4e8f20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg4
int32_t* esi = arg3
*ebx = 0
arg4 = esi

if (arg2 != 0)
    *arg2 = esi

int32_t i_1 = 0

if (*esi != 0)
    while (true)
        int32_t** eax
        eax.b = *esi
        
        if (eax.b == 0xa)
            break
        
        if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
            break
        
        if (eax.b != 0x28)
        label_4e8fe9:
            int32_t var_8
            
            if (sub_4e8c00(&var_8, &arg4, esi, &var_8, 0) != 0)
                int32_t* edx_2 = &arg4
                int32_t var_10
                int32_t var_c
                
                if (sub_4e7350(&var_10, edx_2, arg4, &var_10) != 0
                        && sub_4e8c00(&var_c, edx_2, arg4, &var_c, 0) != 0)
                    int32_t eax_8 = var_10
                    
                    if (eax_8 u<= 5)
                        int32_t ecx_5
                        
                        switch (eax_8)
                            case 0
                                ecx_5.b = var_8 == var_c
                            case 1
                                ecx_5.b = var_8 != var_c
                            case 2
                                ecx_5.b = var_8 s<= var_c
                            case 3
                                ecx_5.b = var_8 s< var_c
                            case 4
                                ecx_5.b = var_8 s>= var_c
                            case 5
                                ecx_5.b = var_8 s> var_c
                        
                        *ebx = ecx_5
                        int32_t* ecx_6 = arg4
                        
                        if (i_1 != 0)
                            int32_t i
                            
                            do
                                int32_t eax_9
                                eax_9.b = *ecx_6
                                
                                if (eax_9.b == 0)
                                    return 0
                                
                                if (eax_9.b == 0xa)
                                    return 0
                                
                                if (eax_9.b u>= 0x80 && (eax_9.b u< 0xa0 || eax_9.b u> 0xdf)
                                        && eax_9.b u< 0xfe)
                                    return 0
                                
                                if (eax_9.b != 0x29)
                                    return 0
                                
                                ecx_6 += 1
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                        
                        if (arg2 != 0)
                            *arg2 = ecx_6
                        
                        return 1
            
            break
        
        void* ecx_1 = esi + 1
        arg4 = esi
        int32_t edx = 1
        esi = ecx_1
        
        while (true)
            eax.b = *ecx_1
            
            if (eax.b == 0)
                return 0
            
            if (eax.b == 0xa)
                return 0
            
            if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                return 0
            
            if (eax.b != 0x28)
                if (eax.b == 0x29)
                    int32_t temp0_1 = edx
                    edx -= 1
                    
                    if (temp0_1 == 1)
                        esi = arg4
                        arg4 = esi
                        goto label_4e8fe9
                else if (eax.b == 0x5c)
                    eax.b = *(ecx_1 + 1)
                    
                    if (eax.b u< 0x28 || eax.b u> 0x3b)
                        ecx_1 += 2
                        continue
                    
                    i_1 += 1
                    arg4 = esi
                    
                    if (*esi != 0)
                        break
                    
                    return 0
                else if (eax.b == 0x24)
                    if (*(ecx_1 + 1) == 0xff)
                        ecx_1 += 6
                        continue
                    
                    ecx_1 += 2
                    continue
                
                ecx_1 += 1
            else
                edx += 1
                ecx_1 += 1

return 0

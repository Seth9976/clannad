// 函数: sub_4e90f0
// 地址: 0x4e90f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t** ebx = arg2
int32_t* var_8 = arg3
*arg4 = 0

if (ebx != 0)
    *ebx = arg3

if (*arg3 != 0)
    while (true)
        int32_t* eax
        eax.b = *arg3
        
        if (eax.b == 0xa)
            break
        
        if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
            break
        
        int32_t var_c
        int32_t eax_3
        int32_t* ecx
        
        if (eax.b != 0x28)
        label_4e91bc:
            eax_3, arg2 = sub_4e8f20(&var_c, &var_8, arg3, &var_c)
            
            if (eax_3 == 0)
                break
            
            ecx = var_8
        else
            int32_t esi_1 = 1
            void* eax_1 = arg3 + 1
            
            while (true)
                var_8 = eax_1
                arg2.b = *eax_1
                
                if (arg2.b == 0)
                    return 0
                
                if (arg2.b == 0xa)
                    return 0
                
                if (arg2.b u>= 0x80 && (arg2.b u< 0xa0 || arg2.b u> 0xdf) && arg2.b u< 0xfe)
                    return 0
                
                if (arg2.b != 0x28)
                    if (arg2.b == 0x29)
                        int32_t temp0_1 = esi_1
                        esi_1 -= 1
                        
                        if (temp0_1 == 1)
                            var_8 = arg3
                            goto label_4e91bc
                    else if (arg2.b == 0x5c)
                        arg2.b = *(eax_1 + 1)
                        
                        if (arg2.b u< 0x3c || arg2.b u> 0x4f)
                            eax_1 += 2
                            continue
                        
                        var_8 = arg3 + 1
                        eax_3, arg2 = sub_4e90f0(&var_c)
                        
                        if (eax_3 == 0)
                            return 0
                        
                        char* ecx_2 = var_8
                        
                        if (*ecx_2 != 0x29)
                            return 0
                        
                        ecx = &ecx_2[1]
                        var_8 = ecx
                        break
                    else if (arg2.b == 0x24)
                        eax_1 += 1
                        var_8 = eax_1
                        
                        if (*eax_1 == 0xff)
                            eax_1 += 5
                            continue
                    
                    eax_1 += 1
                else
                    esi_1 += 1
                    eax_1 += 1
        
        eax_3.b = *ecx
        
        if (eax_3.b == 0 || eax_3.b == 0xa || eax_3.b != 0x5c)
        label_4e9350:
            *arg4 = var_c
            
            if (ebx != 0)
                *ebx = ecx
        else
            eax_3.b = *(ecx + 1)
            
            if (eax_3.b u< 0x3c || eax_3.b u> 0x4f)
                goto label_4e9350
            
            uint32_t eax_4 = zx.d(eax_3.b)
            arg3 = ecx + 2
            var_8 = arg3
            
            if (eax_4 != 0x3c)
                if (eax_4 != 0x3d)
                    break
                
                if (var_c != eax_4 - 0x3c)
                    goto label_4e9272
                
                eax.b = *arg3
                int32_t edx_2 = 0
                
                if (eax.b == 0)
                    break
                
                while (true)
                    if (eax.b == 0xa)
                        return 0
                    
                    if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                        return 0
                    
                    if (eax.b == 0x28)
                        edx_2 += 1
                        arg3 += 1
                    else if (eax.b == 0x29)
                        if (edx_2 == 0)
                            break
                        
                        edx_2 -= 1
                        arg3 += 1
                    else if (eax.b == 0x5c)
                        arg3 += 2
                    else if (eax.b != 0x24)
                        arg3 += 1
                    else
                        arg3 += 1
                        var_8 = arg3
                        
                        if (*arg3 != 0xff)
                            arg3 += 1
                        else
                            arg3 += 5
                    
                    var_8 = arg3
                    eax.b = *arg3
                    
                    if (eax.b == 0)
                        return 0
                
                *arg4 = 1
                
                if (ebx != 0)
                    *ebx = arg3
            else if (var_c != eax_4 - 0x3c)
            label_4e9272:
                
                if (*arg3 == 0)
                    return 0
                
                continue
            else
                eax.b = *arg3
                int32_t edx_1 = 0
                
                if (eax.b == 0)
                    break
                
                while (true)
                    if (eax.b == 0xa)
                        return 0
                    
                    if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                        return 0
                    
                    if (eax.b == 0x28)
                        edx_1 += 1
                        arg3 += 1
                    else if (eax.b == 0x29)
                        if (edx_1 == 0)
                            break
                        
                        edx_1 -= 1
                        arg3 += 1
                    else if (eax.b == 0x5c)
                        arg3 += 2
                    else if (eax.b != 0x24)
                        arg3 += 1
                    else
                        arg3 += 1
                        var_8 = arg3
                        
                        if (*arg3 != 0xff)
                            arg3 += 1
                        else
                            arg3 += 5
                    
                    var_8 = arg3
                    eax.b = *arg3
                    
                    if (eax.b == 0)
                        return 0
                
                *arg4 = 0
                
                if (ebx != 0)
                    *ebx = arg3
        
        return 1

return 0

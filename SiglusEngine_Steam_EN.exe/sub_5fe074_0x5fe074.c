// 函数: sub_5fe074
// 地址: 0x5fe074
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_1c
sub_5f1b77(&var_1c, arg4)
uint32_t i = arg3
uint32_t result = 0
void* var_18

if (i != 0)
    if (*(var_18 + 8) != 0)
        char* eax_2 = arg1
        char* var_c_1 = eax_2
        char* ebx_1
        
        if (eax_2 != 0)
            ebx_1 = arg2
        
        if (eax_2 != 0 && ebx_1 != 0)
            do
                uint32_t esi_1 = zx.d(*eax_2)
                i -= 1
                var_c_1 = &var_c_1[1]
                int16_t var_8_1 = esi_1.w
                uint32_t eax_6
                uint16_t var_8_3
                
                if ((*(zx.d(var_8_1.b) + var_18 + 0x19) & 4) == 0)
                    esi_1.w = var_8_1
                    uint32_t eax_10 = zx.d(esi_1.w)
                    
                    if ((*(eax_10 + var_18 + 0x19) & 0x10) == 0)
                        goto label_5fe179
                    
                    var_8_3 = zx.w(*(eax_10 + var_18 + 0x119))
                label_5fe175:
                    esi_1.w = var_8_3
                label_5fe179:
                    uint32_t eax_12 = zx.d(*ebx_1)
                    ebx_1 = &ebx_1[1]
                    
                    if ((*(zx.d(eax_12.b) + var_18 + 0x19) & 4) == 0)
                        eax_6.w = eax_12.w
                        uint32_t edx = zx.d(eax_6.w)
                        result = 0
                        
                        if ((*(edx + var_18 + 0x19) & 0x10) != 0)
                            eax_6.w = zx.w(*(edx + var_18 + 0x119))
                    else if (i != 0)
                        eax_6.b = *ebx_1
                        i -= 1
                        
                        if (eax_6.b == 0)
                            eax_6.w = 0.w
                        else
                            ebx_1 = &ebx_1[1]
                            eax_6 = zx.d((eax_12 << 8).w) | zx.d(eax_6.b)
                            arg3 = eax_6
                            
                            if (eax_6.w u>= *(var_18 + 0xc) && eax_6.w u<= *(var_18 + 0xe))
                                eax_6.w += *(var_18 + 0x10)
                            else if (eax_6.w u>= *(var_18 + 0x12) && eax_6.w u<= *(var_18 + 0x14))
                                eax_6.w += *(var_18 + 0x16)
                    else
                        eax_6.w = 0.w
                else
                    if (i != 0)
                        char* eax_7
                        eax_7.b = *var_c_1
                        
                        if (eax_7.b == 0)
                            var_8_3 = 0
                            goto label_5fe175
                        
                        esi_1.w = (esi_1 << 8).w | zx.w(eax_7.b)
                        var_c_1 = &var_c_1[1]
                        uint32_t eax_9 = zx.d(esi_1.w)
                        esi_1.w = eax_9.w
                        uint32_t var_8_4 = eax_9
                        
                        if (esi_1.w u>= *(var_18 + 0xc) && esi_1.w u<= *(var_18 + 0xe))
                            esi_1.w += *(var_18 + 0x10)
                        else if (esi_1.w u>= *(var_18 + 0x12) && esi_1.w u<= *(var_18 + 0x14))
                            esi_1.w += *(var_18 + 0x16)
                        
                        goto label_5fe179
                    
                    int32_t var_8_2 = 0
                    
                    if ((*(zx.d(*ebx_1) + var_18 + 0x19) & 4) != 0)
                        break
                    
                    uint32_t eax_5
                    eax_5.b = *ebx_1
                    esi_1.w = 0
                    eax_6.w = zx.w(eax_5.b)
                
                if (eax_6.w != esi_1.w)
                    result = (sbb.d(0, 0, eax_6.w u< esi_1.w) & 2) - 1
                    break
                
                if (esi_1.w == 0)
                    break
                
                eax_2 = var_c_1
            while (i != 0)
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0x7fffffff
    else
        result = __strnicmp(arg1, arg2, i)
char var_10
void* var_14

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd
return result

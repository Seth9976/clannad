// 函数: sub_41795f
// 地址: 0x41795f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u< 2)
    return 0x80004005

int32_t edi
int32_t var_28_1 = edi
char eax = *arg2

if (eax == 0x50)
    int32_t var_1c_1
    
    if (arg2[1] == 0x33)
        var_1c_1 = 1
    label_4179b0:
        void* edi_2 = &arg2[2]
        int32_t temp3_1 = arg3
        arg3 -= 2
        int32_t ebx_1 = 0
        void* var_10_1 = edi_2
        int32_t var_8_1 = 0
        int32_t var_18_1 = 0
        int32_t var_c_1 = 0xff
        
        if (temp3_1 != 2)
            do
                void* var_14
                
                if (var_1c_1 == 0 && var_8_1 == 3)
                    if (var_c_1 u> 0xff)
                        break
                    
                    if (arg3 u> 1 && *edi_2 == 0xd)
                        edi_2 += 1
                        arg3 -= 1
                    
                    void* edi_8 = edi_2 + 1
                    int32_t temp5_1 = arg3
                    arg3 -= 1
                    
                    if (temp5_1 != 1)
                        while (arg2 u< var_14)
                            uint32_t temp0_4 = divu.dp.d(0:(zx.d(*edi_8) * 0xff), var_c_1)
                            edi_8 += 3
                            *arg2 = ((temp0_4 | 0xffffff00) << 8
                                | divu.dp.d(0:(zx.d(*(edi_8 - 2)) * 0xff), var_c_1)) << 8
                                | divu.dp.d(0:(zx.d(*(edi_8 - 1)) * 0xff), var_c_1)
                            int32_t temp11_1 = arg3
                            arg3 -= 3
                            arg2 = &arg2[4]
                            
                            if (temp11_1 == 3)
                                break
                    
                    void* eax_40 = arg2 - var_14
                    int32_t eax_41 = neg.d(eax_40)
                    return sbb.d(eax_41, eax_41, eax_40 != 0) & 0x80004005
                
                if (_isspace(zx.d(*edi_2)) == 0)
                    if (*edi_2 == 0x23)
                        if (arg3 != 0)
                            while (*edi_2 != 0xa)
                                edi_2 += 1
                                int32_t temp7_1 = arg3
                                arg3 -= 1
                                
                                if (temp7_1 == 1)
                                    break
                        
                        goto label_4179eb
                    
                    if (arg3 != 0)
                        int32_t j
                        
                        do
                            if (_isspace(zx.d(*edi_2)) != 0)
                                break
                            
                            if (_isdigit(zx.d(*edi_2)) == 0)
                                goto label_417b42
                            
                            uint32_t ecx_3 = zx.d(*edi_2)
                            edi_2 += 1
                            j = arg3
                            arg3 -= 1
                            ebx_1 = ecx_3 + ebx_1 * 0xa - 0x30
                            var_10_1 = edi_2
                        while (j != 1)
                    
                    if (var_8_1 == 0)
                        var_18_1 = ebx_1
                    label_417b30:
                        
                        if (ebx_1 == 0)
                            break
                    else if (var_8_1 == 1)
                        if (ebx_1 == 0)
                            break
                        
                        uint32_t edi_5 = (ebx_1 * var_18_1) << 2
                        char* eax_28 = sub_745f3f(edi_5)
                        arg1[1] = eax_28
                        
                        if (eax_28 == 0)
                            return 0x8007000e
                        
                        arg2 = eax_28
                        arg1[0xd] = 0
                        var_14 = &eax_28[edi_5]
                        edi_2 = var_10_1
                        arg1[0xe] = 1
                        *arg1 = 0x16
                        arg1[0xc] = var_18_1 << 2
                        arg1[3] = var_18_1
                        arg1[4] = ebx_1
                        arg1[5] = 1
                    else
                        if (var_8_1 == 2)
                            var_c_1 = ebx_1
                            goto label_417b30
                        
                        if (var_8_1 == 3)
                            if (arg2 u>= var_14)
                                break
                            
                            *arg2 = (divu.dp.d(0:(ebx_1 * 0xff), var_c_1) | 0xffffff00) << 0x10
                        else if (var_8_1 == 4)
                            *arg2 |= divu.dp.d(0:(ebx_1 * 0xff), var_c_1) << 8
                        else if (var_8_1 == 5)
                            *arg2 |= divu.dp.d(0:(ebx_1 * 0xff), var_c_1)
                            arg2 = &arg2[4]
                            
                            if (&arg2[4] == var_14)
                                return 0
                            
                            var_8_1 = 2
                    
                    var_8_1 += 1
                else
                label_4179eb:
                    edi_2 += 1
                    arg3 -= 1
                    var_10_1 = edi_2
                
                ebx_1 = 0
            while (arg3 != 0)
    else if (eax == 0x50 && arg2[1] == 0x36)
        var_1c_1 = 0
        goto label_4179b0

label_417b42:
return 0x80004005

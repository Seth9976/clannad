// 函数: sub_47d6ee
// 地址: 0x47d6ee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_a4 = edi
int32_t var_38[0x6]
sub_46b3eb(&var_38, 0x100000, 0x10000)
int32_t ebx = arg9
int32_t var_c = 0
int32_t var_10 = 0
int32_t result

if ((ebx & 0xfffff800) != 0)
    result = 0x8876086c
else if (arg3 == 0)
    if (arg10 != 0)
        goto label_47d73c
    
    result = 0x8876086c
else if ((ebx.b & 0x18) != 0 || arg10 == 0)
    result = 0x8876086c
else
label_47d73c:
    int32_t* ecx_1 = arg1[2]
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    j__free(arg1[6])
    arg1[0x12] = 0xffffffff
    *arg1 = arg2
    arg1[1] = 0
    arg1[2] = 0
    arg1[6] = 0
    arg1[7] = 0
    __builtin_memset(&arg1[0x13], 0, 0x1c)
    arg1[3] = arg8
    arg1[5] = ebx
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0
    arg1[0x11] = 0
    __builtin_memset(&arg1[0x1a], 0, 0x1c)
    arg1[0x21] = arg7
    void*** eax_5
    
    if (arg5 != 0)
        arg1[4] = 0x46580200
        void*** eax_4 = sub_745f3f(0x1fc)
        
        if (eax_4 == 0)
            eax_5 = nullptr
        else
            eax_5 = sub_4c5b94(eax_4)
        
        *(arg1 + 0x15) |= 1
        goto label_47d9e0
    
    void var_20
    int32_t var_1c
    
    if ((ebx.b & 0xc0) == 0)
    label_47d880:
        
        if (sub_46b27d(arg1[3], 2, &var_20) s< 0)
            goto label_47d7fa
        
        arg1[4] = var_1c
        arg1[5] = ebx
        
        if (var_1c == 0xfffe0100)
            arg1[4] = 0xfffe0101
            var_c = 1
        
        if (arg1[4] == 0xffff0100)
            arg1[4] = 0xffff0101
            var_10 = 1
        
        int32_t eax_12 = arg1[4]
        bool cond:16_1
        
        if (eax_12 u<= 0xfffe03ff)
            if (eax_12 != 0xfffe03ff)
                if (eax_12 == 0x54580100)
                    arg1[5] = ebx | 0x100
                    void*** eax_14 = sub_745f3f(0x1fc)
                    
                    if (eax_14 == 0)
                        eax_5 = nullptr
                        goto label_47d9e0
                    
                    eax_5 = sub_4c5b94(eax_14)
                    goto label_47d9e0
                
                if (eax_12 != 0xfffe0101 && eax_12 != 0xfffe0200 && eax_12 != 0xfffe0202
                        && eax_12 != 0xfffe02ff)
                    cond:16_1 = eax_12 == 0xfffe0300
                    goto label_47d9bc
                
                void*** eax_13 = sub_745f3f(0x1f8)
                
                if (eax_13 == 0)
                    eax_5 = nullptr
                    goto label_47d9e0
                
                eax_5 = sub_4c33f2(eax_13, arg7)
                goto label_47d9e0
            
        label_47d9c8:
            void*** eax_17 = sub_745f3f(0x1f8)
            
            if (eax_17 == 0)
                eax_5 = nullptr
                goto label_47d9e0
            
            eax_5 = sub_4b2443(eax_17, arg7)
        label_47d9e0:
            arg1[2] = eax_5
        else if (eax_12 u> 0xffff02ff)
            if (eax_12 == 0xffff0300)
                goto label_47d9c8
            
            cond:16_1 = eax_12 == 0xffff03ff
        label_47d9bc:
            
            if (cond:16_1)
                goto label_47d9c8
            
            arg1[2] = 0
        else
            if (eax_12 == 0xffff02ff)
            label_47d97c:
                void*** eax_15 = sub_745f3f(0x22c)
                
                if (eax_15 == 0)
                    eax_5 = nullptr
                    goto label_47d9e0
                
                eax_5 = sub_4c04dc(eax_15, arg7)
                goto label_47d9e0
            
            if (eax_12 u< 0xffff0101)
                arg1[2] = 0
            else
                if (eax_12 u<= 0xffff0104)
                    arg1[5] = ebx & 0xfffffffb
                    void*** eax_16 = sub_745f3f(0x484)
                    
                    if (eax_16 == 0)
                        eax_5 = nullptr
                        goto label_47d9e0
                    
                    eax_5 = sub_4b4954(eax_16)
                    goto label_47d9e0
                
                if (eax_12 == 0xffff0200 || (eax_12 u> 0xffff0201 && eax_12 u<= 0xffff0203))
                    goto label_47d97c
                
                arg1[2] = 0
        
        if (arg1[2] == 0)
            result = 0x8007000e
        else if (arg3 != 0)
            arg1[1] = arg3
        label_47da3c:
            
            if (var_c != 0)
                sub_46e443(arg1, nullptr, 0xdb1, "vs_1_0 is no longer supported; using vs_1_1")
            
            if (var_10 != 0)
                sub_46e443(arg1, nullptr, 0xdb1, "ps_1_0 is no longer supported; using ps_1_1")
            
            int32_t eax_24
            
            if (arg1[0x22] == 0)
                arg1[0x23] = 0x1000
                eax_24 = sub_745f3f(0x4000)
                arg1[0x22] = eax_24
            
            if (arg1[0x22] != 0 || eax_24 != 0)
                sub_49f169(&var_38)
                sub_49ebee(&var_38)
                result = sub_47bc35(arg1)
                
                if (result s>= 0)
                    void* ecx_21 = arg1
                    char* arg_c
                    int32_t result_1
                    
                    if (arg5 != 0)
                        result_1 = sub_47d5ed(ecx_21, 0, arg5)
                    label_47db31:
                        result = result_1
                        
                        if (result s>= 0)
                            if (arg1[0x13] != 0)
                                result = 0x80004005
                            else
                                result = sub_46e285(arg1)
                                
                                if (result s>= 0)
                                    int32_t* var_8
                                    result = (*(*arg1[2] + 8))(&var_8)
                                    
                                    if (result s>= 0)
                                        int32_t var_14
                                        
                                        if (arg11 == 0)
                                        label_47db91:
                                            *arg10 = var_8
                                            
                                            if (arg11 != 0)
                                                *arg11 = var_14
                                            
                                            result = 0
                                        else
                                            int32_t* eax_30 = var_8
                                            result = sub_46b36a((*(*eax_30 + 0xc))(eax_30), &var_14)
                                            
                                            if (result s>= 0)
                                                goto label_47db91
                                            
                                            int32_t* eax_33 = var_8
                                            
                                            if (eax_33 != 0)
                                                (*(*eax_33 + 8))(eax_33)
                                                var_8 = nullptr
                    else
                        void* eax_26
                        
                        if (arg_c == 0)
                            eax_26 = sub_46e149(ecx_21, arg4, &arg_c)
                            
                            if (eax_26 != 0)
                                result_1 = sub_47b180(arg1, 0, arg_c, eax_26, arg6, nullptr, 1, 1)
                                goto label_47db31
                            
                            sub_46e3d1(arg1, nullptr, 0xdad, "overloaded function not found")
                            result = 0x80004005
                        else
                            eax_26 = sub_46e033(ecx_21, arg_c)
                            
                            if (eax_26 != 0)
                                result_1 = sub_47b180(arg1, 0, arg_c, eax_26, arg6, nullptr, 1, 0)
                                goto label_47db31
                            
                            char* var_a8_13 = arg_c
                            sub_46e3d1(arg1, nullptr, 0xdad, "'%s': entrypoint not found")
                            result = 0x80004005
                
                goto label_47dba1
            
            result = 0x8007000e
        else
            void var_98
            result = sub_44258b(sub_436fe9(&var_98), *arg1, arg1[5] | 0x80000000, &arg1[1])
            
            if (result s>= 0)
                goto label_47da3c
            
        label_47dba1:
            int32_t* ecx_30 = arg1[2]
            arg1[1] = 0
            
            if (ecx_30 != 0)
                (**ecx_30)(1)
            
            int32_t var_a8_19 = arg1[6]
            arg1[2] = 0
            j__free(var_a8_19)
            arg1[6] = 0
            sub_49f169(0)
            sub_49ebee(0)
    else
        if (sub_46b27d(arg8, 2, &var_20) s>= 0)
            int32_t ecx_6 = var_1c & 0xffff0000
            
            if (ecx_6 == 0xfffe0000)
                if ((ebx.b & 0x40) != 0)
                    ebx |= 5
                    
                    if ((var_1c & 0xff00) != 0x300)
                        arg1[3] = "vs_2_sw"
                    else
                        arg1[3] = "vs_3_sw"
            else if (ecx_6 == 0xffff0000 && ebx.b s< 0)
                ebx |= 5
                
                if ((var_1c & 0xff00) != 0x300)
                    arg1[3] = "ps_2_sw"
                else
                    arg1[3] = "ps_3_sw"
            
            goto label_47d880
        
    label_47d7fa:
        int32_t var_a8_3 = arg1[3]
        sub_46e3d1(arg1, nullptr, 0xdb2, "unrecognized compiler target '%s'")
        result = 0x8876086c

sub_46b443(&var_38)
return result

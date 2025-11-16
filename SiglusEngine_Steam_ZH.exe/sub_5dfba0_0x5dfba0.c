// 函数: sub_5dfba0
// 地址: 0x5dfba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* ecx = arg4
int16_t** var_28 = arg3
int32_t var_24 = 0

if (ecx == arg5)
    *arg3 = arg5
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return arg3

if (*ecx != 0x23)
    *arg2 = 0x63
else
    ecx = &ecx[1]
    arg4 = ecx
    
    if (ecx == arg5)
        *arg2 = 0
        arg2[1] = 0x23
    else
        uint32_t eax_3 = zx.d(*ecx)
        
        if (eax_3 == 0x23)
            ecx = &ecx[1]
            *arg2 = 0
            arg2[1] = 0x23
        else if (eax_3 == 0x53)
            ecx = &ecx[1]
            *arg2 = 2
        else if (eax_3 != 0x43)
            if (sub_6af490(eax_3, &var_24, &arg4, arg5) == 0)
                ecx = arg4
            else
                ecx = arg4
                
                if (ecx == arg5)
                    *arg2 = 0
                    arg2[1] = 0x23
                else
                    uint32_t eax_5 = zx.d(*ecx)
                    
                    if (eax_5 == 0x53)
                        int32_t eax_6 = var_24
                        ecx = &ecx[1]
                        *arg2 = 1
                        arg2[1] = eax_6
                    else if (eax_5 == 0x43)
                        int32_t eax_7 = var_24
                        ecx = &ecx[1]
                        *arg2 = 3
                        arg2[1] = eax_7
                    else if (eax_5 == 0x58)
                        int32_t eax_8 = var_24
                        ecx = &ecx[1]
                        *arg2 = 5
                        arg2[1] = eax_8
                    else if (eax_5 != 0x59)
                        int32_t var_c_1 = 7
                        int32_t var_10_1 = 0
                        int16_t var_20 = 0
                        int32_t* eax_10
                        int32_t ecx_5
                        eax_10, ecx_5 = sub_52e720(&var_20, 0xaf2fbc, 2)
                        int32_t var_38_2 = ecx_5
                        int32_t* ebx
                        ebx.b = sub_6af310(eax_10, &var_20, &arg4, arg5)
                        sub_52e8a0(&var_20)
                        
                        if (ebx.b == 0)
                            int32_t var_c_2 = 7
                            int32_t var_10_2 = 0
                            var_20 = 0
                            int32_t* eax_13
                            int32_t ecx_9
                            eax_13, ecx_9 = sub_52e720(&var_20, 0xaf2fc4, 2)
                            int32_t var_38_3 = ecx_9
                            ebx.b = sub_6af310(eax_13, &var_20, &arg4, arg5)
                            sub_52e8a0(&var_20)
                            
                            if (ebx.b != 0)
                                int32_t eax_15 = var_24
                                *arg2 = 8
                                arg2[1] = eax_15
                            
                            ecx = arg4
                        else
                            int32_t eax_12 = var_24
                            ecx = arg4
                            *arg2 = 7
                            arg2[1] = eax_12
                    else
                        int32_t eax_9 = var_24
                        ecx = &ecx[1]
                        *arg2 = 6
                        arg2[1] = eax_9
        else
            ecx = &ecx[1]
            *arg2 = 4

*var_28 = ecx
sub_745f2b(eax_1 ^ &__saved_ebp)
return var_28

// 函数: __mbstowcs_s_l
// 地址: 0x75a069
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg2 == 0)
    if (arg3 == 0)
        goto label_75a0a6
    
    goto label_75a08f

if (arg3 != 0)
    *arg2 = 0
label_75a0a6:
    
    if (arg1 != 0)
        *arg1 = 0
    
    void var_14
    sub_7470a1(&var_14, arg6)
    int32_t eax_2 = arg3
    
    if (arg5 u<= arg3)
        eax_2 = arg5
    
    int32_t result_1
    void* eax_3
    
    if (eax_2 u<= 0x7fffffff)
        int32_t eax_4 = __mbstowcs_l_helper(arg2, arg4, eax_2, &var_14)
        
        if (eax_4 != 0xffffffff)
            int32_t eax_6 = eax_4 + 1
            
            if (arg2 != 0)
                if (eax_6 u> arg3)
                    if (arg5 != 0xffffffff)
                        *arg2 = 0
                        eax_3 = __errno()
                        result_1 = 0x22
                        goto label_75a112
                    
                    eax_6 = arg3
                    result = 0x50
                
                arg2[eax_6 - 1] = 0
            
            if (arg1 != 0)
                *arg1 = eax_6
        else
            if (arg2 != 0)
                *arg2 = 0
            
            result = *__errno()
    else
        eax_3 = __errno()
        result_1 = 0x16
    label_75a112:
        result = result_1
        *eax_3 = result
        __invalid_parameter_noinfo()
    char var_8
    void* var_c
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
else
label_75a08f:
    result = 0x16
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return result

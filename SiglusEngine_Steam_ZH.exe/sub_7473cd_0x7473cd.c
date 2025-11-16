// 函数: sub_7473cd
// 地址: 0x7473cd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (arg4 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

if (arg3 != 0)
    if (arg1 == 0 || arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else
    label_747423:
        void* eax_1 = __errno()
        int32_t result
        
        if (arg2 u<= arg3)
            int32_t eax_5 = *eax_1
            result = sub_7472e5(sub_74f670, arg1, arg2, arg4, arg5, arg6)
            arg1[arg2 - 1] = 0
            
            if (result != 0xfffffffe)
            label_74749a:
                
                if (result s>= 0)
                    return result
                
                goto label_74749e
            
            if (arg3 != 0xffffffff)
            label_74749e:
                *arg1 = 0
                
                if (result == 0xfffffffe)
                    *__errno() = 0x22
                    __invalid_parameter_noinfo()
            else if (*__errno() == 0x22)
                *__errno() = eax_5
        else
            int32_t ebx_2 = *eax_1
            result = sub_7472e5(sub_74f670, arg1, arg3 + 1, arg4, arg5, arg6)
            
            if (result != 0xfffffffe)
                goto label_74749a
            
            if (*__errno() == 0x22)
                *__errno() = ebx_2
else if (arg1 != 0)
    if (arg2 != 0)
        goto label_747423
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else
    if (arg2 == arg1)
        return 0
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0xffffffff

// 函数: sub_74d4e6
// 地址: 0x74d4e6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result
int32_t var_8c

if (arg2 == 1)
    void var_88
    void* ebx_1 = &var_88
    int32_t var_94_1 = 0
    int32_t eax_3 = ___crtGetLocaleInfoA(arg1, arg3, arg4, &var_88, 0x80)
    var_8c = eax_3
    
    if (eax_3 != 0)
    label_74d5c1:
        char* eax_7 = sub_74cccf(eax_3, 1)
        *arg5 = eax_7
        
        if (eax_7 != 0)
            int32_t ecx_6 = var_8c
            
            if (_strncpy_s(eax_7, ecx_6, ebx_1, ecx_6 - 1) != 0)
                int32_t var_b8_4
                __builtin_memset(&var_b8_4, 0, 0x14)
                __invoke_watson()
                noreturn
            
            if (var_94_1 != 0)
                _free(ebx_1)
            
            result = 0
        else if (var_94_1 == 0)
            result = 0xffffffff
        else
            _free(ebx_1)
            result = 0xffffffff
    else if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
        result = 0xffffffff
    else
        int32_t eax_5 = ___crtGetLocaleInfoA(arg1, arg3, arg4, nullptr, 0)
        var_8c = eax_5
        
        if (eax_5 == 0)
            result = 0xffffffff
        else
            ebx_1 = sub_74cccf(eax_5, 1)
            
            if (ebx_1 == 0)
                result = 0xffffffff
            else
                var_94_1 = 1
                eax_3 = ___crtGetLocaleInfoA(arg1, arg3, arg4, ebx_1, var_8c)
                var_8c = eax_3
                
                if (eax_3 != 0)
                    goto label_74d5c1
                
                _free(ebx_1)
                result = 0xffffffff
else if (arg2 == 2)
    *arg5 = 0
    int32_t eax_10 = sub_75521f(arg3, arg4, nullptr, 0)
    
    if (eax_10 == 0)
    label_74d669:
        _free(*arg5)
        *arg5 = 0
        result = 0xffffffff
    else
        wchar16* eax_11 = sub_74cccf(eax_10, 2)
        *arg5 = eax_11
        
        if (eax_11 == 0)
            goto label_74d669
        
        if (sub_75521f(arg3, arg4, eax_11, eax_10) == 0)
            goto label_74d669
        
        result = 0
else if (arg2 != 0)
    result = 0xffffffff
else
    var_8c &= arg2
    
    if (sub_75521f(arg3, arg4 | 0x20000000, &var_8c, 2) == 0)
        result = 0xffffffff
    else
        int32_t eax_15
        eax_15.b = var_8c.b
        *arg5 = eax_15.b
        result = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return result

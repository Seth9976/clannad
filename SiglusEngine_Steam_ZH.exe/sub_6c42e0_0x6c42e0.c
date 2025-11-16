// 函数: sub_6c42e0
// 地址: 0x6c42e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 4) != 0)
    result.b = 1
else
    if (arg1 + 8 != arg3)
        sub_52e3c0(arg1 + 8, arg3, 0, 0xffffffff)
    
    result.b = arg4
    *(arg1 + 0x58) = result.b
    result.b = arg5
    *(arg1 + 0x59) = result.b
    *(arg1 + 0x5c) = 0
    DLGTEMPLATE* lpTemplate = *arg2
    
    if (lpTemplate == arg2[1])
        lpTemplate = nullptr
    
    result = CreateDialogIndirectParamW(data_4ebe3a8, lpTemplate, arg6, sub_6bfec0, arg1)
    *(arg1 + 4) = result
    
    if (result != 0)
        if (*(arg1 + 0x59) != 0)
            sub_530ba0(&data_4ebe45c, arg1 + 4)
        
        result.b = 1
    else
        int32_t var_18_1 = 7
        int32_t* result_1 = result
        int16_t var_2c = result.w
        sub_52e720(&var_2c, u"CreateDialogParam", 0x11)
        int32_t var_8_1 = 0
        enum WIN32_ERROR eax_3 = GetLastError()
        sub_6b9c90(eax_3, eax_3, 2, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

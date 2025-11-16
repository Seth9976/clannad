// 函数: sub_6b7280
// 地址: 0x6b7280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b15c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg3 != 0)
    int16_t* eax_4
    
    if (arg4[5] u< 8)
        eax_4 = arg4
    else
        eax_4 = *arg4
    
    if (arg2[5] u>= 8)
        arg2 = *arg2
    
    result = __wfopen_s(arg3, arg2, eax_4)
    
    if (result == 0)
        result.b = 1
    else
        int32_t var_60
        int16_t* eax_5 = sub_548cb0(result, u"fopen("", &var_60, arg4)
        int32_t var_8_2 = 1
        int16_t var_48
        int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_48, 0xb0069c)
        var_8_2.b = 2
        int32_t var_64
        sub_6b9c90(__get_errno(&var_64), var_64, 1, eax_6)
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48.d)
        
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_4c
        
        if (var_4c u< 8)
            result.b = 0
        else
            j__free(var_60)
            result.b = 0
else
    int32_t** var_20_1 = arg3
    int32_t var_1c_1 = 7
    int16_t var_30 = 0
    sub_52e720(&var_30, u"file_open", 9)
    int32_t var_8_1 = 0
    sub_6b9c90(&var_30, 0x16, 1, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

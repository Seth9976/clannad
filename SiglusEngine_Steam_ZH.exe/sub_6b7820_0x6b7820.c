// 函数: sub_6b7820
// 地址: 0x6b7820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg3 != 0)
    if (sub_749feb(arg3, arg4, arg5, arg2) == 0)
        result.b = 1
    else
        int32_t var_48_1 = 7
        int32_t var_4c_1 = 0
        int16_t var_5c = 0
        sub_52e720(&var_5c, u"fseek", 5)
        int32_t var_8_2 = 2
        int32_t var_60
        __get_errno(&var_60)
        sub_6b9c90(&var_5c, var_60, 1, &var_5c)
        
        if (var_48_1 u< 8)
            result.b = 0
        else
            j__free(var_5c.d)
            result.b = 0
else
    int32_t* var_34_1 = arg3
    int32_t var_30_1 = 7
    int16_t var_44 = 0
    sub_52e720(&var_44, u"file_seek", 9)
    int32_t var_8_1 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xb006d8, 0xe)
    var_8_1.b = 1
    sub_6b9da0(&var_2c, &var_44)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

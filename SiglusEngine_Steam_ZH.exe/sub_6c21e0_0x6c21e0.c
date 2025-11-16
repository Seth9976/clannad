// 函数: sub_6c21e0
// 地址: 0x6c21e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc0ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = 0

if (*(arg1 + 0x18) == 0)
    *(arg2 + 0x14) = 7
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_52e3c0(arg2, arg4, 0, 0xffffffff)
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, &data_ad7c90, nullptr)
    int32_t var_8_1 = 0
    int16_t var_44
    int16_t* eax_5 = sub_6c10c0(arg1, &var_44)
    var_8_1.b = 1
    int32_t eax_6 = data_bac3a0
    
    if ((eax_6.b & 1) == 0)
        data_bac3a0 = eax_6 | 1
        var_8_1.b = 2
        sub_58fa00()
        _atexit(j_sub_58fec0)
        var_8_1.b = 1
    
    sub_6bb6f0(&data_bac3a4, arg2, arg3, arg4, arg5, eax_5, arg1 + 8, &var_2c)
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2

// 函数: sub_681c80
// 地址: 0x681c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7ade
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0xa8) != 0)
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    int16_t var_74 = 0
    sub_52e720(&var_74, &data_ad7c90, nullptr)
    int32_t var_8_1 = 0
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, &data_ad7c90, nullptr)
    var_8_1.b = 1
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, &data_ad7c90, nullptr)
    var_8_1.b = 2
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    sub_52e720(&var_5c, u"open", 4)
    var_8_1.b = 3
    int32_t eax_3 = data_bac3a0
    
    if ((eax_3.b & 1) == 0)
        data_bac3a0 = eax_3 | 1
        var_8_1.b = 4
        sub_58fa00()
        _atexit(j_sub_58fec0)
        var_8_1.b = 3
    
    int32_t ebx
    ebx.b = sub_6bb7d0(&data_bac3a4, &var_5c, nullptr, arg1 + 0x98, &var_2c, &var_44, &var_74) != 0
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 7
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (var_60_1 u>= 8)
        j__free(var_74.d)
    
    result.b = ebx.b != 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

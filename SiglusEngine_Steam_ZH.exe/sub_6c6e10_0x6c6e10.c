// 函数: sub_6c6e10
// 地址: 0x6c6e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc5e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x48) != 0)
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    int16_t var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    int32_t var_8_1 = 0
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    int32_t ecx_2 = sub_52e720(&var_30, u"percent", 7)
    var_8_1.b = 1
    int32_t eax_3 = data_bac3a0
    
    if ((eax_3.b & 1) == 0)
        data_bac3a0 = eax_3 | 1
        var_8_1.b = 2
        sub_58fa00()
        ecx_2 = _atexit(j_sub_58fec0)
        var_8_1.b = 1
    
    *(arg1 + 0x1c)
    int32_t var_74_1 = ecx_2
    var_8_1.b = 3
    int32_t var_60
    sub_6bad30(&data_bac3a4, &var_30, sub_6ad9b0(&var_60), arg2, arg1 + 0x20, arg1 + 0x38, &var_48)
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    result = nullptr
    int32_t var_1c_2 = 7
    int32_t var_20_2 = 0
    var_30 = 0
    
    if (var_34_1 u>= 8)
        result = j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

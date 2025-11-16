// 函数: sub_55ebb0
// 地址: 0x55ebb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg2

if (eax_3 == 0)
    void** eax_5 = *(arg4 + 4) + 0xc
    int32_t var_44 = 7
    int32_t var_48_1 = 0
    int16_t var_58 = 0
    sub_52e3c0(&var_58, eax_5, 0, 0xffffffff)
    sub_601740(arg3, nullptr, var_58)
else if (eax_3 != 1)
    void* var_44_2 = 0x15
    int32_t var_1c_1 = 7
    void* const var_48_2 = &data_ad8e78
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    sub_52e720(&var_30, var_48_2, var_44_2)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
else
    sub_601a10(arg3, 0x64)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_6e3050
// 地址: 0x6e3050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = sub_6e31a0(arg1, arg2)

if (result s< 0)
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    int32_t var_74_1 = sub_52e720(&var_30, 0xb05790, 0xf)
    int32_t var_8_1 = 0
    int32_t ecx_3 = sub_6e2770(arg1, &var_30)
    int32_t var_8_2 = 0xffffffff
    
    if (var_1c_1 u>= 8)
        ecx_3 = j__free(var_30.d)
    
    int32_t var_74_3 = ecx_3
    int32_t var_48
    int16_t* eax_3 = sub_6ad9b0(&var_48)
    int32_t var_8_3 = 1
    var_8_3.b = 2
    sub_6e2830(arg1, sub_548cb0(eax_3, 0xb05780, &var_30, eax_3))
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_1c_2 = 7
    int32_t var_20_2 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48)
    
    int32_t var_60
    void** eax_5
    int32_t ecx_8
    eax_5, ecx_8 = sub_6b9ed0(&var_60)
    int32_t var_74_7 = ecx_8
    int32_t var_8_5 = 3
    sub_6e2830(arg1, eax_5)
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

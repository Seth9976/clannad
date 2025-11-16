// 函数: sub_587070
// 地址: 0x587070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 == 1)
    void* var_30
    sub_6c4e40(arg3, &var_30, arg2, 1)
    int32_t var_8_1 = 0
    int32_t var_44_2 = 7
    int32_t var_48_2 = 0
    int16_t var_58 = 0
    sub_52e3c0(&var_58, &var_30, 0, 0xffffffff)
    result = sub_6c5080(arg3, arg2, 1, var_58)
    int32_t var_1c
    
    if (var_1c u>= 8)
        result = j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_6af200
// 地址: 0x6af200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cab38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0

if (arg4 s> 0)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_541eb0(&var_30, arg2, arg4)
    int32_t var_8_1 = 0
    sub_6af1e0(arg3)
    
    if (var_1c_1 u>= 0x10)
        j__free(var_30.d)
else
    sub_52e820(arg3, &data_ad7c90)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3

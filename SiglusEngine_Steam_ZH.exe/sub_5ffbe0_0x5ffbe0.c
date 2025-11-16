// 函数: sub_5ffbe0
// 地址: 0x5ffbe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd8e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_24 = 7
int32_t var_28 = 0
int16_t var_38 = 0
void* arg_18
sub_52e3c0(&var_38, &arg_18, 0, 0xffffffff)
int32_t result = sub_5ffa00(arg1, 0, 0, arg2, arg3, arg4, arg5, arg6, var_38)

if (arg7 u>= 8)
    result = j__free(arg_18)

fsbase->NtTib.ExceptionList = ExceptionList
return result

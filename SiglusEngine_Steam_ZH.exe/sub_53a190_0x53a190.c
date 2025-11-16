// 函数: sub_53a190
// 地址: 0x53a190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b04c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_14 = arg3
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
void* arg_c
void* eax_4 = sub_53a220(sub_52e3c0(&var_34, &arg_c, 0, 0xffffffff), arg5, arg4, var_34)
arg4 = eax_4
*arg3 = eax_4

if (arg6 u>= 8)
    j__free(arg_c)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3

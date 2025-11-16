// 函数: sub_6aea70
// 地址: 0x6aea70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcbb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t* var_14 = arg3
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int32_t var_8_1 = 0
void* arg_4
sub_6ae8b0(&arg_4, arg2)
*(arg3 + 0x14) = 7
*(arg3 + 0x10) = 0
*arg3 = 0
sub_52e3c0(arg3, &arg_4, 0, 0xffffffff)

if (arg4 u>= 8)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3

// 函数: sub_613f30
// 地址: 0x613f30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf018
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1
void var_1c
sub_5b5160(&var_1c, &arg1[1])
int32_t var_8_1 = 0
*arg1 = *arg2
sub_6143d0(&arg1[1], &arg2[1])
*arg2 = eax_3
sub_6143d0(&arg2[1], &var_1c)
int32_t result = sub_5b4e70(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result

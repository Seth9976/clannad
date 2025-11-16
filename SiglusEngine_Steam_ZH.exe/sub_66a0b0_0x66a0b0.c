// 函数: sub_66a0b0
// 地址: 0x66a0b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c60a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg3
int32_t var_14 = 0
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
char* var_28 = arg3
int32_t var_8_1 = 0
int32_t var_14_1 = 1
*arg4 = sub_66ae20(arg2, arg4, arg2, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3

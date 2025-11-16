// 函数: sub_6aed20
// 地址: 0x6aed20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9caa89
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* result = arg3
int16_t* result_1 = result
int32_t var_8_1 = 0
int32_t var_14 = 0
*(result + 0x14) = 7
*(result + 0x10) = 0
*result = 0
int32_t var_8_2 = 0
int32_t var_14_1 = 1
sub_6aeaf0(sub_52e3c0(arg3, arg2, 0, 0xffffffff), arg4, result, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return result

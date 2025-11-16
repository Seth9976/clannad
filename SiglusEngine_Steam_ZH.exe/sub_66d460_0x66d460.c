// 函数: sub_66d460
// 地址: 0x66d460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7d58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* result = arg1
int16_t* result_1 = result
*(result + 0x14) = 7
*(result + 0x10) = 0
*result = 0
sub_52e3c0(arg1, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
*(result + 0x2c) = 7
*(result + 0x28) = 0
result[0xc] = 0
sub_52e3c0(&result[0xc], &arg2[6], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result

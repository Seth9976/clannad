// 函数: sub_6bbd40
// 地址: 0x6bbd40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* result = arg1
int16_t* result_1 = result
*(result + 0x14) = 7
*(result + 0x10) = 0
*result = 0
int32_t var_28 = sub_52e3c0(arg1, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
arg2 = &result[0xc]
sub_6bbe60(&result[0xc], arg3)
var_8_1.b = 1
*(result + 0x34) = 7
*(result + 0x30) = 0
result[0x10] = 0
sub_52e3c0(&result[0x10], &arg3[2], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result

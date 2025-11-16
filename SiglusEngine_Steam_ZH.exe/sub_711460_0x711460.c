// 函数: sub_711460
// 地址: 0x711460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d12a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
char* result_1 = result
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
sub_541b40(arg1, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
*(result + 0x18) = *(arg2 + 0x18)
*(result + 0x3c) = 0xf
*(result + 0x38) = 0
result[0x28] = 0
sub_541b40(&result[0x28], &arg2[0xa], 0, 0xffffffff)
result[0x40] = arg2[0x10].b
fsbase->NtTib.ExceptionList = ExceptionList
return result

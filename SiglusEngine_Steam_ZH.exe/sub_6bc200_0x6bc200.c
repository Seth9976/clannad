// 函数: sub_6bc200
// 地址: 0x6bc200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbb9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* result = arg1
int16_t* result_2 = result
*(result + 0x14) = 7
*(result + 0x10) = 0
int16_t* result_1 = result
*result = 0
sub_52e3c0(arg1, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_6695d0(&result[0xc], &arg2[6])
int32_t var_8_2 = 1
sub_6bc2b0(&result[0x12], &arg2[9])
var_8_2.b = 2
*(result + 0x44) = 7
*(result + 0x40) = 0
result[0x18] = 0
sub_52e3c0(&result[0x18], &arg2[0xc], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result

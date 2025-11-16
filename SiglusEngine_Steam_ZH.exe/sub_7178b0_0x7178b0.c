// 函数: sub_7178b0
// 地址: 0x7178b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2459
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
char* result_1 = result
int32_t var_8_1 = 0
int32_t var_14 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
sub_541eb0(arg1, &data_b0018c, nullptr)
int32_t var_8_2 = 0
int32_t var_14_1 = 1
sub_6b3720(result, "\t$(Out.color0).a = 1.0f;\n", 0x19)
fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_552000
// 地址: 0x552000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1d99
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 1
sub_6efc80(arg1 + 0x284)
var_8_1.b = 0
sub_6efc80(arg1 + 0x154)
int32_t var_8_2 = 0xffffffff
int32_t* result = sub_6efc80(arg1 + 0x24)
fsbase->NtTib.ExceptionList = ExceptionList
return result

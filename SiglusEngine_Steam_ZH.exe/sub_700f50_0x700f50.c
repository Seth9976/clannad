// 函数: sub_700f50
// 地址: 0x700f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce970
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = sub_701130()
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
sub_701380(&result[4], arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result

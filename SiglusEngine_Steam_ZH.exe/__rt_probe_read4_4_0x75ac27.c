// 函数: __rt_probe_read4@4
// 地址: 0x75ac27
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = 0xc
int32_t var_8 = 0xb491b0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0xb491b0 ^ __security_cookie_1
int32_t var_30 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_30
void* const var_34 = &data_75ac33
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t ecx
int32_t edx
return sub_75ac59(1, &var_4, edx, ecx, arg1) __tailcall

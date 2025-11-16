// 函数: sub_746f27
// 地址: 0x746f27
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = 8
int32_t (* var_c)(void* arg1) = sub_9d321e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_28 = __security_cookie ^ &var_4
int32_t* var_14 = &var_28
void* const var_2c_1 = &data_746f33
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
sub_745f3f(arg3)
int32_t entry_ebx
return sub_746f4f(&var_4, arg2, arg1, entry_ebx) __tailcall

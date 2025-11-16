// 函数: ??2@YAPAXIABUnothrow_t@std@@@Z
// 地址: 0x5f1a22
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = 8
int32_t (* var_c)(void* arg1) = sub_605b14
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_28 = __security_cookie ^ &var_4
int32_t* var_14 = &var_28
void* const var_2c_1 = &data_5f1a2e
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
sub_5f094d(arg3)
int32_t entry_ebx
return sub_5f1a4a(&var_4, arg2, arg1, entry_ebx) __tailcall

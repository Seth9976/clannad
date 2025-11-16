// 函数: sub_68ced0
// 地址: 0x68ced0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8bbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x18) = 7
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
int32_t (__fastcall* var_20)(int32_t* arg1) = sub_52e8a0
int32_t var_8_1 = 0
sub_74675f(arg1 + 0x24, 0x18, 8, sub_53a2c0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

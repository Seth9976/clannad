// 函数: sub_640db0
// 地址: 0x640db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c357b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
int32_t var_8_1 = 0
int32_t var_14 = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
sub_6425f0(arg1 + 0x24, nullptr, &var_14)
*(arg1 + 0x30) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

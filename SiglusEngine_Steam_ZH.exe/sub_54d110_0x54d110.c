// 函数: sub_54d110
// 地址: 0x54d110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
sub_54d2e0(arg1 + 0xa0, arg2 + 0xa0)
*(arg1 + 0xac) = *(arg2 + 0xac)
int32_t eax_4
eax_4.b = *(arg2 + 0xb0)
*(arg1 + 0xb0) = eax_4.b
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

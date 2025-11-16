// 函数: sub_6861d0
// 地址: 0x6861d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7fae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__builtin_memcpy(arg1, arg2, 0x80)
*(arg1 + 0x94) = 7
*(arg1 + 0x90) = 0
*(arg1 + 0x80) = 0
sub_52e3c0(arg1 + 0x80, arg2 + 0x80, 0, 0xffffffff)
int32_t var_8_1 = 0
*(arg1 + 0xac) = 7
*(arg1 + 0xa8) = 0
*(arg1 + 0x98) = 0
sub_52e3c0(arg1 + 0x98, arg2 + 0x98, 0, 0xffffffff)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb4) = *(arg2 + 0xb4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

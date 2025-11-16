// 函数: sub_5d56e0
// 地址: 0x5d56e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc19a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
sub_5d57c0(arg1)
*(arg1 + 0xd4) = 0
sub_5d57c0(arg1 + 0xd8)
*(arg1 + 0x12c) = 0
*(arg1 + 0x130) = 0
*(arg1 + 0x148) = 7
*(arg1 + 0x144) = 0
*(arg1 + 0x134) = 0
int32_t var_8_1 = 0
*(arg1 + 0x160) = 7
*(arg1 + 0x15c) = 0
*(arg1 + 0x14c) = 0
*(arg1 + 0x180) = 0
*(arg1 + 0x184) = 0
__builtin_memset(arg1 + 0x1ac, 0, 0x14)
var_8_1.b = 2
*(arg1 + 0x1b8) = sub_564330()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

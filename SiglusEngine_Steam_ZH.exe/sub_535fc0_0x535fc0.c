// 函数: sub_535fc0
// 地址: 0x535fc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b017b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
*arg1 = &NT3::C_window_base::`vftable'
arg1[1] = *(arg2 + 4)
arg1[7] = 7
arg1[6] = 0
arg1[2].w = 0
sub_52e3c0(&arg1[2], arg2 + 8, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[8] = *(arg2 + 0x20)
arg1[9].b = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[0x16].b = *(arg2 + 0x58)
*(arg1 + 0x59) = *(arg2 + 0x59)
arg1[0x17] = *(arg2 + 0x5c)
arg1[0x18] = *(arg2 + 0x60)
sub_5360a0(&arg1[0x19], arg2 + 0x64)
arg1[0x1c] = *(arg2 + 0x70)
arg1[0x1d] = *(arg2 + 0x74)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

// 函数: sub_69baa0
// 地址: 0x69baa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c946c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_14_1 = arg1
sub_69f5c0(arg1)
int32_t var_8_1 = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x38) = 7
*(arg1 + 0x34) = 0
arg1[0x12] = 0
*(arg1 + 0x50) = 7
*(arg1 + 0x4c) = 0
arg1[0x1e] = 0
var_8_1.b = 1
sub_689480(&arg1[0x2a])
sub_680770(&arg1[0x527036])
var_8_1.b = 3
sub_635a80(&arg1[0x527084])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

// 函数: sub_69f3d0
// 地址: 0x69f3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c99bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 0x18) = 7
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
sub_52e3c0(&arg1[4], &arg2[4], 0, 0xffffffff)
int32_t var_8_1 = 0
*(arg1 + 0x30) = 7
*(arg1 + 0x2c) = 0
*(arg1 + 0x1c) = 0
sub_52e3c0(&arg1[0x1c], &arg2[0x1c], 0, 0xffffffff)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

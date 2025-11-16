// 函数: sub_6efae0
// 地址: 0x6efae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd2a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
__builtin_memset(&arg1[0x17], 0, 0x20)
arg1[0x28] = 0
sub_6ef9c0(&arg1[1])
arg1[0x29] = 0
arg1[0x2a] = 0
int32_t var_8_1 = 0
arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
void (__fastcall* var_20)(void* arg1) = sub_54b010
var_8_1.b = 3
sub_74675f(&arg1[0x36], 8, 4, TI_OFF::TI_OFF)
*arg1 = 0
__builtin_memset(&arg1[0x2d], 0, 0x14)
__builtin_memset(&arg1[0x3e], 0, 0x28)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

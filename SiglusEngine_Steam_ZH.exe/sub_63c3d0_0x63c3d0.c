// 函数: sub_63c3d0
// 地址: 0x63c3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2a33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_642730()
var_8_1.b = 1
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_642760()
__builtin_memset(&arg1[7], 0, 0x1c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

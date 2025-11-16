// 函数: sub_6251a0
// 地址: 0x6251a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bff30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (sub_541a20(arg1, arg2) != 0)
    int32_t var_8_1 = 0
    int32_t var_2c_1 = arg2
    sub_5384b0(*arg1, arg2)
    arg1[1] += arg2 << 3

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

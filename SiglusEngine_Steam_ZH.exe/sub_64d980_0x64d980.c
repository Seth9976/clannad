// 函数: sub_64d980
// 地址: 0x64d980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c37d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == arg5[3] && arg4 == arg5[4])
    int32_t result = sub_64d840(arg3, arg5)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_8_1 = 0
int32_t ebx

if (sub_64d7a0(arg5, arg2, &var_24, arg4, arg5) != 0)
    ebx.b = sub_64d840(arg3, &var_24)
else
    ebx.b = 0

int32_t ecx_4 = var_24

if (ecx_4 != 0)
    j__free(ecx_4)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b

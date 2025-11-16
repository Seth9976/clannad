// 函数: sub_647c00
// 地址: 0x647c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_34 = arg5
int32_t var_8_1 = 0
int32_t ebx

if (sub_6479e0(&ExceptionList, arg2, &result_1, arg4, arg3) != 0)
    ebx.b = sub_64d840(arg3, &result_1)
else
    ebx.b = 0

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_64b120
// 地址: 0x64b120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c37d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg6

if (edx s< 4)
    edx = 4
else if (edx s> 0x80)
    edx = 0x80

int32_t eax_3 = arg7

if (eax_3 s< 4)
    eax_3 = 4
else if (eax_3 s> 0x80)
    eax_3 = 0x80

int32_t result_1 = 0
int32_t eax_4 = eax_3 * 2
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_8_1 = 0
int32_t ebx

if (sub_6492f0(eax_4, edx * 2, &result_1, eax_4, arg5) != 0)
    ebx.b = sub_64d980(&result_1, arg2, arg3, arg4, &result_1)
else
    ebx.b = 0

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_6437d0
// 地址: 0x6437d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c36e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg2
int32_t esi = arg6

if (esi s< 1)
    esi = 1
else if (esi s> 0x40)
    esi = 0x40

int32_t eax_3 = arg7

if (eax_3 s< 1)
    eax_3 = 1
else if (eax_3 s> 0x40)
    eax_3 = 0x40

int32_t result_1 = 0
int32_t var_20 = 0
int32_t var_1c = 0
arg2.b = arg5
int32_t var_8_1 = 0
int32_t* ebx

if (sub_6436e0(eax_3, arg2.b, &result_1, esi, eax_3, arg8) != 0)
    ebx.b = sub_64d980(&result_1, edi, arg3, arg4, &result_1)
else
    ebx.b = 0

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result

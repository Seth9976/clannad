// 函数: sub_699ab0
// 地址: 0x699ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0 || arg3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80070057

void* esi = arg1
EnterCriticalSection(esi + 0x10)
arg1 = nullptr
int32_t var_8_1 = 0
int32_t eax_3 = sub_699670(esi + 4, arg2, arg3)
LeaveCriticalSection(esi + 0x10)
int32_t result = 0x8007000e

if (eax_3 != 0)
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result

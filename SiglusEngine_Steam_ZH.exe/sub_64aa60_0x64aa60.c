// 函数: sub_64aa60
// 地址: 0x64aa60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg7 == 0)
    int32_t result = sub_6466a0(eax_3, arg5, arg3, arg6, arg4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_8_1 = 0
int32_t ebx

if (sub_6466a0(eax_3, arg5, &var_24, arg6, arg4) != 0)
    ebx.b = sub_649f20(&var_24, arg5, arg3, arg6, &var_24)
else
    ebx.b = 0

int32_t ecx_4 = var_24

if (ecx_4 != 0)
    j__free(ecx_4)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b

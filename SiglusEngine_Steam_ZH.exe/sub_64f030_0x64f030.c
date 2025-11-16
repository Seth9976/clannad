// 函数: sub_64f030
// 地址: 0x64f030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcbb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg3
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t arg_4

if (arg3 != 0)
    sub_64dcd0(&arg_4)
    result = sub_5d8c20(arg3, &arg_4)
    *(arg3 + 0x1d5) = 1

if (arg4 u>= 8)
    result = j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result

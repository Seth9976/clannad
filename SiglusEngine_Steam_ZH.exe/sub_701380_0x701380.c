// 函数: sub_701380
// 地址: 0x701380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce9e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t var_8_1 = 0

if (arg1 != 0)
    arg1[5] = 7
    arg1[4] = 0
    *arg1 = 0
    sub_52e3c0(arg1, arg2, 0, 0xffffffff)
    arg1[6] = arg2[6]
    arg1[7] = 0
    int32_t ecx_2 = arg2[7]
    result = arg1[7]
    arg2[7] = result
    arg1[7] = ecx_2
    arg2[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result

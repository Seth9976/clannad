// 函数: sub_6dd3b0
// 地址: 0x6dd3b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc870
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t eax_3 = arg1[1]
int32_t ecx_2 = (eax_3 - *arg1) s>> 5

if (ecx_2 u> arg2)
    arg1[1] = ((arg2 - ecx_2) << 5) + eax_3
else if (ecx_2 u< arg2)
    sub_6dd590(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t ecx_6 = arg1[1]
    int32_t var_2c_1 = arg2
    sub_6dd890(ecx_6, arg2 - ((ecx_6 - *arg1) s>> 5))
    int32_t eax_11 = (arg1[1] - *arg1) s>> 5
    arg1[1] += (arg2 - eax_11) << 5
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

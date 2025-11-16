// 函数: sub_5951c0
// 地址: 0x5951c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t result = arg1[1]
int32_t ecx_2 = (result - *arg1) s>> 2

if (ecx_2 u> arg2)
    result += (arg2 - ecx_2) << 2
    arg1[1] = result
else if (ecx_2 u< arg2)
    sub_595280(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t* ecx_6 = arg1[1]
    int32_t var_2c_2 = arg2
    sub_595410(ecx_6, arg2 - ((ecx_6 - *arg1) s>> 2))
    int32_t ecx_7 = arg1[1]
    result = ecx_7 + ((arg2 - ((ecx_7 - *arg1) s>> 2)) << 2)
    arg1[1] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_60ce30
// 地址: 0x60ce30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t edx = arg1[1]
int32_t result = *arg1
int32_t ecx_1 = edx - result

if (ecx_1 u> arg2)
    result += arg2
    arg1[1] = result
else if (ecx_1 u< arg2)
    sub_60ced0(arg1, result - edx + arg2)
    int32_t var_8_1 = 0
    int32_t var_2c_2 = arg2
    char* ecx_3 = arg1[1]
    sub_60d010(ecx_3, *arg1 - ecx_3 + arg2)
    result = *arg1 + arg2
    arg1[1] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result

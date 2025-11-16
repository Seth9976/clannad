// 函数: sub_5a4f20
// 地址: 0x5a4f20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9930
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t edx = arg1[1]
int32_t ecx_2 = (edx - *arg1) s>> 3

if (ecx_2 u> 0x16)
    result = edx + ((0x16 - ecx_2) << 3)
    arg1[1] = result
else if (ecx_2 u< 0x16)
    sub_538360(arg1, 0x16 - ecx_2)
    int32_t var_8_1 = 0
    int64_t* ecx_6 = arg1[1]
    int32_t* var_2c_2 = arg1
    sub_5384b0(ecx_6, 0x16 - ((ecx_6 - *arg1) s>> 3))
    int32_t ecx_7 = arg1[1]
    result = ecx_7 + ((0x16 - ((ecx_7 - *arg1) s>> 3)) << 3)
    arg1[1] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_65a590
// 地址: 0x65a590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4b50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t esi_1 = arg1[1] - *arg1
int32_t result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0xe

if (ecx_2 u> arg2)
    result = arg1[1] + (arg2 - ecx_2) * 0xe
    arg1[1] = result
else if (ecx_2 u< arg2)
    sub_651510(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_2 = arg2
    sub_65c1c0(arg1[1], arg2 - (arg1[1] - *arg1) s/ 0xe)
    int32_t esi_2 = arg1[1]
    result = esi_2 + (arg2 - (esi_2 - *arg1) s/ 0xe) * 0xe
    arg1[1] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result

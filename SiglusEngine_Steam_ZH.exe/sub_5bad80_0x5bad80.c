// 函数: sub_5bad80
// 地址: 0x5bad80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bacd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t esi_1 = arg1[1] - *arg1
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0xb60b60b7, esi_1)
int32_t ecx_2 = esi_1 s/ 0xb4

if (ecx_2 u> arg2)
    int32_t edx_3 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_2
    void* esi_3 = (arg2 - ecx_2) * 0xb4 + edx_3
    eax_3 = sub_5bb420(esi_3, edx_3)
    arg1[1] = esi_3
else if (ecx_2 u< arg2)
    sub_5bafb0(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_3 = arg2
    sub_5bb3b0(arg1[1], arg2 - (arg1[1] - *arg1) s/ 0xb4)
    int32_t eax_14 = (arg2 - (arg1[1] - *arg1) s/ 0xb4) * 0xb4
    arg1[1] += eax_14
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

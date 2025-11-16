// 函数: sub_67de70
// 地址: 0x67de70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c75e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t esi = arg1[1]
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x66666667, esi - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    eax_3 = (arg2 - ecx_2) * 0x50 + esi
    arg1[1] = eax_3
else if (ecx_2 u< arg2)
    sub_67e050(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_1 = arg2
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = muls.dp.d(0x66666667, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 5
    sub_67e1f0(arg1[1], arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_12
    int32_t edx_8
    edx_8:eax_12 = muls.dp.d(0x66666667, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 5
    int32_t eax_17 = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x50
    arg1[1] += eax_17
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_17

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

// 函数: sub_5acef0
// 地址: 0x5acef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba2a0
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
edx_2:eax_3 = muls.dp.d(0x78787879, esi - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_2
    void* esi_1 = esi + (arg2 - ecx_2) * 0x44
    eax_3 = sub_5ad310(esi_1, arg1[1])
    arg1[1] = esi_1
else if (ecx_2 u< arg2)
    sub_5ad0b0(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_3 = arg2
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = muls.dp.d(0x78787879, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 5
    sub_5ad2d0(arg1[1], arg2 - ((edx_6 u>> 0x1f) + edx_6))
    int32_t esi_2 = arg1[1]
    int32_t eax_13
    int32_t edx_9
    edx_9:eax_13 = muls.dp.d(0x78787879, esi_2 - *arg1)
    int32_t edx_10 = edx_9 s>> 5
    int32_t eax_20 = esi_2 + (arg2 - ((edx_10 u>> 0x1f) + edx_10)) * 0x44
    arg1[1] = eax_20
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_20

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

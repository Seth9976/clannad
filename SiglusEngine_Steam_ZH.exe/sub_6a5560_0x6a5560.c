// 函数: sub_6a5560
// 地址: 0x6a5560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca210
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
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, esi - *arg1)
int32_t edx_3 = edx_2 s>> 1
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_2
    void* esi_1 = esi + (arg2 - ecx_2) * 0xc
    eax_3 = sub_633220(esi_1, arg1[1])
    arg1[1] = esi_1
else if (ecx_2 u< arg2)
    sub_6a5670(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_3 = arg2
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 1
    sub_6a5880(arg1[1], arg2 - ((edx_6 u>> 0x1f) + edx_6))
    int32_t esi_2 = arg1[1]
    int32_t eax_11
    int32_t edx_9
    edx_9:eax_11 = muls.dp.d(0x2aaaaaab, esi_2 - *arg1)
    int32_t edx_10 = edx_9 s>> 1
    int32_t eax_16 = esi_2 + (arg2 - ((edx_10 u>> 0x1f) + edx_10)) * 0xc
    arg1[1] = eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

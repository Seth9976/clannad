// 函数: sub_685d60
// 地址: 0x685d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7f40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x38e38e39, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 3
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> 0x14)
    int32_t* var_2c_1 = arg1
    int32_t var_30_1 = ecx_2
    void* esi_1 = ebx + (0x14 - ecx_2) * 0x24
    eax_3 = sub_6427c0(esi_1, ebx)
    arg1[1] = esi_1
else if (ecx_2 u< 0x14)
    sub_685ee0(arg1, 0x14 - ecx_2)
    int32_t var_8_1 = 0
    int32_t* var_2c_3 = arg1
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x38e38e39, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 3
    sub_686190(arg1[1], 0x14 - ((edx_6 u>> 0x1f) + edx_6))
    int32_t esi_2 = arg1[1]
    int32_t eax_11
    int32_t edx_8
    edx_8:eax_11 = muls.dp.d(0x38e38e39, esi_2 - *arg1)
    int32_t edx_9 = edx_8 s>> 3
    int32_t eax_16 = esi_2 + (0x14 - ((edx_9 u>> 0x1f) + edx_9)) * 0x24
    arg1[1] = eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

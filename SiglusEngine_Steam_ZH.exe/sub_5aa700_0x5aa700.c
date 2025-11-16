// 函数: sub_5aa700
// 地址: 0x5aa700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9f00
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
edx:eax_3 = muls.dp.d(0x88888889, esi_1)
int32_t ecx_2 = esi_1 s/ 0x3c

if (ecx_2 u> arg2)
    int32_t edx_3 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx_2
    void* esi_2 = edx_3 + (arg2 - ecx_2) * 0x3c
    eax_3 = sub_5aac00(esi_2, edx_3)
    arg1[1] = esi_2
else if (ecx_2 u< arg2)
    sub_5aa890(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t var_2c_3 = arg2
    sub_5aabc0(arg1[1], arg2 - (arg1[1] - *arg1) s/ 0x3c)
    int32_t esi_3 = arg1[1]
    int32_t eax_20 = esi_3 + (arg2 - (esi_3 - *arg1) s/ 0x3c) * 0x3c
    arg1[1] = eax_20
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_20

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

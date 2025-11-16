// 函数: sub_630e80
// 地址: 0x630e80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c11e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x30c30c31, ebx - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    void* edi_3 = (arg2 - ecx_2) * 0xa8 + ebx
    void* esi_1 = edi_3
    
    if (edi_3 != ebx)
        do
            eax_3 = sub_634480(esi_1)
            esi_1 += 0xa8
        while (esi_1 != ebx)
    
    arg1[1] = edi_3
else if (ecx_2 u< arg2)
    sub_631390(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int32_t* esi_2 = arg1[1]
    int32_t var_2c_1 = arg2
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x30c30c31, esi_2 - *arg1)
    int32_t edx_5 = edx_4 s>> 5
    sub_633180(esi_2, arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_10
    int32_t edx_8
    edx_8:eax_10 = muls.dp.d(0x30c30c31, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 5
    int32_t eax_14 = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0xa8
    arg1[1] += eax_14
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

// 函数: sub_559990
// 地址: 0x559990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_bac474
int32_t eax_3 = *arg3

if (eax_3 == 0)
    sub_557680(&arg3[1], 0x20, &esi[0xe], arg2, &arg3[1], arg4, arg5)
else if (eax_3 == 7)
    *(data_bac458 + 0x490) = 1
else if (eax_3 == 8)
    *(data_bac458 + 0x490) = 0
else if (eax_3 == 9)
    sub_67e6a0(esi, *(arg5[1] + 8))
else if (eax_3 == 4)
    int32_t eax_6
    int32_t edx
    edx:eax_6 = muls.dp.d(0x6bca1af3, esi[1] - *esi)
    int32_t edx_1 = edx s>> 5
    sub_677bb0((edx_1 u>> 0x1f) + edx_1)
else if (eax_3 == 5)
    sub_677bb0(sub_67e600(esi))
else if (eax_3 == 6)
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = muls.dp.d(0x6bca1af3, esi[1] - *esi)
    int32_t edx_3 = edx_2 s>> 5
    uint32_t edi_2 = edx_3 u>> 0x1f
    int32_t eax_9
    
    if (edi_2 != neg.d(edx_3))
        eax_9 = sub_67e600(esi)
    
    if (edi_2 == neg.d(edx_3) || eax_9 == 0)
        sub_677bb0(0)
    else
        int32_t eax_12 = divs.dp.d(sx.q(eax_9 * 0x64), edi_2 + edx_3)
        
        if (eax_12 == 0)
            eax_12 = 1
        
        sub_677bb0(eax_12)
else if (eax_3 == 1)
    void* eax_15 = sub_67f440(esi, arg5[1] + 0xc)
    
    if (eax_15 == 0)
        sub_677bb0(0xffffffff)
    else
        sub_677bb0(*(eax_15 + 0x18))
else if (eax_3 == 2)
    int32_t var_4c = 0
    int32_t ecx_17 = 0xffffffff
    
    if (sub_67e810(esi, arg5[1] + 0xc, &var_4c) != 0)
        ecx_17 = var_4c
    
    sub_677bb0(ecx_17)
else if (eax_3 != 3)
    int32_t* ecx_22
    
    if (eax_3 != 0xa)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xad8d28, 0x19)
        int32_t var_8_2 = 1
        sub_684160(data_bac424, 2, &var_30)
        ecx_22 = &var_30
    else
        void var_48
        int32_t* eax_22 = sub_67e8e0(esi, &var_48, *(arg5[1] + 8))
        int32_t var_8_1 = 0
        sub_60c680(data_bac49c + 0xc, eax_22)
        ecx_22 = &var_48
    
    sub_52e8a0(ecx_22)
else
    void* eax_19 = arg5[1]
    sub_67e730(esi, eax_19 + 0xc, *(eax_19 + 0x16c))

uint32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

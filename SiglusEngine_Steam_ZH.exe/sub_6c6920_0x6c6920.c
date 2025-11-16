// 函数: sub_6c6920
// 地址: 0x6c6920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc560
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_74
int32_t edi = arg1[1]
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
int32_t* var_54 = arg1
int32_t edx_3 = edx_2 s>> 2
int32_t eax_9
int32_t edx_4
edx_4:eax_9 = muls.dp.d(0x2aaaaaab, arg1[2] - edi)
int32_t edx_5 = edx_4 s>> 2

if ((edx_5 u>> 0x1f) + edx_5 u>= 1)
    if ((edi - arg3) s/ 0x18 u>= 1)
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        int16_t var_48 = 0
        int32_t* eax_41 = sub_52e3c0(&var_48, arg4, 0, 0xffffffff)
        int32_t var_8_4 = 5
        int16_t* edx_23 = arg1[1]
        int32_t* var_78_10 = arg2
        void** esi_2 = &edx_23[-0xc]
        void** ecx_26 = arg3
        arg1[1] = sub_55d1a0(eax_41, edx_23, esi_2, edx_23)
        
        if (ecx_26 != esi_2)
            void* edi_7 = &esi_2[6]
            
            do
                esi_2 -= 0x18
                edi_7 -= 0x18
                
                if (edi_7 != esi_2)
                    sub_52e3c0(edi_7, esi_2, 0, 0xffffffff)
                    ecx_26 = arg3
            while (ecx_26 != esi_2)
        
        sub_6c6cb0(&var_48, &ecx_26[6], ecx_26, &var_48)
        
        if (var_34_1 u>= 8)
            j__free(var_48.d)
    else
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e3c0(&var_30, arg4, 0, 0xffffffff)
        int32_t var_8_2 = 2
        int32_t* var_78_6 = arg2
        sub_55d1a0(&arg3[6], arg1[1], arg3, &arg3[6])
        var_8_2.b = 3
        int32_t eax_35
        int32_t edx_18
        edx_18:eax_35 = muls.dp.d(0x2aaaaaab, arg1[1] - arg3)
        int32_t* var_78_7 = arg2
        int32_t edx_19 = edx_18 s>> 2
        sub_6c6ce0(&var_30, 1 - ((edx_19 u>> 0x1f) + edx_19), arg1[1], &var_30)
        int32_t var_8_3 = 2
        arg1[1] += 0x18
        sub_6c6cb0(&var_30, arg1[1] - 0x18, arg3, &var_30)
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
else
    int32_t eax_13
    int32_t edx_6
    edx_6:eax_13 = muls.dp.d(0x2aaaaaab, edi - *arg1)
    int32_t edx_7 = edx_6 s>> 2
    int32_t ecx_4 = (edx_7 u>> 0x1f) + edx_7
    
    if (0xaaaaaaa - ecx_4 u< 1)
        sub_743191("vector<T> too long")
        noreturn
    
    int32_t eax_16 = sub_55cc50(arg1, ecx_4 + 1)
    int16_t* eax_17 = sub_55cfd0(eax_16)
    int32_t eax_18
    int32_t edx_8
    edx_8:eax_18 = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
    int32_t var_8_1 = 0
    int32_t* var_78_2 = arg2
    int32_t edx_9 = edx_8 s>> 2
    int16_t* var_60_1 = eax_17
    int32_t edi_4 = (edx_9 u>> 0x1f) + edx_9
    int32_t var_58_1 = 0
    int32_t var_50_1 = edi_4
    int32_t eax_19 = edi_4 * 3
    int32_t var_58_2 = 1
    int32_t* var_78_3 = arg2
    sub_55d1a0(sub_6c6ce0(eax_19, 1, &eax_17[eax_19 * 4], arg4), arg3, *arg1, eax_17)
    int32_t var_58_3 = 2
    void* eax_23 = &eax_17[(edi_4 + 1) * 0xc]
    int32_t* var_78_4 = arg2
    sub_55d1a0(eax_23, arg1[1], arg3, eax_23)
    int32_t* edi_5 = *arg1
    int32_t eax_24
    int32_t edx_12
    edx_12:eax_24 = muls.dp.d(0x2aaaaaab, arg1[1] - edi_5)
    int32_t edx_13 = edx_12 s>> 2
    int32_t ecx_16 = (edx_13 u>> 0x1f) + 1 + edx_13
    
    if (edi_5 != 0)
        int32_t* var_78_5 = arg2
        int32_t var_7c_1 = ecx_16
        sub_55d500(edi_5, arg1[1])
        j__free(*arg1)
    
    *arg1 = eax_17
    arg1[2] = &eax_17[eax_16 * 0xc]
    arg1[1] = &eax_17[ecx_16 * 0xc]

*arg2 = *arg1 + ((edx_3 u>> 0x1f) + edx_3) * 0x18
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2

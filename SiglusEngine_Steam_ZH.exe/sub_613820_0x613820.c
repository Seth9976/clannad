// 函数: sub_613820
// 地址: 0x613820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bef78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
char eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg2
int32_t* edi = arg5

if (edi != 0 && arg6 != 0)
    int32_t* var_7c
    void* var_74
    void* var_70
    void* var_6c
    
    if (edi + arg6 != 2)
        if (edi s<= arg6 && edi s<= sub_613710(arg7))
            int32_t* ecx_6 = *(arg7 + 0x10)
            ecx_6[1] = *ecx_6
            void var_38
            sub_613fb0(sub_5f27c0(&var_74, arg7), arg3, &var_38, var_18, var_74, var_70, var_6c)
            int32_t eax_13 = sub_6135e0(&var_38)
            int32_t** ecx_10 = *(arg7 + 0x10)
            var_6c = arg4
            int32_t edx_3 = ecx_10[1]
            int32_t* ecx_11 = *ecx_10
            var_70 = var_18
            int32_t* eax_14 = sub_614070(eax_13, edx_3, ecx_11, var_70, var_6c, arg3, arg8)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        
        int32_t eax_15
        int32_t ecx_15
        eax_15, ecx_15 = sub_613710(arg7)
        
        if (arg6 s<= eax_15)
            int32_t* ecx_16 = *(arg7 + 0x10)
            ecx_16[1] = *ecx_16
            void var_4c
            sub_613fb0(sub_5f27c0(&var_74, arg7), var_18, &var_4c, arg4, var_74, var_70, var_6c)
            sub_6135e0(&var_4c)
            void** eax_18 = *(arg7 + 0x10)
            var_6c = eax_18[1]
            var_70 = *eax_18
            int32_t* eax_19 = sub_614160(eax_18, var_18, arg3, var_70, var_6c, arg4, arg8)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_19
        
        void* var_24_1
        void* var_20_1
        int32_t var_1c_1
        void* eax_27
        int32_t ecx_27
        
        if (arg6 s>= edi)
            int32_t eax_29
            int32_t edx_8
            edx_8:eax_29 = sx.q(arg6)
            int32_t eax_31 = (eax_29 - edx_8) s>> 1
            arg5 = eax_31
            void* ecx_30 = (eax_31 << 4) + var_18
            void* var_64_4 = ecx_30
            var_24_1 = ecx_30
            var_6c = ecx_30
            void* eax_32 = sub_614960(eax_31, var_18, arg3, var_6c, arg8)
            ecx_27 = arg5
            var_20_1 = eax_32
            var_1c_1 = (eax_32 - arg3) s>> 4
            eax_27 = var_18
        else
            int32_t eax_21
            int32_t edx_6
            edx_6:eax_21 = sx.q(edi)
            int32_t eax_23 = (eax_21 - edx_6) s>> 1
            int32_t var_64_3 = ecx_15
            var_1c_1 = eax_23
            void* eax_25 = &arg3[eax_23 * 4]
            var_6c = eax_25
            var_20_1 = eax_25
            void* eax_26 = sub_614890(eax_25, arg4, var_18, var_6c, arg8)
            var_24_1 = eax_26
            eax_27 = var_18
            ecx_27 = (eax_26 - eax_27) s>> 4
            arg5 = ecx_27
        
        void* edi_2 = edi - var_1c_1
        var_6c = edi_2
        var_70 = var_24_1
        void* eax_35 = sub_614290(eax_27, eax_27, var_20_1, var_70, var_6c, ecx_27, arg7)
        var_74 = arg8
        var_7c = arg5
        sub_613820(eax_35, var_1c_1, var_7c, arg7, var_74)
        var_6c = arg6 - arg5
        var_70 = edi_2
        var_74 = arg4
        eax_3 = sub_613820(var_74, var_70, var_6c, arg7, arg8, eax_2)
    else
        arg5 = &var_70
        var_70 = *arg3
        var_74 = &arg3[1]
        sub_5b5160(&var_6c, var_74)
        int32_t var_8_1 = 0
        int32_t eax_7 = *arg2
        sub_5b5160(&var_7c, &arg2[1])
        int32_t var_8_2 = 0xffffffff
        eax_3 = arg8(eax_7)
        
        if (eax_3 != 0)
            int32_t eax_9 = sub_613f30(arg3, arg2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

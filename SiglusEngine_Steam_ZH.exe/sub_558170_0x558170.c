// 函数: sub_558170
// 地址: 0x558170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    int32_t eax_3 = *arg4
    
    if (eax_3 == 0xffffffff)
        void* eax_5 = sub_55bbc0(&arg3[1], arg4[1], *(arg6 + 0x18))
        
        if (eax_5 == 0)
            result = *(arg6 + 0x10)
            
            if (result == 0xa)
                sub_677bb0(0)
            else if (result == 0x14)
                int32_t var_1c_1 = 7
                int32_t var_20_1 = 0
                int16_t var_30 = 0
                sub_52e720(&var_30, &data_ad7c90, nullptr)
                int32_t var_8_1 = 0
                sub_60c680(data_bac49c + 0xc, &var_30)
                sub_52e8a0(&var_30)
        else
            sub_557e50(eax_5, arg2, eax_5, &arg4[2], arg5, arg6)
    else if (eax_3 != 1)
        int32_t var_60
        int16_t* eax_7 = sub_5483b0(&arg3[1], &var_60)
        int32_t var_8_2 = 1
        int16_t var_48
        int16_t* eax_8 = sub_548cb0(eax_7, 0xad88a4, &var_48, eax_7)
        var_8_2.b = 2
        sub_684160(data_bac424, 2, eax_8)
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48.d)
        
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_4c
        
        if (var_4c u>= 8)
            j__free(var_60)
    else
        sub_55bdc0(arg3, *(*(arg6 + 4) + 8))
else if (arg3 == 0)
    *(arg6 + 0x14) = 0
else
    *(arg6 + 0x14) = &arg3[1]

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_559e40
// 地址: 0x559e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b15c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

switch (*arg2)
    case 0
        void* eax_4 = *(arg4 + 4)
        int32_t var_64 = 0
        sub_5b8bb0(arg3, *(eax_4 + 8), *(eax_4 + 0x16c), &var_64)
        sub_677bb0(var_64)
    case 1
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        int32_t var_8_1 = 0
        void* eax_5 = *(arg4 + 4)
        sub_5b8c60(arg3, *(eax_5 + 8), *(eax_5 + 0x16c), &var_30)
        sub_60c680(data_bac49c + 0xc, &var_30)
        sub_52e8a0(&var_30)
    case 3
        sub_677bb0(sub_5b8d70(arg3, *(*(arg4 + 4) + 8)))
    case 4
        sub_677bb0(sub_5b8dc0(arg3, *(*(arg4 + 4) + 8)))
    case 5
        void* eax_10 = *(arg4 + 4)
        sub_677bb0(sub_5b8e40(arg3, *(eax_10 + 8), *(eax_10 + 0x16c)))
    case 6
        void* ecx_13 = *(arg4 + 4)
        sub_677bb0(sub_5b8ee0(arg3, *(ecx_13 + 8), ecx_13 + 0x170))
    case 7
        void* ecx_16 = *(arg4 + 4)
        sub_677bb0(sub_5b9060(arg3, *(ecx_16 + 8), ecx_16 + 0x170))
    default
        int32_t var_60
        int16_t* eax_16 = sub_5483b0(arg3, &var_60)
        int32_t var_8_2 = 1
        int16_t var_48
        int16_t* eax_17 = sub_548cb0(eax_16, 0xad88a4, &var_48, eax_16)
        var_8_2.b = 2
        sub_684160(data_bac424, 2, eax_17)
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48.d)
        
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_4c
        
        if (var_4c u>= 8)
            j__free(var_60)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_55a030
// 地址: 0x55a030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    int32_t eax_3 = *arg4
    
    if (eax_3 == 0xffffffff)
        result = sub_55b9c0(arg3 + 4, arg4[1], *(arg6 + 0x18))
        
        if (result != 0)
            if (&arg4[2] != arg5)
                sub_55a170(result, &arg4[2], result, arg6)
            else
                *(arg6 + 0x14) = result
    else if (eax_3 != 1)
        int32_t var_48
        int16_t* eax_6 = sub_5483b0(arg3 + 4, &var_48)
        int32_t var_8_1 = 0
        int16_t var_30
        int16_t* eax_7 = sub_548cb0(eax_6, 0xad88a4, &var_30, eax_6)
        var_8_1.b = 1
        sub_684160(data_bac424, 2, eax_7)
        int32_t var_1c
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        var_30 = 0
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48)
    else
        sub_677bb0((*(arg3 + 0xa8) - *(arg3 + 0xa4)) s/ 0xb4)
else if (arg3 == 0)
    *(arg6 + 0x14) = 0
else
    *(arg6 + 0x14) = arg3 + 4

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

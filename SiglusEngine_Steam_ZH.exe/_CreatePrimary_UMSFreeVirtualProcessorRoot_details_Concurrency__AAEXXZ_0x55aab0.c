// 函数: ?CreatePrimary@UMSFreeVirtualProcessorRoot@details@Concurrency@@AAEXXZ
// 地址: 0x55aab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2960
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != arg4)
    int32_t eax_3 = *arg2
    
    if (eax_3 == 0)
        sub_5c0a40(arg3, *(arg5 + 4) + 0xc)
    else if (eax_3 != 1)
        int32_t var_44
        int16_t* eax_6 = sub_5483b0(arg3, &var_44)
        int32_t var_8_1 = 0
        int16_t var_2c
        int16_t* eax_7 = sub_548cb0(eax_6, 0xad88a4, &var_2c, eax_6)
        var_8_1.b = 1
        sub_684160(data_bac424, 2, eax_7)
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44)
    else
        sub_5c0b50(arg3)
else
    *(arg5 + 0x14) = arg3

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

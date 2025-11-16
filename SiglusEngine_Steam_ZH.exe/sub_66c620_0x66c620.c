// 函数: sub_66c620
// 地址: 0x66c620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6440
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6 = (arg2 - arg3) s/ 0x30
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(eax_6)
int32_t result = eax_7 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void** esi_3 = i * 0x30 + arg3
    
    do
        int32_t var_34_1 = 7
        esi_3 -= 0x30
        int32_t var_38_1 = 0
        int16_t var_48 = 0
        i -= 1
        sub_52e3c0(&var_48, esi_3, 0, 0xffffffff)
        int32_t var_8_1 = 0
        int16_t var_30 = 0
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        sub_52e3c0(&var_30, &esi_3[6], 0, 0xffffffff)
        int32_t var_8_2 = 1
        sub_66de30(&var_48, i, arg3, eax_6, &var_48, arg4)
        int32_t var_8_3 = 0xffffffff
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
        
        result = 0
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        
        if (var_34_1 u>= 8)
            result = j__free(var_48.d)
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_65e5b0
// 地址: 0x65e5b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2960
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s< 0)
    result.b = 0
else
    result = data_bac510
    
    if (result[0x42e4] + result[0x42e3] + result[0x42e2] s<= arg1)
        result.b = 0
    else if (sub_6a5240(data_bac504 + 0x4b068, arg1).b == 0)
        result.b = 0
    else
        sub_630a10()
        *(data_bac4a0 + 0x248) = 0
        sub_6304c0(0)
        int32_t ecx_5
        result, ecx_5 = sub_6551a0()
        
        if (result.b == 0)
            result.b = 0
        else if (sub_65d2f0(ecx_5).b == 0)
            result.b = 0
        else
            sub_6594f0()
            int32_t var_50_2 = sub_5ce5a0()
            int32_t var_44
            int16_t* eax_5 = sub_6ad9b0(&var_44)
            int32_t var_8_1 = 0
            int16_t var_2c
            int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_2c, 0xaf81dc)
            var_8_1.b = 1
            sub_684160(data_bac424, 5, eax_6)
            int32_t var_18
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_2c = 0
            int32_t var_30
            
            if (var_30 u>= 8)
                j__free(var_44)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

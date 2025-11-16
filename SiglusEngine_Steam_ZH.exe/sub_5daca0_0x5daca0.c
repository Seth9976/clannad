// 函数: sub_5daca0
// 地址: 0x5daca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc420
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *arg1

if (result s>= 0)
    void* edx_1 = data_bac510
    int32_t eax_4 = *(result * 0xa0e4 + edx_1 + 0x207d0)
    void var_4c
    
    if (eax_4 s>= 0 && eax_4 s< *(edx_1 + 0x9988))
        int16_t var_2c = 0
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int32_t* eax_8 = sub_52e3c0(&var_2c, (eax_4 << 5) + 0x7988 + edx_1, 0, 0xffffffff)
        int32_t var_8_1 = 0
        
        if (var_1c_1 != 0)
            var_8_1.b = 1
            sub_54d190(&arg1[7], sub_6281e0(eax_8, &var_2c, &var_4c, 0, 0))
            var_8_1.b = 0
            sub_54b010(&var_4c)
        
        int32_t var_8_2 = 0xffffffff
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        edx_1 = data_bac510
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
    
    result = *(*arg1 * 0xa0e4 + edx_1 + 0x207d4)
    
    if (result s>= 0 && result s< *(edx_1 + 0x9988))
        int16_t var_44 = 0
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        result = sub_52e3c0(&var_44, (result << 5) + 0x7988 + edx_1, 0, 0xffffffff)
        int32_t var_8_3 = 2
        
        if (var_34_1 != 0)
            var_8_3.b = 3
            sub_54d190(&arg1[9], sub_6281e0(result, &var_44, &var_4c, 0, 0))
            var_8_3.b = 2
            result = sub_54b010(&var_4c)
        
        if (var_30_1 u>= 8)
            result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

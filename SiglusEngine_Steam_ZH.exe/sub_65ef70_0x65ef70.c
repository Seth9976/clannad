// 函数: sub_65ef70
// 地址: 0x65ef70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4dc3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = data_bac4e4

if (*(result + 0x1b0) != 0 && *(result + 0x1c8) != 0)
    void* eax_3
    eax_3.b = *(data_bac484 + 0x138)
    void var_b4
    void var_5c
    void var_44
    void var_2c
    
    if (eax_3.b == 0)
        void* ecx_10 = data_bac45c
        result = *(ecx_10 + 0x64)
        int32_t esi_2 = *(ecx_10 + 0x68)
        
        if (result s>= 0 && esi_2 s>= 0)
            int32_t var_8_2 = 6
            void var_8c
            int16_t* eax_10 = sub_532b80(sub_698170(ecx_10, &var_2c, result), data_bac4e4 + 0x1a0, 
                &var_8c, &data_ad900c)
            var_8_2.b = 7
            int16_t* eax_11 = sub_5327a0(eax_10, eax_10, &var_5c, &var_2c)
            var_8_2.b = 8
            sub_532b80(eax_11, eax_11, &var_44, &data_af0494)
            sub_52e8a0(&var_5c)
            var_8_2.b = 0xb
            sub_52e8a0(&var_8c)
            sub_6b53f0(sub_536170(&var_b4, &var_44), data_bac4e4 + 0x1b8, esi_2)
            sub_52e8a0(&var_44)
            sub_52e8a0(&var_2c)
    else
        int32_t eax_4 = sub_676250()
        result = sub_676280()
        
        if (eax_4 s>= 0 && result s>= 0)
            int32_t var_8_1 = 0
            int16_t* eax_6 = sub_532b80(sub_698170(data_bac45c, &var_2c, eax_4), 
                data_bac4e4 + 0x1a0, &var_5c, &data_ad900c)
            var_8_1.b = 1
            int16_t* eax_7 = sub_5327a0(eax_6, eax_6, &var_44, &var_2c)
            var_8_1.b = 2
            void var_74
            sub_532b80(eax_7, eax_7, &var_74, &data_af0494)
            sub_52e8a0(&var_44)
            var_8_1.b = 5
            sub_52e8a0(&var_5c)
            sub_6b53f0(sub_536170(&var_b4, &var_74), data_bac4e4 + 0x1b8, result)
            sub_52e8a0(&var_74)
            sub_52e8a0(&var_2c)
else if (arg1 != 0)
    void* ecx_20 = data_bac4d0
    
    if (*(ecx_20 + 0x1dec4) == 0)
        (*(*(ecx_20 + 0x1dec0) + 0x10))(data_4ebe3ac)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_655e60
// 地址: 0x655e60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4752
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s>= 0)
    void* eax_3 = data_bac510
    result = *(eax_3 + 0x10b88) + *(eax_3 + 0x10b90) + *(eax_3 + 0x10b8c)

if (arg1 s< 0 || result s<= arg1 || arg2 s< 0 || result s<= arg2 || arg1 == arg2)
    result.b = 0
else
    sub_6a4eb0(data_bac504 + 0x4b068, arg2)
    void var_bc
    sub_651e40(&var_bc, arg1)
    int32_t var_8_1 = 0
    void var_2c
    sub_651e40(&var_2c, arg2)
    var_8_1.b = 1
    void var_d4
    sub_651f20(&var_d4, arg1)
    var_8_1.b = 2
    void var_5c
    sub_651f20(&var_5c, arg2)
    var_8_1.b = 3
    sub_6b4390(&var_2c)
    int32_t ebx
    void var_114
    void var_a4
    void var_8c
    void var_74
    void var_44
    
    if (sub_6b4b30(&var_bc, &var_2c) != 0)
        char eax_11
        
        if (*(data_bac510 + 0x10bc0) != 0)
            sub_6b4390(&var_5c)
            eax_11 = sub_6b4b30(&var_d4, &var_5c)
        
        if (*(data_bac510 + 0x10bc0) == 0 || eax_11 != 0)
            ebx.b = 1
        else
            int16_t* eax_12 = sub_6b9ed0(&var_44)
            void* const var_f4_7 = &data_ad90c0
            int32_t var_f8_2 = arg2
            int32_t var_fc_2 = arg1
            var_8_1.b = 8
            sub_52e820(&var_114, 0xaf7e70)
            int16_t* eax_13 = sub_6ae4c0(&var_74, var_114)
            var_8_1.b = 9
            int16_t* eax_14 = sub_532b80(eax_13, eax_13, &var_a4, var_f4_7)
            var_8_1.b = 0xa
            int16_t* eax_15 = sub_5327a0(eax_14, eax_14, &var_8c, eax_12)
            var_8_1.b = 0xb
            sub_684160(data_bac424, 2, eax_15)
            sub_52e8a0(&var_8c)
            sub_52e8a0(&var_a4)
            sub_52e8a0(&var_74)
            sub_52e8a0(&var_44)
            ebx.b = 0
    else
        int16_t* eax_6 = sub_6b9ed0(&var_8c)
        void* const var_f4_5 = &data_ad90c0
        int32_t var_f8_1 = arg2
        int32_t var_fc_1 = arg1
        var_8_1.b = 4
        sub_52e820(&var_114, 0xaf7e40)
        int16_t* eax_7 = sub_6ae4c0(&var_a4, var_114)
        var_8_1.b = 5
        int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_74, var_f4_5)
        var_8_1.b = 6
        int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_44, eax_6)
        var_8_1.b = 7
        sub_684160(data_bac424, 2, eax_9)
        sub_52e8a0(&var_44)
        sub_52e8a0(&var_74)
        sub_52e8a0(&var_a4)
        sub_52e8a0(&var_8c)
        ebx.b = 0
    sub_52e8a0(&var_5c)
    sub_52e8a0(&var_d4)
    sub_52e8a0(&var_2c)
    sub_52e8a0(&var_bc)
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

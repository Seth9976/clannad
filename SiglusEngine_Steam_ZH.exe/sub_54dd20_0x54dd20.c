// 函数: sub_54dd20
// 地址: 0x54dd20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1506
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg2

if (eax_3 == 0xffffffff)
    int32_t ecx = arg2[1]
    
    if (ecx u> 0xff)
        int32_t var_1d8_1 = ecx
        int32_t var_74
        int16_t* eax_5 = sub_6ad9b0(&var_74)
        int32_t var_8_1 = 0
        int16_t var_2c
        int16_t* eax_6 = sub_548cb0(eax_5, u"key[", &var_2c, eax_5)
        var_8_1.b = 1
        int16_t var_5c
        int16_t* eax_7 = sub_532b80(eax_6, eax_6, &var_5c, &data_ad881c)
        var_8_1.b = 2
        sub_684160(data_bac424, 7, eax_7)
        int32_t var_48
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        int32_t var_48_1 = 7
        int32_t var_4c_1 = 0
        var_5c = 0
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_60
        
        if (var_60 u>= 8)
            j__free(var_74)
    else
        sub_54df30(&arg2[2], arg2, ecx, &arg2[2])
else
    int32_t var_1cc
    
    if (eax_3 != 0)
        if (eax_3 == 1)
            sub_54aed0(&var_1cc)
            int32_t var_8_3 = 4
            char var_8b_1 = 1
            goto label_54de43
        
        if (eax_3 == 3)
            sub_6b2260(data_bac490 + 0x100)
        else if (eax_3 != 5)
            void* var_1d8_8 = 0x19
            int32_t var_30_1 = 7
            void* const var_1dc_2 = &data_ad8844
            int32_t var_34_1 = 0
            int16_t var_44 = 0
            sub_52e720(&var_44, var_1dc_2, var_1d8_8)
            int32_t var_8_4 = 5
            sub_684160(data_bac424, 2, &var_44)
            sub_52e8a0(&var_44)
        else
            sub_6b22c0(data_bac490 + 0x100)
    else
        sub_54aed0(&var_1cc)
        int32_t var_8_2 = 3
    label_54de43:
        var_1cc = 0x13
        void var_32c
        sub_54cf80(&var_32c, &var_1cc)
        sub_6766e0()
        void var_140
        sub_54ae40(&var_140)

void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

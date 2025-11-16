// 函数: sub_5c1560
// 地址: 0x5c1560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bb337
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1ac
int32_t eax_2 = __security_cookie ^ &var_1ac
int32_t __saved_edi
int32_t var_1bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* const result = arg1
void* const result_1 = result
int32_t ebx = arg2

if (ebx s< arg3)
    void* edi_1 = result + 4
    void* eax_5 = result + 0xb8
    void* var_1a0_1 = edi_1
    int32_t var_1a8_1 = ebx * 0x1d4
    
    do
        void* var_1c0_1 = arg1
        int32_t var_b8
        int16_t* eax_7 = sub_6ad9b0(&var_b8)
        int32_t var_c_1 = 0
        int16_t var_100
        int16_t* eax_8 = sub_5483b0(edi_1, &var_100)
        var_c_1.b = 1
        int16_t var_d0
        int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_d0, &data_ad85e8)
        var_c_1.b = 2
        int16_t var_118
        int16_t* eax_10 = sub_5327a0(eax_9, eax_9, &var_118, eax_7)
        var_c_1.b = 3
        int16_t var_e8
        int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_e8, &data_af18c0)
        var_c_1.b = 4
        int32_t var_194_1 = ebx
        void var_a0
        __builtin_memcpy(&var_a0, edi_1, 0x80)
        void var_23c
        __builtin_memcpy(&var_23c, eax_5, 0x80)
        int32_t var_240_1 = ebx
        int32_t var_24
        *(&var_a0 + (var_24 << 2)) = 0xffffffff.q
        var_24 += 2
        int16_t* var_244_1 = eax_11
        int32_t var_11c_1 = 2
        void var_2c4
        __builtin_memcpy(&var_2c4, &var_a0, 0x80)
        arg1 = sub_5c1100(*(result_1 + 0xa4) + var_1a8_1)
        int32_t var_d4
        
        if (var_d4 u>= 8)
            arg1 = j__free(var_e8.d)
        
        var_d4 = 7
        int32_t var_d8_1 = 0
        var_e8 = 0
        int32_t var_104
        
        if (var_104 u>= 8)
            arg1 = j__free(var_118.d)
        
        var_104 = 7
        int32_t var_108_1 = 0
        var_118 = 0
        int32_t var_bc
        
        if (var_bc u>= 8)
            arg1 = j__free(var_d0.d)
        
        var_bc = 7
        int32_t var_c0_1 = 0
        var_d0 = 0
        int32_t var_ec
        
        if (var_ec u>= 8)
            arg1 = j__free(var_100.d)
        
        result = nullptr
        int32_t var_c_2 = 0xffffffff
        var_ec = 7
        int32_t var_f0_1 = 0
        var_100 = 0
        int32_t var_a4
        
        if (var_a4 u>= 8)
            result, arg1 = j__free(var_b8)
        
        edi_1 = var_1a0_1
        ebx += 1
        var_1a8_1 += 0x1d4
    while (ebx s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_1ac)
return result

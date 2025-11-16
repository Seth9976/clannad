// 函数: sub_60b6e0
// 地址: 0x60b6e0
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
void* result = arg1
void* result_1 = result
int32_t ebx = arg2

if (ebx s< arg3)
    void* edi_1 = result + 4
    void* var_1a0_1 = edi_1
    int32_t var_1a8_1 = ebx * 0x260
    
    do
        void* var_1c0_1 = arg1
        int32_t var_b8
        int16_t* eax_6 = sub_6ad9b0(&var_b8)
        int32_t var_c_1 = 0
        int16_t var_100
        int16_t* eax_7 = sub_5483b0(edi_1, &var_100)
        var_c_1.b = 1
        int16_t var_d0
        int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_d0, &data_ad85e8)
        var_c_1.b = 2
        int16_t var_118
        int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_118, eax_6)
        var_c_1.b = 3
        int16_t var_e8
        int16_t* eax_10 = sub_532b80(eax_9, eax_9, &var_e8, &data_af18c0)
        var_c_1.b = 4
        int32_t var_194_1 = ebx
        void var_a0
        __builtin_memcpy(&var_a0, edi_1, 0x80)
        int32_t var_11c_1 = 2
        int32_t var_24
        *(&var_a0 + (var_24 << 2)) = 0xffffffff.q
        var_24 += 2
        void* eax_14 = *(result_1 + 0xa4) + var_1a8_1
        __builtin_memcpy(eax_14, &var_a0, 0x80)
        *(eax_14 + 0x80) = 0x50a
        
        if (eax_14 + 0x84 != eax_10)
            sub_52e3c0(eax_14 + 0x84, eax_10, 0, 0xffffffff)
        
        arg1 = eax_14
        *(eax_14 + 0x9c) = 0
        *(eax_14 + 0xa0) = ebx
        sub_60ad20(arg1)
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
        
        var_1a8_1 += 0x260
        ebx += 1
        edi_1 = var_1a0_1
    while (ebx s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_1ac)
return result

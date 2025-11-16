// 函数: sub_5f0ce0
// 地址: 0x5f0ce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bce47
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_2c4
int32_t eax_2 = __security_cookie ^ &var_2c4
int32_t __saved_edi
int32_t var_2d4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c0 = arg1
int32_t ebx = arg2

if (ebx s< arg3)
    void* eax_5 = arg1 + 0x13c
    void* edi_1 = arg1 + 4
    void* eax_6 = arg1 + 0xbc
    void* var_2a4_1 = edi_1
    var_2c4 = ebx * 0x15fc
    
    do
        result.b = *(arg1 + 0xb9)
        char var_2b4_1 = 1
        char var_2ac_1 = result.b
        char var_2b8_1 = 0
        int32_t var_2bc_1 = 0xffffffff
        
        if (*(arg1 + 0xb8) != 0)
            arg1 = data_bac510
            var_2b4_1 = *(arg1 + (ebx << 3) + 0x1e77c)
            var_2b8_1 = *(arg1 + (ebx << 3) + 0x1e77e)
            var_2bc_1 = *(arg1 + (ebx << 3) + 0x1e780)
        
        void* var_2d8_1 = arg1
        int16_t var_1e8
        void** eax_10 = sub_6ad9b0(&var_1e8)
        int32_t var_c_1 = 0
        int16_t var_200
        void** eax_11 = sub_5483b0(edi_1, &var_200)
        var_c_1.b = 1
        int16_t var_1b8
        void** eax_12 = sub_532b80(eax_11, eax_11, &var_1b8, &data_ad85e8)
        var_c_1.b = 2
        int16_t var_218
        void** eax_13 = sub_5327a0(eax_12, eax_12, &var_218, eax_10)
        var_c_1.b = 3
        int16_t var_1d0
        void** eax_14 = sub_532b80(eax_13, eax_13, &var_1d0, &data_af18c0)
        var_c_1.b = 4
        int32_t var_298_1 = 0xffffffff
        void var_1a0
        __builtin_memcpy(&var_1a0, edi_1, 0x80)
        int32_t var_294_1 = ebx
        int32_t var_21c_1 = 2
        int32_t var_124
        *(&var_1a0 + (var_124 << 2)) = var_298_1.q
        var_124 += 2
        void* eax_18 = *(var_2c0 + 0xa4) + var_2c4
        void var_120
        void* eax_19 = sub_5d5d50(&var_120, eax_5)
        void var_a0
        void* eax_20 = sub_5d5d50(&var_a0, eax_6)
        void var_354
        __builtin_memcpy(&var_354, eax_19, 0x80)
        void var_3d4
        __builtin_memcpy(&var_3d4, eax_20, 0x80)
        char eax_22 = *(var_2c0 + 0xba)
        void var_454
        __builtin_memcpy(&var_454, &var_1a0, 0x80)
        edi_1 = var_2a4_1
        sub_5e4840(eax_18, eax_14, var_2b4_1, var_2ac_1, eax_22, var_2b8_1, var_2bc_1, edi_1, 
            var_454)
        int32_t var_1bc
        
        if (var_1bc u>= 8)
            j__free(var_1d0.d)
        
        var_1bc = 7
        int32_t var_1c0_1 = 0
        var_1d0 = 0
        int32_t var_204
        
        if (var_204 u>= 8)
            j__free(var_218.d)
        
        var_204 = 7
        int32_t var_208_1 = 0
        var_218 = 0
        int32_t var_1a4
        
        if (var_1a4 u>= 8)
            j__free(var_1b8.d)
        
        var_1a4 = 7
        int32_t var_1a8_1 = 0
        var_1b8 = 0
        int32_t var_1ec
        
        if (var_1ec u>= 8)
            j__free(var_200.d)
        
        int32_t var_c_2 = 0xffffffff
        var_1ec = 7
        int32_t var_1f0_1 = 0
        var_200 = 0
        int32_t var_1d4
        
        if (var_1d4 u>= 8)
            j__free(var_1e8.d)
        
        var_2c4 = &var_2c4[0x57f]
        result = nullptr
        arg1 = var_2c0
        ebx += 1
        var_1d4 = 7
        int32_t var_1d8_1 = 0
        var_1e8 = 0
    while (ebx s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_2c4)
return result

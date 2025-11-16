// 函数: sub_5d9ad0
// 地址: 0x5d9ad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bc327
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_234
int32_t eax_2 = __security_cookie ^ &var_234
int32_t __saved_edi
int32_t var_244 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* const result = arg1
void* const result_1 = result
int32_t ebx = arg2

if (ebx s< arg3)
    void* edi_1 = result + 4
    void* eax_5 = result + 0xb8
    void* var_220_1 = edi_1
    int32_t var_230_1 = ebx * 0x19b0
    
    do
        void* var_248_1 = arg1
        int32_t var_138
        int16_t* eax_7 = sub_6ad9b0(&var_138)
        int32_t var_c_1 = 0
        int16_t var_180
        int16_t* eax_8 = sub_5483b0(edi_1, &var_180)
        var_c_1.b = 1
        int16_t var_150
        int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_150, &data_ad85e8)
        var_c_1.b = 2
        int16_t var_168
        int16_t* eax_10 = sub_5327a0(eax_9, eax_9, &var_168, eax_7)
        var_c_1.b = 3
        int16_t var_198
        int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_198, &data_af18c0)
        var_c_1.b = 4
        int32_t var_218_1 = 0xffffffff
        void var_120
        __builtin_memcpy(&var_120, edi_1, 0x80)
        int32_t var_214_1 = ebx
        int32_t var_19c_1 = 2
        int32_t var_a4
        *(&var_120 + (var_a4 << 2)) = var_218_1.q
        var_a4 += 2
        void* eax_15 = *(result_1 + 0xa4) + var_230_1
        void var_2c4
        void var_a0
        __builtin_memcpy(&var_2c4, sub_5d5d50(&var_a0, eax_5), 0x80)
        void var_344
        __builtin_memcpy(&var_344, &var_120, 0x80)
        arg1 = sub_5d5e90(eax_15, ebx, eax_11, result_1)
        int32_t var_184
        
        if (var_184 u>= 8)
            arg1 = j__free(var_198.d)
        
        var_184 = 7
        int32_t var_188_1 = 0
        var_198 = 0
        int32_t var_154
        
        if (var_154 u>= 8)
            arg1 = j__free(var_168.d)
        
        var_154 = 7
        int32_t var_158_1 = 0
        var_168 = 0
        int32_t var_13c
        
        if (var_13c u>= 8)
            arg1 = j__free(var_150.d)
        
        var_13c = 7
        int32_t var_140_1 = 0
        var_150 = 0
        int32_t var_16c
        
        if (var_16c u>= 8)
            arg1 = j__free(var_180.d)
        
        result = nullptr
        int32_t var_c_2 = 0xffffffff
        var_16c = 7
        int32_t var_170_1 = 0
        var_180 = 0
        int32_t var_124
        
        if (var_124 u>= 8)
            result, arg1 = j__free(var_138)
        
        var_230_1 += 0x19b0
        ebx += 1
        edi_1 = var_220_1
    while (ebx s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_234)
return result

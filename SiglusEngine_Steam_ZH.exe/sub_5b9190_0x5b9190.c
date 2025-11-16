// 函数: sub_5b9190
// 地址: 0x5b9190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bac0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_12c
int32_t eax_2 = __security_cookie ^ &var_12c
int32_t __saved_edi
int32_t var_13c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t ebx = arg2

if (ebx s< arg3)
    int32_t edi_1 = ebx * 0xc8
    int32_t var_128_1 = ebx * 0x18
    var_12c = edi_1
    int32_t* ecx = arg1
    
    do
        int32_t* var_140_1 = ecx
        int32_t var_34
        int16_t* eax_8 = sub_6ad9b0(&var_34)
        int32_t var_c_1 = 0
        int16_t var_7c
        int16_t* eax_9 = sub_5483b0(&result[1], &var_7c)
        var_c_1.b = 1
        int16_t var_4c
        int16_t* eax_10 = sub_532b80(eax_9, eax_9, &var_4c, &data_ad85e8)
        var_c_1.b = 2
        int16_t var_64
        int16_t* eax_11 = sub_5327a0(eax_10, eax_10, &var_64, eax_8)
        var_c_1.b = 3
        int16_t var_94
        int16_t* eax_12 = sub_532b80(eax_11, eax_11, &var_94, &data_af18c0)
        var_c_1.b = 4
        int32_t var_9c_1 = 0
        void* edx_6 = result_1[0x29] + edi_1
        void var_118
        __builtin_memcpy(edx_6, &var_118, 0x80)
        ecx = edx_6 + 0x84
        *(edx_6 + 0x80) = 0x46a
        
        if (ecx != eax_12)
            ecx = sub_52e3c0(ecx, eax_12, 0, 0xffffffff)
        
        void* eax_13 = data_bac510
        *(edx_6 + 0x9c) = 0
        
        if (*(eax_13 + var_128_1 + 0x10c04) != 0)
            ecx = sub_5b87e0(edx_6, eax_13 + 0x10bf4 + var_128_1)
        
        int32_t var_80
        
        if (var_80 u>= 8)
            ecx = j__free(var_94.d)
        
        var_80 = 7
        int32_t var_84_1 = 0
        var_94 = 0
        int32_t var_50
        
        if (var_50 u>= 8)
            ecx = j__free(var_64.d)
        
        var_50 = 7
        int32_t var_54_1 = 0
        var_64 = 0
        int32_t var_38
        
        if (var_38 u>= 8)
            ecx = j__free(var_4c.d)
        
        var_38 = 7
        int32_t var_3c_1 = 0
        var_4c = 0
        int32_t var_68
        
        if (var_68 u>= 8)
            ecx = j__free(var_7c.d)
        
        result = nullptr
        int32_t var_c_2 = 0xffffffff
        var_68 = 7
        int32_t var_6c_1 = 0
        var_7c = 0
        int32_t var_20
        
        if (var_20 u>= 8)
            result, ecx = j__free(var_34)
        
        ebx += 1
        edi_1 = var_12c + 0xc8
        var_12c = edi_1
        var_128_1 += 0x18
    while (ebx s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_12c)
return result

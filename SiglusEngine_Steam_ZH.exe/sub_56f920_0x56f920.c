// 函数: sub_56f920
// 地址: 0x56f920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b3d5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_b8
int32_t eax_2 = __security_cookie ^ &var_b8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    bool cond:0_1 = *(arg1 + 0xb8) != 0
    result = data_bac4a0
    int32_t ecx = result[0x89]
    int32_t edx_1 = result[0x8a]
    var_b8 = ecx
    int32_t var_a8_1 = ecx
    int32_t var_a4_1 = edx_1
    
    if (cond:0_1 || ecx != *(arg1 + 0x41c) || edx_1 != *(arg1 + 0x420))
        int32_t var_c8_1 = ecx
        int32_t var_3c
        int16_t* eax_5 = sub_6ad9b0(&var_3c)
        int32_t var_14_1 = 0
        int16_t var_6c
        int16_t* eax_6 = sub_6ad9b0(&var_6c)
        var_14_1.b = 1
        int16_t var_84
        int16_t* eax_7 = sub_532b80(eax_6, eax_6, &var_84, u"MB / ")
        var_14_1.b = 2
        int16_t var_9c
        int16_t* eax_8 = sub_5327a0(eax_7, eax_7, &var_9c, eax_5)
        var_14_1.b = 3
        int16_t var_54
        int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_54, 0xaedff0)
        var_14_1.b = 4
        int32_t ecx_7 = *(data_bac4e0 + 0x34)
        
        if (ecx_7 != 0)
            ecx_7(*(arg1 + 0xe4), 1, 1, eax_9, eax_4)
        
        int32_t var_40
        
        if (var_40 u>= 8)
            j__free(var_54.d)
        
        int32_t var_40_1 = 7
        int32_t var_44_1 = 0
        var_54 = 0
        int32_t var_88
        
        if (var_88 u>= 8)
            j__free(var_9c.d)
        
        int32_t var_88_1 = 7
        int32_t var_8c_1 = 0
        var_9c = 0
        int32_t var_70
        
        if (var_70 u>= 8)
            j__free(var_84.d)
        
        int32_t var_70_1 = 7
        int32_t var_74_1 = 0
        var_84 = 0
        int32_t var_58
        
        if (var_58 u>= 8)
            j__free(var_6c.d)
        
        result = nullptr
        int32_t var_58_1 = 7
        int32_t var_5c_1 = 0
        var_6c = 0
        int32_t var_28
        
        if (var_28 u>= 8)
            result = j__free(var_3c)
    
    *(arg1 + 0xb8) = 0
    int128_t var_b0
    *(arg1 + 0x414) = var_b0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_b8)
return result

// 函数: sub_681e50
// 地址: 0x681e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b7f19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_esi
int32_t var_9c = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xa8) != 0)
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    int16_t var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    int32_t var_c_1 = 0
    int32_t var_80_1 = 7
    int32_t var_84_1 = 0
    var_94 = 0
    sub_52e720(&var_94, &data_ad7c90, nullptr)
    var_c_1.b = 1
    int32_t var_50_1 = 7
    int32_t var_54_1 = 0
    int16_t var_64 = 0
    sub_52e720(&var_64, &data_ad7c90, nullptr)
    var_c_1.b = 2
    int32_t var_68_1 = 7
    int32_t var_6c_1 = 0
    int16_t var_7c = 0
    int32_t ecx_4 = sub_52e720(&var_7c, u"open", 4)
    var_c_1.b = 3
    int32_t eax_5 = data_bac3a0
    
    if ((eax_5.b & 1) == 0)
        data_bac3a0 = eax_5 | 1
        var_c_1.b = 4
        sub_58fa00()
        eax_5, ecx_4 = _atexit(j_sub_58fec0)
        var_c_1.b = 3
    
    int32_t var_a0_1 = ecx_4
    eax_5.b = *(arg1 + 4) != 0
    int32_t edx_1
    edx_1.b = eax_5.b != 0
    var_c_1.b = 5
    int32_t var_34
    sub_6bad30(&data_bac3a4, &var_7c, sub_6ad9b0(&var_34), arg1 + 0x98, &var_64, &var_94, &var_4c)
    int32_t var_20
    
    if (var_20 u>= 8)
        j__free(var_34)
    
    if (var_68_1 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_68_2 = 7
    int32_t var_6c_2 = 0
    var_7c = 0
    
    if (var_50_1 u>= 8)
        j__free(var_64.d)
    
    int32_t var_50_2 = 7
    int32_t var_54_2 = 0
    var_64 = 0
    
    if (var_80_1 u>= 8)
        j__free(var_94.d)
    
    result = nullptr
    int32_t var_80_2 = 7
    int32_t var_84_2 = 0
    var_94 = 0
    
    if (var_38_1 u>= 8)
        result = j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_94)
return result

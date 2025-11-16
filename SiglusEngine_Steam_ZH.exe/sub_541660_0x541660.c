// 函数: sub_541660
// 地址: 0x541660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0c70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) != 0)
    int16_t var_2c
    int16_t* eax_3 = sub_6ada50(result, *(data_bac4e4 + 0x58), &var_2c, 0xa)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    int16_t var_44
    sub_6c2db0(arg1 + 0xfe4, sub_532b80(eax_3, eax_3, &var_44, 0xad7f50))
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    void* edx_4 = data_bac4e4
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int16_t* eax_5 = sub_6ada50(0, *(edx_4 + 0x54), &var_44, 0xa)
    int32_t var_8_3 = 2
    var_8_3.b = 3
    sub_6c2db0(arg1 + 0x1224, sub_532b80(eax_5, eax_5, &var_2c, 0xad7f50))
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    void* edx_7 = data_bac4e4
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    void** eax_7 = sub_6ada50(0, *(edx_7 + 0x64), &var_44, 0xa)
    int32_t var_8_5 = 4
    var_8_5.b = 5
    sub_6c2db0(arg1 + 0x14f4, sub_532b80(eax_7, eax_7, &var_2c, 0xad7f50))
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_8_6 = 0xffffffff
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    
    if (var_30_2 u>= 8)
        j__free(var_44.d)
    
    void* edx_10 = data_bac4e4
    int32_t var_30_3 = 7
    var_44 = 0
    int32_t var_34_3 = 0
    int32_t var_74
    void** eax_9 = sub_6ada50(0, *(edx_10 + 0x60), &var_74, 0xa)
    int32_t var_8_7 = 6
    var_8_7.b = 7
    int16_t var_5c
    sub_6c2db0(arg1 + 0x1734, sub_532b80(eax_9, eax_9, &var_5c, 0xad7f50))
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    result = nullptr
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        result = j__free(var_74)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

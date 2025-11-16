// 函数: sub_6e20e0
// 地址: 0x6e20e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ccdd3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c0 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
int16_t* var_c4 = arg1
*arg1 = 0
int32_t var_8_1 = 0
int32_t var_c0_1 = 1

if (arg2 != 0x88780078)
    int32_t var_bc
    void** eax_3 = sub_6e1e90(&var_bc, arg2)
    int32_t var_8_3 = 2
    int16_t var_8c
    int16_t* eax_4 = sub_6ada50(eax_3, arg2, &var_8c, 0x10)
    var_8_3.b = 3
    int16_t var_a4
    int16_t* eax_5 = sub_548cb0(eax_4, u"hr = ", &var_a4, eax_4)
    var_8_3.b = 4
    int16_t var_5c
    int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_5c, 0xaf04bc)
    var_8_3.b = 5
    int16_t var_44
    void** eax_7 = sub_5327a0(eax_6, eax_6, &var_44, eax_3)
    var_8_3.b = 6
    int16_t var_74
    void** eax_8 = sub_532b80(eax_7, eax_7, &var_74, &data_ad90a0)
    var_8_3.b = 7
    
    if (arg1 != eax_8)
        sub_52e3c0(arg1, eax_8, 0, 0xffffffff)
    
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_90
    
    if (var_90 u>= 8)
        j__free(var_a4.d)
    
    int32_t var_90_1 = 7
    int32_t var_94_1 = 0
    var_a4 = 0
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    int32_t var_a8
    
    if (var_a8 u>= 8)
        j__free(var_bc)
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, u"DSERR_NODRIVE", 0x24)
    int32_t var_8_2 = 1
    
    if (arg1 != &var_2c)
        sub_52e3c0(arg1, &var_2c, 0, 0xffffffff)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1

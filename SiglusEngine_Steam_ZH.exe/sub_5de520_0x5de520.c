// 函数: sub_5de520
// 地址: 0x5de520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc5c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = *(arg1 + 0x170)
int32_t result

if (*(data_bac510 + 0x10bd8) != 1)
    *(arg1 + 0xe0) = eax_4
    *(arg1 + 0xe4) += *(arg1 + 0xf8) + *(arg1 + 0xf0)
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, 0xaf0598, 1)
    int32_t var_8_2 = 3
    int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0xe0) - *(arg1 + 8)), *(arg1 + 0x18))
    int16_t var_a4
    void** eax_19 = sub_55d3f0(temp0_1, &var_44, &var_a4, temp0_1)
    var_8_2.b = 4
    var_8_2.b = 5
    int16_t var_74
    sub_532870(arg1 + 0x134, sub_548cb0(eax_19, &data_ad90c0, &var_74, eax_19), 0, 0xffffffff)
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_90
    
    if (var_90 u>= 8)
        j__free(var_a4.d)
    
    result = 0
    int32_t var_90_1 = 7
    int32_t var_94_1 = 0
    var_a4 = 0
    
    if (var_30_1 u>= 8)
        result = j__free(var_44.d)
else
    *(arg1 + 0xe4) = eax_4
    *(arg1 + 0xe0) -= *(arg1 + 0xf8) + *(arg1 + 0xf0)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaf0598, 1)
    int32_t var_8_1 = 0
    int32_t temp0 = divs.dp.d(sx.q(*(arg1 + 0xe4) - *(arg1 + 0xc)), *(arg1 + 0x18))
    int16_t var_8c
    int16_t* eax_11 = sub_55d3f0(temp0, &var_2c, &var_8c, temp0)
    var_8_1.b = 1
    var_8_1.b = 2
    int16_t var_5c
    sub_532870(arg1 + 0x134, sub_548cb0(eax_11, &data_ad90c0, &var_5c, eax_11), 0, 0xffffffff)
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    result = 0
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    
    if (var_18_1 u>= 8)
        result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_6be940
// 地址: 0x6be940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbe44
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[9] == arg1[0xa])
    int32_t var_180
    void** eax_17 = sub_6bef60(&var_180, &arg1[0xc])
    int32_t var_8_4 = 0xa
    int32_t var_94_1 = 7
    int32_t var_98_1 = 0
    int16_t var_a8 = 0
    var_8_4.b = 0xb
    int16_t var_108
    void** eax_19 = sub_55d3f0(sub_52e720(&var_a8, 0xad90c4, 1), &var_a8, &var_108, arg3)
    var_8_4.b = 0xc
    int16_t var_150
    void** eax_20 = sub_532b80(eax_19, eax_19, &var_150, &(*U"/=?<")[3])
    var_8_4.b = 0xd
    int16_t var_168
    void** eax_21 = sub_5327a0(eax_20, eax_20, &var_168, arg1)
    var_8_4.b = 0xe
    int16_t var_138
    void** eax_22 = sub_532b80(eax_21, eax_21, &var_138, 0xb02dec)
    var_8_4.b = 0xf
    int16_t var_d8
    void** eax_23 = sub_5327a0(eax_22, eax_22, &var_d8, eax_17)
    var_8_4.b = 0x10
    int16_t var_f0
    void** eax_24 = sub_532b80(eax_23, eax_23, &var_f0, 0xb02e10)
    var_8_4.b = 0x11
    int16_t var_120
    int16_t* eax_25 = sub_5327a0(eax_24, eax_24, &var_120, arg1)
    var_8_4.b = 0x12
    var_8_4.b = 0x13
    int16_t var_c0
    sub_532870(arg2, sub_532b80(eax_25, eax_25, &var_c0, 0xb02dfc), 0, 0xffffffff)
    int32_t var_ac
    
    if (var_ac u>= 8)
        j__free(var_c0.d)
    
    int32_t var_ac_1 = 7
    int32_t var_b0_1 = 0
    var_c0 = 0
    int32_t var_10c
    
    if (var_10c u>= 8)
        j__free(var_120.d)
    
    int32_t var_10c_1 = 7
    int32_t var_110_1 = 0
    var_120 = 0
    int32_t var_dc
    
    if (var_dc u>= 8)
        j__free(var_f0.d)
    
    int32_t var_dc_1 = 7
    int32_t var_e0_1 = 0
    var_f0 = 0
    int32_t var_c4
    
    if (var_c4 u>= 8)
        j__free(var_d8.d)
    
    int32_t var_c4_1 = 7
    int32_t var_c8_1 = 0
    var_d8 = 0
    int32_t var_124
    
    if (var_124 u>= 8)
        j__free(var_138.d)
    
    int32_t var_124_1 = 7
    int32_t var_128_1 = 0
    var_138 = 0
    int32_t var_154
    
    if (var_154 u>= 8)
        j__free(var_168.d)
    
    int32_t var_154_1 = 7
    int32_t var_158_1 = 0
    var_168 = 0
    int32_t var_13c
    
    if (var_13c u>= 8)
        j__free(var_150.d)
    
    int32_t var_13c_1 = 7
    int32_t var_140_1 = 0
    var_150 = 0
    int32_t var_f4
    
    if (var_f4 u>= 8)
        j__free(var_108.d)
    
    int32_t var_f4_1 = 7
    int32_t var_f8_1 = 0
    var_108 = 0
    
    if (var_94_1 u>= 8)
        j__free(var_a8.d)
    
    int32_t var_94_2 = 7
    int32_t var_98_2 = 0
    var_a8 = 0
    int32_t var_16c
    
    if (var_16c u>= 8)
        j__free(var_180)
else
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    int32_t var_8_1 = 0
    int16_t var_48
    int16_t* eax_5 = sub_55d3f0(sub_52e720(&var_30, 0xad90c4, 1), &var_30, &var_48, arg3)
    var_8_1.b = 1
    int16_t var_60
    int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_60, &(*U"/=?<")[3])
    var_8_1.b = 2
    int16_t var_78
    int16_t* eax_7 = sub_5327a0(eax_6, eax_6, &var_78, arg1)
    var_8_1.b = 3
    var_8_1.b = 4
    int16_t var_90
    sub_532870(arg2, sub_532b80(eax_7, eax_7, &var_90, 0xb02dfc), 0, 0xffffffff)
    int32_t var_7c
    
    if (var_7c u>= 8)
        j__free(var_90.d)
    
    int32_t var_7c_1 = 7
    int32_t var_80_1 = 0
    var_90 = 0
    int32_t var_64
    
    if (var_64 u>= 8)
        j__free(var_78.d)
    
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    var_78 = 0
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60.d)
    
    int32_t var_4c_1 = 7
    int32_t var_50_1 = 0
    var_60 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    int32_t i = arg1[9]
    
    if (i != arg1[0xa])
        int32_t eax_10 = arg3 + 1
        int32_t var_18c_1 = eax_10
        
        do
            sub_6be940(i, arg2, eax_10)
            eax_10 = var_18c_1
            i += 0x48
        while (i != arg1[0xa])
    
    int32_t var_1c_2 = 7
    int32_t var_20_2 = 0
    var_30 = 0
    int32_t var_8_3 = 5
    int16_t* eax_12 = sub_55d3f0(sub_52e720(&var_30, 0xad90c4, 1), &var_30, &var_90, arg3)
    var_8_3.b = 6
    int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_78, 0xb02e10)
    var_8_3.b = 7
    int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_60, arg1)
    var_8_3.b = 8
    var_8_3.b = 9
    sub_532870(arg2, sub_532b80(eax_14, eax_14, &var_48, 0xb02dfc), 0, 0xffffffff)
    
    if (var_34_1 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_2 = 7
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_4c_1 u>= 8)
        j__free(var_60.d)
    
    int32_t var_4c_2 = 7
    int32_t var_50_2 = 0
    var_60 = 0
    
    if (var_64_1 u>= 8)
        j__free(var_78.d)
    
    int32_t var_64_2 = 7
    int32_t var_68_2 = 0
    var_78 = 0
    
    if (var_7c_1 u>= 8)
        j__free(var_90.d)
    
    int32_t var_7c_2 = 7
    int32_t var_80_2 = 0
    var_90 = 0
    
    if (var_1c_2 u>= 8)
        j__free(var_30.d)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

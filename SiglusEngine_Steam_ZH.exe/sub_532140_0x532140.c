// 函数: sub_532140
// 地址: 0x532140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9afdc6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_114
int32_t eax_2 = __security_cookie ^ &var_114
int32_t __saved_edi
int32_t var_124 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) != 0)
    void* esi_1 = data_bac4e4
    void* const var_128_1 = &data_ad7d18
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x66666667, *(esi_1 + 0x144))
    int32_t edx_2 = edx_1 s>> 2
    int32_t ecx_2 = (edx_2 u>> 0x1f) + edx_2
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0x51eb851f, *(esi_1 + 0x148))
    int32_t edx_4 = edx_3 s>> 5
    int32_t ebx_3 = (edx_4 u>> 0x1f) + edx_4
    int32_t var_12c_1 = ecx_2 s% 0x64
    void var_144
    sub_52e820(&var_144, u"%02d")
    int32_t var_64
    int16_t* eax_12 = sub_6ae4c0(&var_64, var_144)
    int32_t var_c_1 = 0
    void* const var_130_1 = &data_ad7d2c
    int32_t var_134_1 = ebx_3 s/ 0x64
    void var_14c
    sub_52e820(&var_14c, &data_ad7d30)
    int16_t var_10c
    int16_t* eax_17 = sub_6ae4c0(&var_10c, var_14c)
    var_c_1.b = 1
    int16_t var_f4
    int16_t* eax_18 = sub_532b80(eax_17, eax_17, &var_f4, var_130_1)
    var_c_1.b = 2
    int16_t var_dc
    int16_t* eax_19 = sub_5327a0(eax_18, eax_18, &var_dc, eax_12)
    var_c_1.b = 3
    var_c_1.b = 4
    int16_t var_c4
    sub_6c2db0(arg1 + 0x1cc, sub_532b80(eax_19, eax_19, &var_c4, var_128_1))
    int32_t var_b0
    
    if (var_b0 u>= 8)
        j__free(var_c4.d)
    
    int32_t var_b0_1 = 7
    int32_t var_b4_1 = 0
    var_c4 = 0
    int32_t var_c8
    
    if (var_c8 u>= 8)
        j__free(var_dc.d)
    
    int32_t var_c8_1 = 7
    int32_t var_cc_1 = 0
    var_dc = 0
    int32_t var_e0
    
    if (var_e0 u>= 8)
        j__free(var_f4.d)
    
    int32_t var_e0_1 = 7
    int32_t var_e4_1 = 0
    var_f4 = 0
    int32_t var_f8
    
    if (var_f8 u>= 8)
        j__free(var_10c.d)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_f8_1 = 7
    int32_t var_fc_1 = 0
    var_10c = 0
    int32_t var_50
    
    if (var_50 u>= 8)
        j__free(var_64)
    
    void* const var_128_8 = &data_ad7d18
    int32_t var_12c_3 = ebx_3 s% 0xa
    sub_52e820(&var_144, &data_ad7d30)
    int16_t* eax_24 = sub_6ae4c0(&var_64)
    void* const var_130_2 = &data_ad7d2c
    int32_t var_134_2 = ebx_3 s/ 0xa
    int32_t var_c_3 = 5
    sub_52e820(&var_14c, &data_ad7d30)
    int16_t* eax_25 = sub_6ae4c0(&var_c4)
    var_c_3.b = 6
    int16_t* eax_26 = sub_532b80(eax_25, eax_25, &var_dc, var_130_2)
    var_c_3.b = 7
    int16_t* eax_27 = sub_5327a0(eax_26, eax_26, &var_f4, eax_24)
    var_c_3.b = 8
    var_c_3.b = 9
    sub_6c2db0(arg1 + 0x37c, sub_532b80(eax_27, eax_27, &var_10c, var_128_8))
    
    if (var_f8_1 u>= 8)
        j__free(var_10c.d)
    
    int32_t var_f8_2 = 7
    int32_t var_fc_2 = 0
    var_10c = 0
    
    if (var_e0_1 u>= 8)
        j__free(var_f4.d)
    
    int32_t var_e0_2 = 7
    int32_t var_e4_2 = 0
    var_f4 = 0
    
    if (var_c8_1 u>= 8)
        j__free(var_dc.d)
    
    int32_t var_c8_2 = 7
    int32_t var_cc_2 = 0
    var_dc = 0
    
    if (var_b0_1 u>= 8)
        j__free(var_c4.d)
    
    int32_t var_c_4 = 0xffffffff
    int32_t var_b0_2 = 7
    int32_t var_b4_2 = 0
    var_c4 = 0
    
    if (var_50 u>= 8)
        j__free(var_64)
    
    int16_t* var_128_15 = &data_ad7d18
    int32_t ecx_21 = (ecx_2 + ebx_3) * 0xa
    int32_t var_12c_5 = ecx_21 s% 0x64
    sub_52e820(&var_144, u"%02d")
    int32_t var_34
    void** eax_31 = sub_6ae4c0(&var_34)
    int16_t* var_130_3 = &data_ad7d2c
    int32_t var_134_3 = ecx_21 s/ 0x64
    int32_t var_c_5 = 0xa
    sub_52e820(&var_14c, &data_ad7d30)
    int16_t var_94
    void** eax_32 = sub_6ae4c0(&var_94)
    var_c_5.b = 0xb
    int16_t var_4c
    void** eax_33 = sub_532b80(eax_32, eax_32, &var_4c, var_130_3)
    var_c_5.b = 0xc
    int16_t var_ac
    void** eax_34 = sub_5327a0(eax_33, eax_33, &var_ac, eax_31)
    var_c_5.b = 0xd
    var_c_5.b = 0xe
    int16_t var_7c
    sub_6c2db0(arg1 + 0x52c, sub_532b80(eax_34, eax_34, &var_7c, var_128_15))
    int32_t var_68
    
    if (var_68 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_68_1 = 7
    int32_t var_6c_1 = 0
    var_7c = 0
    int32_t var_98
    
    if (var_98 u>= 8)
        j__free(var_ac.d)
    
    int32_t var_98_1 = 7
    int32_t var_9c_1 = 0
    var_ac = 0
    int32_t var_38
    
    if (var_38 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_80
    
    if (var_80 u>= 8)
        j__free(var_94.d)
    
    result = nullptr
    int32_t var_80_1 = 7
    int32_t var_84_1 = 0
    var_94 = 0
    int32_t var_20
    
    if (var_20 u>= 8)
        result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_114)
return result

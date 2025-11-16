// 函数: sub_6f6e30
// 地址: 0x6f6e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd9a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_17c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = data_4ebee38
int32_t var_180 = 1
int32_t var_184 = *(arg1 + 0x160)
int32_t var_188 = *(arg1 + 0x14)
int32_t eax_3 = *edx
int32_t var_18c = *(arg1 + 0x18)
int32_t var_190 = *(arg1 + 4)
int32_t* var_194 = edx
int32_t eax_4 = (*(eax_3 + 0x24))(var_194, var_190, var_18c, var_188, var_184, var_180)
int32_t result
void var_1ac
int16_t var_44
int16_t var_2c

if (eax_4 s>= 0)
    int32_t eax_13 = *(arg1 + 0x198)
    int32_t* edx_10 = data_4ebee38
    int32_t var_180_9 = 0
    int32_t var_18c_1 = *(arg1 + 0x18)
    int32_t ecx_10 = *edx_10
    int32_t var_190_1 = *(arg1 + 4)
    var_194 = edx_10
    result = (*(ecx_10 + 0x24))(var_194, var_190_1, var_18c_1, eax_13, eax_13, var_180_9)
    
    if (result s>= 0)
        result.b = 1
    else
        int32_t** var_168_1 = &var_194
        sub_52e820(&var_194, u"CheckDeviceType")
        int32_t var_8_2 = 0x11
        int32_t var_14c
        int16_t* eax_14 = sub_6f26f0(&var_14c, *(arg1 + 0x198))
        var_8_2.b = 0x12
        int16_t var_11c
        int16_t* eax_15 = sub_6f26f0(&var_11c, *(arg1 + 0x198))
        int32_t var_30_2 = 7
        int32_t var_34_2 = 0
        var_44 = 0
        var_8_2.b = 0x14
        int16_t var_134
        int16_t* eax_16 = sub_532b80(0, &var_44, &var_134, &data_b07458)
        var_8_2.b = 0x15
        int16_t var_d4
        int16_t* eax_17 = sub_532b80(eax_16, eax_16, &var_d4, &data_b073a8)
        var_8_2.b = 0x16
        int16_t var_a4
        int16_t* eax_18 = sub_532b80(eax_17, eax_17, &var_a4, u"\n\ndisplay = ")
        var_8_2.b = 0x17
        int16_t var_74
        int16_t* eax_19 = sub_5327a0(eax_18, eax_18, &var_74, eax_15)
        var_8_2.b = 0x18
        int16_t* eax_20 = sub_532b80(eax_19, eax_19, &var_2c, u", back_buffer = ")
        var_8_2.b = 0x19
        int16_t* eax_21
        int32_t edx_19
        eax_21, edx_19 = sub_5327a0(eax_20, eax_20, &var_1ac, eax_14)
        var_8_2.b = 0x21
        sub_6f1ae0(eax_21, edx_19, result)
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_60
        
        if (var_60 u>= 8)
            j__free(var_74.d)
        
        int32_t var_60_1 = 7
        int32_t var_64_1 = 0
        var_74 = 0
        int32_t var_90
        
        if (var_90 u>= 8)
            j__free(var_a4.d)
        
        int32_t var_90_1 = 7
        int32_t var_94_1 = 0
        var_a4 = 0
        int32_t var_c0
        
        if (var_c0 u>= 8)
            j__free(var_d4.d)
        
        int32_t var_c0_1 = 7
        int32_t var_c4_1 = 0
        var_d4 = 0
        int32_t var_120
        
        if (var_120 u>= 8)
            j__free(var_134.d)
        
        int32_t var_120_1 = 7
        int32_t var_124_1 = 0
        var_134 = 0
        
        if (var_30_2 u>= 8)
            j__free(var_44.d)
        
        int32_t var_108
        
        if (var_108 u>= 8)
            j__free(var_11c.d)
        
        int32_t var_108_1 = 7
        int32_t var_10c_1 = 0
        var_11c = 0
        int32_t var_138
        
        if (var_138 u< 8)
            result.b = 0
        else
            j__free(var_14c)
            result.b = 0
else
    int32_t** var_16c_1 = &var_194
    sub_52e820(&var_194, u"CheckDeviceType")
    int32_t var_8_1 = 0
    int32_t var_164
    int16_t* eax_5 = sub_6f26f0(&var_164, *(arg1 + 0x160))
    var_8_1.b = 1
    int16_t* eax_6 = sub_6f26f0(&var_44, *(arg1 + 0x14))
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    var_8_1.b = 3
    int16_t var_ec
    int16_t* eax_7 = sub_532b80(0, &var_2c, &var_ec, &data_b07348)
    var_8_1.b = 4
    int16_t var_bc
    int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_bc, &data_b073a8)
    var_8_1.b = 5
    int16_t var_104
    int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_104, u"\n\ndisplay = ")
    var_8_1.b = 6
    int16_t var_8c
    int16_t* eax_10 = sub_5327a0(eax_9, eax_9, &var_8c, eax_6)
    var_8_1.b = 7
    int16_t var_5c
    int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_5c, u", back_buffer = ")
    var_8_1.b = 8
    int16_t* eax_12
    int32_t edx_9
    eax_12, edx_9 = sub_5327a0(eax_11, eax_11, &var_1ac, eax_5)
    var_8_1.b = 0x10
    sub_6f1ae0(eax_12, edx_9, eax_4)
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    int32_t var_f0
    
    if (var_f0 u>= 8)
        j__free(var_104.d)
    
    int32_t var_f0_1 = 7
    int32_t var_f4_1 = 0
    var_104 = 0
    int32_t var_a8
    
    if (var_a8 u>= 8)
        j__free(var_bc.d)
    
    int32_t var_a8_1 = 7
    int32_t var_ac_1 = 0
    var_bc = 0
    int32_t var_d8
    
    if (var_d8 u>= 8)
        j__free(var_ec.d)
    
    int32_t var_d8_1 = 7
    int32_t var_dc_1 = 0
    var_ec = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_150
    
    if (var_150 u>= 8)
        j__free(var_164)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

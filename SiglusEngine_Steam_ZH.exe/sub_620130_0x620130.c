// 函数: sub_620130
// 地址: 0x620130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfd46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_164 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = data_bac4a0
int32_t var_154 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
int16_t* result
int32_t var_134
int32_t var_120

if (*ecx == 0)
    int32_t var_8_2 = 0x1a
    sub_532870(&var_2c, data_bac510 + 0x1c, 0, 0xffffffff)
    void** eax_56 = data_bac458 + 0x2e4
    var_8_2.b = 0x1b
    sub_532870(&var_2c, sub_548cb0(eax_56, 0xaf4300, &var_134, eax_56), 0, 0xffffffff)
    var_8_2.b = 0x1a
    
    if (var_120 u>= 8)
        j__free(var_134)
    
    *(arg1 + 0x14) = 7
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_52e3c0(arg1, &var_2c, 0, 0xffffffff)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    result = arg1
else
    int32_t var_8_1 = 0
    void* eax_4 = *(data_bac45c + 0x10)
    
    if (eax_4 == 0 || *(eax_4 + 0x58) s<= 0)
        sub_532910(&var_2c, 0xaf42b0, 7)
        ecx = data_bac4a0
    
    if (ecx[3] != 0)
        sub_532910(&var_2c, 0xaf42c0, 0xa)
    
    sub_532870(&var_2c, data_bac510 + 0x1c, 0, 0xffffffff)
    
    if (*(data_bac4a0 + 0x1e9) != 0)
        sub_532910(&var_2c, 0xaf42d8, 8)
    
    void* ecx_5 = data_bac45c
    int32_t eax_8 = *(ecx_5 + 0x64)
    int16_t var_ec
    int32_t var_d8
    int16_t var_d4
    int32_t var_c0
    int16_t var_bc
    int32_t var_a8
    int16_t var_a4
    int32_t var_90
    int16_t var_8c
    int32_t var_78
    int16_t var_74
    int32_t var_60
    int16_t var_5c
    int32_t var_48
    void* var_44
    int32_t var_30
    
    if (eax_8 s>= 0)
        var_8_1.b = 1
        int32_t var_168_2 = sub_698170(ecx_5, &var_44, eax_8)
        *(data_bac45c + 0x68)
        int16_t* eax_10 = sub_6ad9b0(&var_8c)
        var_8_1.b = 2
        void** eax_12 = data_bac458 + 0x2e4
        int16_t* eax_13 = sub_548cb0(eax_12, 0xaf4300, &var_74, eax_12)
        var_8_1.b = 3
        int16_t* eax_14 = sub_532b80(eax_13, eax_13, &var_5c, u" / scene=")
        var_8_1.b = 4
        int16_t* eax_15 = sub_5327a0(eax_14, eax_14, &var_d4, &var_44)
        var_8_1.b = 5
        int16_t* eax_16 = sub_532b80(eax_15, eax_15, &var_bc, 0xad94e4)
        var_8_1.b = 6
        int16_t* eax_17 = sub_5327a0(eax_16, eax_16, &var_a4, eax_10)
        var_8_1.b = 7
        var_8_1.b = 8
        sub_532870(&var_2c, sub_532b80(eax_17, eax_17, &var_ec, &data_ad90a0), 0, 0xffffffff)
        
        if (var_d8 u>= 8)
            j__free(var_ec.d)
        
        var_d8 = 7
        int32_t var_dc_1 = 0
        var_ec = 0
        
        if (var_90 u>= 8)
            j__free(var_a4.d)
        
        var_90 = 7
        int32_t var_94_1 = 0
        var_a4 = 0
        
        if (var_a8 u>= 8)
            j__free(var_bc.d)
        
        var_a8 = 7
        int32_t var_ac_1 = 0
        var_bc = 0
        
        if (var_c0 u>= 8)
            j__free(var_d4.d)
        
        var_c0 = 7
        int32_t var_c4_1 = 0
        var_d4 = 0
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        var_48 = 7
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_60 u>= 8)
            j__free(var_74.d)
        
        var_60 = 7
        int32_t var_64_1 = 0
        var_74 = 0
        
        if (var_78 u>= 8)
            j__free(var_8c.d)
        
        var_78 = 7
        var_8_1.b = 0
        int32_t var_7c_1 = 0
        var_8c = 0
        
        if (var_30 u>= 8)
            j__free(var_44)
    
    void* esi_2 = data_bac49c
    int32_t var_168_14 = *(esi_2 + 0x10) - *(esi_2 + 0xc)
    *(esi_2 + 4)
    void** eax_23 = sub_6adab0(&var_134)
    var_8_1.b = 9
    void* eax_24 = data_bac460
    *(eax_24 + 0xa8) - *(eax_24 + 0xa4)
    int16_t* eax_28 = sub_6ad9b0(&var_44)
    var_8_1.b = 0xa
    *(data_bac460 + 0xb8)
    int16_t var_11c
    void** eax_30 = sub_6ad9b0(&var_11c)
    var_8_1.b = 0xb
    *(data_bac4a0 + 0xd4)
    int16_t var_104
    int16_t* eax_31 = sub_6ad9b0(&var_104)
    var_8_1.b = 0xc
    int16_t var_14c
    void** eax_32 = sub_548cb0(eax_31, u" rate=", &var_14c, eax_31)
    var_8_1.b = 0xd
    void** eax_33 = sub_532b80(eax_32, eax_32, &var_ec, u", cstack=")
    var_8_1.b = 0xe
    void** eax_34 = sub_5327a0(eax_33, eax_33, &var_a4, eax_30)
    var_8_1.b = 0xf
    void** eax_35 = sub_532b80(eax_34, eax_34, &var_bc, u"(max=")
    var_8_1.b = 0x10
    int16_t* eax_36 = sub_5327a0(eax_35, eax_35, &var_d4, eax_28)
    var_8_1.b = 0x11
    int16_t* eax_37 = sub_532b80(eax_36, eax_36, &var_5c, &data_ad90a0)
    var_8_1.b = 0x12
    int16_t* eax_38 = sub_532b80(eax_37, eax_37, &var_74, u", pgstack=")
    var_8_1.b = 0x13
    var_8_1.b = 0x14
    sub_532870(&var_2c, sub_5327a0(eax_38, eax_38, &var_8c, eax_23), 0, 0xffffffff)
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_1 = 7
    int32_t var_7c_2 = 0
    var_8c = 0
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_1 = 7
    int32_t var_64_2 = 0
    var_74 = 0
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_c0 u>= 8)
        j__free(var_d4.d)
    
    int32_t var_c0_1 = 7
    int32_t var_c4_2 = 0
    var_d4 = 0
    
    if (var_a8 u>= 8)
        j__free(var_bc.d)
    
    int32_t var_a8_1 = 7
    int32_t var_ac_2 = 0
    var_bc = 0
    
    if (var_90 u>= 8)
        j__free(var_a4.d)
    
    int32_t var_90_1 = 7
    int32_t var_94_2 = 0
    var_a4 = 0
    
    if (var_d8 u>= 8)
        j__free(var_ec.d)
    
    int32_t var_d8_1 = 7
    int32_t var_dc_2 = 0
    var_ec = 0
    int32_t var_138
    
    if (var_138 u>= 8)
        j__free(var_14c.d)
    
    int32_t var_138_1 = 7
    int32_t var_13c_1 = 0
    var_14c = 0
    int32_t var_f0
    
    if (var_f0 u>= 8)
        j__free(var_104.d)
    
    int32_t var_f0_1 = 7
    int32_t var_f4_1 = 0
    var_104 = 0
    int32_t var_108
    
    if (var_108 u>= 8)
        j__free(var_11c.d)
    
    int32_t var_108_1 = 7
    int32_t var_10c_1 = 0
    var_11c = 0
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    int32_t var_30_1 = 7
    var_8_1.b = 0
    int32_t var_34_1 = 0
    var_44.w = 0
    
    if (var_120 u>= 8)
        j__free(var_134)
    
    char eax_40
    int32_t ecx_37
    eax_40, ecx_37 = sub_620a70()
    
    if (eax_40 != 0)
        int32_t var_168_31 = ecx_37
        *(data_bac4a0 + 0x1a0)
        void** eax_45 = sub_6ad9b0(&var_104)
        var_8_1.b = 0x15
        void** eax_46 = sub_548cb0(eax_45, 0xaf434c, &var_11c, eax_45)
        var_8_1.b = 0x16
        var_8_1.b = 0x17
        ecx_37 =
            sub_532870(&var_2c, sub_532b80(eax_46, eax_46, &var_44, &data_af18c0), 0, 0xffffffff)
        
        if (var_30_1 u>= 8)
            ecx_37 = j__free(var_44)
        
        var_30_1 = 7
        int32_t var_34_2 = 0
        var_44.w = 0
        
        if (var_108_1 u>= 8)
            ecx_37 = j__free(var_11c.d)
        
        int32_t var_108_2 = 7
        var_8_1.b = 0
        int32_t var_10c_2 = 0
        var_11c = 0
        
        if (var_f0_1 u>= 8)
            ecx_37 = j__free(var_104.d)
        
        int32_t var_f0_2 = 7
        int32_t var_f4_2 = 0
        var_104 = 0
    
    if (*(data_bac458 + 0x355) != 0 || *(data_bac4e4 + 0x141) != 0)
        ecx_37 = sub_532910(&var_2c, 0xaf4354, 3)
    
    if (*(data_bac4a0 + 0x1b4) != 0)
        int32_t var_168_36 = ecx_37
        void** eax_51 = sub_6ad9b0(&var_134)
        var_8_1.b = 0x18
        var_8_1.b = 0x19
        sub_532870(&var_2c, sub_548cb0(eax_51, 0xaf435c, &var_44, eax_51), 0, 0xffffffff)
        
        if (var_30_1 u>= 8)
            j__free(var_44)
        
        int32_t var_30_2 = 7
        var_8_1.b = 0
        int32_t var_34_3 = 0
        var_44.w = 0
        
        if (var_120 u>= 8)
            j__free(var_134)
    
    *(arg1 + 0x14) = 7
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_52e3c0(arg1, &var_2c, 0, 0xffffffff)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

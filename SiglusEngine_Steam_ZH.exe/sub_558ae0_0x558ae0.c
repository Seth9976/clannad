// 函数: sub_558ae0
// 地址: 0x558ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c8 = 0
uint32_t eax_4 = zx.d(arg5)
*(arg3 + 0x14) = 7
*(arg3 + 0x10) = 0
int16_t* var_cc = arg3
int16_t var_c0 = eax_4.w
*arg3 = 0
int32_t var_8_1 = 0
int32_t var_c8_1 = 1
int16_t var_8c
int16_t var_74
int32_t var_60
int16_t var_5c
int32_t var_48
int16_t var_44
int32_t var_30
int16_t var_2c

if (arg2 == 0)
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    int32_t var_8_2 = 1
    int16_t* eax_5 = sub_55c680(eax_4, &var_8c, &var_74, eax_4.w)
    var_8_2.b = 2
    var_2c = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = arg2
    sub_52e3c0(&var_2c, eax_5, 0, 0xffffffff)
    var_8_2.b = 3
    int16_t* eax_7 = sub_55d3f0(arg4 - 1, &var_2c, &var_5c, arg4 - 1)
    var_8_2.b = 4
    int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_44, &data_ad8cf0)
    var_8_2.b = 5
    
    if (arg3 != eax_8)
        sub_52e3c0(arg3, eax_8, arg2, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    
    if (var_78_1 u>= 8)
        j__free(var_8c.d)
else
    int16_t var_a4
    int32_t var_78
    
    if (arg2 s> 0)
        int32_t eax_9 = sub_6b3cf0(arg2)
        int32_t var_90_1 = 7
        int32_t var_94_1 = 0
        var_a4 = 0
        int32_t var_8_3 = 6
        int16_t* eax_10 = sub_55c680(0, &var_a4, &var_44, var_c0)
        var_8_3.b = 7
        var_2c = 0
        int32_t var_18_3 = 7
        int32_t var_1c_3 = 0
        int32_t var_e0_9 = sub_52e3c0(&var_2c, eax_10, 0, 0xffffffff)
        var_8_3.b = 8
        void** eax_11 = sub_6ad9b0(&var_5c)
        int32_t eax_13 = arg4 - eax_9
        var_8_3.b = 9
        void** eax_14 = sub_55d3f0(eax_13, &var_2c, &var_74, eax_13)
        var_8_3.b = 0xa
        void** eax_15 = sub_5327a0(eax_14, eax_14, &var_8c, eax_11)
        var_8_3.b = 0xb
        
        if (arg3 != eax_15)
            sub_52e3c0(arg3, eax_15, 0, 0xffffffff)
        
        if (var_78 u>= 8)
            j__free(var_8c.d)
        
        int32_t var_78_2 = 7
        int32_t var_7c_2 = 0
        var_8c = 0
        
        if (var_60 u>= 8)
            j__free(var_74.d)
        
        int32_t var_60_2 = 7
        int32_t var_64_2 = 0
        var_74 = 0
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        int32_t var_48_2 = 7
        int32_t var_4c_2 = 0
        var_5c = 0
        
        if (var_18_3 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_4 = 7
        int32_t var_1c_4 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_2 = 7
        int32_t var_34_2 = 0
        var_44 = 0
        
        if (var_90_1 u>= 8)
            j__free(var_a4.d)
    else if (arg2 s< 0)
        int32_t eax_16 = sub_6b3cf0(arg2)
        int32_t var_a8_1 = 7
        int32_t var_ac_1 = 0
        int16_t var_bc = 0
        int32_t var_8_4 = 0xc
        int16_t* eax_17 = sub_55c680(0, &var_bc, &var_44, var_c0)
        var_8_4.b = 0xd
        var_2c = 0
        int32_t var_18_5 = 7
        int32_t var_1c_5 = 0
        int32_t var_e0_18 = sub_52e3c0(&var_2c, eax_17, 0, 0xffffffff)
        var_8_4.b = 0xe
        void** eax_18 = sub_6ad9b0(&var_5c)
        var_8_4.b = 0xf
        void** eax_22 = sub_55d3f0(arg4 - eax_16 - 1, &var_2c, &var_74, arg4 - eax_16 - 1)
        var_8_4.b = 0x10
        void** eax_23 = sub_548cb0(eax_22, 0xad8cf4, &var_8c, eax_22)
        var_8_4.b = 0x11
        void** eax_24 = sub_5327a0(eax_23, eax_23, &var_a4, eax_18)
        var_8_4.b = 0x12
        
        if (arg3 != eax_24)
            sub_52e3c0(arg3, eax_24, 0, 0xffffffff)
        
        int32_t var_90
        
        if (var_90 u>= 8)
            j__free(var_a4.d)
        
        int32_t var_90_2 = 7
        int32_t var_94_2 = 0
        var_a4 = 0
        
        if (var_78 u>= 8)
            j__free(var_8c.d)
        
        int32_t var_78_3 = 7
        int32_t var_7c_3 = 0
        var_8c = 0
        
        if (var_60 u>= 8)
            j__free(var_74.d)
        
        int32_t var_60_3 = 7
        int32_t var_64_3 = 0
        var_74 = 0
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        int32_t var_48_3 = 7
        int32_t var_4c_3 = 0
        var_5c = 0
        
        if (var_18_5 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_6 = 7
        int32_t var_1c_6 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_3 = 7
        int32_t var_34_3 = 0
        var_44 = 0
        
        if (var_a8_1 u>= 8)
            j__free(var_bc.d)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3

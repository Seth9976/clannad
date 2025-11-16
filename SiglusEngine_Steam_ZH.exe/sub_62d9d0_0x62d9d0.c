// 函数: sub_62d9d0
// 地址: 0x62d9d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0dca
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0x80000000
void* eax_4 = data_bac510

if (*(data_bac4a0 + 0xa4) != 0)
    ebx = 1

int32_t ecx = 0x20
int32_t* eax_5 = data_bac434

if (eax_5[3].b != 0)
    ecx = 0x40

int32_t var_d8 = ecx
int32_t var_dc = 0x40
int32_t var_e0 = ebx
bool result
int16_t var_5c
int32_t var_2c
int32_t var_18

if (sub_6f68e0(&data_4ebe4b0, *(data_bac454 + 4), ecx, *(eax_4 + 0x7c), *(eax_4 + 0x80), ecx, 
        *eax_5, ecx.b) != 0)
    int32_t var_48_2 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    sub_52e720(&var_5c, u"Direct3D", 0x16)
    int32_t var_8_2 = 2
    sub_684160(data_bac424, 5, &var_5c)
    int32_t var_8_3 = 0xffffffff
    
    if (var_48_2 u>= 8)
        j__free(var_5c.d)
    
    int32_t eax_10 = data_4ebe5fc
    _mm_cvtepi32_pd(zx.q(eax_10)) f+ *((eax_10 u>> 0x1f << 3) + &data_b0dbb0)
    void** eax_12 = sub_6adb50(&var_2c)
    int32_t var_8_4 = 3
    int16_t var_8c
    int16_t* eax_13 = sub_548cb0(eax_12, 0xaf5588, &var_8c, eax_12)
    var_8_4.b = 4
    int16_t* eax_14 = sub_532b80(eax_13, eax_13, &var_5c, u"MByte")
    var_8_4.b = 5
    sub_684160(data_bac424, 5, eax_14)
    
    if (var_48_2 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_3 = 7
    int32_t var_4c_2 = 0
    var_5c = 0
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_8_5 = 0xffffffff
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    
    if (var_18 u>= 8)
        j__free(var_2c)
    
    int16_t* eax_15 = sub_6f2ce0(&var_2c, (data_4ebe600).b)
    int32_t var_8_6 = 6
    int16_t* eax_16 = sub_548cb0(eax_15, 0xaf559c, &var_8c, eax_15)
    var_8_6.b = 7
    int32_t ecx_13 = sub_684160(data_bac424, 5, eax_16)
    
    if (var_78_1 u>= 8)
        ecx_13 = j__free(var_8c.d)
    
    int32_t var_8_7 = 0xffffffff
    int32_t var_78_2 = 7
    int32_t var_7c_2 = 0
    var_8c = 0
    
    if (var_18 u>= 8)
        ecx_13 = j__free(var_2c)
    
    data_4ebe590
    int32_t var_d8_16 = ecx_13
    int32_t var_44
    int16_t* eax_17 = sub_6adab0(&var_44)
    int32_t var_8_8 = 8
    data_4ebe591
    int16_t* eax_18 = sub_6adab0(&var_2c)
    var_8_8.b = 9
    int16_t var_74
    int16_t* eax_19 = sub_548cb0(eax_18, 0xaf55ac, &var_74, eax_18)
    var_8_8.b = 0xa
    int16_t* eax_20 = sub_532b80(eax_19, eax_19, &var_5c, &data_ad7d2c)
    var_8_8.b = 0xb
    int16_t* eax_21 = sub_5327a0(eax_20, eax_20, &var_8c, eax_17)
    var_8_8.b = 0xc
    int32_t ecx_20 = sub_684160(data_bac424, 5, eax_21)
    
    if (var_78_2 u>= 8)
        ecx_20 = j__free(var_8c.d)
    
    int32_t var_78_3 = 7
    int32_t var_7c_3 = 0
    var_8c = 0
    
    if (var_48_3 u>= 8)
        ecx_20 = j__free(var_5c.d)
    
    int32_t var_48_4 = 7
    int32_t var_4c_3 = 0
    var_5c = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        ecx_20 = j__free(var_74.d)
    
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    
    if (var_18 u>= 8)
        ecx_20 = j__free(var_2c)
    
    int32_t var_8_9 = 0xffffffff
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c.w = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        ecx_20 = j__free(var_44)
    
    data_4ebe594
    int32_t var_d8_25 = ecx_20
    int16_t* eax_22 = sub_6adab0(&var_44)
    int32_t var_8_10 = 0xd
    int16_t* eax_23 = sub_548cb0(eax_22, 0xaf55cc, &var_2c, eax_22)
    var_8_10.b = 0xe
    int32_t ecx_24 = sub_684160(data_bac424, 5, eax_23)
    
    if (var_18_1 u>= 8)
        ecx_24 = j__free(var_2c)
    
    int32_t var_8_11 = 0xffffffff
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c.w = 0
    
    if (var_30 u>= 8)
        ecx_24 = j__free(var_44)
    
    data_4ebe598
    int32_t var_d8_30 = ecx_24
    int16_t* eax_24 = sub_6adab0(&var_44)
    int32_t var_8_12 = 0xf
    data_4ebe599
    int16_t* eax_25 = sub_6adab0(&var_5c)
    var_8_12.b = 0x10
    int16_t* eax_26 = sub_548cb0(eax_25, 0xaf55f4, &var_8c, eax_25)
    var_8_12.b = 0x11
    int16_t* eax_27 = sub_532b80(eax_26, eax_26, &var_74, &data_ad7d2c)
    var_8_12.b = 0x12
    int16_t* eax_28 = sub_5327a0(eax_27, eax_27, &var_2c, eax_24)
    var_8_12.b = 0x13
    int32_t edx_12 = sub_684160(data_bac424, 5, eax_28)
    
    if (var_18_2 u>= 8)
        edx_12 = j__free(var_2c)
    
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    var_2c.w = 0
    
    if (var_60_1 u>= 8)
        edx_12 = j__free(var_74.d)
    
    int32_t var_60_2 = 7
    int32_t var_64_2 = 0
    var_74 = 0
    
    if (var_78_3 u>= 8)
        edx_12 = j__free(var_8c.d)
    
    int32_t var_78_4 = 7
    int32_t var_7c_4 = 0
    var_8c = 0
    
    if (var_48_4 u>= 8)
        edx_12 = j__free(var_5c.d)
    
    int32_t eax_29 = 0
    int32_t var_8_13 = 0xffffffff
    int32_t var_48_5 = 7
    int32_t var_4c_4 = 0
    var_5c = 0
    
    if (var_30 u>= 8)
        eax_29, edx_12 = j__free(var_44)
    
    int16_t* eax_30 = sub_6adc60(eax_29, edx_12, &var_44, data_4ebe524, data_4ebe528)
    int32_t var_8_14 = 0x14
    int16_t* eax_31 = sub_548cb0(eax_30, 0xaf5618, &var_2c, eax_30)
    var_8_14.b = 0x15
    sub_684160(data_bac424, 5, eax_31)
    
    if (var_18_3 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_15 = 0xffffffff
    int32_t var_18_4 = 7
    int32_t var_1c_4 = 0
    var_2c.w = 0
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    void* const esi_3 = &data_aedfe8
    void* const eax_32 = &data_aedfe0
    
    if ((data_4ebe508 & 2) == 0)
        eax_32 = &data_aedfe8
    
    sub_52e820(&var_74, eax_32)
    int32_t var_8_16 = 0x16
    int16_t* eax_34 = sub_548cb0(&var_74, 0xaf5634, &var_2c, &var_74)
    var_8_16.b = 0x17
    sub_684160(data_bac424, 5, eax_34)
    
    if (var_18_4 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_17 = 0xffffffff
    int32_t var_18_5 = 7
    int32_t var_1c_5 = 0
    var_2c.w = 0
    
    if (var_60_2 u>= 8)
        j__free(var_74.d)
    
    void* const eax_35 = &data_aedfe8
    
    if ((data_4ebe518 & 8) == 0)
        eax_35 = &data_aedfe0
    
    sub_52e820(&var_74, eax_35)
    int32_t var_8_18 = 0x18
    int16_t* eax_37 = sub_548cb0(&var_74, 0xaf5654, &var_2c, &var_74)
    var_8_18.b = 0x19
    sub_684160(data_bac424, 5, eax_37)
    
    if (var_18_5 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_19 = 0xffffffff
    int32_t var_18_6 = 7
    int32_t var_1c_6 = 0
    var_2c.w = 0
    
    if (var_60_2 u>= 8)
        j__free(var_74.d)
    
    if ((data_4ebe4d8 & 0x40000000) == 0)
        esi_3 = &data_aedfe0
    
    sub_52e820(&var_74, esi_3)
    int32_t var_8_20 = 0x1a
    int16_t* eax_39 = sub_548cb0(&var_74, 0xaf5688, &var_2c, &var_74)
    var_8_20.b = 0x1b
    sub_684160(data_bac424, 5, eax_39)
    
    if (var_18_6 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_21 = 0xffffffff
    int32_t var_18_7 = 7
    int32_t var_1c_7 = 0
    var_2c.w = 0
    
    if (var_60_2 u>= 8)
        j__free(var_74.d)
    
    int16_t* eax_40 = sub_6f1d30(&var_44, data_4ebe684)
    int32_t var_8_22 = 0x1c
    int16_t* eax_41 = sub_548cb0(eax_40, 0xaf56b0, &var_2c, eax_40)
    var_8_22.b = 0x1d
    sub_684160(data_bac424, 5, eax_41)
    
    if (var_18_7 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_23 = 0xffffffff
    int32_t var_18_8 = 7
    int32_t var_1c_8 = 0
    var_2c.w = 0
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    int16_t* eax_42 = sub_6f1d30(&var_44, data_4ebe688)
    int32_t var_8_24 = 0x1e
    int16_t* eax_43 = sub_548cb0(eax_42, 0xaf56f8, &var_2c, eax_42)
    var_8_24.b = 0x1f
    sub_684160(data_bac424, 5, eax_43)
    
    if (var_18_8 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_25 = 0xffffffff
    int32_t var_18_9 = 7
    int32_t var_1c_9 = 0
    var_2c.w = 0
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    int16_t* eax_44 = sub_6f1d30(&var_44, data_4ebe68c)
    int32_t var_8_26 = 0x20
    int16_t* eax_45 = sub_548cb0(eax_44, 0xaf573c, &var_2c, eax_44)
    var_8_26.b = 0x21
    sub_684160(data_bac424, 5, eax_45)
    
    if (var_18_9 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_27 = 0xffffffff
    int32_t var_18_10 = 7
    int32_t var_1c_10 = 0
    var_2c.w = 0
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    int16_t* eax_46 = sub_6f1d30(&var_44, data_4ebe690)
    int32_t var_8_28 = 0x22
    int16_t* eax_47 = sub_548cb0(eax_46, 0xaf5774, &var_2c, eax_46)
    var_8_28.b = 0x23
    sub_684160(data_bac424, 5, eax_47)
    
    if (var_18_10 u>= 8)
        j__free(var_2c)
    
    int32_t var_8_29 = 0xffffffff
    int32_t var_18_11 = 7
    int32_t var_1c_11 = 0
    var_2c.w = 0
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    __builtin_memset(0x4ebe6b0, 0xffffffff, 0x400)
    int16_t* eax_50
    
    if (sub_6f5550(0x4ebe6b0) != 0)
        sub_52e820(&var_44, u"Direct3D")
        int32_t var_8_31 = 0x28
        sub_684160(data_bac424, 5, &var_44)
        int32_t var_8_32 = 0xffffffff
        sub_52e8a0(&var_44)
        
        if (sub_6f5a50(data_bac454 + 0x90) == 0)
            void** eax_52 = sub_6b9ed0(&var_2c)
            int32_t var_8_33 = 0x29
            eax_50 = sub_548cb0(eax_52, u"Direct3D", &var_44, eax_52)
            var_8_33.b = 0x2a
            goto label_62e535
        
        sub_52e820(&var_44, u"Direct3D")
        int32_t var_8_34 = 0x2b
        sub_684160(data_bac424, 5, &var_44)
        int32_t var_8_35 = 0xffffffff
        sub_52e8a0(&var_44)
        void* esi_4 = data_bac454
        char eax_53 = sub_6fd250(esi_4 + 0x128)
        char eax_54
        
        if (eax_53 != 0)
            eax_54 = sub_6fd3e0(esi_4 + 0x128)
        
        if (eax_53 == 0 || eax_54 == 0)
            void** eax_57 = sub_6b9ed0(&var_2c)
            int32_t var_8_39 = 0x2c
            eax_50 = sub_548cb0(eax_57, u"Direct3D", &var_44, eax_57)
            var_8_39.b = 0x2d
            goto label_62e535
        
        sub_52e820(&var_44, u"Direct3D")
        int32_t var_8_36 = 0x2e
        sub_684160(data_bac424, 5, &var_44)
        int32_t var_8_37 = 0xffffffff
        sub_52e8a0(&var_44)
        sub_6f60f0(0)
        
        if (sub_62e570() == 0)
            result = false
        else
            int32_t ecx_72
            result, ecx_72 = sub_62ec80()
            
            if (result == 0)
                result = false
            else
                int32_t var_d8_79 = ecx_72
                
                if (sub_6fdd50() != 0)
                    result = true
                else
                    void var_a4
                    int16_t* eax_55 = sub_6b9ed0(&var_a4)
                    int32_t var_8_38 = 0x2f
                    void var_bc
                    int16_t* eax_56 = sub_548cb0(eax_55, u"Direct3D", &var_bc, eax_55)
                    var_8_38.b = 0x30
                    sub_684160(data_bac424, 2, eax_56)
                    sub_52e8a0(&var_bc)
                    sub_52e8a0(&var_a4)
                    result = false
    else
        int16_t* eax_49 = sub_6b9ed0(&var_2c)
        int32_t var_8_30 = 0x26
        eax_50 = sub_548cb0(eax_49, u"Direct3D", &var_44, eax_49)
        var_8_30.b = 0x27
    label_62e535:
        sub_684160(data_bac424, 2, eax_50)
        sub_52e8a0(&var_44)
        sub_52e8a0(&var_2c)
        result = false
else
    int16_t* eax_8 = sub_6b9ed0(&var_2c)
    int32_t var_8_1 = 0
    int16_t* eax_9 = sub_548cb0(eax_8, u"Direct3D", &var_5c, eax_8)
    var_8_1.b = 1
    sub_684160(data_bac424, 2, eax_9)
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c = 0
    var_5c = 0
    
    if (var_18 u>= 8)
        j__free(var_2c)
    
    result = false
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

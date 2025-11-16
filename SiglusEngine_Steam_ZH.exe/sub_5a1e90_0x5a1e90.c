// 函数: sub_5a1e90
// 地址: 0x5a1e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b97e4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_1b4
int32_t eax_2 = __security_cookie ^ &var_1b4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    int32_t var_198_1 = 7
    int16_t* var_19c_1 = nullptr
    int16_t var_1ac = 0
    int32_t var_c_1 = 0
    void* edx_1 = data_bac4a0
    void* ecx = data_bac504
    int32_t var_1b0 = *(edx_1 + 0xd4)
    
    if (&var_1ac != ecx + 0x68)
        sub_52e3c0(&var_1ac, ecx + 0x68, 0, 0xffffffff)
        edx_1 = data_bac4a0
        ecx = data_bac504
    
    bool cond:0_1 = *(ecx + 0xbc) != *(ecx + 0xc0)
    void* ecx_2 = data_bac49c
    bool var_193_1 = *(data_bac454 + 0x1c00) != 0
    char eax_9 = *(edx_1 + 0xcc)
    char eax_10 = *(edx_1 + 0x1e4)
    char eax_11 = *(edx_1 + 0x1a4)
    int32_t eax_12 = *(ecx_2 + 4)
    int32_t* ecx_3 = data_bac47c
    int32_t eax_15 = (*(ecx_2 + 0x1c) - *(ecx_2 + 0x18)) s>> 2
    int32_t eax_17 = *(data_bac4a8 + 4)
    int32_t eax_18 = *ecx_3
    int32_t eax_19 = ecx_3[4]
    int16_t* eax_20 = ecx_3[7]
    int32_t var_174_1 = ecx_3[0xa]
    char eax_22 = *(edx_1 + 0xcd)
    int32_t eax_23 = *(edx_1 + 0x1a0)
    char eax_24 = *(edx_1 + 0xd1)
    char eax_25 = *(edx_1 + 0xc8)
    char eax_26 = *(edx_1 + 0xc9)
    char eax_27 = *(edx_1 + 0xca)
    int32_t eax_28 = *(edx_1 + 0x140)
    int32_t eax_29 = *(edx_1 + 0x150)
    int32_t eax_30 = *(edx_1 + 0x120)
    int32_t eax_31 = *(edx_1 + 0x124)
    int32_t eax_32 = *(edx_1 + 0x128)
    int32_t eax_33 = *(edx_1 + 0x12c)
    int32_t eax_34 = *(edx_1 + 0x130)
    int32_t eax_36 = *(data_bac468 + 0x460)
    int32_t* eax_37 = data_4ebe298
    int32_t eax_38
    
    if (eax_37 == 0)
        eax_38 = 0
    else
        var_1b4 = 0
        (*(*eax_37 + 0x60))(eax_37, &var_1b4)
        eax_38 = var_1b4
        edx_1 = data_bac4a0
    
    int32_t var_144_1 = eax_38
    eax_38.b = *(edx_1 + 0x134)
    char var_140_1 = eax_38.b
    int32_t eax_39 = *(edx_1 + 0x224)
    int32_t eax_40 = *(edx_1 + 0x228)
    int32_t eax_41 = *(edx_1 + 0x218)
    int32_t eax_42 = sub_69dad0()
    int32_t eax_43 = data_4ebe384
    int32_t eax_44 = data_4ebe388
    int32_t eax_45
    uint32_t edx_2
    eax_45, edx_2 = sub_69db50()
    uint32_t eax_46 = __alldiv(eax_45, edx_2, 0x400, 0)
    uint32_t eax_47 = __alldiv(data_4ebe390.d, data_4ebe390:4, 0x400, 0)
    uint32_t eax_48
    int32_t ecx_5
    eax_48, ecx_5 = __alldiv(data_4ebe398, data_4ebe39c, 0x400, 0)
    int32_t eax_49 = data_4ebe3a0
    int32_t eax_50 = data_4ebe3a4
    int32_t eax_51 = data_4ebe328
    int32_t eax_52 = data_4ebe32c
    int32_t eax_53 = data_c6d15c
    int32_t eax_54 = data_c6d160
    int32_t eax_55 = data_c6d154
    int32_t eax_56 = data_c6d158
    int32_t eax_57 = data_c6d14c
    int32_t eax_58 = data_c6d150
    int32_t eax_59 = data_c6d144
    int32_t eax_60 = data_c6d148
    int32_t eax_61 = data_c6d140
    int16_t var_ac
    int32_t var_98
    
    if (*(arg1 + 0xb8) != 0 || var_1b0 != *(arg1 + 0x414))
        int32_t var_1c8_2 = ecx_5
        int16_t* eax_62 = sub_6ad9b0(&var_ac)
        var_c_1.b = 1
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5(*(arg1 + 0xe4), 0, 1, eax_62, eax_4)
        
        var_c_1.b = 0
        
        if (var_98 u>= 8)
            j__free(var_ac.d)
        
        var_98 = 7
        int32_t var_9c_1 = 0
        var_ac = 0
    
    int32_t eax_64
    
    if (*(arg1 + 0xb8) == 0)
        void* eax_63 = arg1 + 0x418
        int32_t ecx_8 = *(eax_63 + 0x10)
        
        if (*(arg1 + 0x42c) u>= 8)
            eax_63 = *eax_63
        
        int32_t var_1c8_5 = ecx_8
        eax_64, ecx_5 = sub_536340(&var_1ac, ecx_8, var_19c_1, eax_63)
    
    if (*(arg1 + 0xb8) != 0 || eax_64 != 0)
        int32_t eax_66 = *(data_bac4e0 + 0x34)
        
        if (eax_66 != 0)
            eax_66(*(arg1 + 0xe4), 1, 1, &var_1ac, eax_4)
    
    ecx_5.b = var_193_1
    int16_t var_34
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x431))
        char const* const eax_67 = "X[(WY0"
        
        if (ecx_5.b == 0)
            eax_67 = &data_af0f8c
        
        sub_52e820(&var_34, eax_67)
        var_c_1.b = 2
        int32_t eax_69 = *(data_bac4e0 + 0x34)
        
        if (eax_69 != 0)
            eax_69(*(arg1 + 0xe4), 2, 1, &var_34, eax_4)
        
        var_c_1.b = 0
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        int32_t var_20_1 = 7
        int32_t var_24_1 = 0
        var_34 = 0
    
    ecx_5.b = cond:0_1
    int16_t var_4c
    int32_t var_38
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x430))
        void* const eax_70 = &data_af1528
        
        if (ecx_5.b == 0)
            eax_70 = &data_af152c
        
        sub_52e820(&var_4c, eax_70)
        var_c_1.b = 3
        int32_t eax_72 = *(data_bac4e0 + 0x34)
        
        if (eax_72 != 0)
            eax_72(*(arg1 + 0xe4), 3, 1, &var_4c, eax_4)
        
        var_c_1.b = 0
        
        if (var_38 u>= 8)
            j__free(var_4c.d)
        
        var_38 = 7
        int32_t var_3c_1 = 0
        var_4c = 0
    
    ecx_5.b = eax_9
    int16_t var_64
    int32_t var_50
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x432))
        void* const eax_73 = &data_af1530
        
        if (ecx_5.b == 0)
            eax_73 = &data_af0f8c
        
        sub_52e820(&var_64, eax_73)
        var_c_1.b = 4
        int32_t eax_75 = *(data_bac4e0 + 0x34)
        
        if (eax_75 != 0)
            eax_75(*(arg1 + 0xe4), 4, 1, &var_64, eax_4)
        
        var_c_1.b = 0
        
        if (var_50 u>= 8)
            j__free(var_64.d)
        
        var_50 = 7
        int32_t var_54_1 = 0
        var_64 = 0
    
    ecx_5.b = eax_11
    int16_t var_7c
    int32_t var_68
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x433))
        void* const eax_76 = &data_af1544
        
        if (ecx_5.b == 0)
            eax_76 = &data_af0f8c
        
        sub_52e820(&var_7c, eax_76)
        var_c_1.b = 5
        int32_t eax_78 = *(data_bac4e0 + 0x34)
        
        if (eax_78 != 0)
            eax_78(*(arg1 + 0xe4), 5, 1, &var_7c, eax_4)
        
        var_c_1.b = 0
        
        if (var_68 u>= 8)
            j__free(var_7c.d)
        
        var_68 = 7
        int32_t var_6c_1 = 0
        var_7c = 0
    
    ecx_5.b = eax_10
    int16_t var_94
    int32_t var_80
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x434))
        void* const eax_79 = &data_af1558
        
        if (ecx_5.b == 0)
            eax_79 = &data_af1564
        
        ecx_5 = sub_52e820(&var_94, eax_79)
        var_c_1.b = 6
        int32_t eax_81 = *(data_bac4e0 + 0x34)
        
        if (eax_81 != 0)
            ecx_5 = eax_81(*(arg1 + 0xe4), 6, 1, &var_94, eax_4)
        
        var_c_1.b = 0
        
        if (var_80 u>= 8)
            ecx_5 = j__free(var_94.d)
        
        var_80 = 7
        int32_t var_84_1 = 0
        var_94 = 0
    
    int16_t var_c4
    int32_t var_b0
    
    if (*(arg1 + 0xb8) != 0 || eax_12 != *(arg1 + 0x438))
        int32_t var_1c8_22 = ecx_5
        int16_t* eax_82 = sub_6ad9b0(&var_c4)
        var_c_1.b = 7
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 7, 1, eax_82, eax_4)
        
        var_c_1.b = 0
        
        if (var_b0 u>= 8)
            ecx_5 = j__free(var_c4.d)
        
        var_b0 = 7
        int32_t var_b4_1 = 0
        var_c4 = 0
    
    int16_t var_dc
    int32_t var_c8
    
    if (*(arg1 + 0xb8) != 0 || eax_15 != *(arg1 + 0x43c))
        int32_t var_1c8_25 = ecx_5
        int16_t* eax_83 = sub_6ad9b0(&var_dc)
        var_c_1.b = 8
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 8, 1, eax_83, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
        
        var_c8 = 7
        int32_t var_cc_1 = 0
        var_dc = 0
    
    if (*(arg1 + 0xb8) != 0 || eax_17 != *(arg1 + 0x440))
        int32_t var_1c8_28 = ecx_5
        *(data_bac510 + 0x10b9c)
        int16_t* eax_85 = sub_6ad9b0(&var_94)
        var_c_1.b = 9
        int16_t* eax_86 = sub_6ad9b0(&var_ac)
        var_c_1.b = 0xa
        int16_t* eax_87 = sub_532b80(eax_86, eax_86, &var_c4, &data_aefc08)
        var_c_1.b = 0xb
        int16_t* eax_88 = sub_5327a0(eax_87, eax_87, &var_dc, eax_85)
        var_c_1.b = 0xc
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 9, 1, eax_88, eax_4)
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
        
        var_c8 = 7
        int32_t var_cc_2 = 0
        var_dc = 0
        
        if (var_b0 u>= 8)
            ecx_5 = j__free(var_c4.d)
        
        var_b0 = 7
        int32_t var_b4_2 = 0
        var_c4 = 0
        
        if (var_98 u>= 8)
            ecx_5 = j__free(var_ac.d)
        
        var_98 = 7
        var_c_1.b = 0
        int32_t var_9c_2 = 0
        var_ac = 0
        
        if (var_80 u>= 8)
            ecx_5 = j__free(var_94.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_18 != *(arg1 + 0x444))
        int32_t var_1c8_35 = ecx_5
        int16_t* eax_89 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0xd
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 0xa, 1, eax_89, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_19 != *(arg1 + 0x448))
        int32_t var_1c8_38 = ecx_5
        int16_t* eax_90 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0xe
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 0xb, 1, eax_90, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
    
    int16_t* eax_91 = eax_20
    
    if (*(arg1 + 0xb8) != 0 || eax_91 != *(arg1 + 0x44c))
        int32_t var_1c8_41 = ecx_5
        int16_t* eax_92 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0xf
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 0xc, 1, eax_92, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
        
        eax_91 = eax_20
    
    if (*(arg1 + 0xb8) != 0 || eax_91 != *(arg1 + 0x450))
        int32_t var_1c8_44 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x10
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0xd, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    void* const esi_2 = &data_aef4a0
    ecx_5.b = eax_22
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x454))
        void* const eax_93 = &data_aef4a0
        
        if (ecx_5.b == 0)
            eax_93 = &data_ad9270
        
        ecx_5 = sub_52e820(&var_dc, eax_93)
        var_c_1.b = 0x11
        eax_91 = *(data_bac4e0 + 0x34)
        
        if (eax_91 != 0)
            eax_91, ecx_5 = eax_91(*(arg1 + 0xe4), 0xe, 1, &var_dc, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_23 != *(arg1 + 0x458))
        int32_t var_1c8_50 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x12
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0xf, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    ecx_5.b = eax_24
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x45c))
        void* const eax_95 = &data_aef4a0
        
        if (ecx_5.b == 0)
            eax_95 = &data_ad9270
        
        sub_52e820(&var_dc, eax_95)
        var_c_1.b = 0x13
        eax_91 = *(data_bac4e0 + 0x34)
        
        if (eax_91 != 0)
            eax_91, ecx_5 = eax_91(*(arg1 + 0xe4), 0x10, 1, &var_dc, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    ecx_5.b = eax_25
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x45d))
        void* const eax_97 = &data_aef4a0
        
        if (ecx_5.b == 0)
            eax_97 = &data_ad9270
        
        sub_52e820(&var_dc, eax_97)
        var_c_1.b = 0x14
        eax_91 = *(data_bac4e0 + 0x34)
        
        if (eax_91 != 0)
            eax_91, ecx_5 = eax_91(*(arg1 + 0xe4), 0x11, 1, &var_dc, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    ecx_5.b = eax_26
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x45e))
        void* const eax_99 = &data_aef4a0
        
        if (ecx_5.b == 0)
            eax_99 = &data_ad9270
        
        sub_52e820(&var_dc, eax_99)
        var_c_1.b = 0x15
        eax_91 = *(data_bac4e0 + 0x34)
        
        if (eax_91 != 0)
            eax_91, ecx_5 = eax_91(*(arg1 + 0xe4), 0x12, 1, &var_dc, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    ecx_5.b = eax_27
    
    if (*(arg1 + 0xb8) != 0 || ecx_5.b != *(arg1 + 0x45f))
        void* const eax_101 = &data_aef4a0
        
        if (ecx_5.b == 0)
            eax_101 = &data_ad9270
        
        ecx_5 = sub_52e820(&var_dc, eax_101)
        var_c_1.b = 0x16
        eax_91 = *(data_bac4e0 + 0x34)
        
        if (eax_91 != 0)
            eax_91, ecx_5 = eax_91(*(arg1 + 0xe4), 0x13, 1, &var_dc, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_28 != *(arg1 + 0x460))
        int32_t var_1c8_65 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x17
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x14, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_29 != *(arg1 + 0x464))
        int32_t var_1c8_68 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x18
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x15, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_30 != *(arg1 + 0x468))
        int32_t var_1c8_71 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x19
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x16, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_31 != *(arg1 + 0x46c))
        int32_t var_1c8_74 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x1a
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x17, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_32 != *(arg1 + 0x470))
        int32_t var_1c8_77 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x1b
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x18, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_33 != *(arg1 + 0x474))
        int32_t var_1c8_80 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x1c
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x19, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_34 != *(arg1 + 0x478))
        int32_t var_1c8_83 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x1d
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x1a, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_36 != *(arg1 + 0x47c))
        int32_t var_1c8_86 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x1e
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x1b, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || var_144_1 != *(arg1 + 0x480))
        int32_t var_1c8_89 = ecx_5
        eax_91 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x1f
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            eax_91, ecx_5 = ecx_5(*(arg1 + 0xe4), 0x1c, 1, eax_91, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            eax_91, ecx_5 = j__free(var_dc.d)
    
    eax_91.b = var_140_1
    
    if (*(arg1 + 0xb8) != 0 || eax_91.b != *(arg1 + 0x484))
        if (eax_91.b == 0)
            esi_2 = &data_ad9270
        
        ecx_5 = sub_52e820(&var_dc, esi_2)
        var_c_1.b = 0x20
        int32_t eax_104 = *(data_bac4e0 + 0x34)
        
        if (eax_104 != 0)
            ecx_5 = eax_104(*(arg1 + 0xe4), 0x1d, 1, &var_dc, eax_4)
        
        var_c_1.b = 0
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_39 != *(arg1 + 0x488) || eax_40 != *(arg1 + 0x48c))
        int32_t var_1c8_95 = ecx_5
        int16_t* eax_106 = sub_6ad9b0(&var_7c)
        var_c_1.b = 0x21
        int16_t* eax_107 = sub_6ad9b0(&var_94)
        var_c_1.b = 0x22
        int16_t* eax_108 = sub_532b80(eax_107, eax_107, &var_ac, u"MB / ")
        var_c_1.b = 0x23
        int16_t* eax_109 = sub_5327a0(eax_108, eax_108, &var_c4, eax_106)
        var_c_1.b = 0x24
        int16_t* eax_110 = sub_532b80(eax_109, eax_109, &var_dc, 0xaedff0)
        var_c_1.b = 0x25
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 0x1e, 1, eax_110, eax_4)
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
        
        var_c8 = 7
        int32_t var_cc_3 = 0
        var_dc = 0
        
        if (var_b0 u>= 8)
            ecx_5 = j__free(var_c4.d)
        
        var_b0 = 7
        int32_t var_b4_3 = 0
        var_c4 = 0
        
        if (var_98 u>= 8)
            ecx_5 = j__free(var_ac.d)
        
        var_98 = 7
        int32_t var_9c_3 = 0
        var_ac = 0
        
        if (var_80 u>= 8)
            ecx_5 = j__free(var_94.d)
        
        var_80 = 7
        var_c_1.b = 0
        int32_t var_84_2 = 0
        var_94 = 0
        
        if (var_68 u>= 8)
            ecx_5 = j__free(var_7c.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_41 != *(arg1 + 0x490))
        int32_t var_1c8_103 = ecx_5
        int16_t* eax_111 = sub_6ad9b0(&var_c4)
        var_c_1.b = 0x26
        int16_t* eax_112 = sub_532b80(eax_111, eax_111, &var_dc, u" Byte")
        var_c_1.b = 0x27
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 0x1f, 1, eax_112, eax_4)
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
        
        var_c8 = 7
        var_c_1.b = 0
        int32_t var_cc_4 = 0
        var_dc = 0
        
        if (var_b0 u>= 8)
            ecx_5 = j__free(var_c4.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_42 != *(arg1 + 0x494) || eax_43 != *(arg1 + 0x498)
            || eax_44 != *(arg1 + 0x49c))
        int32_t var_1c8_107 = ecx_5
        int16_t* eax_115 = sub_6ad9b0(&var_4c)
        var_c_1.b = 0x28
        int16_t* eax_116 = sub_6ad9b0(&var_64)
        var_c_1.b = 0x29
        int16_t* eax_117 = sub_6ad9b0(&var_7c)
        var_c_1.b = 0x2a
        int16_t* eax_118 = sub_532b80(eax_117, eax_117, &var_94, &data_aefc08)
        var_c_1.b = 0x2b
        int16_t* eax_119 = sub_5327a0(eax_118, eax_118, &var_ac, eax_116)
        var_c_1.b = 0x2c
        int16_t* eax_120 = sub_532b80(eax_119, eax_119, &var_c4, &data_aefc08)
        var_c_1.b = 0x2d
        int16_t* eax_121 = sub_5327a0(eax_120, eax_120, &var_dc, eax_115)
        var_c_1.b = 0x2e
        ecx_5 = *(data_bac4e0 + 0x34)
        
        if (ecx_5 != 0)
            ecx_5 = ecx_5(*(arg1 + 0xe4), 0x20, 1, eax_121, eax_4)
        
        if (var_c8 u>= 8)
            ecx_5 = j__free(var_dc.d)
        
        var_c8 = 7
        int32_t var_cc_5 = 0
        var_dc = 0
        
        if (var_b0 u>= 8)
            ecx_5 = j__free(var_c4.d)
        
        var_b0 = 7
        int32_t var_b4_4 = 0
        var_c4 = 0
        
        if (var_98 u>= 8)
            ecx_5 = j__free(var_ac.d)
        
        var_98 = 7
        int32_t var_9c_4 = 0
        var_ac = 0
        
        if (var_80 u>= 8)
            ecx_5 = j__free(var_94.d)
        
        int32_t var_80_1 = 7
        int32_t var_84_3 = 0
        var_94 = 0
        
        if (var_68 u>= 8)
            ecx_5 = j__free(var_7c.d)
        
        int32_t var_68_1 = 7
        int32_t var_6c_2 = 0
        var_7c = 0
        
        if (var_50 u>= 8)
            ecx_5 = j__free(var_64.d)
        
        int32_t var_50_1 = 7
        var_c_1.b = 0
        int32_t var_54_2 = 0
        var_64 = 0
        
        if (var_38 u>= 8)
            ecx_5 = j__free(var_4c.d)
    
    if (*(arg1 + 0xb8) != 0 || eax_46 != *(arg1 + 0x4a0) || eax_47 != *(arg1 + 0x4a4)
            || eax_48 != *(arg1 + 0x4a8))
        int32_t var_1c8_118 = ecx_5
        int16_t* eax_125 = sub_6ad9b0(&var_34)
        var_c_1.b = 0x2f
        int16_t* eax_126 = sub_6ad9b0(&var_4c)
        var_c_1.b = 0x30
        int16_t* eax_127 = sub_6ad9b0(&var_64)
        var_c_1.b = 0x31
        int16_t* eax_128 = sub_532b80(eax_127, eax_127, &var_7c, u"KB / ")
        var_c_1.b = 0x32
        int16_t* eax_129 = sub_5327a0(eax_128, eax_128, &var_94, eax_126)
        var_c_1.b = 0x33
        int16_t* eax_130 = sub_532b80(eax_129, eax_129, &var_ac, u"KB / ")
        var_c_1.b = 0x34
        int16_t* eax_131 = sub_5327a0(eax_130, eax_130, &var_c4, eax_125)
        var_c_1.b = 0x35
        int16_t* eax_132 = sub_532b80(eax_131, eax_131, &var_dc, 0xaf1580)
        var_c_1.b = 0x36
        int32_t ecx_84 = *(data_bac4e0 + 0x34)
        
        if (ecx_84 != 0)
            ecx_84(*(arg1 + 0xe4), 0x21, 1, eax_132, eax_4)
        
        if (var_c8 u>= 8)
            j__free(var_dc.d)
        
        int32_t var_c8_1 = 7
        int32_t var_cc_6 = 0
        var_dc = 0
        
        if (var_b0 u>= 8)
            j__free(var_c4.d)
        
        int32_t var_b0_1 = 7
        int32_t var_b4_5 = 0
        var_c4 = 0
        
        if (var_98 u>= 8)
            j__free(var_ac.d)
        
        int32_t var_98_1 = 7
        int32_t var_9c_5 = 0
        var_ac = 0
        sub_52e8a0(&var_94)
        sub_52e8a0(&var_7c)
        sub_52e8a0(&var_64)
        sub_52e8a0(&var_4c)
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_34)
    
    if (*(arg1 + 0xb8) != 0 || eax_49 != *(arg1 + 0x4ac) || eax_50 != *(arg1 + 0x4b0))
        int32_t var_1c8_125 = ecx_5
        int16_t* eax_135 = sub_6ad9b0(&var_94)
        var_c_1.b = 0x37
        int16_t* eax_136 = sub_6ad9b0(&var_ac)
        var_c_1.b = 0x38
        int16_t* eax_137 = sub_532b80(eax_136, eax_136, &var_c4, &data_aefc08)
        var_c_1.b = 0x39
        int16_t* eax_138 = sub_5327a0(eax_137, eax_137, &var_dc, eax_135)
        var_c_1.b = 0x3a
        int32_t ecx_95 = *(data_bac4e0 + 0x34)
        
        if (ecx_95 != 0)
            ecx_95(*(arg1 + 0xe4), 0x22, 1, eax_138, eax_4)
        
        sub_52e8a0(&var_dc)
        sub_52e8a0(&var_c4)
        sub_52e8a0(&var_ac)
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_94)
    
    if (*(arg1 + 0xb8) != 0 || eax_51 != *(arg1 + 0x4b4) || eax_52 != *(arg1 + 0x4b8))
        int32_t var_1c8_128 = ecx_5
        int16_t* eax_141 = sub_6ad9b0(&var_94)
        var_c_1.b = 0x3b
        int16_t* eax_142 = sub_6ad9b0(&var_ac)
        var_c_1.b = 0x3c
        int16_t* eax_143 = sub_532b80(eax_142, eax_142, &var_c4, &data_aefc08)
        var_c_1.b = 0x3d
        int16_t* eax_144 = sub_5327a0(eax_143, eax_143, &var_dc, eax_141)
        var_c_1.b = 0x3e
        int32_t ecx_105 = *(data_bac4e0 + 0x34)
        
        if (ecx_105 != 0)
            ecx_105(*(arg1 + 0xe4), 0x23, 1, eax_144, eax_4)
        
        sub_52e8a0(&var_dc)
        sub_52e8a0(&var_c4)
        sub_52e8a0(&var_ac)
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_94)
    
    if (*(arg1 + 0xb8) != 0 || eax_53 != *(arg1 + 0x4bc))
        int32_t var_1c8_131 = ecx_5
        int16_t* eax_146 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x3f
        int32_t ecx_112 = *(data_bac4e0 + 0x34)
        
        if (ecx_112 != 0)
            ecx_112(*(arg1 + 0xe4), 0x24, 1, eax_146, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_54 != *(arg1 + 0x4c0))
        int32_t var_1c8_133 = ecx_5
        int16_t* eax_148 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x40
        int32_t ecx_116 = *(data_bac4e0 + 0x34)
        
        if (ecx_116 != 0)
            ecx_116(*(arg1 + 0xe4), 0x25, 1, eax_148, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_55 != *(arg1 + 0x4c4))
        int32_t var_1c8_135 = ecx_5
        int16_t* eax_150 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x41
        int32_t ecx_120 = *(data_bac4e0 + 0x34)
        
        if (ecx_120 != 0)
            ecx_120(*(arg1 + 0xe4), 0x26, 1, eax_150, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_56 != *(arg1 + 0x4c8))
        int32_t var_1c8_137 = ecx_5
        int16_t* eax_152 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x42
        int32_t ecx_124 = *(data_bac4e0 + 0x34)
        
        if (ecx_124 != 0)
            ecx_124(*(arg1 + 0xe4), 0x27, 1, eax_152, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_57 != *(arg1 + 0x4cc))
        int32_t var_1c8_139 = ecx_5
        int16_t* eax_154 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x43
        int32_t ecx_128 = *(data_bac4e0 + 0x34)
        
        if (ecx_128 != 0)
            ecx_128(*(arg1 + 0xe4), 0x28, 1, eax_154, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_58 != *(arg1 + 0x4d0))
        int32_t var_1c8_141 = ecx_5
        int16_t* eax_156 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x44
        int32_t ecx_132 = *(data_bac4e0 + 0x34)
        
        if (ecx_132 != 0)
            ecx_132(*(arg1 + 0xe4), 0x29, 1, eax_156, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_59 != *(arg1 + 0x4d4))
        int32_t var_1c8_143 = ecx_5
        int16_t* eax_158 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x45
        int32_t ecx_136 = *(data_bac4e0 + 0x34)
        
        if (ecx_136 != 0)
            ecx_136(*(arg1 + 0xe4), 0x2a, 1, eax_158, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_60 != *(arg1 + 0x4d8))
        int32_t var_1c8_145 = ecx_5
        int16_t* eax_160 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x46
        int32_t ecx_140 = *(data_bac4e0 + 0x34)
        
        if (ecx_140 != 0)
            ecx_140(*(arg1 + 0xe4), 0x2b, 1, eax_160, eax_4)
        
        var_c_1.b = 0
        ecx_5 = sub_52e8a0(&var_dc)
    
    if (*(arg1 + 0xb8) != 0 || eax_61 != *(arg1 + 0x4dc))
        int32_t var_1c8_147 = ecx_5
        int16_t* eax_162 = sub_6ad9b0(&var_dc)
        var_c_1.b = 0x47
        int32_t ecx_144 = *(data_bac4e0 + 0x34)
        
        if (ecx_144 != 0)
            ecx_144(*(arg1 + 0xe4), 0x2c, 1, eax_162, eax_4)
        
        var_c_1.b = 0
        sub_52e8a0(&var_dc)
    
    sub_5a3e60(arg1 + 0x414, &var_1b0)
    *(arg1 + 0xb8) = 0
    result = sub_5a3e30(&var_1b0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_1b4)
return result

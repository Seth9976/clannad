// 函数: sub_6197e0
// 地址: 0x6197e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* edx = arg1 + 0x1bf8
*edx = 0
int32_t* edi = edx[1]
edx[1] = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))()
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()
        
        edx = arg1 + 0x1bf8

char** ecx_3 = data_bac450
char* eax_6 = *ecx_3

if (eax_6 s<= 0x385)
    if (eax_6 s>= 0x384)
        void* eax_97 = data_bac4a0
        eax_6 = sub_64b3d0(eax_97, edx, arg1 + 0x1bf0, *(eax_97 + 8), *(eax_97 + 0xc), &ecx_3[0x13])
    else
        eax_6 -= 5
        
        if (eax_6 u<= 0x93)
            eax_6 = zx.d(*(eax_6 + &lookup_table_61a56c))
            int32_t var_2c_19
            char var_2c_26
            char var_28_18
            int32_t var_28_23
            int32_t var_28_24
            int32_t var_18
            
            switch (eax_6)
                case nullptr
                    int32_t var_28_1 = ecx_3[4]
                    void* edx_1 = data_bac4a0
                    int32_t eax_7 = sub_647850(eax_6, *(edx_1 + 8), arg1 + 0x1bf0, *(edx_1 + 0xc), 
                        ecx_3, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_7
                case 1
                    var_18 = 0x20c040ff
                    int32_t var_14 = 0xa080a060
                    int32_t var_10 = 0x40e000c0
                    int32_t var_c = 0xa060a080
                label_6198c3:
                    void* edx_3 = data_bac4a0
                    int32_t eax_9 = sub_643250(&var_18, *(edx_3 + 8), arg1 + 0x1bf0, 
                        *(edx_3 + 0xc), 0, ecx_3[3], ecx_3[4], &var_18)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_9
                case 2
                    var_18 = 0xd52bff
                    int32_t var_14_1 = 0xaa80aa55
                    int32_t var_10_1 = 0x2bff00d5
                    int32_t var_c_1 = 0xaa55aa80
                    goto label_6198c3
                case 3
                    void* edx_5 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    *(edx_5 + 8)
                    int32_t eax_11 =
                        sub_643320(*(edx_5 + 0xc), eax_6.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_11
                case 4
                    void* edx_7 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    *(edx_7 + 8)
                    int32_t eax_13 =
                        sub_643460(*(edx_7 + 0xc), eax_6.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_13
                case 5
                    void* edx_9 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    *(edx_9 + 8)
                    int32_t eax_15 =
                        sub_6435a0(*(edx_9 + 0xc), eax_6.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_15
                case 6
                    void* edx_11 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    *(edx_11 + 8)
                    int32_t eax_17 =
                        sub_6438a0(*(edx_11 + 0xc), eax_6.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_17
                case 7
                    void* edx_13 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    *(edx_13 + 8)
                    int32_t eax_19 =
                        sub_643da0(*(edx_13 + 0xc), eax_6.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_19
                case 8
                    void* edx_15 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    *(edx_15 + 8)
                    int32_t eax_21 =
                        sub_6442a0(*(edx_15 + 0xc), eax_6.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_21
                case 9
                    void* edx_17 = data_bac4a0
                    int32_t eax_22 = sub_6449a0(eax_6, *(edx_17 + 8), arg1 + 0x1bf0, 
                        *(edx_17 + 0xc), ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_22
                case 0xa
                    void* edx_19 = data_bac4a0
                    int32_t eax_23 = sub_644bd0(eax_6, *(edx_19 + 8), arg1 + 0x1bf0, 
                        *(edx_19 + 0xc), ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_23
                case 0xb
                    void* edx_21 = data_bac4a0
                    int32_t eax_24 = sub_644dd0(eax_6, *(edx_21 + 8), arg1 + 0x1bf0, 
                        *(edx_21 + 0xc), ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_24
                case 0xc
                    void* edx_23 = data_bac4a0
                    int32_t eax_25 = sub_644fe0(eax_6, *(edx_23 + 8), arg1 + 0x1bf0, 
                        *(edx_23 + 0xc), ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_25
                case 0xd
                    void* edx_25 = data_bac4a0
                    int32_t eax_26 =
                        sub_645220(eax_6, *(edx_25 + 8), arg1 + 0x1bf0, *(edx_25 + 0xc), ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_26
                case 0xe
                    void* edx_27 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_27 = zx.d(eax_6.b)
                    int32_t eax_28 = sub_645760(eax_27, *(edx_27 + 8), arg1 + 0x1bf0, 
                        *(edx_27 + 0xc), eax_27.b, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_28
                case 0xf
                    void* edx_29 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_29 = zx.d(eax_6.b)
                    int32_t eax_30 = sub_6459f0(eax_29, *(edx_29 + 8), arg1 + 0x1bf0, 
                        *(edx_29 + 0xc), eax_29.b, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_30
                case 0x10
                    void* edx_31 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_31 = zx.d(eax_6.b)
                    int32_t eax_32 = sub_645ba0(eax_31, *(edx_31 + 8), arg1 + 0x1bf0, 
                        *(edx_31 + 0xc), eax_31.b, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_32
                case 0x11
                    void* edx_33 = data_bac4a0
                    eax_6.b = ecx_3[3] != 0
                    uint32_t eax_33 = zx.d(eax_6.b)
                    int32_t eax_34 =
                        sub_645d90(eax_33, *(edx_33 + 8), arg1 + 0x1bf0, *(edx_33 + 0xc), eax_33.b)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_34
                case 0x12
                    void* edx_35 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_35 = zx.d(eax_6.b)
                    int32_t eax_36 = sub_646130(eax_35, *(edx_35 + 8), arg1 + 0x1bf0, 
                        *(edx_35 + 0xc), eax_35.b, ecx_3[3], 0)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_36
                case 0x13
                    var_28_18 = 0
                label_619ca2:
                    var_2c_19 = 0
                    goto label_619cab
                case 0x14
                    void* edx_39 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_39 = zx.d(eax_6.b)
                    int32_t eax_40 = sub_646600(eax_39, *(edx_39 + 8), arg1 + 0x1bf0, 
                        *(edx_39 + 0xc), eax_39.b, ecx_3[3], 1, 0)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_40
                case 0x15
                    void* edx_41 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_41 = zx.d(eax_6.b)
                    int32_t eax_42 = sub_646130(eax_41, *(edx_41 + 8), arg1 + 0x1bf0, 
                        *(edx_41 + 0xc), eax_41.b, ecx_3[3], 1)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_42
                case 0x16
                    var_28_18 = 1
                    goto label_619ca2
                case 0x17
                    var_28_18 = 1
                    var_2c_19 = 1
                label_619cab:
                    void* edx_37 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_37 = zx.d(eax_6.b)
                    int32_t eax_38 = sub_646600(eax_37, *(edx_37 + 8), arg1 + 0x1bf0, 
                        *(edx_37 + 0xc), eax_37.b, ecx_3[3], var_2c_19, var_28_18)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_38
                case 0x18
                    void* edx_43 = data_bac4a0
                    eax_6.b = ecx_3[7] != 0
                    uint32_t eax_43 = zx.d(eax_6.b)
                    int32_t eax_44 = sub_64a0c0(eax_43, *(edx_43 + 8), arg1 + 0x1bf0, 
                        *(edx_43 + 0xc), eax_43, ecx_3[3], ecx_3[4], ecx_3[5], ecx_3[6])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_44
                case 0x19
                    void* edx_45 = data_bac4a0
                    eax_6.b = ecx_3[7] != 0
                    uint32_t eax_45 = zx.d(eax_6.b)
                    int32_t eax_46 = sub_64a270(eax_45, *(edx_45 + 8), arg1 + 0x1bf0, 
                        *(edx_45 + 0xc), eax_45, ecx_3[3], ecx_3[4], ecx_3[5], ecx_3[6])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_46
                case 0x1a
                    void* edx_47 = data_bac4a0
                    eax_6.b = ecx_3[7] != 0
                    uint32_t eax_47 = zx.d(eax_6.b)
                    int32_t eax_48 = sub_64a420(eax_47, *(edx_47 + 8), arg1 + 0x1bf0, 
                        *(edx_47 + 0xc), eax_47, ecx_3[3], ecx_3[4], ecx_3[5], ecx_3[6])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_48
                case 0x1b
                    void* edx_49 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    uint32_t eax_49 = zx.d(eax_6.b)
                    int32_t eax_50 = sub_64a5f0(eax_49, *(edx_49 + 8), arg1 + 0x1bf0, 
                        *(edx_49 + 0xc), eax_49, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_50
                case 0x1c
                    var_28_23 = 0
                label_619e76:
                    void* edx_51 = data_bac4a0
                    eax_6.b = ecx_3[7] != 0
                    uint32_t eax_51 = zx.d(eax_6.b)
                    int32_t eax_52 = sub_64a7a0(eax_51, *(edx_51 + 8), arg1 + 0x1bf0, 
                        *(edx_51 + 0xc), eax_51, ecx_3[3], ecx_3[4], ecx_3[5], (ecx_3[6]).b, 
                        var_28_23)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_52
                case 0x1d
                    var_28_24 = 0
                label_619eb0:
                    var_2c_26 = 0
                    goto label_619ebc
                case 0x1e
                    var_28_24 = 0
                    var_2c_26 = 1
                label_619ebc:
                    void* edx_53 = data_bac4a0
                    eax_6.b = ecx_3[7] != 0
                    uint32_t eax_53 = zx.d(eax_6.b)
                    int32_t eax_54 = sub_64a970(eax_53, *(edx_53 + 8), arg1 + 0x1bf0, 
                        *(edx_53 + 0xc), eax_53, ecx_3[3], ecx_3[4], ecx_3[5], ecx_3[6], var_2c_26, 
                        var_28_24)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_54
                case 0x1f
                    var_28_23 = 1
                    goto label_619e76
                case 0x20
                    var_28_24 = 1
                    goto label_619eb0
                case 0x21
                    var_28_24 = 1
                    var_2c_26 = 1
                    goto label_619ebc
                case 0x22
                    void* edx_55 = data_bac4a0
                    eax_6.b = ecx_3[3] != 0
                    uint32_t eax_55 = zx.d(eax_6.b)
                    int32_t eax_56 =
                        sub_6468d0(eax_55, *(edx_55 + 8), arg1 + 0x1bf0, *(edx_55 + 0xc), eax_55)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_56
                case 0x23
                    void* edx_57 = data_bac4a0
                    eax_6.b = ecx_3[3] != 0
                    uint32_t eax_57 = zx.d(eax_6.b)
                    int32_t eax_58 =
                        sub_646d80(eax_57, *(edx_57 + 8), arg1 + 0x1bf0, *(edx_57 + 0xc), eax_57)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_58
                case 0x24
                    void* edx_59 = data_bac4a0
                    eax_6.b = ecx_3[3] != 0
                    uint32_t eax_59 = zx.d(eax_6.b)
                    int32_t eax_60 =
                        sub_647190(eax_59, *(edx_59 + 8), arg1 + 0x1bf0, *(edx_59 + 0xc), eax_59)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_60
                case 0x25
                    void* edx_61 = data_bac4a0
                    eax_6.b = ecx_3[3] != 0
                    uint32_t eax_61 = zx.d(eax_6.b)
                    int32_t eax_62 =
                        sub_647470(eax_61, *(edx_61 + 8), arg1 + 0x1bf0, *(edx_61 + 0xc), eax_61)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_62
                case 0x26
                    void* edx_63 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    uint32_t eax_63 = zx.d(eax_6.b)
                    int32_t eax_64 = sub_64ab30(eax_63, *(edx_63 + 8), arg1 + 0x1bf0, 
                        *(edx_63 + 0xc), eax_63, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_64
                case 0x27
                    void* edx_65 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    uint32_t eax_65 = zx.d(eax_6.b)
                    int32_t eax_66 = sub_64ace0(eax_65, *(edx_65 + 8), arg1 + 0x1bf0, 
                        *(edx_65 + 0xc), eax_65, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_66
                case 0x28
                    void* edx_67 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    uint32_t eax_67 = zx.d(eax_6.b)
                    int32_t eax_68 = sub_64ae90(eax_67, *(edx_67 + 8), arg1 + 0x1bf0, 
                        *(edx_67 + 0xc), eax_67, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_68
                case 0x29
                    void* edx_69 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    uint32_t eax_69 = zx.d(eax_6.b)
                    int32_t eax_70 = sub_64b040(eax_69, *(edx_69 + 8), arg1 + 0x1bf0, 
                        *(edx_69 + 0xc), eax_69, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_70
                case 0x2a
                    int32_t var_28_33 = ecx_3[3]
                    void* edx_71 = data_bac4a0
                    int32_t eax_71 =
                        sub_647610(eax_6, *(edx_71 + 8), arg1 + 0x1bf0, *(edx_71 + 0xc), ecx_3)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_71
                case 0x2b
                    int32_t var_28_34 = ecx_3[4]
                    void* edx_73 = data_bac4a0
                    int32_t eax_72 = sub_647910(eax_6, *(edx_73 + 8), arg1 + 0x1bf0, 
                        *(edx_73 + 0xc), ecx_3, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_72
                case 0x2c
                    int32_t var_28_35 = ecx_3[3]
                    void* edx_75 = data_bac4a0
                    int32_t eax_73 =
                        sub_647c00(eax_6, *(edx_75 + 8), arg1 + 0x1bf0, *(edx_75 + 0xc), ecx_3)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_73
                case 0x2d
                    int32_t var_28_36 = ecx_3[5]
                    void* edx_77 = data_bac4a0
                    int32_t eax_74 = sub_647ee0(eax_6, *(edx_77 + 8), arg1 + 0x1bf0, 
                        *(edx_77 + 0xc), ecx_3, ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_74
                case 0x2e
                    void* edx_79 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_75 = zx.d(eax_6.b)
                    int32_t eax_76 = sub_648390(eax_75, *(edx_79 + 8), arg1 + 0x1bf0, 
                        *(edx_79 + 0xc), eax_75.b, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_76
                case 0x2f
                    void* edx_81 = data_bac4a0
                    eax_6.b = ecx_3[5] != 0
                    uint32_t eax_77 = zx.d(eax_6.b)
                    int32_t eax_78 = sub_648670(eax_77, *(edx_81 + 8), arg1 + 0x1bf0, 
                        *(edx_81 + 0xc), eax_77.b, ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_78
                case 0x30
                    void* edx_83 = data_bac4a0
                    eax_6.b = ecx_3[5] != 0
                    uint32_t eax_79 = zx.d(eax_6.b)
                    int32_t eax_80 = sub_648b10(eax_79, *(edx_83 + 8), arg1 + 0x1bf0, 
                        *(edx_83 + 0xc), eax_79.b, ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_80
                case 0x31
                    int32_t var_28_40 = ecx_3[4]
                    void* edx_85 = data_bac4a0
                    int32_t eax_81 = sub_648e60(eax_6, *(edx_85 + 8), arg1 + 0x1bf0, 
                        *(edx_85 + 0xc), ecx_3, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_81
                case 0x32
                    int32_t var_28_41 = ecx_3[4]
                    void* edx_87 = data_bac4a0
                    int32_t eax_82 = sub_649150(eax_6, *(edx_87 + 8), arg1 + 0x1bf0, 
                        *(edx_87 + 0xc), ecx_3, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_82
                case 0x33
                    int32_t var_28_42 = ecx_3[5]
                    void* edx_89 = data_bac4a0
                    int32_t eax_83 = sub_649210(eax_6, *(edx_89 + 8), arg1 + 0x1bf0, 
                        *(edx_89 + 0xc), ecx_3, ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_83
                case 0x34
                    void* edx_91 = data_bac4a0
                    eax_6.b = ecx_3[3] != 0
                    uint32_t eax_84 = zx.d(eax_6.b)
                    int32_t eax_85 =
                        sub_649710(eax_84, *(edx_91 + 8), arg1 + 0x1bf0, *(edx_91 + 0xc), eax_84.b)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_85
                case 0x35
                    void* edx_93 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_86 = zx.d(eax_6.b)
                    int32_t eax_87 = sub_649a30(eax_86, *(edx_93 + 8), arg1 + 0x1bf0, 
                        *(edx_93 + 0xc), eax_86.b, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_87
                case 0x36
                    void* edx_95 = data_bac4a0
                    eax_6.b = ecx_3[4] != 0
                    uint32_t eax_88 = zx.d(eax_6.b)
                    int32_t eax_89 = sub_649e70(eax_88, *(edx_95 + 8), arg1 + 0x1bf0, 
                        *(edx_95 + 0xc), eax_88.b, ecx_3[3])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_89
                case 0x37
                    void* edx_97 = data_bac4a0
                    eax_6.b = ecx_3[5] != 0
                    uint32_t eax_90 = zx.d(eax_6.b)
                    int32_t eax_91 = sub_64b120(eax_90, *(edx_97 + 8), arg1 + 0x1bf0, 
                        *(edx_97 + 0xc), eax_90.b, ecx_3[3], ecx_3[4])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_91
                case 0x38
                    void* edx_99 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    uint32_t eax_92 = zx.d(eax_6.b)
                    int32_t eax_93 = sub_64b1f0(eax_92, *(edx_99 + 8), arg1 + 0x1bf0, 
                        *(edx_99 + 0xc), eax_92.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_93
                case 0x39
                    void* edx_101 = data_bac4a0
                    eax_6.b = ecx_3[6] != 0
                    uint32_t eax_94 = zx.d(eax_6.b)
                    int32_t eax_95 = sub_64b2e0(eax_94, *(edx_101 + 8), arg1 + 0x1bf0, 
                        *(edx_101 + 0xc), eax_94.b, ecx_3[3], ecx_3[4], ecx_3[5])
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_95

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_6

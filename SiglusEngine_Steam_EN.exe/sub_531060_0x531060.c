// 函数: sub_531060
// 地址: 0x531060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = data_1bfdd30
uint32_t eax_2 = ecx - 0x64

if (eax_2 u> 0x61)
label_5325b0:
    data_1b8b06c = 1
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_2

eax_2 = zx.d(lookup_table_532684[eax_2])
int32_t var_d4
char** eax_4
int32_t eax_81
int32_t ecx_22
int32_t ecx_59
bool cond:2_1
bool cond:3_1

switch (eax_2)
    case 0
        int32_t ecx_3
        eax_2, ecx_3 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        
        if (data_1b8a6e8 != 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_2
        
        int32_t var_e8_1 = ecx_3
        int32_t eax_3 = sub_530bd0(data_1b8a720, 6)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_3
    case 1
        int32_t ecx_8
        eax_4, ecx_8 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        
        if (data_1bfdd30 == 0x65)
            sub_445260()
        
        if (data_1b8a6e8 != 0)
            goto label_5314ed
        
        int32_t var_e8_2 = ecx_8
        int32_t eax_5 = sub_530bd0(data_1b8a720, 0xa)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_5
    case 2
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_6 = sub_530bd0(data_1b8a720, 7)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_6
    case 3
        int32_t ecx_17 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        
        if (data_1bfdd30 == 0x68)
            sub_445260()
        
        int32_t var_e8_3 = ecx_17
        int32_t eax_7 = sub_530bd0(data_1b8a720, 0xb)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_7
    case 4
        if (ecx == 0x6a)
            sub_445260()
        
        int32_t var_e8_4 = ecx
        int32_t eax_8 = sub_530c40()
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_8
    case 5
        int32_t eax_9 = data_1af4e84
        
        if (eax_9 == 0)
            eax_2 = sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        label_531205:
            ecx_22 = data_1b8a720
            
            if (ecx_22 s< 0 || ecx_22 s>= 0x100)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_2
        else
            eax_2 = eax_9 - 1
            
            if (eax_9 != 1)
                goto label_531205
            
            ecx_22 = 0
            data_1b8a720 = 0
        
        if (data_1af1780 != 0 || data_1af174c != 0)
            eax_2 = data_1392710
            *((ecx_22 << 2) + &data_91e904) = eax_2
            (&data_91f104)[ecx_22] = 0
            goto label_531273
        
        *((ecx_22 << 2) + &data_107f154) = 1
        data_71929c = 2
        data_7192a0 = 0
        data_7192e0 = 0
        goto label_531273
    case 6
        int32_t eax_12 = data_1af4e84
        int32_t edx_7
        
        if (eax_12 == 0)
            sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            edx_7 = 0
            data_1b8a734 = 0
        label_5312f8:
            int32_t ecx_31 = data_1b8a720
            eax_2 = 0
            int32_t esi_1 = data_702fc0
            
            if (ecx_31 s< 0)
                ecx_31 = 0
            
            data_107f95c = ecx_31
            
            if (esi_1 != 0 && data_1af414c != 0)
                if (ecx_31 u< data_1b1bd10)
                    ecx_31 = data_1b1bd10
                
                data_107f95c = ecx_31
            
            data_107f954 = edx_7
            data_71929c = 8
            data_7192a0 = 0
            data_7192e0 = 0
            
            if (esi_1 != 0)
                int32_t eax_14 = sub_55e890(edx_7)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_14
        else
            eax_2 = eax_12 - 1
            
            if (eax_12 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            
            edx_7 = data_1b8a734
            
            if (edx_7 s>= 0 && edx_7 s< 0x100)
                goto label_5312f8
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2
    case 7
        int32_t eax_15 = data_1af4e84
        int32_t edx_10
        
        if (eax_15 == 0)
            sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            ecx = data_1bfdd30
            edx_10 = 0
            data_1b8a734 = 0
        label_5313d8:
            int32_t esi_2 = data_1b8a720
            eax_2 = 0
            int32_t edi_1 = data_702fc0
            
            if (esi_2 s< 0)
                esi_2 = 0
            
            data_107f95c = esi_2
            
            if (edi_1 != 0 && data_1af414c != 0)
                if (esi_2 u< data_1b1bd10)
                    esi_2 = data_1b1bd10
                
                data_107f95c = esi_2
            
            data_107f954 = edx_10
            
            if (ecx == 0x70)
                sub_445260()
            
            data_71929c = 0xc
            data_7192a0 = 0
            data_7192e0 = 0
            
            if (edi_1 != 0)
                int32_t eax_17 = sub_55e890(edx_10)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_17
        else
            eax_2 = eax_15 - 1
            
            if (eax_15 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                ecx = data_1bfdd30
            
            edx_10 = data_1b8a734
            
            if (edx_10 s>= 0 && edx_10 s< 0x100)
                goto label_5313d8
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2
    case 8
        int32_t eax_18 = data_1af4e84
        
        if (eax_18 == 0)
            eax_4 = sub_4ef190(eax_18, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        label_531492:
            ecx_22 = data_1b8a720
            
            if (ecx_22 s>= 0 && ecx_22 s< 0x100)
                eax_2 = (&data_91f104)[ecx_22]
                data_715e98 = eax_2
                goto label_531273
            
        label_5314ed:
            data_715e98 = 0
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_4
        
        eax_4 = eax_18 - 1
        
        if (eax_18 != 1)
            goto label_531492
        
        ecx_22 = 0
        data_1b8a720 = 0
        eax_2 = data_91f104
        data_715e98 = eax_2
    label_531273:
        cond:2_1 = data_702fc0 == 0
    label_53127a:
        
        if (cond:2_1)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_2
        
        int32_t eax_11 = sub_55e890(ecx_22)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_11
    case 9
        int32_t eax_20 = data_1af4e84
        
        if (eax_20 == 0)
            sub_4ef190(eax_20, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            ecx_22 = 0
            data_1b8a734 = 0
        else
            eax_4 = eax_20 - 1
            
            if (eax_20 == 1)
                eax_4 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            
            ecx_22 = data_1b8a734
            
            if (ecx_22 s< 0 || ecx_22 s>= 0x100)
                goto label_5314ed
        
        int32_t eax_22 = data_1b8a720
        
        if (eax_22 s< 0)
            eax_22 = 0
        
        eax_2 = neg.d(sbb.d(eax_22, eax_22, eax_22 u< (&data_91f104)[ecx_22]))
        cond:2_1 = data_702fc0 == 0
        data_715e98 = eax_2
        goto label_53127a
    case 0xa
        int32_t eax_24 = data_1af4e84
        int32_t ecx_54
        
        if (eax_24 == 0)
            eax_2 = sub_4ef190(eax_24, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            ecx_54 = 0
            data_1b8a734 = 0
        else
            eax_2 = eax_24 - 1
            
            if (eax_24 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            
            ecx_54 = data_1b8a734
        
        if (data_702fc0 == 0 || ecx_54 u> 0xff)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_2
        
        if (data_1af1780 != 0 || data_1af174c != 0)
            *((ecx_54 << 2) + &data_91e904) = data_1392710
            (&data_91f104)[ecx_54] = data_1b8a720
            int32_t eax_30 = sub_55e890(ecx_54)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_30
        
        int32_t eax_26 = data_1b8a720
        *((ecx_54 << 2) + &data_107f154) = 2
        
        if (eax_26 == 0)
            eax_26 = 1
        
        (&data_91f104)[ecx_54] = eax_26
        data_1b8a720 = eax_26
        data_71929c = 2
        data_7192a0 = 0
        data_7192e0 = 0
        int32_t eax_27 = sub_55e890(ecx_54)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_27
    case 0xb
        int32_t eax_31 = data_1af4e84
        
        if (eax_31 == 0)
            eax_2 = sub_4ef190(eax_31, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        label_53167f:
            ecx_59 = data_1b8a720
            
            if (ecx_59 s< 0 || ecx_59 s>= 0x100)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_2
        else
            eax_2 = eax_31 - 1
            
            if (eax_31 != 1)
                goto label_53167f
            
            ecx_59 = 0
            data_1b8a720 = 0
        
        if (data_1af1780 != 0 || data_1af174c != 0)
            eax_2 = data_131310c
            *((ecx_59 << 2) + &data_91ed04) = eax_2
            (&data_91f504)[ecx_59] = 0
            goto label_5316ed
        
        *((ecx_59 << 2) + &data_107f554) = 1
        data_71929c = 2
        data_7192a0 = 0
        data_7192e0 = 0
        goto label_5316ed
    case 0xc
        int32_t eax_34 = data_1af4e84
        int32_t edx_19
        
        if (eax_34 == 0)
            sub_4ef190(eax_34, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            edx_19 = 0
            data_1b8a734 = 0
        label_531772:
            int32_t ecx_68 = data_1b8a720
            eax_2 = 0
            int32_t esi_3 = data_702fc0
            
            if (ecx_68 s< 0)
                ecx_68 = 0
            
            data_107f960 = ecx_68
            
            if (esi_3 != 0 && data_1af414c != 0)
                if (ecx_68 u< data_1b1bd10)
                    ecx_68 = data_1b1bd10
                
                data_107f960 = ecx_68
            
            data_107f958 = edx_19
            data_71929c = 9
            data_7192a0 = 0
            data_7192e0 = 0
            
            if (esi_3 != 0)
                int32_t eax_36 = sub_55fd80(edx_19)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_36
        else
            eax_2 = eax_34 - 1
            
            if (eax_34 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            
            edx_19 = data_1b8a734
            
            if (edx_19 s>= 0 && edx_19 s< 0x100)
                goto label_531772
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2
    case 0xd
        int32_t eax_37 = data_1af4e84
        int32_t edx_22
        
        if (eax_37 == 0)
            sub_4ef190(eax_37, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            ecx = data_1bfdd30
            edx_22 = 0
            data_1b8a734 = 0
        label_531852:
            int32_t esi_4 = data_1b8a720
            eax_2 = 0
            int32_t edi_2 = data_702fc0
            
            if (esi_4 s< 0)
                esi_4 = 0
            
            data_107f960 = esi_4
            
            if (edi_2 != 0 && data_1af414c != 0)
                if (esi_4 u< data_1b1bd10)
                    esi_4 = data_1b1bd10
                
                data_107f960 = esi_4
            
            data_107f958 = edx_22
            
            if (ecx == 0x7a)
                sub_445260()
            
            data_71929c = 0xd
            data_7192a0 = 0
            data_7192e0 = 0
            
            if (edi_2 != 0)
                int32_t eax_39 = sub_55fd80(edx_22)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_39
        else
            eax_2 = eax_37 - 1
            
            if (eax_37 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                ecx = data_1bfdd30
            
            edx_22 = data_1b8a734
            
            if (edx_22 s>= 0 && edx_22 s< 0x100)
                goto label_531852
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2
    case 0xe
        int32_t eax_40 = data_1af4e84
        
        if (eax_40 == 0)
            eax_4 = sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        label_53190c:
            ecx_59 = data_1b8a720
            
            if (ecx_59 s< 0 || ecx_59 s>= 0x100)
                goto label_5314ed
            
            eax_2 = (&data_91f504)[ecx_59]
            data_715e98 = eax_2
            goto label_5316ed
        
        eax_4 = eax_40 - 1
        
        if (eax_40 != 1)
            goto label_53190c
        
        ecx_59 = 0
        data_1b8a720 = 0
        eax_2 = data_91f504
        data_715e98 = eax_2
    label_5316ed:
        cond:3_1 = data_702fc0 == 0
    label_5316f4:
        
        if (cond:3_1)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_2
        
        int32_t eax_33 = sub_55fd80(ecx_59)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_33
    case 0xf
        int32_t eax_42 = data_1af4e84
        
        if (eax_42 == 0)
            sub_4ef190(eax_42, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            ecx_59 = 0
            data_1b8a734 = 0
        else
            eax_4 = eax_42 - 1
            
            if (eax_42 == 1)
                eax_4 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            
            ecx_59 = data_1b8a734
            
            if (ecx_59 s< 0)
                goto label_5314ed
            
            if (ecx_59 s>= 0x100)
                data_715e98 = 0
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_4
        
        int32_t eax_44 = data_1b8a720
        
        if (eax_44 s< 0)
            eax_44 = 0
        
        eax_2 = neg.d(sbb.d(eax_44, eax_44, eax_44 u< (&data_91f504)[ecx_59]))
        cond:3_1 = data_702fc0 == 0
        data_715e98 = eax_2
        goto label_5316f4
    case 0x10
        int32_t eax_46 = data_1af4e84
        int32_t ecx_91
        
        if (eax_46 == 0)
            eax_2 = sub_4ef190(eax_46, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            ecx_91 = 0
            data_1b8a734 = 0
        else
            eax_2 = eax_46 - 1
            
            if (eax_46 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            
            ecx_91 = data_1b8a734
        
        if (data_702fc0 == 0 || ecx_91 u> 0xff)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_2
        
        if (data_1af1780 != 0 || data_1af174c != 0)
            *((ecx_91 << 2) + &data_91ed04) = data_131310c
            (&data_91f504)[ecx_91] = data_1b8a720
            int32_t eax_52 = sub_55fd80(ecx_91)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_52
        
        int32_t eax_48 = data_1b8a720
        *((ecx_91 << 2) + &data_107f554) = 2
        
        if (eax_48 == 0)
            eax_48 = 1
        
        (&data_91f504)[ecx_91] = eax_48
        data_1b8a720 = eax_48
        data_71929c = 2
        data_7192a0 = 0
        data_7192e0 = 0
        int32_t eax_49 = sub_55fd80(ecx_91)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_49
    case 0x11
    label_531ad5:
        sub_445260()
    label_531ada:
        data_1af1744 = 1
        goto label_531ae4
    case 0x12
        sub_445260()
        int32_t eax_54 = sub_48cf30(
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720), data_1b8a72c, 0xe, 
            data_1b8a730, data_1b8a740, data_1b8a744)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_54
    case 0x13
        sub_445260()
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$%%", &data_1b8a720)
        int32_t ecx_104 = data_1b8a720
        
        if (ecx_104 s< 0)
            ecx_104 = 0
        
        data_107f11c = ecx_104
        
        if (data_702fc0 != 0 && data_1af414c != 0)
            if (ecx_104 u< data_1b1bd10)
                ecx_104 = data_1b1bd10
            
            data_107f11c = ecx_104
        
        int32_t var_e8_5 = data_1b8a758
        int32_t eax_55 = data_1392710
        int32_t var_ec_1 = data_1b8a754
        int32_t edx_31 = data_1b8a740
        int32_t var_f0_5 = data_1b8a744
        data_107f118 = eax_55
        data_107f120 = 0
        int32_t eax_56 = sub_48cf30(eax_55, edx_31, 0xf, var_f0_5, var_ec_1, var_e8_5)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_56
    case 0x14
        sub_4e8000(
            sub_4e8000(sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "%%%%", &data_1b8a720), 
                data_1b8a730, data_1b8a72c, data_131d2cc, &data_704898), 
            data_1b8a744, data_1b8a740, data_1320e58, &data_704898)
        int32_t eax_59
        
        if (data_1b8a700 != 1)
            int32_t eax_60 = data_1392d84
            
            if (eax_60 s>= 0x2710)
            label_531cb1:
                int32_t eax_62 = data_1392eb0
                
                if (eax_62 s>= 0x2710)
                label_531cec:
                    int32_t eax_64 = data_1392d54
                    int32_t eax_65
                    
                    if (eax_64 s< 0x2710)
                        eax_65 = eax_64 * 9
                    
                    if (eax_64 s>= 0x2710 || (&data_13701ec)[eax_65 << 2] != 0
                            || *((eax_65 << 2) + &data_13701f5) == 0)
                        eax_59 = 0
                    else
                        eax_59 = 2
                else
                    int32_t eax_63 = eax_62 * 9
                    
                    if ((&data_13701ec)[eax_63 << 2] == 0 && *((eax_63 << 2) + &data_13701f5) != 0)
                        eax_59 = 2
                    else
                        if (*((eax_63 << 2) + &data_13701f4) == 0)
                            goto label_531cec
                        
                        eax_59 = 1
            else
                int32_t eax_61 = eax_60 * 9
                
                if ((&data_13701ec)[eax_61 << 2] == 0 && *((eax_61 << 2) + &data_13701f5) != 0)
                    eax_59 = 2
                else
                    if (*((eax_61 << 2) + &data_13701f4) == 0)
                        goto label_531cb1
                    
                    eax_59 = 1
        else
            eax_59.b = data_13702bc != 0
        
        sub_4e8000(eax_59, data_1b8a758, data_1b8a754, eax_59, &data_704898)
        int32_t eax_66
        
        if (data_1b8a6fc != 1)
            int32_t eax_67 = data_1392dbc
            
            if (eax_67 s>= 0x2710)
            label_531d8c:
                int32_t eax_69 = data_1392eb8
                
                if (eax_69 s>= 0x2710)
                label_531dc7:
                    int32_t eax_71 = data_1392d70
                    
                    if (eax_71 s>= 0x2710)
                    label_531e02:
                        int32_t eax_73 = data_1392d58
                        int32_t eax_74
                        
                        if (eax_73 s< 0x2710)
                            eax_74 = eax_73 * 9
                        
                        if (eax_73 s>= 0x2710 || (&data_13701ec)[eax_74 << 2] != 0
                                || *((eax_74 << 2) + &data_13701f5) == 0)
                            eax_66 = 0
                        else
                            eax_66 = 2
                    else
                        int32_t eax_72 = eax_71 * 9
                        
                        if ((&data_13701ec)[eax_72 << 2] == 0
                                && *((eax_72 << 2) + &data_13701f5) != 0)
                            eax_66 = 2
                        else
                            if (*((eax_72 << 2) + &data_13701f4) == 0)
                                goto label_531e02
                            
                            eax_66 = 1
                else
                    int32_t eax_70 = eax_69 * 9
                    
                    if ((&data_13701ec)[eax_70 << 2] == 0 && *((eax_70 << 2) + &data_13701f5) != 0)
                        eax_66 = 2
                    else
                        if (*((eax_70 << 2) + &data_13701f4) == 0)
                            goto label_531dc7
                        
                        eax_66 = 1
            else
                int32_t eax_68 = eax_67 * 9
                
                if ((&data_13701ec)[eax_68 << 2] == 0 && *((eax_68 << 2) + &data_13701f5) != 0)
                    eax_66 = 2
                else
                    if (*((eax_68 << 2) + &data_13701f4) == 0)
                        goto label_531d8c
                    
                    eax_66 = 1
        else
            eax_66.b = data_13702e0 != 0
        
        eax_2 = sub_4e8000(eax_66, data_1b8a76c, data_1b8a768, eax_66, &data_704898)
        goto label_531ae4
    case 0x15
        data_13701e1 = 1
        goto label_531ada
    case 0x16
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "%%%%%%", &data_1b8a720)
        int32_t eax_75 = data_1392d54
        int32_t edx_38 = 0xffffffff
        int32_t edi_3 = 0xffffffff
        uint32_t esi_5
        
        if (eax_75 s>= 0x2710)
            esi_5 = 0
        else
            eax_75 *= 9
            char ecx_115 = *((eax_75 << 2) + &data_13701f8)
            
            if (ecx_115 != 0)
                edx_38 = *((eax_75 << 2) + &data_13701fc)
                edi_3 = *((eax_75 << 2) + &data_1370200)
            
            esi_5 = zx.d(ecx_115)
        
        sub_4e8000(
            sub_4e8000(sub_4e8000(eax_75, data_1b8a730, data_1b8a72c, edx_38, &data_704898), 
                data_1b8a744, data_1b8a740, edi_3, &data_704898), 
            data_1b8a758, data_1b8a754, esi_5, &data_704898)
        int32_t eax_78 = data_1392d58
        int32_t edx_42 = 0xffffffff
        int32_t edi_4 = 0xffffffff
        uint32_t esi_6
        
        if (eax_78 s>= 0x2710)
            esi_6 = 0
        else
            eax_78 *= 9
            int32_t ecx_118
            ecx_118.b = *((eax_78 << 2) + &data_13701f8)
            
            if (ecx_118.b != 0)
                edx_42 = *((eax_78 << 2) + &data_13701fc)
                edi_4 = *((eax_78 << 2) + &data_1370200)
            
            esi_6 = zx.d(ecx_118.b)
        
        eax_2 = sub_4e8000(
            sub_4e8000(sub_4e8000(eax_78, data_1b8a76c, data_1b8a768, edx_42, &data_704898), 
                data_1b8a780, data_1b8a77c, edi_4, &data_704898), 
            data_1b8a794, data_1b8a790, esi_6, &data_704898)
        goto label_531ae4
    case 0x17
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "%%%", &data_1b8a720)
        eax_81 = data_1392d54
    label_531f8a:
        int32_t edx_47 = 0xffffffff
        int32_t edi_5 = 0xffffffff
        uint32_t esi_7
        
        if (eax_81 s>= 0x2710)
            esi_7 = 0
        else
            eax_81 *= 9
            char ecx_124 = *((eax_81 << 2) + &data_13701f8)
            
            if (ecx_124 != 0)
                edx_47 = *((eax_81 << 2) + &data_13701fc)
                edi_5 = *((eax_81 << 2) + &data_1370200)
            
            esi_7 = zx.d(ecx_124)
        
        eax_2 = sub_4e8000(
            sub_4e8000(sub_4e8000(eax_81, data_1b8a730, data_1b8a72c, edx_47, &data_704898), 
                data_1b8a744, data_1b8a740, edi_5, &data_704898), 
            data_1b8a758, data_1b8a754, esi_7, &data_704898)
        goto label_531ae4
    case 0x18
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "%%%", &data_1b8a720)
        eax_81 = data_1392d58
        goto label_531f8a
    case 0x19
        eax_2 = sub_4e8000(
            sub_4e8000(sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720), 
                data_1b8a730, data_1b8a72c, data_131d2cc, &data_704898), 
            data_1b8a744, data_1b8a740, data_1320e58, &data_704898)
    label_531ae4:
        
        if (data_1af174c != 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_2
        
        data_71929c = 1
        data_7192a0 = 0
        data_7192e0 = 0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2
    case 0x1a
        data_1392cc8 = 1
        goto label_531ae4
    case 0x1b
        int32_t eax_86 = data_1c05194
        data_715e98 = eax_86
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_86
    case 0x1c
        int32_t eax_87 = data_1c05190
        data_715e98 = eax_87
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_87
    case 0x1d
        eax_2 = data_1b8c884
        
        if (eax_2 == 0)
            goto label_531ad5
        
        *(arg2 + 0x20) += 1
        int32_t i = 0
        int32_t var_d0_1 = 0
        int32_t var_cc_1 = 0
        int32_t var_bc_1 = 0
        int32_t var_b8_1 = 0
        int32_t var_a8_1 = 0
        int32_t var_a4_1 = 0
        int32_t var_94_1 = 0
        int32_t var_90_1 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        int32_t var_6c_1 = 0
        int32_t var_68_1 = 0
        int32_t var_58_1 = 0
        int32_t var_54_1 = 0
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        
        if (eax_2 s> 0)
            do
                sub_4ef440(&var_d4, arg2 + 0x20, *(arg2 + 0x20), "$@", &var_d4)
                sub_4452b0(var_d4)
                sub_4eef40(&var_d4, 0xa)
                eax_2 = *(arg2 + 0x20)
                
                while (true)
                    char ecx_141 = *eax_2
                    
                    if (ecx_141 != 0x2c && ecx_141 != 0x20)
                        break
                    
                    eax_2 += 1
                
                i += 1
                *(arg2 + 0x20) = eax_2
            while (i s< data_1b8c884)
        
        *(arg2 + 0x20) += 1
        goto label_531ada
    case 0x1e
        int32_t var_d0_2 = 0
        int32_t var_cc_2 = 0
        int32_t eax_89
        eax_89.b = ecx != 0x97
        int32_t var_bc_2 = 0
        int32_t var_b8_2 = 0
        int32_t var_a8_2 = 0
        int32_t var_a4_2 = 0
        int32_t var_94_2 = 0
        int32_t var_90_2 = 0
        int32_t var_80_2 = 0
        int32_t var_7c_2 = 0
        int32_t var_6c_2 = 0
        int32_t var_68_2 = 0
        int32_t var_58_2 = 0
        int32_t var_54_2 = 0
        int32_t var_44_2 = 0
        int32_t var_40_2 = 0
        int32_t var_30_2 = 0
        int32_t var_2c_2 = 0
        int32_t var_1c_2 = 0
        int32_t var_18_2 = 0
        sub_4ef190(eax_89, arg2 + 0x20, *(arg2 + 0x20), "%@", &data_1b8a720)
        eax_2 = data_1b8c884
        
        if (eax_2 != 0)
            int32_t i_1 = 0
            int32_t var_d8_1 = data_1b8a730
            
            if (eax_2 s> 0)
                do
                    sub_4ef440(&var_d4, arg2 + 0x20, *(arg2 + 0x20), "$@", &var_d4)
                    int32_t ecx_146 = var_d4
                    uint32_t eax_91
                    
                    if (ecx_146 s< 0)
                        eax_91 = 0
                    else
                        eax_91 = sub_445400(ecx_146, eax_89)
                    
                    sub_4e8000(eax_91, var_d8_1, data_1b8a72c, eax_91, &data_704898)
                    var_d8_1 += 1
                    sub_4eef40(&var_d4, 0xa)
                    eax_2 = *(arg2 + 0x20)
                    
                    while (true)
                        char ecx_149 = *eax_2
                        
                        if (ecx_149 != 0x2c && ecx_149 != 0x20)
                            break
                        
                        eax_2 += 1
                    
                    i_1 += 1
                    *(arg2 + 0x20) = eax_2
                while (i_1 s< data_1b8c884)
            
            *(arg2 + 0x20) += 1
        else
            eax_2 = sub_445460(eax_2, data_1b8a730, data_1b8a72c, eax_89)
            *(arg2 + 0x20) += 1
        
        goto label_531ae4
    case 0x1f
        HWND eax_93 = sub_45e8e0(
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), data_1b8a734, 
            data_1b8a720, data_1b8a748, data_1b8a75c)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_93
    case 0x20
        BOOL eax_94 = sub_45e940()
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_94
    case 0x21
        data_7037cc = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2
    case 0x22
        data_7037cc = 0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2
    case 0x23
        if (data_1b8a6e8 == 0)
            int32_t var_e8_9 = ecx
            int32_t eax_95 = sub_530c80(6)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_95
    case 0x24
        if (ecx == 0x65)
            sub_445260()
        
        if (data_1b8a6e8 == 0)
            int32_t var_e8_10 = ecx
            int32_t eax_96 = sub_530c80(0xa)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_96
        
        data_715e98 = 0
    case 0x25
        int32_t var_e8_11 = ecx
        int32_t eax_97 = sub_530c80(7)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_97
    case 0x26
        if (ecx == 0x68)
            sub_445260()
        
        int32_t var_e8_12 = ecx
        int32_t eax_98 = sub_530c80(0xb)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_98
    case 0x27
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_99 = data_1b8a720
        
        if (eax_99 != 0)
            eax_99 = 1
        
        data_1b8a720 = eax_99
        data_703690.d = eax_99
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_99
    case 0x28
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_100 = sub_542a00(data_1b8a720)
        data_703690:4 = eax_100
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_100
    case 0x29
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_101 = sub_542a70(data_1b8a720)
        data_703690:8 = eax_101
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_101
    case 0x2a
        int32_t eax_102 = data_703690.d
        data_715e98 = eax_102
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_102
    case 0x2b
        int32_t eax_103 = data_703690:4
        data_715e98 = eax_103
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_103
    case 0x2c
        int32_t eax_104 = data_703690:8
        data_715e98 = eax_104
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_104
    case 0x2d
        goto label_5325b0

data_1af178c = 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2

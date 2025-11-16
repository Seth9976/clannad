// 函数: sub_538430
// 地址: 0x538430
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char** eax_3 = data_1bfdd30 - 0x514
int32_t var_114[0x10]
int32_t var_d4
int32_t ecx_2
void* edx_1

switch (eax_3)
    case nullptr
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        ecx_2 = data_1b8a720
        
        if (ecx_2 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        edx_1 = ecx_2 + &data_132a150
    label_53849e:
        int32_t eax_5 = ecx_2 << 5
        int32_t eax_6 = sub_4a4620(eax_5, edx_1 + eax_5, data_1b8a744, data_1b8a740)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_6
    case 1
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        int32_t ecx_8 = data_1b8a720
        
        if (ecx_8 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        int32_t eax_7 = sub_462760(ecx_8, data_1b8a73c)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_7
    case 2
        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        eax_3 = data_1b8a720
        
        if (eax_3 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        void* ecx_15 = eax_3 * 0x21
        sub_548aa0(ecx_15 + &data_132a150, data_1b8a73c, 0, ecx_15 + &data_132a150, 
            ecx_15 + &data_12f97cc)
        int32_t eax_12
        int32_t edx_7
        edx_7:eax_12 = sx.q(data_108f650 - 1)
        sub_548af0(1, (eax_12 - edx_7) s>> 1)
        int32_t ecx_16 = data_1b8a720
        int32_t eax_16 = ecx_16 << 5
        int32_t eax_17 =
            sub_4cfdf0(eax_16, &data_20c1be8, ecx_16 + &data_132a150 + eax_16, data_108f650)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_17
    case 3
        *(arg2 + 0x20) += 1
        int32_t ecx_21 = data_1b8c884
        int32_t edi_1 = 0
        int32_t var_d0_1 = 0
        int32_t var_cc_1 = 0
        int32_t var_bc_1 = 0
        char* var_b8_1 = nullptr
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
        char** var_118_1 = nullptr
        
        if (ecx_21 s> 0)
            do
                sub_4ef190(&var_d4, arg2 + 0x20, *(arg2 + 0x20), "$S", &var_d4)
                int32_t eax_19 = var_d4
                
                if (eax_19 s< 0x2be && edi_1 s< 0x10)
                    int32_t ecx_25 = eax_19 * 0x21
                    var_114[edi_1] = eax_19
                    sub_548aa0(ecx_25 + &data_132a150, var_b8_1, edi_1, ecx_25 + &data_132a150, 
                        ecx_25 + &data_12f97cc)
                    edi_1 += 1
                
                sub_4eef40(&var_d4, 0xa)
                char* eax_22 = *(arg2 + 0x20)
                
                while (true)
                    char ecx_28 = *eax_22
                    
                    if (ecx_28 != 0x2c && ecx_28 != 0x20)
                        break
                    
                    eax_22 = &eax_22[1]
                
                ecx_21 = data_1b8c884
                *(arg2 + 0x20) = eax_22
                eax_3 = var_118_1 + 1
                var_118_1 = eax_3
            while (eax_3 s< ecx_21)
        
        *(arg2 + 0x20) += 1
        
        if (edi_1 != 0)
            int32_t eax_26
            int32_t edx_11
            edx_11:eax_26 = sx.q(data_108f650 - 1)
            int32_t ecx_29
            eax_3, ecx_29 = sub_548af0(ecx_21, (eax_26 - edx_11) s>> 1)
            int32_t esi_2 = 0
            
            if (edi_1 s> 0)
                char* edx_13 = &data_20c1be8
                char* var_118_2 = &data_20c1be8
                
                do
                    if (esi_2 s< 0x10)
                        int32_t ecx_31 = var_114[esi_2]
                        int32_t eax_30 = ecx_31 << 5
                        eax_3 = sub_4cfdf0(eax_30, edx_13, ecx_31 + &data_132a150 + eax_30, 
                            data_108f650)
                        edx_13 = var_118_2
                    
                    esi_2 += 1
                    edx_13 = &edx_13[0x21]
                    var_118_2 = edx_13
                while (esi_2 s< edi_1)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_3
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_3
    case 4
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        ecx_2 = data_1b8a720
        
        if (ecx_2 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        edx_1 = ecx_2 + &data_12f97cc
        goto label_53849e
    case 5
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_40 = data_1b8a720
        
        if (ecx_40 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        int32_t eax_33 = sub_462760(ecx_40, ecx_40 * 0x21 + &data_12f97cc)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_33
    case 0xa
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        ecx_2 = data_1b8a720
        
        if (ecx_2 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        edx_1 = ecx_2 + &data_710418
        goto label_53849e
    case 0xb
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        int32_t ecx_47 = data_1b8a720
        
        if (ecx_47 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        int32_t eax_34 = sub_462830(ecx_47, data_1b8a73c)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_34
    case 0xc
        sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        eax_3 = data_1b8a720
        
        if (eax_3 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        void* ecx_54 = eax_3 * 0x21
        sub_548aa0(ecx_54 + &data_710418, data_1b8a73c, 0, ecx_54 + &data_710418, 
            ecx_54 + &data_12e81c8)
        int32_t eax_39
        int32_t edx_23
        edx_23:eax_39 = sx.q(data_108f650 - 1)
        sub_548af0(1, (eax_39 - edx_23) s>> 1)
        int32_t ecx_55 = data_1b8a720
        int32_t eax_43 = ecx_55 << 5
        int32_t eax_44 =
            sub_4cfdf0(eax_43, &data_20c1be8, ecx_55 + &data_710418 + eax_43, data_108f650)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_44
    case 0xd
        *(arg2 + 0x20) += 1
        int32_t ecx_60 = data_1b8c884
        int32_t edi_2 = 0
        int32_t var_d0_2 = 0
        int32_t var_cc_2 = 0
        int32_t var_bc_2 = 0
        char* var_b8_2 = nullptr
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
        char** var_118_3 = nullptr
        
        if (ecx_60 s> 0)
            do
                sub_4ef190(&var_d4, arg2 + 0x20, *(arg2 + 0x20), "$S", &var_d4)
                int32_t eax_46 = var_d4
                
                if (eax_46 s< 0x2be && edi_2 s< 0x10)
                    int32_t ecx_64 = eax_46 * 0x21
                    var_114[edi_2] = eax_46
                    sub_548aa0(ecx_64 + &data_710418, var_b8_2, edi_2, ecx_64 + &data_710418, 
                        ecx_64 + &data_12e81c8)
                    edi_2 += 1
                
                sub_4eef40(&var_d4, 0xa)
                char* eax_49 = *(arg2 + 0x20)
                
                while (true)
                    char ecx_67 = *eax_49
                    
                    if (ecx_67 != 0x2c && ecx_67 != 0x20)
                        break
                    
                    eax_49 = &eax_49[1]
                
                ecx_60 = data_1b8c884
                *(arg2 + 0x20) = eax_49
                eax_3 = var_118_3 + 1
                var_118_3 = eax_3
            while (eax_3 s< ecx_60)
        
        *(arg2 + 0x20) += 1
        
        if (edi_2 != 0)
            int32_t eax_53
            int32_t edx_27
            edx_27:eax_53 = sx.q(data_108f650 - 1)
            int32_t ecx_68
            eax_3, ecx_68 = sub_548af0(ecx_60, (eax_53 - edx_27) s>> 1)
            int32_t esi_4 = 0
            
            if (edi_2 s> 0)
                void* edx_29 = &data_20c1be8
                void* var_118_4 = &data_20c1be8
                
                do
                    if (esi_4 s< 0x10)
                        int32_t ecx_70 = var_114[esi_4]
                        int32_t eax_57 = ecx_70 << 5
                        eax_3 =
                            sub_4cfdf0(eax_57, edx_29, ecx_70 + &data_710418 + eax_57, data_108f650)
                        edx_29 = var_118_4
                    
                    esi_4 += 1
                    edx_29 += 0x21
                    var_118_4 = edx_29
                while (esi_4 s< edi_2)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_3
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_3
    case 0xe
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        ecx_2 = data_1b8a720
        
        if (ecx_2 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        edx_1 = ecx_2 + &data_12e81c8
        goto label_53849e
    case 0xf
        eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_79 = data_1b8a720
        
        if (ecx_79 s>= 0x2be)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
        
        int32_t eax_60 = sub_462830(ecx_79, ecx_79 * 0x21 + &data_12e81c8)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_60
    case 0x14
        int32_t eax_63
        int32_t edx_34
        edx_34:eax_63 = sx.q(data_108f650 - 1)
        int32_t eax_65 = (eax_63 - edx_34) s>> 1
        data_715e98 = eax_65
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_65
    default
        data_1b8b06c = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_3

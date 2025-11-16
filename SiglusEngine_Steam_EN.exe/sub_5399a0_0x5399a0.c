// 函数: sub_5399a0
// 地址: 0x5399a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t i_2 = data_1bfdd30 - 0x5dc

if (i_2 u> 0x15)
label_539dc0:
    data_1b8b06c = 1
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return i_2

i_2 = zx.d(lookup_table_539e14[i_2])
int32_t var_90

switch (i_2)
    case 0
        int32_t eax_3 = data_1321eb8
        data_715e98 = eax_3
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_3
    case 1
        int32_t eax_4 = sub_418f40(arg1)
        data_715e98 = eax_4
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_4
    case 2
        int32_t esi_1 = data_1321eb8
        int32_t eax_5 = sub_418f40(arg1)
        
        if (esi_1 == 0)
            data_715e98 = 0x64
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0x64
        
        int32_t temp0 = divs.dp.d(sx.q(eax_5 * 0x64), esi_1)
        data_715e98 = temp0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return temp0
    case 3
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        char* eax_9 = sub_4190e0(data_1b8a728)
        
        if (eax_9 == 0)
            int32_t eax_10 = 0xffffffff
            data_715e98 = eax_10
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_10
        
        int32_t eax_11 = *(eax_9 + 0x20)
        data_715e98 = eax_11
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_11
    case 4
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        char* eax_12 = sub_419920(data_1b8a728, &var_90)
        int32_t ecx_18 = 0xffffffff
        
        if (eax_12 != 0)
            ecx_18 = var_90
        
        data_715e98 = ecx_18
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_12
    case 5
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        int32_t eax_13 = sub_419520(data_1b8a728, 1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_13
    case 6
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        int32_t eax_14 = sub_419520(data_1b8a728, 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_14
    case 7
        int32_t eax_15 = sub_4194b0(1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_15
    case 8
        int32_t eax_16 = sub_4194b0(0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_16
    case 9
        int32_t eax_17 = data_1af4e84
        
        if (eax_17 == 0)
            int32_t* var_b8_2 = &data_1b8a720
            i_2 = sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), "$&%", &data_1b8a720)
        else
            i_2 = eax_17 - 1
            
            if (eax_17 == 1)
                int32_t* var_b8_1 = &data_1b8a720
                i_2 = sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), "$&%%", &data_1b8a720)
        
        uint32_t i_3 = data_1b8a720
        
        if (i_3 s> 0)
            int32_t* eax_18 = data_1b8a740
            int32_t edi_1 = 0
            int32_t ecx_37 = data_1b8a744
            int32_t eax_19 = data_1b8a754
            int32_t var_98_1 = ecx_37
            int32_t var_94_1 = data_1b8a758
            int32_t var_a0_1 = 0
            
            if (data_1af4e84 == 1)
                edi_1 = data_1b8a76c
                var_a0_1 = data_1b8a768
            
            i_2 = data_1321eb8
            char* esi_2 = data_1321ec0
            
            if (i_3 s< i_2)
                i_2 = i_3
            
            uint32_t i_1 = i_2
            
            if (i_2 s> 0)
                uint32_t i
                
                do
                    sub_4a4620(i_2, esi_2, ecx_37, eax_18)
                    int32_t ecx_38 = 0
                    
                    if (data_12dc4bc != 0)
                        ecx_38 = 0x1a
                    
                    int32_t eax_23 =
                        sub_4e76e0(&var_90, *(esi_2 + 0x20), ecx_38 + 0x19, &var_90, &data_704898)
                    int32_t eax_24 = neg.d(eax_23)
                    int32_t eax_26 = sbb.d(eax_24, eax_24, eax_23 != 0) & var_90
                    var_90 = eax_26
                    i_2 = sub_4e8000(eax_26, var_94_1, eax_19, eax_26, &data_704898)
                    
                    if (data_1af4e84 == 1)
                        i_2 = sub_4e8000(i_2, edi_1, var_a0_1, *(esi_2 + 0x20), &data_704898)
                    
                    edi_1 += 1
                    var_94_1 += 1
                    ecx_37 = var_98_1 + 1
                    esi_2 = &esi_2[0x3c]
                    var_98_1 = ecx_37
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return i_2
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return i_2
    case 0xa
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        char var_8c[0x84]
        int32_t eax_27 = sub_419b20(data_1b8a720, &var_8c)
        int32_t ecx_48 = data_1b8a744
        data_715e98 = eax_27
        int32_t* var_b8_4 = data_1b8a740
        
        if (eax_27 == 0)
            int32_t eax_29 = sub_4a4620(eax_27, nullptr, ecx_48, var_b8_4)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_29
        
        int32_t eax_28 = sub_4a4620(eax_27, &var_8c, ecx_48, var_b8_4)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_28
    case 0xb
        data_7037e8 = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return i_2
    case 0xc
        data_7037e8 = 0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return i_2
    case 0xd
        goto label_539dc0

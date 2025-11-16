// 函数: sub_52d870
// 地址: 0x52d870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
uint32_t eax = data_1bfdd30

if (eax s<= 0x12c)
    if (eax == 0x12c)
        return sub_52b710(eax, arg2, arg1, 1)
    
    eax -= 3
    
    if (eax u<= 0xcf)
        eax = zx.d(lookup_table_52de70[eax])
        
        switch (eax)
            case 0
                return sub_52ba00(arg1)
            case 1
                return sub_52bec0(eax, arg2, arg1, nullptr)
            case 2
                return sub_52c390(arg1, arg2)
            case 3
                return sub_52c640(arg1, arg2)
            case 4
                return sub_52c710(arg1, arg2)
            case 5
                data_703670 = 1
                return eax
            case 6
                data_703670 = 0
                data_71929c = 5
                data_7192a0 = 0
                data_7192e0 = 0
                return eax
            case 7
                return sub_52c540(arg1, arg2)
            case 8
                return sub_52c490(arg1, arg2)
            case 9
                return sub_52c6c0(arg1, arg2)
            case 0xa
                return sub_52d300(arg1, arg2)
            case 0xb
                data_70368c = 1
                return eax
            case 0xc
                data_70368c = 0
                data_71929c = 5
                data_7192a0 = 0
                data_7192e0 = 0
                return eax
            case 0xd
                int32_t eax_12 = *(arg1 + 0x13b3c)
                data_715e98 = eax_12
                return eax_12
            case 0xe
                return sub_461dd0(arg1 + 0x13b40, *(arg1 + 0x13b3c), &data_1b14e60, arg2[8], 
                    &arg2[8], arg1 + 0x13b40)
            case 0xf
                return sub_52d2a0(arg1, arg2)
            case 0x10
                return sub_52c7c0(arg1, arg2)
            case 0x11
                return sub_52cc00(arg1, arg2)
            case 0x12
                return sub_52cfe0()
            case 0x13
                return sub_52d170()
            case 0x14
                arg2.b = 1
                arg1.b = 0
                sub_57fcf0(arg1, arg2.b)
                void* eax_20 = &data_f90c00
                int32_t i_1 = 0x10
                int32_t i
                
                do
                    *(eax_20 - 0x3920) = 0
                    eax_20 += 0xe480
                    *(eax_20 - 0xe480) = 0
                    *(eax_20 - 0xab60) = 0
                    *(eax_20 - 0x7240) = 0
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                data_71929c = 5
                data_7192a0 = i_1
                data_7192e0 = i_1
                return eax_20
            case 0x15
                return sub_52bc10(arg1)
            case 0x16
                return sub_52bec0(eax, arg2, arg1, 1)
else if (eax s> 0x3e8)
    if (eax == 0x3e9)
        return sub_52d6e0(arg1, arg2)
    
    if (eax == 0x7d0)
        return sub_52d830(arg1, arg2)
else
    if (eax == 0x3e8)
        return sub_52d580(arg1, arg2)
    
    eax -= 0x12d
    
    if (eax u<= 0xd0)
        eax = zx.d(lookup_table_52df98[eax])
        char** eax_29
        
        switch (eax)
            case 0
                return sub_52b710(eax, arg2, arg1, 0)
            case 1
                return sub_52b7e0(arg1, arg2)
            case 2
                return sub_52d430(arg1, arg2)
            case 3
                return sub_52d520(arg1, arg2)
            case 4
                int32_t eax_26 = sub_580530()
                data_715e98 = eax_26
                return eax_26
            case 5
                int32_t eax_27 = data_1af4e84
                
                if (eax_27 == 0)
                    eax_29, arg1 = sub_4ef190(eax_27, &arg2[8], arg2[8], U"$", &data_1b8a720)
                else
                    eax_29 = eax_27 - 1
                    
                    if (eax_27 == 1)
                        data_1b8a720 = eax_29
                
                if (data_1311178 == 0)
                    arg1.b = 1
                    int32_t eax_33
                    int80_t st0
                    st0, eax_33 = sub_4a6f60(eax_29, 1, arg1.b, data_1b8a720)
                    return eax_33
                
                if (data_702fc0 == 0)
                    return eax_29
                
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_29, data_72d6ac, data_719b6c, 0x61f458, 0x61f42c), 
                        data_72d6ac, data_719b6c, 0x61f458, 0x61f42c), 
                    data_72d6ac, data_719b6c, 0x61f458, 0x61f42c)
                return sub_4a1e40(3)
            case 6
                int32_t eax_34 = data_1af4e84
                
                if (eax_34 == 0)
                    eax_29, arg1 = sub_4ef190(eax_34, &arg2[8], arg2[8], U"$", &data_1b8a720)
                else
                    eax_29 = eax_34 - 1
                    
                    if (eax_34 == 1)
                        data_1b8a720 = eax_29
                
                if (data_1311178 == 0)
                    arg1.b = 0
                    int32_t eax_39
                    int80_t st0_1
                    st0_1, eax_39 = sub_4a6f60(eax_29, 1, arg1.b, data_1b8a720)
                    return eax_39
                
                if (data_702fc0 == 0)
                    return eax_29
                
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_29, data_72d6ac, data_719b6c, 0x61f4a0, 0x61f470), 
                        data_72d6ac, data_719b6c, 0x61f4a0, 0x61f470), 
                    data_72d6ac, data_719b6c, 0x61f4a0, 0x61f470)
                return sub_4a1e40(3)
            case 7
                int32_t eax_40 = data_1313290
                data_715e98 = eax_40
                return eax_40
            case 8
                sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
                return sub_45b6b0(data_1b8a720)
            case 9
                int32_t eax_42 = data_907ee0
                data_715e98 = eax_42
                return eax_42
            case 0xa
                sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
                eax_29 = data_1b8a720
                
                if (eax_29 u> 7)
                    return eax_29
                
                data_907ee0 = eax_29
                return eax_29
            case 0xb
                int32_t eax_43 = data_907edc
                data_715e98 = eax_43
                return eax_43
            case 0xc
                data_907edc = 0
                return eax
            case 0xd
                data_907edc = 1
                return eax
            case 0xe
                sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
                int32_t eax_44
                eax_44.b = data_1b8a720 != 0
                data_907edc = eax_44
                return eax_44
            case 0xf
                int32_t eax_45 = data_907ef8
                data_715e98 = eax_45
                return eax_45
            case 0x10
                sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
                eax_29 = data_1b8a720
                
                if (eax_29 u> 7)
                    return eax_29
                
                data_907ef8 = eax_29
                return eax_29
            case 0x11
                int32_t eax_46 = data_907ef4
                data_715e98 = eax_46
                return eax_46
            case 0x12
                data_907ef4 = 0
                return eax
            case 0x13
                data_907ef4 = 1
                return eax
            case 0x14
                sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
                int32_t eax_47
                eax_47.b = data_1b8a720 != 0
                data_907ef4 = eax_47
                return eax_47

data_1b8b06c = 1
return eax

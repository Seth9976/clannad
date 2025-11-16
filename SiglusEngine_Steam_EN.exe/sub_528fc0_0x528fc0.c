// 函数: sub_528fc0
// 地址: 0x528fc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1bfdd30
uint32_t eax

if (ecx s> 0x3e8)
    if (ecx == 0x3e9)
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        sub_4a1a60(0xfffffffd, 0)
        sub_482a80(data_1b8a720)
        return 
    
    if (ecx != 0x3ea)
        data_1b8b06c = 1
        return 
    
    sub_4a1a60(0xfffffffd, 0)
    sub_482ad0()
    return 

if (ecx == 0x3e8)
    sub_4ef190(eax, &arg2[8], arg2[8], "$S", &data_1b8a720)
    sub_4a1a60(0xfffffffd, 0)
    sub_482b30(data_1b8a720, data_1b8a73c)
    return 

if (ecx u> 0xcb)
    data_1b8b06c = 1
    return 

eax = zx.d(lookup_table_529a54[ecx])
char** eax_4

switch (eax)
    case 0
        int32_t eax_1 = data_1af4e84
        
        if (eax_1 == 0)
            sub_4a1640(sub_4ef190(eax_1, &arg2[8], arg2[8], SMDB", &data_1b8a720), data_1b8a728, 
                0xffffffff, 1, 0, 0)
            return 
        
        char* ecx_3
        
        if (eax_1 == 1)
            eax_4 = sub_4ef190(eax_1 - 1, &arg2[8], arg2[8], "S$", &data_1b8a720)
            ecx_3 = data_1b8a734
            
            if (ecx_3 u<= 0xf)
                int32_t var_10_2 = 0
                sub_4a1640(eax_4, data_1b8a728, ecx_3, 1, 0, 0)
        else if (eax_1 == 2)
            eax_4 = sub_4ef190(eax_1 - 2, &arg2[8], arg2[8], "S$$", &data_1b8a720)
            ecx_3 = data_1b8a734
            
            if (ecx_3 u<= 0xf)
                int32_t var_10_1 = 0
                sub_4a1640(eax_4, data_1b8a728, ecx_3, 1, data_1b8a748, 0)
        return 
    case 1
        int32_t esi_1 = 0
        
        if (ecx == 0xc9)
            sub_445260()
            esi_1 = 1
        
        int32_t eax_8 = data_1af4e84
        char* ecx_10
        
        if (eax_8 == 0)
            eax_4 = sub_4ef190(eax_8, &arg2[8], arg2[8], "S$", &data_1b8a720)
            ecx_10 = data_1b8a734
            
            if (ecx_10 u<= 0xf)
                int32_t var_10_4 = 0
                sub_48ceb0(sub_4a1640(eax_4, data_1b8a728, ecx_10, 1, 0, 0), data_1b8a734, 0x3c, 
                    esi_1)
        else if (eax_8 == 1)
            eax_4 = sub_4ef190(eax_8 - 1, &arg2[8], arg2[8], "S$$", &data_1b8a720)
            ecx_10 = data_1b8a734
            
            if (ecx_10 u<= 0xf)
                int32_t var_10_3 = 0
                sub_48ceb0(sub_4a1640(eax_4, data_1b8a728, ecx_10, 1, data_1b8a748, 0), 
                    data_1b8a734, 0x3c, esi_1)
        return 
    case 2
        int32_t eax_12 = data_1af4e84
        char* ecx_15
        
        if (eax_12 == 0)
            eax_4 = sub_4ef190(eax_12, &arg2[8], arg2[8], "S$", &data_1b8a720)
            ecx_15 = data_1b8a734
            
            if (ecx_15 u<= 0xf)
                int32_t var_10_7 = 0
                sub_4a1640(eax_4, data_1b8a728, ecx_15, nullptr, 0, 0)
        else if (eax_12 == 1)
            eax_4 = sub_4ef190(eax_12 - 1, &arg2[8], arg2[8], "S$$", &data_1b8a720)
            ecx_15 = data_1b8a734
            
            if (ecx_15 u<= 0xf)
                int32_t var_10_6 = 0
                sub_4a1640(eax_4, data_1b8a728, ecx_15, nullptr, data_1b8a748, 0)
        return 
    case 3
        int32_t esi_2 = 0
        
        if (ecx == 0xcb)
            sub_445260()
            esi_2 = 1
        
        eax_4 = sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        int32_t edx_13 = data_1b8a720
        
        if (edx_13 u> 0xf)
            return 
        
        sub_48ceb0(eax_4, edx_13, 0x3c, esi_2)
        return 
    case 4
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        
        if (sub_4a1a00(data_1b8a720) == 0)
            data_715e98 = 0
            return 
        
        int32_t eax_17 = sub_4a1b60(data_1b8a720)
        int32_t eax_18 = neg.d(eax_17)
        data_715e98 = sbb.d(eax_18, eax_18, eax_17 != 0) + 1
        return 
    case 5
        int32_t eax_21 = data_1af4e84
        
        if (eax_21 != 0)
            if (eax_21 != 1)
                return 
            
            sub_4a1a60(0xfffffffd, 0)
            return 
        
        sub_4ef190(eax_21, &arg2[8], arg2[8], U"$", &data_1b8a720)
        int32_t ecx_26 = data_1b8a720
        
        if (ecx_26 u> 0xf)
            return 
        
        sub_4a1a60(ecx_26, 0)
        return 
    case 6
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        
        if (sub_4a1a00(data_1b8a720) == 0)
            data_715e98 = 0
            return 
        
        int32_t eax_30 = sub_4a1b60(data_1b8a720)
        int32_t eax_31 = neg.d(eax_30)
        data_715e98 = neg.d(sbb.d(eax_31, eax_31, eax_30 != 0)) + 1
        return 
    case 7
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        int32_t ecx_42 = data_1b8a720
        
        if (ecx_42 == 0xffffffff || ecx_42 u> 0xf)
            return 
        
        char* eax_35 = sub_4a15e0(ecx_42)
        sub_49e870(eax_35, ecx_42 + 0x20, ecx_42 * 0x788 + 0x92b978, eax_35)
        return 
    case 8
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        eax_4 = data_1b8a720
        
        if (eax_4 == 0xffffffff || eax_4 u> 0xf)
            return 
        
        sub_49e9f0(eax_4 * 0x788 + 0x92b978, &eax_4[8])
        return 
    case 9
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        int32_t ecx_51 = data_1b8a720
        
        if (ecx_51 == 0xffffffff || ecx_51 u> 0xf)
            return 
        
        char* eax_38 = sub_4a15e0(ecx_51)
        sub_49ea60(eax_38, ecx_51 + 0x20, ecx_51 * 0x788 + 0x92b978, eax_38)
        return 
    case 0xa
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        int32_t eax_40 = data_1b8a720
        
        if (eax_40 != 0xffffffff && eax_40 u<= 0xf)
            data_715e98 = *(eax_40 * 0x788 + &data_92c0f8)
            return 
        
        data_715e98 = 0
        return 
    case 0xb
        int32_t eax_43 = data_1af4e84
        
        if (eax_43 == 0)
            sub_4a1b90(sub_4ef190(eax_43, &arg2[8], arg2[8], "$$", &data_1b8a720), data_1b8a734, 
                data_1b8a720, 0)
            return 
        
        if (eax_43 != 1)
            return 
        
        sub_4a1b90(sub_4ef190(eax_43 - 1, &arg2[8], arg2[8], "$$$", &data_1b8a720), data_1b8a734, 
            data_1b8a720, data_1b8a748)
        return 
    case 0xc
        int32_t eax_49 = data_1af4e84
        
        if (eax_49 == 0)
            sub_4a1b90(sub_4ef190(eax_49, &arg2[8], arg2[8], $", &data_1b8a720), 0xff, 
                data_1b8a720, 0)
            return 
        
        if (eax_49 != 1)
            return 
        
        sub_4a1b90(sub_4ef190(eax_49 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720), 0xff, 
            data_1b8a720, data_1b8a734)
        return 
    case 0xd
        int32_t eax_55 = data_1af4e84
        
        if (eax_55 == 0)
            sub_4a1b90(sub_4ef190(eax_55, &arg2[8], arg2[8], $", &data_1b8a720), 0, data_1b8a720, 0)
            return 
        
        if (eax_55 != 1)
            return 
        
        sub_4a1b90(sub_4ef190(eax_55 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720), 0, data_1b8a720, 
            data_1b8a734)
        return 
    case 0xe
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        sub_4a1a30(data_1b8a720, 0xffffffff)
        return 
    case 0xf
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        sub_4a1a30(data_1b8a720, 0)
        return 
    case 0x10
        sub_4a1a60(0xfffffffd, 0)
        return 
    case 0x11
        int32_t edi = 0
        
        for (int32_t i = 0x92b978; i s< 0x9331f8; )
            eax = sub_49e720(eax, edi + 0x20, i, 0)
            i += 0x788
            edi += 1
        
        return 
    case 0x12
        sub_4c3010(ecx, 0)
        return 
    case 0x13
        int32_t eax_64 = data_1af4e84
        
        if (eax_64 == 0)
            char** eax_67 = sub_4ef190(eax_64, &arg2[8], arg2[8], U"$", &data_1b8a720)
            
            for (int32_t i_1 = 0; i_1 s< 0x10; i_1 += 1)
                eax_67 = sub_4a1b90(eax_67, data_1b8a720, i_1, 0)
            
            return 
        
        if (eax_64 != 1)
            return 
        
        char** eax_66 = sub_4ef190(eax_64 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
        
        for (int32_t i_2 = 0; i_2 s< 0x10; i_2 += 1)
            eax_66 = sub_4a1b90(eax_66, data_1b8a720, i_2, data_1b8a734)
        
        return 
    case 0x14
        int32_t eax_68 = data_1af4e84
        
        if (eax_68 == 0)
            char** eax_70 = sub_4ef190(eax_68, &arg2[8], arg2[8], U"$", &data_1b8a720)
            
            for (int32_t i_3 = 0; i_3 s< 0x10; i_3 += 1)
                eax_70 = sub_4a1b90(eax_70, 0xff, i_3, data_1b8a720)
            
            return 
        
        eax_4 = eax_68 - 1
        
        if (eax_68 != 1)
            return 
        
        for (int32_t i_4 = 0; i_4 s< 0x10; i_4 += 1)
            eax_4 = sub_4a1b90(eax_4, 0xff, i_4, 0)
        
        return 
    case 0x15
        int32_t eax_71 = data_1af4e84
        
        if (eax_71 == 0)
            char** eax_73 = sub_4ef190(eax_71, &arg2[8], arg2[8], U"$", &data_1b8a720)
            
            for (int32_t i_5 = 0; i_5 s< 0x10; i_5 += 1)
                eax_73 = sub_4a1b90(eax_73, 0, i_5, data_1b8a720)
            
            return 
        
        eax_4 = eax_71 - 1
        
        if (eax_71 != 1)
            return 
        
        for (int32_t i_6 = 0; i_6 s< 0x10; i_6 += 1)
            eax_4 = sub_4a1b90(eax_4, 0, i_6, 0)
        
        return 
    case 0x16
        sub_528d00(ecx, arg2)
        return 
    case 0x17
        sub_4ef190(eax, &arg2[8], arg2[8], "$$", &data_1b8a720)
        sub_4826b0(data_1b8a720, data_1b8a734)
        return 
    case 0x18
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        sub_4826f0(data_1b8a720)
        return 
    case 0x19
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        data_715e98 = sub_482780(data_1b8a720)
        return 
    case 0x1a
        sub_4ef190(eax, &arg2[8], arg2[8], U"$", &data_1b8a720)
        sub_4827a0(data_1b8a720)
        return 
    case 0x1b
        sub_4ef190(eax, &arg2[8], arg2[8], "$$", &data_1b8a720)
        int32_t ecx_29 = data_1b8a720
        
        if (ecx_29 u> 0xf)
            return 
        
        sub_4a1a60(ecx_29, data_1b8a734)
        return 
    case 0x1c
        int32_t eax_26 = data_1af4e84
        
        if (eax_26 == 0)
            sub_4ef190(eax_26, &arg2[8], arg2[8], U"$", &data_1b8a720)
            int32_t esi_3 = data_1b8a720
            
            if (esi_3 u> 0xf)
                return 
            
            if (data_1b1bcd8 != 0)
                sub_4a1a60(esi_3, 0)
                return 
            
            if (sub_4a1b60(esi_3) == 0)
                sub_4a1a60(esi_3, 0)
                return 
            
            sub_48ce80(0x3d, esi_3)
            return 
        
        if (eax_26 == 1)
            sub_4ef190(eax_26 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
            int32_t ecx_32 = data_1b8a720
            
            if (ecx_32 u<= 0xf)
                int32_t edx_19 = data_1b8a734
                
                if (data_1b1bcd8 != 0)
                    edx_19 = 0
                
                data_1b8a734 = edx_19
                sub_4a1a60(ecx_32, edx_19)
                
                if (data_1b8a734 s> 0)
                    sub_48ce80(0x3d, data_1b8a720)
        
        return 
    case 0x1d
        data_1b8b06c = 1
        return 

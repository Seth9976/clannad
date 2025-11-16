// 函数: sub_58d910
// 地址: 0x58d910
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_73 = data_1c45980
int32_t ecx = data_1c05514
int32_t eax = data_1ccce7c
int32_t ecx_1 = data_1c45970

if (eax_73 == ecx)
    if (eax == ecx_1)
        char* esi = data_1ccce58
        char* edi = data_1c45554
        int32_t ecx_2 = data_1ccce84
        char eax_8
        
        while (true)
            char* var_14_1 = esi
            char* var_18_1 = edi
            int32_t i_6 = data_1c4555c
            int32_t i
            
            do
                int32_t eax_1
                eax_1.b = *esi
                char* esi_2 = data_1c45994 + (eax_1 << 2)
                int32_t eax_3
                eax_3.b = *edi
                int32_t ebx_1
                ebx_1.b = *esi_2
                *edi = eax_3.b + (*(((ebx_1 - eax_3) << 2) + data_1cd43a4)).b
                int32_t eax_5
                eax_5.b = edi[1]
                int32_t ebx_5
                ebx_5.b = esi_2[1]
                edi[1] = eax_5.b + (*(((ebx_5 - eax_5) << 2) + data_1cd43a4)).b
                int32_t eax_7
                eax_7.b = edi[2]
                int32_t ebx_9
                ebx_9.b = esi_2[2]
                eax_8 = eax_7.b + (*(((ebx_9 - eax_7) << 2) + data_1cd43a4)).b
                edi[2] = eax_8
                esi = &esi[1]
                edi = &edi[4]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp3_1 = ecx_2
            ecx_2 -= 1
            
            if (temp3_1 == 1)
                break
            
            esi = &var_14_1[data_1c45558]
            edi = &var_18_1[data_1c45520]
        
        return eax_8
    
    if (eax s< ecx_1)
        char* esi_5 = data_1ccce58
        char* edi_2 = data_1c45554
        int32_t i_7 = data_1ccce84
        int32_t ebx_13 = data_1c4552c
        char eax_16
        int32_t i_1
        
        do
            char* var_14_2 = esi_5
            char* var_18_2 = edi_2
            int32_t j_2 = data_1c4555c
            int32_t j
            
            do
                int32_t eax_9
                eax_9.b = *esi_5
                char* esi_7 = data_1c45994 + (eax_9 << 2)
                int32_t eax_11
                eax_11.b = *edi_2
                int32_t ebx_14
                ebx_14.b = *esi_7
                *edi_2 = eax_11.b + (*(((ebx_14 - eax_11) << 2) + data_1cd43a4)).b
                int32_t eax_13
                eax_13.b = edi_2[1]
                int32_t ebx_18
                ebx_18.b = esi_7[1]
                edi_2[1] = eax_13.b + (*(((ebx_18 - eax_13) << 2) + data_1cd43a4)).b
                int32_t eax_15
                eax_15.b = edi_2[2]
                int32_t ebx_22
                ebx_22.b = esi_7[2]
                eax_16 = eax_15.b + (*(((ebx_22 - eax_15) << 2) + data_1cd43a4)).b
                edi_2[2] = eax_16
                esi_5 = &esi_5[1]
                edi_2 = &edi_2[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_5 = var_14_2
            edi_2 = &var_18_2[data_1c45520]
            ebx_13 += data_1ccce7c
            
            if (ebx_13 s>= data_1c45970)
                ebx_13 -= data_1c45970
                esi_5 = &esi_5[data_1c45558]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_16
    
    char* esi_9 = data_1ccce58
    char* edi_4 = data_1c45554
    int32_t ecx_5 = data_1ccce84
    int32_t ebx_27 = data_1c4552c
    
    while (true)
        char* var_14_3 = esi_9
        char* var_18_3 = edi_4
        int32_t i_8 = data_1c4555c
        char eax_24
        int32_t i_2
        
        do
            int32_t eax_17
            eax_17.b = *esi_9
            char* esi_11 = data_1c45994 + (eax_17 << 2)
            int32_t eax_19
            eax_19.b = *edi_4
            int32_t ebx_28
            ebx_28.b = *esi_11
            *edi_4 = eax_19.b + (*(((ebx_28 - eax_19) << 2) + data_1cd43a4)).b
            int32_t eax_21
            eax_21.b = edi_4[1]
            int32_t ebx_32
            ebx_32.b = esi_11[1]
            edi_4[1] = eax_21.b + (*(((ebx_32 - eax_21) << 2) + data_1cd43a4)).b
            int32_t eax_23
            eax_23.b = edi_4[2]
            int32_t ebx_36
            ebx_36.b = esi_11[2]
            eax_24 = eax_23.b + (*(((ebx_36 - eax_23) << 2) + data_1cd43a4)).b
            edi_4[2] = eax_24
            esi_9 = &esi_9[1]
            edi_4 = &edi_4[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_40 = ebx_27
        esi_9 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_9 = &esi_9[data_1c45558]
            ebx_40 += data_1c45970
            
            if (ebx_40 s< data_1ccce7c)
                int32_t temp14_1 = ecx_6
                ecx_6 -= 1
                
                if (temp14_1 != 1)
                    continue
            else
                ebx_27 = ebx_40 - data_1ccce7c
                edi_4 = &var_18_3[data_1c45520]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_24
else if (eax_73 s< ecx)
    if (eax == ecx_1)
        char* esi_13 = data_1ccce58
        char* edi_6 = data_1c45554
        int32_t ecx_7 = data_1ccce84
        char eax_32
        
        while (true)
            char* var_14_4 = esi_13
            char* var_18_4 = edi_6
            int32_t edx_1 = data_1c4ce44
            int32_t i_9 = data_1c4555c
            int32_t i_3
            
            do
                int32_t eax_25
                eax_25.b = *esi_13
                char* esi_15 = data_1c45994 + (eax_25 << 2)
                int32_t eax_27
                eax_27.b = *edi_6
                int32_t ebx_41
                ebx_41.b = *esi_15
                *edi_6 = eax_27.b + (*(((ebx_41 - eax_27) << 2) + data_1cd43a4)).b
                int32_t eax_29
                eax_29.b = edi_6[1]
                int32_t ebx_45
                ebx_45.b = esi_15[1]
                edi_6[1] = eax_29.b + (*(((ebx_45 - eax_29) << 2) + data_1cd43a4)).b
                int32_t eax_31
                eax_31.b = edi_6[2]
                int32_t ebx_49
                ebx_49.b = esi_15[2]
                eax_32 = eax_31.b + (*(((ebx_49 - eax_31) << 2) + data_1cd43a4)).b
                edi_6[2] = eax_32
                edi_6 = &edi_6[4]
                edx_1 += data_1c45980
                
                if (edx_1 s>= data_1c05514)
                    edx_1 -= data_1c05514
                    esi_13 = &esi_13[1]
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp8_1 = ecx_7
            ecx_7 -= 1
            
            if (temp8_1 == 1)
                break
            
            esi_13 = &var_14_4[data_1c45558]
            edi_6 = &var_18_4[data_1c45520]
        
        return eax_32
    
    if (eax s< ecx_1)
        char* esi_17 = data_1ccce58
        char* edi_8 = data_1c45554
        int32_t i_10 = data_1ccce84
        int32_t ebx_53 = data_1c4552c
        char eax_40
        int32_t i_4
        
        do
            char* var_14_5 = esi_17
            char* var_18_5 = edi_8
            int32_t edx_2 = data_1c4ce44
            int32_t j_3 = data_1c4555c
            int32_t j_1
            
            do
                int32_t eax_33
                eax_33.b = *esi_17
                char* esi_19 = data_1c45994 + (eax_33 << 2)
                int32_t eax_35
                eax_35.b = *edi_8
                int32_t ebx_54
                ebx_54.b = *esi_19
                *edi_8 = eax_35.b + (*(((ebx_54 - eax_35) << 2) + data_1cd43a4)).b
                int32_t eax_37
                eax_37.b = edi_8[1]
                int32_t ebx_58
                ebx_58.b = esi_19[1]
                edi_8[1] = eax_37.b + (*(((ebx_58 - eax_37) << 2) + data_1cd43a4)).b
                int32_t eax_39
                eax_39.b = edi_8[2]
                int32_t ebx_62
                ebx_62.b = esi_19[2]
                eax_40 = eax_39.b + (*(((ebx_62 - eax_39) << 2) + data_1cd43a4)).b
                edi_8[2] = eax_40
                edi_8 = &edi_8[4]
                edx_2 += data_1c45980
                
                if (edx_2 s>= data_1c05514)
                    edx_2 -= data_1c05514
                    esi_17 = &esi_17[1]
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_17 = var_14_5
            edi_8 = &var_18_5[data_1c45520]
            ebx_53 += data_1ccce7c
            
            if (ebx_53 s>= data_1c45970)
                ebx_53 -= data_1c45970
                esi_17 = &esi_17[data_1c45558]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_40
    
    char* esi_20 = data_1ccce58
    char* edi_10 = data_1c45554
    int32_t ecx_10 = data_1ccce84
    int32_t ebx_67 = data_1c4552c
    
    while (true)
        char* var_14_6 = esi_20
        char* var_18_6 = edi_10
        int32_t edx_3 = data_1c4ce44
        int32_t i_11 = data_1c4555c
        char eax_48
        int32_t i_5
        
        do
            int32_t eax_41
            eax_41.b = *esi_20
            char* esi_22 = data_1c45994 + (eax_41 << 2)
            int32_t eax_43
            eax_43.b = *edi_10
            int32_t ebx_68
            ebx_68.b = *esi_22
            *edi_10 = eax_43.b + (*(((ebx_68 - eax_43) << 2) + data_1cd43a4)).b
            int32_t eax_45
            eax_45.b = edi_10[1]
            int32_t ebx_72
            ebx_72.b = esi_22[1]
            edi_10[1] = eax_45.b + (*(((ebx_72 - eax_45) << 2) + data_1cd43a4)).b
            int32_t eax_47
            eax_47.b = edi_10[2]
            int32_t ebx_76
            ebx_76.b = esi_22[2]
            eax_48 = eax_47.b + (*(((ebx_76 - eax_47) << 2) + data_1cd43a4)).b
            edi_10[2] = eax_48
            edi_10 = &edi_10[4]
            edx_3 += data_1c45980
            
            if (edx_3 s>= data_1c05514)
                edx_3 -= data_1c05514
                esi_20 = &esi_20[1]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_80 = ebx_67
        esi_20 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_20 = &esi_20[data_1c45558]
            ebx_80 += data_1c45970
            
            if (ebx_80 s< data_1ccce7c)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_67 = ebx_80 - data_1ccce7c
                edi_10 = &var_18_6[data_1c45520]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_48
else if (eax == ecx_1)
    char* esi_23 = data_1ccce58
    char* edi_12 = data_1c45554
    int32_t ecx_12 = data_1ccce84
    
    while (true)
        char* var_14_7 = esi_23
        char* var_18_7 = edi_12
        int32_t edx_4 = data_1c4ce44
        int32_t ecx_13 = data_1c4555c
    label_58ddf9:
        int32_t eax_49
        eax_49.b = *esi_23
        char* esi_25 = data_1c45994 + (eax_49 << 2)
        int32_t eax_51
        eax_51.b = *edi_12
        int32_t ebx_81
        ebx_81.b = *esi_25
        *edi_12 = eax_51.b + (*(((ebx_81 - eax_51) << 2) + data_1cd43a4)).b
        int32_t eax_53
        eax_53.b = edi_12[1]
        int32_t ebx_85
        ebx_85.b = esi_25[1]
        edi_12[1] = eax_53.b + (*(((ebx_85 - eax_53) << 2) + data_1cd43a4)).b
        int32_t eax_55
        eax_55.b = edi_12[2]
        int32_t ebx_89
        ebx_89.b = esi_25[2]
        char eax_56 = eax_55.b + (*(((ebx_89 - eax_55) << 2) + data_1cd43a4)).b
        edi_12[2] = eax_56
        
        while (true)
            esi_23 = &esi_23[1]
            edx_4 += data_1c05514
            
            if (edx_4 s>= data_1c45980)
                edx_4 -= data_1c45980
                edi_12 = &edi_12[4]
                int32_t temp13_1 = ecx_13
                ecx_13 -= 1
                
                if (temp13_1 == 1)
                    goto label_58de7e
                
                goto label_58ddf9
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_58de7e:
                int32_t temp12_1 = ecx_12
                ecx_12 -= 1
                
                if (temp12_1 == 1)
                    return eax_56
                
                esi_23 = &var_14_7[data_1c45558]
                edi_12 = &var_18_7[data_1c45520]
                break
else if (eax s>= ecx_1)
    char* esi_30 = data_1ccce58
    char* edi_16 = data_1c45554
    int32_t ecx_18 = data_1ccce84
    int32_t ebx_107 = data_1c4552c
    
    while (true)
        char* var_14_9 = esi_30
        char* var_18_9 = edi_16
        int32_t edx_6 = data_1c4ce44
        int32_t ecx_19 = data_1c4555c
    label_58dfa4:
        int32_t eax_65
        eax_65.b = *esi_30
        char* esi_32 = data_1c45994 + (eax_65 << 2)
        int32_t eax_67
        eax_67.b = *edi_16
        int32_t ebx_108
        ebx_108.b = *esi_32
        *edi_16 = eax_67.b + (*(((ebx_108 - eax_67) << 2) + data_1cd43a4)).b
        int32_t eax_69
        eax_69.b = edi_16[1]
        int32_t ebx_112
        ebx_112.b = esi_32[1]
        edi_16[1] = eax_69.b + (*(((ebx_112 - eax_69) << 2) + data_1cd43a4)).b
        int32_t eax_71
        eax_71.b = edi_16[2]
        int32_t ebx_116
        ebx_116.b = esi_32[2]
        char eax_72 = eax_71.b + (*(((ebx_116 - eax_71) << 2) + data_1cd43a4)).b
        edi_16[2] = eax_72
        
        while (true)
            esi_30 = &esi_30[1]
            edx_6 += data_1c05514
            
            if (edx_6 s>= data_1c45980)
                edx_6 -= data_1c45980
                edi_16 = &edi_16[4]
                int32_t temp15_1 = ecx_19
                ecx_19 -= 1
                
                if (temp15_1 == 1)
                    goto label_58e026
                
                goto label_58dfa4
            
            int32_t temp10_1 = ecx_19
            ecx_19 -= 1
            
            if (temp10_1 == 1)
            label_58e026:
                int32_t ebx_120 = ebx_107
                esi_30 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_30 = &esi_30[data_1c45558]
                    ebx_120 += data_1c45970
                    
                    if (ebx_120 s< data_1ccce7c)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_107 = ebx_120 - data_1ccce7c
                        edi_16 = &var_18_9[data_1c45520]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_72
                
                break
else
    char* esi_27 = data_1ccce58
    char* edi_14 = data_1c45554
    int32_t ecx_15 = data_1ccce84
    int32_t ebx_93 = data_1c4552c
    
    while (true)
        char* var_14_8 = esi_27
        char* var_18_8 = edi_14
        int32_t edx_5 = data_1c4ce44
        int32_t ecx_16 = data_1c4555c
    label_58dec7:
        int32_t eax_57
        eax_57.b = *esi_27
        char* esi_29 = data_1c45994 + (eax_57 << 2)
        int32_t eax_59
        eax_59.b = *edi_14
        int32_t ebx_94
        ebx_94.b = *esi_29
        *edi_14 = eax_59.b + (*(((ebx_94 - eax_59) << 2) + data_1cd43a4)).b
        int32_t eax_61
        eax_61.b = edi_14[1]
        int32_t ebx_98
        ebx_98.b = esi_29[1]
        edi_14[1] = eax_61.b + (*(((ebx_98 - eax_61) << 2) + data_1cd43a4)).b
        int32_t eax_63
        eax_63.b = edi_14[2]
        int32_t ebx_102
        ebx_102.b = esi_29[2]
        char eax_64 = eax_63.b + (*(((ebx_102 - eax_63) << 2) + data_1cd43a4)).b
        edi_14[2] = eax_64
        
        while (true)
            esi_27 = &esi_27[1]
            edx_5 += data_1c05514
            
            if (edx_5 s>= data_1c45980)
                edx_5 -= data_1c45980
                edi_14 = &edi_14[4]
                int32_t temp16_1 = ecx_16
                ecx_16 -= 1
                
                if (temp16_1 == 1)
                    goto label_58df4b
                
                goto label_58dec7
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_58df4b:
                esi_27 = var_14_8
                edi_14 = &var_18_8[data_1c45520]
                ebx_93 += data_1ccce7c
                
                if (ebx_93 s>= data_1c45970)
                    ebx_93 -= data_1c45970
                    esi_27 = &esi_27[data_1c45558]
                
                int32_t temp19_1 = ecx_15
                ecx_15 -= 1
                
                if (temp19_1 == 1)
                    return eax_64
                
                break

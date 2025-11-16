// 函数: sub_5dec00
// 地址: 0x5dec00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_1cd43f8
int32_t ecx = data_1cd43f0
int32_t eax = data_1cd43f4
int32_t ecx_1 = data_1cd43ec
int32_t ebx
int32_t esi
int32_t edi

if (eax_1 == ecx)
    if (eax == ecx_1)
        int32_t var_4 = ebx
        int32_t var_8 = esi
        int32_t var_c = edi
        char* esi_1 = data_1cd4408
        char* edi_1 = data_1cd4404
        int32_t ecx_2 = data_1cd440c
        int32_t eax_13
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                int32_t ebx_1
                ebx_1.b = *esi_1
                int32_t eax_2
                eax_2.b = not.b(ebx_1.b)
                int32_t eax_4
                eax_4.b = *edi_1
                int32_t eax_5 = eax_4 - (eax_2 + *(((ebx_1 - eax_2) << 2) + data_1cd43c8))
                
                if (eax_5 s< 0)
                    eax_5 = 0
                
                *edi_1 = eax_5.b
                int32_t ebx_6
                ebx_6.b = esi_1[1]
                int32_t eax_6
                eax_6.b = not.b(ebx_6.b)
                int32_t eax_8
                eax_8.b = edi_1[1]
                int32_t eax_9 = eax_8 - (eax_6 + *(((ebx_6 - eax_6) << 2) + data_1cd43c8))
                
                if (eax_9 s< 0)
                    eax_9 = 0
                
                edi_1[1] = eax_9.b
                int32_t ebx_11
                ebx_11.b = esi_1[2]
                int32_t eax_10
                eax_10.b = not.b(ebx_11.b)
                int32_t eax_12
                eax_12.b = edi_1[2]
                eax_13 = eax_12 - (eax_10 + *(((ebx_11 - eax_10) << 2) + data_1cd43c8))
                
                if (eax_13 s< 0)
                    eax_13 = 0
                
                edi_1[2] = eax_13.b
                esi_1 = &esi_1[4]
                edi_1 = &edi_1[4]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp1_1 = ecx_2
            ecx_2 -= 1
            
            if (temp1_1 == 1)
                break
            
            esi_1 = &var_14_1[data_1cd4400]
            edi_1 = &var_18_1[data_1cd43fc]
        
        return eax_13
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        char* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_17 = data_1cd4414
        int32_t eax_25
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_18
                ebx_18.b = *esi_4
                int32_t eax_14
                eax_14.b = not.b(ebx_18.b)
                int32_t eax_16
                eax_16.b = *edi_4
                int32_t eax_17 = eax_16 - (eax_14 + *(((ebx_18 - eax_14) << 2) + data_1cd43c8))
                
                if (eax_17 s< 0)
                    eax_17 = 0
                
                *edi_4 = eax_17.b
                int32_t ebx_23
                ebx_23.b = esi_4[1]
                int32_t eax_18
                eax_18.b = not.b(ebx_23.b)
                int32_t eax_20
                eax_20.b = edi_4[1]
                int32_t eax_21 = eax_20 - (eax_18 + *(((ebx_23 - eax_18) << 2) + data_1cd43c8))
                
                if (eax_21 s< 0)
                    eax_21 = 0
                
                edi_4[1] = eax_21.b
                int32_t ebx_28
                ebx_28.b = esi_4[2]
                int32_t eax_22
                eax_22.b = not.b(ebx_28.b)
                int32_t eax_24
                eax_24.b = edi_4[2]
                eax_25 = eax_24 - (eax_22 + *(((ebx_28 - eax_22) << 2) + data_1cd43c8))
                
                if (eax_25 s< 0)
                    eax_25 = 0
                
                edi_4[2] = eax_25.b
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_17 += data_1cd43f4
            
            if (ebx_17 s>= data_1cd43ec)
                ebx_17 -= data_1cd43ec
                esi_4 = &esi_4[data_1cd4400]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_25
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    char* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_35 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t eax_37
        int32_t i_2
        
        do
            int32_t ebx_36
            ebx_36.b = *esi_6
            int32_t eax_26
            eax_26.b = not.b(ebx_36.b)
            int32_t eax_28
            eax_28.b = *edi_7
            int32_t eax_29 = eax_28 - (eax_26 + *(((ebx_36 - eax_26) << 2) + data_1cd43c8))
            
            if (eax_29 s< 0)
                eax_29 = 0
            
            *edi_7 = eax_29.b
            int32_t ebx_41
            ebx_41.b = esi_6[1]
            int32_t eax_30
            eax_30.b = not.b(ebx_41.b)
            int32_t eax_32
            eax_32.b = edi_7[1]
            int32_t eax_33 = eax_32 - (eax_30 + *(((ebx_41 - eax_30) << 2) + data_1cd43c8))
            
            if (eax_33 s< 0)
                eax_33 = 0
            
            edi_7[1] = eax_33.b
            int32_t ebx_46
            ebx_46.b = esi_6[2]
            int32_t eax_34
            eax_34.b = not.b(ebx_46.b)
            int32_t eax_36
            eax_36.b = edi_7[2]
            eax_37 = eax_36 - (eax_34 + *(((ebx_46 - eax_34) << 2) + data_1cd43c8))
            
            if (eax_37 s< 0)
                eax_37 = 0
            
            edi_7[2] = eax_37.b
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_51 = ebx_35
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_51 += data_1cd43ec
            
            if (ebx_51 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_35 = ebx_51 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_37
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        char* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_49
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_1 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t ebx_53
                ebx_53.b = *esi_8
                int32_t eax_38
                eax_38.b = not.b(ebx_53.b)
                int32_t eax_40
                eax_40.b = *edi_10
                int32_t eax_41 = eax_40 - (eax_38 + *(((ebx_53 - eax_38) << 2) + data_1cd43c8))
                
                if (eax_41 s< 0)
                    eax_41 = 0
                
                *edi_10 = eax_41.b
                int32_t ebx_58
                ebx_58.b = esi_8[1]
                int32_t eax_42
                eax_42.b = not.b(ebx_58.b)
                int32_t eax_44
                eax_44.b = edi_10[1]
                int32_t eax_45 = eax_44 - (eax_42 + *(((ebx_58 - eax_42) << 2) + data_1cd43c8))
                
                if (eax_45 s< 0)
                    eax_45 = 0
                
                edi_10[1] = eax_45.b
                int32_t ebx_63
                ebx_63.b = esi_8[2]
                int32_t eax_46
                eax_46.b = not.b(ebx_63.b)
                int32_t eax_48
                eax_48.b = edi_10[2]
                eax_49 = eax_48 - (eax_46 + *(((ebx_63 - eax_46) << 2) + data_1cd43c8))
                
                if (eax_49 s< 0)
                    eax_49 = 0
                
                edi_10[2] = eax_49.b
                edi_10 = &edi_10[4]
                edx_1 += data_1cd43f8
                
                if (edx_1 s>= data_1cd43f0)
                    edx_1 -= data_1cd43f0
                    esi_8 = &esi_8[4]
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp6_1 = ecx_7
            ecx_7 -= 1
            
            if (temp6_1 == 1)
                break
            
            esi_8 = &var_14_4[data_1cd4400]
            edi_10 = &var_18_4[data_1cd43fc]
        
        return eax_49
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        char* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_69 = data_1cd4414
        int32_t eax_61
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_3 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_70
                ebx_70.b = *esi_11
                int32_t eax_50
                eax_50.b = not.b(ebx_70.b)
                int32_t eax_52
                eax_52.b = *edi_13
                int32_t eax_53 = eax_52 - (eax_50 + *(((ebx_70 - eax_50) << 2) + data_1cd43c8))
                
                if (eax_53 s< 0)
                    eax_53 = 0
                
                *edi_13 = eax_53.b
                int32_t ebx_75
                ebx_75.b = esi_11[1]
                int32_t eax_54
                eax_54.b = not.b(ebx_75.b)
                int32_t eax_56
                eax_56.b = edi_13[1]
                int32_t eax_57 = eax_56 - (eax_54 + *(((ebx_75 - eax_54) << 2) + data_1cd43c8))
                
                if (eax_57 s< 0)
                    eax_57 = 0
                
                edi_13[1] = eax_57.b
                int32_t ebx_80
                ebx_80.b = esi_11[2]
                int32_t eax_58
                eax_58.b = not.b(ebx_80.b)
                int32_t eax_60
                eax_60.b = edi_13[2]
                eax_61 = eax_60 - (eax_58 + *(((ebx_80 - eax_58) << 2) + data_1cd43c8))
                
                if (eax_61 s< 0)
                    eax_61 = 0
                
                edi_13[2] = eax_61.b
                edi_13 = &edi_13[4]
                edx_3 += data_1cd43f8
                
                if (edx_3 s>= data_1cd43f0)
                    edx_3 -= data_1cd43f0
                    esi_11 = &esi_11[4]
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_11 = var_14_5
            edi_13 = &var_18_5[data_1cd43fc]
            ebx_69 += data_1cd43f4
            
            if (ebx_69 s>= data_1cd43ec)
                ebx_69 -= data_1cd43ec
                esi_11 = &esi_11[data_1cd4400]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_61
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    char* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_87 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_5 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t eax_73
        int32_t i_5
        
        do
            int32_t ebx_88
            ebx_88.b = *esi_13
            int32_t eax_62
            eax_62.b = not.b(ebx_88.b)
            int32_t eax_64
            eax_64.b = *edi_16
            int32_t eax_65 = eax_64 - (eax_62 + *(((ebx_88 - eax_62) << 2) + data_1cd43c8))
            
            if (eax_65 s< 0)
                eax_65 = 0
            
            *edi_16 = eax_65.b
            int32_t ebx_93
            ebx_93.b = esi_13[1]
            int32_t eax_66
            eax_66.b = not.b(ebx_93.b)
            int32_t eax_68
            eax_68.b = edi_16[1]
            int32_t eax_69 = eax_68 - (eax_66 + *(((ebx_93 - eax_66) << 2) + data_1cd43c8))
            
            if (eax_69 s< 0)
                eax_69 = 0
            
            edi_16[1] = eax_69.b
            int32_t ebx_98
            ebx_98.b = esi_13[2]
            int32_t eax_70
            eax_70.b = not.b(ebx_98.b)
            int32_t eax_72
            eax_72.b = edi_16[2]
            eax_73 = eax_72 - (eax_70 + *(((ebx_98 - eax_70) << 2) + data_1cd43c8))
            
            if (eax_73 s< 0)
                eax_73 = 0
            
            edi_16[2] = eax_73.b
            edi_16 = &edi_16[4]
            edx_5 += data_1cd43f8
            
            if (edx_5 s>= data_1cd43f0)
                edx_5 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_103 = ebx_87
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_103 += data_1cd43ec
            
            if (ebx_103 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_87 = ebx_103 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_73
else if (eax == ecx_1)
    int32_t var_4_6 = ebx
    int32_t var_8_6 = esi
    int32_t var_c_6 = edi
    char* esi_15 = data_1cd4408
    char* edi_19 = data_1cd4404
    int32_t ecx_12 = data_1cd440c
    
    while (true)
        char* var_14_7 = esi_15
        char* var_18_7 = edi_19
        int32_t edx_7 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5de927:
        int32_t ebx_105
        ebx_105.b = *esi_15
        int32_t eax_74
        eax_74.b = not.b(ebx_105.b)
        int32_t eax_76
        eax_76.b = *edi_19
        int32_t eax_77 = eax_76 - (eax_74 + *(((ebx_105 - eax_74) << 2) + data_1cd43c8))
        
        if (eax_77 s< 0)
            eax_77 = 0
        
        *edi_19 = eax_77.b
        int32_t ebx_110
        ebx_110.b = esi_15[1]
        int32_t eax_78
        eax_78.b = not.b(ebx_110.b)
        int32_t eax_80
        eax_80.b = edi_19[1]
        int32_t eax_81 = eax_80 - (eax_78 + *(((ebx_110 - eax_78) << 2) + data_1cd43c8))
        
        if (eax_81 s< 0)
            eax_81 = 0
        
        edi_19[1] = eax_81.b
        int32_t ebx_115
        ebx_115.b = esi_15[2]
        int32_t eax_82
        eax_82.b = not.b(ebx_115.b)
        int32_t eax_84
        eax_84.b = edi_19[2]
        int32_t eax_85 = eax_84 - (eax_82 + *(((ebx_115 - eax_82) << 2) + data_1cd43c8))
        
        if (eax_85 s< 0)
            eax_85 = 0
        
        edi_19[2] = eax_85.b
        int32_t edx_8 = edx_7
        
        while (true)
            esi_15 = &esi_15[4]
            edx_8 += data_1cd43f0
            
            if (edx_8 s>= data_1cd43f8)
                edx_7 = edx_8 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp10_1 = ecx_13
                ecx_13 -= 1
                
                if (temp10_1 == 1)
                    goto label_5de9ca
                
                goto label_5de927
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5de9ca:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_85
                
                esi_15 = &var_14_7[data_1cd4400]
                edi_19 = &var_18_7[data_1cd43fc]
                break
else if (eax s< ecx_1)
    int32_t var_4_7 = ebx
    int32_t var_8_7 = esi
    int32_t var_c_7 = edi
    char* esi_18 = data_1cd4408
    char* edi_22 = data_1cd4404
    int32_t ecx_15 = data_1cd440c
    int32_t ebx_121 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_9 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5dea1e:
        int32_t ebx_122
        ebx_122.b = *esi_18
        int32_t eax_86
        eax_86.b = not.b(ebx_122.b)
        int32_t eax_88
        eax_88.b = *edi_22
        int32_t eax_89 = eax_88 - (eax_86 + *(((ebx_122 - eax_86) << 2) + data_1cd43c8))
        
        if (eax_89 s< 0)
            eax_89 = 0
        
        *edi_22 = eax_89.b
        int32_t ebx_127
        ebx_127.b = esi_18[1]
        int32_t eax_90
        eax_90.b = not.b(ebx_127.b)
        int32_t eax_92
        eax_92.b = edi_22[1]
        int32_t eax_93 = eax_92 - (eax_90 + *(((ebx_127 - eax_90) << 2) + data_1cd43c8))
        
        if (eax_93 s< 0)
            eax_93 = 0
        
        edi_22[1] = eax_93.b
        int32_t ebx_132
        ebx_132.b = esi_18[2]
        int32_t eax_94
        eax_94.b = not.b(ebx_132.b)
        int32_t eax_96
        eax_96.b = edi_22[2]
        int32_t eax_97 = eax_96 - (eax_94 + *(((ebx_132 - eax_94) << 2) + data_1cd43c8))
        
        if (eax_97 s< 0)
            eax_97 = 0
        
        edi_22[2] = eax_97.b
        int32_t edx_10 = edx_9
        
        while (true)
            esi_18 = &esi_18[4]
            edx_10 += data_1cd43f0
            
            if (edx_10 s>= data_1cd43f8)
                edx_9 = edx_10 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp13_1 = ecx_16
                ecx_16 -= 1
                
                if (temp13_1 == 1)
                    goto label_5deac0
                
                goto label_5dea1e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5deac0:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_121 += data_1cd43f4
                
                if (ebx_121 s>= data_1cd43ec)
                    ebx_121 -= data_1cd43ec
                    esi_18 = &esi_18[data_1cd4400]
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_97
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    char* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_139 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_11 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5deb1e:
        int32_t ebx_140
        ebx_140.b = *esi_20
        int32_t eax_98
        eax_98.b = not.b(ebx_140.b)
        int32_t eax_100
        eax_100.b = *edi_25
        int32_t eax_101 = eax_100 - (eax_98 + *(((ebx_140 - eax_98) << 2) + data_1cd43c8))
        
        if (eax_101 s< 0)
            eax_101 = 0
        
        *edi_25 = eax_101.b
        int32_t ebx_145
        ebx_145.b = esi_20[1]
        int32_t eax_102
        eax_102.b = not.b(ebx_145.b)
        int32_t eax_104
        eax_104.b = edi_25[1]
        int32_t eax_105 = eax_104 - (eax_102 + *(((ebx_145 - eax_102) << 2) + data_1cd43c8))
        
        if (eax_105 s< 0)
            eax_105 = 0
        
        edi_25[1] = eax_105.b
        int32_t ebx_150
        ebx_150.b = esi_20[2]
        int32_t eax_106
        eax_106.b = not.b(ebx_150.b)
        int32_t eax_108
        eax_108.b = edi_25[2]
        int32_t eax_109 = eax_108 - (eax_106 + *(((ebx_150 - eax_106) << 2) + data_1cd43c8))
        
        if (eax_109 s< 0)
            eax_109 = 0
        
        edi_25[2] = eax_109.b
        int32_t edx_12 = edx_11
        
        while (true)
            esi_20 = &esi_20[4]
            edx_12 += data_1cd43f0
            
            if (edx_12 s>= data_1cd43f8)
                edx_11 = edx_12 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp18_1 = ecx_19
                ecx_19 -= 1
                
                if (temp18_1 == 1)
                    goto label_5debbe
                
                goto label_5deb1e
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5debbe:
                int32_t ebx_155 = ebx_139
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_155 += data_1cd43ec
                    
                    if (ebx_155 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_139 = ebx_155 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_109
                
                break

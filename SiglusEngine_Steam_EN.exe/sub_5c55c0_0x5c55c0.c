// 函数: sub_5c55c0
// 地址: 0x5c55c0
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
        char eax_7
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                int32_t ebx_1
                ebx_1.b = *esi_1
                int32_t eax_2 = data_1cd4380
                *edi_1 = eax_2.b + (*(((ebx_1 - eax_2) << 2) + data_1cd4384)).b
                int32_t ebx_6
                ebx_6.b = esi_1[1]
                int32_t eax_4 = data_1cd4388
                edi_1[1] = eax_4.b + (*(((ebx_6 - eax_4) << 2) + data_1cd438c)).b
                int32_t ebx_11
                ebx_11.b = esi_1[2]
                int32_t eax_6 = data_1cd4390
                eax_7 = eax_6.b + (*(((ebx_11 - eax_6) << 2) + data_1cd4394)).b
                edi_1[2] = eax_7
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
        
        return eax_7
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        char* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_17 = data_1cd4414
        char eax_13
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_18
                ebx_18.b = *esi_4
                int32_t eax_8 = data_1cd4380
                *edi_4 = eax_8.b + (*(((ebx_18 - eax_8) << 2) + data_1cd4384)).b
                int32_t ebx_23
                ebx_23.b = esi_4[1]
                int32_t eax_10 = data_1cd4388
                edi_4[1] = eax_10.b + (*(((ebx_23 - eax_10) << 2) + data_1cd438c)).b
                int32_t ebx_28
                ebx_28.b = esi_4[2]
                int32_t eax_12 = data_1cd4390
                eax_13 = eax_12.b + (*(((ebx_28 - eax_12) << 2) + data_1cd4394)).b
                edi_4[2] = eax_13
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
        return eax_13
    
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
        char eax_19
        int32_t i_2
        
        do
            int32_t ebx_36
            ebx_36.b = *esi_6
            int32_t eax_14 = data_1cd4380
            *edi_7 = eax_14.b + (*(((ebx_36 - eax_14) << 2) + data_1cd4384)).b
            int32_t ebx_41
            ebx_41.b = esi_6[1]
            int32_t eax_16 = data_1cd4388
            edi_7[1] = eax_16.b + (*(((ebx_41 - eax_16) << 2) + data_1cd438c)).b
            int32_t ebx_46
            ebx_46.b = esi_6[2]
            int32_t eax_18 = data_1cd4390
            eax_19 = eax_18.b + (*(((ebx_46 - eax_18) << 2) + data_1cd4394)).b
            edi_7[2] = eax_19
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
            
            return eax_19
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        char* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        char eax_25
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_1 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t ebx_53
                ebx_53.b = *esi_8
                int32_t eax_20 = data_1cd4380
                *edi_10 = eax_20.b + (*(((ebx_53 - eax_20) << 2) + data_1cd4384)).b
                int32_t ebx_58
                ebx_58.b = esi_8[1]
                int32_t eax_22 = data_1cd4388
                edi_10[1] = eax_22.b + (*(((ebx_58 - eax_22) << 2) + data_1cd438c)).b
                int32_t ebx_63
                ebx_63.b = esi_8[2]
                int32_t eax_24 = data_1cd4390
                eax_25 = eax_24.b + (*(((ebx_63 - eax_24) << 2) + data_1cd4394)).b
                edi_10[2] = eax_25
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
        
        return eax_25
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        char* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_69 = data_1cd4414
        char eax_31
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
                int32_t eax_26 = data_1cd4380
                *edi_13 = eax_26.b + (*(((ebx_70 - eax_26) << 2) + data_1cd4384)).b
                int32_t ebx_75
                ebx_75.b = esi_11[1]
                int32_t eax_28 = data_1cd4388
                edi_13[1] = eax_28.b + (*(((ebx_75 - eax_28) << 2) + data_1cd438c)).b
                int32_t ebx_80
                ebx_80.b = esi_11[2]
                int32_t eax_30 = data_1cd4390
                eax_31 = eax_30.b + (*(((ebx_80 - eax_30) << 2) + data_1cd4394)).b
                edi_13[2] = eax_31
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
        return eax_31
    
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
        char eax_37
        int32_t i_5
        
        do
            int32_t ebx_88
            ebx_88.b = *esi_13
            int32_t eax_32 = data_1cd4380
            *edi_16 = eax_32.b + (*(((ebx_88 - eax_32) << 2) + data_1cd4384)).b
            int32_t ebx_93
            ebx_93.b = esi_13[1]
            int32_t eax_34 = data_1cd4388
            edi_16[1] = eax_34.b + (*(((ebx_93 - eax_34) << 2) + data_1cd438c)).b
            int32_t ebx_98
            ebx_98.b = esi_13[2]
            int32_t eax_36 = data_1cd4390
            eax_37 = eax_36.b + (*(((ebx_98 - eax_36) << 2) + data_1cd4394)).b
            edi_16[2] = eax_37
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
            
            return eax_37
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
    label_5c5367:
        int32_t ebx_105
        ebx_105.b = *esi_15
        int32_t eax_38 = data_1cd4380
        *edi_19 = eax_38.b + (*(((ebx_105 - eax_38) << 2) + data_1cd4384)).b
        int32_t ebx_110
        ebx_110.b = esi_15[1]
        int32_t eax_40 = data_1cd4388
        edi_19[1] = eax_40.b + (*(((ebx_110 - eax_40) << 2) + data_1cd438c)).b
        int32_t ebx_115
        ebx_115.b = esi_15[2]
        int32_t eax_42 = data_1cd4390
        char eax_43 = eax_42.b + (*(((ebx_115 - eax_42) << 2) + data_1cd4394)).b
        edi_19[2] = eax_43
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
                    goto label_5c53e1
                
                goto label_5c5367
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5c53e1:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_43
                
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
    label_5c542e:
        int32_t ebx_122
        ebx_122.b = *esi_18
        int32_t eax_44 = data_1cd4380
        *edi_22 = eax_44.b + (*(((ebx_122 - eax_44) << 2) + data_1cd4384)).b
        int32_t ebx_127
        ebx_127.b = esi_18[1]
        int32_t eax_46 = data_1cd4388
        edi_22[1] = eax_46.b + (*(((ebx_127 - eax_46) << 2) + data_1cd438c)).b
        int32_t ebx_132
        ebx_132.b = esi_18[2]
        int32_t eax_48 = data_1cd4390
        char eax_49 = eax_48.b + (*(((ebx_132 - eax_48) << 2) + data_1cd4394)).b
        edi_22[2] = eax_49
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
                    goto label_5c54a7
                
                goto label_5c542e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5c54a7:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_121 += data_1cd43f4
                
                if (ebx_121 s>= data_1cd43ec)
                    ebx_121 -= data_1cd43ec
                    esi_18 = &esi_18[data_1cd4400]
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_49
                
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
    label_5c550e:
        int32_t ebx_140
        ebx_140.b = *esi_20
        int32_t eax_50 = data_1cd4380
        *edi_25 = eax_50.b + (*(((ebx_140 - eax_50) << 2) + data_1cd4384)).b
        int32_t ebx_145
        ebx_145.b = esi_20[1]
        int32_t eax_52 = data_1cd4388
        edi_25[1] = eax_52.b + (*(((ebx_145 - eax_52) << 2) + data_1cd438c)).b
        int32_t ebx_150
        ebx_150.b = esi_20[2]
        int32_t eax_54 = data_1cd4390
        char eax_55 = eax_54.b + (*(((ebx_150 - eax_54) << 2) + data_1cd4394)).b
        edi_25[2] = eax_55
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
                    goto label_5c5585
                
                goto label_5c550e
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5c5585:
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
                    
                    return eax_55
                
                break

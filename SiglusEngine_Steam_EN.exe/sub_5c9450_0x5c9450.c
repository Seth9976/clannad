// 函数: sub_5c9450
// 地址: 0x5c9450
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
        char eax_13
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                int32_t edx_1 = data_1cd43a4
                int32_t ebx_1
                ebx_1.b = *esi_1
                int32_t eax_2
                eax_2.b = not.b(ebx_1.b)
                int32_t eax_4
                eax_4.b = *edi_1
                *edi_1 = eax_4.b +
                    (*(((eax_2 + *(((ebx_1 - eax_2) << 2) + data_1cd43c8) - eax_4) << 2) + edx_1)).b
                int32_t ebx_9
                ebx_9.b = esi_1[1]
                int32_t eax_6
                eax_6.b = not.b(ebx_9.b)
                int32_t eax_8
                eax_8.b = edi_1[1]
                edi_1[1] = eax_8.b +
                    (*(((eax_6 + *(((ebx_9 - eax_6) << 2) + data_1cd43c8) - eax_8) << 2) + edx_1)).b
                int32_t ebx_17
                ebx_17.b = esi_1[2]
                int32_t eax_10
                eax_10.b = not.b(ebx_17.b)
                int32_t eax_12
                eax_12.b = edi_1[2]
                eax_13 = eax_12.b + (*
                    (((eax_10 + *(((ebx_17 - eax_10) << 2) + data_1cd43c8) - eax_12) << 2) + edx_1)).b
                edi_1[2] = eax_13
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
        int32_t ebx_26 = data_1cd4414
        char eax_25
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t edx_2 = data_1cd43a4
                int32_t ebx_27
                ebx_27.b = *esi_4
                int32_t eax_14
                eax_14.b = not.b(ebx_27.b)
                int32_t eax_16
                eax_16.b = *edi_4
                *edi_4 = eax_16.b + (*
                    (((eax_14 + *(((ebx_27 - eax_14) << 2) + data_1cd43c8) - eax_16) << 2) + edx_2)).b
                int32_t ebx_35
                ebx_35.b = esi_4[1]
                int32_t eax_18
                eax_18.b = not.b(ebx_35.b)
                int32_t eax_20
                eax_20.b = edi_4[1]
                edi_4[1] = eax_20.b + (*
                    (((eax_18 + *(((ebx_35 - eax_18) << 2) + data_1cd43c8) - eax_20) << 2) + edx_2)).b
                int32_t ebx_43
                ebx_43.b = esi_4[2]
                int32_t eax_22
                eax_22.b = not.b(ebx_43.b)
                int32_t eax_24
                eax_24.b = edi_4[2]
                eax_25 = eax_24.b + (*
                    (((eax_22 + *(((ebx_43 - eax_22) << 2) + data_1cd43c8) - eax_24) << 2) + edx_2)).b
                edi_4[2] = eax_25
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_26 += data_1cd43f4
            
            if (ebx_26 s>= data_1cd43ec)
                ebx_26 -= data_1cd43ec
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
    int32_t ebx_53 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        char eax_37
        int32_t i_2
        
        do
            int32_t edx_3 = data_1cd43a4
            int32_t ebx_54
            ebx_54.b = *esi_6
            int32_t eax_26
            eax_26.b = not.b(ebx_54.b)
            int32_t eax_28
            eax_28.b = *edi_7
            *edi_7 = eax_28.b +
                (*(((eax_26 + *(((ebx_54 - eax_26) << 2) + data_1cd43c8) - eax_28) << 2) + edx_3)).b
            int32_t ebx_62
            ebx_62.b = esi_6[1]
            int32_t eax_30
            eax_30.b = not.b(ebx_62.b)
            int32_t eax_32
            eax_32.b = edi_7[1]
            edi_7[1] = eax_32.b +
                (*(((eax_30 + *(((ebx_62 - eax_30) << 2) + data_1cd43c8) - eax_32) << 2) + edx_3)).b
            int32_t ebx_70
            ebx_70.b = esi_6[2]
            int32_t eax_34
            eax_34.b = not.b(ebx_70.b)
            int32_t eax_36
            eax_36.b = edi_7[2]
            eax_37 = eax_36.b +
                (*(((eax_34 + *(((ebx_70 - eax_34) << 2) + data_1cd43c8) - eax_36) << 2) + edx_3)).b
            edi_7[2] = eax_37
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_78 = ebx_53
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_78 += data_1cd43ec
            
            if (ebx_78 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_53 = ebx_78 - data_1cd43f4
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
        char eax_49
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t edx_5 = data_1cd43a4
                int32_t ebx_80
                ebx_80.b = *esi_8
                int32_t eax_38
                eax_38.b = not.b(ebx_80.b)
                int32_t eax_40
                eax_40.b = *edi_10
                *edi_10 = eax_40.b + (*
                    (((eax_38 + *(((ebx_80 - eax_38) << 2) + data_1cd43c8) - eax_40) << 2) + edx_5)).b
                int32_t ebx_88
                ebx_88.b = esi_8[1]
                int32_t eax_42
                eax_42.b = not.b(ebx_88.b)
                int32_t eax_44
                eax_44.b = edi_10[1]
                edi_10[1] = eax_44.b + (*
                    (((eax_42 + *(((ebx_88 - eax_42) << 2) + data_1cd43c8) - eax_44) << 2) + edx_5)).b
                int32_t ebx_96
                ebx_96.b = esi_8[2]
                int32_t eax_46
                eax_46.b = not.b(ebx_96.b)
                int32_t eax_48
                eax_48.b = edi_10[2]
                eax_49 = eax_48.b + (*
                    (((eax_46 + *(((ebx_96 - eax_46) << 2) + data_1cd43c8) - eax_48) << 2) + edx_5)).b
                edi_10[2] = eax_49
                edi_10 = &edi_10[4]
                edx_4 += data_1cd43f8
                
                if (edx_4 s>= data_1cd43f0)
                    edx_4 -= data_1cd43f0
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
        int32_t ebx_105 = data_1cd4414
        char eax_61
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t edx_8 = data_1cd43a4
                int32_t ebx_106
                ebx_106.b = *esi_11
                int32_t eax_50
                eax_50.b = not.b(ebx_106.b)
                int32_t eax_52
                eax_52.b = *edi_13
                *edi_13 = eax_52.b + (*(((eax_50 + *(((ebx_106 - eax_50) << 2) + data_1cd43c8)
                    - eax_52) << 2) + edx_8)).b
                int32_t ebx_114
                ebx_114.b = esi_11[1]
                int32_t eax_54
                eax_54.b = not.b(ebx_114.b)
                int32_t eax_56
                eax_56.b = edi_13[1]
                edi_13[1] = eax_56.b + (*(((eax_54 + *(((ebx_114 - eax_54) << 2) + data_1cd43c8)
                    - eax_56) << 2) + edx_8)).b
                int32_t ebx_122
                ebx_122.b = esi_11[2]
                int32_t eax_58
                eax_58.b = not.b(ebx_122.b)
                int32_t eax_60
                eax_60.b = edi_13[2]
                eax_61 = eax_60.b + (*(((eax_58 + *(((ebx_122 - eax_58) << 2) + data_1cd43c8)
                    - eax_60) << 2) + edx_8)).b
                edi_13[2] = eax_61
                edi_13 = &edi_13[4]
                edx_7 += data_1cd43f8
                
                if (edx_7 s>= data_1cd43f0)
                    edx_7 -= data_1cd43f0
                    esi_11 = &esi_11[4]
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_11 = var_14_5
            edi_13 = &var_18_5[data_1cd43fc]
            ebx_105 += data_1cd43f4
            
            if (ebx_105 s>= data_1cd43ec)
                ebx_105 -= data_1cd43ec
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
    int32_t ebx_132 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        char eax_73
        int32_t i_5
        
        do
            int32_t edx_11 = data_1cd43a4
            int32_t ebx_133
            ebx_133.b = *esi_13
            int32_t eax_62
            eax_62.b = not.b(ebx_133.b)
            int32_t eax_64
            eax_64.b = *edi_16
            *edi_16 = eax_64.b + (
                *(((eax_62 + *(((ebx_133 - eax_62) << 2) + data_1cd43c8) - eax_64) << 2) + edx_11)).b
            int32_t ebx_141
            ebx_141.b = esi_13[1]
            int32_t eax_66
            eax_66.b = not.b(ebx_141.b)
            int32_t eax_68
            eax_68.b = edi_16[1]
            edi_16[1] = eax_68.b + (
                *(((eax_66 + *(((ebx_141 - eax_66) << 2) + data_1cd43c8) - eax_68) << 2) + edx_11)).b
            int32_t ebx_149
            ebx_149.b = esi_13[2]
            int32_t eax_70
            eax_70.b = not.b(ebx_149.b)
            int32_t eax_72
            eax_72.b = edi_16[2]
            eax_73 = eax_72.b + (
                *(((eax_70 + *(((ebx_149 - eax_70) << 2) + data_1cd43c8) - eax_72) << 2) + edx_11)).b
            edi_16[2] = eax_73
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_157 = ebx_132
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_157 += data_1cd43ec
            
            if (ebx_157 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_132 = ebx_157 - data_1cd43f4
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
        int32_t edx_13 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5c9165:
        int32_t edx_14 = data_1cd43a4
        int32_t ebx_159
        ebx_159.b = *esi_15
        int32_t eax_74
        eax_74.b = not.b(ebx_159.b)
        int32_t eax_76
        eax_76.b = *edi_19
        *edi_19 = eax_76.b +
            (*(((eax_74 + *(((ebx_159 - eax_74) << 2) + data_1cd43c8) - eax_76) << 2) + edx_14)).b
        int32_t ebx_167
        ebx_167.b = esi_15[1]
        int32_t eax_78
        eax_78.b = not.b(ebx_167.b)
        int32_t eax_80
        eax_80.b = edi_19[1]
        edi_19[1] = eax_80.b +
            (*(((eax_78 + *(((ebx_167 - eax_78) << 2) + data_1cd43c8) - eax_80) << 2) + edx_14)).b
        int32_t ebx_175
        ebx_175.b = esi_15[2]
        int32_t eax_82
        eax_82.b = not.b(ebx_175.b)
        int32_t eax_84
        eax_84.b = edi_19[2]
        char eax_85 = eax_84.b +
            (*(((eax_82 + *(((ebx_175 - eax_82) << 2) + data_1cd43c8) - eax_84) << 2) + edx_14)).b
        edi_19[2] = eax_85
        int32_t edx_15 = edx_13
        
        while (true)
            esi_15 = &esi_15[4]
            edx_15 += data_1cd43f0
            
            if (edx_15 s>= data_1cd43f8)
                edx_13 = edx_15 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp10_1 = ecx_13
                ecx_13 -= 1
                
                if (temp10_1 == 1)
                    goto label_5c9210
                
                goto label_5c9165
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5c9210:
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
    int32_t ebx_184 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5c925c:
        int32_t edx_17 = data_1cd43a4
        int32_t ebx_185
        ebx_185.b = *esi_18
        int32_t eax_86
        eax_86.b = not.b(ebx_185.b)
        int32_t eax_88
        eax_88.b = *edi_22
        *edi_22 = eax_88.b +
            (*(((eax_86 + *(((ebx_185 - eax_86) << 2) + data_1cd43c8) - eax_88) << 2) + edx_17)).b
        int32_t ebx_193
        ebx_193.b = esi_18[1]
        int32_t eax_90
        eax_90.b = not.b(ebx_193.b)
        int32_t eax_92
        eax_92.b = edi_22[1]
        edi_22[1] = eax_92.b +
            (*(((eax_90 + *(((ebx_193 - eax_90) << 2) + data_1cd43c8) - eax_92) << 2) + edx_17)).b
        int32_t ebx_201
        ebx_201.b = esi_18[2]
        int32_t eax_94
        eax_94.b = not.b(ebx_201.b)
        int32_t eax_96
        eax_96.b = edi_22[2]
        char eax_97 = eax_96.b +
            (*(((eax_94 + *(((ebx_201 - eax_94) << 2) + data_1cd43c8) - eax_96) << 2) + edx_17)).b
        edi_22[2] = eax_97
        int32_t edx_18 = edx_16
        
        while (true)
            esi_18 = &esi_18[4]
            edx_18 += data_1cd43f0
            
            if (edx_18 s>= data_1cd43f8)
                edx_16 = edx_18 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp13_1 = ecx_16
                ecx_16 -= 1
                
                if (temp13_1 == 1)
                    goto label_5c9306
                
                goto label_5c925c
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5c9306:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_184 += data_1cd43f4
                
                if (ebx_184 s>= data_1cd43ec)
                    ebx_184 -= data_1cd43ec
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
    int32_t ebx_211 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5c936c:
        int32_t edx_20 = data_1cd43a4
        int32_t ebx_212
        ebx_212.b = *esi_20
        int32_t eax_98
        eax_98.b = not.b(ebx_212.b)
        int32_t eax_100
        eax_100.b = *edi_25
        *edi_25 = eax_100.b +
            (*(((eax_98 + *(((ebx_212 - eax_98) << 2) + data_1cd43c8) - eax_100) << 2) + edx_20)).b
        int32_t ebx_220
        ebx_220.b = esi_20[1]
        int32_t eax_102
        eax_102.b = not.b(ebx_220.b)
        int32_t eax_104
        eax_104.b = edi_25[1]
        edi_25[1] = eax_104.b + (
            *(((eax_102 + *(((ebx_220 - eax_102) << 2) + data_1cd43c8) - eax_104) << 2) + edx_20)).b
        int32_t ebx_228
        ebx_228.b = esi_20[2]
        int32_t eax_106
        eax_106.b = not.b(ebx_228.b)
        int32_t eax_108
        eax_108.b = edi_25[2]
        char eax_109 = eax_108.b + (
            *(((eax_106 + *(((ebx_228 - eax_106) << 2) + data_1cd43c8) - eax_108) << 2) + edx_20)).b
        edi_25[2] = eax_109
        int32_t edx_21 = edx_19
        
        while (true)
            esi_20 = &esi_20[4]
            edx_21 += data_1cd43f0
            
            if (edx_21 s>= data_1cd43f8)
                edx_19 = edx_21 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp18_1 = ecx_19
                ecx_19 -= 1
                
                if (temp18_1 == 1)
                    goto label_5c9414
                
                goto label_5c936c
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5c9414:
                int32_t ebx_236 = ebx_211
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_236 += data_1cd43ec
                    
                    if (ebx_236 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_211 = ebx_236 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_109
                
                break

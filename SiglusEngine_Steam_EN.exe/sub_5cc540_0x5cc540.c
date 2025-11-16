// 函数: sub_5cc540
// 地址: 0x5cc540
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
        char eax_19
        
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
                int32_t eax_4 = data_1cd4380
                int32_t eax_6
                eax_6.b = *edi_1
                *edi_1 = eax_6.b + (*(((eax_4 + *(((eax_2 + *(((ebx_1 - eax_2) << 2) + data_1cd43c8)
                    - eax_4) << 2) + data_1cd4384) - eax_6) << 2) + edx_1)).b
                int32_t ebx_13
                ebx_13.b = esi_1[1]
                int32_t eax_8
                eax_8.b = not.b(ebx_13.b)
                int32_t eax_10 = data_1cd4388
                int32_t eax_12
                eax_12.b = edi_1[1]
                edi_1[1] = eax_12.b + (*(((eax_10 + *(((eax_8
                    + *(((ebx_13 - eax_8) << 2) + data_1cd43c8) - eax_10) << 2) + data_1cd438c)
                    - eax_12) << 2) + edx_1)).b
                int32_t ebx_25
                ebx_25.b = esi_1[2]
                int32_t eax_14
                eax_14.b = not.b(ebx_25.b)
                int32_t eax_16 = data_1cd4390
                int32_t eax_18
                eax_18.b = edi_1[2]
                eax_19 = eax_18.b + (*(((eax_16 + *(((eax_14
                    + *(((ebx_25 - eax_14) << 2) + data_1cd43c8) - eax_16) << 2) + data_1cd4394)
                    - eax_18) << 2) + edx_1)).b
                edi_1[2] = eax_19
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
        
        return eax_19
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        char* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_38 = data_1cd4414
        char eax_37
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t edx_2 = data_1cd43a4
                int32_t ebx_39
                ebx_39.b = *esi_4
                int32_t eax_20
                eax_20.b = not.b(ebx_39.b)
                int32_t eax_22 = data_1cd4380
                int32_t eax_24
                eax_24.b = *edi_4
                *edi_4 = eax_24.b + (*(((eax_22 + *(((eax_20
                    + *(((ebx_39 - eax_20) << 2) + data_1cd43c8) - eax_22) << 2) + data_1cd4384)
                    - eax_24) << 2) + edx_2)).b
                int32_t ebx_51
                ebx_51.b = esi_4[1]
                int32_t eax_26
                eax_26.b = not.b(ebx_51.b)
                int32_t eax_28 = data_1cd4388
                int32_t eax_30
                eax_30.b = edi_4[1]
                edi_4[1] = eax_30.b + (*(((eax_28 + *(((eax_26
                    + *(((ebx_51 - eax_26) << 2) + data_1cd43c8) - eax_28) << 2) + data_1cd438c)
                    - eax_30) << 2) + edx_2)).b
                int32_t ebx_63
                ebx_63.b = esi_4[2]
                int32_t eax_32
                eax_32.b = not.b(ebx_63.b)
                int32_t eax_34 = data_1cd4390
                int32_t eax_36
                eax_36.b = edi_4[2]
                eax_37 = eax_36.b + (*(((eax_34 + *(((eax_32
                    + *(((ebx_63 - eax_32) << 2) + data_1cd43c8) - eax_34) << 2) + data_1cd4394)
                    - eax_36) << 2) + edx_2)).b
                edi_4[2] = eax_37
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_38 += data_1cd43f4
            
            if (ebx_38 s>= data_1cd43ec)
                ebx_38 -= data_1cd43ec
                esi_4 = &esi_4[data_1cd4400]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_37
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    char* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_77 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        char eax_55
        int32_t i_2
        
        do
            int32_t edx_3 = data_1cd43a4
            int32_t ebx_78
            ebx_78.b = *esi_6
            int32_t eax_38
            eax_38.b = not.b(ebx_78.b)
            int32_t eax_40 = data_1cd4380
            int32_t eax_42
            eax_42.b = *edi_7
            *edi_7 = eax_42.b + (*(((eax_40 + *(((eax_38
                + *(((ebx_78 - eax_38) << 2) + data_1cd43c8) - eax_40) << 2) + data_1cd4384) - eax_42)
                << 2) + edx_3)).b
            int32_t ebx_90
            ebx_90.b = esi_6[1]
            int32_t eax_44
            eax_44.b = not.b(ebx_90.b)
            int32_t eax_46 = data_1cd4388
            int32_t eax_48
            eax_48.b = edi_7[1]
            edi_7[1] = eax_48.b + (*(((eax_46 + *(((eax_44
                + *(((ebx_90 - eax_44) << 2) + data_1cd43c8) - eax_46) << 2) + data_1cd438c) - eax_48)
                << 2) + edx_3)).b
            int32_t ebx_102
            ebx_102.b = esi_6[2]
            int32_t eax_50
            eax_50.b = not.b(ebx_102.b)
            int32_t eax_52 = data_1cd4390
            int32_t eax_54
            eax_54.b = edi_7[2]
            eax_55 = eax_54.b + (*(((eax_52 + *(((eax_50
                + *(((ebx_102 - eax_50) << 2) + data_1cd43c8) - eax_52) << 2) + data_1cd4394) - eax_54)
                << 2) + edx_3)).b
            edi_7[2] = eax_55
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_114 = ebx_77
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_114 += data_1cd43ec
            
            if (ebx_114 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_77 = ebx_114 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_55
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        char* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        char eax_73
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t edx_5 = data_1cd43a4
                int32_t ebx_116
                ebx_116.b = *esi_8
                int32_t eax_56
                eax_56.b = not.b(ebx_116.b)
                int32_t eax_58 = data_1cd4380
                int32_t eax_60
                eax_60.b = *edi_10
                *edi_10 = eax_60.b + (*(((eax_58 + *(((eax_56
                    + *(((ebx_116 - eax_56) << 2) + data_1cd43c8) - eax_58) << 2) + data_1cd4384)
                    - eax_60) << 2) + edx_5)).b
                int32_t ebx_128
                ebx_128.b = esi_8[1]
                int32_t eax_62
                eax_62.b = not.b(ebx_128.b)
                int32_t eax_64 = data_1cd4388
                int32_t eax_66
                eax_66.b = edi_10[1]
                edi_10[1] = eax_66.b + (*(((eax_64 + *(((eax_62
                    + *(((ebx_128 - eax_62) << 2) + data_1cd43c8) - eax_64) << 2) + data_1cd438c)
                    - eax_66) << 2) + edx_5)).b
                int32_t ebx_140
                ebx_140.b = esi_8[2]
                int32_t eax_68
                eax_68.b = not.b(ebx_140.b)
                int32_t eax_70 = data_1cd4390
                int32_t eax_72
                eax_72.b = edi_10[2]
                eax_73 = eax_72.b + (*(((eax_70 + *(((eax_68
                    + *(((ebx_140 - eax_68) << 2) + data_1cd43c8) - eax_70) << 2) + data_1cd4394)
                    - eax_72) << 2) + edx_5)).b
                edi_10[2] = eax_73
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
        
        return eax_73
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        char* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_153 = data_1cd4414
        char eax_91
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t edx_8 = data_1cd43a4
                int32_t ebx_154
                ebx_154.b = *esi_11
                int32_t eax_74
                eax_74.b = not.b(ebx_154.b)
                int32_t eax_76 = data_1cd4380
                int32_t eax_78
                eax_78.b = *edi_13
                *edi_13 = eax_78.b + (*(((eax_76 + *(((eax_74
                    + *(((ebx_154 - eax_74) << 2) + data_1cd43c8) - eax_76) << 2) + data_1cd4384)
                    - eax_78) << 2) + edx_8)).b
                int32_t ebx_166
                ebx_166.b = esi_11[1]
                int32_t eax_80
                eax_80.b = not.b(ebx_166.b)
                int32_t eax_82 = data_1cd4388
                int32_t eax_84
                eax_84.b = edi_13[1]
                edi_13[1] = eax_84.b + (*(((eax_82 + *(((eax_80
                    + *(((ebx_166 - eax_80) << 2) + data_1cd43c8) - eax_82) << 2) + data_1cd438c)
                    - eax_84) << 2) + edx_8)).b
                int32_t ebx_178
                ebx_178.b = esi_11[2]
                int32_t eax_86
                eax_86.b = not.b(ebx_178.b)
                int32_t eax_88 = data_1cd4390
                int32_t eax_90
                eax_90.b = edi_13[2]
                eax_91 = eax_90.b + (*(((eax_88 + *(((eax_86
                    + *(((ebx_178 - eax_86) << 2) + data_1cd43c8) - eax_88) << 2) + data_1cd4394)
                    - eax_90) << 2) + edx_8)).b
                edi_13[2] = eax_91
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
            ebx_153 += data_1cd43f4
            
            if (ebx_153 s>= data_1cd43ec)
                ebx_153 -= data_1cd43ec
                esi_11 = &esi_11[data_1cd4400]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_91
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    char* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_192 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        char eax_109
        int32_t i_5
        
        do
            int32_t edx_11 = data_1cd43a4
            int32_t ebx_193
            ebx_193.b = *esi_13
            int32_t eax_92
            eax_92.b = not.b(ebx_193.b)
            int32_t eax_94 = data_1cd4380
            int32_t eax_96
            eax_96.b = *edi_16
            *edi_16 = eax_96.b + (*(((eax_94 + *(((eax_92
                + *(((ebx_193 - eax_92) << 2) + data_1cd43c8) - eax_94) << 2) + data_1cd4384) - eax_96)
                << 2) + edx_11)).b
            int32_t ebx_205
            ebx_205.b = esi_13[1]
            int32_t eax_98
            eax_98.b = not.b(ebx_205.b)
            int32_t eax_100 = data_1cd4388
            int32_t eax_102
            eax_102.b = edi_16[1]
            edi_16[1] = eax_102.b + (*(((eax_100 + *(((eax_98
                + *(((ebx_205 - eax_98) << 2) + data_1cd43c8) - eax_100) << 2) + data_1cd438c)
                - eax_102) << 2) + edx_11)).b
            int32_t ebx_217
            ebx_217.b = esi_13[2]
            int32_t eax_104
            eax_104.b = not.b(ebx_217.b)
            int32_t eax_106 = data_1cd4390
            int32_t eax_108
            eax_108.b = edi_16[2]
            eax_109 = eax_108.b + (*(((eax_106 + *(((eax_104
                + *(((ebx_217 - eax_104) << 2) + data_1cd43c8) - eax_106) << 2) + data_1cd4394)
                - eax_108) << 2) + edx_11)).b
            edi_16[2] = eax_109
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_229 = ebx_192
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_229 += data_1cd43ec
            
            if (ebx_229 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_192 = ebx_229 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_109
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
    label_5cc1a5:
        int32_t edx_14 = data_1cd43a4
        int32_t ebx_231
        ebx_231.b = *esi_15
        int32_t eax_110
        eax_110.b = not.b(ebx_231.b)
        int32_t eax_112 = data_1cd4380
        int32_t eax_114
        eax_114.b = *edi_19
        *edi_19 = eax_114.b + (*(((eax_112 + *(((eax_110
            + *(((ebx_231 - eax_110) << 2) + data_1cd43c8) - eax_112) << 2) + data_1cd4384) - eax_114)
            << 2) + edx_14)).b
        int32_t ebx_243
        ebx_243.b = esi_15[1]
        int32_t eax_116
        eax_116.b = not.b(ebx_243.b)
        int32_t eax_118 = data_1cd4388
        int32_t eax_120
        eax_120.b = edi_19[1]
        edi_19[1] = eax_120.b + (*(((eax_118 + *(((eax_116
            + *(((ebx_243 - eax_116) << 2) + data_1cd43c8) - eax_118) << 2) + data_1cd438c) - eax_120)
            << 2) + edx_14)).b
        int32_t ebx_255
        ebx_255.b = esi_15[2]
        int32_t eax_122
        eax_122.b = not.b(ebx_255.b)
        int32_t eax_124 = data_1cd4390
        int32_t eax_126
        eax_126.b = edi_19[2]
        char eax_127 = eax_126.b + (*(((eax_124 + *(((eax_122
            + *(((ebx_255 - eax_122) << 2) + data_1cd43c8) - eax_124) << 2) + data_1cd4394) - eax_126)
            << 2) + edx_14)).b
        edi_19[2] = eax_127
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
                    goto label_5cc28c
                
                goto label_5cc1a5
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5cc28c:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_127
                
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
    int32_t ebx_268 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5cc2dc:
        int32_t edx_17 = data_1cd43a4
        int32_t ebx_269
        ebx_269.b = *esi_18
        int32_t eax_128
        eax_128.b = not.b(ebx_269.b)
        int32_t eax_130 = data_1cd4380
        int32_t eax_132
        eax_132.b = *edi_22
        *edi_22 = eax_132.b + (*(((eax_130 + *(((eax_128
            + *(((ebx_269 - eax_128) << 2) + data_1cd43c8) - eax_130) << 2) + data_1cd4384) - eax_132)
            << 2) + edx_17)).b
        int32_t ebx_281
        ebx_281.b = esi_18[1]
        int32_t eax_134
        eax_134.b = not.b(ebx_281.b)
        int32_t eax_136 = data_1cd4388
        int32_t eax_138
        eax_138.b = edi_22[1]
        edi_22[1] = eax_138.b + (*(((eax_136 + *(((eax_134
            + *(((ebx_281 - eax_134) << 2) + data_1cd43c8) - eax_136) << 2) + data_1cd438c) - eax_138)
            << 2) + edx_17)).b
        int32_t ebx_293
        ebx_293.b = esi_18[2]
        int32_t eax_140
        eax_140.b = not.b(ebx_293.b)
        int32_t eax_142 = data_1cd4390
        int32_t eax_144
        eax_144.b = edi_22[2]
        char eax_145 = eax_144.b + (*(((eax_142 + *(((eax_140
            + *(((ebx_293 - eax_140) << 2) + data_1cd43c8) - eax_142) << 2) + data_1cd4394) - eax_144)
            << 2) + edx_17)).b
        edi_22[2] = eax_145
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
                    goto label_5cc3c2
                
                goto label_5cc2dc
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5cc3c2:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_268 += data_1cd43f4
                
                if (ebx_268 s>= data_1cd43ec)
                    ebx_268 -= data_1cd43ec
                    esi_18 = &esi_18[data_1cd4400]
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_145
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    char* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_307 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5cc41c:
        int32_t edx_20 = data_1cd43a4
        int32_t ebx_308
        ebx_308.b = *esi_20
        int32_t eax_146
        eax_146.b = not.b(ebx_308.b)
        int32_t eax_148 = data_1cd4380
        int32_t eax_150
        eax_150.b = *edi_25
        *edi_25 = eax_150.b + (*(((eax_148 + *(((eax_146
            + *(((ebx_308 - eax_146) << 2) + data_1cd43c8) - eax_148) << 2) + data_1cd4384) - eax_150)
            << 2) + edx_20)).b
        int32_t ebx_320
        ebx_320.b = esi_20[1]
        int32_t eax_152
        eax_152.b = not.b(ebx_320.b)
        int32_t eax_154 = data_1cd4388
        int32_t eax_156
        eax_156.b = edi_25[1]
        edi_25[1] = eax_156.b + (*(((eax_154 + *(((eax_152
            + *(((ebx_320 - eax_152) << 2) + data_1cd43c8) - eax_154) << 2) + data_1cd438c) - eax_156)
            << 2) + edx_20)).b
        int32_t ebx_332
        ebx_332.b = esi_20[2]
        int32_t eax_158
        eax_158.b = not.b(ebx_332.b)
        int32_t eax_160 = data_1cd4390
        int32_t eax_162
        eax_162.b = edi_25[2]
        char eax_163 = eax_162.b + (*(((eax_160 + *(((eax_158
            + *(((ebx_332 - eax_158) << 2) + data_1cd43c8) - eax_160) << 2) + data_1cd4394) - eax_162)
            << 2) + edx_20)).b
        edi_25[2] = eax_163
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
                    goto label_5cc500
                
                goto label_5cc41c
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5cc500:
                int32_t ebx_344 = ebx_307
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_344 += data_1cd43ec
                    
                    if (ebx_344 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_307 = ebx_344 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_163
                
                break

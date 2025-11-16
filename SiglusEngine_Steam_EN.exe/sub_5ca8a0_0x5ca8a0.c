// 函数: sub_5ca8a0
// 地址: 0x5ca8a0
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
                int32_t ebx_1
                ebx_1.b = *esi_1
                int32_t eax_2
                eax_2.b = not.b(ebx_1.b)
                int32_t eax_4 = data_1cd4380
                *edi_1 = eax_4.b + (*(((eax_2 + *(((ebx_1 - eax_2) << 2) + data_1cd43c8) - eax_4)
                    << 2) + data_1cd4384)).b
                int32_t ebx_10
                ebx_10.b = esi_1[1]
                int32_t eax_6
                eax_6.b = not.b(ebx_10.b)
                int32_t eax_8 = data_1cd4388
                edi_1[1] = eax_8.b + (*(((eax_6 + *(((ebx_10 - eax_6) << 2) + data_1cd43c8) - eax_8)
                    << 2) + data_1cd438c)).b
                int32_t ebx_19
                ebx_19.b = esi_1[2]
                int32_t eax_10
                eax_10.b = not.b(ebx_19.b)
                int32_t eax_12 = data_1cd4390
                eax_13 = eax_12.b + (*(((eax_10 + *(((ebx_19 - eax_10) << 2) + data_1cd43c8)
                    - eax_12) << 2) + data_1cd4394)).b
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
        int32_t ebx_29 = data_1cd4414
        char eax_25
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_30
                ebx_30.b = *esi_4
                int32_t eax_14
                eax_14.b = not.b(ebx_30.b)
                int32_t eax_16 = data_1cd4380
                *edi_4 = eax_16.b + (*(((eax_14 + *(((ebx_30 - eax_14) << 2) + data_1cd43c8)
                    - eax_16) << 2) + data_1cd4384)).b
                int32_t ebx_39
                ebx_39.b = esi_4[1]
                int32_t eax_18
                eax_18.b = not.b(ebx_39.b)
                int32_t eax_20 = data_1cd4388
                edi_4[1] = eax_20.b + (*(((eax_18 + *(((ebx_39 - eax_18) << 2) + data_1cd43c8)
                    - eax_20) << 2) + data_1cd438c)).b
                int32_t ebx_48
                ebx_48.b = esi_4[2]
                int32_t eax_22
                eax_22.b = not.b(ebx_48.b)
                int32_t eax_24 = data_1cd4390
                eax_25 = eax_24.b + (*(((eax_22 + *(((ebx_48 - eax_22) << 2) + data_1cd43c8)
                    - eax_24) << 2) + data_1cd4394)).b
                edi_4[2] = eax_25
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_29 += data_1cd43f4
            
            if (ebx_29 s>= data_1cd43ec)
                ebx_29 -= data_1cd43ec
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
    int32_t ebx_59 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        char eax_37
        int32_t i_2
        
        do
            int32_t ebx_60
            ebx_60.b = *esi_6
            int32_t eax_26
            eax_26.b = not.b(ebx_60.b)
            int32_t eax_28 = data_1cd4380
            *edi_7 = eax_28.b + (*(((eax_26 + *(((ebx_60 - eax_26) << 2) + data_1cd43c8) - eax_28)
                << 2) + data_1cd4384)).b
            int32_t ebx_69
            ebx_69.b = esi_6[1]
            int32_t eax_30
            eax_30.b = not.b(ebx_69.b)
            int32_t eax_32 = data_1cd4388
            edi_7[1] = eax_32.b + (*(((eax_30 + *(((ebx_69 - eax_30) << 2) + data_1cd43c8) - eax_32)
                << 2) + data_1cd438c)).b
            int32_t ebx_78
            ebx_78.b = esi_6[2]
            int32_t eax_34
            eax_34.b = not.b(ebx_78.b)
            int32_t eax_36 = data_1cd4390
            eax_37 = eax_36.b + (*(((eax_34 + *(((ebx_78 - eax_34) << 2) + data_1cd43c8) - eax_36)
                << 2) + data_1cd4394)).b
            edi_7[2] = eax_37
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_87 = ebx_59
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_87 += data_1cd43ec
            
            if (ebx_87 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_59 = ebx_87 - data_1cd43f4
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
            int32_t edx_1 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t ebx_89
                ebx_89.b = *esi_8
                int32_t eax_38
                eax_38.b = not.b(ebx_89.b)
                int32_t eax_40 = data_1cd4380
                *edi_10 = eax_40.b + (*(((eax_38 + *(((ebx_89 - eax_38) << 2) + data_1cd43c8)
                    - eax_40) << 2) + data_1cd4384)).b
                int32_t ebx_98
                ebx_98.b = esi_8[1]
                int32_t eax_42
                eax_42.b = not.b(ebx_98.b)
                int32_t eax_44 = data_1cd4388
                edi_10[1] = eax_44.b + (*(((eax_42 + *(((ebx_98 - eax_42) << 2) + data_1cd43c8)
                    - eax_44) << 2) + data_1cd438c)).b
                int32_t ebx_107
                ebx_107.b = esi_8[2]
                int32_t eax_46
                eax_46.b = not.b(ebx_107.b)
                int32_t eax_48 = data_1cd4390
                eax_49 = eax_48.b + (*(((eax_46 + *(((ebx_107 - eax_46) << 2) + data_1cd43c8)
                    - eax_48) << 2) + data_1cd4394)).b
                edi_10[2] = eax_49
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
        int32_t ebx_117 = data_1cd4414
        char eax_61
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_3 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_118
                ebx_118.b = *esi_11
                int32_t eax_50
                eax_50.b = not.b(ebx_118.b)
                int32_t eax_52 = data_1cd4380
                *edi_13 = eax_52.b + (*(((eax_50 + *(((ebx_118 - eax_50) << 2) + data_1cd43c8)
                    - eax_52) << 2) + data_1cd4384)).b
                int32_t ebx_127
                ebx_127.b = esi_11[1]
                int32_t eax_54
                eax_54.b = not.b(ebx_127.b)
                int32_t eax_56 = data_1cd4388
                edi_13[1] = eax_56.b + (*(((eax_54 + *(((ebx_127 - eax_54) << 2) + data_1cd43c8)
                    - eax_56) << 2) + data_1cd438c)).b
                int32_t ebx_136
                ebx_136.b = esi_11[2]
                int32_t eax_58
                eax_58.b = not.b(ebx_136.b)
                int32_t eax_60 = data_1cd4390
                eax_61 = eax_60.b + (*(((eax_58 + *(((ebx_136 - eax_58) << 2) + data_1cd43c8)
                    - eax_60) << 2) + data_1cd4394)).b
                edi_13[2] = eax_61
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
            ebx_117 += data_1cd43f4
            
            if (ebx_117 s>= data_1cd43ec)
                ebx_117 -= data_1cd43ec
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
    int32_t ebx_147 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_5 = data_1cd4418
        int32_t i_11 = data_1cd4410
        char eax_73
        int32_t i_5
        
        do
            int32_t ebx_148
            ebx_148.b = *esi_13
            int32_t eax_62
            eax_62.b = not.b(ebx_148.b)
            int32_t eax_64 = data_1cd4380
            *edi_16 = eax_64.b + (*(((eax_62 + *(((ebx_148 - eax_62) << 2) + data_1cd43c8) - eax_64)
                << 2) + data_1cd4384)).b
            int32_t ebx_157
            ebx_157.b = esi_13[1]
            int32_t eax_66
            eax_66.b = not.b(ebx_157.b)
            int32_t eax_68 = data_1cd4388
            edi_16[1] = eax_68.b + (*(((eax_66 + *(((ebx_157 - eax_66) << 2) + data_1cd43c8)
                - eax_68) << 2) + data_1cd438c)).b
            int32_t ebx_166
            ebx_166.b = esi_13[2]
            int32_t eax_70
            eax_70.b = not.b(ebx_166.b)
            int32_t eax_72 = data_1cd4390
            eax_73 = eax_72.b + (*(((eax_70 + *(((ebx_166 - eax_70) << 2) + data_1cd43c8) - eax_72)
                << 2) + data_1cd4394)).b
            edi_16[2] = eax_73
            edi_16 = &edi_16[4]
            edx_5 += data_1cd43f8
            
            if (edx_5 s>= data_1cd43f0)
                edx_5 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_175 = ebx_147
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_175 += data_1cd43ec
            
            if (ebx_175 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_147 = ebx_175 - data_1cd43f4
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
    label_5ca587:
        int32_t ebx_177
        ebx_177.b = *esi_15
        int32_t eax_74
        eax_74.b = not.b(ebx_177.b)
        int32_t eax_76 = data_1cd4380
        *edi_19 = eax_76.b + (*
            (((eax_74 + *(((ebx_177 - eax_74) << 2) + data_1cd43c8) - eax_76) << 2) + data_1cd4384)).b
        int32_t ebx_186
        ebx_186.b = esi_15[1]
        int32_t eax_78
        eax_78.b = not.b(ebx_186.b)
        int32_t eax_80 = data_1cd4388
        edi_19[1] = eax_80.b + (*
            (((eax_78 + *(((ebx_186 - eax_78) << 2) + data_1cd43c8) - eax_80) << 2) + data_1cd438c)).b
        int32_t ebx_195
        ebx_195.b = esi_15[2]
        int32_t eax_82
        eax_82.b = not.b(ebx_195.b)
        int32_t eax_84 = data_1cd4390
        char eax_85 = eax_84.b + (*
            (((eax_82 + *(((ebx_195 - eax_82) << 2) + data_1cd43c8) - eax_84) << 2) + data_1cd4394)).b
        edi_19[2] = eax_85
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
                    goto label_5ca63d
                
                goto label_5ca587
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5ca63d:
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
    int32_t ebx_205 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_9 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5ca68e:
        int32_t ebx_206
        ebx_206.b = *esi_18
        int32_t eax_86
        eax_86.b = not.b(ebx_206.b)
        int32_t eax_88 = data_1cd4380
        *edi_22 = eax_88.b + (*
            (((eax_86 + *(((ebx_206 - eax_86) << 2) + data_1cd43c8) - eax_88) << 2) + data_1cd4384)).b
        int32_t ebx_215
        ebx_215.b = esi_18[1]
        int32_t eax_90
        eax_90.b = not.b(ebx_215.b)
        int32_t eax_92 = data_1cd4388
        edi_22[1] = eax_92.b + (*
            (((eax_90 + *(((ebx_215 - eax_90) << 2) + data_1cd43c8) - eax_92) << 2) + data_1cd438c)).b
        int32_t ebx_224
        ebx_224.b = esi_18[2]
        int32_t eax_94
        eax_94.b = not.b(ebx_224.b)
        int32_t eax_96 = data_1cd4390
        char eax_97 = eax_96.b + (*
            (((eax_94 + *(((ebx_224 - eax_94) << 2) + data_1cd43c8) - eax_96) << 2) + data_1cd4394)).b
        edi_22[2] = eax_97
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
                    goto label_5ca743
                
                goto label_5ca68e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5ca743:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_205 += data_1cd43f4
                
                if (ebx_205 s>= data_1cd43ec)
                    ebx_205 -= data_1cd43ec
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
    int32_t ebx_235 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_11 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5ca7ae:
        int32_t ebx_236
        ebx_236.b = *esi_20
        int32_t eax_98
        eax_98.b = not.b(ebx_236.b)
        int32_t eax_100 = data_1cd4380
        *edi_25 = eax_100.b + (*(((eax_98 + *(((ebx_236 - eax_98) << 2) + data_1cd43c8) - eax_100)
            << 2) + data_1cd4384)).b
        int32_t ebx_245
        ebx_245.b = esi_20[1]
        int32_t eax_102
        eax_102.b = not.b(ebx_245.b)
        int32_t eax_104 = data_1cd4388
        edi_25[1] = eax_104.b + (*(((eax_102 + *(((ebx_245 - eax_102) << 2) + data_1cd43c8)
            - eax_104) << 2) + data_1cd438c)).b
        int32_t ebx_254
        ebx_254.b = esi_20[2]
        int32_t eax_106
        eax_106.b = not.b(ebx_254.b)
        int32_t eax_108 = data_1cd4390
        char eax_109 = eax_108.b + (*(((eax_106 + *(((ebx_254 - eax_106) << 2) + data_1cd43c8)
            - eax_108) << 2) + data_1cd4394)).b
        edi_25[2] = eax_109
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
                    goto label_5ca861
                
                goto label_5ca7ae
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5ca861:
                int32_t ebx_263 = ebx_235
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_263 += data_1cd43ec
                    
                    if (ebx_263 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_235 = ebx_263 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_109
                
                break

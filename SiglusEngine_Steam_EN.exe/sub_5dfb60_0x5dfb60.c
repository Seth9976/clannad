// 函数: sub_5dfb60
// 地址: 0x5dfb60
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
        int32_t eax_2
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                eax_2.b = esi_1[3]
                eax_2.b = eax_2.b
                
                if (eax_2.b != 0)
                    if (eax_2 == 0xff)
                        int32_t ebx_4
                        ebx_4.b = *esi_1
                        int32_t eax_4
                        eax_4.b = not.b(ebx_4.b)
                        int32_t eax_6
                        eax_6.b = *edi_1
                        int32_t eax_7 = eax_6 - (eax_4 + *(((ebx_4 - eax_4) << 2) + data_1cd43c8))
                        
                        if (eax_7 s< 0)
                            eax_7 = 0
                        
                        *edi_1 = eax_7.b
                        int32_t ebx_9
                        ebx_9.b = esi_1[1]
                        int32_t eax_8
                        eax_8.b = not.b(ebx_9.b)
                        int32_t eax_10
                        eax_10.b = edi_1[1]
                        int32_t eax_11 = eax_10 - (eax_8 + *(((ebx_9 - eax_8) << 2) + data_1cd43c8))
                        
                        if (eax_11 s< 0)
                            eax_11 = 0
                        
                        edi_1[1] = eax_11.b
                        int32_t ebx_14
                        ebx_14.b = esi_1[2]
                        int32_t eax_12
                        eax_12.b = not.b(ebx_14.b)
                        int32_t eax_14
                        eax_14.b = edi_1[2]
                        eax_2 = eax_14 - (eax_12 + *(((ebx_14 - eax_12) << 2) + data_1cd43c8))
                        
                        if (eax_2 s< 0)
                            eax_2 = 0
                        
                        edi_1[2] = eax_2.b
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_19
                        ebx_19.b = *esi_1
                        int32_t eax_15
                        eax_15.b = not.b(ebx_19.b)
                        int32_t eax_17
                        eax_17.b = *edi_1
                        int32_t eax_18 = eax_17 -
                            *(((eax_15 + *(((ebx_19 - eax_15) << 2) + data_1cd43c8)) << 2) + edx_1)
                        
                        if (eax_18 s< 0)
                            eax_18 = 0
                        
                        *edi_1 = eax_18.b
                        int32_t ebx_27
                        ebx_27.b = esi_1[1]
                        int32_t eax_19
                        eax_19.b = not.b(ebx_27.b)
                        int32_t eax_21
                        eax_21.b = edi_1[1]
                        int32_t eax_22 = eax_21 -
                            *(((eax_19 + *(((ebx_27 - eax_19) << 2) + data_1cd43c8)) << 2) + edx_1)
                        
                        if (eax_22 s< 0)
                            eax_22 = 0
                        
                        edi_1[1] = eax_22.b
                        int32_t ebx_35
                        ebx_35.b = esi_1[2]
                        int32_t eax_23
                        eax_23.b = not.b(ebx_35.b)
                        int32_t eax_25
                        eax_25.b = edi_1[2]
                        eax_2 = eax_25 -
                            *(((eax_23 + *(((ebx_35 - eax_23) << 2) + data_1cd43c8)) << 2) + edx_1)
                        
                        if (eax_2 s< 0)
                            eax_2 = 0
                        
                        edi_1[2] = eax_2.b
                
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
        
        return eax_2
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        void* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_44 = data_1cd4414
        int32_t eax_26
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                eax_26.b = *(esi_4 + 3)
                eax_26.b = eax_26.b
                
                if (eax_26.b != 0)
                    if (eax_26 == 0xff)
                        int32_t ebx_48
                        ebx_48.b = *esi_4
                        int32_t eax_28
                        eax_28.b = not.b(ebx_48.b)
                        int32_t eax_30
                        eax_30.b = *edi_4
                        int32_t eax_31 =
                            eax_30 - (eax_28 + *(((ebx_48 - eax_28) << 2) + data_1cd43c8))
                        
                        if (eax_31 s< 0)
                            eax_31 = 0
                        
                        *edi_4 = eax_31.b
                        int32_t ebx_53
                        ebx_53.b = *(esi_4 + 1)
                        int32_t eax_32
                        eax_32.b = not.b(ebx_53.b)
                        int32_t eax_34
                        eax_34.b = edi_4[1]
                        int32_t eax_35 =
                            eax_34 - (eax_32 + *(((ebx_53 - eax_32) << 2) + data_1cd43c8))
                        
                        if (eax_35 s< 0)
                            eax_35 = 0
                        
                        edi_4[1] = eax_35.b
                        int32_t ebx_58
                        ebx_58.b = *(esi_4 + 2)
                        int32_t eax_36
                        eax_36.b = not.b(ebx_58.b)
                        int32_t eax_38
                        eax_38.b = edi_4[2]
                        eax_26 = eax_38 - (eax_36 + *(((ebx_58 - eax_36) << 2) + data_1cd43c8))
                        
                        if (eax_26 s< 0)
                            eax_26 = 0
                        
                        edi_4[2] = eax_26.b
                    else
                        int32_t edx_2 = *((eax_26 << 2) + data_1cd4328)
                        int32_t ebx_63
                        ebx_63.b = *esi_4
                        int32_t eax_39
                        eax_39.b = not.b(ebx_63.b)
                        int32_t eax_41
                        eax_41.b = *edi_4
                        int32_t eax_42 = eax_41 -
                            *(((eax_39 + *(((ebx_63 - eax_39) << 2) + data_1cd43c8)) << 2) + edx_2)
                        
                        if (eax_42 s< 0)
                            eax_42 = 0
                        
                        *edi_4 = eax_42.b
                        int32_t ebx_71
                        ebx_71.b = *(esi_4 + 1)
                        int32_t eax_43
                        eax_43.b = not.b(ebx_71.b)
                        int32_t eax_45
                        eax_45.b = edi_4[1]
                        int32_t eax_46 = eax_45 -
                            *(((eax_43 + *(((ebx_71 - eax_43) << 2) + data_1cd43c8)) << 2) + edx_2)
                        
                        if (eax_46 s< 0)
                            eax_46 = 0
                        
                        edi_4[1] = eax_46.b
                        int32_t ebx_79
                        ebx_79.b = *(esi_4 + 2)
                        int32_t eax_47
                        eax_47.b = not.b(ebx_79.b)
                        int32_t eax_49
                        eax_49.b = edi_4[2]
                        eax_26 = eax_49 -
                            *(((eax_47 + *(((ebx_79 - eax_47) << 2) + data_1cd43c8)) << 2) + edx_2)
                        
                        if (eax_26 s< 0)
                            eax_26 = 0
                        
                        edi_4[2] = eax_26.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_44 += data_1cd43f4
            
            if (ebx_44 s>= data_1cd43ec)
                ebx_44 -= data_1cd43ec
                esi_4 += data_1cd4400
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_26
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    void* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_89 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t eax_50
        int32_t i_2
        
        do
            eax_50.b = *(esi_6 + 3)
            eax_50.b = eax_50.b
            
            if (eax_50.b != 0)
                if (eax_50 == 0xff)
                    int32_t ebx_93
                    ebx_93.b = *esi_6
                    int32_t eax_52
                    eax_52.b = not.b(ebx_93.b)
                    int32_t eax_54
                    eax_54.b = *edi_7
                    int32_t eax_55 = eax_54 - (eax_52 + *(((ebx_93 - eax_52) << 2) + data_1cd43c8))
                    
                    if (eax_55 s< 0)
                        eax_55 = 0
                    
                    *edi_7 = eax_55.b
                    int32_t ebx_98
                    ebx_98.b = *(esi_6 + 1)
                    int32_t eax_56
                    eax_56.b = not.b(ebx_98.b)
                    int32_t eax_58
                    eax_58.b = edi_7[1]
                    int32_t eax_59 = eax_58 - (eax_56 + *(((ebx_98 - eax_56) << 2) + data_1cd43c8))
                    
                    if (eax_59 s< 0)
                        eax_59 = 0
                    
                    edi_7[1] = eax_59.b
                    int32_t ebx_103
                    ebx_103.b = *(esi_6 + 2)
                    int32_t eax_60
                    eax_60.b = not.b(ebx_103.b)
                    int32_t eax_62
                    eax_62.b = edi_7[2]
                    eax_50 = eax_62 - (eax_60 + *(((ebx_103 - eax_60) << 2) + data_1cd43c8))
                    
                    if (eax_50 s< 0)
                        eax_50 = 0
                    
                    edi_7[2] = eax_50.b
                else
                    int32_t edx_3 = *((eax_50 << 2) + data_1cd4328)
                    int32_t ebx_108
                    ebx_108.b = *esi_6
                    int32_t eax_63
                    eax_63.b = not.b(ebx_108.b)
                    int32_t eax_65
                    eax_65.b = *edi_7
                    int32_t eax_66 = eax_65
                        - *(((eax_63 + *(((ebx_108 - eax_63) << 2) + data_1cd43c8)) << 2) + edx_3)
                    
                    if (eax_66 s< 0)
                        eax_66 = 0
                    
                    *edi_7 = eax_66.b
                    int32_t ebx_116
                    ebx_116.b = *(esi_6 + 1)
                    int32_t eax_67
                    eax_67.b = not.b(ebx_116.b)
                    int32_t eax_69
                    eax_69.b = edi_7[1]
                    int32_t eax_70 = eax_69
                        - *(((eax_67 + *(((ebx_116 - eax_67) << 2) + data_1cd43c8)) << 2) + edx_3)
                    
                    if (eax_70 s< 0)
                        eax_70 = 0
                    
                    edi_7[1] = eax_70.b
                    int32_t ebx_124
                    ebx_124.b = *(esi_6 + 2)
                    int32_t eax_71
                    eax_71.b = not.b(ebx_124.b)
                    int32_t eax_73
                    eax_73.b = edi_7[2]
                    eax_50 = eax_73
                        - *(((eax_71 + *(((ebx_124 - eax_71) << 2) + data_1cd43c8)) << 2) + edx_3)
                    
                    if (eax_50 s< 0)
                        eax_50 = 0
                    
                    edi_7[2] = eax_50.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_132 = ebx_89
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_132 += data_1cd43ec
            
            if (ebx_132 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_89 = ebx_132 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_50
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        void* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_74
        
        while (true)
            void* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                eax_74.b = *(esi_8 + 3)
                eax_74.b = eax_74.b
                
                if (eax_74.b != 0)
                    if (eax_74 == 0xff)
                        int32_t ebx_137
                        ebx_137.b = *esi_8
                        int32_t eax_76
                        eax_76.b = not.b(ebx_137.b)
                        int32_t eax_78
                        eax_78.b = *edi_10
                        int32_t eax_79 =
                            eax_78 - (eax_76 + *(((ebx_137 - eax_76) << 2) + data_1cd43c8))
                        
                        if (eax_79 s< 0)
                            eax_79 = 0
                        
                        *edi_10 = eax_79.b
                        int32_t ebx_142
                        ebx_142.b = *(esi_8 + 1)
                        int32_t eax_80
                        eax_80.b = not.b(ebx_142.b)
                        int32_t eax_82
                        eax_82.b = edi_10[1]
                        int32_t eax_83 =
                            eax_82 - (eax_80 + *(((ebx_142 - eax_80) << 2) + data_1cd43c8))
                        
                        if (eax_83 s< 0)
                            eax_83 = 0
                        
                        edi_10[1] = eax_83.b
                        int32_t ebx_147
                        ebx_147.b = *(esi_8 + 2)
                        int32_t eax_84
                        eax_84.b = not.b(ebx_147.b)
                        int32_t eax_86
                        eax_86.b = edi_10[2]
                        eax_74 = eax_86 - (eax_84 + *(((ebx_147 - eax_84) << 2) + data_1cd43c8))
                        
                        if (eax_74 s< 0)
                            eax_74 = 0
                        
                        edi_10[2] = eax_74.b
                    else
                        int32_t edx_5 = *((eax_74 << 2) + data_1cd4328)
                        int32_t ebx_152
                        ebx_152.b = *esi_8
                        int32_t eax_87
                        eax_87.b = not.b(ebx_152.b)
                        int32_t eax_89
                        eax_89.b = *edi_10
                        int32_t eax_90 = eax_89 -
                            *(((eax_87 + *(((ebx_152 - eax_87) << 2) + data_1cd43c8)) << 2) + edx_5)
                        
                        if (eax_90 s< 0)
                            eax_90 = 0
                        
                        *edi_10 = eax_90.b
                        int32_t ebx_160
                        ebx_160.b = *(esi_8 + 1)
                        int32_t eax_91
                        eax_91.b = not.b(ebx_160.b)
                        int32_t eax_93
                        eax_93.b = edi_10[1]
                        int32_t eax_94 = eax_93 -
                            *(((eax_91 + *(((ebx_160 - eax_91) << 2) + data_1cd43c8)) << 2) + edx_5)
                        
                        if (eax_94 s< 0)
                            eax_94 = 0
                        
                        edi_10[1] = eax_94.b
                        int32_t ebx_168
                        ebx_168.b = *(esi_8 + 2)
                        int32_t eax_95
                        eax_95.b = not.b(ebx_168.b)
                        int32_t eax_97
                        eax_97.b = edi_10[2]
                        eax_74 = eax_97 -
                            *(((eax_95 + *(((ebx_168 - eax_95) << 2) + data_1cd43c8)) << 2) + edx_5)
                        
                        if (eax_74 s< 0)
                            eax_74 = 0
                        
                        edi_10[2] = eax_74.b
                
                edi_10 = &edi_10[4]
                edx_4 += data_1cd43f8
                
                if (edx_4 s>= data_1cd43f0)
                    edx_4 -= data_1cd43f0
                    esi_8 += 4
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp6_1 = ecx_7
            ecx_7 -= 1
            
            if (temp6_1 == 1)
                break
            
            esi_8 = var_14_4 + data_1cd4400
            edi_10 = &var_18_4[data_1cd43fc]
        
        return eax_74
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_177 = data_1cd4414
        int32_t eax_98
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                eax_98.b = *(esi_11 + 3)
                eax_98.b = eax_98.b
                
                if (eax_98.b != 0)
                    if (eax_98 == 0xff)
                        int32_t ebx_181
                        ebx_181.b = *esi_11
                        int32_t eax_100
                        eax_100.b = not.b(ebx_181.b)
                        int32_t eax_102
                        eax_102.b = *edi_13
                        int32_t eax_103 =
                            eax_102 - (eax_100 + *(((ebx_181 - eax_100) << 2) + data_1cd43c8))
                        
                        if (eax_103 s< 0)
                            eax_103 = 0
                        
                        *edi_13 = eax_103.b
                        int32_t ebx_186
                        ebx_186.b = *(esi_11 + 1)
                        int32_t eax_104
                        eax_104.b = not.b(ebx_186.b)
                        int32_t eax_106
                        eax_106.b = edi_13[1]
                        int32_t eax_107 =
                            eax_106 - (eax_104 + *(((ebx_186 - eax_104) << 2) + data_1cd43c8))
                        
                        if (eax_107 s< 0)
                            eax_107 = 0
                        
                        edi_13[1] = eax_107.b
                        int32_t ebx_191
                        ebx_191.b = *(esi_11 + 2)
                        int32_t eax_108
                        eax_108.b = not.b(ebx_191.b)
                        int32_t eax_110
                        eax_110.b = edi_13[2]
                        eax_98 = eax_110 - (eax_108 + *(((ebx_191 - eax_108) << 2) + data_1cd43c8))
                        
                        if (eax_98 s< 0)
                            eax_98 = 0
                        
                        edi_13[2] = eax_98.b
                    else
                        int32_t edx_8 = *((eax_98 << 2) + data_1cd4328)
                        int32_t ebx_196
                        ebx_196.b = *esi_11
                        int32_t eax_111
                        eax_111.b = not.b(ebx_196.b)
                        int32_t eax_113
                        eax_113.b = *edi_13
                        int32_t eax_114 = eax_113 - *(((eax_111
                            + *(((ebx_196 - eax_111) << 2) + data_1cd43c8)) << 2) + edx_8)
                        
                        if (eax_114 s< 0)
                            eax_114 = 0
                        
                        *edi_13 = eax_114.b
                        int32_t ebx_204
                        ebx_204.b = *(esi_11 + 1)
                        int32_t eax_115
                        eax_115.b = not.b(ebx_204.b)
                        int32_t eax_117
                        eax_117.b = edi_13[1]
                        int32_t eax_118 = eax_117 - *(((eax_115
                            + *(((ebx_204 - eax_115) << 2) + data_1cd43c8)) << 2) + edx_8)
                        
                        if (eax_118 s< 0)
                            eax_118 = 0
                        
                        edi_13[1] = eax_118.b
                        int32_t ebx_212
                        ebx_212.b = *(esi_11 + 2)
                        int32_t eax_119
                        eax_119.b = not.b(ebx_212.b)
                        int32_t eax_121
                        eax_121.b = edi_13[2]
                        eax_98 = eax_121 - *(((eax_119
                            + *(((ebx_212 - eax_119) << 2) + data_1cd43c8)) << 2) + edx_8)
                        
                        if (eax_98 s< 0)
                            eax_98 = 0
                        
                        edi_13[2] = eax_98.b
                
                edi_13 = &edi_13[4]
                edx_7 += data_1cd43f8
                
                if (edx_7 s>= data_1cd43f0)
                    edx_7 -= data_1cd43f0
                    esi_11 += 4
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_11 = var_14_5
            edi_13 = &var_18_5[data_1cd43fc]
            ebx_177 += data_1cd43f4
            
            if (ebx_177 s>= data_1cd43ec)
                ebx_177 -= data_1cd43ec
                esi_11 += data_1cd4400
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_98
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    void* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_222 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t eax_122
        int32_t i_5
        
        do
            eax_122.b = *(esi_13 + 3)
            eax_122.b = eax_122.b
            
            if (eax_122.b != 0)
                if (eax_122 == 0xff)
                    int32_t ebx_226
                    ebx_226.b = *esi_13
                    int32_t eax_124
                    eax_124.b = not.b(ebx_226.b)
                    int32_t eax_126
                    eax_126.b = *edi_16
                    int32_t eax_127 =
                        eax_126 - (eax_124 + *(((ebx_226 - eax_124) << 2) + data_1cd43c8))
                    
                    if (eax_127 s< 0)
                        eax_127 = 0
                    
                    *edi_16 = eax_127.b
                    int32_t ebx_231
                    ebx_231.b = *(esi_13 + 1)
                    int32_t eax_128
                    eax_128.b = not.b(ebx_231.b)
                    int32_t eax_130
                    eax_130.b = edi_16[1]
                    int32_t eax_131 =
                        eax_130 - (eax_128 + *(((ebx_231 - eax_128) << 2) + data_1cd43c8))
                    
                    if (eax_131 s< 0)
                        eax_131 = 0
                    
                    edi_16[1] = eax_131.b
                    int32_t ebx_236
                    ebx_236.b = *(esi_13 + 2)
                    int32_t eax_132
                    eax_132.b = not.b(ebx_236.b)
                    int32_t eax_134
                    eax_134.b = edi_16[2]
                    eax_122 = eax_134 - (eax_132 + *(((ebx_236 - eax_132) << 2) + data_1cd43c8))
                    
                    if (eax_122 s< 0)
                        eax_122 = 0
                    
                    edi_16[2] = eax_122.b
                else
                    int32_t edx_11 = *((eax_122 << 2) + data_1cd4328)
                    int32_t ebx_241
                    ebx_241.b = *esi_13
                    int32_t eax_135
                    eax_135.b = not.b(ebx_241.b)
                    int32_t eax_137
                    eax_137.b = *edi_16
                    int32_t eax_138 = eax_137 -
                        *(((eax_135 + *(((ebx_241 - eax_135) << 2) + data_1cd43c8)) << 2) + edx_11)
                    
                    if (eax_138 s< 0)
                        eax_138 = 0
                    
                    *edi_16 = eax_138.b
                    int32_t ebx_249
                    ebx_249.b = *(esi_13 + 1)
                    int32_t eax_139
                    eax_139.b = not.b(ebx_249.b)
                    int32_t eax_141
                    eax_141.b = edi_16[1]
                    int32_t eax_142 = eax_141 -
                        *(((eax_139 + *(((ebx_249 - eax_139) << 2) + data_1cd43c8)) << 2) + edx_11)
                    
                    if (eax_142 s< 0)
                        eax_142 = 0
                    
                    edi_16[1] = eax_142.b
                    int32_t ebx_257
                    ebx_257.b = *(esi_13 + 2)
                    int32_t eax_143
                    eax_143.b = not.b(ebx_257.b)
                    int32_t eax_145
                    eax_145.b = edi_16[2]
                    eax_122 = eax_145 -
                        *(((eax_143 + *(((ebx_257 - eax_143) << 2) + data_1cd43c8)) << 2) + edx_11)
                    
                    if (eax_122 s< 0)
                        eax_122 = 0
                    
                    edi_16[2] = eax_122.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_265 = ebx_222
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_265 += data_1cd43ec
            
            if (ebx_265 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_222 = ebx_265 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_122
else if (eax == ecx_1)
    int32_t var_4_6 = ebx
    int32_t var_8_6 = esi
    int32_t var_c_6 = edi
    void* esi_15 = data_1cd4408
    char* edi_19 = data_1cd4404
    int32_t ecx_12 = data_1cd440c
    
    while (true)
        void* var_14_7 = esi_15
        char* var_18_7 = edi_19
        int32_t edx_13 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5df667:
        int32_t eax_146
        eax_146.b = *(esi_15 + 3)
        eax_146.b = eax_146.b
        
        if (eax_146.b != 0)
            if (eax_146 == 0xff)
                int32_t ebx_270
                ebx_270.b = *esi_15
                int32_t eax_148
                eax_148.b = not.b(ebx_270.b)
                int32_t eax_150
                eax_150.b = *edi_19
                int32_t eax_151 = eax_150 - (eax_148 + *(((ebx_270 - eax_148) << 2) + data_1cd43c8))
                
                if (eax_151 s< 0)
                    eax_151 = 0
                
                *edi_19 = eax_151.b
                int32_t ebx_275
                ebx_275.b = *(esi_15 + 1)
                int32_t eax_152
                eax_152.b = not.b(ebx_275.b)
                int32_t eax_154
                eax_154.b = edi_19[1]
                int32_t eax_155 = eax_154 - (eax_152 + *(((ebx_275 - eax_152) << 2) + data_1cd43c8))
                
                if (eax_155 s< 0)
                    eax_155 = 0
                
                edi_19[1] = eax_155.b
                int32_t ebx_280
                ebx_280.b = *(esi_15 + 2)
                int32_t eax_156
                eax_156.b = not.b(ebx_280.b)
                int32_t eax_158
                eax_158.b = edi_19[2]
                eax_146 = eax_158 - (eax_156 + *(((ebx_280 - eax_156) << 2) + data_1cd43c8))
                
                if (eax_146 s< 0)
                    eax_146 = 0
                
                edi_19[2] = eax_146.b
            else
                int32_t edx_14 = *((eax_146 << 2) + data_1cd4328)
                int32_t ebx_285
                ebx_285.b = *esi_15
                int32_t eax_159
                eax_159.b = not.b(ebx_285.b)
                int32_t eax_161
                eax_161.b = *edi_19
                int32_t eax_162 = eax_161
                    - *(((eax_159 + *(((ebx_285 - eax_159) << 2) + data_1cd43c8)) << 2) + edx_14)
                
                if (eax_162 s< 0)
                    eax_162 = 0
                
                *edi_19 = eax_162.b
                int32_t ebx_293
                ebx_293.b = *(esi_15 + 1)
                int32_t eax_163
                eax_163.b = not.b(ebx_293.b)
                int32_t eax_165
                eax_165.b = edi_19[1]
                int32_t eax_166 = eax_165
                    - *(((eax_163 + *(((ebx_293 - eax_163) << 2) + data_1cd43c8)) << 2) + edx_14)
                
                if (eax_166 s< 0)
                    eax_166 = 0
                
                edi_19[1] = eax_166.b
                int32_t ebx_301
                ebx_301.b = *(esi_15 + 2)
                int32_t eax_167
                eax_167.b = not.b(ebx_301.b)
                int32_t eax_169
                eax_169.b = edi_19[2]
                eax_146 = eax_169
                    - *(((eax_167 + *(((ebx_301 - eax_167) << 2) + data_1cd43c8)) << 2) + edx_14)
                
                if (eax_146 s< 0)
                    eax_146 = 0
                
                edi_19[2] = eax_146.b
        
        int32_t edx_15 = edx_13
        
        while (true)
            esi_15 += 4
            edx_15 += data_1cd43f0
            
            if (edx_15 s>= data_1cd43f8)
                edx_13 = edx_15 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp10_1 = ecx_13
                ecx_13 -= 1
                
                if (temp10_1 == 1)
                    goto label_5df7c0
                
                goto label_5df667
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5df7c0:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_146
                
                esi_15 = var_14_7 + data_1cd4400
                edi_19 = &var_18_7[data_1cd43fc]
                break
else if (eax s< ecx_1)
    int32_t var_4_7 = ebx
    int32_t var_8_7 = esi
    int32_t var_c_7 = edi
    void* esi_18 = data_1cd4408
    char* edi_22 = data_1cd4404
    int32_t ecx_15 = data_1cd440c
    int32_t ebx_310 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5df80e:
        int32_t eax_170
        eax_170.b = *(esi_18 + 3)
        eax_170.b = eax_170.b
        
        if (eax_170.b != 0)
            if (eax_170 == 0xff)
                int32_t ebx_314
                ebx_314.b = *esi_18
                int32_t eax_172
                eax_172.b = not.b(ebx_314.b)
                int32_t eax_174
                eax_174.b = *edi_22
                int32_t eax_175 = eax_174 - (eax_172 + *(((ebx_314 - eax_172) << 2) + data_1cd43c8))
                
                if (eax_175 s< 0)
                    eax_175 = 0
                
                *edi_22 = eax_175.b
                int32_t ebx_319
                ebx_319.b = *(esi_18 + 1)
                int32_t eax_176
                eax_176.b = not.b(ebx_319.b)
                int32_t eax_178
                eax_178.b = edi_22[1]
                int32_t eax_179 = eax_178 - (eax_176 + *(((ebx_319 - eax_176) << 2) + data_1cd43c8))
                
                if (eax_179 s< 0)
                    eax_179 = 0
                
                edi_22[1] = eax_179.b
                int32_t ebx_324
                ebx_324.b = *(esi_18 + 2)
                int32_t eax_180
                eax_180.b = not.b(ebx_324.b)
                int32_t eax_182
                eax_182.b = edi_22[2]
                eax_170 = eax_182 - (eax_180 + *(((ebx_324 - eax_180) << 2) + data_1cd43c8))
                
                if (eax_170 s< 0)
                    eax_170 = 0
                
                edi_22[2] = eax_170.b
            else
                int32_t edx_17 = *((eax_170 << 2) + data_1cd4328)
                int32_t ebx_329
                ebx_329.b = *esi_18
                int32_t eax_183
                eax_183.b = not.b(ebx_329.b)
                int32_t eax_185
                eax_185.b = *edi_22
                int32_t eax_186 = eax_185
                    - *(((eax_183 + *(((ebx_329 - eax_183) << 2) + data_1cd43c8)) << 2) + edx_17)
                
                if (eax_186 s< 0)
                    eax_186 = 0
                
                *edi_22 = eax_186.b
                int32_t ebx_337
                ebx_337.b = *(esi_18 + 1)
                int32_t eax_187
                eax_187.b = not.b(ebx_337.b)
                int32_t eax_189
                eax_189.b = edi_22[1]
                int32_t eax_190 = eax_189
                    - *(((eax_187 + *(((ebx_337 - eax_187) << 2) + data_1cd43c8)) << 2) + edx_17)
                
                if (eax_190 s< 0)
                    eax_190 = 0
                
                edi_22[1] = eax_190.b
                int32_t ebx_345
                ebx_345.b = *(esi_18 + 2)
                int32_t eax_191
                eax_191.b = not.b(ebx_345.b)
                int32_t eax_193
                eax_193.b = edi_22[2]
                eax_170 = eax_193
                    - *(((eax_191 + *(((ebx_345 - eax_191) << 2) + data_1cd43c8)) << 2) + edx_17)
                
                if (eax_170 s< 0)
                    eax_170 = 0
                
                edi_22[2] = eax_170.b
        
        int32_t edx_18 = edx_16
        
        while (true)
            esi_18 += 4
            edx_18 += data_1cd43f0
            
            if (edx_18 s>= data_1cd43f8)
                edx_16 = edx_18 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp13_1 = ecx_16
                ecx_16 -= 1
                
                if (temp13_1 == 1)
                    goto label_5df966
                
                goto label_5df80e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5df966:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_310 += data_1cd43f4
                
                if (ebx_310 s>= data_1cd43ec)
                    ebx_310 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_170
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    void* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_355 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5df9ce:
        int32_t eax_194
        eax_194.b = *(esi_20 + 3)
        eax_194.b = eax_194.b
        
        if (eax_194.b != 0)
            if (eax_194 == 0xff)
                int32_t ebx_359
                ebx_359.b = *esi_20
                int32_t eax_196
                eax_196.b = not.b(ebx_359.b)
                int32_t eax_198
                eax_198.b = *edi_25
                int32_t eax_199 = eax_198 - (eax_196 + *(((ebx_359 - eax_196) << 2) + data_1cd43c8))
                
                if (eax_199 s< 0)
                    eax_199 = 0
                
                *edi_25 = eax_199.b
                int32_t ebx_364
                ebx_364.b = *(esi_20 + 1)
                int32_t eax_200
                eax_200.b = not.b(ebx_364.b)
                int32_t eax_202
                eax_202.b = edi_25[1]
                int32_t eax_203 = eax_202 - (eax_200 + *(((ebx_364 - eax_200) << 2) + data_1cd43c8))
                
                if (eax_203 s< 0)
                    eax_203 = 0
                
                edi_25[1] = eax_203.b
                int32_t ebx_369
                ebx_369.b = *(esi_20 + 2)
                int32_t eax_204
                eax_204.b = not.b(ebx_369.b)
                int32_t eax_206
                eax_206.b = edi_25[2]
                eax_194 = eax_206 - (eax_204 + *(((ebx_369 - eax_204) << 2) + data_1cd43c8))
                
                if (eax_194 s< 0)
                    eax_194 = 0
                
                edi_25[2] = eax_194.b
            else
                int32_t edx_20 = *((eax_194 << 2) + data_1cd4328)
                int32_t ebx_374
                ebx_374.b = *esi_20
                int32_t eax_207
                eax_207.b = not.b(ebx_374.b)
                int32_t eax_209
                eax_209.b = *edi_25
                int32_t eax_210 = eax_209
                    - *(((eax_207 + *(((ebx_374 - eax_207) << 2) + data_1cd43c8)) << 2) + edx_20)
                
                if (eax_210 s< 0)
                    eax_210 = 0
                
                *edi_25 = eax_210.b
                int32_t ebx_382
                ebx_382.b = *(esi_20 + 1)
                int32_t eax_211
                eax_211.b = not.b(ebx_382.b)
                int32_t eax_213
                eax_213.b = edi_25[1]
                int32_t eax_214 = eax_213
                    - *(((eax_211 + *(((ebx_382 - eax_211) << 2) + data_1cd43c8)) << 2) + edx_20)
                
                if (eax_214 s< 0)
                    eax_214 = 0
                
                edi_25[1] = eax_214.b
                int32_t ebx_390
                ebx_390.b = *(esi_20 + 2)
                int32_t eax_215
                eax_215.b = not.b(ebx_390.b)
                int32_t eax_217
                eax_217.b = edi_25[2]
                eax_194 = eax_217
                    - *(((eax_215 + *(((ebx_390 - eax_215) << 2) + data_1cd43c8)) << 2) + edx_20)
                
                if (eax_194 s< 0)
                    eax_194 = 0
                
                edi_25[2] = eax_194.b
        
        int32_t edx_21 = edx_19
        
        while (true)
            esi_20 += 4
            edx_21 += data_1cd43f0
            
            if (edx_21 s>= data_1cd43f8)
                edx_19 = edx_21 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp18_1 = ecx_19
                ecx_19 -= 1
                
                if (temp18_1 == 1)
                    goto label_5dfb24
                
                goto label_5df9ce
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5dfb24:
                int32_t ebx_398 = ebx_355
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_398 += data_1cd43ec
                    
                    if (ebx_398 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_355 = ebx_398 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_194
                
                break

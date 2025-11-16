// 函数: sub_5c8b10
// 地址: 0x5c8b10
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
                        *edi_1 = eax_4.b + (*(((ebx_4 - eax_4) << 2) + data_1cd43c8)).b
                        int32_t ebx_9
                        ebx_9.b = esi_1[1]
                        int32_t eax_6
                        eax_6.b = not.b(ebx_9.b)
                        edi_1[1] = eax_6.b + (*(((ebx_9 - eax_6) << 2) + data_1cd43c8)).b
                        int32_t ebx_14
                        ebx_14.b = esi_1[2]
                        int32_t eax_8
                        eax_8.b = not.b(ebx_14.b)
                        eax_2 = eax_8 + *(((ebx_14 - eax_8) << 2) + data_1cd43c8)
                        edi_1[2] = eax_2.b
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_19
                        ebx_19.b = *esi_1
                        int32_t eax_9
                        eax_9.b = not.b(ebx_19.b)
                        int32_t eax_11
                        eax_11.b = *edi_1
                        *edi_1 = eax_11.b + (*(((eax_9 + *(((ebx_19 - eax_9) << 2) + data_1cd43c8)
                            - eax_11) << 2) + edx_1)).b
                        int32_t ebx_27
                        ebx_27.b = esi_1[1]
                        int32_t eax_13
                        eax_13.b = not.b(ebx_27.b)
                        int32_t eax_15
                        eax_15.b = edi_1[1]
                        edi_1[1] = eax_15.b + (*(((eax_13
                            + *(((ebx_27 - eax_13) << 2) + data_1cd43c8) - eax_15) << 2) + edx_1)).b
                        int32_t ebx_35
                        ebx_35.b = esi_1[2]
                        int32_t eax_17
                        eax_17.b = not.b(ebx_35.b)
                        int32_t eax_19
                        eax_19.b = edi_1[2]
                        eax_2 = eax_19 + *(((eax_17 + *(((ebx_35 - eax_17) << 2) + data_1cd43c8)
                            - eax_19) << 2) + edx_1)
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
        int32_t eax_20
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                eax_20.b = *(esi_4 + 3)
                eax_20.b = eax_20.b
                
                if (eax_20.b != 0)
                    if (eax_20 == 0xff)
                        int32_t ebx_48
                        ebx_48.b = *esi_4
                        int32_t eax_22
                        eax_22.b = not.b(ebx_48.b)
                        *edi_4 = eax_22.b + (*(((ebx_48 - eax_22) << 2) + data_1cd43c8)).b
                        int32_t ebx_53
                        ebx_53.b = *(esi_4 + 1)
                        int32_t eax_24
                        eax_24.b = not.b(ebx_53.b)
                        edi_4[1] = eax_24.b + (*(((ebx_53 - eax_24) << 2) + data_1cd43c8)).b
                        int32_t ebx_58
                        ebx_58.b = *(esi_4 + 2)
                        int32_t eax_26
                        eax_26.b = not.b(ebx_58.b)
                        eax_20 = eax_26 + *(((ebx_58 - eax_26) << 2) + data_1cd43c8)
                        edi_4[2] = eax_20.b
                    else
                        int32_t edx_2 = *((eax_20 << 2) + data_1cd4328)
                        int32_t ebx_63
                        ebx_63.b = *esi_4
                        int32_t eax_27
                        eax_27.b = not.b(ebx_63.b)
                        int32_t eax_29
                        eax_29.b = *edi_4
                        *edi_4 = eax_29.b + (*(((eax_27 + *(((ebx_63 - eax_27) << 2) + data_1cd43c8)
                            - eax_29) << 2) + edx_2)).b
                        int32_t ebx_71
                        ebx_71.b = *(esi_4 + 1)
                        int32_t eax_31
                        eax_31.b = not.b(ebx_71.b)
                        int32_t eax_33
                        eax_33.b = edi_4[1]
                        edi_4[1] = eax_33.b + (*(((eax_31
                            + *(((ebx_71 - eax_31) << 2) + data_1cd43c8) - eax_33) << 2) + edx_2)).b
                        int32_t ebx_79
                        ebx_79.b = *(esi_4 + 2)
                        int32_t eax_35
                        eax_35.b = not.b(ebx_79.b)
                        int32_t eax_37
                        eax_37.b = edi_4[2]
                        eax_20 = eax_37 + *(((eax_35 + *(((ebx_79 - eax_35) << 2) + data_1cd43c8)
                            - eax_37) << 2) + edx_2)
                        edi_4[2] = eax_20.b
                
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
        return eax_20
    
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
        int32_t eax_38
        int32_t i_2
        
        do
            eax_38.b = *(esi_6 + 3)
            eax_38.b = eax_38.b
            
            if (eax_38.b != 0)
                if (eax_38 == 0xff)
                    int32_t ebx_93
                    ebx_93.b = *esi_6
                    int32_t eax_40
                    eax_40.b = not.b(ebx_93.b)
                    *edi_7 = eax_40.b + (*(((ebx_93 - eax_40) << 2) + data_1cd43c8)).b
                    int32_t ebx_98
                    ebx_98.b = *(esi_6 + 1)
                    int32_t eax_42
                    eax_42.b = not.b(ebx_98.b)
                    edi_7[1] = eax_42.b + (*(((ebx_98 - eax_42) << 2) + data_1cd43c8)).b
                    int32_t ebx_103
                    ebx_103.b = *(esi_6 + 2)
                    int32_t eax_44
                    eax_44.b = not.b(ebx_103.b)
                    eax_38 = eax_44 + *(((ebx_103 - eax_44) << 2) + data_1cd43c8)
                    edi_7[2] = eax_38.b
                else
                    int32_t edx_3 = *((eax_38 << 2) + data_1cd4328)
                    int32_t ebx_108
                    ebx_108.b = *esi_6
                    int32_t eax_45
                    eax_45.b = not.b(ebx_108.b)
                    int32_t eax_47
                    eax_47.b = *edi_7
                    *edi_7 = eax_47.b + (*(((eax_45 + *(((ebx_108 - eax_45) << 2) + data_1cd43c8)
                        - eax_47) << 2) + edx_3)).b
                    int32_t ebx_116
                    ebx_116.b = *(esi_6 + 1)
                    int32_t eax_49
                    eax_49.b = not.b(ebx_116.b)
                    int32_t eax_51
                    eax_51.b = edi_7[1]
                    edi_7[1] = eax_51.b + (*(((eax_49 + *(((ebx_116 - eax_49) << 2) + data_1cd43c8)
                        - eax_51) << 2) + edx_3)).b
                    int32_t ebx_124
                    ebx_124.b = *(esi_6 + 2)
                    int32_t eax_53
                    eax_53.b = not.b(ebx_124.b)
                    int32_t eax_55
                    eax_55.b = edi_7[2]
                    eax_38 = eax_55 + *(((eax_53 + *(((ebx_124 - eax_53) << 2) + data_1cd43c8)
                        - eax_55) << 2) + edx_3)
                    edi_7[2] = eax_38.b
            
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
            
            return eax_38
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        void* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_56
        
        while (true)
            void* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                eax_56.b = *(esi_8 + 3)
                eax_56.b = eax_56.b
                
                if (eax_56.b != 0)
                    if (eax_56 == 0xff)
                        int32_t ebx_137
                        ebx_137.b = *esi_8
                        int32_t eax_58
                        eax_58.b = not.b(ebx_137.b)
                        *edi_10 = eax_58.b + (*(((ebx_137 - eax_58) << 2) + data_1cd43c8)).b
                        int32_t ebx_142
                        ebx_142.b = *(esi_8 + 1)
                        int32_t eax_60
                        eax_60.b = not.b(ebx_142.b)
                        edi_10[1] = eax_60.b + (*(((ebx_142 - eax_60) << 2) + data_1cd43c8)).b
                        int32_t ebx_147
                        ebx_147.b = *(esi_8 + 2)
                        int32_t eax_62
                        eax_62.b = not.b(ebx_147.b)
                        eax_56 = eax_62 + *(((ebx_147 - eax_62) << 2) + data_1cd43c8)
                        edi_10[2] = eax_56.b
                    else
                        int32_t edx_5 = *((eax_56 << 2) + data_1cd4328)
                        int32_t ebx_152
                        ebx_152.b = *esi_8
                        int32_t eax_63
                        eax_63.b = not.b(ebx_152.b)
                        int32_t eax_65
                        eax_65.b = *edi_10
                        *edi_10 = eax_65.b + (*(((eax_63
                            + *(((ebx_152 - eax_63) << 2) + data_1cd43c8) - eax_65) << 2) + edx_5)).b
                        int32_t ebx_160
                        ebx_160.b = *(esi_8 + 1)
                        int32_t eax_67
                        eax_67.b = not.b(ebx_160.b)
                        int32_t eax_69
                        eax_69.b = edi_10[1]
                        edi_10[1] = eax_69.b + (*(((eax_67
                            + *(((ebx_160 - eax_67) << 2) + data_1cd43c8) - eax_69) << 2) + edx_5)).b
                        int32_t ebx_168
                        ebx_168.b = *(esi_8 + 2)
                        int32_t eax_71
                        eax_71.b = not.b(ebx_168.b)
                        int32_t eax_73
                        eax_73.b = edi_10[2]
                        eax_56 = eax_73 + *(((eax_71 + *(((ebx_168 - eax_71) << 2) + data_1cd43c8)
                            - eax_73) << 2) + edx_5)
                        edi_10[2] = eax_56.b
                
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
        
        return eax_56
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_177 = data_1cd4414
        int32_t eax_74
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                eax_74.b = *(esi_11 + 3)
                eax_74.b = eax_74.b
                
                if (eax_74.b != 0)
                    if (eax_74 == 0xff)
                        int32_t ebx_181
                        ebx_181.b = *esi_11
                        int32_t eax_76
                        eax_76.b = not.b(ebx_181.b)
                        *edi_13 = eax_76.b + (*(((ebx_181 - eax_76) << 2) + data_1cd43c8)).b
                        int32_t ebx_186
                        ebx_186.b = *(esi_11 + 1)
                        int32_t eax_78
                        eax_78.b = not.b(ebx_186.b)
                        edi_13[1] = eax_78.b + (*(((ebx_186 - eax_78) << 2) + data_1cd43c8)).b
                        int32_t ebx_191
                        ebx_191.b = *(esi_11 + 2)
                        int32_t eax_80
                        eax_80.b = not.b(ebx_191.b)
                        eax_74 = eax_80 + *(((ebx_191 - eax_80) << 2) + data_1cd43c8)
                        edi_13[2] = eax_74.b
                    else
                        int32_t edx_8 = *((eax_74 << 2) + data_1cd4328)
                        int32_t ebx_196
                        ebx_196.b = *esi_11
                        int32_t eax_81
                        eax_81.b = not.b(ebx_196.b)
                        int32_t eax_83
                        eax_83.b = *edi_13
                        *edi_13 = eax_83.b + (*(((eax_81
                            + *(((ebx_196 - eax_81) << 2) + data_1cd43c8) - eax_83) << 2) + edx_8)).b
                        int32_t ebx_204
                        ebx_204.b = *(esi_11 + 1)
                        int32_t eax_85
                        eax_85.b = not.b(ebx_204.b)
                        int32_t eax_87
                        eax_87.b = edi_13[1]
                        edi_13[1] = eax_87.b + (*(((eax_85
                            + *(((ebx_204 - eax_85) << 2) + data_1cd43c8) - eax_87) << 2) + edx_8)).b
                        int32_t ebx_212
                        ebx_212.b = *(esi_11 + 2)
                        int32_t eax_89
                        eax_89.b = not.b(ebx_212.b)
                        int32_t eax_91
                        eax_91.b = edi_13[2]
                        eax_74 = eax_91 + *(((eax_89 + *(((ebx_212 - eax_89) << 2) + data_1cd43c8)
                            - eax_91) << 2) + edx_8)
                        edi_13[2] = eax_74.b
                
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
        return eax_74
    
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
        int32_t eax_92
        int32_t i_5
        
        do
            eax_92.b = *(esi_13 + 3)
            eax_92.b = eax_92.b
            
            if (eax_92.b != 0)
                if (eax_92 == 0xff)
                    int32_t ebx_226
                    ebx_226.b = *esi_13
                    int32_t eax_94
                    eax_94.b = not.b(ebx_226.b)
                    *edi_16 = eax_94.b + (*(((ebx_226 - eax_94) << 2) + data_1cd43c8)).b
                    int32_t ebx_231
                    ebx_231.b = *(esi_13 + 1)
                    int32_t eax_96
                    eax_96.b = not.b(ebx_231.b)
                    edi_16[1] = eax_96.b + (*(((ebx_231 - eax_96) << 2) + data_1cd43c8)).b
                    int32_t ebx_236
                    ebx_236.b = *(esi_13 + 2)
                    int32_t eax_98
                    eax_98.b = not.b(ebx_236.b)
                    eax_92 = eax_98 + *(((ebx_236 - eax_98) << 2) + data_1cd43c8)
                    edi_16[2] = eax_92.b
                else
                    int32_t edx_11 = *((eax_92 << 2) + data_1cd4328)
                    int32_t ebx_241
                    ebx_241.b = *esi_13
                    int32_t eax_99
                    eax_99.b = not.b(ebx_241.b)
                    int32_t eax_101
                    eax_101.b = *edi_16
                    *edi_16 = eax_101.b + (*(((eax_99 + *(((ebx_241 - eax_99) << 2) + data_1cd43c8)
                        - eax_101) << 2) + edx_11)).b
                    int32_t ebx_249
                    ebx_249.b = *(esi_13 + 1)
                    int32_t eax_103
                    eax_103.b = not.b(ebx_249.b)
                    int32_t eax_105
                    eax_105.b = edi_16[1]
                    edi_16[1] = eax_105.b + (*(((eax_103
                        + *(((ebx_249 - eax_103) << 2) + data_1cd43c8) - eax_105) << 2) + edx_11)).b
                    int32_t ebx_257
                    ebx_257.b = *(esi_13 + 2)
                    int32_t eax_107
                    eax_107.b = not.b(ebx_257.b)
                    int32_t eax_109
                    eax_109.b = edi_16[2]
                    eax_92 = eax_109 + *(((eax_107 + *(((ebx_257 - eax_107) << 2) + data_1cd43c8)
                        - eax_109) << 2) + edx_11)
                    edi_16[2] = eax_92.b
            
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
            
            return eax_92
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
    label_5c86d7:
        int32_t eax_110
        eax_110.b = *(esi_15 + 3)
        eax_110.b = eax_110.b
        
        if (eax_110.b != 0)
            if (eax_110 == 0xff)
                int32_t ebx_270
                ebx_270.b = *esi_15
                int32_t eax_112
                eax_112.b = not.b(ebx_270.b)
                *edi_19 = eax_112.b + (*(((ebx_270 - eax_112) << 2) + data_1cd43c8)).b
                int32_t ebx_275
                ebx_275.b = *(esi_15 + 1)
                int32_t eax_114
                eax_114.b = not.b(ebx_275.b)
                edi_19[1] = eax_114.b + (*(((ebx_275 - eax_114) << 2) + data_1cd43c8)).b
                int32_t ebx_280
                ebx_280.b = *(esi_15 + 2)
                int32_t eax_116
                eax_116.b = not.b(ebx_280.b)
                eax_110 = eax_116 + *(((ebx_280 - eax_116) << 2) + data_1cd43c8)
                edi_19[2] = eax_110.b
            else
                int32_t edx_14 = *((eax_110 << 2) + data_1cd4328)
                int32_t ebx_285
                ebx_285.b = *esi_15
                int32_t eax_117
                eax_117.b = not.b(ebx_285.b)
                int32_t eax_119
                eax_119.b = *edi_19
                *edi_19 = eax_119.b + (*(((eax_117 + *(((ebx_285 - eax_117) << 2) + data_1cd43c8)
                    - eax_119) << 2) + edx_14)).b
                int32_t ebx_293
                ebx_293.b = *(esi_15 + 1)
                int32_t eax_121
                eax_121.b = not.b(ebx_293.b)
                int32_t eax_123
                eax_123.b = edi_19[1]
                edi_19[1] = eax_123.b + (*(((eax_121 + *(((ebx_293 - eax_121) << 2) + data_1cd43c8)
                    - eax_123) << 2) + edx_14)).b
                int32_t ebx_301
                ebx_301.b = *(esi_15 + 2)
                int32_t eax_125
                eax_125.b = not.b(ebx_301.b)
                int32_t eax_127
                eax_127.b = edi_19[2]
                eax_110 = eax_127 + *(((eax_125 + *(((ebx_301 - eax_125) << 2) + data_1cd43c8)
                    - eax_127) << 2) + edx_14)
                edi_19[2] = eax_110.b
        
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
                    goto label_5c87ef
                
                goto label_5c86d7
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5c87ef:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_110
                
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
    label_5c883e:
        int32_t eax_128
        eax_128.b = *(esi_18 + 3)
        eax_128.b = eax_128.b
        
        if (eax_128.b != 0)
            if (eax_128 == 0xff)
                int32_t ebx_314
                ebx_314.b = *esi_18
                int32_t eax_130
                eax_130.b = not.b(ebx_314.b)
                *edi_22 = eax_130.b + (*(((ebx_314 - eax_130) << 2) + data_1cd43c8)).b
                int32_t ebx_319
                ebx_319.b = *(esi_18 + 1)
                int32_t eax_132
                eax_132.b = not.b(ebx_319.b)
                edi_22[1] = eax_132.b + (*(((ebx_319 - eax_132) << 2) + data_1cd43c8)).b
                int32_t ebx_324
                ebx_324.b = *(esi_18 + 2)
                int32_t eax_134
                eax_134.b = not.b(ebx_324.b)
                eax_128 = eax_134 + *(((ebx_324 - eax_134) << 2) + data_1cd43c8)
                edi_22[2] = eax_128.b
            else
                int32_t edx_17 = *((eax_128 << 2) + data_1cd4328)
                int32_t ebx_329
                ebx_329.b = *esi_18
                int32_t eax_135
                eax_135.b = not.b(ebx_329.b)
                int32_t eax_137
                eax_137.b = *edi_22
                *edi_22 = eax_137.b + (*(((eax_135 + *(((ebx_329 - eax_135) << 2) + data_1cd43c8)
                    - eax_137) << 2) + edx_17)).b
                int32_t ebx_337
                ebx_337.b = *(esi_18 + 1)
                int32_t eax_139
                eax_139.b = not.b(ebx_337.b)
                int32_t eax_141
                eax_141.b = edi_22[1]
                edi_22[1] = eax_141.b + (*(((eax_139 + *(((ebx_337 - eax_139) << 2) + data_1cd43c8)
                    - eax_141) << 2) + edx_17)).b
                int32_t ebx_345
                ebx_345.b = *(esi_18 + 2)
                int32_t eax_143
                eax_143.b = not.b(ebx_345.b)
                int32_t eax_145
                eax_145.b = edi_22[2]
                eax_128 = eax_145 + *(((eax_143 + *(((ebx_345 - eax_143) << 2) + data_1cd43c8)
                    - eax_145) << 2) + edx_17)
                edi_22[2] = eax_128.b
        
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
                    goto label_5c8955
                
                goto label_5c883e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5c8955:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_310 += data_1cd43f4
                
                if (ebx_310 s>= data_1cd43ec)
                    ebx_310 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_128
                
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
    label_5c89be:
        int32_t eax_146
        eax_146.b = *(esi_20 + 3)
        eax_146.b = eax_146.b
        
        if (eax_146.b != 0)
            if (eax_146 == 0xff)
                int32_t ebx_359
                ebx_359.b = *esi_20
                int32_t eax_148
                eax_148.b = not.b(ebx_359.b)
                *edi_25 = eax_148.b + (*(((ebx_359 - eax_148) << 2) + data_1cd43c8)).b
                int32_t ebx_364
                ebx_364.b = *(esi_20 + 1)
                int32_t eax_150
                eax_150.b = not.b(ebx_364.b)
                edi_25[1] = eax_150.b + (*(((ebx_364 - eax_150) << 2) + data_1cd43c8)).b
                int32_t ebx_369
                ebx_369.b = *(esi_20 + 2)
                int32_t eax_152
                eax_152.b = not.b(ebx_369.b)
                eax_146 = eax_152 + *(((ebx_369 - eax_152) << 2) + data_1cd43c8)
                edi_25[2] = eax_146.b
            else
                int32_t edx_20 = *((eax_146 << 2) + data_1cd4328)
                int32_t ebx_374
                ebx_374.b = *esi_20
                int32_t eax_153
                eax_153.b = not.b(ebx_374.b)
                int32_t eax_155
                eax_155.b = *edi_25
                *edi_25 = eax_155.b + (*(((eax_153 + *(((ebx_374 - eax_153) << 2) + data_1cd43c8)
                    - eax_155) << 2) + edx_20)).b
                int32_t ebx_382
                ebx_382.b = *(esi_20 + 1)
                int32_t eax_157
                eax_157.b = not.b(ebx_382.b)
                int32_t eax_159
                eax_159.b = edi_25[1]
                edi_25[1] = eax_159.b + (*(((eax_157 + *(((ebx_382 - eax_157) << 2) + data_1cd43c8)
                    - eax_159) << 2) + edx_20)).b
                int32_t ebx_390
                ebx_390.b = *(esi_20 + 2)
                int32_t eax_161
                eax_161.b = not.b(ebx_390.b)
                int32_t eax_163
                eax_163.b = edi_25[2]
                eax_146 = eax_163 + *(((eax_161 + *(((ebx_390 - eax_161) << 2) + data_1cd43c8)
                    - eax_163) << 2) + edx_20)
                edi_25[2] = eax_146.b
        
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
                    goto label_5c8ad3
                
                goto label_5c89be
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5c8ad3:
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
                    
                    return eax_146
                
                break

// 函数: sub_5cba10
// 地址: 0x5cba10
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
                        int32_t eax_6 = data_1cd4380
                        *edi_1 = eax_6.b + (*(((eax_4 + *(((ebx_4 - eax_4) << 2) + data_1cd43c8)
                            - eax_6) << 2) + data_1cd4384)).b
                        int32_t ebx_13
                        ebx_13.b = esi_1[1]
                        int32_t eax_8
                        eax_8.b = not.b(ebx_13.b)
                        int32_t eax_10 = data_1cd4388
                        edi_1[1] = eax_10.b + (*(((eax_8 + *(((ebx_13 - eax_8) << 2) + data_1cd43c8)
                            - eax_10) << 2) + data_1cd438c)).b
                        int32_t ebx_22
                        ebx_22.b = esi_1[2]
                        int32_t eax_12
                        eax_12.b = not.b(ebx_22.b)
                        int32_t eax_14 = data_1cd4390
                        eax_2 = eax_14 + *(((eax_12 + *(((ebx_22 - eax_12) << 2) + data_1cd43c8)
                            - eax_14) << 2) + data_1cd4394)
                        edi_1[2] = eax_2.b
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_31
                        ebx_31.b = *esi_1
                        int32_t eax_15
                        eax_15.b = not.b(ebx_31.b)
                        int32_t eax_17 = data_1cd4380
                        int32_t eax_19
                        eax_19.b = *edi_1
                        *edi_1 = eax_19.b + (*(((eax_17 + *(((eax_15
                            + *(((ebx_31 - eax_15) << 2) + data_1cd43c8) - eax_17) << 2)
                            + data_1cd4384) - eax_19) << 2) + edx_1)).b
                        int32_t ebx_43
                        ebx_43.b = esi_1[1]
                        int32_t eax_21
                        eax_21.b = not.b(ebx_43.b)
                        int32_t eax_23 = data_1cd4388
                        int32_t eax_25
                        eax_25.b = edi_1[1]
                        edi_1[1] = eax_25.b + (*(((eax_23 + *(((eax_21
                            + *(((ebx_43 - eax_21) << 2) + data_1cd43c8) - eax_23) << 2)
                            + data_1cd438c) - eax_25) << 2) + edx_1)).b
                        int32_t ebx_55
                        ebx_55.b = esi_1[2]
                        int32_t eax_27
                        eax_27.b = not.b(ebx_55.b)
                        int32_t eax_29 = data_1cd4390
                        int32_t eax_31
                        eax_31.b = edi_1[2]
                        eax_2 = eax_31 + *(((eax_29 + *(((eax_27
                            + *(((ebx_55 - eax_27) << 2) + data_1cd43c8) - eax_29) << 2)
                            + data_1cd4394) - eax_31) << 2) + edx_1)
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
        int32_t ebx_68 = data_1cd4414
        int32_t eax_32
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                eax_32.b = *(esi_4 + 3)
                eax_32.b = eax_32.b
                
                if (eax_32.b != 0)
                    if (eax_32 == 0xff)
                        int32_t ebx_72
                        ebx_72.b = *esi_4
                        int32_t eax_34
                        eax_34.b = not.b(ebx_72.b)
                        int32_t eax_36 = data_1cd4380
                        *edi_4 = eax_36.b + (*(((eax_34 + *(((ebx_72 - eax_34) << 2) + data_1cd43c8)
                            - eax_36) << 2) + data_1cd4384)).b
                        int32_t ebx_81
                        ebx_81.b = *(esi_4 + 1)
                        int32_t eax_38
                        eax_38.b = not.b(ebx_81.b)
                        int32_t eax_40 = data_1cd4388
                        edi_4[1] = eax_40.b + (*(((eax_38
                            + *(((ebx_81 - eax_38) << 2) + data_1cd43c8) - eax_40) << 2)
                            + data_1cd438c)).b
                        int32_t ebx_90
                        ebx_90.b = *(esi_4 + 2)
                        int32_t eax_42
                        eax_42.b = not.b(ebx_90.b)
                        int32_t eax_44 = data_1cd4390
                        eax_32 = eax_44 + *(((eax_42 + *(((ebx_90 - eax_42) << 2) + data_1cd43c8)
                            - eax_44) << 2) + data_1cd4394)
                        edi_4[2] = eax_32.b
                    else
                        int32_t edx_2 = *((eax_32 << 2) + data_1cd4328)
                        int32_t ebx_99
                        ebx_99.b = *esi_4
                        int32_t eax_45
                        eax_45.b = not.b(ebx_99.b)
                        int32_t eax_47 = data_1cd4380
                        int32_t eax_49
                        eax_49.b = *edi_4
                        *edi_4 = eax_49.b + (*(((eax_47 + *(((eax_45
                            + *(((ebx_99 - eax_45) << 2) + data_1cd43c8) - eax_47) << 2)
                            + data_1cd4384) - eax_49) << 2) + edx_2)).b
                        int32_t ebx_111
                        ebx_111.b = *(esi_4 + 1)
                        int32_t eax_51
                        eax_51.b = not.b(ebx_111.b)
                        int32_t eax_53 = data_1cd4388
                        int32_t eax_55
                        eax_55.b = edi_4[1]
                        edi_4[1] = eax_55.b + (*(((eax_53 + *(((eax_51
                            + *(((ebx_111 - eax_51) << 2) + data_1cd43c8) - eax_53) << 2)
                            + data_1cd438c) - eax_55) << 2) + edx_2)).b
                        int32_t ebx_123
                        ebx_123.b = *(esi_4 + 2)
                        int32_t eax_57
                        eax_57.b = not.b(ebx_123.b)
                        int32_t eax_59 = data_1cd4390
                        int32_t eax_61
                        eax_61.b = edi_4[2]
                        eax_32 = eax_61 + *(((eax_59 + *(((eax_57
                            + *(((ebx_123 - eax_57) << 2) + data_1cd43c8) - eax_59) << 2)
                            + data_1cd4394) - eax_61) << 2) + edx_2)
                        edi_4[2] = eax_32.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_68 += data_1cd43f4
            
            if (ebx_68 s>= data_1cd43ec)
                ebx_68 -= data_1cd43ec
                esi_4 += data_1cd4400
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_32
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    void* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_137 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t eax_62
        int32_t i_2
        
        do
            eax_62.b = *(esi_6 + 3)
            eax_62.b = eax_62.b
            
            if (eax_62.b != 0)
                if (eax_62 == 0xff)
                    int32_t ebx_141
                    ebx_141.b = *esi_6
                    int32_t eax_64
                    eax_64.b = not.b(ebx_141.b)
                    int32_t eax_66 = data_1cd4380
                    *edi_7 = eax_66.b + (*(((eax_64 + *(((ebx_141 - eax_64) << 2) + data_1cd43c8)
                        - eax_66) << 2) + data_1cd4384)).b
                    int32_t ebx_150
                    ebx_150.b = *(esi_6 + 1)
                    int32_t eax_68
                    eax_68.b = not.b(ebx_150.b)
                    int32_t eax_70 = data_1cd4388
                    edi_7[1] = eax_70.b + (*(((eax_68 + *(((ebx_150 - eax_68) << 2) + data_1cd43c8)
                        - eax_70) << 2) + data_1cd438c)).b
                    int32_t ebx_159
                    ebx_159.b = *(esi_6 + 2)
                    int32_t eax_72
                    eax_72.b = not.b(ebx_159.b)
                    int32_t eax_74 = data_1cd4390
                    eax_62 = eax_74 + *(((eax_72 + *(((ebx_159 - eax_72) << 2) + data_1cd43c8)
                        - eax_74) << 2) + data_1cd4394)
                    edi_7[2] = eax_62.b
                else
                    int32_t edx_3 = *((eax_62 << 2) + data_1cd4328)
                    int32_t ebx_168
                    ebx_168.b = *esi_6
                    int32_t eax_75
                    eax_75.b = not.b(ebx_168.b)
                    int32_t eax_77 = data_1cd4380
                    int32_t eax_79
                    eax_79.b = *edi_7
                    *edi_7 = eax_79.b + (*(((eax_77 + *(((eax_75
                        + *(((ebx_168 - eax_75) << 2) + data_1cd43c8) - eax_77) << 2) + data_1cd4384)
                        - eax_79) << 2) + edx_3)).b
                    int32_t ebx_180
                    ebx_180.b = *(esi_6 + 1)
                    int32_t eax_81
                    eax_81.b = not.b(ebx_180.b)
                    int32_t eax_83 = data_1cd4388
                    int32_t eax_85
                    eax_85.b = edi_7[1]
                    edi_7[1] = eax_85.b + (*(((eax_83 + *(((eax_81
                        + *(((ebx_180 - eax_81) << 2) + data_1cd43c8) - eax_83) << 2) + data_1cd438c)
                        - eax_85) << 2) + edx_3)).b
                    int32_t ebx_192
                    ebx_192.b = *(esi_6 + 2)
                    int32_t eax_87
                    eax_87.b = not.b(ebx_192.b)
                    int32_t eax_89 = data_1cd4390
                    int32_t eax_91
                    eax_91.b = edi_7[2]
                    eax_62 = eax_91 + *(((eax_89 + *(((eax_87
                        + *(((ebx_192 - eax_87) << 2) + data_1cd43c8) - eax_89) << 2) + data_1cd4394)
                        - eax_91) << 2) + edx_3)
                    edi_7[2] = eax_62.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_204 = ebx_137
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_204 += data_1cd43ec
            
            if (ebx_204 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_137 = ebx_204 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_62
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        void* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_92
        
        while (true)
            void* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                eax_92.b = *(esi_8 + 3)
                eax_92.b = eax_92.b
                
                if (eax_92.b != 0)
                    if (eax_92 == 0xff)
                        int32_t ebx_209
                        ebx_209.b = *esi_8
                        int32_t eax_94
                        eax_94.b = not.b(ebx_209.b)
                        int32_t eax_96 = data_1cd4380
                        *edi_10 = eax_96.b + (*(((eax_94
                            + *(((ebx_209 - eax_94) << 2) + data_1cd43c8) - eax_96) << 2)
                            + data_1cd4384)).b
                        int32_t ebx_218
                        ebx_218.b = *(esi_8 + 1)
                        int32_t eax_98
                        eax_98.b = not.b(ebx_218.b)
                        int32_t eax_100 = data_1cd4388
                        edi_10[1] = eax_100.b + (*(((eax_98
                            + *(((ebx_218 - eax_98) << 2) + data_1cd43c8) - eax_100) << 2)
                            + data_1cd438c)).b
                        int32_t ebx_227
                        ebx_227.b = *(esi_8 + 2)
                        int32_t eax_102
                        eax_102.b = not.b(ebx_227.b)
                        int32_t eax_104 = data_1cd4390
                        eax_92 = eax_104 + *(((eax_102
                            + *(((ebx_227 - eax_102) << 2) + data_1cd43c8) - eax_104) << 2)
                            + data_1cd4394)
                        edi_10[2] = eax_92.b
                    else
                        int32_t edx_5 = *((eax_92 << 2) + data_1cd4328)
                        int32_t ebx_236
                        ebx_236.b = *esi_8
                        int32_t eax_105
                        eax_105.b = not.b(ebx_236.b)
                        int32_t eax_107 = data_1cd4380
                        int32_t eax_109
                        eax_109.b = *edi_10
                        *edi_10 = eax_109.b + (*(((eax_107 + *(((eax_105
                            + *(((ebx_236 - eax_105) << 2) + data_1cd43c8) - eax_107) << 2)
                            + data_1cd4384) - eax_109) << 2) + edx_5)).b
                        int32_t ebx_248
                        ebx_248.b = *(esi_8 + 1)
                        int32_t eax_111
                        eax_111.b = not.b(ebx_248.b)
                        int32_t eax_113 = data_1cd4388
                        int32_t eax_115
                        eax_115.b = edi_10[1]
                        edi_10[1] = eax_115.b + (*(((eax_113 + *(((eax_111
                            + *(((ebx_248 - eax_111) << 2) + data_1cd43c8) - eax_113) << 2)
                            + data_1cd438c) - eax_115) << 2) + edx_5)).b
                        int32_t ebx_260
                        ebx_260.b = *(esi_8 + 2)
                        int32_t eax_117
                        eax_117.b = not.b(ebx_260.b)
                        int32_t eax_119 = data_1cd4390
                        int32_t eax_121
                        eax_121.b = edi_10[2]
                        eax_92 = eax_121 + *(((eax_119 + *(((eax_117
                            + *(((ebx_260 - eax_117) << 2) + data_1cd43c8) - eax_119) << 2)
                            + data_1cd4394) - eax_121) << 2) + edx_5)
                        edi_10[2] = eax_92.b
                
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
        
        return eax_92
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_273 = data_1cd4414
        int32_t eax_122
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                eax_122.b = *(esi_11 + 3)
                eax_122.b = eax_122.b
                
                if (eax_122.b != 0)
                    if (eax_122 == 0xff)
                        int32_t ebx_277
                        ebx_277.b = *esi_11
                        int32_t eax_124
                        eax_124.b = not.b(ebx_277.b)
                        int32_t eax_126 = data_1cd4380
                        *edi_13 = eax_126.b + (*(((eax_124
                            + *(((ebx_277 - eax_124) << 2) + data_1cd43c8) - eax_126) << 2)
                            + data_1cd4384)).b
                        int32_t ebx_286
                        ebx_286.b = *(esi_11 + 1)
                        int32_t eax_128
                        eax_128.b = not.b(ebx_286.b)
                        int32_t eax_130 = data_1cd4388
                        edi_13[1] = eax_130.b + (*(((eax_128
                            + *(((ebx_286 - eax_128) << 2) + data_1cd43c8) - eax_130) << 2)
                            + data_1cd438c)).b
                        int32_t ebx_295
                        ebx_295.b = *(esi_11 + 2)
                        int32_t eax_132
                        eax_132.b = not.b(ebx_295.b)
                        int32_t eax_134 = data_1cd4390
                        eax_122 = eax_134 + *(((eax_132
                            + *(((ebx_295 - eax_132) << 2) + data_1cd43c8) - eax_134) << 2)
                            + data_1cd4394)
                        edi_13[2] = eax_122.b
                    else
                        int32_t edx_8 = *((eax_122 << 2) + data_1cd4328)
                        int32_t ebx_304
                        ebx_304.b = *esi_11
                        int32_t eax_135
                        eax_135.b = not.b(ebx_304.b)
                        int32_t eax_137 = data_1cd4380
                        int32_t eax_139
                        eax_139.b = *edi_13
                        *edi_13 = eax_139.b + (*(((eax_137 + *(((eax_135
                            + *(((ebx_304 - eax_135) << 2) + data_1cd43c8) - eax_137) << 2)
                            + data_1cd4384) - eax_139) << 2) + edx_8)).b
                        int32_t ebx_316
                        ebx_316.b = *(esi_11 + 1)
                        int32_t eax_141
                        eax_141.b = not.b(ebx_316.b)
                        int32_t eax_143 = data_1cd4388
                        int32_t eax_145
                        eax_145.b = edi_13[1]
                        edi_13[1] = eax_145.b + (*(((eax_143 + *(((eax_141
                            + *(((ebx_316 - eax_141) << 2) + data_1cd43c8) - eax_143) << 2)
                            + data_1cd438c) - eax_145) << 2) + edx_8)).b
                        int32_t ebx_328
                        ebx_328.b = *(esi_11 + 2)
                        int32_t eax_147
                        eax_147.b = not.b(ebx_328.b)
                        int32_t eax_149 = data_1cd4390
                        int32_t eax_151
                        eax_151.b = edi_13[2]
                        eax_122 = eax_151 + *(((eax_149 + *(((eax_147
                            + *(((ebx_328 - eax_147) << 2) + data_1cd43c8) - eax_149) << 2)
                            + data_1cd4394) - eax_151) << 2) + edx_8)
                        edi_13[2] = eax_122.b
                
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
            ebx_273 += data_1cd43f4
            
            if (ebx_273 s>= data_1cd43ec)
                ebx_273 -= data_1cd43ec
                esi_11 += data_1cd4400
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_122
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    void* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_342 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t eax_152
        int32_t i_5
        
        do
            eax_152.b = *(esi_13 + 3)
            eax_152.b = eax_152.b
            
            if (eax_152.b != 0)
                if (eax_152 == 0xff)
                    int32_t ebx_346
                    ebx_346.b = *esi_13
                    int32_t eax_154
                    eax_154.b = not.b(ebx_346.b)
                    int32_t eax_156 = data_1cd4380
                    *edi_16 = eax_156.b + (*(((eax_154
                        + *(((ebx_346 - eax_154) << 2) + data_1cd43c8) - eax_156) << 2)
                        + data_1cd4384)).b
                    int32_t ebx_355
                    ebx_355.b = *(esi_13 + 1)
                    int32_t eax_158
                    eax_158.b = not.b(ebx_355.b)
                    int32_t eax_160 = data_1cd4388
                    edi_16[1] = eax_160.b + (*(((eax_158
                        + *(((ebx_355 - eax_158) << 2) + data_1cd43c8) - eax_160) << 2)
                        + data_1cd438c)).b
                    int32_t ebx_364
                    ebx_364.b = *(esi_13 + 2)
                    int32_t eax_162
                    eax_162.b = not.b(ebx_364.b)
                    int32_t eax_164 = data_1cd4390
                    eax_152 = eax_164 + *(((eax_162 + *(((ebx_364 - eax_162) << 2) + data_1cd43c8)
                        - eax_164) << 2) + data_1cd4394)
                    edi_16[2] = eax_152.b
                else
                    int32_t edx_11 = *((eax_152 << 2) + data_1cd4328)
                    int32_t ebx_373
                    ebx_373.b = *esi_13
                    int32_t eax_165
                    eax_165.b = not.b(ebx_373.b)
                    int32_t eax_167 = data_1cd4380
                    int32_t eax_169
                    eax_169.b = *edi_16
                    *edi_16 = eax_169.b + (*(((eax_167 + *(((eax_165
                        + *(((ebx_373 - eax_165) << 2) + data_1cd43c8) - eax_167) << 2) + data_1cd4384)
                        - eax_169) << 2) + edx_11)).b
                    int32_t ebx_385
                    ebx_385.b = *(esi_13 + 1)
                    int32_t eax_171
                    eax_171.b = not.b(ebx_385.b)
                    int32_t eax_173 = data_1cd4388
                    int32_t eax_175
                    eax_175.b = edi_16[1]
                    edi_16[1] = eax_175.b + (*(((eax_173 + *(((eax_171
                        + *(((ebx_385 - eax_171) << 2) + data_1cd43c8) - eax_173) << 2) + data_1cd438c)
                        - eax_175) << 2) + edx_11)).b
                    int32_t ebx_397
                    ebx_397.b = *(esi_13 + 2)
                    int32_t eax_177
                    eax_177.b = not.b(ebx_397.b)
                    int32_t eax_179 = data_1cd4390
                    int32_t eax_181
                    eax_181.b = edi_16[2]
                    eax_152 = eax_181 + *(((eax_179 + *(((eax_177
                        + *(((ebx_397 - eax_177) << 2) + data_1cd43c8) - eax_179) << 2) + data_1cd4394)
                        - eax_181) << 2) + edx_11)
                    edi_16[2] = eax_152.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_409 = ebx_342
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_409 += data_1cd43ec
            
            if (ebx_409 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_342 = ebx_409 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_152
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
    label_5cb457:
        int32_t eax_182
        eax_182.b = *(esi_15 + 3)
        eax_182.b = eax_182.b
        
        if (eax_182.b != 0)
            if (eax_182 == 0xff)
                int32_t ebx_414
                ebx_414.b = *esi_15
                int32_t eax_184
                eax_184.b = not.b(ebx_414.b)
                int32_t eax_186 = data_1cd4380
                *edi_19 = eax_186.b + (*(((eax_184 + *(((ebx_414 - eax_184) << 2) + data_1cd43c8)
                    - eax_186) << 2) + data_1cd4384)).b
                int32_t ebx_423
                ebx_423.b = *(esi_15 + 1)
                int32_t eax_188
                eax_188.b = not.b(ebx_423.b)
                int32_t eax_190 = data_1cd4388
                edi_19[1] = eax_190.b + (*(((eax_188 + *(((ebx_423 - eax_188) << 2) + data_1cd43c8)
                    - eax_190) << 2) + data_1cd438c)).b
                int32_t ebx_432
                ebx_432.b = *(esi_15 + 2)
                int32_t eax_192
                eax_192.b = not.b(ebx_432.b)
                int32_t eax_194 = data_1cd4390
                eax_182 = eax_194 + *(((eax_192 + *(((ebx_432 - eax_192) << 2) + data_1cd43c8)
                    - eax_194) << 2) + data_1cd4394)
                edi_19[2] = eax_182.b
            else
                int32_t edx_14 = *((eax_182 << 2) + data_1cd4328)
                int32_t ebx_441
                ebx_441.b = *esi_15
                int32_t eax_195
                eax_195.b = not.b(ebx_441.b)
                int32_t eax_197 = data_1cd4380
                int32_t eax_199
                eax_199.b = *edi_19
                *edi_19 = eax_199.b + (*(((eax_197 + *(((eax_195
                    + *(((ebx_441 - eax_195) << 2) + data_1cd43c8) - eax_197) << 2) + data_1cd4384)
                    - eax_199) << 2) + edx_14)).b
                int32_t ebx_453
                ebx_453.b = *(esi_15 + 1)
                int32_t eax_201
                eax_201.b = not.b(ebx_453.b)
                int32_t eax_203 = data_1cd4388
                int32_t eax_205
                eax_205.b = edi_19[1]
                edi_19[1] = eax_205.b + (*(((eax_203 + *(((eax_201
                    + *(((ebx_453 - eax_201) << 2) + data_1cd43c8) - eax_203) << 2) + data_1cd438c)
                    - eax_205) << 2) + edx_14)).b
                int32_t ebx_465
                ebx_465.b = *(esi_15 + 2)
                int32_t eax_207
                eax_207.b = not.b(ebx_465.b)
                int32_t eax_209 = data_1cd4390
                int32_t eax_211
                eax_211.b = edi_19[2]
                eax_182 = eax_211 + *(((eax_209 + *(((eax_207
                    + *(((ebx_465 - eax_207) << 2) + data_1cd43c8) - eax_209) << 2) + data_1cd4394)
                    - eax_211) << 2) + edx_14)
                edi_19[2] = eax_182.b
        
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
                    goto label_5cb5ed
                
                goto label_5cb457
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5cb5ed:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_182
                
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
    int32_t ebx_478 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5cb63e:
        int32_t eax_212
        eax_212.b = *(esi_18 + 3)
        eax_212.b = eax_212.b
        
        if (eax_212.b != 0)
            if (eax_212 == 0xff)
                int32_t ebx_482
                ebx_482.b = *esi_18
                int32_t eax_214
                eax_214.b = not.b(ebx_482.b)
                int32_t eax_216 = data_1cd4380
                *edi_22 = eax_216.b + (*(((eax_214 + *(((ebx_482 - eax_214) << 2) + data_1cd43c8)
                    - eax_216) << 2) + data_1cd4384)).b
                int32_t ebx_491
                ebx_491.b = *(esi_18 + 1)
                int32_t eax_218
                eax_218.b = not.b(ebx_491.b)
                int32_t eax_220 = data_1cd4388
                edi_22[1] = eax_220.b + (*(((eax_218 + *(((ebx_491 - eax_218) << 2) + data_1cd43c8)
                    - eax_220) << 2) + data_1cd438c)).b
                int32_t ebx_500
                ebx_500.b = *(esi_18 + 2)
                int32_t eax_222
                eax_222.b = not.b(ebx_500.b)
                int32_t eax_224 = data_1cd4390
                eax_212 = eax_224 + *(((eax_222 + *(((ebx_500 - eax_222) << 2) + data_1cd43c8)
                    - eax_224) << 2) + data_1cd4394)
                edi_22[2] = eax_212.b
            else
                int32_t edx_17 = *((eax_212 << 2) + data_1cd4328)
                int32_t ebx_509
                ebx_509.b = *esi_18
                int32_t eax_225
                eax_225.b = not.b(ebx_509.b)
                int32_t eax_227 = data_1cd4380
                int32_t eax_229
                eax_229.b = *edi_22
                *edi_22 = eax_229.b + (*(((eax_227 + *(((eax_225
                    + *(((ebx_509 - eax_225) << 2) + data_1cd43c8) - eax_227) << 2) + data_1cd4384)
                    - eax_229) << 2) + edx_17)).b
                int32_t ebx_521
                ebx_521.b = *(esi_18 + 1)
                int32_t eax_231
                eax_231.b = not.b(ebx_521.b)
                int32_t eax_233 = data_1cd4388
                int32_t eax_235
                eax_235.b = edi_22[1]
                edi_22[1] = eax_235.b + (*(((eax_233 + *(((eax_231
                    + *(((ebx_521 - eax_231) << 2) + data_1cd43c8) - eax_233) << 2) + data_1cd438c)
                    - eax_235) << 2) + edx_17)).b
                int32_t ebx_533
                ebx_533.b = *(esi_18 + 2)
                int32_t eax_237
                eax_237.b = not.b(ebx_533.b)
                int32_t eax_239 = data_1cd4390
                int32_t eax_241
                eax_241.b = edi_22[2]
                eax_212 = eax_241 + *(((eax_239 + *(((eax_237
                    + *(((ebx_533 - eax_237) << 2) + data_1cd43c8) - eax_239) << 2) + data_1cd4394)
                    - eax_241) << 2) + edx_17)
                edi_22[2] = eax_212.b
        
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
                    goto label_5cb7d3
                
                goto label_5cb63e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5cb7d3:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_478 += data_1cd43f4
                
                if (ebx_478 s>= data_1cd43ec)
                    ebx_478 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_212
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    void* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_547 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5cb83e:
        int32_t eax_242
        eax_242.b = *(esi_20 + 3)
        eax_242.b = eax_242.b
        
        if (eax_242.b != 0)
            if (eax_242 == 0xff)
                int32_t ebx_551
                ebx_551.b = *esi_20
                int32_t eax_244
                eax_244.b = not.b(ebx_551.b)
                int32_t eax_246 = data_1cd4380
                *edi_25 = eax_246.b + (*(((eax_244 + *(((ebx_551 - eax_244) << 2) + data_1cd43c8)
                    - eax_246) << 2) + data_1cd4384)).b
                int32_t ebx_560
                ebx_560.b = *(esi_20 + 1)
                int32_t eax_248
                eax_248.b = not.b(ebx_560.b)
                int32_t eax_250 = data_1cd4388
                edi_25[1] = eax_250.b + (*(((eax_248 + *(((ebx_560 - eax_248) << 2) + data_1cd43c8)
                    - eax_250) << 2) + data_1cd438c)).b
                int32_t ebx_569
                ebx_569.b = *(esi_20 + 2)
                int32_t eax_252
                eax_252.b = not.b(ebx_569.b)
                int32_t eax_254 = data_1cd4390
                eax_242 = eax_254 + *(((eax_252 + *(((ebx_569 - eax_252) << 2) + data_1cd43c8)
                    - eax_254) << 2) + data_1cd4394)
                edi_25[2] = eax_242.b
            else
                int32_t edx_20 = *((eax_242 << 2) + data_1cd4328)
                int32_t ebx_578
                ebx_578.b = *esi_20
                int32_t eax_255
                eax_255.b = not.b(ebx_578.b)
                int32_t eax_257 = data_1cd4380
                int32_t eax_259
                eax_259.b = *edi_25
                *edi_25 = eax_259.b + (*(((eax_257 + *(((eax_255
                    + *(((ebx_578 - eax_255) << 2) + data_1cd43c8) - eax_257) << 2) + data_1cd4384)
                    - eax_259) << 2) + edx_20)).b
                int32_t ebx_590
                ebx_590.b = *(esi_20 + 1)
                int32_t eax_261
                eax_261.b = not.b(ebx_590.b)
                int32_t eax_263 = data_1cd4388
                int32_t eax_265
                eax_265.b = edi_25[1]
                edi_25[1] = eax_265.b + (*(((eax_263 + *(((eax_261
                    + *(((ebx_590 - eax_261) << 2) + data_1cd43c8) - eax_263) << 2) + data_1cd438c)
                    - eax_265) << 2) + edx_20)).b
                int32_t ebx_602
                ebx_602.b = *(esi_20 + 2)
                int32_t eax_267
                eax_267.b = not.b(ebx_602.b)
                int32_t eax_269 = data_1cd4390
                int32_t eax_271
                eax_271.b = edi_25[2]
                eax_242 = eax_271 + *(((eax_269 + *(((eax_267
                    + *(((ebx_602 - eax_267) << 2) + data_1cd43c8) - eax_269) << 2) + data_1cd4394)
                    - eax_271) << 2) + edx_20)
                edi_25[2] = eax_242.b
        
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
                    goto label_5cb9d1
                
                goto label_5cb83e
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5cb9d1:
                int32_t ebx_614 = ebx_547
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_614 += data_1cd43ec
                    
                    if (ebx_614 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_547 = ebx_614 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_242
                
                break

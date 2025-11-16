// 函数: sub_5d7810
// 地址: 0x5d7810
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
                        int32_t eax_8
                        eax_8.b = *edi_1
                        int32_t eax_9 = eax_8 + eax_6 + *(((eax_4
                            + *(((ebx_4 - eax_4) << 2) + data_1cd43c8) - eax_6) << 2) + data_1cd4384)
                        
                        if (eax_9 s> 0xff)
                            eax_9 = 0xff
                        
                        *edi_1 = eax_9.b
                        int32_t ebx_13
                        ebx_13.b = esi_1[1]
                        int32_t eax_10
                        eax_10.b = not.b(ebx_13.b)
                        int32_t eax_12 = data_1cd4388
                        int32_t eax_14
                        eax_14.b = edi_1[1]
                        int32_t eax_15 = eax_14 + eax_12 + *(((eax_10
                            + *(((ebx_13 - eax_10) << 2) + data_1cd43c8) - eax_12) << 2)
                            + data_1cd438c)
                        
                        if (eax_15 s> 0xff)
                            eax_15 = 0xff
                        
                        edi_1[1] = eax_15.b
                        int32_t ebx_22
                        ebx_22.b = esi_1[2]
                        int32_t eax_16
                        eax_16.b = not.b(ebx_22.b)
                        int32_t eax_18 = data_1cd4390
                        int32_t eax_20
                        eax_20.b = edi_1[2]
                        eax_2 = eax_20 + eax_18 + *(((eax_16
                            + *(((ebx_22 - eax_16) << 2) + data_1cd43c8) - eax_18) << 2)
                            + data_1cd4394)
                        
                        if (eax_2 s> 0xff)
                            eax_2 = 0xff
                        
                        edi_1[2] = eax_2.b
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_31
                        ebx_31.b = *esi_1
                        int32_t eax_21
                        eax_21.b = not.b(ebx_31.b)
                        int32_t eax_23 = data_1cd4380
                        int32_t eax_25
                        eax_25.b = *edi_1
                        int32_t eax_26 = eax_25 + *(((eax_23 + *(((eax_21
                            + *(((ebx_31 - eax_21) << 2) + data_1cd43c8) - eax_23) << 2)
                            + data_1cd4384)) << 2) + edx_1)
                        
                        if (eax_26 s> 0xff)
                            eax_26 = 0xff
                        
                        *edi_1 = eax_26.b
                        int32_t ebx_43
                        ebx_43.b = esi_1[1]
                        int32_t eax_27
                        eax_27.b = not.b(ebx_43.b)
                        int32_t eax_29 = data_1cd4388
                        int32_t eax_31
                        eax_31.b = edi_1[1]
                        int32_t eax_32 = eax_31 + *(((eax_29 + *(((eax_27
                            + *(((ebx_43 - eax_27) << 2) + data_1cd43c8) - eax_29) << 2)
                            + data_1cd438c)) << 2) + edx_1)
                        
                        if (eax_32 s> 0xff)
                            eax_32 = 0xff
                        
                        edi_1[1] = eax_32.b
                        int32_t ebx_55
                        ebx_55.b = esi_1[2]
                        int32_t eax_33
                        eax_33.b = not.b(ebx_55.b)
                        int32_t eax_35 = data_1cd4390
                        int32_t eax_37
                        eax_37.b = edi_1[2]
                        eax_2 = eax_37 + *(((eax_35 + *(((eax_33
                            + *(((ebx_55 - eax_33) << 2) + data_1cd43c8) - eax_35) << 2)
                            + data_1cd4394)) << 2) + edx_1)
                        
                        if (eax_2 s> 0xff)
                            eax_2 = 0xff
                        
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
        int32_t eax_38
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                eax_38.b = *(esi_4 + 3)
                eax_38.b = eax_38.b
                
                if (eax_38.b != 0)
                    if (eax_38 == 0xff)
                        int32_t ebx_72
                        ebx_72.b = *esi_4
                        int32_t eax_40
                        eax_40.b = not.b(ebx_72.b)
                        int32_t eax_42 = data_1cd4380
                        int32_t eax_44
                        eax_44.b = *edi_4
                        int32_t eax_45 = eax_44 + eax_42 + *(((eax_40
                            + *(((ebx_72 - eax_40) << 2) + data_1cd43c8) - eax_42) << 2)
                            + data_1cd4384)
                        
                        if (eax_45 s> 0xff)
                            eax_45 = 0xff
                        
                        *edi_4 = eax_45.b
                        int32_t ebx_81
                        ebx_81.b = *(esi_4 + 1)
                        int32_t eax_46
                        eax_46.b = not.b(ebx_81.b)
                        int32_t eax_48 = data_1cd4388
                        int32_t eax_50
                        eax_50.b = edi_4[1]
                        int32_t eax_51 = eax_50 + eax_48 + *(((eax_46
                            + *(((ebx_81 - eax_46) << 2) + data_1cd43c8) - eax_48) << 2)
                            + data_1cd438c)
                        
                        if (eax_51 s> 0xff)
                            eax_51 = 0xff
                        
                        edi_4[1] = eax_51.b
                        int32_t ebx_90
                        ebx_90.b = *(esi_4 + 2)
                        int32_t eax_52
                        eax_52.b = not.b(ebx_90.b)
                        int32_t eax_54 = data_1cd4390
                        int32_t eax_56
                        eax_56.b = edi_4[2]
                        eax_38 = eax_56 + eax_54 + *(((eax_52
                            + *(((ebx_90 - eax_52) << 2) + data_1cd43c8) - eax_54) << 2)
                            + data_1cd4394)
                        
                        if (eax_38 s> 0xff)
                            eax_38 = 0xff
                        
                        edi_4[2] = eax_38.b
                    else
                        int32_t edx_2 = *((eax_38 << 2) + data_1cd4328)
                        int32_t ebx_99
                        ebx_99.b = *esi_4
                        int32_t eax_57
                        eax_57.b = not.b(ebx_99.b)
                        int32_t eax_59 = data_1cd4380
                        int32_t eax_61
                        eax_61.b = *edi_4
                        int32_t eax_62 = eax_61 + *(((eax_59 + *(((eax_57
                            + *(((ebx_99 - eax_57) << 2) + data_1cd43c8) - eax_59) << 2)
                            + data_1cd4384)) << 2) + edx_2)
                        
                        if (eax_62 s> 0xff)
                            eax_62 = 0xff
                        
                        *edi_4 = eax_62.b
                        int32_t ebx_111
                        ebx_111.b = *(esi_4 + 1)
                        int32_t eax_63
                        eax_63.b = not.b(ebx_111.b)
                        int32_t eax_65 = data_1cd4388
                        int32_t eax_67
                        eax_67.b = edi_4[1]
                        int32_t eax_68 = eax_67 + *(((eax_65 + *(((eax_63
                            + *(((ebx_111 - eax_63) << 2) + data_1cd43c8) - eax_65) << 2)
                            + data_1cd438c)) << 2) + edx_2)
                        
                        if (eax_68 s> 0xff)
                            eax_68 = 0xff
                        
                        edi_4[1] = eax_68.b
                        int32_t ebx_123
                        ebx_123.b = *(esi_4 + 2)
                        int32_t eax_69
                        eax_69.b = not.b(ebx_123.b)
                        int32_t eax_71 = data_1cd4390
                        int32_t eax_73
                        eax_73.b = edi_4[2]
                        eax_38 = eax_73 + *(((eax_71 + *(((eax_69
                            + *(((ebx_123 - eax_69) << 2) + data_1cd43c8) - eax_71) << 2)
                            + data_1cd4394)) << 2) + edx_2)
                        
                        if (eax_38 s> 0xff)
                            eax_38 = 0xff
                        
                        edi_4[2] = eax_38.b
                
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
        return eax_38
    
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
        int32_t eax_74
        int32_t i_2
        
        do
            eax_74.b = *(esi_6 + 3)
            eax_74.b = eax_74.b
            
            if (eax_74.b != 0)
                if (eax_74 == 0xff)
                    int32_t ebx_141
                    ebx_141.b = *esi_6
                    int32_t eax_76
                    eax_76.b = not.b(ebx_141.b)
                    int32_t eax_78 = data_1cd4380
                    int32_t eax_80
                    eax_80.b = *edi_7
                    int32_t eax_81 = eax_80 + eax_78 + *(((eax_76
                        + *(((ebx_141 - eax_76) << 2) + data_1cd43c8) - eax_78) << 2) + data_1cd4384)
                    
                    if (eax_81 s> 0xff)
                        eax_81 = 0xff
                    
                    *edi_7 = eax_81.b
                    int32_t ebx_150
                    ebx_150.b = *(esi_6 + 1)
                    int32_t eax_82
                    eax_82.b = not.b(ebx_150.b)
                    int32_t eax_84 = data_1cd4388
                    int32_t eax_86
                    eax_86.b = edi_7[1]
                    int32_t eax_87 = eax_86 + eax_84 + *(((eax_82
                        + *(((ebx_150 - eax_82) << 2) + data_1cd43c8) - eax_84) << 2) + data_1cd438c)
                    
                    if (eax_87 s> 0xff)
                        eax_87 = 0xff
                    
                    edi_7[1] = eax_87.b
                    int32_t ebx_159
                    ebx_159.b = *(esi_6 + 2)
                    int32_t eax_88
                    eax_88.b = not.b(ebx_159.b)
                    int32_t eax_90 = data_1cd4390
                    int32_t eax_92
                    eax_92.b = edi_7[2]
                    eax_74 = eax_92 + eax_90 + *(((eax_88
                        + *(((ebx_159 - eax_88) << 2) + data_1cd43c8) - eax_90) << 2) + data_1cd4394)
                    
                    if (eax_74 s> 0xff)
                        eax_74 = 0xff
                    
                    edi_7[2] = eax_74.b
                else
                    int32_t edx_3 = *((eax_74 << 2) + data_1cd4328)
                    int32_t ebx_168
                    ebx_168.b = *esi_6
                    int32_t eax_93
                    eax_93.b = not.b(ebx_168.b)
                    int32_t eax_95 = data_1cd4380
                    int32_t eax_97
                    eax_97.b = *edi_7
                    int32_t eax_98 = eax_97 + *(((eax_95 + *(((eax_93
                        + *(((ebx_168 - eax_93) << 2) + data_1cd43c8) - eax_95) << 2) + data_1cd4384))
                        << 2) + edx_3)
                    
                    if (eax_98 s> 0xff)
                        eax_98 = 0xff
                    
                    *edi_7 = eax_98.b
                    int32_t ebx_180
                    ebx_180.b = *(esi_6 + 1)
                    int32_t eax_99
                    eax_99.b = not.b(ebx_180.b)
                    int32_t eax_101 = data_1cd4388
                    int32_t eax_103
                    eax_103.b = edi_7[1]
                    int32_t eax_104 = eax_103 + *(((eax_101 + *(((eax_99
                        + *(((ebx_180 - eax_99) << 2) + data_1cd43c8) - eax_101) << 2) + data_1cd438c))
                        << 2) + edx_3)
                    
                    if (eax_104 s> 0xff)
                        eax_104 = 0xff
                    
                    edi_7[1] = eax_104.b
                    int32_t ebx_192
                    ebx_192.b = *(esi_6 + 2)
                    int32_t eax_105
                    eax_105.b = not.b(ebx_192.b)
                    int32_t eax_107 = data_1cd4390
                    int32_t eax_109
                    eax_109.b = edi_7[2]
                    eax_74 = eax_109 + *(((eax_107 + *(((eax_105
                        + *(((ebx_192 - eax_105) << 2) + data_1cd43c8) - eax_107) << 2)
                        + data_1cd4394)) << 2) + edx_3)
                    
                    if (eax_74 s> 0xff)
                        eax_74 = 0xff
                    
                    edi_7[2] = eax_74.b
            
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
            
            return eax_74
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        void* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_110
        
        while (true)
            void* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                eax_110.b = *(esi_8 + 3)
                eax_110.b = eax_110.b
                
                if (eax_110.b != 0)
                    if (eax_110 == 0xff)
                        int32_t ebx_209
                        ebx_209.b = *esi_8
                        int32_t eax_112
                        eax_112.b = not.b(ebx_209.b)
                        int32_t eax_114 = data_1cd4380
                        int32_t eax_116
                        eax_116.b = *edi_10
                        int32_t eax_117 = eax_116 + eax_114 + *(((eax_112
                            + *(((ebx_209 - eax_112) << 2) + data_1cd43c8) - eax_114) << 2)
                            + data_1cd4384)
                        
                        if (eax_117 s> 0xff)
                            eax_117 = 0xff
                        
                        *edi_10 = eax_117.b
                        int32_t ebx_218
                        ebx_218.b = *(esi_8 + 1)
                        int32_t eax_118
                        eax_118.b = not.b(ebx_218.b)
                        int32_t eax_120 = data_1cd4388
                        int32_t eax_122
                        eax_122.b = edi_10[1]
                        int32_t eax_123 = eax_122 + eax_120 + *(((eax_118
                            + *(((ebx_218 - eax_118) << 2) + data_1cd43c8) - eax_120) << 2)
                            + data_1cd438c)
                        
                        if (eax_123 s> 0xff)
                            eax_123 = 0xff
                        
                        edi_10[1] = eax_123.b
                        int32_t ebx_227
                        ebx_227.b = *(esi_8 + 2)
                        int32_t eax_124
                        eax_124.b = not.b(ebx_227.b)
                        int32_t eax_126 = data_1cd4390
                        int32_t eax_128
                        eax_128.b = edi_10[2]
                        eax_110 = eax_128 + eax_126 + *(((eax_124
                            + *(((ebx_227 - eax_124) << 2) + data_1cd43c8) - eax_126) << 2)
                            + data_1cd4394)
                        
                        if (eax_110 s> 0xff)
                            eax_110 = 0xff
                        
                        edi_10[2] = eax_110.b
                    else
                        int32_t edx_5 = *((eax_110 << 2) + data_1cd4328)
                        int32_t ebx_236
                        ebx_236.b = *esi_8
                        int32_t eax_129
                        eax_129.b = not.b(ebx_236.b)
                        int32_t eax_131 = data_1cd4380
                        int32_t eax_133
                        eax_133.b = *edi_10
                        int32_t eax_134 = eax_133 + *(((eax_131 + *(((eax_129
                            + *(((ebx_236 - eax_129) << 2) + data_1cd43c8) - eax_131) << 2)
                            + data_1cd4384)) << 2) + edx_5)
                        
                        if (eax_134 s> 0xff)
                            eax_134 = 0xff
                        
                        *edi_10 = eax_134.b
                        int32_t ebx_248
                        ebx_248.b = *(esi_8 + 1)
                        int32_t eax_135
                        eax_135.b = not.b(ebx_248.b)
                        int32_t eax_137 = data_1cd4388
                        int32_t eax_139
                        eax_139.b = edi_10[1]
                        int32_t eax_140 = eax_139 + *(((eax_137 + *(((eax_135
                            + *(((ebx_248 - eax_135) << 2) + data_1cd43c8) - eax_137) << 2)
                            + data_1cd438c)) << 2) + edx_5)
                        
                        if (eax_140 s> 0xff)
                            eax_140 = 0xff
                        
                        edi_10[1] = eax_140.b
                        int32_t ebx_260
                        ebx_260.b = *(esi_8 + 2)
                        int32_t eax_141
                        eax_141.b = not.b(ebx_260.b)
                        int32_t eax_143 = data_1cd4390
                        int32_t eax_145
                        eax_145.b = edi_10[2]
                        eax_110 = eax_145 + *(((eax_143 + *(((eax_141
                            + *(((ebx_260 - eax_141) << 2) + data_1cd43c8) - eax_143) << 2)
                            + data_1cd4394)) << 2) + edx_5)
                        
                        if (eax_110 s> 0xff)
                            eax_110 = 0xff
                        
                        edi_10[2] = eax_110.b
                
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
        
        return eax_110
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_273 = data_1cd4414
        int32_t eax_146
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                eax_146.b = *(esi_11 + 3)
                eax_146.b = eax_146.b
                
                if (eax_146.b != 0)
                    if (eax_146 == 0xff)
                        int32_t ebx_277
                        ebx_277.b = *esi_11
                        int32_t eax_148
                        eax_148.b = not.b(ebx_277.b)
                        int32_t eax_150 = data_1cd4380
                        int32_t eax_152
                        eax_152.b = *edi_13
                        int32_t eax_153 = eax_152 + eax_150 + *(((eax_148
                            + *(((ebx_277 - eax_148) << 2) + data_1cd43c8) - eax_150) << 2)
                            + data_1cd4384)
                        
                        if (eax_153 s> 0xff)
                            eax_153 = 0xff
                        
                        *edi_13 = eax_153.b
                        int32_t ebx_286
                        ebx_286.b = *(esi_11 + 1)
                        int32_t eax_154
                        eax_154.b = not.b(ebx_286.b)
                        int32_t eax_156 = data_1cd4388
                        int32_t eax_158
                        eax_158.b = edi_13[1]
                        int32_t eax_159 = eax_158 + eax_156 + *(((eax_154
                            + *(((ebx_286 - eax_154) << 2) + data_1cd43c8) - eax_156) << 2)
                            + data_1cd438c)
                        
                        if (eax_159 s> 0xff)
                            eax_159 = 0xff
                        
                        edi_13[1] = eax_159.b
                        int32_t ebx_295
                        ebx_295.b = *(esi_11 + 2)
                        int32_t eax_160
                        eax_160.b = not.b(ebx_295.b)
                        int32_t eax_162 = data_1cd4390
                        int32_t eax_164
                        eax_164.b = edi_13[2]
                        eax_146 = eax_164 + eax_162 + *(((eax_160
                            + *(((ebx_295 - eax_160) << 2) + data_1cd43c8) - eax_162) << 2)
                            + data_1cd4394)
                        
                        if (eax_146 s> 0xff)
                            eax_146 = 0xff
                        
                        edi_13[2] = eax_146.b
                    else
                        int32_t edx_8 = *((eax_146 << 2) + data_1cd4328)
                        int32_t ebx_304
                        ebx_304.b = *esi_11
                        int32_t eax_165
                        eax_165.b = not.b(ebx_304.b)
                        int32_t eax_167 = data_1cd4380
                        int32_t eax_169
                        eax_169.b = *edi_13
                        int32_t eax_170 = eax_169 + *(((eax_167 + *(((eax_165
                            + *(((ebx_304 - eax_165) << 2) + data_1cd43c8) - eax_167) << 2)
                            + data_1cd4384)) << 2) + edx_8)
                        
                        if (eax_170 s> 0xff)
                            eax_170 = 0xff
                        
                        *edi_13 = eax_170.b
                        int32_t ebx_316
                        ebx_316.b = *(esi_11 + 1)
                        int32_t eax_171
                        eax_171.b = not.b(ebx_316.b)
                        int32_t eax_173 = data_1cd4388
                        int32_t eax_175
                        eax_175.b = edi_13[1]
                        int32_t eax_176 = eax_175 + *(((eax_173 + *(((eax_171
                            + *(((ebx_316 - eax_171) << 2) + data_1cd43c8) - eax_173) << 2)
                            + data_1cd438c)) << 2) + edx_8)
                        
                        if (eax_176 s> 0xff)
                            eax_176 = 0xff
                        
                        edi_13[1] = eax_176.b
                        int32_t ebx_328
                        ebx_328.b = *(esi_11 + 2)
                        int32_t eax_177
                        eax_177.b = not.b(ebx_328.b)
                        int32_t eax_179 = data_1cd4390
                        int32_t eax_181
                        eax_181.b = edi_13[2]
                        eax_146 = eax_181 + *(((eax_179 + *(((eax_177
                            + *(((ebx_328 - eax_177) << 2) + data_1cd43c8) - eax_179) << 2)
                            + data_1cd4394)) << 2) + edx_8)
                        
                        if (eax_146 s> 0xff)
                            eax_146 = 0xff
                        
                        edi_13[2] = eax_146.b
                
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
        return eax_146
    
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
        int32_t eax_182
        int32_t i_5
        
        do
            eax_182.b = *(esi_13 + 3)
            eax_182.b = eax_182.b
            
            if (eax_182.b != 0)
                if (eax_182 == 0xff)
                    int32_t ebx_346
                    ebx_346.b = *esi_13
                    int32_t eax_184
                    eax_184.b = not.b(ebx_346.b)
                    int32_t eax_186 = data_1cd4380
                    int32_t eax_188
                    eax_188.b = *edi_16
                    int32_t eax_189 = eax_188 + eax_186 + *(((eax_184
                        + *(((ebx_346 - eax_184) << 2) + data_1cd43c8) - eax_186) << 2) + data_1cd4384)
                    
                    if (eax_189 s> 0xff)
                        eax_189 = 0xff
                    
                    *edi_16 = eax_189.b
                    int32_t ebx_355
                    ebx_355.b = *(esi_13 + 1)
                    int32_t eax_190
                    eax_190.b = not.b(ebx_355.b)
                    int32_t eax_192 = data_1cd4388
                    int32_t eax_194
                    eax_194.b = edi_16[1]
                    int32_t eax_195 = eax_194 + eax_192 + *(((eax_190
                        + *(((ebx_355 - eax_190) << 2) + data_1cd43c8) - eax_192) << 2) + data_1cd438c)
                    
                    if (eax_195 s> 0xff)
                        eax_195 = 0xff
                    
                    edi_16[1] = eax_195.b
                    int32_t ebx_364
                    ebx_364.b = *(esi_13 + 2)
                    int32_t eax_196
                    eax_196.b = not.b(ebx_364.b)
                    int32_t eax_198 = data_1cd4390
                    int32_t eax_200
                    eax_200.b = edi_16[2]
                    eax_182 = eax_200 + eax_198 + *(((eax_196
                        + *(((ebx_364 - eax_196) << 2) + data_1cd43c8) - eax_198) << 2) + data_1cd4394)
                    
                    if (eax_182 s> 0xff)
                        eax_182 = 0xff
                    
                    edi_16[2] = eax_182.b
                else
                    int32_t edx_11 = *((eax_182 << 2) + data_1cd4328)
                    int32_t ebx_373
                    ebx_373.b = *esi_13
                    int32_t eax_201
                    eax_201.b = not.b(ebx_373.b)
                    int32_t eax_203 = data_1cd4380
                    int32_t eax_205
                    eax_205.b = *edi_16
                    int32_t eax_206 = eax_205 + *(((eax_203 + *(((eax_201
                        + *(((ebx_373 - eax_201) << 2) + data_1cd43c8) - eax_203) << 2)
                        + data_1cd4384)) << 2) + edx_11)
                    
                    if (eax_206 s> 0xff)
                        eax_206 = 0xff
                    
                    *edi_16 = eax_206.b
                    int32_t ebx_385
                    ebx_385.b = *(esi_13 + 1)
                    int32_t eax_207
                    eax_207.b = not.b(ebx_385.b)
                    int32_t eax_209 = data_1cd4388
                    int32_t eax_211
                    eax_211.b = edi_16[1]
                    int32_t eax_212 = eax_211 + *(((eax_209 + *(((eax_207
                        + *(((ebx_385 - eax_207) << 2) + data_1cd43c8) - eax_209) << 2)
                        + data_1cd438c)) << 2) + edx_11)
                    
                    if (eax_212 s> 0xff)
                        eax_212 = 0xff
                    
                    edi_16[1] = eax_212.b
                    int32_t ebx_397
                    ebx_397.b = *(esi_13 + 2)
                    int32_t eax_213
                    eax_213.b = not.b(ebx_397.b)
                    int32_t eax_215 = data_1cd4390
                    int32_t eax_217
                    eax_217.b = edi_16[2]
                    eax_182 = eax_217 + *(((eax_215 + *(((eax_213
                        + *(((ebx_397 - eax_213) << 2) + data_1cd43c8) - eax_215) << 2)
                        + data_1cd4394)) << 2) + edx_11)
                    
                    if (eax_182 s> 0xff)
                        eax_182 = 0xff
                    
                    edi_16[2] = eax_182.b
            
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
            
            return eax_182
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
    label_5d7147:
        int32_t eax_218
        eax_218.b = *(esi_15 + 3)
        eax_218.b = eax_218.b
        
        if (eax_218.b != 0)
            if (eax_218 == 0xff)
                int32_t ebx_414
                ebx_414.b = *esi_15
                int32_t eax_220
                eax_220.b = not.b(ebx_414.b)
                int32_t eax_222 = data_1cd4380
                int32_t eax_224
                eax_224.b = *edi_19
                int32_t eax_225 = eax_224 + eax_222 + *(((eax_220
                    + *(((ebx_414 - eax_220) << 2) + data_1cd43c8) - eax_222) << 2) + data_1cd4384)
                
                if (eax_225 s> 0xff)
                    eax_225 = 0xff
                
                *edi_19 = eax_225.b
                int32_t ebx_423
                ebx_423.b = *(esi_15 + 1)
                int32_t eax_226
                eax_226.b = not.b(ebx_423.b)
                int32_t eax_228 = data_1cd4388
                int32_t eax_230
                eax_230.b = edi_19[1]
                int32_t eax_231 = eax_230 + eax_228 + *(((eax_226
                    + *(((ebx_423 - eax_226) << 2) + data_1cd43c8) - eax_228) << 2) + data_1cd438c)
                
                if (eax_231 s> 0xff)
                    eax_231 = 0xff
                
                edi_19[1] = eax_231.b
                int32_t ebx_432
                ebx_432.b = *(esi_15 + 2)
                int32_t eax_232
                eax_232.b = not.b(ebx_432.b)
                int32_t eax_234 = data_1cd4390
                int32_t eax_236
                eax_236.b = edi_19[2]
                eax_218 = eax_236 + eax_234 + *(((eax_232
                    + *(((ebx_432 - eax_232) << 2) + data_1cd43c8) - eax_234) << 2) + data_1cd4394)
                
                if (eax_218 s> 0xff)
                    eax_218 = 0xff
                
                edi_19[2] = eax_218.b
            else
                int32_t edx_14 = *((eax_218 << 2) + data_1cd4328)
                int32_t ebx_441
                ebx_441.b = *esi_15
                int32_t eax_237
                eax_237.b = not.b(ebx_441.b)
                int32_t eax_239 = data_1cd4380
                int32_t eax_241
                eax_241.b = *edi_19
                int32_t eax_242 = eax_241 + *(((eax_239 + *(((eax_237
                    + *(((ebx_441 - eax_237) << 2) + data_1cd43c8) - eax_239) << 2) + data_1cd4384))
                    << 2) + edx_14)
                
                if (eax_242 s> 0xff)
                    eax_242 = 0xff
                
                *edi_19 = eax_242.b
                int32_t ebx_453
                ebx_453.b = *(esi_15 + 1)
                int32_t eax_243
                eax_243.b = not.b(ebx_453.b)
                int32_t eax_245 = data_1cd4388
                int32_t eax_247
                eax_247.b = edi_19[1]
                int32_t eax_248 = eax_247 + *(((eax_245 + *(((eax_243
                    + *(((ebx_453 - eax_243) << 2) + data_1cd43c8) - eax_245) << 2) + data_1cd438c))
                    << 2) + edx_14)
                
                if (eax_248 s> 0xff)
                    eax_248 = 0xff
                
                edi_19[1] = eax_248.b
                int32_t ebx_465
                ebx_465.b = *(esi_15 + 2)
                int32_t eax_249
                eax_249.b = not.b(ebx_465.b)
                int32_t eax_251 = data_1cd4390
                int32_t eax_253
                eax_253.b = edi_19[2]
                eax_218 = eax_253 + *(((eax_251 + *(((eax_249
                    + *(((ebx_465 - eax_249) << 2) + data_1cd43c8) - eax_251) << 2) + data_1cd4394))
                    << 2) + edx_14)
                
                if (eax_218 s> 0xff)
                    eax_218 = 0xff
                
                edi_19[2] = eax_218.b
        
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
                    goto label_5d7339
                
                goto label_5d7147
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5d7339:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_218
                
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
    label_5d738e:
        int32_t eax_254
        eax_254.b = *(esi_18 + 3)
        eax_254.b = eax_254.b
        
        if (eax_254.b != 0)
            if (eax_254 == 0xff)
                int32_t ebx_482
                ebx_482.b = *esi_18
                int32_t eax_256
                eax_256.b = not.b(ebx_482.b)
                int32_t eax_258 = data_1cd4380
                int32_t eax_260
                eax_260.b = *edi_22
                int32_t eax_261 = eax_260 + eax_258 + *(((eax_256
                    + *(((ebx_482 - eax_256) << 2) + data_1cd43c8) - eax_258) << 2) + data_1cd4384)
                
                if (eax_261 s> 0xff)
                    eax_261 = 0xff
                
                *edi_22 = eax_261.b
                int32_t ebx_491
                ebx_491.b = *(esi_18 + 1)
                int32_t eax_262
                eax_262.b = not.b(ebx_491.b)
                int32_t eax_264 = data_1cd4388
                int32_t eax_266
                eax_266.b = edi_22[1]
                int32_t eax_267 = eax_266 + eax_264 + *(((eax_262
                    + *(((ebx_491 - eax_262) << 2) + data_1cd43c8) - eax_264) << 2) + data_1cd438c)
                
                if (eax_267 s> 0xff)
                    eax_267 = 0xff
                
                edi_22[1] = eax_267.b
                int32_t ebx_500
                ebx_500.b = *(esi_18 + 2)
                int32_t eax_268
                eax_268.b = not.b(ebx_500.b)
                int32_t eax_270 = data_1cd4390
                int32_t eax_272
                eax_272.b = edi_22[2]
                eax_254 = eax_272 + eax_270 + *(((eax_268
                    + *(((ebx_500 - eax_268) << 2) + data_1cd43c8) - eax_270) << 2) + data_1cd4394)
                
                if (eax_254 s> 0xff)
                    eax_254 = 0xff
                
                edi_22[2] = eax_254.b
            else
                int32_t edx_17 = *((eax_254 << 2) + data_1cd4328)
                int32_t ebx_509
                ebx_509.b = *esi_18
                int32_t eax_273
                eax_273.b = not.b(ebx_509.b)
                int32_t eax_275 = data_1cd4380
                int32_t eax_277
                eax_277.b = *edi_22
                int32_t eax_278 = eax_277 + *(((eax_275 + *(((eax_273
                    + *(((ebx_509 - eax_273) << 2) + data_1cd43c8) - eax_275) << 2) + data_1cd4384))
                    << 2) + edx_17)
                
                if (eax_278 s> 0xff)
                    eax_278 = 0xff
                
                *edi_22 = eax_278.b
                int32_t ebx_521
                ebx_521.b = *(esi_18 + 1)
                int32_t eax_279
                eax_279.b = not.b(ebx_521.b)
                int32_t eax_281 = data_1cd4388
                int32_t eax_283
                eax_283.b = edi_22[1]
                int32_t eax_284 = eax_283 + *(((eax_281 + *(((eax_279
                    + *(((ebx_521 - eax_279) << 2) + data_1cd43c8) - eax_281) << 2) + data_1cd438c))
                    << 2) + edx_17)
                
                if (eax_284 s> 0xff)
                    eax_284 = 0xff
                
                edi_22[1] = eax_284.b
                int32_t ebx_533
                ebx_533.b = *(esi_18 + 2)
                int32_t eax_285
                eax_285.b = not.b(ebx_533.b)
                int32_t eax_287 = data_1cd4390
                int32_t eax_289
                eax_289.b = edi_22[2]
                eax_254 = eax_289 + *(((eax_287 + *(((eax_285
                    + *(((ebx_533 - eax_285) << 2) + data_1cd43c8) - eax_287) << 2) + data_1cd4394))
                    << 2) + edx_17)
                
                if (eax_254 s> 0xff)
                    eax_254 = 0xff
                
                edi_22[2] = eax_254.b
        
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
                    goto label_5d757f
                
                goto label_5d738e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5d757f:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_478 += data_1cd43f4
                
                if (ebx_478 s>= data_1cd43ec)
                    ebx_478 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_254
                
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
    label_5d75de:
        int32_t eax_290
        eax_290.b = *(esi_20 + 3)
        eax_290.b = eax_290.b
        
        if (eax_290.b != 0)
            if (eax_290 == 0xff)
                int32_t ebx_551
                ebx_551.b = *esi_20
                int32_t eax_292
                eax_292.b = not.b(ebx_551.b)
                int32_t eax_294 = data_1cd4380
                int32_t eax_296
                eax_296.b = *edi_25
                int32_t eax_297 = eax_296 + eax_294 + *(((eax_292
                    + *(((ebx_551 - eax_292) << 2) + data_1cd43c8) - eax_294) << 2) + data_1cd4384)
                
                if (eax_297 s> 0xff)
                    eax_297 = 0xff
                
                *edi_25 = eax_297.b
                int32_t ebx_560
                ebx_560.b = *(esi_20 + 1)
                int32_t eax_298
                eax_298.b = not.b(ebx_560.b)
                int32_t eax_300 = data_1cd4388
                int32_t eax_302
                eax_302.b = edi_25[1]
                int32_t eax_303 = eax_302 + eax_300 + *(((eax_298
                    + *(((ebx_560 - eax_298) << 2) + data_1cd43c8) - eax_300) << 2) + data_1cd438c)
                
                if (eax_303 s> 0xff)
                    eax_303 = 0xff
                
                edi_25[1] = eax_303.b
                int32_t ebx_569
                ebx_569.b = *(esi_20 + 2)
                int32_t eax_304
                eax_304.b = not.b(ebx_569.b)
                int32_t eax_306 = data_1cd4390
                int32_t eax_308
                eax_308.b = edi_25[2]
                eax_290 = eax_308 + eax_306 + *(((eax_304
                    + *(((ebx_569 - eax_304) << 2) + data_1cd43c8) - eax_306) << 2) + data_1cd4394)
                
                if (eax_290 s> 0xff)
                    eax_290 = 0xff
                
                edi_25[2] = eax_290.b
            else
                int32_t edx_20 = *((eax_290 << 2) + data_1cd4328)
                int32_t ebx_578
                ebx_578.b = *esi_20
                int32_t eax_309
                eax_309.b = not.b(ebx_578.b)
                int32_t eax_311 = data_1cd4380
                int32_t eax_313
                eax_313.b = *edi_25
                int32_t eax_314 = eax_313 + *(((eax_311 + *(((eax_309
                    + *(((ebx_578 - eax_309) << 2) + data_1cd43c8) - eax_311) << 2) + data_1cd4384))
                    << 2) + edx_20)
                
                if (eax_314 s> 0xff)
                    eax_314 = 0xff
                
                *edi_25 = eax_314.b
                int32_t ebx_590
                ebx_590.b = *(esi_20 + 1)
                int32_t eax_315
                eax_315.b = not.b(ebx_590.b)
                int32_t eax_317 = data_1cd4388
                int32_t eax_319
                eax_319.b = edi_25[1]
                int32_t eax_320 = eax_319 + *(((eax_317 + *(((eax_315
                    + *(((ebx_590 - eax_315) << 2) + data_1cd43c8) - eax_317) << 2) + data_1cd438c))
                    << 2) + edx_20)
                
                if (eax_320 s> 0xff)
                    eax_320 = 0xff
                
                edi_25[1] = eax_320.b
                int32_t ebx_602
                ebx_602.b = *(esi_20 + 2)
                int32_t eax_321
                eax_321.b = not.b(ebx_602.b)
                int32_t eax_323 = data_1cd4390
                int32_t eax_325
                eax_325.b = edi_25[2]
                eax_290 = eax_325 + *(((eax_323 + *(((eax_321
                    + *(((ebx_602 - eax_321) << 2) + data_1cd43c8) - eax_323) << 2) + data_1cd4394))
                    << 2) + edx_20)
                
                if (eax_290 s> 0xff)
                    eax_290 = 0xff
                
                edi_25[2] = eax_290.b
        
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
                    goto label_5d77cd
                
                goto label_5d75de
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5d77cd:
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
                    
                    return eax_290
                
                break

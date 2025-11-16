// 函数: sub_5eb630
// 地址: 0x5eb630
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
                        int32_t eax_5 = eax_4 + *(((ebx_4 - eax_4) << 2) + data_1cd43c8)
                        int32_t ebx_9 = eax_5 + data_1cd4398
                        
                        if (eax_5 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_9 << 2) + data_1c45564)
                        int32_t ebx_12
                        ebx_12.b = *edi_1
                        int32_t eax_7 = data_1cd4380
                        *edi_1 = eax_7.b + (*(((ebx_12 - eax_7) << 2) + data_1cd4384)).b
                        int32_t ebx_16
                        ebx_16.b = esi_1[1]
                        int32_t eax_9
                        eax_9.b = not.b(ebx_16.b)
                        int32_t eax_10 = eax_9 + *(((ebx_16 - eax_9) << 2) + data_1cd43c8)
                        int32_t ebx_21 = eax_10 + data_1cd439c
                        
                        if (eax_10 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_21 << 2) + data_1c45564)
                        int32_t ebx_24
                        ebx_24.b = edi_1[1]
                        int32_t eax_12 = data_1cd4388
                        edi_1[1] = eax_12.b + (*(((ebx_24 - eax_12) << 2) + data_1cd438c)).b
                        int32_t ebx_28
                        ebx_28.b = esi_1[2]
                        int32_t eax_14
                        eax_14.b = not.b(ebx_28.b)
                        int32_t eax_15 = eax_14 + *(((ebx_28 - eax_14) << 2) + data_1cd43c8)
                        int32_t ebx_33 = eax_15 + data_1cd43a0
                        
                        if (eax_15 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_33 << 2) + data_1c45564)
                        int32_t ebx_36
                        ebx_36.b = edi_1[2]
                        int32_t eax_17 = data_1cd4390
                        eax_2 = eax_17 + *(((ebx_36 - eax_17) << 2) + data_1cd4394)
                        edi_1[2] = eax_2.b
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_40
                        ebx_40.b = *esi_1
                        int32_t eax_18
                        eax_18.b = not.b(ebx_40.b)
                        int32_t eax_19 = eax_18 + *(((ebx_40 - eax_18) << 2) + data_1cd43c8)
                        int32_t ebx_45 = eax_19 + data_1cd4398
                        
                        if (eax_19 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_45 << 2) + data_1c45564)
                        int32_t ebx_48
                        ebx_48.b = *edi_1
                        int32_t eax_21 = data_1cd4380
                        int32_t eax_23
                        eax_23.b = *edi_1
                        *edi_1 = eax_23.b + (*(((eax_21 + *(((ebx_48 - eax_21) << 2) + data_1cd4384)
                            - eax_23) << 2) + edx_1)).b
                        int32_t ebx_56
                        ebx_56.b = esi_1[1]
                        int32_t eax_25
                        eax_25.b = not.b(ebx_56.b)
                        int32_t eax_26 = eax_25 + *(((ebx_56 - eax_25) << 2) + data_1cd43c8)
                        int32_t ebx_61 = eax_26 + data_1cd439c
                        
                        if (eax_26 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_61 << 2) + data_1c45564)
                        int32_t ebx_64
                        ebx_64.b = edi_1[1]
                        int32_t eax_28 = data_1cd4388
                        int32_t eax_30
                        eax_30.b = edi_1[1]
                        edi_1[1] = eax_30.b + (*(((eax_28
                            + *(((ebx_64 - eax_28) << 2) + data_1cd438c) - eax_30) << 2) + edx_1)).b
                        int32_t ebx_72
                        ebx_72.b = esi_1[2]
                        int32_t eax_32
                        eax_32.b = not.b(ebx_72.b)
                        int32_t eax_33 = eax_32 + *(((ebx_72 - eax_32) << 2) + data_1cd43c8)
                        int32_t ebx_77 = eax_33 + data_1cd43a0
                        
                        if (eax_33 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_77 << 2) + data_1c45564)
                        int32_t ebx_80
                        ebx_80.b = edi_1[2]
                        int32_t eax_35 = data_1cd4390
                        int32_t eax_37
                        eax_37.b = edi_1[2]
                        eax_2 = eax_37 + *(((eax_35 + *(((ebx_80 - eax_35) << 2) + data_1cd4394)
                            - eax_37) << 2) + edx_1)
                        edi_1[2] = eax_2.b
                
                esi_1 = &esi_1[4]
                edi_1 = &edi_1[4]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp9_1 = ecx_2
            ecx_2 -= 1
            
            if (temp9_1 == 1)
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
        int32_t ebx_89 = data_1cd4414
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
                        int32_t ebx_93
                        ebx_93.b = *esi_4
                        int32_t eax_40
                        eax_40.b = not.b(ebx_93.b)
                        int32_t eax_41 = eax_40 + *(((ebx_93 - eax_40) << 2) + data_1cd43c8)
                        int32_t ebx_98 = eax_41 + data_1cd4398
                        
                        if (eax_41 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_98 << 2) + data_1c45564)
                        int32_t ebx_101
                        ebx_101.b = *edi_4
                        int32_t eax_43 = data_1cd4380
                        *edi_4 = eax_43.b + (*(((ebx_101 - eax_43) << 2) + data_1cd4384)).b
                        int32_t ebx_105
                        ebx_105.b = *(esi_4 + 1)
                        int32_t eax_45
                        eax_45.b = not.b(ebx_105.b)
                        int32_t eax_46 = eax_45 + *(((ebx_105 - eax_45) << 2) + data_1cd43c8)
                        int32_t ebx_110 = eax_46 + data_1cd439c
                        
                        if (eax_46 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_110 << 2) + data_1c45564)
                        int32_t ebx_113
                        ebx_113.b = edi_4[1]
                        int32_t eax_48 = data_1cd4388
                        edi_4[1] = eax_48.b + (*(((ebx_113 - eax_48) << 2) + data_1cd438c)).b
                        int32_t ebx_117
                        ebx_117.b = *(esi_4 + 2)
                        int32_t eax_50
                        eax_50.b = not.b(ebx_117.b)
                        int32_t eax_51 = eax_50 + *(((ebx_117 - eax_50) << 2) + data_1cd43c8)
                        int32_t ebx_122 = eax_51 + data_1cd43a0
                        
                        if (eax_51 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_122 << 2) + data_1c45564)
                        int32_t ebx_125
                        ebx_125.b = edi_4[2]
                        int32_t eax_53 = data_1cd4390
                        eax_38 = eax_53 + *(((ebx_125 - eax_53) << 2) + data_1cd4394)
                        edi_4[2] = eax_38.b
                    else
                        int32_t edx_2 = *((eax_38 << 2) + data_1cd4328)
                        int32_t ebx_129
                        ebx_129.b = *esi_4
                        int32_t eax_54
                        eax_54.b = not.b(ebx_129.b)
                        int32_t eax_55 = eax_54 + *(((ebx_129 - eax_54) << 2) + data_1cd43c8)
                        int32_t ebx_134 = eax_55 + data_1cd4398
                        
                        if (eax_55 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_134 << 2) + data_1c45564)
                        int32_t ebx_137
                        ebx_137.b = *edi_4
                        int32_t eax_57 = data_1cd4380
                        int32_t eax_59
                        eax_59.b = *edi_4
                        *edi_4 = eax_59.b + (*(((eax_57
                            + *(((ebx_137 - eax_57) << 2) + data_1cd4384) - eax_59) << 2) + edx_2)).b
                        int32_t ebx_145
                        ebx_145.b = *(esi_4 + 1)
                        int32_t eax_61
                        eax_61.b = not.b(ebx_145.b)
                        int32_t eax_62 = eax_61 + *(((ebx_145 - eax_61) << 2) + data_1cd43c8)
                        int32_t ebx_150 = eax_62 + data_1cd439c
                        
                        if (eax_62 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_150 << 2) + data_1c45564)
                        int32_t ebx_153
                        ebx_153.b = edi_4[1]
                        int32_t eax_64 = data_1cd4388
                        int32_t eax_66
                        eax_66.b = edi_4[1]
                        edi_4[1] = eax_66.b + (*(((eax_64
                            + *(((ebx_153 - eax_64) << 2) + data_1cd438c) - eax_66) << 2) + edx_2)).b
                        int32_t ebx_161
                        ebx_161.b = *(esi_4 + 2)
                        int32_t eax_68
                        eax_68.b = not.b(ebx_161.b)
                        int32_t eax_69 = eax_68 + *(((ebx_161 - eax_68) << 2) + data_1cd43c8)
                        int32_t ebx_166 = eax_69 + data_1cd43a0
                        
                        if (eax_69 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_166 << 2) + data_1c45564)
                        int32_t ebx_169
                        ebx_169.b = edi_4[2]
                        int32_t eax_71 = data_1cd4390
                        int32_t eax_73
                        eax_73.b = edi_4[2]
                        eax_38 = eax_73 + *(((eax_71 + *(((ebx_169 - eax_71) << 2) + data_1cd4394)
                            - eax_73) << 2) + edx_2)
                        edi_4[2] = eax_38.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_89 += data_1cd43f4
            
            if (ebx_89 s>= data_1cd43ec)
                ebx_89 -= data_1cd43ec
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
    int32_t ebx_179 = data_1cd4414
    
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
                    int32_t ebx_183
                    ebx_183.b = *esi_6
                    int32_t eax_76
                    eax_76.b = not.b(ebx_183.b)
                    int32_t eax_77 = eax_76 + *(((ebx_183 - eax_76) << 2) + data_1cd43c8)
                    int32_t ebx_188 = eax_77 + data_1cd4398
                    
                    if (eax_77 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_188 << 2) + data_1c45564)
                    int32_t ebx_191
                    ebx_191.b = *edi_7
                    int32_t eax_79 = data_1cd4380
                    *edi_7 = eax_79.b + (*(((ebx_191 - eax_79) << 2) + data_1cd4384)).b
                    int32_t ebx_195
                    ebx_195.b = *(esi_6 + 1)
                    int32_t eax_81
                    eax_81.b = not.b(ebx_195.b)
                    int32_t eax_82 = eax_81 + *(((ebx_195 - eax_81) << 2) + data_1cd43c8)
                    int32_t ebx_200 = eax_82 + data_1cd439c
                    
                    if (eax_82 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_200 << 2) + data_1c45564)
                    int32_t ebx_203
                    ebx_203.b = edi_7[1]
                    int32_t eax_84 = data_1cd4388
                    edi_7[1] = eax_84.b + (*(((ebx_203 - eax_84) << 2) + data_1cd438c)).b
                    int32_t ebx_207
                    ebx_207.b = *(esi_6 + 2)
                    int32_t eax_86
                    eax_86.b = not.b(ebx_207.b)
                    int32_t eax_87 = eax_86 + *(((ebx_207 - eax_86) << 2) + data_1cd43c8)
                    int32_t ebx_212 = eax_87 + data_1cd43a0
                    
                    if (eax_87 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_212 << 2) + data_1c45564)
                    int32_t ebx_215
                    ebx_215.b = edi_7[2]
                    int32_t eax_89 = data_1cd4390
                    eax_74 = eax_89 + *(((ebx_215 - eax_89) << 2) + data_1cd4394)
                    edi_7[2] = eax_74.b
                else
                    int32_t edx_3 = *((eax_74 << 2) + data_1cd4328)
                    int32_t ebx_219
                    ebx_219.b = *esi_6
                    int32_t eax_90
                    eax_90.b = not.b(ebx_219.b)
                    int32_t eax_91 = eax_90 + *(((ebx_219 - eax_90) << 2) + data_1cd43c8)
                    int32_t ebx_224 = eax_91 + data_1cd4398
                    
                    if (eax_91 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_224 << 2) + data_1c45564)
                    int32_t ebx_227
                    ebx_227.b = *edi_7
                    int32_t eax_93 = data_1cd4380
                    int32_t eax_95
                    eax_95.b = *edi_7
                    *edi_7 = eax_95.b + (*(((eax_93 + *(((ebx_227 - eax_93) << 2) + data_1cd4384)
                        - eax_95) << 2) + edx_3)).b
                    int32_t ebx_235
                    ebx_235.b = *(esi_6 + 1)
                    int32_t eax_97
                    eax_97.b = not.b(ebx_235.b)
                    int32_t eax_98 = eax_97 + *(((ebx_235 - eax_97) << 2) + data_1cd43c8)
                    int32_t ebx_240 = eax_98 + data_1cd439c
                    
                    if (eax_98 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_240 << 2) + data_1c45564)
                    int32_t ebx_243
                    ebx_243.b = edi_7[1]
                    int32_t eax_100 = data_1cd4388
                    int32_t eax_102
                    eax_102.b = edi_7[1]
                    edi_7[1] = eax_102.b + (*(((eax_100
                        + *(((ebx_243 - eax_100) << 2) + data_1cd438c) - eax_102) << 2) + edx_3)).b
                    int32_t ebx_251
                    ebx_251.b = *(esi_6 + 2)
                    int32_t eax_104
                    eax_104.b = not.b(ebx_251.b)
                    int32_t eax_105 = eax_104 + *(((ebx_251 - eax_104) << 2) + data_1cd43c8)
                    int32_t ebx_256 = eax_105 + data_1cd43a0
                    
                    if (eax_105 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_256 << 2) + data_1c45564)
                    int32_t ebx_259
                    ebx_259.b = edi_7[2]
                    int32_t eax_107 = data_1cd4390
                    int32_t eax_109
                    eax_109.b = edi_7[2]
                    eax_74 = eax_109 + *(((eax_107 + *(((ebx_259 - eax_107) << 2) + data_1cd4394)
                        - eax_109) << 2) + edx_3)
                    edi_7[2] = eax_74.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_267 = ebx_179
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_267 += data_1cd43ec
            
            if (ebx_267 s< data_1cd43f4)
                int32_t temp94_1 = ecx_6
                ecx_6 -= 1
                
                if (temp94_1 != 1)
                    continue
            else
                ebx_179 = ebx_267 - data_1cd43f4
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
                        int32_t ebx_272
                        ebx_272.b = *esi_8
                        int32_t eax_112
                        eax_112.b = not.b(ebx_272.b)
                        int32_t eax_113 = eax_112 + *(((ebx_272 - eax_112) << 2) + data_1cd43c8)
                        int32_t ebx_277 = eax_113 + data_1cd4398
                        
                        if (eax_113 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_277 << 2) + data_1c45564)
                        int32_t ebx_280
                        ebx_280.b = *edi_10
                        int32_t eax_115 = data_1cd4380
                        *edi_10 = eax_115.b + (*(((ebx_280 - eax_115) << 2) + data_1cd4384)).b
                        int32_t ebx_284
                        ebx_284.b = *(esi_8 + 1)
                        int32_t eax_117
                        eax_117.b = not.b(ebx_284.b)
                        int32_t eax_118 = eax_117 + *(((ebx_284 - eax_117) << 2) + data_1cd43c8)
                        int32_t ebx_289 = eax_118 + data_1cd439c
                        
                        if (eax_118 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_289 << 2) + data_1c45564)
                        int32_t ebx_292
                        ebx_292.b = edi_10[1]
                        int32_t eax_120 = data_1cd4388
                        edi_10[1] = eax_120.b + (*(((ebx_292 - eax_120) << 2) + data_1cd438c)).b
                        int32_t ebx_296
                        ebx_296.b = *(esi_8 + 2)
                        int32_t eax_122
                        eax_122.b = not.b(ebx_296.b)
                        int32_t eax_123 = eax_122 + *(((ebx_296 - eax_122) << 2) + data_1cd43c8)
                        int32_t ebx_301 = eax_123 + data_1cd43a0
                        
                        if (eax_123 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_301 << 2) + data_1c45564)
                        int32_t ebx_304
                        ebx_304.b = edi_10[2]
                        int32_t eax_125 = data_1cd4390
                        eax_110 = eax_125 + *(((ebx_304 - eax_125) << 2) + data_1cd4394)
                        edi_10[2] = eax_110.b
                    else
                        int32_t edx_5 = *((eax_110 << 2) + data_1cd4328)
                        int32_t ebx_308
                        ebx_308.b = *esi_8
                        int32_t eax_126
                        eax_126.b = not.b(ebx_308.b)
                        int32_t eax_127 = eax_126 + *(((ebx_308 - eax_126) << 2) + data_1cd43c8)
                        int32_t ebx_313 = eax_127 + data_1cd4398
                        
                        if (eax_127 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_313 << 2) + data_1c45564)
                        int32_t ebx_316
                        ebx_316.b = *edi_10
                        int32_t eax_129 = data_1cd4380
                        int32_t eax_131
                        eax_131.b = *edi_10
                        *edi_10 = eax_131.b + (*(((eax_129
                            + *(((ebx_316 - eax_129) << 2) + data_1cd4384) - eax_131) << 2) + edx_5)).b
                        int32_t ebx_324
                        ebx_324.b = *(esi_8 + 1)
                        int32_t eax_133
                        eax_133.b = not.b(ebx_324.b)
                        int32_t eax_134 = eax_133 + *(((ebx_324 - eax_133) << 2) + data_1cd43c8)
                        int32_t ebx_329 = eax_134 + data_1cd439c
                        
                        if (eax_134 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_329 << 2) + data_1c45564)
                        int32_t ebx_332
                        ebx_332.b = edi_10[1]
                        int32_t eax_136 = data_1cd4388
                        int32_t eax_138
                        eax_138.b = edi_10[1]
                        edi_10[1] = eax_138.b + (*(((eax_136
                            + *(((ebx_332 - eax_136) << 2) + data_1cd438c) - eax_138) << 2) + edx_5)).b
                        int32_t ebx_340
                        ebx_340.b = *(esi_8 + 2)
                        int32_t eax_140
                        eax_140.b = not.b(ebx_340.b)
                        int32_t eax_141 = eax_140 + *(((ebx_340 - eax_140) << 2) + data_1cd43c8)
                        int32_t ebx_345 = eax_141 + data_1cd43a0
                        
                        if (eax_141 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_345 << 2) + data_1c45564)
                        int32_t ebx_348
                        ebx_348.b = edi_10[2]
                        int32_t eax_143 = data_1cd4390
                        int32_t eax_145
                        eax_145.b = edi_10[2]
                        eax_110 = eax_145 + *(((eax_143
                            + *(((ebx_348 - eax_143) << 2) + data_1cd4394) - eax_145) << 2) + edx_5)
                        edi_10[2] = eax_110.b
                
                edi_10 = &edi_10[4]
                edx_4 += data_1cd43f8
                
                if (edx_4 s>= data_1cd43f0)
                    edx_4 -= data_1cd43f0
                    esi_8 += 4
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp38_1 = ecx_7
            ecx_7 -= 1
            
            if (temp38_1 == 1)
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
        int32_t ebx_357 = data_1cd4414
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
                        int32_t ebx_361
                        ebx_361.b = *esi_11
                        int32_t eax_148
                        eax_148.b = not.b(ebx_361.b)
                        int32_t eax_149 = eax_148 + *(((ebx_361 - eax_148) << 2) + data_1cd43c8)
                        int32_t ebx_366 = eax_149 + data_1cd4398
                        
                        if (eax_149 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_366 << 2) + data_1c45564)
                        int32_t ebx_369
                        ebx_369.b = *edi_13
                        int32_t eax_151 = data_1cd4380
                        *edi_13 = eax_151.b + (*(((ebx_369 - eax_151) << 2) + data_1cd4384)).b
                        int32_t ebx_373
                        ebx_373.b = *(esi_11 + 1)
                        int32_t eax_153
                        eax_153.b = not.b(ebx_373.b)
                        int32_t eax_154 = eax_153 + *(((ebx_373 - eax_153) << 2) + data_1cd43c8)
                        int32_t ebx_378 = eax_154 + data_1cd439c
                        
                        if (eax_154 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_378 << 2) + data_1c45564)
                        int32_t ebx_381
                        ebx_381.b = edi_13[1]
                        int32_t eax_156 = data_1cd4388
                        edi_13[1] = eax_156.b + (*(((ebx_381 - eax_156) << 2) + data_1cd438c)).b
                        int32_t ebx_385
                        ebx_385.b = *(esi_11 + 2)
                        int32_t eax_158
                        eax_158.b = not.b(ebx_385.b)
                        int32_t eax_159 = eax_158 + *(((ebx_385 - eax_158) << 2) + data_1cd43c8)
                        int32_t ebx_390 = eax_159 + data_1cd43a0
                        
                        if (eax_159 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_390 << 2) + data_1c45564)
                        int32_t ebx_393
                        ebx_393.b = edi_13[2]
                        int32_t eax_161 = data_1cd4390
                        eax_146 = eax_161 + *(((ebx_393 - eax_161) << 2) + data_1cd4394)
                        edi_13[2] = eax_146.b
                    else
                        int32_t edx_8 = *((eax_146 << 2) + data_1cd4328)
                        int32_t ebx_397
                        ebx_397.b = *esi_11
                        int32_t eax_162
                        eax_162.b = not.b(ebx_397.b)
                        int32_t eax_163 = eax_162 + *(((ebx_397 - eax_162) << 2) + data_1cd43c8)
                        int32_t ebx_402 = eax_163 + data_1cd4398
                        
                        if (eax_163 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_402 << 2) + data_1c45564)
                        int32_t ebx_405
                        ebx_405.b = *edi_13
                        int32_t eax_165 = data_1cd4380
                        int32_t eax_167
                        eax_167.b = *edi_13
                        *edi_13 = eax_167.b + (*(((eax_165
                            + *(((ebx_405 - eax_165) << 2) + data_1cd4384) - eax_167) << 2) + edx_8)).b
                        int32_t ebx_413
                        ebx_413.b = *(esi_11 + 1)
                        int32_t eax_169
                        eax_169.b = not.b(ebx_413.b)
                        int32_t eax_170 = eax_169 + *(((ebx_413 - eax_169) << 2) + data_1cd43c8)
                        int32_t ebx_418 = eax_170 + data_1cd439c
                        
                        if (eax_170 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_418 << 2) + data_1c45564)
                        int32_t ebx_421
                        ebx_421.b = edi_13[1]
                        int32_t eax_172 = data_1cd4388
                        int32_t eax_174
                        eax_174.b = edi_13[1]
                        edi_13[1] = eax_174.b + (*(((eax_172
                            + *(((ebx_421 - eax_172) << 2) + data_1cd438c) - eax_174) << 2) + edx_8)).b
                        int32_t ebx_429
                        ebx_429.b = *(esi_11 + 2)
                        int32_t eax_176
                        eax_176.b = not.b(ebx_429.b)
                        int32_t eax_177 = eax_176 + *(((ebx_429 - eax_176) << 2) + data_1cd43c8)
                        int32_t ebx_434 = eax_177 + data_1cd43a0
                        
                        if (eax_177 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_434 << 2) + data_1c45564)
                        int32_t ebx_437
                        ebx_437.b = edi_13[2]
                        int32_t eax_179 = data_1cd4390
                        int32_t eax_181
                        eax_181.b = edi_13[2]
                        eax_146 = eax_181 + *(((eax_179
                            + *(((ebx_437 - eax_179) << 2) + data_1cd4394) - eax_181) << 2) + edx_8)
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
            ebx_357 += data_1cd43f4
            
            if (ebx_357 s>= data_1cd43ec)
                ebx_357 -= data_1cd43ec
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
    int32_t ebx_447 = data_1cd4414
    
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
                    int32_t ebx_451
                    ebx_451.b = *esi_13
                    int32_t eax_184
                    eax_184.b = not.b(ebx_451.b)
                    int32_t eax_185 = eax_184 + *(((ebx_451 - eax_184) << 2) + data_1cd43c8)
                    int32_t ebx_456 = eax_185 + data_1cd4398
                    
                    if (eax_185 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_456 << 2) + data_1c45564)
                    int32_t ebx_459
                    ebx_459.b = *edi_16
                    int32_t eax_187 = data_1cd4380
                    *edi_16 = eax_187.b + (*(((ebx_459 - eax_187) << 2) + data_1cd4384)).b
                    int32_t ebx_463
                    ebx_463.b = *(esi_13 + 1)
                    int32_t eax_189
                    eax_189.b = not.b(ebx_463.b)
                    int32_t eax_190 = eax_189 + *(((ebx_463 - eax_189) << 2) + data_1cd43c8)
                    int32_t ebx_468 = eax_190 + data_1cd439c
                    
                    if (eax_190 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_468 << 2) + data_1c45564)
                    int32_t ebx_471
                    ebx_471.b = edi_16[1]
                    int32_t eax_192 = data_1cd4388
                    edi_16[1] = eax_192.b + (*(((ebx_471 - eax_192) << 2) + data_1cd438c)).b
                    int32_t ebx_475
                    ebx_475.b = *(esi_13 + 2)
                    int32_t eax_194
                    eax_194.b = not.b(ebx_475.b)
                    int32_t eax_195 = eax_194 + *(((ebx_475 - eax_194) << 2) + data_1cd43c8)
                    int32_t ebx_480 = eax_195 + data_1cd43a0
                    
                    if (eax_195 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_480 << 2) + data_1c45564)
                    int32_t ebx_483
                    ebx_483.b = edi_16[2]
                    int32_t eax_197 = data_1cd4390
                    eax_182 = eax_197 + *(((ebx_483 - eax_197) << 2) + data_1cd4394)
                    edi_16[2] = eax_182.b
                else
                    int32_t edx_11 = *((eax_182 << 2) + data_1cd4328)
                    int32_t ebx_487
                    ebx_487.b = *esi_13
                    int32_t eax_198
                    eax_198.b = not.b(ebx_487.b)
                    int32_t eax_199 = eax_198 + *(((ebx_487 - eax_198) << 2) + data_1cd43c8)
                    int32_t ebx_492 = eax_199 + data_1cd4398
                    
                    if (eax_199 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_492 << 2) + data_1c45564)
                    int32_t ebx_495
                    ebx_495.b = *edi_16
                    int32_t eax_201 = data_1cd4380
                    int32_t eax_203
                    eax_203.b = *edi_16
                    *edi_16 = eax_203.b + (*(((eax_201
                        + *(((ebx_495 - eax_201) << 2) + data_1cd4384) - eax_203) << 2) + edx_11)).b
                    int32_t ebx_503
                    ebx_503.b = *(esi_13 + 1)
                    int32_t eax_205
                    eax_205.b = not.b(ebx_503.b)
                    int32_t eax_206 = eax_205 + *(((ebx_503 - eax_205) << 2) + data_1cd43c8)
                    int32_t ebx_508 = eax_206 + data_1cd439c
                    
                    if (eax_206 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_508 << 2) + data_1c45564)
                    int32_t ebx_511
                    ebx_511.b = edi_16[1]
                    int32_t eax_208 = data_1cd4388
                    int32_t eax_210
                    eax_210.b = edi_16[1]
                    edi_16[1] = eax_210.b + (*(((eax_208
                        + *(((ebx_511 - eax_208) << 2) + data_1cd438c) - eax_210) << 2) + edx_11)).b
                    int32_t ebx_519
                    ebx_519.b = *(esi_13 + 2)
                    int32_t eax_212
                    eax_212.b = not.b(ebx_519.b)
                    int32_t eax_213 = eax_212 + *(((ebx_519 - eax_212) << 2) + data_1cd43c8)
                    int32_t ebx_524 = eax_213 + data_1cd43a0
                    
                    if (eax_213 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_524 << 2) + data_1c45564)
                    int32_t ebx_527
                    ebx_527.b = edi_16[2]
                    int32_t eax_215 = data_1cd4390
                    int32_t eax_217
                    eax_217.b = edi_16[2]
                    eax_182 = eax_217 + *(((eax_215 + *(((ebx_527 - eax_215) << 2) + data_1cd4394)
                        - eax_217) << 2) + edx_11)
                    edi_16[2] = eax_182.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_535 = ebx_447
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_535 += data_1cd43ec
            
            if (ebx_535 s< data_1cd43f4)
                int32_t temp122_1 = ecx_11
                ecx_11 -= 1
                
                if (temp122_1 != 1)
                    continue
            else
                ebx_447 = ebx_535 - data_1cd43f4
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
    label_5ead07:
        int32_t eax_218
        eax_218.b = *(esi_15 + 3)
        eax_218.b = eax_218.b
        
        if (eax_218.b != 0)
            if (eax_218 == 0xff)
                int32_t ebx_540
                ebx_540.b = *esi_15
                int32_t eax_220
                eax_220.b = not.b(ebx_540.b)
                int32_t eax_221 = eax_220 + *(((ebx_540 - eax_220) << 2) + data_1cd43c8)
                int32_t ebx_545 = eax_221 + data_1cd4398
                
                if (eax_221 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_545 << 2) + data_1c45564)
                int32_t ebx_548
                ebx_548.b = *edi_19
                int32_t eax_223 = data_1cd4380
                *edi_19 = eax_223.b + (*(((ebx_548 - eax_223) << 2) + data_1cd4384)).b
                int32_t ebx_552
                ebx_552.b = *(esi_15 + 1)
                int32_t eax_225
                eax_225.b = not.b(ebx_552.b)
                int32_t eax_226 = eax_225 + *(((ebx_552 - eax_225) << 2) + data_1cd43c8)
                int32_t ebx_557 = eax_226 + data_1cd439c
                
                if (eax_226 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_557 << 2) + data_1c45564)
                int32_t ebx_560
                ebx_560.b = edi_19[1]
                int32_t eax_228 = data_1cd4388
                edi_19[1] = eax_228.b + (*(((ebx_560 - eax_228) << 2) + data_1cd438c)).b
                int32_t ebx_564
                ebx_564.b = *(esi_15 + 2)
                int32_t eax_230
                eax_230.b = not.b(ebx_564.b)
                int32_t eax_231 = eax_230 + *(((ebx_564 - eax_230) << 2) + data_1cd43c8)
                int32_t ebx_569 = eax_231 + data_1cd43a0
                
                if (eax_231 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_569 << 2) + data_1c45564)
                int32_t ebx_572
                ebx_572.b = edi_19[2]
                int32_t eax_233 = data_1cd4390
                eax_218 = eax_233 + *(((ebx_572 - eax_233) << 2) + data_1cd4394)
                edi_19[2] = eax_218.b
            else
                int32_t edx_14 = *((eax_218 << 2) + data_1cd4328)
                int32_t ebx_576
                ebx_576.b = *esi_15
                int32_t eax_234
                eax_234.b = not.b(ebx_576.b)
                int32_t eax_235 = eax_234 + *(((ebx_576 - eax_234) << 2) + data_1cd43c8)
                int32_t ebx_581 = eax_235 + data_1cd4398
                
                if (eax_235 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_581 << 2) + data_1c45564)
                int32_t ebx_584
                ebx_584.b = *edi_19
                int32_t eax_237 = data_1cd4380
                int32_t eax_239
                eax_239.b = *edi_19
                *edi_19 = eax_239.b + (*(((eax_237 + *(((ebx_584 - eax_237) << 2) + data_1cd4384)
                    - eax_239) << 2) + edx_14)).b
                int32_t ebx_592
                ebx_592.b = *(esi_15 + 1)
                int32_t eax_241
                eax_241.b = not.b(ebx_592.b)
                int32_t eax_242 = eax_241 + *(((ebx_592 - eax_241) << 2) + data_1cd43c8)
                int32_t ebx_597 = eax_242 + data_1cd439c
                
                if (eax_242 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_597 << 2) + data_1c45564)
                int32_t ebx_600
                ebx_600.b = edi_19[1]
                int32_t eax_244 = data_1cd4388
                int32_t eax_246
                eax_246.b = edi_19[1]
                edi_19[1] = eax_246.b + (*(((eax_244 + *(((ebx_600 - eax_244) << 2) + data_1cd438c)
                    - eax_246) << 2) + edx_14)).b
                int32_t ebx_608
                ebx_608.b = *(esi_15 + 2)
                int32_t eax_248
                eax_248.b = not.b(ebx_608.b)
                int32_t eax_249 = eax_248 + *(((ebx_608 - eax_248) << 2) + data_1cd43c8)
                int32_t ebx_613 = eax_249 + data_1cd43a0
                
                if (eax_249 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_613 << 2) + data_1c45564)
                int32_t ebx_616
                ebx_616.b = edi_19[2]
                int32_t eax_251 = data_1cd4390
                int32_t eax_253
                eax_253.b = edi_19[2]
                eax_218 = eax_253 + *(((eax_251 + *(((ebx_616 - eax_251) << 2) + data_1cd4394)
                    - eax_253) << 2) + edx_14)
                edi_19[2] = eax_218.b
        
        int32_t edx_15 = edx_13
        
        while (true)
            esi_15 += 4
            edx_15 += data_1cd43f0
            
            if (edx_15 s>= data_1cd43f8)
                edx_13 = edx_15 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp54_1 = ecx_13
                ecx_13 -= 1
                
                if (temp54_1 == 1)
                    goto label_5eafc7
                
                goto label_5ead07
            
            int32_t temp31_1 = ecx_13
            ecx_13 -= 1
            
            if (temp31_1 == 1)
            label_5eafc7:
                int32_t temp53_1 = ecx_12
                ecx_12 -= 1
                
                if (temp53_1 == 1)
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
    int32_t ebx_625 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5eb00e:
        int32_t eax_254
        eax_254.b = *(esi_18 + 3)
        eax_254.b = eax_254.b
        
        if (eax_254.b != 0)
            if (eax_254 == 0xff)
                int32_t ebx_629
                ebx_629.b = *esi_18
                int32_t eax_256
                eax_256.b = not.b(ebx_629.b)
                int32_t eax_257 = eax_256 + *(((ebx_629 - eax_256) << 2) + data_1cd43c8)
                int32_t ebx_634 = eax_257 + data_1cd4398
                
                if (eax_257 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_634 << 2) + data_1c45564)
                int32_t ebx_637
                ebx_637.b = *edi_22
                int32_t eax_259 = data_1cd4380
                *edi_22 = eax_259.b + (*(((ebx_637 - eax_259) << 2) + data_1cd4384)).b
                int32_t ebx_641
                ebx_641.b = *(esi_18 + 1)
                int32_t eax_261
                eax_261.b = not.b(ebx_641.b)
                int32_t eax_262 = eax_261 + *(((ebx_641 - eax_261) << 2) + data_1cd43c8)
                int32_t ebx_646 = eax_262 + data_1cd439c
                
                if (eax_262 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_646 << 2) + data_1c45564)
                int32_t ebx_649
                ebx_649.b = edi_22[1]
                int32_t eax_264 = data_1cd4388
                edi_22[1] = eax_264.b + (*(((ebx_649 - eax_264) << 2) + data_1cd438c)).b
                int32_t ebx_653
                ebx_653.b = *(esi_18 + 2)
                int32_t eax_266
                eax_266.b = not.b(ebx_653.b)
                int32_t eax_267 = eax_266 + *(((ebx_653 - eax_266) << 2) + data_1cd43c8)
                int32_t ebx_658 = eax_267 + data_1cd43a0
                
                if (eax_267 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_658 << 2) + data_1c45564)
                int32_t ebx_661
                ebx_661.b = edi_22[2]
                int32_t eax_269 = data_1cd4390
                eax_254 = eax_269 + *(((ebx_661 - eax_269) << 2) + data_1cd4394)
                edi_22[2] = eax_254.b
            else
                int32_t edx_17 = *((eax_254 << 2) + data_1cd4328)
                int32_t ebx_665
                ebx_665.b = *esi_18
                int32_t eax_270
                eax_270.b = not.b(ebx_665.b)
                int32_t eax_271 = eax_270 + *(((ebx_665 - eax_270) << 2) + data_1cd43c8)
                int32_t ebx_670 = eax_271 + data_1cd4398
                
                if (eax_271 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_670 << 2) + data_1c45564)
                int32_t ebx_673
                ebx_673.b = *edi_22
                int32_t eax_273 = data_1cd4380
                int32_t eax_275
                eax_275.b = *edi_22
                *edi_22 = eax_275.b + (*(((eax_273 + *(((ebx_673 - eax_273) << 2) + data_1cd4384)
                    - eax_275) << 2) + edx_17)).b
                int32_t ebx_681
                ebx_681.b = *(esi_18 + 1)
                int32_t eax_277
                eax_277.b = not.b(ebx_681.b)
                int32_t eax_278 = eax_277 + *(((ebx_681 - eax_277) << 2) + data_1cd43c8)
                int32_t ebx_686 = eax_278 + data_1cd439c
                
                if (eax_278 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_686 << 2) + data_1c45564)
                int32_t ebx_689
                ebx_689.b = edi_22[1]
                int32_t eax_280 = data_1cd4388
                int32_t eax_282
                eax_282.b = edi_22[1]
                edi_22[1] = eax_282.b + (*(((eax_280 + *(((ebx_689 - eax_280) << 2) + data_1cd438c)
                    - eax_282) << 2) + edx_17)).b
                int32_t ebx_697
                ebx_697.b = *(esi_18 + 2)
                int32_t eax_284
                eax_284.b = not.b(ebx_697.b)
                int32_t eax_285 = eax_284 + *(((ebx_697 - eax_284) << 2) + data_1cd43c8)
                int32_t ebx_702 = eax_285 + data_1cd43a0
                
                if (eax_285 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_702 << 2) + data_1c45564)
                int32_t ebx_705
                ebx_705.b = edi_22[2]
                int32_t eax_287 = data_1cd4390
                int32_t eax_289
                eax_289.b = edi_22[2]
                eax_254 = eax_289 + *(((eax_287 + *(((ebx_705 - eax_287) << 2) + data_1cd4394)
                    - eax_289) << 2) + edx_17)
                edi_22[2] = eax_254.b
        
        int32_t edx_18 = edx_16
        
        while (true)
            esi_18 += 4
            edx_18 += data_1cd43f0
            
            if (edx_18 s>= data_1cd43f8)
                edx_16 = edx_18 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp77_1 = ecx_16
                ecx_16 -= 1
                
                if (temp77_1 == 1)
                    goto label_5eb2cd
                
                goto label_5eb00e
            
            int32_t temp57_1 = ecx_16
            ecx_16 -= 1
            
            if (temp57_1 == 1)
            label_5eb2cd:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_625 += data_1cd43f4
                
                if (ebx_625 s>= data_1cd43ec)
                    ebx_625 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp99_1 = ecx_15
                ecx_15 -= 1
                
                if (temp99_1 == 1)
                    return eax_254
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    void* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_715 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5eb32e:
        int32_t eax_290
        eax_290.b = *(esi_20 + 3)
        eax_290.b = eax_290.b
        
        if (eax_290.b != 0)
            if (eax_290 == 0xff)
                int32_t ebx_719
                ebx_719.b = *esi_20
                int32_t eax_292
                eax_292.b = not.b(ebx_719.b)
                int32_t eax_293 = eax_292 + *(((ebx_719 - eax_292) << 2) + data_1cd43c8)
                int32_t ebx_724 = eax_293 + data_1cd4398
                
                if (eax_293 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_724 << 2) + data_1c45564)
                int32_t ebx_727
                ebx_727.b = *edi_25
                int32_t eax_295 = data_1cd4380
                *edi_25 = eax_295.b + (*(((ebx_727 - eax_295) << 2) + data_1cd4384)).b
                int32_t ebx_731
                ebx_731.b = *(esi_20 + 1)
                int32_t eax_297
                eax_297.b = not.b(ebx_731.b)
                int32_t eax_298 = eax_297 + *(((ebx_731 - eax_297) << 2) + data_1cd43c8)
                int32_t ebx_736 = eax_298 + data_1cd439c
                
                if (eax_298 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_736 << 2) + data_1c45564)
                int32_t ebx_739
                ebx_739.b = edi_25[1]
                int32_t eax_300 = data_1cd4388
                edi_25[1] = eax_300.b + (*(((ebx_739 - eax_300) << 2) + data_1cd438c)).b
                int32_t ebx_743
                ebx_743.b = *(esi_20 + 2)
                int32_t eax_302
                eax_302.b = not.b(ebx_743.b)
                int32_t eax_303 = eax_302 + *(((ebx_743 - eax_302) << 2) + data_1cd43c8)
                int32_t ebx_748 = eax_303 + data_1cd43a0
                
                if (eax_303 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_748 << 2) + data_1c45564)
                int32_t ebx_751
                ebx_751.b = edi_25[2]
                int32_t eax_305 = data_1cd4390
                eax_290 = eax_305 + *(((ebx_751 - eax_305) << 2) + data_1cd4394)
                edi_25[2] = eax_290.b
            else
                int32_t edx_20 = *((eax_290 << 2) + data_1cd4328)
                int32_t ebx_755
                ebx_755.b = *esi_20
                int32_t eax_306
                eax_306.b = not.b(ebx_755.b)
                int32_t eax_307 = eax_306 + *(((ebx_755 - eax_306) << 2) + data_1cd43c8)
                int32_t ebx_760 = eax_307 + data_1cd4398
                
                if (eax_307 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_760 << 2) + data_1c45564)
                int32_t ebx_763
                ebx_763.b = *edi_25
                int32_t eax_309 = data_1cd4380
                int32_t eax_311
                eax_311.b = *edi_25
                *edi_25 = eax_311.b + (*(((eax_309 + *(((ebx_763 - eax_309) << 2) + data_1cd4384)
                    - eax_311) << 2) + edx_20)).b
                int32_t ebx_771
                ebx_771.b = *(esi_20 + 1)
                int32_t eax_313
                eax_313.b = not.b(ebx_771.b)
                int32_t eax_314 = eax_313 + *(((ebx_771 - eax_313) << 2) + data_1cd43c8)
                int32_t ebx_776 = eax_314 + data_1cd439c
                
                if (eax_314 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_776 << 2) + data_1c45564)
                int32_t ebx_779
                ebx_779.b = edi_25[1]
                int32_t eax_316 = data_1cd4388
                int32_t eax_318
                eax_318.b = edi_25[1]
                edi_25[1] = eax_318.b + (*(((eax_316 + *(((ebx_779 - eax_316) << 2) + data_1cd438c)
                    - eax_318) << 2) + edx_20)).b
                int32_t ebx_787
                ebx_787.b = *(esi_20 + 2)
                int32_t eax_320
                eax_320.b = not.b(ebx_787.b)
                int32_t eax_321 = eax_320 + *(((ebx_787 - eax_320) << 2) + data_1cd43c8)
                int32_t ebx_792 = eax_321 + data_1cd43a0
                
                if (eax_321 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_792 << 2) + data_1c45564)
                int32_t ebx_795
                ebx_795.b = edi_25[2]
                int32_t eax_323 = data_1cd4390
                int32_t eax_325
                eax_325.b = edi_25[2]
                eax_290 = eax_325 + *(((eax_323 + *(((ebx_795 - eax_323) << 2) + data_1cd4394)
                    - eax_325) << 2) + edx_20)
                edi_25[2] = eax_290.b
        
        int32_t edx_21 = edx_19
        
        while (true)
            esi_20 += 4
            edx_21 += data_1cd43f0
            
            if (edx_21 s>= data_1cd43f8)
                edx_19 = edx_21 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp102_1 = ecx_19
                ecx_19 -= 1
                
                if (temp102_1 == 1)
                    goto label_5eb5eb
                
                goto label_5eb32e
            
            int32_t temp80_1 = ecx_19
            ecx_19 -= 1
            
            if (temp80_1 == 1)
            label_5eb5eb:
                int32_t ebx_803 = ebx_715
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_803 += data_1cd43ec
                    
                    if (ebx_803 s< data_1cd43f4)
                        int32_t temp127_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp127_1 != 1)
                            continue
                    else
                        ebx_715 = ebx_803 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_290
                
                break

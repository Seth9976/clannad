// 函数: sub_5e6d20
// 地址: 0x5e6d20
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
                        int32_t ebx_5 = ebx_4 + data_1cd4398
                        
                        if (ebx_4 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_5 << 2) + data_1c45564)
                        int32_t ebx_8
                        ebx_8.b = *edi_1
                        int32_t eax_5 = data_1cd4380
                        *edi_1 = eax_5.b + (*(((ebx_8 - eax_5) << 2) + data_1cd4384)).b
                        int32_t ebx_12
                        ebx_12.b = esi_1[1]
                        int32_t ebx_13 = ebx_12 + data_1cd439c
                        
                        if (ebx_12 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_13 << 2) + data_1c45564)
                        int32_t ebx_16
                        ebx_16.b = edi_1[1]
                        int32_t eax_8 = data_1cd4388
                        edi_1[1] = eax_8.b + (*(((ebx_16 - eax_8) << 2) + data_1cd438c)).b
                        int32_t ebx_20
                        ebx_20.b = esi_1[2]
                        int32_t ebx_21 = ebx_20 + data_1cd43a0
                        
                        if (ebx_20 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_21 << 2) + data_1c45564)
                        int32_t ebx_24
                        ebx_24.b = edi_1[2]
                        int32_t eax_11 = data_1cd4390
                        eax_2 = eax_11 + *(((ebx_24 - eax_11) << 2) + data_1cd4394)
                        edi_1[2] = eax_2.b
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_28
                        ebx_28.b = *esi_1
                        int32_t ebx_29 = ebx_28 + data_1cd4398
                        
                        if (ebx_28 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_29 << 2) + data_1c45564)
                        int32_t ebx_32
                        ebx_32.b = *edi_1
                        int32_t eax_13 = data_1cd4380
                        int32_t eax_15
                        eax_15.b = *edi_1
                        *edi_1 = eax_15.b + (*(((eax_13 + *(((ebx_32 - eax_13) << 2) + data_1cd4384)
                            - eax_15) << 2) + edx_1)).b
                        int32_t ebx_40
                        ebx_40.b = esi_1[1]
                        int32_t ebx_41 = ebx_40 + data_1cd439c
                        
                        if (ebx_40 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_41 << 2) + data_1c45564)
                        int32_t ebx_44
                        ebx_44.b = edi_1[1]
                        int32_t eax_18 = data_1cd4388
                        int32_t eax_20
                        eax_20.b = edi_1[1]
                        edi_1[1] = eax_20.b + (*(((eax_18
                            + *(((ebx_44 - eax_18) << 2) + data_1cd438c) - eax_20) << 2) + edx_1)).b
                        int32_t ebx_52
                        ebx_52.b = esi_1[2]
                        int32_t ebx_53 = ebx_52 + data_1cd43a0
                        
                        if (ebx_52 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_53 << 2) + data_1c45564)
                        int32_t ebx_56
                        ebx_56.b = edi_1[2]
                        int32_t eax_23 = data_1cd4390
                        int32_t eax_25
                        eax_25.b = edi_1[2]
                        eax_2 = eax_25 + *(((eax_23 + *(((ebx_56 - eax_23) << 2) + data_1cd4394)
                            - eax_25) << 2) + edx_1)
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
        int32_t ebx_65 = data_1cd4414
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
                        int32_t ebx_69
                        ebx_69.b = *esi_4
                        int32_t ebx_70 = ebx_69 + data_1cd4398
                        
                        if (ebx_69 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_70 << 2) + data_1c45564)
                        int32_t ebx_73
                        ebx_73.b = *edi_4
                        int32_t eax_29 = data_1cd4380
                        *edi_4 = eax_29.b + (*(((ebx_73 - eax_29) << 2) + data_1cd4384)).b
                        int32_t ebx_77
                        ebx_77.b = *(esi_4 + 1)
                        int32_t ebx_78 = ebx_77 + data_1cd439c
                        
                        if (ebx_77 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_78 << 2) + data_1c45564)
                        int32_t ebx_81
                        ebx_81.b = edi_4[1]
                        int32_t eax_32 = data_1cd4388
                        edi_4[1] = eax_32.b + (*(((ebx_81 - eax_32) << 2) + data_1cd438c)).b
                        int32_t ebx_85
                        ebx_85.b = *(esi_4 + 2)
                        int32_t ebx_86 = ebx_85 + data_1cd43a0
                        
                        if (ebx_85 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_86 << 2) + data_1c45564)
                        int32_t ebx_89
                        ebx_89.b = edi_4[2]
                        int32_t eax_35 = data_1cd4390
                        eax_26 = eax_35 + *(((ebx_89 - eax_35) << 2) + data_1cd4394)
                        edi_4[2] = eax_26.b
                    else
                        int32_t edx_2 = *((eax_26 << 2) + data_1cd4328)
                        int32_t ebx_93
                        ebx_93.b = *esi_4
                        int32_t ebx_94 = ebx_93 + data_1cd4398
                        
                        if (ebx_93 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_94 << 2) + data_1c45564)
                        int32_t ebx_97
                        ebx_97.b = *edi_4
                        int32_t eax_37 = data_1cd4380
                        int32_t eax_39
                        eax_39.b = *edi_4
                        *edi_4 = eax_39.b + (*(((eax_37 + *(((ebx_97 - eax_37) << 2) + data_1cd4384)
                            - eax_39) << 2) + edx_2)).b
                        int32_t ebx_105
                        ebx_105.b = *(esi_4 + 1)
                        int32_t ebx_106 = ebx_105 + data_1cd439c
                        
                        if (ebx_105 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_106 << 2) + data_1c45564)
                        int32_t ebx_109
                        ebx_109.b = edi_4[1]
                        int32_t eax_42 = data_1cd4388
                        int32_t eax_44
                        eax_44.b = edi_4[1]
                        edi_4[1] = eax_44.b + (*(((eax_42
                            + *(((ebx_109 - eax_42) << 2) + data_1cd438c) - eax_44) << 2) + edx_2)).b
                        int32_t ebx_117
                        ebx_117.b = *(esi_4 + 2)
                        int32_t ebx_118 = ebx_117 + data_1cd43a0
                        
                        if (ebx_117 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_118 << 2) + data_1c45564)
                        int32_t ebx_121
                        ebx_121.b = edi_4[2]
                        int32_t eax_47 = data_1cd4390
                        int32_t eax_49
                        eax_49.b = edi_4[2]
                        eax_26 = eax_49 + *(((eax_47 + *(((ebx_121 - eax_47) << 2) + data_1cd4394)
                            - eax_49) << 2) + edx_2)
                        edi_4[2] = eax_26.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_65 += data_1cd43f4
            
            if (ebx_65 s>= data_1cd43ec)
                ebx_65 -= data_1cd43ec
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
    int32_t ebx_131 = data_1cd4414
    
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
                    int32_t ebx_135
                    ebx_135.b = *esi_6
                    int32_t ebx_136 = ebx_135 + data_1cd4398
                    
                    if (ebx_135 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_136 << 2) + data_1c45564)
                    int32_t ebx_139
                    ebx_139.b = *edi_7
                    int32_t eax_53 = data_1cd4380
                    *edi_7 = eax_53.b + (*(((ebx_139 - eax_53) << 2) + data_1cd4384)).b
                    int32_t ebx_143
                    ebx_143.b = *(esi_6 + 1)
                    int32_t ebx_144 = ebx_143 + data_1cd439c
                    
                    if (ebx_143 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_144 << 2) + data_1c45564)
                    int32_t ebx_147
                    ebx_147.b = edi_7[1]
                    int32_t eax_56 = data_1cd4388
                    edi_7[1] = eax_56.b + (*(((ebx_147 - eax_56) << 2) + data_1cd438c)).b
                    int32_t ebx_151
                    ebx_151.b = *(esi_6 + 2)
                    int32_t ebx_152 = ebx_151 + data_1cd43a0
                    
                    if (ebx_151 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_152 << 2) + data_1c45564)
                    int32_t ebx_155
                    ebx_155.b = edi_7[2]
                    int32_t eax_59 = data_1cd4390
                    eax_50 = eax_59 + *(((ebx_155 - eax_59) << 2) + data_1cd4394)
                    edi_7[2] = eax_50.b
                else
                    int32_t edx_3 = *((eax_50 << 2) + data_1cd4328)
                    int32_t ebx_159
                    ebx_159.b = *esi_6
                    int32_t ebx_160 = ebx_159 + data_1cd4398
                    
                    if (ebx_159 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_160 << 2) + data_1c45564)
                    int32_t ebx_163
                    ebx_163.b = *edi_7
                    int32_t eax_61 = data_1cd4380
                    int32_t eax_63
                    eax_63.b = *edi_7
                    *edi_7 = eax_63.b + (*(((eax_61 + *(((ebx_163 - eax_61) << 2) + data_1cd4384)
                        - eax_63) << 2) + edx_3)).b
                    int32_t ebx_171
                    ebx_171.b = *(esi_6 + 1)
                    int32_t ebx_172 = ebx_171 + data_1cd439c
                    
                    if (ebx_171 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_172 << 2) + data_1c45564)
                    int32_t ebx_175
                    ebx_175.b = edi_7[1]
                    int32_t eax_66 = data_1cd4388
                    int32_t eax_68
                    eax_68.b = edi_7[1]
                    edi_7[1] = eax_68.b + (*(((eax_66 + *(((ebx_175 - eax_66) << 2) + data_1cd438c)
                        - eax_68) << 2) + edx_3)).b
                    int32_t ebx_183
                    ebx_183.b = *(esi_6 + 2)
                    int32_t ebx_184 = ebx_183 + data_1cd43a0
                    
                    if (ebx_183 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_184 << 2) + data_1c45564)
                    int32_t ebx_187
                    ebx_187.b = edi_7[2]
                    int32_t eax_71 = data_1cd4390
                    int32_t eax_73
                    eax_73.b = edi_7[2]
                    eax_50 = eax_73 + *(((eax_71 + *(((ebx_187 - eax_71) << 2) + data_1cd4394)
                        - eax_73) << 2) + edx_3)
                    edi_7[2] = eax_50.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_195 = ebx_131
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_195 += data_1cd43ec
            
            if (ebx_195 s< data_1cd43f4)
                int32_t temp94_1 = ecx_6
                ecx_6 -= 1
                
                if (temp94_1 != 1)
                    continue
            else
                ebx_131 = ebx_195 - data_1cd43f4
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
                        int32_t ebx_200
                        ebx_200.b = *esi_8
                        int32_t ebx_201 = ebx_200 + data_1cd4398
                        
                        if (ebx_200 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_201 << 2) + data_1c45564)
                        int32_t ebx_204
                        ebx_204.b = *edi_10
                        int32_t eax_77 = data_1cd4380
                        *edi_10 = eax_77.b + (*(((ebx_204 - eax_77) << 2) + data_1cd4384)).b
                        int32_t ebx_208
                        ebx_208.b = *(esi_8 + 1)
                        int32_t ebx_209 = ebx_208 + data_1cd439c
                        
                        if (ebx_208 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_209 << 2) + data_1c45564)
                        int32_t ebx_212
                        ebx_212.b = edi_10[1]
                        int32_t eax_80 = data_1cd4388
                        edi_10[1] = eax_80.b + (*(((ebx_212 - eax_80) << 2) + data_1cd438c)).b
                        int32_t ebx_216
                        ebx_216.b = *(esi_8 + 2)
                        int32_t ebx_217 = ebx_216 + data_1cd43a0
                        
                        if (ebx_216 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_217 << 2) + data_1c45564)
                        int32_t ebx_220
                        ebx_220.b = edi_10[2]
                        int32_t eax_83 = data_1cd4390
                        eax_74 = eax_83 + *(((ebx_220 - eax_83) << 2) + data_1cd4394)
                        edi_10[2] = eax_74.b
                    else
                        int32_t edx_5 = *((eax_74 << 2) + data_1cd4328)
                        int32_t ebx_224
                        ebx_224.b = *esi_8
                        int32_t ebx_225 = ebx_224 + data_1cd4398
                        
                        if (ebx_224 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_225 << 2) + data_1c45564)
                        int32_t ebx_228
                        ebx_228.b = *edi_10
                        int32_t eax_85 = data_1cd4380
                        int32_t eax_87
                        eax_87.b = *edi_10
                        *edi_10 = eax_87.b + (*(((eax_85
                            + *(((ebx_228 - eax_85) << 2) + data_1cd4384) - eax_87) << 2) + edx_5)).b
                        int32_t ebx_236
                        ebx_236.b = *(esi_8 + 1)
                        int32_t ebx_237 = ebx_236 + data_1cd439c
                        
                        if (ebx_236 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_237 << 2) + data_1c45564)
                        int32_t ebx_240
                        ebx_240.b = edi_10[1]
                        int32_t eax_90 = data_1cd4388
                        int32_t eax_92
                        eax_92.b = edi_10[1]
                        edi_10[1] = eax_92.b + (*(((eax_90
                            + *(((ebx_240 - eax_90) << 2) + data_1cd438c) - eax_92) << 2) + edx_5)).b
                        int32_t ebx_248
                        ebx_248.b = *(esi_8 + 2)
                        int32_t ebx_249 = ebx_248 + data_1cd43a0
                        
                        if (ebx_248 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_249 << 2) + data_1c45564)
                        int32_t ebx_252
                        ebx_252.b = edi_10[2]
                        int32_t eax_95 = data_1cd4390
                        int32_t eax_97
                        eax_97.b = edi_10[2]
                        eax_74 = eax_97 + *(((eax_95 + *(((ebx_252 - eax_95) << 2) + data_1cd4394)
                            - eax_97) << 2) + edx_5)
                        edi_10[2] = eax_74.b
                
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
        
        return eax_74
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_261 = data_1cd4414
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
                        int32_t ebx_265
                        ebx_265.b = *esi_11
                        int32_t ebx_266 = ebx_265 + data_1cd4398
                        
                        if (ebx_265 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_266 << 2) + data_1c45564)
                        int32_t ebx_269
                        ebx_269.b = *edi_13
                        int32_t eax_101 = data_1cd4380
                        *edi_13 = eax_101.b + (*(((ebx_269 - eax_101) << 2) + data_1cd4384)).b
                        int32_t ebx_273
                        ebx_273.b = *(esi_11 + 1)
                        int32_t ebx_274 = ebx_273 + data_1cd439c
                        
                        if (ebx_273 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_274 << 2) + data_1c45564)
                        int32_t ebx_277
                        ebx_277.b = edi_13[1]
                        int32_t eax_104 = data_1cd4388
                        edi_13[1] = eax_104.b + (*(((ebx_277 - eax_104) << 2) + data_1cd438c)).b
                        int32_t ebx_281
                        ebx_281.b = *(esi_11 + 2)
                        int32_t ebx_282 = ebx_281 + data_1cd43a0
                        
                        if (ebx_281 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_282 << 2) + data_1c45564)
                        int32_t ebx_285
                        ebx_285.b = edi_13[2]
                        int32_t eax_107 = data_1cd4390
                        eax_98 = eax_107 + *(((ebx_285 - eax_107) << 2) + data_1cd4394)
                        edi_13[2] = eax_98.b
                    else
                        int32_t edx_8 = *((eax_98 << 2) + data_1cd4328)
                        int32_t ebx_289
                        ebx_289.b = *esi_11
                        int32_t ebx_290 = ebx_289 + data_1cd4398
                        
                        if (ebx_289 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_290 << 2) + data_1c45564)
                        int32_t ebx_293
                        ebx_293.b = *edi_13
                        int32_t eax_109 = data_1cd4380
                        int32_t eax_111
                        eax_111.b = *edi_13
                        *edi_13 = eax_111.b + (*(((eax_109
                            + *(((ebx_293 - eax_109) << 2) + data_1cd4384) - eax_111) << 2) + edx_8)).b
                        int32_t ebx_301
                        ebx_301.b = *(esi_11 + 1)
                        int32_t ebx_302 = ebx_301 + data_1cd439c
                        
                        if (ebx_301 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_302 << 2) + data_1c45564)
                        int32_t ebx_305
                        ebx_305.b = edi_13[1]
                        int32_t eax_114 = data_1cd4388
                        int32_t eax_116
                        eax_116.b = edi_13[1]
                        edi_13[1] = eax_116.b + (*(((eax_114
                            + *(((ebx_305 - eax_114) << 2) + data_1cd438c) - eax_116) << 2) + edx_8)).b
                        int32_t ebx_313
                        ebx_313.b = *(esi_11 + 2)
                        int32_t ebx_314 = ebx_313 + data_1cd43a0
                        
                        if (ebx_313 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_314 << 2) + data_1c45564)
                        int32_t ebx_317
                        ebx_317.b = edi_13[2]
                        int32_t eax_119 = data_1cd4390
                        int32_t eax_121
                        eax_121.b = edi_13[2]
                        eax_98 = eax_121 + *(((eax_119
                            + *(((ebx_317 - eax_119) << 2) + data_1cd4394) - eax_121) << 2) + edx_8)
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
            ebx_261 += data_1cd43f4
            
            if (ebx_261 s>= data_1cd43ec)
                ebx_261 -= data_1cd43ec
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
    int32_t ebx_327 = data_1cd4414
    
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
                    int32_t ebx_331
                    ebx_331.b = *esi_13
                    int32_t ebx_332 = ebx_331 + data_1cd4398
                    
                    if (ebx_331 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_332 << 2) + data_1c45564)
                    int32_t ebx_335
                    ebx_335.b = *edi_16
                    int32_t eax_125 = data_1cd4380
                    *edi_16 = eax_125.b + (*(((ebx_335 - eax_125) << 2) + data_1cd4384)).b
                    int32_t ebx_339
                    ebx_339.b = *(esi_13 + 1)
                    int32_t ebx_340 = ebx_339 + data_1cd439c
                    
                    if (ebx_339 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_340 << 2) + data_1c45564)
                    int32_t ebx_343
                    ebx_343.b = edi_16[1]
                    int32_t eax_128 = data_1cd4388
                    edi_16[1] = eax_128.b + (*(((ebx_343 - eax_128) << 2) + data_1cd438c)).b
                    int32_t ebx_347
                    ebx_347.b = *(esi_13 + 2)
                    int32_t ebx_348 = ebx_347 + data_1cd43a0
                    
                    if (ebx_347 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_348 << 2) + data_1c45564)
                    int32_t ebx_351
                    ebx_351.b = edi_16[2]
                    int32_t eax_131 = data_1cd4390
                    eax_122 = eax_131 + *(((ebx_351 - eax_131) << 2) + data_1cd4394)
                    edi_16[2] = eax_122.b
                else
                    int32_t edx_11 = *((eax_122 << 2) + data_1cd4328)
                    int32_t ebx_355
                    ebx_355.b = *esi_13
                    int32_t ebx_356 = ebx_355 + data_1cd4398
                    
                    if (ebx_355 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_356 << 2) + data_1c45564)
                    int32_t ebx_359
                    ebx_359.b = *edi_16
                    int32_t eax_133 = data_1cd4380
                    int32_t eax_135
                    eax_135.b = *edi_16
                    *edi_16 = eax_135.b + (*(((eax_133
                        + *(((ebx_359 - eax_133) << 2) + data_1cd4384) - eax_135) << 2) + edx_11)).b
                    int32_t ebx_367
                    ebx_367.b = *(esi_13 + 1)
                    int32_t ebx_368 = ebx_367 + data_1cd439c
                    
                    if (ebx_367 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_368 << 2) + data_1c45564)
                    int32_t ebx_371
                    ebx_371.b = edi_16[1]
                    int32_t eax_138 = data_1cd4388
                    int32_t eax_140
                    eax_140.b = edi_16[1]
                    edi_16[1] = eax_140.b + (*(((eax_138
                        + *(((ebx_371 - eax_138) << 2) + data_1cd438c) - eax_140) << 2) + edx_11)).b
                    int32_t ebx_379
                    ebx_379.b = *(esi_13 + 2)
                    int32_t ebx_380 = ebx_379 + data_1cd43a0
                    
                    if (ebx_379 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_380 << 2) + data_1c45564)
                    int32_t ebx_383
                    ebx_383.b = edi_16[2]
                    int32_t eax_143 = data_1cd4390
                    int32_t eax_145
                    eax_145.b = edi_16[2]
                    eax_122 = eax_145 + *(((eax_143 + *(((ebx_383 - eax_143) << 2) + data_1cd4394)
                        - eax_145) << 2) + edx_11)
                    edi_16[2] = eax_122.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_391 = ebx_327
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_391 += data_1cd43ec
            
            if (ebx_391 s< data_1cd43f4)
                int32_t temp122_1 = ecx_11
                ecx_11 -= 1
                
                if (temp122_1 != 1)
                    continue
            else
                ebx_327 = ebx_391 - data_1cd43f4
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
    label_5e6557:
        int32_t eax_146
        eax_146.b = *(esi_15 + 3)
        eax_146.b = eax_146.b
        
        if (eax_146.b != 0)
            if (eax_146 == 0xff)
                int32_t ebx_396
                ebx_396.b = *esi_15
                int32_t ebx_397 = ebx_396 + data_1cd4398
                
                if (ebx_396 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_397 << 2) + data_1c45564)
                int32_t ebx_400
                ebx_400.b = *edi_19
                int32_t eax_149 = data_1cd4380
                *edi_19 = eax_149.b + (*(((ebx_400 - eax_149) << 2) + data_1cd4384)).b
                int32_t ebx_404
                ebx_404.b = *(esi_15 + 1)
                int32_t ebx_405 = ebx_404 + data_1cd439c
                
                if (ebx_404 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_405 << 2) + data_1c45564)
                int32_t ebx_408
                ebx_408.b = edi_19[1]
                int32_t eax_152 = data_1cd4388
                edi_19[1] = eax_152.b + (*(((ebx_408 - eax_152) << 2) + data_1cd438c)).b
                int32_t ebx_412
                ebx_412.b = *(esi_15 + 2)
                int32_t ebx_413 = ebx_412 + data_1cd43a0
                
                if (ebx_412 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_413 << 2) + data_1c45564)
                int32_t ebx_416
                ebx_416.b = edi_19[2]
                int32_t eax_155 = data_1cd4390
                eax_146 = eax_155 + *(((ebx_416 - eax_155) << 2) + data_1cd4394)
                edi_19[2] = eax_146.b
            else
                int32_t edx_14 = *((eax_146 << 2) + data_1cd4328)
                int32_t ebx_420
                ebx_420.b = *esi_15
                int32_t ebx_421 = ebx_420 + data_1cd4398
                
                if (ebx_420 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_421 << 2) + data_1c45564)
                int32_t ebx_424
                ebx_424.b = *edi_19
                int32_t eax_157 = data_1cd4380
                int32_t eax_159
                eax_159.b = *edi_19
                *edi_19 = eax_159.b + (*(((eax_157 + *(((ebx_424 - eax_157) << 2) + data_1cd4384)
                    - eax_159) << 2) + edx_14)).b
                int32_t ebx_432
                ebx_432.b = *(esi_15 + 1)
                int32_t ebx_433 = ebx_432 + data_1cd439c
                
                if (ebx_432 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_433 << 2) + data_1c45564)
                int32_t ebx_436
                ebx_436.b = edi_19[1]
                int32_t eax_162 = data_1cd4388
                int32_t eax_164
                eax_164.b = edi_19[1]
                edi_19[1] = eax_164.b + (*(((eax_162 + *(((ebx_436 - eax_162) << 2) + data_1cd438c)
                    - eax_164) << 2) + edx_14)).b
                int32_t ebx_444
                ebx_444.b = *(esi_15 + 2)
                int32_t ebx_445 = ebx_444 + data_1cd43a0
                
                if (ebx_444 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_445 << 2) + data_1c45564)
                int32_t ebx_448
                ebx_448.b = edi_19[2]
                int32_t eax_167 = data_1cd4390
                int32_t eax_169
                eax_169.b = edi_19[2]
                eax_146 = eax_169 + *(((eax_167 + *(((ebx_448 - eax_167) << 2) + data_1cd4394)
                    - eax_169) << 2) + edx_14)
                edi_19[2] = eax_146.b
        
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
                    goto label_5e67a5
                
                goto label_5e6557
            
            int32_t temp31_1 = ecx_13
            ecx_13 -= 1
            
            if (temp31_1 == 1)
            label_5e67a5:
                int32_t temp53_1 = ecx_12
                ecx_12 -= 1
                
                if (temp53_1 == 1)
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
    int32_t ebx_457 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5e67ee:
        int32_t eax_170
        eax_170.b = *(esi_18 + 3)
        eax_170.b = eax_170.b
        
        if (eax_170.b != 0)
            if (eax_170 == 0xff)
                int32_t ebx_461
                ebx_461.b = *esi_18
                int32_t ebx_462 = ebx_461 + data_1cd4398
                
                if (ebx_461 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_462 << 2) + data_1c45564)
                int32_t ebx_465
                ebx_465.b = *edi_22
                int32_t eax_173 = data_1cd4380
                *edi_22 = eax_173.b + (*(((ebx_465 - eax_173) << 2) + data_1cd4384)).b
                int32_t ebx_469
                ebx_469.b = *(esi_18 + 1)
                int32_t ebx_470 = ebx_469 + data_1cd439c
                
                if (ebx_469 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_470 << 2) + data_1c45564)
                int32_t ebx_473
                ebx_473.b = edi_22[1]
                int32_t eax_176 = data_1cd4388
                edi_22[1] = eax_176.b + (*(((ebx_473 - eax_176) << 2) + data_1cd438c)).b
                int32_t ebx_477
                ebx_477.b = *(esi_18 + 2)
                int32_t ebx_478 = ebx_477 + data_1cd43a0
                
                if (ebx_477 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_478 << 2) + data_1c45564)
                int32_t ebx_481
                ebx_481.b = edi_22[2]
                int32_t eax_179 = data_1cd4390
                eax_170 = eax_179 + *(((ebx_481 - eax_179) << 2) + data_1cd4394)
                edi_22[2] = eax_170.b
            else
                int32_t edx_17 = *((eax_170 << 2) + data_1cd4328)
                int32_t ebx_485
                ebx_485.b = *esi_18
                int32_t ebx_486 = ebx_485 + data_1cd4398
                
                if (ebx_485 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_486 << 2) + data_1c45564)
                int32_t ebx_489
                ebx_489.b = *edi_22
                int32_t eax_181 = data_1cd4380
                int32_t eax_183
                eax_183.b = *edi_22
                *edi_22 = eax_183.b + (*(((eax_181 + *(((ebx_489 - eax_181) << 2) + data_1cd4384)
                    - eax_183) << 2) + edx_17)).b
                int32_t ebx_497
                ebx_497.b = *(esi_18 + 1)
                int32_t ebx_498 = ebx_497 + data_1cd439c
                
                if (ebx_497 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_498 << 2) + data_1c45564)
                int32_t ebx_501
                ebx_501.b = edi_22[1]
                int32_t eax_186 = data_1cd4388
                int32_t eax_188
                eax_188.b = edi_22[1]
                edi_22[1] = eax_188.b + (*(((eax_186 + *(((ebx_501 - eax_186) << 2) + data_1cd438c)
                    - eax_188) << 2) + edx_17)).b
                int32_t ebx_509
                ebx_509.b = *(esi_18 + 2)
                int32_t ebx_510 = ebx_509 + data_1cd43a0
                
                if (ebx_509 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_510 << 2) + data_1c45564)
                int32_t ebx_513
                ebx_513.b = edi_22[2]
                int32_t eax_191 = data_1cd4390
                int32_t eax_193
                eax_193.b = edi_22[2]
                eax_170 = eax_193 + *(((eax_191 + *(((ebx_513 - eax_191) << 2) + data_1cd4394)
                    - eax_193) << 2) + edx_17)
                edi_22[2] = eax_170.b
        
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
                    goto label_5e6a3b
                
                goto label_5e67ee
            
            int32_t temp57_1 = ecx_16
            ecx_16 -= 1
            
            if (temp57_1 == 1)
            label_5e6a3b:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_457 += data_1cd43f4
                
                if (ebx_457 s>= data_1cd43ec)
                    ebx_457 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp99_1 = ecx_15
                ecx_15 -= 1
                
                if (temp99_1 == 1)
                    return eax_170
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    void* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_523 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5e6a9e:
        int32_t eax_194
        eax_194.b = *(esi_20 + 3)
        eax_194.b = eax_194.b
        
        if (eax_194.b != 0)
            if (eax_194 == 0xff)
                int32_t ebx_527
                ebx_527.b = *esi_20
                int32_t ebx_528 = ebx_527 + data_1cd4398
                
                if (ebx_527 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_528 << 2) + data_1c45564)
                int32_t ebx_531
                ebx_531.b = *edi_25
                int32_t eax_197 = data_1cd4380
                *edi_25 = eax_197.b + (*(((ebx_531 - eax_197) << 2) + data_1cd4384)).b
                int32_t ebx_535
                ebx_535.b = *(esi_20 + 1)
                int32_t ebx_536 = ebx_535 + data_1cd439c
                
                if (ebx_535 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_536 << 2) + data_1c45564)
                int32_t ebx_539
                ebx_539.b = edi_25[1]
                int32_t eax_200 = data_1cd4388
                edi_25[1] = eax_200.b + (*(((ebx_539 - eax_200) << 2) + data_1cd438c)).b
                int32_t ebx_543
                ebx_543.b = *(esi_20 + 2)
                int32_t ebx_544 = ebx_543 + data_1cd43a0
                
                if (ebx_543 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_544 << 2) + data_1c45564)
                int32_t ebx_547
                ebx_547.b = edi_25[2]
                int32_t eax_203 = data_1cd4390
                eax_194 = eax_203 + *(((ebx_547 - eax_203) << 2) + data_1cd4394)
                edi_25[2] = eax_194.b
            else
                int32_t edx_20 = *((eax_194 << 2) + data_1cd4328)
                int32_t ebx_551
                ebx_551.b = *esi_20
                int32_t ebx_552 = ebx_551 + data_1cd4398
                
                if (ebx_551 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_552 << 2) + data_1c45564)
                int32_t ebx_555
                ebx_555.b = *edi_25
                int32_t eax_205 = data_1cd4380
                int32_t eax_207
                eax_207.b = *edi_25
                *edi_25 = eax_207.b + (*(((eax_205 + *(((ebx_555 - eax_205) << 2) + data_1cd4384)
                    - eax_207) << 2) + edx_20)).b
                int32_t ebx_563
                ebx_563.b = *(esi_20 + 1)
                int32_t ebx_564 = ebx_563 + data_1cd439c
                
                if (ebx_563 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_564 << 2) + data_1c45564)
                int32_t ebx_567
                ebx_567.b = edi_25[1]
                int32_t eax_210 = data_1cd4388
                int32_t eax_212
                eax_212.b = edi_25[1]
                edi_25[1] = eax_212.b + (*(((eax_210 + *(((ebx_567 - eax_210) << 2) + data_1cd438c)
                    - eax_212) << 2) + edx_20)).b
                int32_t ebx_575
                ebx_575.b = *(esi_20 + 2)
                int32_t ebx_576 = ebx_575 + data_1cd43a0
                
                if (ebx_575 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_576 << 2) + data_1c45564)
                int32_t ebx_579
                ebx_579.b = edi_25[2]
                int32_t eax_215 = data_1cd4390
                int32_t eax_217
                eax_217.b = edi_25[2]
                eax_194 = eax_217 + *(((eax_215 + *(((ebx_579 - eax_215) << 2) + data_1cd4394)
                    - eax_217) << 2) + edx_20)
                edi_25[2] = eax_194.b
        
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
                    goto label_5e6ce9
                
                goto label_5e6a9e
            
            int32_t temp80_1 = ecx_19
            ecx_19 -= 1
            
            if (temp80_1 == 1)
            label_5e6ce9:
                int32_t ebx_587 = ebx_523
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_587 += data_1cd43ec
                    
                    if (ebx_587 s< data_1cd43f4)
                        int32_t temp127_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp127_1 != 1)
                            continue
                    else
                        ebx_523 = ebx_587 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_194
                
                break

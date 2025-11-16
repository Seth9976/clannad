// 函数: sub_5d92a0
// 地址: 0x5d92a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1cd43f8
int32_t ecx = data_1cd43f0
int32_t result = data_1cd43f4
int32_t ecx_1 = data_1cd43ec
int32_t ebx
int32_t esi
int32_t edi

if (eax == ecx)
    if (result == ecx_1)
        int32_t var_4 = ebx
        int32_t var_8 = esi
        int32_t var_c = edi
        void* esi_1 = data_1cd4408
        char* edi_1 = data_1cd4404
        int32_t ecx_2 = data_1cd440c
        
        while (true)
            void* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                int32_t ebx_1
                ebx_1.b = *(esi_1 + 3)
                ebx_1.b = ebx_1.b
                
                if (ebx_1.b != 0)
                    int32_t ebx_6
                    ebx_6.b = (*(*((ebx_1 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_6.b != 0)
                        int32_t edx_1 = *((ebx_6 << 2) + data_1cd4328)
                        int32_t ebx_9
                        ebx_9.b = *esi_1
                        int32_t eax_1
                        eax_1.b = not.b(ebx_9.b)
                        int32_t eax_3 = data_1cd4380
                        int32_t eax_5
                        eax_5.b = *edi_1
                        int32_t eax_6 = eax_5 + *(((eax_3 + *(((eax_1
                            + *(((ebx_9 - eax_1) << 2) + data_1cd43c8) - eax_3) << 2) + data_1cd4384))
                            << 2) + edx_1)
                        
                        if (eax_6 s> 0xff)
                            eax_6 = 0xff
                        
                        *edi_1 = eax_6.b
                        int32_t ebx_21
                        ebx_21.b = *(esi_1 + 1)
                        int32_t eax_7
                        eax_7.b = not.b(ebx_21.b)
                        int32_t eax_9 = data_1cd4388
                        int32_t eax_11
                        eax_11.b = edi_1[1]
                        int32_t eax_12 = eax_11 + *(((eax_9 + *(((eax_7
                            + *(((ebx_21 - eax_7) << 2) + data_1cd43c8) - eax_9) << 2) + data_1cd438c))
                            << 2) + edx_1)
                        
                        if (eax_12 s> 0xff)
                            eax_12 = 0xff
                        
                        edi_1[1] = eax_12.b
                        int32_t ebx_33
                        ebx_33.b = *(esi_1 + 2)
                        int32_t eax_13
                        eax_13.b = not.b(ebx_33.b)
                        int32_t eax_15 = data_1cd4390
                        int32_t eax_17
                        eax_17.b = edi_1[2]
                        result = eax_17 + *(((eax_15 + *(((eax_13
                            + *(((ebx_33 - eax_13) << 2) + data_1cd43c8) - eax_15) << 2)
                            + data_1cd4394)) << 2) + edx_1)
                        
                        if (result s> 0xff)
                            result = 0xff
                        
                        edi_1[2] = result.b
                
                esi_1 += 4
                edi_1 = &edi_1[4]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp1_1 = ecx_2
            ecx_2 -= 1
            
            if (temp1_1 == 1)
                break
            
            esi_1 = var_14_1 + data_1cd4400
            edi_1 = &var_18_1[data_1cd43fc]
        
        return result
    
    if (result s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        void* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_46 = data_1cd4414
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_47
                ebx_47.b = *(esi_4 + 3)
                ebx_47.b = ebx_47.b
                
                if (ebx_47.b != 0)
                    int32_t ebx_52
                    ebx_52.b = (*(*((ebx_47 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_52.b != 0)
                        int32_t edx_2 = *((ebx_52 << 2) + data_1cd4328)
                        int32_t ebx_55
                        ebx_55.b = *esi_4
                        int32_t eax_18
                        eax_18.b = not.b(ebx_55.b)
                        int32_t eax_20 = data_1cd4380
                        int32_t eax_22
                        eax_22.b = *edi_4
                        int32_t eax_23 = eax_22 + *(((eax_20 + *(((eax_18
                            + *(((ebx_55 - eax_18) << 2) + data_1cd43c8) - eax_20) << 2)
                            + data_1cd4384)) << 2) + edx_2)
                        
                        if (eax_23 s> 0xff)
                            eax_23 = 0xff
                        
                        *edi_4 = eax_23.b
                        int32_t ebx_67
                        ebx_67.b = *(esi_4 + 1)
                        int32_t eax_24
                        eax_24.b = not.b(ebx_67.b)
                        int32_t eax_26 = data_1cd4388
                        int32_t eax_28
                        eax_28.b = edi_4[1]
                        int32_t eax_29 = eax_28 + *(((eax_26 + *(((eax_24
                            + *(((ebx_67 - eax_24) << 2) + data_1cd43c8) - eax_26) << 2)
                            + data_1cd438c)) << 2) + edx_2)
                        
                        if (eax_29 s> 0xff)
                            eax_29 = 0xff
                        
                        edi_4[1] = eax_29.b
                        int32_t ebx_79
                        ebx_79.b = *(esi_4 + 2)
                        int32_t eax_30
                        eax_30.b = not.b(ebx_79.b)
                        int32_t eax_32 = data_1cd4390
                        int32_t eax_34
                        eax_34.b = edi_4[2]
                        result = eax_34 + *(((eax_32 + *(((eax_30
                            + *(((ebx_79 - eax_30) << 2) + data_1cd43c8) - eax_32) << 2)
                            + data_1cd4394)) << 2) + edx_2)
                        
                        if (result s> 0xff)
                            result = 0xff
                        
                        edi_4[2] = result.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_46 += data_1cd43f4
            
            if (ebx_46 s>= data_1cd43ec)
                ebx_46 -= data_1cd43ec
                esi_4 += data_1cd4400
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return result
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    void* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_93 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t i_2
        
        do
            int32_t ebx_94
            ebx_94.b = *(esi_6 + 3)
            ebx_94.b = ebx_94.b
            
            if (ebx_94.b != 0)
                int32_t ebx_99
                ebx_99.b = (*(*((ebx_94 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_99.b != 0)
                    int32_t edx_3 = *((ebx_99 << 2) + data_1cd4328)
                    int32_t ebx_102
                    ebx_102.b = *esi_6
                    int32_t eax_35
                    eax_35.b = not.b(ebx_102.b)
                    int32_t eax_37 = data_1cd4380
                    int32_t eax_39
                    eax_39.b = *edi_7
                    int32_t eax_40 = eax_39 + *(((eax_37 + *(((eax_35
                        + *(((ebx_102 - eax_35) << 2) + data_1cd43c8) - eax_37) << 2) + data_1cd4384))
                        << 2) + edx_3)
                    
                    if (eax_40 s> 0xff)
                        eax_40 = 0xff
                    
                    *edi_7 = eax_40.b
                    int32_t ebx_114
                    ebx_114.b = *(esi_6 + 1)
                    int32_t eax_41
                    eax_41.b = not.b(ebx_114.b)
                    int32_t eax_43 = data_1cd4388
                    int32_t eax_45
                    eax_45.b = edi_7[1]
                    int32_t eax_46 = eax_45 + *(((eax_43 + *(((eax_41
                        + *(((ebx_114 - eax_41) << 2) + data_1cd43c8) - eax_43) << 2) + data_1cd438c))
                        << 2) + edx_3)
                    
                    if (eax_46 s> 0xff)
                        eax_46 = 0xff
                    
                    edi_7[1] = eax_46.b
                    int32_t ebx_126
                    ebx_126.b = *(esi_6 + 2)
                    int32_t eax_47
                    eax_47.b = not.b(ebx_126.b)
                    int32_t eax_49 = data_1cd4390
                    int32_t eax_51
                    eax_51.b = edi_7[2]
                    result = eax_51 + *(((eax_49 + *(((eax_47
                        + *(((ebx_126 - eax_47) << 2) + data_1cd43c8) - eax_49) << 2) + data_1cd4394))
                        << 2) + edx_3)
                    
                    if (result s> 0xff)
                        result = 0xff
                    
                    edi_7[2] = result.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_138 = ebx_93
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_138 += data_1cd43ec
            
            if (ebx_138 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_93 = ebx_138 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return result
else if (eax s< ecx)
    if (result == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        void* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        
        while (true)
            void* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t ebx_140
                ebx_140.b = *(esi_8 + 3)
                ebx_140.b = ebx_140.b
                
                if (ebx_140.b != 0)
                    int32_t ebx_145
                    ebx_145.b = (*(*((ebx_140 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_145.b != 0)
                        int32_t edx_5 = *((ebx_145 << 2) + data_1cd4328)
                        int32_t ebx_148
                        ebx_148.b = *esi_8
                        int32_t eax_52
                        eax_52.b = not.b(ebx_148.b)
                        int32_t eax_54 = data_1cd4380
                        int32_t eax_56
                        eax_56.b = *edi_10
                        int32_t eax_57 = eax_56 + *(((eax_54 + *(((eax_52
                            + *(((ebx_148 - eax_52) << 2) + data_1cd43c8) - eax_54) << 2)
                            + data_1cd4384)) << 2) + edx_5)
                        
                        if (eax_57 s> 0xff)
                            eax_57 = 0xff
                        
                        *edi_10 = eax_57.b
                        int32_t ebx_160
                        ebx_160.b = *(esi_8 + 1)
                        int32_t eax_58
                        eax_58.b = not.b(ebx_160.b)
                        int32_t eax_60 = data_1cd4388
                        int32_t eax_62
                        eax_62.b = edi_10[1]
                        int32_t eax_63 = eax_62 + *(((eax_60 + *(((eax_58
                            + *(((ebx_160 - eax_58) << 2) + data_1cd43c8) - eax_60) << 2)
                            + data_1cd438c)) << 2) + edx_5)
                        
                        if (eax_63 s> 0xff)
                            eax_63 = 0xff
                        
                        edi_10[1] = eax_63.b
                        int32_t ebx_172
                        ebx_172.b = *(esi_8 + 2)
                        int32_t eax_64
                        eax_64.b = not.b(ebx_172.b)
                        int32_t eax_66 = data_1cd4390
                        int32_t eax_68
                        eax_68.b = edi_10[2]
                        result = eax_68 + *(((eax_66 + *(((eax_64
                            + *(((ebx_172 - eax_64) << 2) + data_1cd43c8) - eax_66) << 2)
                            + data_1cd4394)) << 2) + edx_5)
                        
                        if (result s> 0xff)
                            result = 0xff
                        
                        edi_10[2] = result.b
                
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
        
        return result
    
    if (result s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_185 = data_1cd4414
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_186
                ebx_186.b = *(esi_11 + 3)
                ebx_186.b = ebx_186.b
                
                if (ebx_186.b != 0)
                    int32_t ebx_191
                    ebx_191.b = (*(*((ebx_186 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_191.b != 0)
                        int32_t edx_8 = *((ebx_191 << 2) + data_1cd4328)
                        int32_t ebx_194
                        ebx_194.b = *esi_11
                        int32_t eax_69
                        eax_69.b = not.b(ebx_194.b)
                        int32_t eax_71 = data_1cd4380
                        int32_t eax_73
                        eax_73.b = *edi_13
                        int32_t eax_74 = eax_73 + *(((eax_71 + *(((eax_69
                            + *(((ebx_194 - eax_69) << 2) + data_1cd43c8) - eax_71) << 2)
                            + data_1cd4384)) << 2) + edx_8)
                        
                        if (eax_74 s> 0xff)
                            eax_74 = 0xff
                        
                        *edi_13 = eax_74.b
                        int32_t ebx_206
                        ebx_206.b = *(esi_11 + 1)
                        int32_t eax_75
                        eax_75.b = not.b(ebx_206.b)
                        int32_t eax_77 = data_1cd4388
                        int32_t eax_79
                        eax_79.b = edi_13[1]
                        int32_t eax_80 = eax_79 + *(((eax_77 + *(((eax_75
                            + *(((ebx_206 - eax_75) << 2) + data_1cd43c8) - eax_77) << 2)
                            + data_1cd438c)) << 2) + edx_8)
                        
                        if (eax_80 s> 0xff)
                            eax_80 = 0xff
                        
                        edi_13[1] = eax_80.b
                        int32_t ebx_218
                        ebx_218.b = *(esi_11 + 2)
                        int32_t eax_81
                        eax_81.b = not.b(ebx_218.b)
                        int32_t eax_83 = data_1cd4390
                        int32_t eax_85
                        eax_85.b = edi_13[2]
                        result = eax_85 + *(((eax_83 + *(((eax_81
                            + *(((ebx_218 - eax_81) << 2) + data_1cd43c8) - eax_83) << 2)
                            + data_1cd4394)) << 2) + edx_8)
                        
                        if (result s> 0xff)
                            result = 0xff
                        
                        edi_13[2] = result.b
                
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
            ebx_185 += data_1cd43f4
            
            if (ebx_185 s>= data_1cd43ec)
                ebx_185 -= data_1cd43ec
                esi_11 += data_1cd4400
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return result
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    void* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_232 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t i_5
        
        do
            int32_t ebx_233
            ebx_233.b = *(esi_13 + 3)
            ebx_233.b = ebx_233.b
            
            if (ebx_233.b != 0)
                int32_t ebx_238
                ebx_238.b = (*(*((ebx_233 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_238.b != 0)
                    int32_t edx_11 = *((ebx_238 << 2) + data_1cd4328)
                    int32_t ebx_241
                    ebx_241.b = *esi_13
                    int32_t eax_86
                    eax_86.b = not.b(ebx_241.b)
                    int32_t eax_88 = data_1cd4380
                    int32_t eax_90
                    eax_90.b = *edi_16
                    int32_t eax_91 = eax_90 + *(((eax_88 + *(((eax_86
                        + *(((ebx_241 - eax_86) << 2) + data_1cd43c8) - eax_88) << 2) + data_1cd4384))
                        << 2) + edx_11)
                    
                    if (eax_91 s> 0xff)
                        eax_91 = 0xff
                    
                    *edi_16 = eax_91.b
                    int32_t ebx_253
                    ebx_253.b = *(esi_13 + 1)
                    int32_t eax_92
                    eax_92.b = not.b(ebx_253.b)
                    int32_t eax_94 = data_1cd4388
                    int32_t eax_96
                    eax_96.b = edi_16[1]
                    int32_t eax_97 = eax_96 + *(((eax_94 + *(((eax_92
                        + *(((ebx_253 - eax_92) << 2) + data_1cd43c8) - eax_94) << 2) + data_1cd438c))
                        << 2) + edx_11)
                    
                    if (eax_97 s> 0xff)
                        eax_97 = 0xff
                    
                    edi_16[1] = eax_97.b
                    int32_t ebx_265
                    ebx_265.b = *(esi_13 + 2)
                    int32_t eax_98
                    eax_98.b = not.b(ebx_265.b)
                    int32_t eax_100 = data_1cd4390
                    int32_t eax_102
                    eax_102.b = edi_16[2]
                    result = eax_102 + *(((eax_100 + *(((eax_98
                        + *(((ebx_265 - eax_98) << 2) + data_1cd43c8) - eax_100) << 2) + data_1cd4394))
                        << 2) + edx_11)
                    
                    if (result s> 0xff)
                        result = 0xff
                    
                    edi_16[2] = result.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_277 = ebx_232
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_277 += data_1cd43ec
            
            if (ebx_277 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_232 = ebx_277 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return result
else if (result == ecx_1)
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
    label_5d8e07:
        int32_t ebx_279
        ebx_279.b = *(esi_15 + 3)
        ebx_279.b = ebx_279.b
        
        if (ebx_279.b != 0)
            int32_t ebx_284
            ebx_284.b = (*(*((ebx_279 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_284.b != 0)
                int32_t edx_14 = *((ebx_284 << 2) + data_1cd4328)
                int32_t ebx_287
                ebx_287.b = *esi_15
                int32_t eax_103
                eax_103.b = not.b(ebx_287.b)
                int32_t eax_105 = data_1cd4380
                int32_t eax_107
                eax_107.b = *edi_19
                int32_t eax_108 = eax_107 + *(((eax_105 + *(((eax_103
                    + *(((ebx_287 - eax_103) << 2) + data_1cd43c8) - eax_105) << 2) + data_1cd4384))
                    << 2) + edx_14)
                
                if (eax_108 s> 0xff)
                    eax_108 = 0xff
                
                *edi_19 = eax_108.b
                int32_t ebx_299
                ebx_299.b = *(esi_15 + 1)
                int32_t eax_109
                eax_109.b = not.b(ebx_299.b)
                int32_t eax_111 = data_1cd4388
                int32_t eax_113
                eax_113.b = edi_19[1]
                int32_t eax_114 = eax_113 + *(((eax_111 + *(((eax_109
                    + *(((ebx_299 - eax_109) << 2) + data_1cd43c8) - eax_111) << 2) + data_1cd438c))
                    << 2) + edx_14)
                
                if (eax_114 s> 0xff)
                    eax_114 = 0xff
                
                edi_19[1] = eax_114.b
                int32_t ebx_311
                ebx_311.b = *(esi_15 + 2)
                int32_t eax_115
                eax_115.b = not.b(ebx_311.b)
                int32_t eax_117 = data_1cd4390
                int32_t eax_119
                eax_119.b = edi_19[2]
                result = eax_119 + *(((eax_117 + *(((eax_115
                    + *(((ebx_311 - eax_115) << 2) + data_1cd43c8) - eax_117) << 2) + data_1cd4394))
                    << 2) + edx_14)
                
                if (result s> 0xff)
                    result = 0xff
                
                edi_19[2] = result.b
        
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
                    goto label_5d8f3f
                
                goto label_5d8e07
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5d8f3f:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return result
                
                esi_15 = var_14_7 + data_1cd4400
                edi_19 = &var_18_7[data_1cd43fc]
                break
else if (result s< ecx_1)
    int32_t var_4_7 = ebx
    int32_t var_8_7 = esi
    int32_t var_c_7 = edi
    void* esi_18 = data_1cd4408
    char* edi_22 = data_1cd4404
    int32_t ecx_15 = data_1cd440c
    int32_t ebx_324 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5d8f8e:
        int32_t ebx_325
        ebx_325.b = *(esi_18 + 3)
        ebx_325.b = ebx_325.b
        
        if (ebx_325.b != 0)
            int32_t ebx_330
            ebx_330.b = (*(*((ebx_325 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_330.b != 0)
                int32_t edx_17 = *((ebx_330 << 2) + data_1cd4328)
                int32_t ebx_333
                ebx_333.b = *esi_18
                int32_t eax_120
                eax_120.b = not.b(ebx_333.b)
                int32_t eax_122 = data_1cd4380
                int32_t eax_124
                eax_124.b = *edi_22
                int32_t eax_125 = eax_124 + *(((eax_122 + *(((eax_120
                    + *(((ebx_333 - eax_120) << 2) + data_1cd43c8) - eax_122) << 2) + data_1cd4384))
                    << 2) + edx_17)
                
                if (eax_125 s> 0xff)
                    eax_125 = 0xff
                
                *edi_22 = eax_125.b
                int32_t ebx_345
                ebx_345.b = *(esi_18 + 1)
                int32_t eax_126
                eax_126.b = not.b(ebx_345.b)
                int32_t eax_128 = data_1cd4388
                int32_t eax_130
                eax_130.b = edi_22[1]
                int32_t eax_131 = eax_130 + *(((eax_128 + *(((eax_126
                    + *(((ebx_345 - eax_126) << 2) + data_1cd43c8) - eax_128) << 2) + data_1cd438c))
                    << 2) + edx_17)
                
                if (eax_131 s> 0xff)
                    eax_131 = 0xff
                
                edi_22[1] = eax_131.b
                int32_t ebx_357
                ebx_357.b = *(esi_18 + 2)
                int32_t eax_132
                eax_132.b = not.b(ebx_357.b)
                int32_t eax_134 = data_1cd4390
                int32_t eax_136
                eax_136.b = edi_22[2]
                result = eax_136 + *(((eax_134 + *(((eax_132
                    + *(((ebx_357 - eax_132) << 2) + data_1cd43c8) - eax_134) << 2) + data_1cd4394))
                    << 2) + edx_17)
                
                if (result s> 0xff)
                    result = 0xff
                
                edi_22[2] = result.b
        
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
                    goto label_5d90c5
                
                goto label_5d8f8e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5d90c5:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_324 += data_1cd43f4
                
                if (ebx_324 s>= data_1cd43ec)
                    ebx_324 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return result
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    void* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_371 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5d912e:
        int32_t ebx_372
        ebx_372.b = *(esi_20 + 3)
        ebx_372.b = ebx_372.b
        
        if (ebx_372.b != 0)
            int32_t ebx_377
            ebx_377.b = (*(*((ebx_372 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_377.b != 0)
                int32_t edx_20 = *((ebx_377 << 2) + data_1cd4328)
                int32_t ebx_380
                ebx_380.b = *esi_20
                int32_t eax_137
                eax_137.b = not.b(ebx_380.b)
                int32_t eax_139 = data_1cd4380
                int32_t eax_141
                eax_141.b = *edi_25
                int32_t eax_142 = eax_141 + *(((eax_139 + *(((eax_137
                    + *(((ebx_380 - eax_137) << 2) + data_1cd43c8) - eax_139) << 2) + data_1cd4384))
                    << 2) + edx_20)
                
                if (eax_142 s> 0xff)
                    eax_142 = 0xff
                
                *edi_25 = eax_142.b
                int32_t ebx_392
                ebx_392.b = *(esi_20 + 1)
                int32_t eax_143
                eax_143.b = not.b(ebx_392.b)
                int32_t eax_145 = data_1cd4388
                int32_t eax_147
                eax_147.b = edi_25[1]
                int32_t eax_148 = eax_147 + *(((eax_145 + *(((eax_143
                    + *(((ebx_392 - eax_143) << 2) + data_1cd43c8) - eax_145) << 2) + data_1cd438c))
                    << 2) + edx_20)
                
                if (eax_148 s> 0xff)
                    eax_148 = 0xff
                
                edi_25[1] = eax_148.b
                int32_t ebx_404
                ebx_404.b = *(esi_20 + 2)
                int32_t eax_149
                eax_149.b = not.b(ebx_404.b)
                int32_t eax_151 = data_1cd4390
                int32_t eax_153
                eax_153.b = edi_25[2]
                result = eax_153 + *(((eax_151 + *(((eax_149
                    + *(((ebx_404 - eax_149) << 2) + data_1cd43c8) - eax_151) << 2) + data_1cd4394))
                    << 2) + edx_20)
                
                if (result s> 0xff)
                    result = 0xff
                
                edi_25[2] = result.b
        
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
                    goto label_5d9263
                
                goto label_5d912e
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5d9263:
                int32_t ebx_416 = ebx_371
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_416 += data_1cd43ec
                    
                    if (ebx_416 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_371 = ebx_416 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return result
                
                break

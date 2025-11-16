// 函数: sub_5e8bc0
// 地址: 0x5e8bc0
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
                        int32_t ebx_10 = ebx_9 + data_1cd4398
                        
                        if (ebx_9 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_10 << 2) + data_1c45564)
                        int32_t ebx_13
                        ebx_13.b = *edi_1
                        int32_t eax_2 = data_1cd4380
                        int32_t eax_4
                        eax_4.b = *edi_1
                        *edi_1 = eax_4.b + (*(((eax_2 + *(((ebx_13 - eax_2) << 2) + data_1cd4384)
                            - eax_4) << 2) + edx_1)).b
                        int32_t ebx_21
                        ebx_21.b = *(esi_1 + 1)
                        int32_t ebx_22 = ebx_21 + data_1cd439c
                        
                        if (ebx_21 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_22 << 2) + data_1c45564)
                        int32_t ebx_25
                        ebx_25.b = edi_1[1]
                        int32_t eax_7 = data_1cd4388
                        int32_t eax_9
                        eax_9.b = edi_1[1]
                        edi_1[1] = eax_9.b + (*(((eax_7 + *(((ebx_25 - eax_7) << 2) + data_1cd438c)
                            - eax_9) << 2) + edx_1)).b
                        int32_t ebx_33
                        ebx_33.b = *(esi_1 + 2)
                        int32_t ebx_34 = ebx_33 + data_1cd43a0
                        
                        if (ebx_33 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_34 << 2) + data_1c45564)
                        int32_t ebx_37
                        ebx_37.b = edi_1[2]
                        int32_t eax_12 = data_1cd4390
                        int32_t eax_14
                        eax_14.b = edi_1[2]
                        result = eax_14 + *(((eax_12 + *(((ebx_37 - eax_12) << 2) + data_1cd4394)
                            - eax_14) << 2) + edx_1)
                        edi_1[2] = result.b
                
                esi_1 += 4
                edi_1 = &edi_1[4]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp7_1 = ecx_2
            ecx_2 -= 1
            
            if (temp7_1 == 1)
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
                        int32_t ebx_56 = ebx_55 + data_1cd4398
                        
                        if (ebx_55 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_56 << 2) + data_1c45564)
                        int32_t ebx_59
                        ebx_59.b = *edi_4
                        int32_t eax_16 = data_1cd4380
                        int32_t eax_18
                        eax_18.b = *edi_4
                        *edi_4 = eax_18.b + (*(((eax_16 + *(((ebx_59 - eax_16) << 2) + data_1cd4384)
                            - eax_18) << 2) + edx_2)).b
                        int32_t ebx_67
                        ebx_67.b = *(esi_4 + 1)
                        int32_t ebx_68 = ebx_67 + data_1cd439c
                        
                        if (ebx_67 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_68 << 2) + data_1c45564)
                        int32_t ebx_71
                        ebx_71.b = edi_4[1]
                        int32_t eax_21 = data_1cd4388
                        int32_t eax_23
                        eax_23.b = edi_4[1]
                        edi_4[1] = eax_23.b + (*(((eax_21
                            + *(((ebx_71 - eax_21) << 2) + data_1cd438c) - eax_23) << 2) + edx_2)).b
                        int32_t ebx_79
                        ebx_79.b = *(esi_4 + 2)
                        int32_t ebx_80 = ebx_79 + data_1cd43a0
                        
                        if (ebx_79 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_80 << 2) + data_1c45564)
                        int32_t ebx_83
                        ebx_83.b = edi_4[2]
                        int32_t eax_26 = data_1cd4390
                        int32_t eax_28
                        eax_28.b = edi_4[2]
                        result = eax_28 + *(((eax_26 + *(((ebx_83 - eax_26) << 2) + data_1cd4394)
                            - eax_28) << 2) + edx_2)
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
                    int32_t ebx_103 = ebx_102 + data_1cd4398
                    
                    if (ebx_102 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_103 << 2) + data_1c45564)
                    int32_t ebx_106
                    ebx_106.b = *edi_7
                    int32_t eax_30 = data_1cd4380
                    int32_t eax_32
                    eax_32.b = *edi_7
                    *edi_7 = eax_32.b + (*(((eax_30 + *(((ebx_106 - eax_30) << 2) + data_1cd4384)
                        - eax_32) << 2) + edx_3)).b
                    int32_t ebx_114
                    ebx_114.b = *(esi_6 + 1)
                    int32_t ebx_115 = ebx_114 + data_1cd439c
                    
                    if (ebx_114 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_115 << 2) + data_1c45564)
                    int32_t ebx_118
                    ebx_118.b = edi_7[1]
                    int32_t eax_35 = data_1cd4388
                    int32_t eax_37
                    eax_37.b = edi_7[1]
                    edi_7[1] = eax_37.b + (*(((eax_35 + *(((ebx_118 - eax_35) << 2) + data_1cd438c)
                        - eax_37) << 2) + edx_3)).b
                    int32_t ebx_126
                    ebx_126.b = *(esi_6 + 2)
                    int32_t ebx_127 = ebx_126 + data_1cd43a0
                    
                    if (ebx_126 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_127 << 2) + data_1c45564)
                    int32_t ebx_130
                    ebx_130.b = edi_7[2]
                    int32_t eax_40 = data_1cd4390
                    int32_t eax_42
                    eax_42.b = edi_7[2]
                    result = eax_42 + *(((eax_40 + *(((ebx_130 - eax_40) << 2) + data_1cd4394)
                        - eax_42) << 2) + edx_3)
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
                int32_t temp60_1 = ecx_6
                ecx_6 -= 1
                
                if (temp60_1 != 1)
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
                        int32_t ebx_149 = ebx_148 + data_1cd4398
                        
                        if (ebx_148 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_149 << 2) + data_1c45564)
                        int32_t ebx_152
                        ebx_152.b = *edi_10
                        int32_t eax_44 = data_1cd4380
                        int32_t eax_46
                        eax_46.b = *edi_10
                        *edi_10 = eax_46.b + (*(((eax_44
                            + *(((ebx_152 - eax_44) << 2) + data_1cd4384) - eax_46) << 2) + edx_5)).b
                        int32_t ebx_160
                        ebx_160.b = *(esi_8 + 1)
                        int32_t ebx_161 = ebx_160 + data_1cd439c
                        
                        if (ebx_160 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_161 << 2) + data_1c45564)
                        int32_t ebx_164
                        ebx_164.b = edi_10[1]
                        int32_t eax_49 = data_1cd4388
                        int32_t eax_51
                        eax_51.b = edi_10[1]
                        edi_10[1] = eax_51.b + (*(((eax_49
                            + *(((ebx_164 - eax_49) << 2) + data_1cd438c) - eax_51) << 2) + edx_5)).b
                        int32_t ebx_172
                        ebx_172.b = *(esi_8 + 2)
                        int32_t ebx_173 = ebx_172 + data_1cd43a0
                        
                        if (ebx_172 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_173 << 2) + data_1c45564)
                        int32_t ebx_176
                        ebx_176.b = edi_10[2]
                        int32_t eax_54 = data_1cd4390
                        int32_t eax_56
                        eax_56.b = edi_10[2]
                        result = eax_56 + *(((eax_54 + *(((ebx_176 - eax_54) << 2) + data_1cd4394)
                            - eax_56) << 2) + edx_5)
                        edi_10[2] = result.b
                
                edi_10 = &edi_10[4]
                edx_4 += data_1cd43f8
                
                if (edx_4 s>= data_1cd43f0)
                    edx_4 -= data_1cd43f0
                    esi_8 += 4
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp28_1 = ecx_7
            ecx_7 -= 1
            
            if (temp28_1 == 1)
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
                        int32_t ebx_195 = ebx_194 + data_1cd4398
                        
                        if (ebx_194 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_195 << 2) + data_1c45564)
                        int32_t ebx_198
                        ebx_198.b = *edi_13
                        int32_t eax_58 = data_1cd4380
                        int32_t eax_60
                        eax_60.b = *edi_13
                        *edi_13 = eax_60.b + (*(((eax_58
                            + *(((ebx_198 - eax_58) << 2) + data_1cd4384) - eax_60) << 2) + edx_8)).b
                        int32_t ebx_206
                        ebx_206.b = *(esi_11 + 1)
                        int32_t ebx_207 = ebx_206 + data_1cd439c
                        
                        if (ebx_206 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_207 << 2) + data_1c45564)
                        int32_t ebx_210
                        ebx_210.b = edi_13[1]
                        int32_t eax_63 = data_1cd4388
                        int32_t eax_65
                        eax_65.b = edi_13[1]
                        edi_13[1] = eax_65.b + (*(((eax_63
                            + *(((ebx_210 - eax_63) << 2) + data_1cd438c) - eax_65) << 2) + edx_8)).b
                        int32_t ebx_218
                        ebx_218.b = *(esi_11 + 2)
                        int32_t ebx_219 = ebx_218 + data_1cd43a0
                        
                        if (ebx_218 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_219 << 2) + data_1c45564)
                        int32_t ebx_222
                        ebx_222.b = edi_13[2]
                        int32_t eax_68 = data_1cd4390
                        int32_t eax_70
                        eax_70.b = edi_13[2]
                        result = eax_70 + *(((eax_68 + *(((ebx_222 - eax_68) << 2) + data_1cd4394)
                            - eax_70) << 2) + edx_8)
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
                    int32_t ebx_242 = ebx_241 + data_1cd4398
                    
                    if (ebx_241 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_242 << 2) + data_1c45564)
                    int32_t ebx_245
                    ebx_245.b = *edi_16
                    int32_t eax_72 = data_1cd4380
                    int32_t eax_74
                    eax_74.b = *edi_16
                    *edi_16 = eax_74.b + (*(((eax_72 + *(((ebx_245 - eax_72) << 2) + data_1cd4384)
                        - eax_74) << 2) + edx_11)).b
                    int32_t ebx_253
                    ebx_253.b = *(esi_13 + 1)
                    int32_t ebx_254 = ebx_253 + data_1cd439c
                    
                    if (ebx_253 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_254 << 2) + data_1c45564)
                    int32_t ebx_257
                    ebx_257.b = edi_16[1]
                    int32_t eax_77 = data_1cd4388
                    int32_t eax_79
                    eax_79.b = edi_16[1]
                    edi_16[1] = eax_79.b + (*(((eax_77 + *(((ebx_257 - eax_77) << 2) + data_1cd438c)
                        - eax_79) << 2) + edx_11)).b
                    int32_t ebx_265
                    ebx_265.b = *(esi_13 + 2)
                    int32_t ebx_266 = ebx_265 + data_1cd43a0
                    
                    if (ebx_265 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_266 << 2) + data_1c45564)
                    int32_t ebx_269
                    ebx_269.b = edi_16[2]
                    int32_t eax_82 = data_1cd4390
                    int32_t eax_84
                    eax_84.b = edi_16[2]
                    result = eax_84 + *(((eax_82 + *(((ebx_269 - eax_82) << 2) + data_1cd4394)
                        - eax_84) << 2) + edx_11)
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
                int32_t temp74_1 = ecx_11
                ecx_11 -= 1
                
                if (temp74_1 != 1)
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
    label_5e8677:
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
                int32_t ebx_288 = ebx_287 + data_1cd4398
                
                if (ebx_287 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_288 << 2) + data_1c45564)
                int32_t ebx_291
                ebx_291.b = *edi_19
                int32_t eax_86 = data_1cd4380
                int32_t eax_88
                eax_88.b = *edi_19
                *edi_19 = eax_88.b + (*(((eax_86 + *(((ebx_291 - eax_86) << 2) + data_1cd4384)
                    - eax_88) << 2) + edx_14)).b
                int32_t ebx_299
                ebx_299.b = *(esi_15 + 1)
                int32_t ebx_300 = ebx_299 + data_1cd439c
                
                if (ebx_299 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_300 << 2) + data_1c45564)
                int32_t ebx_303
                ebx_303.b = edi_19[1]
                int32_t eax_91 = data_1cd4388
                int32_t eax_93
                eax_93.b = edi_19[1]
                edi_19[1] = eax_93.b + (*(((eax_91 + *(((ebx_303 - eax_91) << 2) + data_1cd438c)
                    - eax_93) << 2) + edx_14)).b
                int32_t ebx_311
                ebx_311.b = *(esi_15 + 2)
                int32_t ebx_312 = ebx_311 + data_1cd43a0
                
                if (ebx_311 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_312 << 2) + data_1c45564)
                int32_t ebx_315
                ebx_315.b = edi_19[2]
                int32_t eax_96 = data_1cd4390
                int32_t eax_98
                eax_98.b = edi_19[2]
                result = eax_98 + *(((eax_96 + *(((ebx_315 - eax_96) << 2) + data_1cd4394) - eax_98)
                    << 2) + edx_14)
                edi_19[2] = result.b
        
        int32_t edx_15 = edx_13
        
        while (true)
            esi_15 += 4
            edx_15 += data_1cd43f0
            
            if (edx_15 s>= data_1cd43f8)
                edx_13 = edx_15 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp36_1 = ecx_13
                ecx_13 -= 1
                
                if (temp36_1 == 1)
                    goto label_5e87ea
                
                goto label_5e8677
            
            int32_t temp23_1 = ecx_13
            ecx_13 -= 1
            
            if (temp23_1 == 1)
            label_5e87ea:
                int32_t temp35_1 = ecx_12
                ecx_12 -= 1
                
                if (temp35_1 == 1)
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
    label_5e883e:
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
                int32_t ebx_334 = ebx_333 + data_1cd4398
                
                if (ebx_333 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_334 << 2) + data_1c45564)
                int32_t ebx_337
                ebx_337.b = *edi_22
                int32_t eax_100 = data_1cd4380
                int32_t eax_102
                eax_102.b = *edi_22
                *edi_22 = eax_102.b + (*(((eax_100 + *(((ebx_337 - eax_100) << 2) + data_1cd4384)
                    - eax_102) << 2) + edx_17)).b
                int32_t ebx_345
                ebx_345.b = *(esi_18 + 1)
                int32_t ebx_346 = ebx_345 + data_1cd439c
                
                if (ebx_345 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_346 << 2) + data_1c45564)
                int32_t ebx_349
                ebx_349.b = edi_22[1]
                int32_t eax_105 = data_1cd4388
                int32_t eax_107
                eax_107.b = edi_22[1]
                edi_22[1] = eax_107.b + (*(((eax_105 + *(((ebx_349 - eax_105) << 2) + data_1cd438c)
                    - eax_107) << 2) + edx_17)).b
                int32_t ebx_357
                ebx_357.b = *(esi_18 + 2)
                int32_t ebx_358 = ebx_357 + data_1cd43a0
                
                if (ebx_357 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_358 << 2) + data_1c45564)
                int32_t ebx_361
                ebx_361.b = edi_22[2]
                int32_t eax_110 = data_1cd4390
                int32_t eax_112
                eax_112.b = edi_22[2]
                result = eax_112 + *(((eax_110 + *(((ebx_361 - eax_110) << 2) + data_1cd4394)
                    - eax_112) << 2) + edx_17)
                edi_22[2] = result.b
        
        int32_t edx_18 = edx_16
        
        while (true)
            esi_18 += 4
            edx_18 += data_1cd43f0
            
            if (edx_18 s>= data_1cd43f8)
                edx_16 = edx_18 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp49_1 = ecx_16
                ecx_16 -= 1
                
                if (temp49_1 == 1)
                    goto label_5e89b0
                
                goto label_5e883e
            
            int32_t temp39_1 = ecx_16
            ecx_16 -= 1
            
            if (temp39_1 == 1)
            label_5e89b0:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_324 += data_1cd43f4
                
                if (ebx_324 s>= data_1cd43ec)
                    ebx_324 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp63_1 = ecx_15
                ecx_15 -= 1
                
                if (temp63_1 == 1)
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
    label_5e8a0e:
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
                int32_t ebx_381 = ebx_380 + data_1cd4398
                
                if (ebx_380 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_381 << 2) + data_1c45564)
                int32_t ebx_384
                ebx_384.b = *edi_25
                int32_t eax_114 = data_1cd4380
                int32_t eax_116
                eax_116.b = *edi_25
                *edi_25 = eax_116.b + (*(((eax_114 + *(((ebx_384 - eax_114) << 2) + data_1cd4384)
                    - eax_116) << 2) + edx_20)).b
                int32_t ebx_392
                ebx_392.b = *(esi_20 + 1)
                int32_t ebx_393 = ebx_392 + data_1cd439c
                
                if (ebx_392 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_393 << 2) + data_1c45564)
                int32_t ebx_396
                ebx_396.b = edi_25[1]
                int32_t eax_119 = data_1cd4388
                int32_t eax_121
                eax_121.b = edi_25[1]
                edi_25[1] = eax_121.b + (*(((eax_119 + *(((ebx_396 - eax_119) << 2) + data_1cd438c)
                    - eax_121) << 2) + edx_20)).b
                int32_t ebx_404
                ebx_404.b = *(esi_20 + 2)
                int32_t ebx_405 = ebx_404 + data_1cd43a0
                
                if (ebx_404 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_405 << 2) + data_1c45564)
                int32_t ebx_408
                ebx_408.b = edi_25[2]
                int32_t eax_124 = data_1cd4390
                int32_t eax_126
                eax_126.b = edi_25[2]
                result = eax_126 + *(((eax_124 + *(((ebx_408 - eax_124) << 2) + data_1cd4394)
                    - eax_126) << 2) + edx_20)
                edi_25[2] = result.b
        
        int32_t edx_21 = edx_19
        
        while (true)
            esi_20 += 4
            edx_21 += data_1cd43f0
            
            if (edx_21 s>= data_1cd43f8)
                edx_19 = edx_21 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp64_1 = ecx_19
                ecx_19 -= 1
                
                if (temp64_1 == 1)
                    goto label_5e8b7e
                
                goto label_5e8a0e
            
            int32_t temp52_1 = ecx_19
            ecx_19 -= 1
            
            if (temp52_1 == 1)
            label_5e8b7e:
                int32_t ebx_416 = ebx_371
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_416 += data_1cd43ec
                    
                    if (ebx_416 s< data_1cd43f4)
                        int32_t temp75_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp75_1 != 1)
                            continue
                    else
                        ebx_371 = ebx_416 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return result
                
                break

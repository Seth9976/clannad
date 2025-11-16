// 函数: sub_5ed8e0
// 地址: 0x5ed8e0
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
                        int32_t eax_2 = eax_1 + *(((ebx_9 - eax_1) << 2) + data_1cd43c8)
                        int32_t ebx_14 = eax_2 + data_1cd4398
                        
                        if (eax_2 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_14 << 2) + data_1c45564)
                        int32_t ebx_17
                        ebx_17.b = *edi_1
                        int32_t eax_4 = data_1cd4380
                        int32_t eax_6
                        eax_6.b = *edi_1
                        *edi_1 = eax_6.b + (*(((eax_4 + *(((ebx_17 - eax_4) << 2) + data_1cd4384)
                            - eax_6) << 2) + edx_1)).b
                        int32_t ebx_25
                        ebx_25.b = *(esi_1 + 1)
                        int32_t eax_8
                        eax_8.b = not.b(ebx_25.b)
                        int32_t eax_9 = eax_8 + *(((ebx_25 - eax_8) << 2) + data_1cd43c8)
                        int32_t ebx_30 = eax_9 + data_1cd439c
                        
                        if (eax_9 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_30 << 2) + data_1c45564)
                        int32_t ebx_33
                        ebx_33.b = edi_1[1]
                        int32_t eax_11 = data_1cd4388
                        int32_t eax_13
                        eax_13.b = edi_1[1]
                        edi_1[1] = eax_13.b + (*(((eax_11
                            + *(((ebx_33 - eax_11) << 2) + data_1cd438c) - eax_13) << 2) + edx_1)).b
                        int32_t ebx_41
                        ebx_41.b = *(esi_1 + 2)
                        int32_t eax_15
                        eax_15.b = not.b(ebx_41.b)
                        int32_t eax_16 = eax_15 + *(((ebx_41 - eax_15) << 2) + data_1cd43c8)
                        int32_t ebx_46 = eax_16 + data_1cd43a0
                        
                        if (eax_16 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_46 << 2) + data_1c45564)
                        int32_t ebx_49
                        ebx_49.b = edi_1[2]
                        int32_t eax_18 = data_1cd4390
                        int32_t eax_20
                        eax_20.b = edi_1[2]
                        result = eax_20 + *(((eax_18 + *(((ebx_49 - eax_18) << 2) + data_1cd4394)
                            - eax_20) << 2) + edx_1)
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
        int32_t ebx_58 = data_1cd4414
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_59
                ebx_59.b = *(esi_4 + 3)
                ebx_59.b = ebx_59.b
                
                if (ebx_59.b != 0)
                    int32_t ebx_64
                    ebx_64.b = (*(*((ebx_59 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_64.b != 0)
                        int32_t edx_2 = *((ebx_64 << 2) + data_1cd4328)
                        int32_t ebx_67
                        ebx_67.b = *esi_4
                        int32_t eax_21
                        eax_21.b = not.b(ebx_67.b)
                        int32_t eax_22 = eax_21 + *(((ebx_67 - eax_21) << 2) + data_1cd43c8)
                        int32_t ebx_72 = eax_22 + data_1cd4398
                        
                        if (eax_22 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_72 << 2) + data_1c45564)
                        int32_t ebx_75
                        ebx_75.b = *edi_4
                        int32_t eax_24 = data_1cd4380
                        int32_t eax_26
                        eax_26.b = *edi_4
                        *edi_4 = eax_26.b + (*(((eax_24 + *(((ebx_75 - eax_24) << 2) + data_1cd4384)
                            - eax_26) << 2) + edx_2)).b
                        int32_t ebx_83
                        ebx_83.b = *(esi_4 + 1)
                        int32_t eax_28
                        eax_28.b = not.b(ebx_83.b)
                        int32_t eax_29 = eax_28 + *(((ebx_83 - eax_28) << 2) + data_1cd43c8)
                        int32_t ebx_88 = eax_29 + data_1cd439c
                        
                        if (eax_29 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_88 << 2) + data_1c45564)
                        int32_t ebx_91
                        ebx_91.b = edi_4[1]
                        int32_t eax_31 = data_1cd4388
                        int32_t eax_33
                        eax_33.b = edi_4[1]
                        edi_4[1] = eax_33.b + (*(((eax_31
                            + *(((ebx_91 - eax_31) << 2) + data_1cd438c) - eax_33) << 2) + edx_2)).b
                        int32_t ebx_99
                        ebx_99.b = *(esi_4 + 2)
                        int32_t eax_35
                        eax_35.b = not.b(ebx_99.b)
                        int32_t eax_36 = eax_35 + *(((ebx_99 - eax_35) << 2) + data_1cd43c8)
                        int32_t ebx_104 = eax_36 + data_1cd43a0
                        
                        if (eax_36 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_104 << 2) + data_1c45564)
                        int32_t ebx_107
                        ebx_107.b = edi_4[2]
                        int32_t eax_38 = data_1cd4390
                        int32_t eax_40
                        eax_40.b = edi_4[2]
                        result = eax_40 + *(((eax_38 + *(((ebx_107 - eax_38) << 2) + data_1cd4394)
                            - eax_40) << 2) + edx_2)
                        edi_4[2] = result.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_58 += data_1cd43f4
            
            if (ebx_58 s>= data_1cd43ec)
                ebx_58 -= data_1cd43ec
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
    int32_t ebx_117 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t i_2
        
        do
            int32_t ebx_118
            ebx_118.b = *(esi_6 + 3)
            ebx_118.b = ebx_118.b
            
            if (ebx_118.b != 0)
                int32_t ebx_123
                ebx_123.b = (*(*((ebx_118 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_123.b != 0)
                    int32_t edx_3 = *((ebx_123 << 2) + data_1cd4328)
                    int32_t ebx_126
                    ebx_126.b = *esi_6
                    int32_t eax_41
                    eax_41.b = not.b(ebx_126.b)
                    int32_t eax_42 = eax_41 + *(((ebx_126 - eax_41) << 2) + data_1cd43c8)
                    int32_t ebx_131 = eax_42 + data_1cd4398
                    
                    if (eax_42 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_131 << 2) + data_1c45564)
                    int32_t ebx_134
                    ebx_134.b = *edi_7
                    int32_t eax_44 = data_1cd4380
                    int32_t eax_46
                    eax_46.b = *edi_7
                    *edi_7 = eax_46.b + (*(((eax_44 + *(((ebx_134 - eax_44) << 2) + data_1cd4384)
                        - eax_46) << 2) + edx_3)).b
                    int32_t ebx_142
                    ebx_142.b = *(esi_6 + 1)
                    int32_t eax_48
                    eax_48.b = not.b(ebx_142.b)
                    int32_t eax_49 = eax_48 + *(((ebx_142 - eax_48) << 2) + data_1cd43c8)
                    int32_t ebx_147 = eax_49 + data_1cd439c
                    
                    if (eax_49 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_147 << 2) + data_1c45564)
                    int32_t ebx_150
                    ebx_150.b = edi_7[1]
                    int32_t eax_51 = data_1cd4388
                    int32_t eax_53
                    eax_53.b = edi_7[1]
                    edi_7[1] = eax_53.b + (*(((eax_51 + *(((ebx_150 - eax_51) << 2) + data_1cd438c)
                        - eax_53) << 2) + edx_3)).b
                    int32_t ebx_158
                    ebx_158.b = *(esi_6 + 2)
                    int32_t eax_55
                    eax_55.b = not.b(ebx_158.b)
                    int32_t eax_56 = eax_55 + *(((ebx_158 - eax_55) << 2) + data_1cd43c8)
                    int32_t ebx_163 = eax_56 + data_1cd43a0
                    
                    if (eax_56 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_163 << 2) + data_1c45564)
                    int32_t ebx_166
                    ebx_166.b = edi_7[2]
                    int32_t eax_58 = data_1cd4390
                    int32_t eax_60
                    eax_60.b = edi_7[2]
                    result = eax_60 + *(((eax_58 + *(((ebx_166 - eax_58) << 2) + data_1cd4394)
                        - eax_60) << 2) + edx_3)
                    edi_7[2] = result.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_174 = ebx_117
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_174 += data_1cd43ec
            
            if (ebx_174 s< data_1cd43f4)
                int32_t temp60_1 = ecx_6
                ecx_6 -= 1
                
                if (temp60_1 != 1)
                    continue
            else
                ebx_117 = ebx_174 - data_1cd43f4
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
                int32_t ebx_176
                ebx_176.b = *(esi_8 + 3)
                ebx_176.b = ebx_176.b
                
                if (ebx_176.b != 0)
                    int32_t ebx_181
                    ebx_181.b = (*(*((ebx_176 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_181.b != 0)
                        int32_t edx_5 = *((ebx_181 << 2) + data_1cd4328)
                        int32_t ebx_184
                        ebx_184.b = *esi_8
                        int32_t eax_61
                        eax_61.b = not.b(ebx_184.b)
                        int32_t eax_62 = eax_61 + *(((ebx_184 - eax_61) << 2) + data_1cd43c8)
                        int32_t ebx_189 = eax_62 + data_1cd4398
                        
                        if (eax_62 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_189 << 2) + data_1c45564)
                        int32_t ebx_192
                        ebx_192.b = *edi_10
                        int32_t eax_64 = data_1cd4380
                        int32_t eax_66
                        eax_66.b = *edi_10
                        *edi_10 = eax_66.b + (*(((eax_64
                            + *(((ebx_192 - eax_64) << 2) + data_1cd4384) - eax_66) << 2) + edx_5)).b
                        int32_t ebx_200
                        ebx_200.b = *(esi_8 + 1)
                        int32_t eax_68
                        eax_68.b = not.b(ebx_200.b)
                        int32_t eax_69 = eax_68 + *(((ebx_200 - eax_68) << 2) + data_1cd43c8)
                        int32_t ebx_205 = eax_69 + data_1cd439c
                        
                        if (eax_69 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_205 << 2) + data_1c45564)
                        int32_t ebx_208
                        ebx_208.b = edi_10[1]
                        int32_t eax_71 = data_1cd4388
                        int32_t eax_73
                        eax_73.b = edi_10[1]
                        edi_10[1] = eax_73.b + (*(((eax_71
                            + *(((ebx_208 - eax_71) << 2) + data_1cd438c) - eax_73) << 2) + edx_5)).b
                        int32_t ebx_216
                        ebx_216.b = *(esi_8 + 2)
                        int32_t eax_75
                        eax_75.b = not.b(ebx_216.b)
                        int32_t eax_76 = eax_75 + *(((ebx_216 - eax_75) << 2) + data_1cd43c8)
                        int32_t ebx_221 = eax_76 + data_1cd43a0
                        
                        if (eax_76 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_221 << 2) + data_1c45564)
                        int32_t ebx_224
                        ebx_224.b = edi_10[2]
                        int32_t eax_78 = data_1cd4390
                        int32_t eax_80
                        eax_80.b = edi_10[2]
                        result = eax_80 + *(((eax_78 + *(((ebx_224 - eax_78) << 2) + data_1cd4394)
                            - eax_80) << 2) + edx_5)
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
        int32_t ebx_233 = data_1cd4414
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_234
                ebx_234.b = *(esi_11 + 3)
                ebx_234.b = ebx_234.b
                
                if (ebx_234.b != 0)
                    int32_t ebx_239
                    ebx_239.b = (*(*((ebx_234 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_239.b != 0)
                        int32_t edx_8 = *((ebx_239 << 2) + data_1cd4328)
                        int32_t ebx_242
                        ebx_242.b = *esi_11
                        int32_t eax_81
                        eax_81.b = not.b(ebx_242.b)
                        int32_t eax_82 = eax_81 + *(((ebx_242 - eax_81) << 2) + data_1cd43c8)
                        int32_t ebx_247 = eax_82 + data_1cd4398
                        
                        if (eax_82 + data_1cd4398 s< 0)
                            data_1cd4380 = 0
                        else
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = *((ebx_247 << 2) + data_1c45564)
                        int32_t ebx_250
                        ebx_250.b = *edi_13
                        int32_t eax_84 = data_1cd4380
                        int32_t eax_86
                        eax_86.b = *edi_13
                        *edi_13 = eax_86.b + (*(((eax_84
                            + *(((ebx_250 - eax_84) << 2) + data_1cd4384) - eax_86) << 2) + edx_8)).b
                        int32_t ebx_258
                        ebx_258.b = *(esi_11 + 1)
                        int32_t eax_88
                        eax_88.b = not.b(ebx_258.b)
                        int32_t eax_89 = eax_88 + *(((ebx_258 - eax_88) << 2) + data_1cd43c8)
                        int32_t ebx_263 = eax_89 + data_1cd439c
                        
                        if (eax_89 + data_1cd439c s< 0)
                            data_1cd4388 = 0
                        else
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = *((ebx_263 << 2) + data_1c45564)
                        int32_t ebx_266
                        ebx_266.b = edi_13[1]
                        int32_t eax_91 = data_1cd4388
                        int32_t eax_93
                        eax_93.b = edi_13[1]
                        edi_13[1] = eax_93.b + (*(((eax_91
                            + *(((ebx_266 - eax_91) << 2) + data_1cd438c) - eax_93) << 2) + edx_8)).b
                        int32_t ebx_274
                        ebx_274.b = *(esi_11 + 2)
                        int32_t eax_95
                        eax_95.b = not.b(ebx_274.b)
                        int32_t eax_96 = eax_95 + *(((ebx_274 - eax_95) << 2) + data_1cd43c8)
                        int32_t ebx_279 = eax_96 + data_1cd43a0
                        
                        if (eax_96 + data_1cd43a0 s< 0)
                            data_1cd4390 = 0
                        else
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = *((ebx_279 << 2) + data_1c45564)
                        int32_t ebx_282
                        ebx_282.b = edi_13[2]
                        int32_t eax_98 = data_1cd4390
                        int32_t eax_100
                        eax_100.b = edi_13[2]
                        result = eax_100 + *(((eax_98 + *(((ebx_282 - eax_98) << 2) + data_1cd4394)
                            - eax_100) << 2) + edx_8)
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
            ebx_233 += data_1cd43f4
            
            if (ebx_233 s>= data_1cd43ec)
                ebx_233 -= data_1cd43ec
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
    int32_t ebx_292 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t i_5
        
        do
            int32_t ebx_293
            ebx_293.b = *(esi_13 + 3)
            ebx_293.b = ebx_293.b
            
            if (ebx_293.b != 0)
                int32_t ebx_298
                ebx_298.b = (*(*((ebx_293 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_298.b != 0)
                    int32_t edx_11 = *((ebx_298 << 2) + data_1cd4328)
                    int32_t ebx_301
                    ebx_301.b = *esi_13
                    int32_t eax_101
                    eax_101.b = not.b(ebx_301.b)
                    int32_t eax_102 = eax_101 + *(((ebx_301 - eax_101) << 2) + data_1cd43c8)
                    int32_t ebx_306 = eax_102 + data_1cd4398
                    
                    if (eax_102 + data_1cd4398 s< 0)
                        data_1cd4380 = 0
                    else
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = *((ebx_306 << 2) + data_1c45564)
                    int32_t ebx_309
                    ebx_309.b = *edi_16
                    int32_t eax_104 = data_1cd4380
                    int32_t eax_106
                    eax_106.b = *edi_16
                    *edi_16 = eax_106.b + (*(((eax_104
                        + *(((ebx_309 - eax_104) << 2) + data_1cd4384) - eax_106) << 2) + edx_11)).b
                    int32_t ebx_317
                    ebx_317.b = *(esi_13 + 1)
                    int32_t eax_108
                    eax_108.b = not.b(ebx_317.b)
                    int32_t eax_109 = eax_108 + *(((ebx_317 - eax_108) << 2) + data_1cd43c8)
                    int32_t ebx_322 = eax_109 + data_1cd439c
                    
                    if (eax_109 + data_1cd439c s< 0)
                        data_1cd4388 = 0
                    else
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = *((ebx_322 << 2) + data_1c45564)
                    int32_t ebx_325
                    ebx_325.b = edi_16[1]
                    int32_t eax_111 = data_1cd4388
                    int32_t eax_113
                    eax_113.b = edi_16[1]
                    edi_16[1] = eax_113.b + (*(((eax_111
                        + *(((ebx_325 - eax_111) << 2) + data_1cd438c) - eax_113) << 2) + edx_11)).b
                    int32_t ebx_333
                    ebx_333.b = *(esi_13 + 2)
                    int32_t eax_115
                    eax_115.b = not.b(ebx_333.b)
                    int32_t eax_116 = eax_115 + *(((ebx_333 - eax_115) << 2) + data_1cd43c8)
                    int32_t ebx_338 = eax_116 + data_1cd43a0
                    
                    if (eax_116 + data_1cd43a0 s< 0)
                        data_1cd4390 = 0
                    else
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = *((ebx_338 << 2) + data_1c45564)
                    int32_t ebx_341
                    ebx_341.b = edi_16[2]
                    int32_t eax_118 = data_1cd4390
                    int32_t eax_120
                    eax_120.b = edi_16[2]
                    result = eax_120 + *(((eax_118 + *(((ebx_341 - eax_118) << 2) + data_1cd4394)
                        - eax_120) << 2) + edx_11)
                    edi_16[2] = result.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_349 = ebx_292
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_349 += data_1cd43ec
            
            if (ebx_349 s< data_1cd43f4)
                int32_t temp74_1 = ecx_11
                ecx_11 -= 1
                
                if (temp74_1 != 1)
                    continue
            else
                ebx_292 = ebx_349 - data_1cd43f4
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
    label_5ed2f7:
        int32_t ebx_351
        ebx_351.b = *(esi_15 + 3)
        ebx_351.b = ebx_351.b
        
        if (ebx_351.b != 0)
            int32_t ebx_356
            ebx_356.b = (*(*((ebx_351 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_356.b != 0)
                int32_t edx_14 = *((ebx_356 << 2) + data_1cd4328)
                int32_t ebx_359
                ebx_359.b = *esi_15
                int32_t eax_121
                eax_121.b = not.b(ebx_359.b)
                int32_t eax_122 = eax_121 + *(((ebx_359 - eax_121) << 2) + data_1cd43c8)
                int32_t ebx_364 = eax_122 + data_1cd4398
                
                if (eax_122 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_364 << 2) + data_1c45564)
                int32_t ebx_367
                ebx_367.b = *edi_19
                int32_t eax_124 = data_1cd4380
                int32_t eax_126
                eax_126.b = *edi_19
                *edi_19 = eax_126.b + (*(((eax_124 + *(((ebx_367 - eax_124) << 2) + data_1cd4384)
                    - eax_126) << 2) + edx_14)).b
                int32_t ebx_375
                ebx_375.b = *(esi_15 + 1)
                int32_t eax_128
                eax_128.b = not.b(ebx_375.b)
                int32_t eax_129 = eax_128 + *(((ebx_375 - eax_128) << 2) + data_1cd43c8)
                int32_t ebx_380 = eax_129 + data_1cd439c
                
                if (eax_129 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_380 << 2) + data_1c45564)
                int32_t ebx_383
                ebx_383.b = edi_19[1]
                int32_t eax_131 = data_1cd4388
                int32_t eax_133
                eax_133.b = edi_19[1]
                edi_19[1] = eax_133.b + (*(((eax_131 + *(((ebx_383 - eax_131) << 2) + data_1cd438c)
                    - eax_133) << 2) + edx_14)).b
                int32_t ebx_391
                ebx_391.b = *(esi_15 + 2)
                int32_t eax_135
                eax_135.b = not.b(ebx_391.b)
                int32_t eax_136 = eax_135 + *(((ebx_391 - eax_135) << 2) + data_1cd43c8)
                int32_t ebx_396 = eax_136 + data_1cd43a0
                
                if (eax_136 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_396 << 2) + data_1c45564)
                int32_t ebx_399
                ebx_399.b = edi_19[2]
                int32_t eax_138 = data_1cd4390
                int32_t eax_140
                eax_140.b = edi_19[2]
                result = eax_140 + *(((eax_138 + *(((ebx_399 - eax_138) << 2) + data_1cd4394)
                    - eax_140) << 2) + edx_14)
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
                    goto label_5ed4a3
                
                goto label_5ed2f7
            
            int32_t temp23_1 = ecx_13
            ecx_13 -= 1
            
            if (temp23_1 == 1)
            label_5ed4a3:
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
    int32_t ebx_408 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5ed4ee:
        int32_t ebx_409
        ebx_409.b = *(esi_18 + 3)
        ebx_409.b = ebx_409.b
        
        if (ebx_409.b != 0)
            int32_t ebx_414
            ebx_414.b = (*(*((ebx_409 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_414.b != 0)
                int32_t edx_17 = *((ebx_414 << 2) + data_1cd4328)
                int32_t ebx_417
                ebx_417.b = *esi_18
                int32_t eax_141
                eax_141.b = not.b(ebx_417.b)
                int32_t eax_142 = eax_141 + *(((ebx_417 - eax_141) << 2) + data_1cd43c8)
                int32_t ebx_422 = eax_142 + data_1cd4398
                
                if (eax_142 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_422 << 2) + data_1c45564)
                int32_t ebx_425
                ebx_425.b = *edi_22
                int32_t eax_144 = data_1cd4380
                int32_t eax_146
                eax_146.b = *edi_22
                *edi_22 = eax_146.b + (*(((eax_144 + *(((ebx_425 - eax_144) << 2) + data_1cd4384)
                    - eax_146) << 2) + edx_17)).b
                int32_t ebx_433
                ebx_433.b = *(esi_18 + 1)
                int32_t eax_148
                eax_148.b = not.b(ebx_433.b)
                int32_t eax_149 = eax_148 + *(((ebx_433 - eax_148) << 2) + data_1cd43c8)
                int32_t ebx_438 = eax_149 + data_1cd439c
                
                if (eax_149 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_438 << 2) + data_1c45564)
                int32_t ebx_441
                ebx_441.b = edi_22[1]
                int32_t eax_151 = data_1cd4388
                int32_t eax_153
                eax_153.b = edi_22[1]
                edi_22[1] = eax_153.b + (*(((eax_151 + *(((ebx_441 - eax_151) << 2) + data_1cd438c)
                    - eax_153) << 2) + edx_17)).b
                int32_t ebx_449
                ebx_449.b = *(esi_18 + 2)
                int32_t eax_155
                eax_155.b = not.b(ebx_449.b)
                int32_t eax_156 = eax_155 + *(((ebx_449 - eax_155) << 2) + data_1cd43c8)
                int32_t ebx_454 = eax_156 + data_1cd43a0
                
                if (eax_156 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_454 << 2) + data_1c45564)
                int32_t ebx_457
                ebx_457.b = edi_22[2]
                int32_t eax_158 = data_1cd4390
                int32_t eax_160
                eax_160.b = edi_22[2]
                result = eax_160 + *(((eax_158 + *(((ebx_457 - eax_158) << 2) + data_1cd4394)
                    - eax_160) << 2) + edx_17)
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
                    goto label_5ed699
                
                goto label_5ed4ee
            
            int32_t temp39_1 = ecx_16
            ecx_16 -= 1
            
            if (temp39_1 == 1)
            label_5ed699:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_408 += data_1cd43f4
                
                if (ebx_408 s>= data_1cd43ec)
                    ebx_408 -= data_1cd43ec
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
    int32_t ebx_467 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5ed6fe:
        int32_t ebx_468
        ebx_468.b = *(esi_20 + 3)
        ebx_468.b = ebx_468.b
        
        if (ebx_468.b != 0)
            int32_t ebx_473
            ebx_473.b = (*(*((ebx_468 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_473.b != 0)
                int32_t edx_20 = *((ebx_473 << 2) + data_1cd4328)
                int32_t ebx_476
                ebx_476.b = *esi_20
                int32_t eax_161
                eax_161.b = not.b(ebx_476.b)
                int32_t eax_162 = eax_161 + *(((ebx_476 - eax_161) << 2) + data_1cd43c8)
                int32_t ebx_481 = eax_162 + data_1cd4398
                
                if (eax_162 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_481 << 2) + data_1c45564)
                int32_t ebx_484
                ebx_484.b = *edi_25
                int32_t eax_164 = data_1cd4380
                int32_t eax_166
                eax_166.b = *edi_25
                *edi_25 = eax_166.b + (*(((eax_164 + *(((ebx_484 - eax_164) << 2) + data_1cd4384)
                    - eax_166) << 2) + edx_20)).b
                int32_t ebx_492
                ebx_492.b = *(esi_20 + 1)
                int32_t eax_168
                eax_168.b = not.b(ebx_492.b)
                int32_t eax_169 = eax_168 + *(((ebx_492 - eax_168) << 2) + data_1cd43c8)
                int32_t ebx_497 = eax_169 + data_1cd439c
                
                if (eax_169 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_497 << 2) + data_1c45564)
                int32_t ebx_500
                ebx_500.b = edi_25[1]
                int32_t eax_171 = data_1cd4388
                int32_t eax_173
                eax_173.b = edi_25[1]
                edi_25[1] = eax_173.b + (*(((eax_171 + *(((ebx_500 - eax_171) << 2) + data_1cd438c)
                    - eax_173) << 2) + edx_20)).b
                int32_t ebx_508
                ebx_508.b = *(esi_20 + 2)
                int32_t eax_175
                eax_175.b = not.b(ebx_508.b)
                int32_t eax_176 = eax_175 + *(((ebx_508 - eax_175) << 2) + data_1cd43c8)
                int32_t ebx_513 = eax_176 + data_1cd43a0
                
                if (eax_176 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_513 << 2) + data_1c45564)
                int32_t ebx_516
                ebx_516.b = edi_25[2]
                int32_t eax_178 = data_1cd4390
                int32_t eax_180
                eax_180.b = edi_25[2]
                result = eax_180 + *(((eax_178 + *(((ebx_516 - eax_178) << 2) + data_1cd4394)
                    - eax_180) << 2) + edx_20)
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
                    goto label_5ed8a7
                
                goto label_5ed6fe
            
            int32_t temp52_1 = ecx_19
            ecx_19 -= 1
            
            if (temp52_1 == 1)
            label_5ed8a7:
                int32_t ebx_524 = ebx_467
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_524 += data_1cd43ec
                    
                    if (ebx_524 s< data_1cd43f4)
                        int32_t temp75_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp75_1 != 1)
                            continue
                    else
                        ebx_467 = ebx_524 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return result
                
                break

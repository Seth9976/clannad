// 函数: sub_5ec6c0
// 地址: 0x5ec6c0
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
        char eax_22
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                int32_t edx_1 = data_1cd43a4
                int32_t ebx_1
                ebx_1.b = *esi_1
                int32_t eax_2
                eax_2.b = not.b(ebx_1.b)
                int32_t eax_3 = eax_2 + *(((ebx_1 - eax_2) << 2) + data_1cd43c8)
                int32_t ebx_6 = eax_3 + data_1cd4398
                
                if (eax_3 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_6 << 2) + data_1c45564)
                int32_t ebx_9
                ebx_9.b = *edi_1
                int32_t eax_5 = data_1cd4380
                int32_t eax_7
                eax_7.b = *edi_1
                *edi_1 = eax_7.b +
                    (*(((eax_5 + *(((ebx_9 - eax_5) << 2) + data_1cd4384) - eax_7) << 2) + edx_1)).b
                int32_t ebx_17
                ebx_17.b = esi_1[1]
                int32_t eax_9
                eax_9.b = not.b(ebx_17.b)
                int32_t eax_10 = eax_9 + *(((ebx_17 - eax_9) << 2) + data_1cd43c8)
                int32_t ebx_22 = eax_10 + data_1cd439c
                
                if (eax_10 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_22 << 2) + data_1c45564)
                int32_t ebx_25
                ebx_25.b = edi_1[1]
                int32_t eax_12 = data_1cd4388
                int32_t eax_14
                eax_14.b = edi_1[1]
                edi_1[1] = eax_14.b + (*
                    (((eax_12 + *(((ebx_25 - eax_12) << 2) + data_1cd438c) - eax_14) << 2) + edx_1)).b
                int32_t ebx_33
                ebx_33.b = esi_1[2]
                int32_t eax_16
                eax_16.b = not.b(ebx_33.b)
                int32_t eax_17 = eax_16 + *(((ebx_33 - eax_16) << 2) + data_1cd43c8)
                int32_t ebx_38 = eax_17 + data_1cd43a0
                
                if (eax_17 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_38 << 2) + data_1c45564)
                int32_t ebx_41
                ebx_41.b = edi_1[2]
                int32_t eax_19 = data_1cd4390
                int32_t eax_21
                eax_21.b = edi_1[2]
                eax_22 = eax_21.b + (*
                    (((eax_19 + *(((ebx_41 - eax_19) << 2) + data_1cd4394) - eax_21) << 2) + edx_1)).b
                edi_1[2] = eax_22
                esi_1 = &esi_1[4]
                edi_1 = &edi_1[4]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp55_1 = ecx_2
            ecx_2 -= 1
            
            if (temp55_1 == 1)
                break
            
            esi_1 = &var_14_1[data_1cd4400]
            edi_1 = &var_18_1[data_1cd43fc]
        
        return eax_22
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        char* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_50 = data_1cd4414
        char eax_43
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t edx_2 = data_1cd43a4
                int32_t ebx_51
                ebx_51.b = *esi_4
                int32_t eax_23
                eax_23.b = not.b(ebx_51.b)
                int32_t eax_24 = eax_23 + *(((ebx_51 - eax_23) << 2) + data_1cd43c8)
                int32_t ebx_56 = eax_24 + data_1cd4398
                
                if (eax_24 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_56 << 2) + data_1c45564)
                int32_t ebx_59
                ebx_59.b = *edi_4
                int32_t eax_26 = data_1cd4380
                int32_t eax_28
                eax_28.b = *edi_4
                *edi_4 = eax_28.b + (*
                    (((eax_26 + *(((ebx_59 - eax_26) << 2) + data_1cd4384) - eax_28) << 2) + edx_2)).b
                int32_t ebx_67
                ebx_67.b = esi_4[1]
                int32_t eax_30
                eax_30.b = not.b(ebx_67.b)
                int32_t eax_31 = eax_30 + *(((ebx_67 - eax_30) << 2) + data_1cd43c8)
                int32_t ebx_72 = eax_31 + data_1cd439c
                
                if (eax_31 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_72 << 2) + data_1c45564)
                int32_t ebx_75
                ebx_75.b = edi_4[1]
                int32_t eax_33 = data_1cd4388
                int32_t eax_35
                eax_35.b = edi_4[1]
                edi_4[1] = eax_35.b + (*
                    (((eax_33 + *(((ebx_75 - eax_33) << 2) + data_1cd438c) - eax_35) << 2) + edx_2)).b
                int32_t ebx_83
                ebx_83.b = esi_4[2]
                int32_t eax_37
                eax_37.b = not.b(ebx_83.b)
                int32_t eax_38 = eax_37 + *(((ebx_83 - eax_37) << 2) + data_1cd43c8)
                int32_t ebx_88 = eax_38 + data_1cd43a0
                
                if (eax_38 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_88 << 2) + data_1c45564)
                int32_t ebx_91
                ebx_91.b = edi_4[2]
                int32_t eax_40 = data_1cd4390
                int32_t eax_42
                eax_42.b = edi_4[2]
                eax_43 = eax_42.b + (*
                    (((eax_40 + *(((ebx_91 - eax_40) << 2) + data_1cd4394) - eax_42) << 2) + edx_2)).b
                edi_4[2] = eax_43
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_50 += data_1cd43f4
            
            if (ebx_50 s>= data_1cd43ec)
                ebx_50 -= data_1cd43ec
                esi_4 = &esi_4[data_1cd4400]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_43
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    char* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_101 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        char eax_64
        int32_t i_2
        
        do
            int32_t edx_3 = data_1cd43a4
            int32_t ebx_102
            ebx_102.b = *esi_6
            int32_t eax_44
            eax_44.b = not.b(ebx_102.b)
            int32_t eax_45 = eax_44 + *(((ebx_102 - eax_44) << 2) + data_1cd43c8)
            int32_t ebx_107 = eax_45 + data_1cd4398
            
            if (eax_45 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_107 << 2) + data_1c45564)
            int32_t ebx_110
            ebx_110.b = *edi_7
            int32_t eax_47 = data_1cd4380
            int32_t eax_49
            eax_49.b = *edi_7
            *edi_7 = eax_49.b + (
                *(((eax_47 + *(((ebx_110 - eax_47) << 2) + data_1cd4384) - eax_49) << 2) + edx_3)).b
            int32_t ebx_118
            ebx_118.b = esi_6[1]
            int32_t eax_51
            eax_51.b = not.b(ebx_118.b)
            int32_t eax_52 = eax_51 + *(((ebx_118 - eax_51) << 2) + data_1cd43c8)
            int32_t ebx_123 = eax_52 + data_1cd439c
            
            if (eax_52 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_123 << 2) + data_1c45564)
            int32_t ebx_126
            ebx_126.b = edi_7[1]
            int32_t eax_54 = data_1cd4388
            int32_t eax_56
            eax_56.b = edi_7[1]
            edi_7[1] = eax_56.b + (
                *(((eax_54 + *(((ebx_126 - eax_54) << 2) + data_1cd438c) - eax_56) << 2) + edx_3)).b
            int32_t ebx_134
            ebx_134.b = esi_6[2]
            int32_t eax_58
            eax_58.b = not.b(ebx_134.b)
            int32_t eax_59 = eax_58 + *(((ebx_134 - eax_58) << 2) + data_1cd43c8)
            int32_t ebx_139 = eax_59 + data_1cd43a0
            
            if (eax_59 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_139 << 2) + data_1c45564)
            int32_t ebx_142
            ebx_142.b = edi_7[2]
            int32_t eax_61 = data_1cd4390
            int32_t eax_63
            eax_63.b = edi_7[2]
            eax_64 = eax_63.b + (
                *(((eax_61 + *(((ebx_142 - eax_61) << 2) + data_1cd4394) - eax_63) << 2) + edx_3)).b
            edi_7[2] = eax_64
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_150 = ebx_101
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_150 += data_1cd43ec
            
            if (ebx_150 s< data_1cd43f4)
                int32_t temp70_1 = ecx_6
                ecx_6 -= 1
                
                if (temp70_1 != 1)
                    continue
            else
                ebx_101 = ebx_150 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_64
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        char* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        char eax_85
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t edx_5 = data_1cd43a4
                int32_t ebx_152
                ebx_152.b = *esi_8
                int32_t eax_65
                eax_65.b = not.b(ebx_152.b)
                int32_t eax_66 = eax_65 + *(((ebx_152 - eax_65) << 2) + data_1cd43c8)
                int32_t ebx_157 = eax_66 + data_1cd4398
                
                if (eax_66 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_157 << 2) + data_1c45564)
                int32_t ebx_160
                ebx_160.b = *edi_10
                int32_t eax_68 = data_1cd4380
                int32_t eax_70
                eax_70.b = *edi_10
                *edi_10 = eax_70.b + (*(((eax_68 + *(((ebx_160 - eax_68) << 2) + data_1cd4384)
                    - eax_70) << 2) + edx_5)).b
                int32_t ebx_168
                ebx_168.b = esi_8[1]
                int32_t eax_72
                eax_72.b = not.b(ebx_168.b)
                int32_t eax_73 = eax_72 + *(((ebx_168 - eax_72) << 2) + data_1cd43c8)
                int32_t ebx_173 = eax_73 + data_1cd439c
                
                if (eax_73 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_173 << 2) + data_1c45564)
                int32_t ebx_176
                ebx_176.b = edi_10[1]
                int32_t eax_75 = data_1cd4388
                int32_t eax_77
                eax_77.b = edi_10[1]
                edi_10[1] = eax_77.b + (*(((eax_75 + *(((ebx_176 - eax_75) << 2) + data_1cd438c)
                    - eax_77) << 2) + edx_5)).b
                int32_t ebx_184
                ebx_184.b = esi_8[2]
                int32_t eax_79
                eax_79.b = not.b(ebx_184.b)
                int32_t eax_80 = eax_79 + *(((ebx_184 - eax_79) << 2) + data_1cd43c8)
                int32_t ebx_189 = eax_80 + data_1cd43a0
                
                if (eax_80 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_189 << 2) + data_1c45564)
                int32_t ebx_192
                ebx_192.b = edi_10[2]
                int32_t eax_82 = data_1cd4390
                int32_t eax_84
                eax_84.b = edi_10[2]
                eax_85 = eax_84.b + (*(((eax_82 + *(((ebx_192 - eax_82) << 2) + data_1cd4394)
                    - eax_84) << 2) + edx_5)).b
                edi_10[2] = eax_85
                edi_10 = &edi_10[4]
                edx_4 += data_1cd43f8
                
                if (edx_4 s>= data_1cd43f0)
                    edx_4 -= data_1cd43f0
                    esi_8 = &esi_8[4]
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp60_1 = ecx_7
            ecx_7 -= 1
            
            if (temp60_1 == 1)
                break
            
            esi_8 = &var_14_4[data_1cd4400]
            edi_10 = &var_18_4[data_1cd43fc]
        
        return eax_85
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        char* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_201 = data_1cd4414
        char eax_106
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t edx_8 = data_1cd43a4
                int32_t ebx_202
                ebx_202.b = *esi_11
                int32_t eax_86
                eax_86.b = not.b(ebx_202.b)
                int32_t eax_87 = eax_86 + *(((ebx_202 - eax_86) << 2) + data_1cd43c8)
                int32_t ebx_207 = eax_87 + data_1cd4398
                
                if (eax_87 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_207 << 2) + data_1c45564)
                int32_t ebx_210
                ebx_210.b = *edi_13
                int32_t eax_89 = data_1cd4380
                int32_t eax_91
                eax_91.b = *edi_13
                *edi_13 = eax_91.b + (*(((eax_89 + *(((ebx_210 - eax_89) << 2) + data_1cd4384)
                    - eax_91) << 2) + edx_8)).b
                int32_t ebx_218
                ebx_218.b = esi_11[1]
                int32_t eax_93
                eax_93.b = not.b(ebx_218.b)
                int32_t eax_94 = eax_93 + *(((ebx_218 - eax_93) << 2) + data_1cd43c8)
                int32_t ebx_223 = eax_94 + data_1cd439c
                
                if (eax_94 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_223 << 2) + data_1c45564)
                int32_t ebx_226
                ebx_226.b = edi_13[1]
                int32_t eax_96 = data_1cd4388
                int32_t eax_98
                eax_98.b = edi_13[1]
                edi_13[1] = eax_98.b + (*(((eax_96 + *(((ebx_226 - eax_96) << 2) + data_1cd438c)
                    - eax_98) << 2) + edx_8)).b
                int32_t ebx_234
                ebx_234.b = esi_11[2]
                int32_t eax_100
                eax_100.b = not.b(ebx_234.b)
                int32_t eax_101 = eax_100 + *(((ebx_234 - eax_100) << 2) + data_1cd43c8)
                int32_t ebx_239 = eax_101 + data_1cd43a0
                
                if (eax_101 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_239 << 2) + data_1c45564)
                int32_t ebx_242
                ebx_242.b = edi_13[2]
                int32_t eax_103 = data_1cd4390
                int32_t eax_105
                eax_105.b = edi_13[2]
                eax_106 = eax_105.b + (*(((eax_103 + *(((ebx_242 - eax_103) << 2) + data_1cd4394)
                    - eax_105) << 2) + edx_8)).b
                edi_13[2] = eax_106
                edi_13 = &edi_13[4]
                edx_7 += data_1cd43f8
                
                if (edx_7 s>= data_1cd43f0)
                    edx_7 -= data_1cd43f0
                    esi_11 = &esi_11[4]
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_11 = var_14_5
            edi_13 = &var_18_5[data_1cd43fc]
            ebx_201 += data_1cd43f4
            
            if (ebx_201 s>= data_1cd43ec)
                ebx_201 -= data_1cd43ec
                esi_11 = &esi_11[data_1cd4400]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_106
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    char* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_252 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        char eax_127
        int32_t i_5
        
        do
            int32_t edx_11 = data_1cd43a4
            int32_t ebx_253
            ebx_253.b = *esi_13
            int32_t eax_107
            eax_107.b = not.b(ebx_253.b)
            int32_t eax_108 = eax_107 + *(((ebx_253 - eax_107) << 2) + data_1cd43c8)
            int32_t ebx_258 = eax_108 + data_1cd4398
            
            if (eax_108 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_258 << 2) + data_1c45564)
            int32_t ebx_261
            ebx_261.b = *edi_16
            int32_t eax_110 = data_1cd4380
            int32_t eax_112
            eax_112.b = *edi_16
            *edi_16 = eax_112.b + (*(((eax_110 + *(((ebx_261 - eax_110) << 2) + data_1cd4384)
                - eax_112) << 2) + edx_11)).b
            int32_t ebx_269
            ebx_269.b = esi_13[1]
            int32_t eax_114
            eax_114.b = not.b(ebx_269.b)
            int32_t eax_115 = eax_114 + *(((ebx_269 - eax_114) << 2) + data_1cd43c8)
            int32_t ebx_274 = eax_115 + data_1cd439c
            
            if (eax_115 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_274 << 2) + data_1c45564)
            int32_t ebx_277
            ebx_277.b = edi_16[1]
            int32_t eax_117 = data_1cd4388
            int32_t eax_119
            eax_119.b = edi_16[1]
            edi_16[1] = eax_119.b + (*(((eax_117 + *(((ebx_277 - eax_117) << 2) + data_1cd438c)
                - eax_119) << 2) + edx_11)).b
            int32_t ebx_285
            ebx_285.b = esi_13[2]
            int32_t eax_121
            eax_121.b = not.b(ebx_285.b)
            int32_t eax_122 = eax_121 + *(((ebx_285 - eax_121) << 2) + data_1cd43c8)
            int32_t ebx_290 = eax_122 + data_1cd43a0
            
            if (eax_122 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_290 << 2) + data_1c45564)
            int32_t ebx_293
            ebx_293.b = edi_16[2]
            int32_t eax_124 = data_1cd4390
            int32_t eax_126
            eax_126.b = edi_16[2]
            eax_127 = eax_126.b + (*(((eax_124 + *(((ebx_293 - eax_124) << 2) + data_1cd4394)
                - eax_126) << 2) + edx_11)).b
            edi_16[2] = eax_127
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_301 = ebx_252
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_301 += data_1cd43ec
            
            if (ebx_301 s< data_1cd43f4)
                int32_t temp74_1 = ecx_11
                ecx_11 -= 1
                
                if (temp74_1 != 1)
                    continue
            else
                ebx_252 = ebx_301 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_127
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
        int32_t edx_13 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5ec165:
        int32_t edx_14 = data_1cd43a4
        int32_t ebx_303
        ebx_303.b = *esi_15
        int32_t eax_128
        eax_128.b = not.b(ebx_303.b)
        int32_t eax_129 = eax_128 + *(((ebx_303 - eax_128) << 2) + data_1cd43c8)
        int32_t ebx_308 = eax_129 + data_1cd4398
        
        if (eax_129 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_308 << 2) + data_1c45564)
        int32_t ebx_311
        ebx_311.b = *edi_19
        int32_t eax_131 = data_1cd4380
        int32_t eax_133
        eax_133.b = *edi_19
        *edi_19 = eax_133.b + (
            *(((eax_131 + *(((ebx_311 - eax_131) << 2) + data_1cd4384) - eax_133) << 2) + edx_14)).b
        int32_t ebx_319
        ebx_319.b = esi_15[1]
        int32_t eax_135
        eax_135.b = not.b(ebx_319.b)
        int32_t eax_136 = eax_135 + *(((ebx_319 - eax_135) << 2) + data_1cd43c8)
        int32_t ebx_324 = eax_136 + data_1cd439c
        
        if (eax_136 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_324 << 2) + data_1c45564)
        int32_t ebx_327
        ebx_327.b = edi_19[1]
        int32_t eax_138 = data_1cd4388
        int32_t eax_140
        eax_140.b = edi_19[1]
        edi_19[1] = eax_140.b + (
            *(((eax_138 + *(((ebx_327 - eax_138) << 2) + data_1cd438c) - eax_140) << 2) + edx_14)).b
        int32_t ebx_335
        ebx_335.b = esi_15[2]
        int32_t eax_142
        eax_142.b = not.b(ebx_335.b)
        int32_t eax_143 = eax_142 + *(((ebx_335 - eax_142) << 2) + data_1cd43c8)
        int32_t ebx_340 = eax_143 + data_1cd43a0
        
        if (eax_143 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_340 << 2) + data_1c45564)
        int32_t ebx_343
        ebx_343.b = edi_19[2]
        int32_t eax_145 = data_1cd4390
        int32_t eax_147
        eax_147.b = edi_19[2]
        char eax_148 = eax_147.b + (
            *(((eax_145 + *(((ebx_343 - eax_145) << 2) + data_1cd4394) - eax_147) << 2) + edx_14)).b
        edi_19[2] = eax_148
        int32_t edx_15 = edx_13
        
        while (true)
            esi_15 = &esi_15[4]
            edx_15 += data_1cd43f0
            
            if (edx_15 s>= data_1cd43f8)
                edx_13 = edx_15 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp64_1 = ecx_13
                ecx_13 -= 1
                
                if (temp64_1 == 1)
                    goto label_5ec2e4
                
                goto label_5ec165
            
            int32_t temp59_1 = ecx_13
            ecx_13 -= 1
            
            if (temp59_1 == 1)
            label_5ec2e4:
                int32_t temp63_1 = ecx_12
                ecx_12 -= 1
                
                if (temp63_1 == 1)
                    return eax_148
                
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
    int32_t ebx_352 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5ec32c:
        int32_t edx_17 = data_1cd43a4
        int32_t ebx_353
        ebx_353.b = *esi_18
        int32_t eax_149
        eax_149.b = not.b(ebx_353.b)
        int32_t eax_150 = eax_149 + *(((ebx_353 - eax_149) << 2) + data_1cd43c8)
        int32_t ebx_358 = eax_150 + data_1cd4398
        
        if (eax_150 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_358 << 2) + data_1c45564)
        int32_t ebx_361
        ebx_361.b = *edi_22
        int32_t eax_152 = data_1cd4380
        int32_t eax_154
        eax_154.b = *edi_22
        *edi_22 = eax_154.b + (
            *(((eax_152 + *(((ebx_361 - eax_152) << 2) + data_1cd4384) - eax_154) << 2) + edx_17)).b
        int32_t ebx_369
        ebx_369.b = esi_18[1]
        int32_t eax_156
        eax_156.b = not.b(ebx_369.b)
        int32_t eax_157 = eax_156 + *(((ebx_369 - eax_156) << 2) + data_1cd43c8)
        int32_t ebx_374 = eax_157 + data_1cd439c
        
        if (eax_157 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_374 << 2) + data_1c45564)
        int32_t ebx_377
        ebx_377.b = edi_22[1]
        int32_t eax_159 = data_1cd4388
        int32_t eax_161
        eax_161.b = edi_22[1]
        edi_22[1] = eax_161.b + (
            *(((eax_159 + *(((ebx_377 - eax_159) << 2) + data_1cd438c) - eax_161) << 2) + edx_17)).b
        int32_t ebx_385
        ebx_385.b = esi_18[2]
        int32_t eax_163
        eax_163.b = not.b(ebx_385.b)
        int32_t eax_164 = eax_163 + *(((ebx_385 - eax_163) << 2) + data_1cd43c8)
        int32_t ebx_390 = eax_164 + data_1cd43a0
        
        if (eax_164 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_390 << 2) + data_1c45564)
        int32_t ebx_393
        ebx_393.b = edi_22[2]
        int32_t eax_166 = data_1cd4390
        int32_t eax_168
        eax_168.b = edi_22[2]
        char eax_169 = eax_168.b + (
            *(((eax_166 + *(((ebx_393 - eax_166) << 2) + data_1cd4394) - eax_168) << 2) + edx_17)).b
        edi_22[2] = eax_169
        int32_t edx_18 = edx_16
        
        while (true)
            esi_18 = &esi_18[4]
            edx_18 += data_1cd43f0
            
            if (edx_18 s>= data_1cd43f8)
                edx_16 = edx_18 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp67_1 = ecx_16
                ecx_16 -= 1
                
                if (temp67_1 == 1)
                    goto label_5ec4aa
                
                goto label_5ec32c
            
            int32_t temp65_1 = ecx_16
            ecx_16 -= 1
            
            if (temp65_1 == 1)
            label_5ec4aa:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_352 += data_1cd43f4
                
                if (ebx_352 s>= data_1cd43ec)
                    ebx_352 -= data_1cd43ec
                    esi_18 = &esi_18[data_1cd4400]
                
                int32_t temp71_1 = ecx_15
                ecx_15 -= 1
                
                if (temp71_1 == 1)
                    return eax_169
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    char* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_403 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5ec50c:
        int32_t edx_20 = data_1cd43a4
        int32_t ebx_404
        ebx_404.b = *esi_20
        int32_t eax_170
        eax_170.b = not.b(ebx_404.b)
        int32_t eax_171 = eax_170 + *(((ebx_404 - eax_170) << 2) + data_1cd43c8)
        int32_t ebx_409 = eax_171 + data_1cd4398
        
        if (eax_171 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_409 << 2) + data_1c45564)
        int32_t ebx_412
        ebx_412.b = *edi_25
        int32_t eax_173 = data_1cd4380
        int32_t eax_175
        eax_175.b = *edi_25
        *edi_25 = eax_175.b + (
            *(((eax_173 + *(((ebx_412 - eax_173) << 2) + data_1cd4384) - eax_175) << 2) + edx_20)).b
        int32_t ebx_420
        ebx_420.b = esi_20[1]
        int32_t eax_177
        eax_177.b = not.b(ebx_420.b)
        int32_t eax_178 = eax_177 + *(((ebx_420 - eax_177) << 2) + data_1cd43c8)
        int32_t ebx_425 = eax_178 + data_1cd439c
        
        if (eax_178 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_425 << 2) + data_1c45564)
        int32_t ebx_428
        ebx_428.b = edi_25[1]
        int32_t eax_180 = data_1cd4388
        int32_t eax_182
        eax_182.b = edi_25[1]
        edi_25[1] = eax_182.b + (
            *(((eax_180 + *(((ebx_428 - eax_180) << 2) + data_1cd438c) - eax_182) << 2) + edx_20)).b
        int32_t ebx_436
        ebx_436.b = esi_20[2]
        int32_t eax_184
        eax_184.b = not.b(ebx_436.b)
        int32_t eax_185 = eax_184 + *(((ebx_436 - eax_184) << 2) + data_1cd43c8)
        int32_t ebx_441 = eax_185 + data_1cd43a0
        
        if (eax_185 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_441 << 2) + data_1c45564)
        int32_t ebx_444
        ebx_444.b = edi_25[2]
        int32_t eax_187 = data_1cd4390
        int32_t eax_189
        eax_189.b = edi_25[2]
        char eax_190 = eax_189.b + (
            *(((eax_187 + *(((ebx_444 - eax_187) << 2) + data_1cd4394) - eax_189) << 2) + edx_20)).b
        edi_25[2] = eax_190
        int32_t edx_21 = edx_19
        
        while (true)
            esi_20 = &esi_20[4]
            edx_21 += data_1cd43f0
            
            if (edx_21 s>= data_1cd43f8)
                edx_19 = edx_21 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp72_1 = ecx_19
                ecx_19 -= 1
                
                if (temp72_1 == 1)
                    goto label_5ec688
                
                goto label_5ec50c
            
            int32_t temp68_1 = ecx_19
            ecx_19 -= 1
            
            if (temp68_1 == 1)
            label_5ec688:
                int32_t ebx_452 = ebx_403
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_452 += data_1cd43ec
                    
                    if (ebx_452 s< data_1cd43f4)
                        int32_t temp75_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp75_1 != 1)
                            continue
                    else
                        ebx_403 = ebx_452 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_190
                
                break

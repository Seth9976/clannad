// 函数: sub_5e9a60
// 地址: 0x5e9a60
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
        char eax_16
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
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
                *edi_1 = eax_5.b + (*(((ebx_9 - eax_5) << 2) + data_1cd4384)).b
                int32_t ebx_13
                ebx_13.b = esi_1[1]
                int32_t eax_7
                eax_7.b = not.b(ebx_13.b)
                int32_t eax_8 = eax_7 + *(((ebx_13 - eax_7) << 2) + data_1cd43c8)
                int32_t ebx_18 = eax_8 + data_1cd439c
                
                if (eax_8 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_18 << 2) + data_1c45564)
                int32_t ebx_21
                ebx_21.b = edi_1[1]
                int32_t eax_10 = data_1cd4388
                edi_1[1] = eax_10.b + (*(((ebx_21 - eax_10) << 2) + data_1cd438c)).b
                int32_t ebx_25
                ebx_25.b = esi_1[2]
                int32_t eax_12
                eax_12.b = not.b(ebx_25.b)
                int32_t eax_13 = eax_12 + *(((ebx_25 - eax_12) << 2) + data_1cd43c8)
                int32_t ebx_30 = eax_13 + data_1cd43a0
                
                if (eax_13 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_30 << 2) + data_1c45564)
                int32_t ebx_33
                ebx_33.b = edi_1[2]
                int32_t eax_15 = data_1cd4390
                eax_16 = eax_15.b + (*(((ebx_33 - eax_15) << 2) + data_1cd4394)).b
                edi_1[2] = eax_16
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
        
        return eax_16
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        char* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_38 = data_1cd4414
        char eax_31
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_39
                ebx_39.b = *esi_4
                int32_t eax_17
                eax_17.b = not.b(ebx_39.b)
                int32_t eax_18 = eax_17 + *(((ebx_39 - eax_17) << 2) + data_1cd43c8)
                int32_t ebx_44 = eax_18 + data_1cd4398
                
                if (eax_18 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_44 << 2) + data_1c45564)
                int32_t ebx_47
                ebx_47.b = *edi_4
                int32_t eax_20 = data_1cd4380
                *edi_4 = eax_20.b + (*(((ebx_47 - eax_20) << 2) + data_1cd4384)).b
                int32_t ebx_51
                ebx_51.b = esi_4[1]
                int32_t eax_22
                eax_22.b = not.b(ebx_51.b)
                int32_t eax_23 = eax_22 + *(((ebx_51 - eax_22) << 2) + data_1cd43c8)
                int32_t ebx_56 = eax_23 + data_1cd439c
                
                if (eax_23 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_56 << 2) + data_1c45564)
                int32_t ebx_59
                ebx_59.b = edi_4[1]
                int32_t eax_25 = data_1cd4388
                edi_4[1] = eax_25.b + (*(((ebx_59 - eax_25) << 2) + data_1cd438c)).b
                int32_t ebx_63
                ebx_63.b = esi_4[2]
                int32_t eax_27
                eax_27.b = not.b(ebx_63.b)
                int32_t eax_28 = eax_27 + *(((ebx_63 - eax_27) << 2) + data_1cd43c8)
                int32_t ebx_68 = eax_28 + data_1cd43a0
                
                if (eax_28 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_68 << 2) + data_1c45564)
                int32_t ebx_71
                ebx_71.b = edi_4[2]
                int32_t eax_30 = data_1cd4390
                eax_31 = eax_30.b + (*(((ebx_71 - eax_30) << 2) + data_1cd4394)).b
                edi_4[2] = eax_31
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_38 += data_1cd43f4
            
            if (ebx_38 s>= data_1cd43ec)
                ebx_38 -= data_1cd43ec
                esi_4 = &esi_4[data_1cd4400]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_31
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    char* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_77 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        char eax_46
        int32_t i_2
        
        do
            int32_t ebx_78
            ebx_78.b = *esi_6
            int32_t eax_32
            eax_32.b = not.b(ebx_78.b)
            int32_t eax_33 = eax_32 + *(((ebx_78 - eax_32) << 2) + data_1cd43c8)
            int32_t ebx_83 = eax_33 + data_1cd4398
            
            if (eax_33 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_83 << 2) + data_1c45564)
            int32_t ebx_86
            ebx_86.b = *edi_7
            int32_t eax_35 = data_1cd4380
            *edi_7 = eax_35.b + (*(((ebx_86 - eax_35) << 2) + data_1cd4384)).b
            int32_t ebx_90
            ebx_90.b = esi_6[1]
            int32_t eax_37
            eax_37.b = not.b(ebx_90.b)
            int32_t eax_38 = eax_37 + *(((ebx_90 - eax_37) << 2) + data_1cd43c8)
            int32_t ebx_95 = eax_38 + data_1cd439c
            
            if (eax_38 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_95 << 2) + data_1c45564)
            int32_t ebx_98
            ebx_98.b = edi_7[1]
            int32_t eax_40 = data_1cd4388
            edi_7[1] = eax_40.b + (*(((ebx_98 - eax_40) << 2) + data_1cd438c)).b
            int32_t ebx_102
            ebx_102.b = esi_6[2]
            int32_t eax_42
            eax_42.b = not.b(ebx_102.b)
            int32_t eax_43 = eax_42 + *(((ebx_102 - eax_42) << 2) + data_1cd43c8)
            int32_t ebx_107 = eax_43 + data_1cd43a0
            
            if (eax_43 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_107 << 2) + data_1c45564)
            int32_t ebx_110
            ebx_110.b = edi_7[2]
            int32_t eax_45 = data_1cd4390
            eax_46 = eax_45.b + (*(((ebx_110 - eax_45) << 2) + data_1cd4394)).b
            edi_7[2] = eax_46
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_114 = ebx_77
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_114 += data_1cd43ec
            
            if (ebx_114 s< data_1cd43f4)
                int32_t temp70_1 = ecx_6
                ecx_6 -= 1
                
                if (temp70_1 != 1)
                    continue
            else
                ebx_77 = ebx_114 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_46
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        char* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        char eax_61
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_1 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t ebx_116
                ebx_116.b = *esi_8
                int32_t eax_47
                eax_47.b = not.b(ebx_116.b)
                int32_t eax_48 = eax_47 + *(((ebx_116 - eax_47) << 2) + data_1cd43c8)
                int32_t ebx_121 = eax_48 + data_1cd4398
                
                if (eax_48 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_121 << 2) + data_1c45564)
                int32_t ebx_124
                ebx_124.b = *edi_10
                int32_t eax_50 = data_1cd4380
                *edi_10 = eax_50.b + (*(((ebx_124 - eax_50) << 2) + data_1cd4384)).b
                int32_t ebx_128
                ebx_128.b = esi_8[1]
                int32_t eax_52
                eax_52.b = not.b(ebx_128.b)
                int32_t eax_53 = eax_52 + *(((ebx_128 - eax_52) << 2) + data_1cd43c8)
                int32_t ebx_133 = eax_53 + data_1cd439c
                
                if (eax_53 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_133 << 2) + data_1c45564)
                int32_t ebx_136
                ebx_136.b = edi_10[1]
                int32_t eax_55 = data_1cd4388
                edi_10[1] = eax_55.b + (*(((ebx_136 - eax_55) << 2) + data_1cd438c)).b
                int32_t ebx_140
                ebx_140.b = esi_8[2]
                int32_t eax_57
                eax_57.b = not.b(ebx_140.b)
                int32_t eax_58 = eax_57 + *(((ebx_140 - eax_57) << 2) + data_1cd43c8)
                int32_t ebx_145 = eax_58 + data_1cd43a0
                
                if (eax_58 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_145 << 2) + data_1c45564)
                int32_t ebx_148
                ebx_148.b = edi_10[2]
                int32_t eax_60 = data_1cd4390
                eax_61 = eax_60.b + (*(((ebx_148 - eax_60) << 2) + data_1cd4394)).b
                edi_10[2] = eax_61
                edi_10 = &edi_10[4]
                edx_1 += data_1cd43f8
                
                if (edx_1 s>= data_1cd43f0)
                    edx_1 -= data_1cd43f0
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
        
        return eax_61
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        char* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_153 = data_1cd4414
        char eax_76
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_3 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_154
                ebx_154.b = *esi_11
                int32_t eax_62
                eax_62.b = not.b(ebx_154.b)
                int32_t eax_63 = eax_62 + *(((ebx_154 - eax_62) << 2) + data_1cd43c8)
                int32_t ebx_159 = eax_63 + data_1cd4398
                
                if (eax_63 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_159 << 2) + data_1c45564)
                int32_t ebx_162
                ebx_162.b = *edi_13
                int32_t eax_65 = data_1cd4380
                *edi_13 = eax_65.b + (*(((ebx_162 - eax_65) << 2) + data_1cd4384)).b
                int32_t ebx_166
                ebx_166.b = esi_11[1]
                int32_t eax_67
                eax_67.b = not.b(ebx_166.b)
                int32_t eax_68 = eax_67 + *(((ebx_166 - eax_67) << 2) + data_1cd43c8)
                int32_t ebx_171 = eax_68 + data_1cd439c
                
                if (eax_68 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_171 << 2) + data_1c45564)
                int32_t ebx_174
                ebx_174.b = edi_13[1]
                int32_t eax_70 = data_1cd4388
                edi_13[1] = eax_70.b + (*(((ebx_174 - eax_70) << 2) + data_1cd438c)).b
                int32_t ebx_178
                ebx_178.b = esi_11[2]
                int32_t eax_72
                eax_72.b = not.b(ebx_178.b)
                int32_t eax_73 = eax_72 + *(((ebx_178 - eax_72) << 2) + data_1cd43c8)
                int32_t ebx_183 = eax_73 + data_1cd43a0
                
                if (eax_73 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_183 << 2) + data_1c45564)
                int32_t ebx_186
                ebx_186.b = edi_13[2]
                int32_t eax_75 = data_1cd4390
                eax_76 = eax_75.b + (*(((ebx_186 - eax_75) << 2) + data_1cd4394)).b
                edi_13[2] = eax_76
                edi_13 = &edi_13[4]
                edx_3 += data_1cd43f8
                
                if (edx_3 s>= data_1cd43f0)
                    edx_3 -= data_1cd43f0
                    esi_11 = &esi_11[4]
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_11 = var_14_5
            edi_13 = &var_18_5[data_1cd43fc]
            ebx_153 += data_1cd43f4
            
            if (ebx_153 s>= data_1cd43ec)
                ebx_153 -= data_1cd43ec
                esi_11 = &esi_11[data_1cd4400]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_76
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    char* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_192 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_5 = data_1cd4418
        int32_t i_11 = data_1cd4410
        char eax_91
        int32_t i_5
        
        do
            int32_t ebx_193
            ebx_193.b = *esi_13
            int32_t eax_77
            eax_77.b = not.b(ebx_193.b)
            int32_t eax_78 = eax_77 + *(((ebx_193 - eax_77) << 2) + data_1cd43c8)
            int32_t ebx_198 = eax_78 + data_1cd4398
            
            if (eax_78 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_198 << 2) + data_1c45564)
            int32_t ebx_201
            ebx_201.b = *edi_16
            int32_t eax_80 = data_1cd4380
            *edi_16 = eax_80.b + (*(((ebx_201 - eax_80) << 2) + data_1cd4384)).b
            int32_t ebx_205
            ebx_205.b = esi_13[1]
            int32_t eax_82
            eax_82.b = not.b(ebx_205.b)
            int32_t eax_83 = eax_82 + *(((ebx_205 - eax_82) << 2) + data_1cd43c8)
            int32_t ebx_210 = eax_83 + data_1cd439c
            
            if (eax_83 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_210 << 2) + data_1c45564)
            int32_t ebx_213
            ebx_213.b = edi_16[1]
            int32_t eax_85 = data_1cd4388
            edi_16[1] = eax_85.b + (*(((ebx_213 - eax_85) << 2) + data_1cd438c)).b
            int32_t ebx_217
            ebx_217.b = esi_13[2]
            int32_t eax_87
            eax_87.b = not.b(ebx_217.b)
            int32_t eax_88 = eax_87 + *(((ebx_217 - eax_87) << 2) + data_1cd43c8)
            int32_t ebx_222 = eax_88 + data_1cd43a0
            
            if (eax_88 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_222 << 2) + data_1c45564)
            int32_t ebx_225
            ebx_225.b = edi_16[2]
            int32_t eax_90 = data_1cd4390
            eax_91 = eax_90.b + (*(((ebx_225 - eax_90) << 2) + data_1cd4394)).b
            edi_16[2] = eax_91
            edi_16 = &edi_16[4]
            edx_5 += data_1cd43f8
            
            if (edx_5 s>= data_1cd43f0)
                edx_5 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_229 = ebx_192
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_229 += data_1cd43ec
            
            if (ebx_229 s< data_1cd43f4)
                int32_t temp74_1 = ecx_11
                ecx_11 -= 1
                
                if (temp74_1 != 1)
                    continue
            else
                ebx_192 = ebx_229 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_91
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
        int32_t edx_7 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5e9597:
        int32_t ebx_231
        ebx_231.b = *esi_15
        int32_t eax_92
        eax_92.b = not.b(ebx_231.b)
        int32_t eax_93 = eax_92 + *(((ebx_231 - eax_92) << 2) + data_1cd43c8)
        int32_t ebx_236 = eax_93 + data_1cd4398
        
        if (eax_93 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_236 << 2) + data_1c45564)
        int32_t ebx_239
        ebx_239.b = *edi_19
        int32_t eax_95 = data_1cd4380
        *edi_19 = eax_95.b + (*(((ebx_239 - eax_95) << 2) + data_1cd4384)).b
        int32_t ebx_243
        ebx_243.b = esi_15[1]
        int32_t eax_97
        eax_97.b = not.b(ebx_243.b)
        int32_t eax_98 = eax_97 + *(((ebx_243 - eax_97) << 2) + data_1cd43c8)
        int32_t ebx_248 = eax_98 + data_1cd439c
        
        if (eax_98 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_248 << 2) + data_1c45564)
        int32_t ebx_251
        ebx_251.b = edi_19[1]
        int32_t eax_100 = data_1cd4388
        edi_19[1] = eax_100.b + (*(((ebx_251 - eax_100) << 2) + data_1cd438c)).b
        int32_t ebx_255
        ebx_255.b = esi_15[2]
        int32_t eax_102
        eax_102.b = not.b(ebx_255.b)
        int32_t eax_103 = eax_102 + *(((ebx_255 - eax_102) << 2) + data_1cd43c8)
        int32_t ebx_260 = eax_103 + data_1cd43a0
        
        if (eax_103 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_260 << 2) + data_1c45564)
        int32_t ebx_263
        ebx_263.b = edi_19[2]
        int32_t eax_105 = data_1cd4390
        char eax_106 = eax_105.b + (*(((ebx_263 - eax_105) << 2) + data_1cd4394)).b
        edi_19[2] = eax_106
        int32_t edx_8 = edx_7
        
        while (true)
            esi_15 = &esi_15[4]
            edx_8 += data_1cd43f0
            
            if (edx_8 s>= data_1cd43f8)
                edx_7 = edx_8 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp64_1 = ecx_13
                ecx_13 -= 1
                
                if (temp64_1 == 1)
                    goto label_5e96df
                
                goto label_5e9597
            
            int32_t temp59_1 = ecx_13
            ecx_13 -= 1
            
            if (temp59_1 == 1)
            label_5e96df:
                int32_t temp63_1 = ecx_12
                ecx_12 -= 1
                
                if (temp63_1 == 1)
                    return eax_106
                
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
    int32_t ebx_268 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_9 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5e972e:
        int32_t ebx_269
        ebx_269.b = *esi_18
        int32_t eax_107
        eax_107.b = not.b(ebx_269.b)
        int32_t eax_108 = eax_107 + *(((ebx_269 - eax_107) << 2) + data_1cd43c8)
        int32_t ebx_274 = eax_108 + data_1cd4398
        
        if (eax_108 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_274 << 2) + data_1c45564)
        int32_t ebx_277
        ebx_277.b = *edi_22
        int32_t eax_110 = data_1cd4380
        *edi_22 = eax_110.b + (*(((ebx_277 - eax_110) << 2) + data_1cd4384)).b
        int32_t ebx_281
        ebx_281.b = esi_18[1]
        int32_t eax_112
        eax_112.b = not.b(ebx_281.b)
        int32_t eax_113 = eax_112 + *(((ebx_281 - eax_112) << 2) + data_1cd43c8)
        int32_t ebx_286 = eax_113 + data_1cd439c
        
        if (eax_113 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_286 << 2) + data_1c45564)
        int32_t ebx_289
        ebx_289.b = edi_22[1]
        int32_t eax_115 = data_1cd4388
        edi_22[1] = eax_115.b + (*(((ebx_289 - eax_115) << 2) + data_1cd438c)).b
        int32_t ebx_293
        ebx_293.b = esi_18[2]
        int32_t eax_117
        eax_117.b = not.b(ebx_293.b)
        int32_t eax_118 = eax_117 + *(((ebx_293 - eax_117) << 2) + data_1cd43c8)
        int32_t ebx_298 = eax_118 + data_1cd43a0
        
        if (eax_118 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_298 << 2) + data_1c45564)
        int32_t ebx_301
        ebx_301.b = edi_22[2]
        int32_t eax_120 = data_1cd4390
        char eax_121 = eax_120.b + (*(((ebx_301 - eax_120) << 2) + data_1cd4394)).b
        edi_22[2] = eax_121
        int32_t edx_10 = edx_9
        
        while (true)
            esi_18 = &esi_18[4]
            edx_10 += data_1cd43f0
            
            if (edx_10 s>= data_1cd43f8)
                edx_9 = edx_10 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp67_1 = ecx_16
                ecx_16 -= 1
                
                if (temp67_1 == 1)
                    goto label_5e9875
                
                goto label_5e972e
            
            int32_t temp65_1 = ecx_16
            ecx_16 -= 1
            
            if (temp65_1 == 1)
            label_5e9875:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_268 += data_1cd43f4
                
                if (ebx_268 s>= data_1cd43ec)
                    ebx_268 -= data_1cd43ec
                    esi_18 = &esi_18[data_1cd4400]
                
                int32_t temp71_1 = ecx_15
                ecx_15 -= 1
                
                if (temp71_1 == 1)
                    return eax_121
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    char* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_307 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_11 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5e98de:
        int32_t ebx_308
        ebx_308.b = *esi_20
        int32_t eax_122
        eax_122.b = not.b(ebx_308.b)
        int32_t eax_123 = eax_122 + *(((ebx_308 - eax_122) << 2) + data_1cd43c8)
        int32_t ebx_313 = eax_123 + data_1cd4398
        
        if (eax_123 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_313 << 2) + data_1c45564)
        int32_t ebx_316
        ebx_316.b = *edi_25
        int32_t eax_125 = data_1cd4380
        *edi_25 = eax_125.b + (*(((ebx_316 - eax_125) << 2) + data_1cd4384)).b
        int32_t ebx_320
        ebx_320.b = esi_20[1]
        int32_t eax_127
        eax_127.b = not.b(ebx_320.b)
        int32_t eax_128 = eax_127 + *(((ebx_320 - eax_127) << 2) + data_1cd43c8)
        int32_t ebx_325 = eax_128 + data_1cd439c
        
        if (eax_128 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_325 << 2) + data_1c45564)
        int32_t ebx_328
        ebx_328.b = edi_25[1]
        int32_t eax_130 = data_1cd4388
        edi_25[1] = eax_130.b + (*(((ebx_328 - eax_130) << 2) + data_1cd438c)).b
        int32_t ebx_332
        ebx_332.b = esi_20[2]
        int32_t eax_132
        eax_132.b = not.b(ebx_332.b)
        int32_t eax_133 = eax_132 + *(((ebx_332 - eax_132) << 2) + data_1cd43c8)
        int32_t ebx_337 = eax_133 + data_1cd43a0
        
        if (eax_133 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_337 << 2) + data_1c45564)
        int32_t ebx_340
        ebx_340.b = edi_25[2]
        int32_t eax_135 = data_1cd4390
        char eax_136 = eax_135.b + (*(((ebx_340 - eax_135) << 2) + data_1cd4394)).b
        edi_25[2] = eax_136
        int32_t edx_12 = edx_11
        
        while (true)
            esi_20 = &esi_20[4]
            edx_12 += data_1cd43f0
            
            if (edx_12 s>= data_1cd43f8)
                edx_11 = edx_12 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp72_1 = ecx_19
                ecx_19 -= 1
                
                if (temp72_1 == 1)
                    goto label_5e9a23
                
                goto label_5e98de
            
            int32_t temp68_1 = ecx_19
            ecx_19 -= 1
            
            if (temp68_1 == 1)
            label_5e9a23:
                int32_t ebx_344 = ebx_307
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_344 += data_1cd43ec
                    
                    if (ebx_344 s< data_1cd43f4)
                        int32_t temp75_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp75_1 != 1)
                            continue
                    else
                        ebx_307 = ebx_344 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_136
                
                break

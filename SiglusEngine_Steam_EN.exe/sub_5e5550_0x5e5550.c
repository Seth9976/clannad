// 函数: sub_5e5550
// 地址: 0x5e5550
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
        char eax_10
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                int32_t ebx_1
                ebx_1.b = *esi_1
                int32_t ebx_2 = ebx_1 + data_1cd4398
                
                if (ebx_1 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_2 << 2) + data_1c45564)
                int32_t ebx_5
                ebx_5.b = *edi_1
                int32_t eax_3 = data_1cd4380
                *edi_1 = eax_3.b + (*(((ebx_5 - eax_3) << 2) + data_1cd4384)).b
                int32_t ebx_9
                ebx_9.b = esi_1[1]
                int32_t ebx_10 = ebx_9 + data_1cd439c
                
                if (ebx_9 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_10 << 2) + data_1c45564)
                int32_t ebx_13
                ebx_13.b = edi_1[1]
                int32_t eax_6 = data_1cd4388
                edi_1[1] = eax_6.b + (*(((ebx_13 - eax_6) << 2) + data_1cd438c)).b
                int32_t ebx_17
                ebx_17.b = esi_1[2]
                int32_t ebx_18 = ebx_17 + data_1cd43a0
                
                if (ebx_17 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_18 << 2) + data_1c45564)
                int32_t ebx_21
                ebx_21.b = edi_1[2]
                int32_t eax_9 = data_1cd4390
                eax_10 = eax_9.b + (*(((ebx_21 - eax_9) << 2) + data_1cd4394)).b
                edi_1[2] = eax_10
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
        
        return eax_10
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        char* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_26 = data_1cd4414
        char eax_19
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_27
                ebx_27.b = *esi_4
                int32_t ebx_28 = ebx_27 + data_1cd4398
                
                if (ebx_27 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_28 << 2) + data_1c45564)
                int32_t ebx_31
                ebx_31.b = *edi_4
                int32_t eax_12 = data_1cd4380
                *edi_4 = eax_12.b + (*(((ebx_31 - eax_12) << 2) + data_1cd4384)).b
                int32_t ebx_35
                ebx_35.b = esi_4[1]
                int32_t ebx_36 = ebx_35 + data_1cd439c
                
                if (ebx_35 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_36 << 2) + data_1c45564)
                int32_t ebx_39
                ebx_39.b = edi_4[1]
                int32_t eax_15 = data_1cd4388
                edi_4[1] = eax_15.b + (*(((ebx_39 - eax_15) << 2) + data_1cd438c)).b
                int32_t ebx_43
                ebx_43.b = esi_4[2]
                int32_t ebx_44 = ebx_43 + data_1cd43a0
                
                if (ebx_43 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_44 << 2) + data_1c45564)
                int32_t ebx_47
                ebx_47.b = edi_4[2]
                int32_t eax_18 = data_1cd4390
                eax_19 = eax_18.b + (*(((ebx_47 - eax_18) << 2) + data_1cd4394)).b
                edi_4[2] = eax_19
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_26 += data_1cd43f4
            
            if (ebx_26 s>= data_1cd43ec)
                ebx_26 -= data_1cd43ec
                esi_4 = &esi_4[data_1cd4400]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_19
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    char* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_53 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        char eax_28
        int32_t i_2
        
        do
            int32_t ebx_54
            ebx_54.b = *esi_6
            int32_t ebx_55 = ebx_54 + data_1cd4398
            
            if (ebx_54 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_55 << 2) + data_1c45564)
            int32_t ebx_58
            ebx_58.b = *edi_7
            int32_t eax_21 = data_1cd4380
            *edi_7 = eax_21.b + (*(((ebx_58 - eax_21) << 2) + data_1cd4384)).b
            int32_t ebx_62
            ebx_62.b = esi_6[1]
            int32_t ebx_63 = ebx_62 + data_1cd439c
            
            if (ebx_62 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_63 << 2) + data_1c45564)
            int32_t ebx_66
            ebx_66.b = edi_7[1]
            int32_t eax_24 = data_1cd4388
            edi_7[1] = eax_24.b + (*(((ebx_66 - eax_24) << 2) + data_1cd438c)).b
            int32_t ebx_70
            ebx_70.b = esi_6[2]
            int32_t ebx_71 = ebx_70 + data_1cd43a0
            
            if (ebx_70 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_71 << 2) + data_1c45564)
            int32_t ebx_74
            ebx_74.b = edi_7[2]
            int32_t eax_27 = data_1cd4390
            eax_28 = eax_27.b + (*(((ebx_74 - eax_27) << 2) + data_1cd4394)).b
            edi_7[2] = eax_28
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_78 = ebx_53
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_78 += data_1cd43ec
            
            if (ebx_78 s< data_1cd43f4)
                int32_t temp70_1 = ecx_6
                ecx_6 -= 1
                
                if (temp70_1 != 1)
                    continue
            else
                ebx_53 = ebx_78 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_28
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        char* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        char eax_37
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_1 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t ebx_80
                ebx_80.b = *esi_8
                int32_t ebx_81 = ebx_80 + data_1cd4398
                
                if (ebx_80 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_81 << 2) + data_1c45564)
                int32_t ebx_84
                ebx_84.b = *edi_10
                int32_t eax_30 = data_1cd4380
                *edi_10 = eax_30.b + (*(((ebx_84 - eax_30) << 2) + data_1cd4384)).b
                int32_t ebx_88
                ebx_88.b = esi_8[1]
                int32_t ebx_89 = ebx_88 + data_1cd439c
                
                if (ebx_88 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_89 << 2) + data_1c45564)
                int32_t ebx_92
                ebx_92.b = edi_10[1]
                int32_t eax_33 = data_1cd4388
                edi_10[1] = eax_33.b + (*(((ebx_92 - eax_33) << 2) + data_1cd438c)).b
                int32_t ebx_96
                ebx_96.b = esi_8[2]
                int32_t ebx_97 = ebx_96 + data_1cd43a0
                
                if (ebx_96 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_97 << 2) + data_1c45564)
                int32_t ebx_100
                ebx_100.b = edi_10[2]
                int32_t eax_36 = data_1cd4390
                eax_37 = eax_36.b + (*(((ebx_100 - eax_36) << 2) + data_1cd4394)).b
                edi_10[2] = eax_37
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
        
        return eax_37
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        char* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_105 = data_1cd4414
        char eax_46
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_3 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_106
                ebx_106.b = *esi_11
                int32_t ebx_107 = ebx_106 + data_1cd4398
                
                if (ebx_106 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_107 << 2) + data_1c45564)
                int32_t ebx_110
                ebx_110.b = *edi_13
                int32_t eax_39 = data_1cd4380
                *edi_13 = eax_39.b + (*(((ebx_110 - eax_39) << 2) + data_1cd4384)).b
                int32_t ebx_114
                ebx_114.b = esi_11[1]
                int32_t ebx_115 = ebx_114 + data_1cd439c
                
                if (ebx_114 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_115 << 2) + data_1c45564)
                int32_t ebx_118
                ebx_118.b = edi_13[1]
                int32_t eax_42 = data_1cd4388
                edi_13[1] = eax_42.b + (*(((ebx_118 - eax_42) << 2) + data_1cd438c)).b
                int32_t ebx_122
                ebx_122.b = esi_11[2]
                int32_t ebx_123 = ebx_122 + data_1cd43a0
                
                if (ebx_122 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_123 << 2) + data_1c45564)
                int32_t ebx_126
                ebx_126.b = edi_13[2]
                int32_t eax_45 = data_1cd4390
                eax_46 = eax_45.b + (*(((ebx_126 - eax_45) << 2) + data_1cd4394)).b
                edi_13[2] = eax_46
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
            ebx_105 += data_1cd43f4
            
            if (ebx_105 s>= data_1cd43ec)
                ebx_105 -= data_1cd43ec
                esi_11 = &esi_11[data_1cd4400]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_46
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    char* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_132 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_5 = data_1cd4418
        int32_t i_11 = data_1cd4410
        char eax_55
        int32_t i_5
        
        do
            int32_t ebx_133
            ebx_133.b = *esi_13
            int32_t ebx_134 = ebx_133 + data_1cd4398
            
            if (ebx_133 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_134 << 2) + data_1c45564)
            int32_t ebx_137
            ebx_137.b = *edi_16
            int32_t eax_48 = data_1cd4380
            *edi_16 = eax_48.b + (*(((ebx_137 - eax_48) << 2) + data_1cd4384)).b
            int32_t ebx_141
            ebx_141.b = esi_13[1]
            int32_t ebx_142 = ebx_141 + data_1cd439c
            
            if (ebx_141 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_142 << 2) + data_1c45564)
            int32_t ebx_145
            ebx_145.b = edi_16[1]
            int32_t eax_51 = data_1cd4388
            edi_16[1] = eax_51.b + (*(((ebx_145 - eax_51) << 2) + data_1cd438c)).b
            int32_t ebx_149
            ebx_149.b = esi_13[2]
            int32_t ebx_150 = ebx_149 + data_1cd43a0
            
            if (ebx_149 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_150 << 2) + data_1c45564)
            int32_t ebx_153
            ebx_153.b = edi_16[2]
            int32_t eax_54 = data_1cd4390
            eax_55 = eax_54.b + (*(((ebx_153 - eax_54) << 2) + data_1cd4394)).b
            edi_16[2] = eax_55
            edi_16 = &edi_16[4]
            edx_5 += data_1cd43f8
            
            if (edx_5 s>= data_1cd43f0)
                edx_5 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_157 = ebx_132
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_157 += data_1cd43ec
            
            if (ebx_157 s< data_1cd43f4)
                int32_t temp74_1 = ecx_11
                ecx_11 -= 1
                
                if (temp74_1 != 1)
                    continue
            else
                ebx_132 = ebx_157 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_55
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
    label_5e5137:
        int32_t ebx_159
        ebx_159.b = *esi_15
        int32_t ebx_160 = ebx_159 + data_1cd4398
        
        if (ebx_159 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_160 << 2) + data_1c45564)
        int32_t ebx_163
        ebx_163.b = *edi_19
        int32_t eax_57 = data_1cd4380
        *edi_19 = eax_57.b + (*(((ebx_163 - eax_57) << 2) + data_1cd4384)).b
        int32_t ebx_167
        ebx_167.b = esi_15[1]
        int32_t ebx_168 = ebx_167 + data_1cd439c
        
        if (ebx_167 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_168 << 2) + data_1c45564)
        int32_t ebx_171
        ebx_171.b = edi_19[1]
        int32_t eax_60 = data_1cd4388
        edi_19[1] = eax_60.b + (*(((ebx_171 - eax_60) << 2) + data_1cd438c)).b
        int32_t ebx_175
        ebx_175.b = esi_15[2]
        int32_t ebx_176 = ebx_175 + data_1cd43a0
        
        if (ebx_175 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_176 << 2) + data_1c45564)
        int32_t ebx_179
        ebx_179.b = edi_19[2]
        int32_t eax_63 = data_1cd4390
        char eax_64 = eax_63.b + (*(((ebx_179 - eax_63) << 2) + data_1cd4394)).b
        edi_19[2] = eax_64
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
                    goto label_5e5246
                
                goto label_5e5137
            
            int32_t temp59_1 = ecx_13
            ecx_13 -= 1
            
            if (temp59_1 == 1)
            label_5e5246:
                int32_t temp63_1 = ecx_12
                ecx_12 -= 1
                
                if (temp63_1 == 1)
                    return eax_64
                
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
    int32_t ebx_184 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_9 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5e528e:
        int32_t ebx_185
        ebx_185.b = *esi_18
        int32_t ebx_186 = ebx_185 + data_1cd4398
        
        if (ebx_185 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_186 << 2) + data_1c45564)
        int32_t ebx_189
        ebx_189.b = *edi_22
        int32_t eax_66 = data_1cd4380
        *edi_22 = eax_66.b + (*(((ebx_189 - eax_66) << 2) + data_1cd4384)).b
        int32_t ebx_193
        ebx_193.b = esi_18[1]
        int32_t ebx_194 = ebx_193 + data_1cd439c
        
        if (ebx_193 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_194 << 2) + data_1c45564)
        int32_t ebx_197
        ebx_197.b = edi_22[1]
        int32_t eax_69 = data_1cd4388
        edi_22[1] = eax_69.b + (*(((ebx_197 - eax_69) << 2) + data_1cd438c)).b
        int32_t ebx_201
        ebx_201.b = esi_18[2]
        int32_t ebx_202 = ebx_201 + data_1cd43a0
        
        if (ebx_201 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_202 << 2) + data_1c45564)
        int32_t ebx_205
        ebx_205.b = edi_22[2]
        int32_t eax_72 = data_1cd4390
        char eax_73 = eax_72.b + (*(((ebx_205 - eax_72) << 2) + data_1cd4394)).b
        edi_22[2] = eax_73
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
                    goto label_5e539c
                
                goto label_5e528e
            
            int32_t temp65_1 = ecx_16
            ecx_16 -= 1
            
            if (temp65_1 == 1)
            label_5e539c:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_184 += data_1cd43f4
                
                if (ebx_184 s>= data_1cd43ec)
                    ebx_184 -= data_1cd43ec
                    esi_18 = &esi_18[data_1cd4400]
                
                int32_t temp71_1 = ecx_15
                ecx_15 -= 1
                
                if (temp71_1 == 1)
                    return eax_73
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    char* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_211 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_11 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5e53fe:
        int32_t ebx_212
        ebx_212.b = *esi_20
        int32_t ebx_213 = ebx_212 + data_1cd4398
        
        if (ebx_212 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_213 << 2) + data_1c45564)
        int32_t ebx_216
        ebx_216.b = *edi_25
        int32_t eax_75 = data_1cd4380
        *edi_25 = eax_75.b + (*(((ebx_216 - eax_75) << 2) + data_1cd4384)).b
        int32_t ebx_220
        ebx_220.b = esi_20[1]
        int32_t ebx_221 = ebx_220 + data_1cd439c
        
        if (ebx_220 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_221 << 2) + data_1c45564)
        int32_t ebx_224
        ebx_224.b = edi_25[1]
        int32_t eax_78 = data_1cd4388
        edi_25[1] = eax_78.b + (*(((ebx_224 - eax_78) << 2) + data_1cd438c)).b
        int32_t ebx_228
        ebx_228.b = esi_20[2]
        int32_t ebx_229 = ebx_228 + data_1cd43a0
        
        if (ebx_228 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_229 << 2) + data_1c45564)
        int32_t ebx_232
        ebx_232.b = edi_25[2]
        int32_t eax_81 = data_1cd4390
        char eax_82 = eax_81.b + (*(((ebx_232 - eax_81) << 2) + data_1cd4394)).b
        edi_25[2] = eax_82
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
                    goto label_5e550a
                
                goto label_5e53fe
            
            int32_t temp68_1 = ecx_19
            ecx_19 -= 1
            
            if (temp68_1 == 1)
            label_5e550a:
                int32_t ebx_236 = ebx_211
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_236 += data_1cd43ec
                    
                    if (ebx_236 s< data_1cd43f4)
                        int32_t temp75_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp75_1 != 1)
                            continue
                    else
                        ebx_211 = ebx_236 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_82
                
                break

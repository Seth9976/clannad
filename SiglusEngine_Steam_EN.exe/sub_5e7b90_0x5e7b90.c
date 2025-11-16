// 函数: sub_5e7b90
// 地址: 0x5e7b90
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
                int32_t edx_1 = data_1cd43a4
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
                int32_t eax_5
                eax_5.b = *edi_1
                *edi_1 = eax_5.b +
                    (*(((eax_3 + *(((ebx_5 - eax_3) << 2) + data_1cd4384) - eax_5) << 2) + edx_1)).b
                int32_t ebx_13
                ebx_13.b = esi_1[1]
                int32_t ebx_14 = ebx_13 + data_1cd439c
                
                if (ebx_13 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_14 << 2) + data_1c45564)
                int32_t ebx_17
                ebx_17.b = edi_1[1]
                int32_t eax_8 = data_1cd4388
                int32_t eax_10
                eax_10.b = edi_1[1]
                edi_1[1] = eax_10.b + (
                    *(((eax_8 + *(((ebx_17 - eax_8) << 2) + data_1cd438c) - eax_10) << 2) + edx_1)).b
                int32_t ebx_25
                ebx_25.b = esi_1[2]
                int32_t ebx_26 = ebx_25 + data_1cd43a0
                
                if (ebx_25 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_26 << 2) + data_1c45564)
                int32_t ebx_29
                ebx_29.b = edi_1[2]
                int32_t eax_13 = data_1cd4390
                int32_t eax_15
                eax_15.b = edi_1[2]
                eax_16 = eax_15.b + (*
                    (((eax_13 + *(((ebx_29 - eax_13) << 2) + data_1cd4394) - eax_15) << 2) + edx_1)).b
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
                int32_t edx_2 = data_1cd43a4
                int32_t ebx_39
                ebx_39.b = *esi_4
                int32_t ebx_40 = ebx_39 + data_1cd4398
                
                if (ebx_39 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_40 << 2) + data_1c45564)
                int32_t ebx_43
                ebx_43.b = *edi_4
                int32_t eax_18 = data_1cd4380
                int32_t eax_20
                eax_20.b = *edi_4
                *edi_4 = eax_20.b + (*
                    (((eax_18 + *(((ebx_43 - eax_18) << 2) + data_1cd4384) - eax_20) << 2) + edx_2)).b
                int32_t ebx_51
                ebx_51.b = esi_4[1]
                int32_t ebx_52 = ebx_51 + data_1cd439c
                
                if (ebx_51 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_52 << 2) + data_1c45564)
                int32_t ebx_55
                ebx_55.b = edi_4[1]
                int32_t eax_23 = data_1cd4388
                int32_t eax_25
                eax_25.b = edi_4[1]
                edi_4[1] = eax_25.b + (*
                    (((eax_23 + *(((ebx_55 - eax_23) << 2) + data_1cd438c) - eax_25) << 2) + edx_2)).b
                int32_t ebx_63
                ebx_63.b = esi_4[2]
                int32_t ebx_64 = ebx_63 + data_1cd43a0
                
                if (ebx_63 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_64 << 2) + data_1c45564)
                int32_t ebx_67
                ebx_67.b = edi_4[2]
                int32_t eax_28 = data_1cd4390
                int32_t eax_30
                eax_30.b = edi_4[2]
                eax_31 = eax_30.b + (*
                    (((eax_28 + *(((ebx_67 - eax_28) << 2) + data_1cd4394) - eax_30) << 2) + edx_2)).b
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
            int32_t edx_3 = data_1cd43a4
            int32_t ebx_78
            ebx_78.b = *esi_6
            int32_t ebx_79 = ebx_78 + data_1cd4398
            
            if (ebx_78 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_79 << 2) + data_1c45564)
            int32_t ebx_82
            ebx_82.b = *edi_7
            int32_t eax_33 = data_1cd4380
            int32_t eax_35
            eax_35.b = *edi_7
            *edi_7 = eax_35.b +
                (*(((eax_33 + *(((ebx_82 - eax_33) << 2) + data_1cd4384) - eax_35) << 2) + edx_3)).b
            int32_t ebx_90
            ebx_90.b = esi_6[1]
            int32_t ebx_91 = ebx_90 + data_1cd439c
            
            if (ebx_90 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_91 << 2) + data_1c45564)
            int32_t ebx_94
            ebx_94.b = edi_7[1]
            int32_t eax_38 = data_1cd4388
            int32_t eax_40
            eax_40.b = edi_7[1]
            edi_7[1] = eax_40.b +
                (*(((eax_38 + *(((ebx_94 - eax_38) << 2) + data_1cd438c) - eax_40) << 2) + edx_3)).b
            int32_t ebx_102
            ebx_102.b = esi_6[2]
            int32_t ebx_103 = ebx_102 + data_1cd43a0
            
            if (ebx_102 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_103 << 2) + data_1c45564)
            int32_t ebx_106
            ebx_106.b = edi_7[2]
            int32_t eax_43 = data_1cd4390
            int32_t eax_45
            eax_45.b = edi_7[2]
            eax_46 = eax_45.b + (
                *(((eax_43 + *(((ebx_106 - eax_43) << 2) + data_1cd4394) - eax_45) << 2) + edx_3)).b
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
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t edx_5 = data_1cd43a4
                int32_t ebx_116
                ebx_116.b = *esi_8
                int32_t ebx_117 = ebx_116 + data_1cd4398
                
                if (ebx_116 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_117 << 2) + data_1c45564)
                int32_t ebx_120
                ebx_120.b = *edi_10
                int32_t eax_48 = data_1cd4380
                int32_t eax_50
                eax_50.b = *edi_10
                *edi_10 = eax_50.b + (*(((eax_48 + *(((ebx_120 - eax_48) << 2) + data_1cd4384)
                    - eax_50) << 2) + edx_5)).b
                int32_t ebx_128
                ebx_128.b = esi_8[1]
                int32_t ebx_129 = ebx_128 + data_1cd439c
                
                if (ebx_128 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_129 << 2) + data_1c45564)
                int32_t ebx_132
                ebx_132.b = edi_10[1]
                int32_t eax_53 = data_1cd4388
                int32_t eax_55
                eax_55.b = edi_10[1]
                edi_10[1] = eax_55.b + (*(((eax_53 + *(((ebx_132 - eax_53) << 2) + data_1cd438c)
                    - eax_55) << 2) + edx_5)).b
                int32_t ebx_140
                ebx_140.b = esi_8[2]
                int32_t ebx_141 = ebx_140 + data_1cd43a0
                
                if (ebx_140 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_141 << 2) + data_1c45564)
                int32_t ebx_144
                ebx_144.b = edi_10[2]
                int32_t eax_58 = data_1cd4390
                int32_t eax_60
                eax_60.b = edi_10[2]
                eax_61 = eax_60.b + (*(((eax_58 + *(((ebx_144 - eax_58) << 2) + data_1cd4394)
                    - eax_60) << 2) + edx_5)).b
                edi_10[2] = eax_61
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
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t edx_8 = data_1cd43a4
                int32_t ebx_154
                ebx_154.b = *esi_11
                int32_t ebx_155 = ebx_154 + data_1cd4398
                
                if (ebx_154 + data_1cd4398 s< 0)
                    data_1cd4380 = 0
                else
                    data_1cd4380 = 0xff
                
                data_1cd4384 = *((ebx_155 << 2) + data_1c45564)
                int32_t ebx_158
                ebx_158.b = *edi_13
                int32_t eax_63 = data_1cd4380
                int32_t eax_65
                eax_65.b = *edi_13
                *edi_13 = eax_65.b + (*(((eax_63 + *(((ebx_158 - eax_63) << 2) + data_1cd4384)
                    - eax_65) << 2) + edx_8)).b
                int32_t ebx_166
                ebx_166.b = esi_11[1]
                int32_t ebx_167 = ebx_166 + data_1cd439c
                
                if (ebx_166 + data_1cd439c s< 0)
                    data_1cd4388 = 0
                else
                    data_1cd4388 = 0xff
                
                data_1cd438c = *((ebx_167 << 2) + data_1c45564)
                int32_t ebx_170
                ebx_170.b = edi_13[1]
                int32_t eax_68 = data_1cd4388
                int32_t eax_70
                eax_70.b = edi_13[1]
                edi_13[1] = eax_70.b + (*(((eax_68 + *(((ebx_170 - eax_68) << 2) + data_1cd438c)
                    - eax_70) << 2) + edx_8)).b
                int32_t ebx_178
                ebx_178.b = esi_11[2]
                int32_t ebx_179 = ebx_178 + data_1cd43a0
                
                if (ebx_178 + data_1cd43a0 s< 0)
                    data_1cd4390 = 0
                else
                    data_1cd4390 = 0xff
                
                data_1cd4394 = *((ebx_179 << 2) + data_1c45564)
                int32_t ebx_182
                ebx_182.b = edi_13[2]
                int32_t eax_73 = data_1cd4390
                int32_t eax_75
                eax_75.b = edi_13[2]
                eax_76 = eax_75.b + (*(((eax_73 + *(((ebx_182 - eax_73) << 2) + data_1cd4394)
                    - eax_75) << 2) + edx_8)).b
                edi_13[2] = eax_76
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
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        char eax_91
        int32_t i_5
        
        do
            int32_t edx_11 = data_1cd43a4
            int32_t ebx_193
            ebx_193.b = *esi_13
            int32_t ebx_194 = ebx_193 + data_1cd4398
            
            if (ebx_193 + data_1cd4398 s< 0)
                data_1cd4380 = 0
            else
                data_1cd4380 = 0xff
            
            data_1cd4384 = *((ebx_194 << 2) + data_1c45564)
            int32_t ebx_197
            ebx_197.b = *edi_16
            int32_t eax_78 = data_1cd4380
            int32_t eax_80
            eax_80.b = *edi_16
            *edi_16 = eax_80.b + (
                *(((eax_78 + *(((ebx_197 - eax_78) << 2) + data_1cd4384) - eax_80) << 2) + edx_11)).b
            int32_t ebx_205
            ebx_205.b = esi_13[1]
            int32_t ebx_206 = ebx_205 + data_1cd439c
            
            if (ebx_205 + data_1cd439c s< 0)
                data_1cd4388 = 0
            else
                data_1cd4388 = 0xff
            
            data_1cd438c = *((ebx_206 << 2) + data_1c45564)
            int32_t ebx_209
            ebx_209.b = edi_16[1]
            int32_t eax_83 = data_1cd4388
            int32_t eax_85
            eax_85.b = edi_16[1]
            edi_16[1] = eax_85.b + (
                *(((eax_83 + *(((ebx_209 - eax_83) << 2) + data_1cd438c) - eax_85) << 2) + edx_11)).b
            int32_t ebx_217
            ebx_217.b = esi_13[2]
            int32_t ebx_218 = ebx_217 + data_1cd43a0
            
            if (ebx_217 + data_1cd43a0 s< 0)
                data_1cd4390 = 0
            else
                data_1cd4390 = 0xff
            
            data_1cd4394 = *((ebx_218 << 2) + data_1c45564)
            int32_t ebx_221
            ebx_221.b = edi_16[2]
            int32_t eax_88 = data_1cd4390
            int32_t eax_90
            eax_90.b = edi_16[2]
            eax_91 = eax_90.b + (
                *(((eax_88 + *(((ebx_221 - eax_88) << 2) + data_1cd4394) - eax_90) << 2) + edx_11)).b
            edi_16[2] = eax_91
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
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
        int32_t edx_13 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5e76d5:
        int32_t edx_14 = data_1cd43a4
        int32_t ebx_231
        ebx_231.b = *esi_15
        int32_t ebx_232 = ebx_231 + data_1cd4398
        
        if (ebx_231 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_232 << 2) + data_1c45564)
        int32_t ebx_235
        ebx_235.b = *edi_19
        int32_t eax_93 = data_1cd4380
        int32_t eax_95
        eax_95.b = *edi_19
        *edi_19 = eax_95.b +
            (*(((eax_93 + *(((ebx_235 - eax_93) << 2) + data_1cd4384) - eax_95) << 2) + edx_14)).b
        int32_t ebx_243
        ebx_243.b = esi_15[1]
        int32_t ebx_244 = ebx_243 + data_1cd439c
        
        if (ebx_243 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_244 << 2) + data_1c45564)
        int32_t ebx_247
        ebx_247.b = edi_19[1]
        int32_t eax_98 = data_1cd4388
        int32_t eax_100
        eax_100.b = edi_19[1]
        edi_19[1] = eax_100.b +
            (*(((eax_98 + *(((ebx_247 - eax_98) << 2) + data_1cd438c) - eax_100) << 2) + edx_14)).b
        int32_t ebx_255
        ebx_255.b = esi_15[2]
        int32_t ebx_256 = ebx_255 + data_1cd43a0
        
        if (ebx_255 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_256 << 2) + data_1c45564)
        int32_t ebx_259
        ebx_259.b = edi_19[2]
        int32_t eax_103 = data_1cd4390
        int32_t eax_105
        eax_105.b = edi_19[2]
        char eax_106 = eax_105.b + (
            *(((eax_103 + *(((ebx_259 - eax_103) << 2) + data_1cd4394) - eax_105) << 2) + edx_14)).b
        edi_19[2] = eax_106
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
                    goto label_5e781b
                
                goto label_5e76d5
            
            int32_t temp59_1 = ecx_13
            ecx_13 -= 1
            
            if (temp59_1 == 1)
            label_5e781b:
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
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5e786c:
        int32_t edx_17 = data_1cd43a4
        int32_t ebx_269
        ebx_269.b = *esi_18
        int32_t ebx_270 = ebx_269 + data_1cd4398
        
        if (ebx_269 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_270 << 2) + data_1c45564)
        int32_t ebx_273
        ebx_273.b = *edi_22
        int32_t eax_108 = data_1cd4380
        int32_t eax_110
        eax_110.b = *edi_22
        *edi_22 = eax_110.b + (
            *(((eax_108 + *(((ebx_273 - eax_108) << 2) + data_1cd4384) - eax_110) << 2) + edx_17)).b
        int32_t ebx_281
        ebx_281.b = esi_18[1]
        int32_t ebx_282 = ebx_281 + data_1cd439c
        
        if (ebx_281 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_282 << 2) + data_1c45564)
        int32_t ebx_285
        ebx_285.b = edi_22[1]
        int32_t eax_113 = data_1cd4388
        int32_t eax_115
        eax_115.b = edi_22[1]
        edi_22[1] = eax_115.b + (
            *(((eax_113 + *(((ebx_285 - eax_113) << 2) + data_1cd438c) - eax_115) << 2) + edx_17)).b
        int32_t ebx_293
        ebx_293.b = esi_18[2]
        int32_t ebx_294 = ebx_293 + data_1cd43a0
        
        if (ebx_293 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_294 << 2) + data_1c45564)
        int32_t ebx_297
        ebx_297.b = edi_22[2]
        int32_t eax_118 = data_1cd4390
        int32_t eax_120
        eax_120.b = edi_22[2]
        char eax_121 = eax_120.b + (
            *(((eax_118 + *(((ebx_297 - eax_118) << 2) + data_1cd4394) - eax_120) << 2) + edx_17)).b
        edi_22[2] = eax_121
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
                    goto label_5e79b1
                
                goto label_5e786c
            
            int32_t temp65_1 = ecx_16
            ecx_16 -= 1
            
            if (temp65_1 == 1)
            label_5e79b1:
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
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5e7a0c:
        int32_t edx_20 = data_1cd43a4
        int32_t ebx_308
        ebx_308.b = *esi_20
        int32_t ebx_309 = ebx_308 + data_1cd4398
        
        if (ebx_308 + data_1cd4398 s< 0)
            data_1cd4380 = 0
        else
            data_1cd4380 = 0xff
        
        data_1cd4384 = *((ebx_309 << 2) + data_1c45564)
        int32_t ebx_312
        ebx_312.b = *edi_25
        int32_t eax_123 = data_1cd4380
        int32_t eax_125
        eax_125.b = *edi_25
        *edi_25 = eax_125.b + (
            *(((eax_123 + *(((ebx_312 - eax_123) << 2) + data_1cd4384) - eax_125) << 2) + edx_20)).b
        int32_t ebx_320
        ebx_320.b = esi_20[1]
        int32_t ebx_321 = ebx_320 + data_1cd439c
        
        if (ebx_320 + data_1cd439c s< 0)
            data_1cd4388 = 0
        else
            data_1cd4388 = 0xff
        
        data_1cd438c = *((ebx_321 << 2) + data_1c45564)
        int32_t ebx_324
        ebx_324.b = edi_25[1]
        int32_t eax_128 = data_1cd4388
        int32_t eax_130
        eax_130.b = edi_25[1]
        edi_25[1] = eax_130.b + (
            *(((eax_128 + *(((ebx_324 - eax_128) << 2) + data_1cd438c) - eax_130) << 2) + edx_20)).b
        int32_t ebx_332
        ebx_332.b = esi_20[2]
        int32_t ebx_333 = ebx_332 + data_1cd43a0
        
        if (ebx_332 + data_1cd43a0 s< 0)
            data_1cd4390 = 0
        else
            data_1cd4390 = 0xff
        
        data_1cd4394 = *((ebx_333 << 2) + data_1c45564)
        int32_t ebx_336
        ebx_336.b = edi_25[2]
        int32_t eax_133 = data_1cd4390
        int32_t eax_135
        eax_135.b = edi_25[2]
        char eax_136 = eax_135.b + (
            *(((eax_133 + *(((ebx_336 - eax_133) << 2) + data_1cd4394) - eax_135) << 2) + edx_20)).b
        edi_25[2] = eax_136
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
                    goto label_5e7b4f
                
                goto label_5e7a0c
            
            int32_t temp68_1 = ecx_19
            ecx_19 -= 1
            
            if (temp68_1 == 1)
            label_5e7b4f:
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

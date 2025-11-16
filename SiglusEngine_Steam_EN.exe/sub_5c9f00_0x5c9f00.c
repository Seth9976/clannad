// 函数: sub_5c9f00
// 地址: 0x5c9f00
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
                        int32_t eax_3
                        eax_3.b = *edi_1
                        *edi_1 = eax_3.b + (*(((eax_1 + *(((ebx_9 - eax_1) << 2) + data_1cd43c8)
                            - eax_3) << 2) + edx_1)).b
                        int32_t ebx_17
                        ebx_17.b = *(esi_1 + 1)
                        int32_t eax_5
                        eax_5.b = not.b(ebx_17.b)
                        int32_t eax_7
                        eax_7.b = edi_1[1]
                        edi_1[1] = eax_7.b + (*(((eax_5 + *(((ebx_17 - eax_5) << 2) + data_1cd43c8)
                            - eax_7) << 2) + edx_1)).b
                        int32_t ebx_25
                        ebx_25.b = *(esi_1 + 2)
                        int32_t eax_9
                        eax_9.b = not.b(ebx_25.b)
                        int32_t eax_11
                        eax_11.b = edi_1[2]
                        result = eax_11 + *(((eax_9 + *(((ebx_25 - eax_9) << 2) + data_1cd43c8)
                            - eax_11) << 2) + edx_1)
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
        int32_t ebx_34 = data_1cd4414
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_35
                ebx_35.b = *(esi_4 + 3)
                ebx_35.b = ebx_35.b
                
                if (ebx_35.b != 0)
                    int32_t ebx_40
                    ebx_40.b = (*(*((ebx_35 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_40.b != 0)
                        int32_t edx_2 = *((ebx_40 << 2) + data_1cd4328)
                        int32_t ebx_43
                        ebx_43.b = *esi_4
                        int32_t eax_12
                        eax_12.b = not.b(ebx_43.b)
                        int32_t eax_14
                        eax_14.b = *edi_4
                        *edi_4 = eax_14.b + (*(((eax_12 + *(((ebx_43 - eax_12) << 2) + data_1cd43c8)
                            - eax_14) << 2) + edx_2)).b
                        int32_t ebx_51
                        ebx_51.b = *(esi_4 + 1)
                        int32_t eax_16
                        eax_16.b = not.b(ebx_51.b)
                        int32_t eax_18
                        eax_18.b = edi_4[1]
                        edi_4[1] = eax_18.b + (*(((eax_16
                            + *(((ebx_51 - eax_16) << 2) + data_1cd43c8) - eax_18) << 2) + edx_2)).b
                        int32_t ebx_59
                        ebx_59.b = *(esi_4 + 2)
                        int32_t eax_20
                        eax_20.b = not.b(ebx_59.b)
                        int32_t eax_22
                        eax_22.b = edi_4[2]
                        result = eax_22 + *(((eax_20 + *(((ebx_59 - eax_20) << 2) + data_1cd43c8)
                            - eax_22) << 2) + edx_2)
                        edi_4[2] = result.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_34 += data_1cd43f4
            
            if (ebx_34 s>= data_1cd43ec)
                ebx_34 -= data_1cd43ec
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
    int32_t ebx_69 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t i_2
        
        do
            int32_t ebx_70
            ebx_70.b = *(esi_6 + 3)
            ebx_70.b = ebx_70.b
            
            if (ebx_70.b != 0)
                int32_t ebx_75
                ebx_75.b = (*(*((ebx_70 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_75.b != 0)
                    int32_t edx_3 = *((ebx_75 << 2) + data_1cd4328)
                    int32_t ebx_78
                    ebx_78.b = *esi_6
                    int32_t eax_23
                    eax_23.b = not.b(ebx_78.b)
                    int32_t eax_25
                    eax_25.b = *edi_7
                    *edi_7 = eax_25.b + (*(((eax_23 + *(((ebx_78 - eax_23) << 2) + data_1cd43c8)
                        - eax_25) << 2) + edx_3)).b
                    int32_t ebx_86
                    ebx_86.b = *(esi_6 + 1)
                    int32_t eax_27
                    eax_27.b = not.b(ebx_86.b)
                    int32_t eax_29
                    eax_29.b = edi_7[1]
                    edi_7[1] = eax_29.b + (*(((eax_27 + *(((ebx_86 - eax_27) << 2) + data_1cd43c8)
                        - eax_29) << 2) + edx_3)).b
                    int32_t ebx_94
                    ebx_94.b = *(esi_6 + 2)
                    int32_t eax_31
                    eax_31.b = not.b(ebx_94.b)
                    int32_t eax_33
                    eax_33.b = edi_7[2]
                    result = eax_33 + *(((eax_31 + *(((ebx_94 - eax_31) << 2) + data_1cd43c8)
                        - eax_33) << 2) + edx_3)
                    edi_7[2] = result.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_102 = ebx_69
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_102 += data_1cd43ec
            
            if (ebx_102 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_69 = ebx_102 - data_1cd43f4
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
                int32_t ebx_104
                ebx_104.b = *(esi_8 + 3)
                ebx_104.b = ebx_104.b
                
                if (ebx_104.b != 0)
                    int32_t ebx_109
                    ebx_109.b = (*(*((ebx_104 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_109.b != 0)
                        int32_t edx_5 = *((ebx_109 << 2) + data_1cd4328)
                        int32_t ebx_112
                        ebx_112.b = *esi_8
                        int32_t eax_34
                        eax_34.b = not.b(ebx_112.b)
                        int32_t eax_36
                        eax_36.b = *edi_10
                        *edi_10 = eax_36.b + (*(((eax_34
                            + *(((ebx_112 - eax_34) << 2) + data_1cd43c8) - eax_36) << 2) + edx_5)).b
                        int32_t ebx_120
                        ebx_120.b = *(esi_8 + 1)
                        int32_t eax_38
                        eax_38.b = not.b(ebx_120.b)
                        int32_t eax_40
                        eax_40.b = edi_10[1]
                        edi_10[1] = eax_40.b + (*(((eax_38
                            + *(((ebx_120 - eax_38) << 2) + data_1cd43c8) - eax_40) << 2) + edx_5)).b
                        int32_t ebx_128
                        ebx_128.b = *(esi_8 + 2)
                        int32_t eax_42
                        eax_42.b = not.b(ebx_128.b)
                        int32_t eax_44
                        eax_44.b = edi_10[2]
                        result = eax_44 + *(((eax_42 + *(((ebx_128 - eax_42) << 2) + data_1cd43c8)
                            - eax_44) << 2) + edx_5)
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
        int32_t ebx_137 = data_1cd4414
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_138
                ebx_138.b = *(esi_11 + 3)
                ebx_138.b = ebx_138.b
                
                if (ebx_138.b != 0)
                    int32_t ebx_143
                    ebx_143.b = (*(*((ebx_138 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_143.b != 0)
                        int32_t edx_8 = *((ebx_143 << 2) + data_1cd4328)
                        int32_t ebx_146
                        ebx_146.b = *esi_11
                        int32_t eax_45
                        eax_45.b = not.b(ebx_146.b)
                        int32_t eax_47
                        eax_47.b = *edi_13
                        *edi_13 = eax_47.b + (*(((eax_45
                            + *(((ebx_146 - eax_45) << 2) + data_1cd43c8) - eax_47) << 2) + edx_8)).b
                        int32_t ebx_154
                        ebx_154.b = *(esi_11 + 1)
                        int32_t eax_49
                        eax_49.b = not.b(ebx_154.b)
                        int32_t eax_51
                        eax_51.b = edi_13[1]
                        edi_13[1] = eax_51.b + (*(((eax_49
                            + *(((ebx_154 - eax_49) << 2) + data_1cd43c8) - eax_51) << 2) + edx_8)).b
                        int32_t ebx_162
                        ebx_162.b = *(esi_11 + 2)
                        int32_t eax_53
                        eax_53.b = not.b(ebx_162.b)
                        int32_t eax_55
                        eax_55.b = edi_13[2]
                        result = eax_55 + *(((eax_53 + *(((ebx_162 - eax_53) << 2) + data_1cd43c8)
                            - eax_55) << 2) + edx_8)
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
            ebx_137 += data_1cd43f4
            
            if (ebx_137 s>= data_1cd43ec)
                ebx_137 -= data_1cd43ec
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
    int32_t ebx_172 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t i_5
        
        do
            int32_t ebx_173
            ebx_173.b = *(esi_13 + 3)
            ebx_173.b = ebx_173.b
            
            if (ebx_173.b != 0)
                int32_t ebx_178
                ebx_178.b = (*(*((ebx_173 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_178.b != 0)
                    int32_t edx_11 = *((ebx_178 << 2) + data_1cd4328)
                    int32_t ebx_181
                    ebx_181.b = *esi_13
                    int32_t eax_56
                    eax_56.b = not.b(ebx_181.b)
                    int32_t eax_58
                    eax_58.b = *edi_16
                    *edi_16 = eax_58.b + (*(((eax_56 + *(((ebx_181 - eax_56) << 2) + data_1cd43c8)
                        - eax_58) << 2) + edx_11)).b
                    int32_t ebx_189
                    ebx_189.b = *(esi_13 + 1)
                    int32_t eax_60
                    eax_60.b = not.b(ebx_189.b)
                    int32_t eax_62
                    eax_62.b = edi_16[1]
                    edi_16[1] = eax_62.b + (*(((eax_60 + *(((ebx_189 - eax_60) << 2) + data_1cd43c8)
                        - eax_62) << 2) + edx_11)).b
                    int32_t ebx_197
                    ebx_197.b = *(esi_13 + 2)
                    int32_t eax_64
                    eax_64.b = not.b(ebx_197.b)
                    int32_t eax_66
                    eax_66.b = edi_16[2]
                    result = eax_66 + *(((eax_64 + *(((ebx_197 - eax_64) << 2) + data_1cd43c8)
                        - eax_66) << 2) + edx_11)
                    edi_16[2] = result.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_205 = ebx_172
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_205 += data_1cd43ec
            
            if (ebx_205 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_172 = ebx_205 - data_1cd43f4
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
    label_5c9b87:
        int32_t ebx_207
        ebx_207.b = *(esi_15 + 3)
        ebx_207.b = ebx_207.b
        
        if (ebx_207.b != 0)
            int32_t ebx_212
            ebx_212.b = (*(*((ebx_207 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_212.b != 0)
                int32_t edx_14 = *((ebx_212 << 2) + data_1cd4328)
                int32_t ebx_215
                ebx_215.b = *esi_15
                int32_t eax_67
                eax_67.b = not.b(ebx_215.b)
                int32_t eax_69
                eax_69.b = *edi_19
                *edi_19 = eax_69.b + (*(((eax_67 + *(((ebx_215 - eax_67) << 2) + data_1cd43c8)
                    - eax_69) << 2) + edx_14)).b
                int32_t ebx_223
                ebx_223.b = *(esi_15 + 1)
                int32_t eax_71
                eax_71.b = not.b(ebx_223.b)
                int32_t eax_73
                eax_73.b = edi_19[1]
                edi_19[1] = eax_73.b + (*(((eax_71 + *(((ebx_223 - eax_71) << 2) + data_1cd43c8)
                    - eax_73) << 2) + edx_14)).b
                int32_t ebx_231
                ebx_231.b = *(esi_15 + 2)
                int32_t eax_75
                eax_75.b = not.b(ebx_231.b)
                int32_t eax_77
                eax_77.b = edi_19[2]
                result = eax_77 + *(((eax_75 + *(((ebx_231 - eax_75) << 2) + data_1cd43c8) - eax_77)
                    << 2) + edx_14)
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
                    goto label_5c9c5f
                
                goto label_5c9b87
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5c9c5f:
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
    int32_t ebx_240 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5c9cae:
        int32_t ebx_241
        ebx_241.b = *(esi_18 + 3)
        ebx_241.b = ebx_241.b
        
        if (ebx_241.b != 0)
            int32_t ebx_246
            ebx_246.b = (*(*((ebx_241 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_246.b != 0)
                int32_t edx_17 = *((ebx_246 << 2) + data_1cd4328)
                int32_t ebx_249
                ebx_249.b = *esi_18
                int32_t eax_78
                eax_78.b = not.b(ebx_249.b)
                int32_t eax_80
                eax_80.b = *edi_22
                *edi_22 = eax_80.b + (*(((eax_78 + *(((ebx_249 - eax_78) << 2) + data_1cd43c8)
                    - eax_80) << 2) + edx_17)).b
                int32_t ebx_257
                ebx_257.b = *(esi_18 + 1)
                int32_t eax_82
                eax_82.b = not.b(ebx_257.b)
                int32_t eax_84
                eax_84.b = edi_22[1]
                edi_22[1] = eax_84.b + (*(((eax_82 + *(((ebx_257 - eax_82) << 2) + data_1cd43c8)
                    - eax_84) << 2) + edx_17)).b
                int32_t ebx_265
                ebx_265.b = *(esi_18 + 2)
                int32_t eax_86
                eax_86.b = not.b(ebx_265.b)
                int32_t eax_88
                eax_88.b = edi_22[2]
                result = eax_88 + *(((eax_86 + *(((ebx_265 - eax_86) << 2) + data_1cd43c8) - eax_88)
                    << 2) + edx_17)
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
                    goto label_5c9d85
                
                goto label_5c9cae
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5c9d85:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_240 += data_1cd43f4
                
                if (ebx_240 s>= data_1cd43ec)
                    ebx_240 -= data_1cd43ec
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
    int32_t ebx_275 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5c9dee:
        int32_t ebx_276
        ebx_276.b = *(esi_20 + 3)
        ebx_276.b = ebx_276.b
        
        if (ebx_276.b != 0)
            int32_t ebx_281
            ebx_281.b = (*(*((ebx_276 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_281.b != 0)
                int32_t edx_20 = *((ebx_281 << 2) + data_1cd4328)
                int32_t ebx_284
                ebx_284.b = *esi_20
                int32_t eax_89
                eax_89.b = not.b(ebx_284.b)
                int32_t eax_91
                eax_91.b = *edi_25
                *edi_25 = eax_91.b + (*(((eax_89 + *(((ebx_284 - eax_89) << 2) + data_1cd43c8)
                    - eax_91) << 2) + edx_20)).b
                int32_t ebx_292
                ebx_292.b = *(esi_20 + 1)
                int32_t eax_93
                eax_93.b = not.b(ebx_292.b)
                int32_t eax_95
                eax_95.b = edi_25[1]
                edi_25[1] = eax_95.b + (*(((eax_93 + *(((ebx_292 - eax_93) << 2) + data_1cd43c8)
                    - eax_95) << 2) + edx_20)).b
                int32_t ebx_300
                ebx_300.b = *(esi_20 + 2)
                int32_t eax_97
                eax_97.b = not.b(ebx_300.b)
                int32_t eax_99
                eax_99.b = edi_25[2]
                result = eax_99 + *(((eax_97 + *(((ebx_300 - eax_97) << 2) + data_1cd43c8) - eax_99)
                    << 2) + edx_20)
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
                    goto label_5c9ec3
                
                goto label_5c9dee
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5c9ec3:
                int32_t ebx_308 = ebx_275
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_308 += data_1cd43ec
                    
                    if (ebx_308 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_275 = ebx_308 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return result
                
                break

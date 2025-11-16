// 函数: sub_5c4e50
// 地址: 0x5c4e50
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
                        eax_1.b = *edi_1
                        *edi_1 = eax_1.b + (*(((ebx_9 - eax_1) << 2) + edx_1)).b
                        int32_t ebx_13
                        ebx_13.b = *(esi_1 + 1)
                        int32_t eax_3
                        eax_3.b = edi_1[1]
                        edi_1[1] = eax_3.b + (*(((ebx_13 - eax_3) << 2) + edx_1)).b
                        int32_t ebx_17
                        ebx_17.b = *(esi_1 + 2)
                        int32_t eax_5
                        eax_5.b = edi_1[2]
                        result = eax_5 + *(((ebx_17 - eax_5) << 2) + edx_1)
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
        int32_t ebx_22 = data_1cd4414
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t ebx_23
                ebx_23.b = *(esi_4 + 3)
                ebx_23.b = ebx_23.b
                
                if (ebx_23.b != 0)
                    int32_t ebx_28
                    ebx_28.b = (*(*((ebx_23 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_28.b != 0)
                        int32_t edx_2 = *((ebx_28 << 2) + data_1cd4328)
                        int32_t ebx_31
                        ebx_31.b = *esi_4
                        int32_t eax_6
                        eax_6.b = *edi_4
                        *edi_4 = eax_6.b + (*(((ebx_31 - eax_6) << 2) + edx_2)).b
                        int32_t ebx_35
                        ebx_35.b = *(esi_4 + 1)
                        int32_t eax_8
                        eax_8.b = edi_4[1]
                        edi_4[1] = eax_8.b + (*(((ebx_35 - eax_8) << 2) + edx_2)).b
                        int32_t ebx_39
                        ebx_39.b = *(esi_4 + 2)
                        int32_t eax_10
                        eax_10.b = edi_4[2]
                        result = eax_10 + *(((ebx_39 - eax_10) << 2) + edx_2)
                        edi_4[2] = result.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_22 += data_1cd43f4
            
            if (ebx_22 s>= data_1cd43ec)
                ebx_22 -= data_1cd43ec
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
    int32_t ebx_45 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t i_2
        
        do
            int32_t ebx_46
            ebx_46.b = *(esi_6 + 3)
            ebx_46.b = ebx_46.b
            
            if (ebx_46.b != 0)
                int32_t ebx_51
                ebx_51.b = (*(*((ebx_46 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_51.b != 0)
                    int32_t edx_3 = *((ebx_51 << 2) + data_1cd4328)
                    int32_t ebx_54
                    ebx_54.b = *esi_6
                    int32_t eax_11
                    eax_11.b = *edi_7
                    *edi_7 = eax_11.b + (*(((ebx_54 - eax_11) << 2) + edx_3)).b
                    int32_t ebx_58
                    ebx_58.b = *(esi_6 + 1)
                    int32_t eax_13
                    eax_13.b = edi_7[1]
                    edi_7[1] = eax_13.b + (*(((ebx_58 - eax_13) << 2) + edx_3)).b
                    int32_t ebx_62
                    ebx_62.b = *(esi_6 + 2)
                    int32_t eax_15
                    eax_15.b = edi_7[2]
                    result = eax_15 + *(((ebx_62 - eax_15) << 2) + edx_3)
                    edi_7[2] = result.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_66 = ebx_45
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_66 += data_1cd43ec
            
            if (ebx_66 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_45 = ebx_66 - data_1cd43f4
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
                int32_t ebx_68
                ebx_68.b = *(esi_8 + 3)
                ebx_68.b = ebx_68.b
                
                if (ebx_68.b != 0)
                    int32_t ebx_73
                    ebx_73.b = (*(*((ebx_68 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_73.b != 0)
                        int32_t edx_5 = *((ebx_73 << 2) + data_1cd4328)
                        int32_t ebx_76
                        ebx_76.b = *esi_8
                        int32_t eax_16
                        eax_16.b = *edi_10
                        *edi_10 = eax_16.b + (*(((ebx_76 - eax_16) << 2) + edx_5)).b
                        int32_t ebx_80
                        ebx_80.b = *(esi_8 + 1)
                        int32_t eax_18
                        eax_18.b = edi_10[1]
                        edi_10[1] = eax_18.b + (*(((ebx_80 - eax_18) << 2) + edx_5)).b
                        int32_t ebx_84
                        ebx_84.b = *(esi_8 + 2)
                        int32_t eax_20
                        eax_20.b = edi_10[2]
                        result = eax_20 + *(((ebx_84 - eax_20) << 2) + edx_5)
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
        int32_t ebx_89 = data_1cd4414
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t ebx_90
                ebx_90.b = *(esi_11 + 3)
                ebx_90.b = ebx_90.b
                
                if (ebx_90.b != 0)
                    int32_t ebx_95
                    ebx_95.b = (*(*((ebx_90 << 2) + data_1cd4328) + data_1cd43ac)).b
                    
                    if (ebx_95.b != 0)
                        int32_t edx_8 = *((ebx_95 << 2) + data_1cd4328)
                        int32_t ebx_98
                        ebx_98.b = *esi_11
                        int32_t eax_21
                        eax_21.b = *edi_13
                        *edi_13 = eax_21.b + (*(((ebx_98 - eax_21) << 2) + edx_8)).b
                        int32_t ebx_102
                        ebx_102.b = *(esi_11 + 1)
                        int32_t eax_23
                        eax_23.b = edi_13[1]
                        edi_13[1] = eax_23.b + (*(((ebx_102 - eax_23) << 2) + edx_8)).b
                        int32_t ebx_106
                        ebx_106.b = *(esi_11 + 2)
                        int32_t eax_25
                        eax_25.b = edi_13[2]
                        result = eax_25 + *(((ebx_106 - eax_25) << 2) + edx_8)
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
            ebx_89 += data_1cd43f4
            
            if (ebx_89 s>= data_1cd43ec)
                ebx_89 -= data_1cd43ec
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
    int32_t ebx_112 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t i_5
        
        do
            int32_t ebx_113
            ebx_113.b = *(esi_13 + 3)
            ebx_113.b = ebx_113.b
            
            if (ebx_113.b != 0)
                int32_t ebx_118
                ebx_118.b = (*(*((ebx_113 << 2) + data_1cd4328) + data_1cd43ac)).b
                
                if (ebx_118.b != 0)
                    int32_t edx_11 = *((ebx_118 << 2) + data_1cd4328)
                    int32_t ebx_121
                    ebx_121.b = *esi_13
                    int32_t eax_26
                    eax_26.b = *edi_16
                    *edi_16 = eax_26.b + (*(((ebx_121 - eax_26) << 2) + edx_11)).b
                    int32_t ebx_125
                    ebx_125.b = *(esi_13 + 1)
                    int32_t eax_28
                    eax_28.b = edi_16[1]
                    edi_16[1] = eax_28.b + (*(((ebx_125 - eax_28) << 2) + edx_11)).b
                    int32_t ebx_129
                    ebx_129.b = *(esi_13 + 2)
                    int32_t eax_30
                    eax_30.b = edi_16[2]
                    result = eax_30 + *(((ebx_129 - eax_30) << 2) + edx_11)
                    edi_16[2] = result.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_133 = ebx_112
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_133 += data_1cd43ec
            
            if (ebx_133 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_112 = ebx_133 - data_1cd43f4
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
    label_5c4b97:
        int32_t ebx_135
        ebx_135.b = *(esi_15 + 3)
        ebx_135.b = ebx_135.b
        
        if (ebx_135.b != 0)
            int32_t ebx_140
            ebx_140.b = (*(*((ebx_135 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_140.b != 0)
                int32_t edx_14 = *((ebx_140 << 2) + data_1cd4328)
                int32_t ebx_143
                ebx_143.b = *esi_15
                int32_t eax_31
                eax_31.b = *edi_19
                *edi_19 = eax_31.b + (*(((ebx_143 - eax_31) << 2) + edx_14)).b
                int32_t ebx_147
                ebx_147.b = *(esi_15 + 1)
                int32_t eax_33
                eax_33.b = edi_19[1]
                edi_19[1] = eax_33.b + (*(((ebx_147 - eax_33) << 2) + edx_14)).b
                int32_t ebx_151
                ebx_151.b = *(esi_15 + 2)
                int32_t eax_35
                eax_35.b = edi_19[2]
                result = eax_35 + *(((ebx_151 - eax_35) << 2) + edx_14)
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
                    goto label_5c4c30
                
                goto label_5c4b97
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5c4c30:
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
    int32_t ebx_156 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5c4c7e:
        int32_t ebx_157
        ebx_157.b = *(esi_18 + 3)
        ebx_157.b = ebx_157.b
        
        if (ebx_157.b != 0)
            int32_t ebx_162
            ebx_162.b = (*(*((ebx_157 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_162.b != 0)
                int32_t edx_17 = *((ebx_162 << 2) + data_1cd4328)
                int32_t ebx_165
                ebx_165.b = *esi_18
                int32_t eax_36
                eax_36.b = *edi_22
                *edi_22 = eax_36.b + (*(((ebx_165 - eax_36) << 2) + edx_17)).b
                int32_t ebx_169
                ebx_169.b = *(esi_18 + 1)
                int32_t eax_38
                eax_38.b = edi_22[1]
                edi_22[1] = eax_38.b + (*(((ebx_169 - eax_38) << 2) + edx_17)).b
                int32_t ebx_173
                ebx_173.b = *(esi_18 + 2)
                int32_t eax_40
                eax_40.b = edi_22[2]
                result = eax_40 + *(((ebx_173 - eax_40) << 2) + edx_17)
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
                    goto label_5c4d16
                
                goto label_5c4c7e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5c4d16:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_156 += data_1cd43f4
                
                if (ebx_156 s>= data_1cd43ec)
                    ebx_156 -= data_1cd43ec
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
    int32_t ebx_179 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5c4d7e:
        int32_t ebx_180
        ebx_180.b = *(esi_20 + 3)
        ebx_180.b = ebx_180.b
        
        if (ebx_180.b != 0)
            int32_t ebx_185
            ebx_185.b = (*(*((ebx_180 << 2) + data_1cd4328) + data_1cd43ac)).b
            
            if (ebx_185.b != 0)
                int32_t edx_20 = *((ebx_185 << 2) + data_1cd4328)
                int32_t ebx_188
                ebx_188.b = *esi_20
                int32_t eax_41
                eax_41.b = *edi_25
                *edi_25 = eax_41.b + (*(((ebx_188 - eax_41) << 2) + edx_20)).b
                int32_t ebx_192
                ebx_192.b = *(esi_20 + 1)
                int32_t eax_43
                eax_43.b = edi_25[1]
                edi_25[1] = eax_43.b + (*(((ebx_192 - eax_43) << 2) + edx_20)).b
                int32_t ebx_196
                ebx_196.b = *(esi_20 + 2)
                int32_t eax_45
                eax_45.b = edi_25[2]
                result = eax_45 + *(((ebx_196 - eax_45) << 2) + edx_20)
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
                    goto label_5c4e14
                
                goto label_5c4d7e
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5c4e14:
                int32_t ebx_200 = ebx_179
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_200 += data_1cd43ec
                    
                    if (ebx_200 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_179 = ebx_200 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return result
                
                break

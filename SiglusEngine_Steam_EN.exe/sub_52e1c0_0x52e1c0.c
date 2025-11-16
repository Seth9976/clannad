// 函数: sub_52e1c0
// 地址: 0x52e1c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t i = data_1bfdd30
int32_t edi
int32_t var_18 = edi

if (i s> 0x190)
    if (i s> 0x3e8)
        char var_24
        char** eax_103
        
        if (i s> 0x7d0)
            if (i s> 0xbb8)
                if (i != 0xbb9)
                    data_1b8b06c = 1
                    return i
                
                i = data_1af1728
                data_715e98 = i
                return i
            
            if (i == 0xbb8)
                int32_t eax_157 = data_1af4e84
                
                if (eax_157 == 0)
                    sub_4ef190(eax_157, &arg2[8], arg2[8], U"$", &data_1b8a720)
                    int32_t eax_162 = data_1b8a720
                    data_976b40 = eax_162
                    return eax_162
                
                i = eax_157 - 1
                
                if (eax_157 != 1)
                    return i
                
                sub_4ef190(i, &arg2[8], arg2[8], "$$$", &data_1b8a720)
                data_976b40 = data_1b8a720
                data_976b44 = data_1b8a734
                int32_t eax_161 = data_1b8a748
                data_976b48 = eax_161
                return eax_161
            
            i -= 0x7d1
            
            if (i u> 0x22)
                data_1b8b06c = 1
                return i
            
            i = zx.d(lookup_table_5306e4[i])
            char var_24_2
            char** eax_113
            void* ecx_121
            void* ecx_191
            
            switch (i)
                case 0
                    int32_t eax_109 = data_1af4e84
                    
                    if (eax_109 == 0)
                        eax_113 = sub_4ef190(eax_109, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        var_24_2 = 1
                    label_52f634:
                        ecx_121 = data_1b8a720
                        return sub_462870(eax_113, ecx_121, ecx_121, 1, var_24_2)
                    
                    i = eax_109 - 1
                    
                    if (eax_109 == 1)
                        return sub_462870(sub_4ef190(i, &arg2[8], arg2[8], "$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, 1, 1)
                    
                    return i
                case 1
                    i = data_1af4e84
                    
                    if (i u> 3)
                        return i
                    
                    char var_28_3
                    char var_24_1
                    char** eax_107
                    
                    switch (i)
                        case 0
                            char** eax_115 = sub_4ef190(i, &arg2[8], arg2[8], U"%", &data_1b8a720)
                            void* edx_72 = data_1b8a730
                            int32_t ecx_124 = data_1b8a72c
                            return sub_446550(eax_115, edx_72, ecx_124, ecx_124, edx_72, 0, 0)
                        case 1
                            char** eax_117 = sub_4ef190(i, &arg2[8], arg2[8], U"&%", &data_1b8a720)
                            void* edx_74 = data_1b8a730
                            int32_t ecx_127 = data_1b8a72c
                            return sub_446550(eax_117, edx_74, ecx_127, ecx_127, edx_74, 0, 0)
                        case 2
                            eax_107 = sub_4ef190(i, &arg2[8], arg2[8], "%%", &data_1b8a720)
                            var_24_1 = 0
                            var_28_3 = 0
                        case 3
                            eax_107 = sub_4ef190(i, &arg2[8], arg2[8], "&&", &data_1b8a720)
                            var_24_1 = 0
                            var_28_3 = 0
                    
                    return sub_446550(eax_107, data_1b8a730, data_1b8a72c, data_1b8a740, 
                        data_1b8a744, var_28_3, var_24_1)
                case 2
                    int32_t eax_119 = data_1af4e84
                    
                    if (eax_119 == 0)
                        eax_113 = sub_4ef190(eax_119, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        ecx_121 = data_1b8a720
                        return sub_462870(eax_113, ecx_121, ecx_121, 0, 0)
                    
                    i = eax_119 - 1
                    
                    if (eax_119 == 1)
                        return sub_462870(sub_4ef190(i, &arg2[8], arg2[8], "$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, 0, 0)
                    
                    return i
                case 3
                    i = data_1af4e84
                    
                    if (i u> 3)
                        return i
                    
                    switch (i)
                        case 0
                            eax_103 = sub_4ef190(i, &arg2[8], arg2[8], U"%", &data_1b8a720)
                            var_24 = 0
                        case 1
                            eax_103 = sub_4ef190(i, &arg2[8], arg2[8], U"&%", &data_1b8a720)
                            var_24 = 0
                        case 2
                            return sub_446550(
                                sub_4ef190(i, &arg2[8], arg2[8], "%%", &data_1b8a720), 
                                data_1b8a730, data_1b8a72c, data_1b8a740, data_1b8a744, 1, 0)
                        case 3
                            return sub_446550(
                                sub_4ef190(i, &arg2[8], arg2[8], "&&", &data_1b8a720), 
                                data_1b8a730, data_1b8a72c, data_1b8a740, data_1b8a744, 1, 0)
                case 4
                    int32_t eax_123 = data_1af4e84
                    
                    if (eax_123 == 0)
                        eax_113 = sub_4ef190(eax_123, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        var_24_2 = 0
                        goto label_52f634
                    
                    i = eax_123 - 1
                    
                    if (eax_123 == 1)
                        return sub_462870(sub_4ef190(i, &arg2[8], arg2[8], "$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, 1, 0)
                    
                    return i
                case 5
                    int32_t eax_127 = data_1af4e84
                    
                    if (eax_127 == 0)
                        i = sub_4ef190(eax_127, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        void* edx_89 = data_1b8a720
                        
                        if (edx_89 u<= 7)
                            *(edx_89 + &data_70374d) = 1
                            bool cond:7_1 = data_187a5c0 == 0
                            void* ecx_153 = &data_1606c30
                            *(edx_89 + 0x13113d9) = 1
                            
                            if (cond:7_1)
                                ecx_153 = nullptr
                            
                            i = &data_13932a0
                            
                            if (data_139319c == 0)
                                i = 0
                            
                            if (ecx_153 != 0)
                                *(ecx_153 + edx_89 + 0x58d) = 1
                            
                            if (i != 0)
                                *(i + edx_89 + 0x58d) = 1
                    else
                        i = eax_127 - 1
                        
                        if (eax_127 == 1)
                            int32_t esi_5 = data_187a5c0
                            int32_t edi_65 = data_139319c
                            
                            do
                                if (i u<= 7)
                                    *(i + &data_70374d) = 1
                                    void* edx_87 = &data_1606c30
                                    *(i + 0x13113d9) = 1
                                    
                                    if (esi_5 == 0)
                                        edx_87 = nullptr
                                    
                                    void* ecx_150 = &data_13932a0
                                    
                                    if (edi_65 == 0)
                                        ecx_150 = nullptr
                                    
                                    if (edx_87 != 0)
                                        *(edx_87 + i + 0x58d) = 1
                                    
                                    if (ecx_150 != 0)
                                        *(ecx_150 + i + 0x58d) = 1
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 6
                    int32_t eax_129 = data_1af4e84
                    
                    if (eax_129 == 0)
                        i = sub_4ef190(eax_129, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        void* edx_92 = data_1b8a720
                        
                        if (edx_92 u<= 7)
                            *(edx_92 + &data_70374d) = 0
                            bool cond:9_1 = data_187a5c0 == 0
                            void* ecx_157 = &data_1606c30
                            *(edx_92 + 0x13113d9) = 0
                            
                            if (cond:9_1)
                                ecx_157 = nullptr
                            
                            i = &data_13932a0
                            
                            if (data_139319c == 0)
                                i = 0
                            
                            if (ecx_157 != 0)
                                *(ecx_157 + edx_92 + 0x58d) = 0
                            
                            if (i != 0)
                                *(i + edx_92 + 0x58d) = 0
                    else
                        i = eax_129 - 1
                        
                        if (eax_129 == 1)
                            int32_t esi_6 = data_187a5c0
                            int32_t edi_68 = data_139319c
                            
                            do
                                if (i u<= 7)
                                    *(i + &data_70374d) = 0
                                    void* edx_90 = &data_1606c30
                                    *(i + 0x13113d9) = 0
                                    
                                    if (esi_6 == 0)
                                        edx_90 = nullptr
                                    
                                    void* ecx_154 = &data_13932a0
                                    
                                    if (edi_68 == 0)
                                        ecx_154 = nullptr
                                    
                                    if (edx_90 != 0)
                                        *(edx_90 + i + 0x58d) = 0
                                    
                                    if (ecx_154 != 0)
                                        *(ecx_154 + i + 0x58d) = 0
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 7
                    int32_t eax_131 = data_1af4e84
                    
                    if (eax_131 == 0)
                        sub_4ef190(eax_131, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u<= 7)
                            *(i + &data_70374d) = 1
                            *(i + 0x13113d9) = 1
                    else
                        i = eax_131 - 1
                        
                        if (eax_131 == 1)
                            do
                                if (i u<= 7)
                                    *(i + &data_70374d) = 1
                                    *(i + 0x13113d9) = 1
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 8
                    int32_t eax_133 = data_1af4e84
                    
                    if (eax_133 == 0)
                        sub_4ef190(eax_133, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u<= 7)
                            *(i + &data_70374d) = 0
                            *(i + 0x13113d9) = 0
                    else
                        i = eax_133 - 1
                        
                        if (eax_133 == 1)
                            do
                                if (i u<= 7)
                                    *(i + &data_70374d) = 0
                                    *(i + 0x13113d9) = 0
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 9
                    int32_t eax_135 = data_1af4e84
                    
                    if (eax_135 == 0)
                        i = sub_4ef190(eax_135, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        void* ecx_165 = data_1b8a720
                        
                        if (ecx_165 u<= 7)
                            *(ecx_165 + &data_70374d) = 1
                            bool cond:11_1 = data_187a5c0 == 0
                            i = &data_1606c30
                            *(ecx_165 + 0x13113d9) = 1
                            
                            if (cond:11_1)
                                i = 0
                            
                            if (i != 0)
                                *(i + ecx_165 + 0x58d) = 1
                    else
                        i = eax_135 - 1
                        
                        if (eax_135 == 1)
                            int32_t edx_95 = data_187a5c0
                            
                            do
                                if (i u<= 7)
                                    *(i + &data_70374d) = 1
                                    *(i + 0x13113d9) = 1
                                    void* ecx_162 = &data_1606c30
                                    
                                    if (edx_95 == 0)
                                        ecx_162 = nullptr
                                    
                                    if (ecx_162 != 0)
                                        *(ecx_162 + i + 0x58d) = 1
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 0xa
                    int32_t eax_137 = data_1af4e84
                    
                    if (eax_137 == 0)
                        i = sub_4ef190(eax_137, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        void* ecx_169 = data_1b8a720
                        
                        if (ecx_169 u<= 7)
                            i = &data_1606c30
                            bool cond:12_1 = data_187a5c0 == 0
                            *(ecx_169 + &data_70374d) = 0
                            
                            if (cond:12_1)
                                i = 0
                            
                            *(ecx_169 + 0x13113d9) = 0
                            
                            if (i != 0)
                                *(ecx_169 + i + 0x58d) = 0
                    else
                        i = eax_137 - 1
                        
                        if (eax_137 == 1)
                            int32_t edx_97 = data_187a5c0
                            
                            do
                                if (i u<= 7)
                                    *(i + &data_70374d) = 0
                                    *(i + 0x13113d9) = 0
                                    void* ecx_166 = &data_1606c30
                                    
                                    if (edx_97 == 0)
                                        ecx_166 = nullptr
                                    
                                    if (ecx_166 != 0)
                                        *(ecx_166 + i + 0x58d) = 0
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 0xb
                    int32_t eax_139 = data_1af4e84
                    
                    if (eax_139 == 0)
                        sub_4ef190(eax_139, &arg2[8], arg2[8], "$$", &data_1b8a720)
                        void* esi_8 = data_1b8a720
                        i = data_1b8a734
                        
                        if (esi_8 u<= 7 && i u<= 7)
                            *(esi_8 + 0x70376d) = i.b
                            bool cond:23_1 = data_187a5c0 == 0
                            void* edx_102 = &data_1606c30
                            *(esi_8 + 0x13113f9) = i.b
                            
                            if (cond:23_1)
                                edx_102 = nullptr
                            
                            void* ecx_175 = &data_13932a0
                            
                            if (data_139319c == 0)
                                ecx_175 = nullptr
                            
                            if (edx_102 != 0)
                                *(edx_102 + esi_8 + 0x5ad) = i.b
                            
                            if (ecx_175 != 0)
                                *(ecx_175 + esi_8 + 0x5ad) = i.b
                    else
                        i = eax_139 - 1
                        
                        if (eax_139 == 1)
                            sub_4ef190(i, &arg2[8], arg2[8], U"$", &data_1b8a720)
                            int32_t ecx_172 = data_1b8a720
                            int32_t edi_80 = data_187a5c0
                            void* i_1
                            
                            for (i_1 = nullptr; i_1 s< 8; i_1 += 1)
                                if (i_1 u<= 7 && ecx_172 u<= 7)
                                    *(i_1 + 0x70376d) = ecx_172.b
                                    void* esi_7 = &data_1606c30
                                    *(i_1 + 0x13113f9) = ecx_172.b
                                    
                                    if (edi_80 == 0)
                                        esi_7 = nullptr
                                    
                                    void* edx_100 = &data_13932a0
                                    
                                    if (data_139319c == 0)
                                        edx_100 = nullptr
                                    
                                    if (esi_7 != 0)
                                        *(esi_7 + i_1 + 0x5ad) = ecx_172.b
                                    
                                    if (edx_100 != 0)
                                        *(edx_100 + i_1 + 0x5ad) = ecx_172.b
                            
                            return i_1
                    
                    return i
                case 0xc
                    int32_t eax_141 = data_1af4e84
                    
                    if (eax_141 == 0)
                        sub_4ef190(eax_141, &arg2[8], arg2[8], "$$", &data_1b8a720)
                        void* ecx_181 = data_1b8a720
                        i = data_1b8a734
                        
                        if (ecx_181 u<= 7 && i u<= 7)
                            *(ecx_181 + 0x70376d) = i.b
                            *(ecx_181 + 0x13113f9) = i.b
                    else
                        i = eax_141 - 1
                        
                        if (eax_141 == 1)
                            sub_4ef190(i, &arg2[8], arg2[8], U"$", &data_1b8a720)
                            int32_t ecx_178 = data_1b8a720
                            void* i_2
                            
                            for (i_2 = nullptr; i_2 s< 8; i_2 += 1)
                                if (i_2 u<= 7 && ecx_178 u<= 7)
                                    *(i_2 + 0x70376d) = ecx_178.b
                                    *(i_2 + 0x13113f9) = ecx_178.b
                            
                            return i_2
                    
                    return i
                case 0xd
                    int32_t eax_143 = data_1af4e84
                    
                    if (eax_143 == 0)
                        sub_4ef190(eax_143, &arg2[8], arg2[8], "$$", &data_1b8a720)
                        void* edx_108 = data_1b8a720
                        i = data_1b8a734
                        
                        if (edx_108 u<= 7 && i u<= 7)
                            *(edx_108 + 0x70376d) = i.b
                            bool cond:25_1 = data_187a5c0 == 0
                            void* ecx_187 = &data_1606c30
                            *(edx_108 + 0x13113f9) = i.b
                            
                            if (cond:25_1)
                                ecx_187 = nullptr
                            
                            if (ecx_187 != 0)
                                *(ecx_187 + edx_108 + 0x5ad) = i.b
                    else
                        i = eax_143 - 1
                        
                        if (eax_143 == 1)
                            sub_4ef190(i, &arg2[8], arg2[8], U"$", &data_1b8a720)
                            int32_t edx_106 = data_1b8a720
                            int32_t esi_9 = data_187a5c0
                            void* i_3
                            
                            for (i_3 = nullptr; i_3 s< 8; i_3 += 1)
                                if (i_3 u<= 7 && edx_106 u<= 7)
                                    *(i_3 + 0x70376d) = edx_106.b
                                    *(i_3 + 0x13113f9) = edx_106.b
                                    void* ecx_184 = &data_1606c30
                                    
                                    if (esi_9 == 0)
                                        ecx_184 = nullptr
                                    
                                    if (ecx_184 != 0)
                                        *(ecx_184 + i_3 + 0x5ad) = edx_106.b
                            
                            return i_3
                    
                    return i
                case 0xe
                    int32_t eax_145 = data_1af4e84
                    
                    if (eax_145 == 0)
                        sub_4ef190(eax_145, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u> 7)
                            return i
                        
                        (&data_7035a4)[i] = 1
                        bool cond:13_1 = data_187a5c0 == 0
                        void* edx_111 = &data_1606c30
                        *((i << 2) + &data_1311230) = 1
                        
                        if (cond:13_1)
                            edx_111 = nullptr
                        
                        ecx_191 = &data_13932a0
                        
                        if (data_139319c == 0)
                            ecx_191 = nullptr
                        
                        if (edx_111 != 0)
                            *(edx_111 + (i << 2) + 0x3e4) = 1
                        
                    label_52ffe1:
                        
                        if (ecx_191 == 0)
                            return i
                        
                        *(ecx_191 + (i << 2) + 0x3e4) = 1
                        return i
                    
                    i = eax_145 - 1
                    
                    if (eax_145 != 1)
                        return i
                    
                    int32_t esi_10 = data_187a5c0
                    int32_t edi_87 = data_139319c
                    
                    do
                        if (i u<= 7)
                            (&data_7035a4)[i] = 1
                            void* edx_109 = &data_1606c30
                            *((i << 2) + &data_1311230) = 1
                            
                            if (esi_10 == 0)
                                edx_109 = nullptr
                            
                            void* ecx_188 = &data_13932a0
                            
                            if (edi_87 == 0)
                                ecx_188 = nullptr
                            
                            if (edx_109 != 0)
                                *(edx_109 + (i << 2) + 0x3e4) = 1
                            
                            if (ecx_188 != 0)
                                *(ecx_188 + (i << 2) + 0x3e4) = 1
                        
                        i += 1
                    while (i s< 8)
                    
                    return i
                case 0xf
                    int32_t eax_147 = data_1af4e84
                    
                    if (eax_147 == 0)
                        sub_4ef190(eax_147, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u<= 7)
                            void* edx_114 = &data_1606c30
                            
                            if (data_187a5c0 == 0)
                                edx_114 = nullptr
                            
                            bool cond:15_1 = data_139319c == 0
                            void* ecx_195 = &data_13932a0
                            (&data_7035a4)[i] = 0
                            
                            if (cond:15_1)
                                ecx_195 = nullptr
                            
                            *((i << 2) + &data_1311230) = 0
                            
                            if (edx_114 != 0)
                                *(edx_114 + (i << 2) + 0x3e4) = 0
                            
                            if (ecx_195 != 0)
                                *(ecx_195 + (i << 2) + 0x3e4) = 0
                    else
                        i = eax_147 - 1
                        
                        if (eax_147 == 1)
                            int32_t esi_11 = data_187a5c0
                            int32_t edi_90 = data_139319c
                            
                            do
                                if (i u<= 7)
                                    (&data_7035a4)[i] = 0
                                    void* edx_112 = &data_1606c30
                                    *((i << 2) + &data_1311230) = 0
                                    
                                    if (esi_11 == 0)
                                        edx_112 = nullptr
                                    
                                    void* ecx_192 = &data_13932a0
                                    
                                    if (edi_90 == 0)
                                        ecx_192 = nullptr
                                    
                                    if (edx_112 != 0)
                                        *(edx_112 + (i << 2) + 0x3e4) = 0
                                    
                                    if (ecx_192 != 0)
                                        *(ecx_192 + (i << 2) + 0x3e4) = 0
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 0x10
                    int32_t eax_149 = data_1af4e84
                    
                    if (eax_149 == 0)
                        sub_4ef190(eax_149, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u<= 7)
                            (&data_7035a4)[i] = 1
                            *((i << 2) + &data_1311230) = 1
                    else
                        i = eax_149 - 1
                        
                        if (eax_149 == 1)
                            do
                                if (i u<= 7)
                                    (&data_7035a4)[i] = 1
                                    *((i << 2) + &data_1311230) = 1
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 0x11
                    int32_t eax_151 = data_1af4e84
                    
                    if (eax_151 == 0)
                        sub_4ef190(eax_151, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u<= 7)
                            (&data_7035a4)[i] = 0
                            *((i << 2) + &data_1311230) = 0
                    else
                        i = eax_151 - 1
                        
                        if (eax_151 == 1)
                            do
                                if (i u<= 7)
                                    (&data_7035a4)[i] = 0
                                    *((i << 2) + &data_1311230) = 0
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 0x12
                    int32_t eax_153 = data_1af4e84
                    
                    if (eax_153 == 0)
                        sub_4ef190(eax_153, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u> 7)
                            return i
                        
                        (&data_7035a4)[i] = 1
                        bool cond:16_1 = data_187a5c0 == 0
                        ecx_191 = &data_1606c30
                        *((i << 2) + &data_1311230) = 1
                        
                        if (cond:16_1)
                            ecx_191 = nullptr
                        
                        goto label_52ffe1
                    
                    i = eax_153 - 1
                    
                    if (eax_153 != 1)
                        return i
                    
                    int32_t edx_117 = data_187a5c0
                    
                    do
                        if (i u<= 7)
                            (&data_7035a4)[i] = 1
                            *((i << 2) + &data_1311230) = 1
                            void* ecx_201 = &data_1606c30
                            
                            if (edx_117 == 0)
                                ecx_201 = nullptr
                            
                            if (ecx_201 != 0)
                                *(ecx_201 + (i << 2) + 0x3e4) = 1
                        
                        i += 1
                    while (i s< 8)
                    
                    return i
                case 0x13
                    int32_t eax_155 = data_1af4e84
                    
                    if (eax_155 == 0)
                        sub_4ef190(eax_155, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        
                        if (i u<= 7)
                            void* ecx_207 = &data_1606c30
                            bool cond:17_1 = data_187a5c0 == 0
                            (&data_7035a4)[i] = 0
                            
                            if (cond:17_1)
                                ecx_207 = nullptr
                            
                            *((i << 2) + &data_1311230) = 0
                            
                            if (ecx_207 != 0)
                                *(ecx_207 + (i << 2) + 0x3e4) = 0
                    else
                        i = eax_155 - 1
                        
                        if (eax_155 == 1)
                            int32_t edx_119 = data_187a5c0
                            
                            do
                                if (i u<= 7)
                                    void* ecx_204 = &data_1606c30
                                    (&data_7035a4)[i] = 0
                                    *((i << 2) + &data_1311230) = 0
                                    
                                    if (edx_119 == 0)
                                        ecx_204 = nullptr
                                    
                                    if (ecx_204 != 0)
                                        *(ecx_204 + (i << 2) + 0x3e4) = 0
                                
                                i += 1
                            while (i s< 8)
                    
                    return i
                case 0x14
                    data_1b8b06c = 1
                    return i
        else if (i == 0x7d0)
            i = data_1af4e84
            
            if (i u> 3)
                return i
            
            char* var_20_2
            
            switch (i)
                case 0
                    eax_103 = sub_4ef190(i, &arg2[8], arg2[8], U"%", &data_1b8a720)
                    var_24 = 1
                case 1
                    char** eax_105 = sub_4ef190(i, &arg2[8], arg2[8], U"&%", &data_1b8a720)
                    void* edx_64 = data_1b8a730
                    int32_t ecx_112 = data_1b8a72c
                    return sub_446550(eax_105, edx_64, ecx_112, ecx_112, edx_64, 1, 1)
                case 2
                    int32_t* var_1c_5 = &data_1b8a720
                    var_20_2 = &data_61f100
                label_52f57b:
                    return sub_446550(sub_4ef190(i, &arg2[8], arg2[8], var_20_2, &data_1b8a720), 
                        data_1b8a730, data_1b8a72c, data_1b8a740, data_1b8a744, 1, 1)
                case 3
                    int32_t* var_1c_6 = &data_1b8a720
                    var_20_2 = &data_61f5c4
                    goto label_52f57b
        else
            i -= 0x3f2
            
            if (i u> 0xcd)
                data_1b8b06c = 1
                return i
            
            i = zx.d(lookup_table_5305b0[i])
            
            switch (i)
                case 0
                    if (data_1311178 == 0 || data_1312540 != 1)
                        return i
                    
                    data_1312544 = 1
                    return i
                case 1
                    if (data_1311178 == 0 || data_1312538 != 1)
                        return i
                    
                    data_131253c = 1
                    return i
                case 2
                    if (data_1311178 == 0 || data_1312538 != 1)
                        return i
                    
                    data_131253c = 2
                    return i
                case 3
                    int32_t eax_76 = data_1312548
                    data_715e98 = eax_76
                    return eax_76
                case 4
                    int32_t eax_77 = data_1af4e84
                    
                    if (eax_77 == 0)
                        sub_4ef190(eax_77, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        data_1b8a734 = i
                    else if (eax_77 == 1)
                        i = sub_4ef190(eax_77 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
                    else
                        i = eax_77 - 2
                        
                        if (eax_77 == 2)
                            data_1b8a720 = i
                            data_1b8a734 = 0x3f
                    
                    if (data_1311178 != 0)
                        return sub_52e0b0(i, data_1b8a734, data_1b8a720, 0)
                    
                    return i
                case 5
                    int32_t eax_81 = data_1af4e84
                    
                    if (eax_81 == 0)
                        sub_4ef190(eax_81, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        data_1b8a734 = i
                    else if (eax_81 == 1)
                        i = sub_4ef190(eax_81 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
                    else
                        i = eax_81 - 2
                        
                        if (eax_81 == 2)
                            data_1b8a720 = i
                            data_1b8a734 = 0x3f
                    
                    if (data_1311178 != 0)
                        return sub_52e0b0(i, data_1b8a734, data_1b8a720, 1)
                    
                    return i
                case 6
                    if (data_1311178 == 0)
                        return i
                    
                    data_641adf = 0
                    return i
                case 7
                    if (data_1311178 == 0)
                        return i
                    
                    data_641adf = 1
                    return i
                case 8
                    int32_t eax_85 = data_1af4e84
                    
                    if (eax_85 == 0)
                        sub_4ef190(eax_85, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        data_1b8a734 = i
                    else if (eax_85 == 1)
                        i = sub_4ef190(eax_85 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
                    else
                        i = eax_85 - 2
                        
                        if (eax_85 == 2)
                            data_1b8a720 = i
                            i = data_7031bc - 1
                            data_1b8a734 = i
                    
                    if (data_1311178 != 0)
                        return sub_52e110(i, data_1b8a734, data_1b8a720, 0)
                    
                    return i
                case 9
                    int32_t eax_90 = data_1af4e84
                    
                    if (eax_90 == 0)
                        sub_4ef190(eax_90, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        data_1b8a734 = i
                    else if (eax_90 == 1)
                        i = sub_4ef190(eax_90 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
                    else
                        i = eax_90 - 2
                        
                        if (eax_90 == 2)
                            data_1b8a720 = i
                            i = data_7031bc - 1
                            data_1b8a734 = i
                    
                    if (data_1311178 != 0)
                        return sub_52e110(i, data_1b8a734, data_1b8a720, 1)
                    
                    return i
                case 0xa
                    int32_t eax_95 = data_1af4e84
                    
                    if (eax_95 == 0)
                        sub_4ef190(eax_95, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        data_1b8a734 = i
                    else if (eax_95 == 1)
                        i = sub_4ef190(eax_95 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
                    else
                        i = eax_95 - 2
                        
                        if (eax_95 == 2)
                            data_1b8a720 = i
                            data_1b8a734 = 3
                    
                    if (data_1311178 != 0)
                        return sub_52e160(i, data_1b8a734, data_1b8a720, 0)
                    
                    return i
                case 0xb
                    int32_t eax_99 = data_1af4e84
                    
                    if (eax_99 == 0)
                        sub_4ef190(eax_99, &arg2[8], arg2[8], U"$", &data_1b8a720)
                        i = data_1b8a720
                        data_1b8a734 = i
                    else if (eax_99 == 1)
                        i = sub_4ef190(eax_99 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
                    else
                        i = eax_99 - 2
                        
                        if (eax_99 == 2)
                            data_1b8a720 = i
                            data_1b8a734 = 3
                    
                    if (data_1311178 != 0)
                        return sub_52e160(i, data_1b8a734, data_1b8a720, 1)
                    
                    return i
                case 0xc
                    if (data_1311178 == 0)
                        return i
                    
                    data_1b8be8d = 0
                    return i
                case 0xd
                    if (data_1311178 == 0)
                        return i
                    
                    data_1b8be8d = 1
                    return i
                case 0xe
                    if (data_1311178 == 0)
                        return i
                    
                    data_1b8be8c = 0
                    return i
                case 0xf
                    if (data_1311178 == 0)
                        return i
                    
                    data_1b8be8c = 1
                    return i
                case 0x10
                    if (data_1311178 == 0)
                        return i
                    
                    data_1311177 = 0
                    return i
                case 0x11
                    if (data_1311178 == 0)
                        return i
                    
                    data_1311177 = 1
                    return i
                case 0x12
                    data_1b8b06c = 1
                    return i
        
        void* edx_62 = data_1b8a730
        int32_t ecx_109 = data_1b8a72c
        return sub_446550(eax_103, edx_62, ecx_109, ecx_109, edx_62, 1, var_24)
    
    if (i == 0x3e8)
        if (data_1311178 == 0 || data_1312530 != 1)
            return i
        
        data_1312534 = 1
        return i
    
    enum MESSAGEBOX_RESULT var_c
    
    if (i == 0x191)
        int32_t eax_73 = data_1af4e84
        enum MESSAGEBOX_RESULT esi_4
        
        if (eax_73 == 0)
            i = sub_4ef190(eax_73, &arg2[8], arg2[8], "S$", &data_1b8a720)
            
            if (data_1b8a728 != 0)
                int32_t var_1c_4 = data_1b8a734
                sub_4c84d0(&data_7027c0, "%$d")
                sub_545fa0()
                data_1af4e70 = 1
                int32_t i_4
                
                do
                    i_4 = ShowCursor(1)
                while (i_4 s<= 0)
            label_52efa0:
                PSTR lpCaption_4 = data_1b8a728
                data_1af17a0 = 1
                HWND hWnd_4 = data_7027bc
                data_1af17cc = 1
                enum MESSAGEBOX_RESULT eax_75 =
                    MessageBoxA(hWnd_4, &data_7027c0, lpCaption_4, MB_OKCANCEL)
                int32_t ecx_76 = data_7037a0
                esi_4 = eax_75
                data_1af17cc = 0
                data_1af17a0 = 0
                sub_4d59f0(ecx_76)
                i = sub_545f70()
                goto label_52eff1
        else
            i = eax_73 - 1
            
            if (eax_73 != 1)
                esi_4 = var_c
            label_52eff1:
                
                if (esi_4 != IDOK)
                    data_715e98 = 1
                    return i
            else
                int32_t ecx_73
                i, ecx_73 = sub_4ef190(i, &arg2[8], arg2[8], "SS", &data_1b8a720)
                
                if (data_1b8a728 != 0)
                    char* edx_41 = data_1b8a73c
                    
                    if (edx_41 != 0)
                        sub_4d0e90(ecx_73, edx_41)
                        sub_545fa0()
                        data_1af4e70 = 1
                        int32_t i_5
                        
                        do
                            i_5 = ShowCursor(1)
                        while (i_5 s<= 0)
                        goto label_52efa0
        data_715e98 = 0
        return i
    
    int32_t eax_64 = i - 0x192
    
    if (i == 0x192)
        int32_t eax_70 = data_1af4e84
        enum MESSAGEBOX_RESULT esi_3
        
        if (eax_70 == 0)
            i = sub_4ef190(eax_70, &arg2[8], arg2[8], "S$", &data_1b8a720)
            
            if (data_1b8a728 != 0)
                int32_t var_1c_3 = data_1b8a734
                sub_4c84d0(&data_7027c0, "%$d")
                sub_545fa0()
                data_1af4e70 = 1
                int32_t i_6
                
                do
                    i_6 = ShowCursor(1)
                while (i_6 s<= 0)
            label_52ee6a:
                PSTR lpCaption_3 = data_1b8a728
                data_1af17a0 = 1
                HWND hWnd_3 = data_7027bc
                data_1af17cc = 1
                enum MESSAGEBOX_RESULT eax_72 =
                    MessageBoxA(hWnd_3, &data_7027c0, lpCaption_3, MB_YESNO)
                int32_t ecx_70 = data_7037a0
                esi_3 = eax_72
                data_1af17cc = 0
                data_1af17a0 = 0
                sub_4d59f0(ecx_70)
                i = sub_545f70()
                goto label_52eebb
        else
            i = eax_70 - 1
            
            if (eax_70 != 1)
                esi_3 = var_c
            label_52eebb:
                
                if (esi_3 != IDYES)
                    data_715e98 = 1
                    return i
            else
                int32_t ecx_67
                i, ecx_67 = sub_4ef190(i, &arg2[8], arg2[8], "SS", &data_1b8a720)
                
                if (data_1b8a728 != 0)
                    char* edx_38 = data_1b8a73c
                    
                    if (edx_38 != 0)
                        sub_4d0e90(ecx_67, edx_38)
                        sub_545fa0()
                        data_1af4e70 = 1
                        int32_t i_7
                        
                        do
                            i_7 = ShowCursor(1)
                        while (i_7 s<= 0)
                        goto label_52ee6a
        data_715e98 = 0
        return i
    
    if (eax_64 != 1)
        data_1b8b06c = 1
        return eax_64 - 1
    
    int32_t eax_65 = data_1af4e84
    enum MESSAGEBOX_RESULT esi_2
    
    if (eax_65 == 0)
        i = sub_4ef190(eax_65, &arg2[8], arg2[8], "S$", &data_1b8a720)
        
        if (data_1b8a728 != 0)
            int32_t var_1c_2 = data_1b8a734
            sub_4c84d0(&data_7027c0, "%$d")
            sub_545fa0()
            data_1af4e70 = 1
            int32_t i_8
            
            do
                i_8 = ShowCursor(1)
            while (i_8 s<= 0)
        label_52ed2a:
            PSTR lpCaption_2 = data_1b8a728
            data_1af17a0 = 1
            HWND hWnd_2 = data_7027bc
            data_1af17cc = 1
            enum MESSAGEBOX_RESULT eax_67 =
                MessageBoxA(hWnd_2, &data_7027c0, lpCaption_2, MB_YESNOCANCEL)
            int32_t ecx_64 = data_7037a0
            esi_2 = eax_67
            data_1af17cc = 0
            data_1af17a0 = 0
            sub_4d59f0(ecx_64)
            i = sub_545f70()
            goto label_52ed7b
    else
        i = eax_65 - 1
        
        if (eax_65 != 1)
            esi_2 = var_c
        label_52ed7b:
            
            if (esi_2 != IDYES)
                int32_t eax_68
                eax_68.b = esi_2 != IDNO
                data_715e98 = eax_68 + 1
                return eax_68 + 1
        else
            int32_t ecx_61
            i, ecx_61 = sub_4ef190(i, &arg2[8], arg2[8], "SS", &data_1b8a720)
            
            if (data_1b8a728 != 0)
                char* edx_35 = data_1b8a73c
                
                if (edx_35 != 0)
                    sub_4d0e90(ecx_61, edx_35)
                    sub_545fa0()
                    data_1af4e70 = 1
                    int32_t i_9
                    
                    do
                        i_9 = ShowCursor(1)
                    while (i_9 s<= 0)
                    goto label_52ed2a
    data_715e98 = 0
    return i

if (i == 0x190)
    int32_t eax_59 = data_1af4e84
    
    if (eax_59 == 0)
        i = sub_4ef190(eax_59, &arg2[8], arg2[8], "S$", &data_1b8a720)
        
        if (data_1b8a728 != 0)
            int32_t var_1c_1 = data_1b8a734
            sub_4c84d0(&data_7027c0, "%$d")
            sub_545fa0()
            data_1af4e70 = 1
            int32_t i_10
            
            do
                i_10 = ShowCursor(1)
            while (i_10 s<= 0)
            PSTR lpCaption_1 = data_1b8a728
            data_1af17a0 = 1
            HWND hWnd_1 = data_7027bc
            data_1af17cc = 1
            MessageBoxA(hWnd_1, &data_7027c0, lpCaption_1, MB_OK)
            int32_t ecx_58 = data_7037a0
            data_1af17cc = 0
            data_1af17a0 = 0
            sub_4d59f0(ecx_58)
            return sub_545f70()
    else
        i = eax_59 - 1
        
        if (eax_59 == 1)
            int32_t ecx_54
            i, ecx_54 = sub_4ef190(i, &arg2[8], arg2[8], "SS", &data_1b8a720)
            
            if (data_1b8a728 != 0)
                char* edx_32 = data_1b8a73c
                
                if (edx_32 != 0)
                    sub_4d0e90(ecx_54, edx_32)
                    sub_545fa0()
                    data_1af4e70 = 1
                    int32_t i_11
                    
                    do
                        i_11 = ShowCursor(1)
                    while (i_11 s<= 0)
                    PSTR lpCaption = data_1b8a728
                    data_1af17a0 = 1
                    HWND hWnd = data_7027bc
                    data_1af17cc = 1
                    MessageBoxA(hWnd, &data_7027c0, lpCaption, MB_OK)
                    int32_t ecx_55 = data_7037a0
                    data_1af17cc = 0
                    data_1af17a0 = 0
                    sub_4d59f0(ecx_55)
                    return sub_545f70()
    
    return i

i -= 0x64

if (i u> 0xe2)
    data_1b8b06c = 1
    return i

i = zx.d(lookup_table_530448[i])

switch (i)
    case 0
        sub_4ef190(i, &arg2[8], arg2[8], U"$", &data_1b8a720)
        data_13701dc = 1
        bool cond:4 = data_1af175c != 0
        data_1392704 = 1
        
        if (not(cond:4))
            sub_48f890()
        
        int32_t eax
        eax.b = data_1b8a720 != 0
        void* eax_1 = (eax << 1) + 0xffffffff
        void* var_c_1 = eax_1
        
        if (data_13132c8 == 1)
            if (data_703734 == 1)
                eax_1 = 0xffffffff
            
            var_c_1 = eax_1
        
        data_703840 = 1
        data_70487c = 0
        __builtin_memset(0x107f964, 0, 0x400)
        __builtin_memcpy(0x107f964, &data_91f104, 0x400)
        __builtin_memset(0x107fd64, 0, 0x400)
        __builtin_memcpy(0x107fd64, &data_91f504, 0x400)
        sub_4a8ae0()
        sub_4a8c80()
        sub_42a640()
        sub_4117e0()
        sub_4599b0()
        sub_49a530()
        sub_49a900()
        sub_42a500(1)
        sub_42c8c0()
        sub_430a50()
        sub_467f10()
        sub_493b90()
        sub_494040()
        sub_48fc50()
        sub_48d120()
        data_71929c = 0x29
        data_7192a0 = 0
        data_7192e0 = 0
        sub_48d120()
        data_71929c = 0x28
        data_7192a0 = 0
        data_7192e0 = 0
        sub_48d120()
        data_71929c = 0x27
        data_7192a0 = 0
        data_7192e0 = 0
        int32_t eax_2
        int80_t st0
        st0, eax_2 = sub_57cfe0(var_c_1)
        return eax_2
    case 1
        sub_4ef190(i, &arg2[8], arg2[8], "$$", &data_1b8a720)
        int32_t eax_3
        eax_3.b = data_1b8a720 != 0
        void* eax_4 = (eax_3 << 1) + 0xffffffff
        void* var_c_2 = eax_4
        
        if (data_13132c8 == 1)
            if (data_703734 == 1)
                eax_4 = 0xffffffff
            
            var_c_2 = eax_4
        
        int32_t esi_1 = data_1b8a734
        data_703840 = 1
        sub_48d120()
        data_71929c = 0x2c
        data_7192a0 = 0
        data_7192e0 = 0
        sub_48d120()
        sub_48ce80(0x2b, var_c_2)
        sub_48d120()
        sub_48ce80(0x2a, esi_1)
        int32_t eax_5
        int80_t st0_1
        st0_1, eax_5 = sub_57ce50(var_c_2)
        return eax_5
    case 2
        int32_t eax_6 = data_1af4e84
        
        if (eax_6 == 0)
            sub_4ef190(eax_6, &arg2[8], arg2[8], "$$", &data_1b8a720)
            data_1b8a748 = 0
        else if (eax_6 == 1)
            sub_4ef190(eax_6 - 1, &arg2[8], arg2[8], U"$", &data_1b8a720)
            data_1b8a734 = 0
            data_1b8a748 = 0
        else if (eax_6 == 2)
            sub_4ef190(eax_6 - 2, &arg2[8], arg2[8], "$$$", &data_1b8a720)
        
        data_704880 = data_1b8a720
        data_704884 = data_1b8a734
        int32_t eax_12 = data_1b8a748
        data_70487c = 1
        data_704888 = eax_12
        return eax_12
    case 3
        data_70487c = 0
        return i
    case 4
        int32_t eax_13 = data_1af4e84
        
        if (eax_13 == 0)
            sub_4ef190(eax_13, &arg2[8], arg2[8], "$$", &data_1b8a720)
            data_1b8a748 = 0
        else if (eax_13 == 1)
            sub_4ef190(eax_13 - 1, &arg2[8], arg2[8], U"$", &data_1b8a720)
            data_1b8a734 = 0
            data_1b8a748 = 0
        else if (eax_13 == 2)
            sub_4ef190(eax_13 - 2, &arg2[8], arg2[8], "$$$", &data_1b8a720)
        
        data_704880 = data_1b8a720
        data_704884 = data_1b8a734
        int32_t eax_19 = data_1b8a748
        data_704888 = eax_19
        return eax_19
    case 5
        if (data_1af4e84 == 0)
            sub_4e8000(
                sub_4e8000(
                    sub_4e8000(sub_4ef190(i, &arg2[8], arg2[8], "%%%", &data_1b8a720), 
                        data_1b8a730, data_1b8a72c, data_704880, &data_704898), 
                    data_1b8a744, data_1b8a740, data_704884, &data_704898), 
                data_1b8a758, data_1b8a754, data_704888, &data_704898)
        
        int32_t eax_23 = data_70487c
        data_715e98 = eax_23
        return eax_23
    case 6
        i = data_1af1748
        
        if (i u> 3)
            data_715e98 = 0
            return i
        
        switch (i)
            case 0
                data_715e98 = 0
                return i
            case 1
                data_715e98 = 1
                return i
            case 2
                data_715e98 = 2
                return i
            case 3
                data_715e98 = 3
                return i
    case 7
        if (data_1af174c != 0)
            return sub_4a5750(1)
        
        return i
    case 8
        return sub_4a5750(0)
    case 9
        if (data_1392cc4 == 0)
            return i
        
        sub_52e070(0)
        return i
    case 0xa
        int32_t eax_26
        eax_26.b = data_1392cc4 != 0
        data_715e98 = eax_26
        return eax_26
    case 0xb
        char** eax_27 = sub_4ef190(i, &arg2[8], arg2[8], "$%%%%", &data_1b8a720)
        int32_t ecx_25 = data_1b8a720
        int32_t edx_15 = data_1b8a744
        
        if (ecx_25 u> 7)
            return sub_4e8000(
                sub_4e8000(
                    sub_4e8000(sub_4e8000(eax_27, edx_15, data_1b8a740, 0xffffffff, &data_704898), 
                        data_1b8a758, data_1b8a754, 0xffffffff, &data_704898), 
                    data_1b8a76c, data_1b8a768, 0xffffffff, &data_704898), 
                data_1b8a780, data_1b8a77c, 0xffffffff, &data_704898)
        
        int32_t eax_29 = ecx_25 * 7
        sub_4e8000(eax_29, edx_15, data_1b8a740, *((eax_29 << 2) + &data_108f3a0), &data_704898)
        int32_t eax_30 = data_1b8a720
        sub_4e8000(eax_30, data_1b8a758, data_1b8a754, *(eax_30 * 0x1c + &data_108f3a4), 
            &data_704898)
        int32_t eax_31 = data_1b8a720
        sub_4e8000(eax_31, data_1b8a76c, data_1b8a768, *(eax_31 * 0x1c + &data_108f3a8), 
            &data_704898)
        int32_t eax_32 = data_1b8a720
        return sub_4e8000(eax_32, data_1b8a780, data_1b8a77c, *(eax_32 * 0x1c + &data_108f3ac), 
            &data_704898)
    case 0xc
        sub_4ef190(i, &arg2[8], arg2[8], U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 7)
            return i
        
        int32_t eax_38 = (&data_7035a4)[i]
        data_715e98 = eax_38
        return eax_38
    case 0xd
        int32_t eax_39 = data_1af4e84
        
        if (eax_39 == 0)
            sub_4ef190(eax_39, &arg2[8], arg2[8], U"$", &data_1b8a720)
            i = data_1b8a720
            
            if (i u<= 7)
                (&data_7035a4)[i] = 1
        else
            i = eax_39 - 1
            
            if (eax_39 == 1)
                int128_t xmm0_1 = data_624940
                data_7035a4 = 1
                data_7035a8 = 1
                data_7035ac = 1
                data_7035b0.o = xmm0_1
                data_7035c0 = 1
        
        if (data_1311178 == 0 || data_702fc0 == 0)
            return i
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(i, data_72d6ac, data_719b6c, 0x61f520, 0x61f4c0), data_72d6ac, 
                data_719b6c, 0x61f520, 0x61f4c0), 
            data_72d6ac, data_719b6c, 0x61f520, 0x61f4c0)
        return sub_4a1e40(3)
    case 0xe
        int32_t eax_44 = data_1af4e84
        
        if (eax_44 == 0)
            sub_4ef190(eax_44, &arg2[8], arg2[8], U"$", &data_1b8a720)
            i = data_1b8a720
            
            if (i u<= 7)
                (&data_7035a4)[i] = 0
        else
            i = eax_44 - 1
            
            if (eax_44 == 1)
                data_7035a4 = i
                data_7035a8 = i
                data_7035ac = i
                data_7035b0.o = zx.o(0)
                data_7035c0 = i
        
        if (data_1311178 == 0 || data_702fc0 == 0)
            return i
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(i, data_72d6ac, data_719b6c, 0x61f5a0, 0x61f540), data_72d6ac, 
                data_719b6c, 0x61f5a0, 0x61f540), 
            data_72d6ac, data_719b6c, 0x61f5a0, 0x61f540)
        return sub_4a1e40(3)
    case 0xf
        return sub_490290(i, arg2, arg1, 1)
    case 0x10
        return sub_490290(i, arg2, arg1, 2)
    case 0x11
        return sub_490290(i, arg2, arg1, 3)
    case 0x12
        return sub_490440()
    case 0x13
        return sub_490480()
    case 0x14
        return sub_490290(i, arg2, arg1, 6)
    case 0x15
        return sub_4904e0()
    case 0x16
        if (data_1311178 == 0)
            data_715e98 = 0xffffffff
            return i
        
        i = data_1af175c - 1
        
        if (i u> 5)
            return i
        
        switch (i)
            case 0
                data_715e98 = 1
                return i
            case 1
                data_715e98 = 0
                return i
            case 2
                i = data_1af1778
                
                if (i u> 3)
                    return i
                
                switch (i)
                    case 0
                        data_715e98 = 0
                        return i
                    case 1
                        data_715e98 = 4
                        return i
                    case 2
                        data_715e98 = 3
                        return i
                    case 3
                        data_715e98 = 5
                        return i
            case 3, 4
                return i
            case 5
                data_715e98 = 2
                return i
    case 0x17
        int32_t eax_57 = data_1af1754
        data_715e98 = eax_57
        return eax_57
    case 0x18
        int32_t eax_58 = data_1af1750
        data_715e98 = eax_58
        return eax_58
    case 0x19
        data_1b8b06c = 1
        return i

// 函数: sub_2177390
// 地址: 0x2177390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_234
sub_2178510(&var_234, arg1 - 0xf0, 0xf0)
int32_t ecx = var_234
int32_t var_230
int32_t* eax_1 = &var_230
int32_t i_19 = 0x3b
int32_t edx_1
int32_t i

do
    edx_1 = *eax_1
    eax_1 = &eax_1[1]
    eax_1[-1] = ecx ^ edx_1
    ecx = edx_1
    i = i_19
    i_19 -= 1
while (i != 1)
char var_508[0x1e4]

if (var_230 == 0xc0dec0df)
    int32_t var_224
    int32_t eax_3 = arg1 - var_224
    int32_t var_21c
    void* ebx_1 = arg1 - var_21c
    int32_t var_140
    __builtin_memset(&var_140, 0, 0xe8)
    int32_t var_208
    int32_t i_24 = (var_208 + 0xf) & 0xfffffff0
    
    if (i_24 - 1 u<= 0x27f)
        int32_t i_20 = i_24
        char (* ecx_3)[0x1e4] = &var_508
        int32_t i_23 = i_20
        
        if (i_23 != 0)
            int32_t i_1
            
            do
                int32_t var_20c
                char eax_5 = *(ebx_1 + var_20c - &var_508 + ecx_3)
                ecx_3 = &(*ecx_3)[1]
                (*ecx_3)[0xffffffff] = eax_5
                i_1 = i_20
                i_20 -= 1
            while (i_1 != 1)
            i_23 = i_24
        
        char (* ecx_4)[0x1e4] = &var_508
        uint32_t i_21 = i_23 u>> 2
        
        if (i_21 != 0)
            uint32_t i_2
            
            do
                int32_t eax_6 = *ecx_4
                ecx_4 = &(*ecx_4)[4]
                *(ecx_4 - 4) = edx_1 ^ eax_6
                edx_1 = eax_6
                i_2 = i_21
                i_21 -= 1
            while (i_2 != 1)
        
        char (* eax_7)[0x1e4] = &var_508
        int32_t edx_3 = 0
        void* ecx_5 = &var_508[var_208]
        
        while (eax_7 u< ecx_5)
            bool cond:0_1 = *eax_7 == 0
            int32_t var_e0[0x3]
            var_e0[edx_3] = eax_7
            
            if (not(cond:0_1))
                do
                    eax_7 = &(*eax_7)[1]
                    
                    if (eax_7 u>= ecx_5)
                        goto label_21784f7
                while (*eax_7 != 0)
            
            edx_3 += 1
            eax_7 = &(*eax_7)[1]
            
            if (edx_3 u>= 0x22)
                if (eax_7 == ecx_5)
                    int32_t var_4c
                    __builtin_wcscpy(&var_4c, u"kernel32.dll")
                    int32_t* var_16c
                    int32_t var_168
                    int32_t* var_518_1
                    int32_t* var_90
                    int32_t eax_10
                    int32_t edi_4
                    
                    if ((var_16c | var_168) == 0)
                        int32_t* var_164
                        int32_t var_160
                        
                        if ((var_164 | var_160) != 0)
                            edi_4 = eax_3
                            eax_10 = *(var_164 + edi_4)
                            int32_t var_f0_1 = eax_10
                        label_2177574:
                            var_518_1 = &var_4c
                            goto label_2177575
                        
                        int32_t* var_15c
                        int32_t var_158
                        
                        if ((var_15c | var_158) != 0)
                            edi_4 = eax_3
                            var_518_1 = var_90
                            eax_10 = *(var_15c + edi_4)
                            goto label_2177575
                        
                        int32_t* var_154
                        int32_t var_150
                        
                        if ((var_154 | var_150) != 0)
                            edi_4 = eax_3
                            eax_10 = *(var_154 + edi_4)
                            int32_t var_e8_1 = eax_10
                            goto label_2177574
                    else
                        edi_4 = eax_3
                        var_518_1 = var_90
                        eax_10 = *(var_16c + edi_4)
                        int32_t var_f4 = eax_10
                    label_2177575:
                        int16_t* eax_17 = eax_10(var_518_1)
                        int32_t* var_14c
                        int32_t var_148
                        
                        if (eax_17 != 0)
                            void* var_e4_1
                            void* ebx_4
                            
                            if ((var_14c | var_148) != 0)
                                ebx_4 = *(var_14c + edi_4)
                                var_e4_1 = ebx_4
                            label_21776e0:
                                
                                if ((var_16c | var_168) != 0)
                                label_2177700:
                                    int32_t var_7c
                                    int32_t eax_32 = ebx_4(eax_17, var_7c)
                                    
                                    if (eax_32 != 0)
                                        int32_t var_8c
                                        int32_t eax_33 = eax_32(var_8c)
                                        int32_t var_c_2 = eax_33
                                        
                                        if (eax_33 != 0)
                                            int32_t* var_1c_2 = &var_140
                                            int32_t edi_7 = 0
                                            
                                            while (true)
                                                int32_t eax_34 = ebx_4(eax_33, var_e0[edi_7])
                                                *var_1c_2 = eax_34
                                                
                                                if (eax_34 == 0)
                                                    break
                                                
                                                edi_7 += 1
                                                var_1c_2 = &var_1c_2[1]
                                                
                                                if (edi_7 u>= 3)
                                                    int32_t var_134
                                                    int32_t* ebx_8 = &var_134
                                                    int32_t edi_8 = 0
                                                    
                                                    while (true)
                                                        int32_t var_d4[0x11]
                                                        int32_t eax_35 =
                                                            var_e4_1(eax_17, var_d4[edi_8])
                                                        *ebx_8 = eax_35
                                                        
                                                        if (eax_35 == 0)
                                                            break
                                                        
                                                        edi_8 += 1
                                                        ebx_8 = &ebx_8[1]
                                                        
                                                        if (edi_8 u>= 0x10)
                                                            char var_1f8
                                                            struct _TEB* Self
                                                            struct _PEB* ProcessEnvironmentBlock
                                                            
                                                            if ((var_1f8 & 0x20) == 0)
                                                                TEB* fsbase
                                                                Self = fsbase->NtTib.Self
                                                                
                                                                if (Self != 0
                                                                        && Self->NtTib.Self == Self)
                                                                    ProcessEnvironmentBlock =
                                                                        Self->ProcessEnvironmentBlock
                                                            
                                                            int32_t var_1f0
                                                            
                                                            if ((var_1f8 & 0x20) == 0 && (Self == 0
                                                                    || Self->NtTib.Self != Self
                                                                    || ProcessEnvironmentBlock == 0 ||
                                                                    ProcessEnvironmentBlock->BeingDebugged
                                                                    != 0))
                                                                ebx_8.b = 0x54
                                                                arg1:3.b = 0x54
                                                            else
                                                                int32_t var_214
                                                                char var_18c
                                                                
                                                                if ((var_18c & 1) != 0
                                                                        && *(arg2 + 0x28) != 1)
                                                                    return var_214 + eax_3
                                                                
                                                                int32_t i_22
                                                                void* edi_9 = var_140(1, i_22)
                                                                
                                                                if (edi_9 != 0)
                                                                    void* ecx_17 = edi_9
                                                                    void* var_204
                                                                    void* esi_3 = var_204 + ebx_1
                                                                    int32_t i_17 = i_22
                                                                    
                                                                    if (i_17 != 0)
                                                                        int32_t i_3
                                                                        
                                                                        do
                                                                            void* eax_37
                                                                            eax_37.b = *esi_3
                                                                            ecx_17 += 1
                                                                            *(ecx_17 - 1) = eax_37.b
                                                                            esi_3 += 1
                                                                            i_3 = i_17
                                                                            i_17 -= 1
                                                                        while (i_3 != 1)
                                                                        i_17 = i_22
                                                                    
                                                                    int32_t var_20_2
                                                                    __builtin_strncpy(&var_20_2, 
                                                                        "UUUUUUUU", 8)
                                                                    uint32_t i_25 = i_17 u>> 3
                                                                    uint32_t i_14 = i_25
                                                                    
                                                                    if (i_25 != 0)
                                                                        int32_t var_8_2 = 0
                                                                        void* eax_38 = edi_9
                                                                        void* var_24_2 = edi_9
                                                                        uint32_t i_4
                                                                        
                                                                        do
                                                                            int32_t edx_8 = *eax_38
                                                                            int32_t edi_10 = 0xc6ef3720
                                                                            int32_t esi_4 = *(eax_38 + 4)
                                                                            int32_t j_4 = 0x20
                                                                            int32_t var_28_1 = edx_8
                                                                            int32_t var_14_1 = esi_4
                                                                            int32_t j
                                                                            
                                                                            do
                                                                                int32_t var_19c[0x4]
                                                                                int32_t eax_45 =
                                                                                    var_19c[edi_10 u>> 0xb & 3] + edi_10
                                                                                edi_10 += 0x61c88647
                                                                                esi_4 -= ((edx_8 u>> 5 ^ edx_8 << 4)
                                                                                    + edx_8) ^ eax_45
                                                                                edx_8 -= ((esi_4 u>> 5 ^ esi_4 << 4)
                                                                                    + esi_4)
                                                                                    ^ (var_19c[edi_10 & 3] + edi_10)
                                                                                j = j_4
                                                                                j_4 -= 1
                                                                            while (j != 1)
                                                                            int32_t edx_9 = edx_8 ^ var_20_2
                                                                            int32_t var_1c_3
                                                                            int32_t esi_5 = esi_4 ^ var_1c_3
                                                                            var_20_2 = var_28_1
                                                                            var_1c_3 = var_14_1
                                                                            *(edi_9 + (var_8_2 << 2)) = edx_9
                                                                            eax_38 = var_24_2 + 8
                                                                            *(edi_9 + (var_8_2 << 2) + 4) = esi_5
                                                                            i_4 = i_14
                                                                            i_14 -= 1
                                                                            var_8_2 += 2
                                                                            var_24_2 = eax_38
                                                                        while (i_4 != 1)
                                                                        i_17 = i_22
                                                                    
                                                                    int32_t esi_6 = 0
                                                                    int32_t eax_56 = 0
                                                                    int32_t var_1f0_1 = 0
                                                                    
                                                                    if (i_24 != 0)
                                                                        do
                                                                            int32_t eax_57 =
                                                                                eax_56 ^ zx.d(var_508[esi_6]) << 0x18
                                                                            int32_t eax_59
                                                                            
                                                                            if (eax_57 s>= 0)
                                                                                eax_59 = eax_57 * 2
                                                                            else
                                                                                eax_59 = (eax_57 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_61
                                                                            
                                                                            if (eax_59 s>= 0)
                                                                                eax_61 = eax_59 * 2
                                                                            else
                                                                                eax_61 = (eax_59 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_63
                                                                            
                                                                            if (eax_61 s>= 0)
                                                                                eax_63 = eax_61 * 2
                                                                            else
                                                                                eax_63 = (eax_61 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_65
                                                                            
                                                                            if (eax_63 s>= 0)
                                                                                eax_65 = eax_63 * 2
                                                                            else
                                                                                eax_65 = (eax_63 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_67
                                                                            
                                                                            if (eax_65 s>= 0)
                                                                                eax_67 = eax_65 * 2
                                                                            else
                                                                                eax_67 = (eax_65 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_69
                                                                            
                                                                            if (eax_67 s>= 0)
                                                                                eax_69 = eax_67 * 2
                                                                            else
                                                                                eax_69 = (eax_67 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_71
                                                                            
                                                                            if (eax_69 s>= 0)
                                                                                eax_71 = eax_69 * 2
                                                                            else
                                                                                eax_71 = (eax_69 * 2) ^ 0x488781ed
                                                                            
                                                                            if (eax_71 s>= 0)
                                                                                eax_56 = eax_71 * 2
                                                                            else
                                                                                eax_56 = (eax_71 * 2) ^ 0x488781ed
                                                                            
                                                                            esi_6 += 1
                                                                        while (esi_6 u< i_24)
                                                                    
                                                                    for (int32_t i_5 = 0; i_5 u< 0xf0; 
                                                                            i_5 += 1)
                                                                        int32_t eax_73 =
                                                                            eax_56 ^ zx.d(*(&var_234 + i_5)) << 0x18
                                                                        int32_t eax_75
                                                                        
                                                                        if (eax_73 s>= 0)
                                                                            eax_75 = eax_73 * 2
                                                                        else
                                                                            eax_75 = (eax_73 * 2) ^ 0x488781ed
                                                                        
                                                                        int32_t eax_77
                                                                        
                                                                        if (eax_75 s>= 0)
                                                                            eax_77 = eax_75 * 2
                                                                        else
                                                                            eax_77 = (eax_75 * 2) ^ 0x488781ed
                                                                        
                                                                        int32_t eax_79
                                                                        
                                                                        if (eax_77 s>= 0)
                                                                            eax_79 = eax_77 * 2
                                                                        else
                                                                            eax_79 = (eax_77 * 2) ^ 0x488781ed
                                                                        
                                                                        int32_t eax_81
                                                                        
                                                                        if (eax_79 s>= 0)
                                                                            eax_81 = eax_79 * 2
                                                                        else
                                                                            eax_81 = (eax_79 * 2) ^ 0x488781ed
                                                                        
                                                                        int32_t eax_83
                                                                        
                                                                        if (eax_81 s>= 0)
                                                                            eax_83 = eax_81 * 2
                                                                        else
                                                                            eax_83 = (eax_81 * 2) ^ 0x488781ed
                                                                        
                                                                        int32_t eax_85
                                                                        
                                                                        if (eax_83 s>= 0)
                                                                            eax_85 = eax_83 * 2
                                                                        else
                                                                            eax_85 = (eax_83 * 2) ^ 0x488781ed
                                                                        
                                                                        int32_t eax_87
                                                                        
                                                                        if (eax_85 s>= 0)
                                                                            eax_87 = eax_85 * 2
                                                                        else
                                                                            eax_87 = (eax_85 * 2) ^ 0x488781ed
                                                                        
                                                                        if (eax_87 s>= 0)
                                                                            eax_56 = eax_87 * 2
                                                                        else
                                                                            eax_56 = (eax_87 * 2) ^ 0x488781ed
                                                                    
                                                                    void* esi_7 = nullptr
                                                                    int32_t var_218
                                                                    int32_t edi_14 =
                                                                        (var_218 + 0xf) & 0xfffffff0
                                                                    
                                                                    if (edi_14 u> 0)
                                                                        do
                                                                            int32_t eax_89 =
                                                                                eax_56 ^ zx.d(*(esi_7 + arg1)) << 0x18
                                                                            int32_t eax_91
                                                                            
                                                                            if (eax_89 s>= 0)
                                                                                eax_91 = eax_89 * 2
                                                                            else
                                                                                eax_91 = (eax_89 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_93
                                                                            
                                                                            if (eax_91 s>= 0)
                                                                                eax_93 = eax_91 * 2
                                                                            else
                                                                                eax_93 = (eax_91 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_95
                                                                            
                                                                            if (eax_93 s>= 0)
                                                                                eax_95 = eax_93 * 2
                                                                            else
                                                                                eax_95 = (eax_93 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_97
                                                                            
                                                                            if (eax_95 s>= 0)
                                                                                eax_97 = eax_95 * 2
                                                                            else
                                                                                eax_97 = (eax_95 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_99
                                                                            
                                                                            if (eax_97 s>= 0)
                                                                                eax_99 = eax_97 * 2
                                                                            else
                                                                                eax_99 = (eax_97 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_101
                                                                            
                                                                            if (eax_99 s>= 0)
                                                                                eax_101 = eax_99 * 2
                                                                            else
                                                                                eax_101 = (eax_99 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_103
                                                                            
                                                                            if (eax_101 s>= 0)
                                                                                eax_103 = eax_101 * 2
                                                                            else
                                                                                eax_103 = (eax_101 * 2) ^ 0x488781ed
                                                                            
                                                                            if (eax_103 s>= 0)
                                                                                eax_56 = eax_103 * 2
                                                                            else
                                                                                eax_56 = (eax_103 * 2) ^ 0x488781ed
                                                                            
                                                                            esi_7 += 1
                                                                        while (esi_7 u< edi_14)
                                                                    
                                                                    ebx_8 = edi_9
                                                                    void* esi_8 = nullptr
                                                                    
                                                                    if (i_17 != 0)
                                                                        do
                                                                            int32_t eax_105 =
                                                                                eax_56 ^ zx.d(*(esi_8 + ebx_8)) << 0x18
                                                                            int32_t eax_107
                                                                            
                                                                            if (eax_105 s>= 0)
                                                                                eax_107 = eax_105 * 2
                                                                            else
                                                                                eax_107 = (eax_105 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_109
                                                                            
                                                                            if (eax_107 s>= 0)
                                                                                eax_109 = eax_107 * 2
                                                                            else
                                                                                eax_109 = (eax_107 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_111
                                                                            
                                                                            if (eax_109 s>= 0)
                                                                                eax_111 = eax_109 * 2
                                                                            else
                                                                                eax_111 = (eax_109 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_113
                                                                            
                                                                            if (eax_111 s>= 0)
                                                                                eax_113 = eax_111 * 2
                                                                            else
                                                                                eax_113 = (eax_111 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_115
                                                                            
                                                                            if (eax_113 s>= 0)
                                                                                eax_115 = eax_113 * 2
                                                                            else
                                                                                eax_115 = (eax_113 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_117
                                                                            
                                                                            if (eax_115 s>= 0)
                                                                                eax_117 = eax_115 * 2
                                                                            else
                                                                                eax_117 = (eax_115 * 2) ^ 0x488781ed
                                                                            
                                                                            int32_t eax_119
                                                                            
                                                                            if (eax_117 s>= 0)
                                                                                eax_119 = eax_117 * 2
                                                                            else
                                                                                eax_119 = (eax_117 * 2) ^ 0x488781ed
                                                                            
                                                                            if (eax_119 s>= 0)
                                                                                eax_56 = eax_119 * 2
                                                                            else
                                                                                eax_56 = (eax_119 * 2) ^ 0x488781ed
                                                                            
                                                                            esi_8 += 1
                                                                        while (esi_8 u< i_17)
                                                                    
                                                                    int32_t ecx_39 = var_1f0
                                                                    var_1f0 = ecx_39
                                                                    
                                                                    if (eax_56 == ecx_39)
                                                                        int32_t var_108
                                                                        int32_t var_100
                                                                        
                                                                        if (i_17 u< 0x40 || *ebx_8 != 0x5a4d)
                                                                            ebx_8 = nullptr
                                                                        else
                                                                            void* eax_121 = ebx_8[0xf]
                                                                            void* esi_9 = eax_121 + ebx_8
                                                                            void* var_20_3 = esi_9
                                                                            
                                                                            if (i_17 u< eax_121 + 0xf8
                                                                                    || *esi_9 != 0x4550)
                                                                                ebx_8 = nullptr
                                                                            else
                                                                                int32_t var_10c
                                                                                int32_t* eax_123 = var_10c(
                                                                                    *(esi_9 + 0x34), *(esi_9 + 0x50), 
                                                                                    0x2000, 4)
                                                                                ebx_8 = eax_123
                                                                                int32_t* var_1c_4 = ebx_8
                                                                                
                                                                                if (ebx_8 != 0)
                                                                                label_2177bfc:
                                                                                    int32_t var_54_1 = 0
                                                                                    int32_t var_58_1 = 0
                                                                                    int32_t var_50_1 = 0
                                                                                    int32_t* var_54_2 = ebx_8
                                                                                    void* eax_125 = var_10c(ebx_8, 
                                                                                        *(esi_9 + 0x50), 0x1000, 4)
                                                                                    void* edi_16 = edi_9
                                                                                    int32_t edx_10 = *(esi_9 + 0x54)
                                                                                    void* var_14_3 = eax_125
                                                                                    int32_t i_18 = edx_10 + *(edi_16 + 0x3c)
                                                                                    
                                                                                    if (edx_10 != neg.d(*(edi_16 + 0x3c)))
                                                                                        void* edi_17 = edi_16 - eax_125
                                                                                        void* ecx_41 = eax_125
                                                                                        int32_t i_6
                                                                                        
                                                                                        do
                                                                                            eax_125.b = *(edi_17 + ecx_41)
                                                                                            ecx_41 += 1
                                                                                            *(ecx_41 - 1) = eax_125.b
                                                                                            i_6 = i_18
                                                                                            i_18 -= 1
                                                                                        while (i_6 != 1)
                                                                                        eax_125 = var_14_3
                                                                                        edi_16 = edi_9
                                                                                    
                                                                                    void* edi_19 =
                                                                                        *(edi_16 + 0x3c) + eax_125
                                                                                    int32_t i_15 = 0
                                                                                    void* var_8_3 = edi_19
                                                                                    void* var_50_2 = edi_19
                                                                                    *(edi_19 + 0x34) = ebx_8
                                                                                    
                                                                                    if (0 u< *(edi_19 + 6))
                                                                                        void* edi_21 =
                                                                                            edi_19 + 0x28 + zx.d(*(edi_19 + 0x14))
                                                                                        void* var_24_3 = edi_21
                                                                                        int32_t i_7
                                                                                        
                                                                                        do
                                                                                            int32_t eax_127 = *edi_21
                                                                                            
                                                                                            if (eax_127 != 0)
                                                                                                void* edx_12 = var_10c(
                                                                                                    *(edi_21 - 4) + ebx_8, eax_127, 0x1000, 
                                                                                                    4)
                                                                                                void* ecx_47 = *(edi_21 + 4) + edi_9
                                                                                                int32_t j_5 = *edi_21
                                                                                                
                                                                                                if (j_5 != 0)
                                                                                                    int32_t j_1
                                                                                                    
                                                                                                    do
                                                                                                        void* eax_133
                                                                                                        eax_133.b = *ecx_47
                                                                                                        edx_12 += 1
                                                                                                        ecx_47 += 1
                                                                                                        *(edx_12 - 1) = eax_133.b
                                                                                                        j_1 = j_5
                                                                                                        j_5 -= 1
                                                                                                    while (j_1 != 1)
                                                                                            else
                                                                                                int32_t esi_10 = *(esi_9 + 0x38)
                                                                                                
                                                                                                if (esi_10 != 0)
                                                                                                    __builtin_memset(
                                                                                                        __builtin_memset(
                                                                                                            var_10c(*(edi_21 - 4) + ebx_8, esi_10, 
                                                                                                                0x1000, 4), 
                                                                                                            0, esi_10 u>> 2 << 2), 
                                                                                                        0, esi_10 & 3)
                                                                                                    edi_21 = var_24_3
                                                                                            
                                                                                            edi_21 += 0x28
                                                                                            i_7 = i_15 + 1
                                                                                            var_24_3 = edi_21
                                                                                            i_15 = i_7
                                                                                            esi_9 = var_20_3
                                                                                        while (i_7 s< zx.d(*(var_8_3 + 6)))
                                                                                        edi_19 = var_8_3
                                                                                    
                                                                                    void* eax_137 = ebx_8 - *(esi_9 + 0x34)
                                                                                    
                                                                                    if (ebx_8 != *(esi_9 + 0x34)
                                                                                            && *(edi_19 + 0xa4) u> 0)
                                                                                        void* ecx_49 = *(edi_19 + 0xa0) + ebx_8
                                                                                        void* var_20_4 = ecx_49
                                                                                        
                                                                                        for (void* i_8 = *ecx_49; i_8 != 0; 
                                                                                                i_8 = *ecx_49)
                                                                                            void* edx_13 = i_8 + ebx_8
                                                                                            int32_t j_2 = 0
                                                                                            void* eax_138 = ecx_49 + 4
                                                                                            void* var_2c_2 = edx_13
                                                                                            void* edi_25 = ecx_49 + 8
                                                                                            
                                                                                            if (((*eax_138 - 8) & 0xfffffffe) u> 0)
                                                                                                do
                                                                                                    uint32_t eax_141 = zx.d(*edi_25)
                                                                                                    uint32_t eax_142 = eax_141 u>> 0xc
                                                                                                    int32_t* ecx_52 = eax_141 & 0xfff
                                                                                                    
                                                                                                    if (eax_142 != 0)
                                                                                                        if (eax_142 == 3)
                                                                                                            *(ecx_52 + edx_13) += eax_137
                                                                                                        else
                                                                                                            if (eax_142 != 0xa)
                                                                                                                breakpoint
                                                                                                            
                                                                                                            int32_t eax_144
                                                                                                            int32_t edx_14
                                                                                                            edx_14:eax_144 = sx.q(eax_137)
                                                                                                            int32_t temp14_1 = *(ecx_52 + var_2c_2)
                                                                                                            *(ecx_52 + var_2c_2) += eax_144
                                                                                                            *(ecx_52 + var_2c_2 + 4) = adc.d(
                                                                                                                *(ecx_52 + var_2c_2 + 4), edx_14, 
                                                                                                                temp14_1 + eax_144 u< temp14_1)
                                                                                                            edx_13 = var_2c_2
                                                                                                    
                                                                                                    j_2 += 1
                                                                                                    edi_25 += 2
                                                                                                while (j_2 u< (*eax_138 - 8) u>> 1)
                                                                                                
                                                                                                ebx_8 = var_1c_4
                                                                                                ecx_49 = var_20_4
                                                                                            
                                                                                            ecx_49 += *eax_138
                                                                                            var_20_4 = ecx_49
                                                                                    
                                                                                    void* edi_29 = var_8_3
                                                                                    
                                                                                    if (*(edi_29 + 0x84) u> 0)
                                                                                        void* edi_27 = *(edi_29 + 0x80) + ebx_8
                                                                                        void* var_c_4 = edi_27
                                                                                        
                                                                                        if (var_100(edi_27, 0x14) == 0)
                                                                                            int32_t i_9
                                                                                            
                                                                                            do
                                                                                                void* eax_153 = *(edi_27 + 0xc)
                                                                                                
                                                                                                if (eax_153 == 0)
                                                                                                    break
                                                                                                
                                                                                                int32_t edx_15 = eax_32(eax_153 + ebx_8)
                                                                                                int32_t var_28_2 = edx_15
                                                                                                
                                                                                                if (edx_15 == 0)
                                                                                                    goto label_2177f60
                                                                                                
                                                                                                void* eax_156 = *edi_27
                                                                                                void* ecx_54
                                                                                                void* esi_12
                                                                                                
                                                                                                if (eax_156 == 0)
                                                                                                    esi_12 = *(edi_27 + 0x10) + ebx_8
                                                                                                    ecx_54 = esi_12
                                                                                                else
                                                                                                    esi_12 = eax_156 + ebx_8
                                                                                                    ecx_54 = *(edi_27 + 0x10) + ebx_8
                                                                                                
                                                                                                void* j_3 = *esi_12
                                                                                                
                                                                                                if (j_3 != 0)
                                                                                                    void* ecx_55 = ecx_54 - esi_12
                                                                                                    void* var_14_4 = ecx_55
                                                                                                    
                                                                                                    do
                                                                                                        void* eax_157
                                                                                                        
                                                                                                        if (j_3 s>= 0)
                                                                                                            eax_157 = j_3 + 2 + ebx_8
                                                                                                        else
                                                                                                            eax_157 = zx.d(j_3.w)
                                                                                                        
                                                                                                        int32_t eax_159 =
                                                                                                            var_e4_1(edx_15, eax_157)
                                                                                                        *(ecx_55 + esi_12) = eax_159
                                                                                                        
                                                                                                        if (eax_159 == 0)
                                                                                                            goto label_2177f60
                                                                                                        
                                                                                                        j_3 = *(esi_12 + 4)
                                                                                                        esi_12 += 4
                                                                                                        ecx_55 = var_14_4
                                                                                                        edx_15 = var_28_2
                                                                                                    while (j_3 != 0)
                                                                                                    
                                                                                                    edi_27 = var_c_4
                                                                                                
                                                                                                edi_27 += 0x14
                                                                                                var_c_4 = edi_27
                                                                                                i_9 = var_100(edi_27, 0x14)
                                                                                            while (i_9 == 0)
                                                                                        
                                                                                        edi_29 = var_8_3
                                                                                    
                                                                                    int32_t i_16 = 0
                                                                                    
                                                                                    if (0 u< *(edi_29 + 6))
                                                                                        void* esi_15 =
                                                                                            edi_29 + 0x3c + zx.d(*(edi_29 + 0x14))
                                                                                        int32_t i_10
                                                                                        
                                                                                        do
                                                                                            int32_t ecx_56 = *esi_15
                                                                                            uint8_t edx_17 = (ecx_56 u>> 0x1f).b & 1
                                                                                            
                                                                                            if ((ecx_56 & 0x2000000) == 0)
                                                                                                void* eax_169
                                                                                                
                                                                                                if (((ecx_56 u>> 0x1e).b & 1) == 0)
                                                                                                    eax_169 = 1
                                                                                                    
                                                                                                    if (edx_17 != 0)
                                                                                                        eax_169 = 8
                                                                                                else
                                                                                                    int32_t eax_168
                                                                                                    eax_168.b = edx_17 != 0
                                                                                                    eax_169 = (eax_168 << 1) + 2
                                                                                                
                                                                                                if (((ecx_56 u>> 0x1d).b & 1) != 0)
                                                                                                    eax_169 <<= 4
                                                                                                
                                                                                                if ((ecx_56 & 0x4000000) != 0)
                                                                                                    eax_169 |= 0x200
                                                                                                
                                                                                                void var_144
                                                                                                int32_t var_104
                                                                                                
                                                                                                if (*(esi_15 - 0x14) != 0)
                                                                                                    var_104(*(esi_15 - 0x18) + ebx_8, 
                                                                                                        *(esi_15 - 0x14), eax_169, &var_144)
                                                                                                else
                                                                                                    int32_t edx_19
                                                                                                    
                                                                                                    if ((ecx_56.b & 0x40) != 0)
                                                                                                        edx_19 = *(edi_29 + 0x20)
                                                                                                    label_2177f0d:
                                                                                                        
                                                                                                        if (edx_19 != 0)
                                                                                                            var_104(*(esi_15 - 0x18) + ebx_8, 
                                                                                                                *(esi_15 - 0x14), eax_169, &var_144)
                                                                                                    else if (ecx_56.b s< 0)
                                                                                                        edx_19 = *(edi_29 + 0x24)
                                                                                                        goto label_2177f0d
                                                                                            else
                                                                                                var_108(*(esi_15 - 0x18) + ebx_8, 
                                                                                                    *(esi_15 - 0x14), 0x4000)
                                                                                            
                                                                                            esi_15 += 0x28
                                                                                            i_10 = i_16 + 1
                                                                                            i_16 = i_10
                                                                                        while (i_10 s< zx.d(*(edi_29 + 6)))
                                                                                    
                                                                                    void* eax_173 = *(edi_29 + 0x28)
                                                                                    
                                                                                    if (eax_173 == 0)
                                                                                        i_17 = i_22
                                                                                    else
                                                                                        if (eax_173 == neg.d(ebx_8))
                                                                                            goto label_2177f60
                                                                                        
                                                                                        if ((eax_173 + ebx_8)(ebx_8, 1, 0) == 0)
                                                                                            goto label_2177f60
                                                                                        
                                                                                        var_58_1.b = 1
                                                                                        i_17 = i_22
                                                                                else
                                                                                    int32_t* eax_124 = var_10c(eax_123, 
                                                                                        *(esi_9 + 0x50), 0x2000, 4)
                                                                                    ebx_8 = eax_124
                                                                                    var_1c_4 = eax_124
                                                                                    
                                                                                    if (ebx_8 != 0)
                                                                                        goto label_2177bfc
                                                                                    
                                                                                label_2177f60:
                                                                                    i_17 = i_22
                                                                                    ebx_8 = nullptr
                                                                        
                                                                        if (i_17 != 0)
                                                                            __builtin_memset(
                                                                                __builtin_memset(edi_9, 0, 
                                                                                    i_17 u>> 2 << 2), 
                                                                                0, i_17 & 3)
                                                                        
                                                                        int32_t var_13c
                                                                        var_13c(edi_9)
                                                                        
                                                                        if (ebx_8 == 0)
                                                                            ebx_8.b = 0x42
                                                                            arg1:3.b = 0x42
                                                                        else if (0x5a4d != *ebx_8)
                                                                        label_2178187:
                                                                            ebx_8.b = 0x43
                                                                            arg1:3.b = 0x43
                                                                        else
                                                                            void* eax_177 = ebx_8[0xf] + ebx_8
                                                                            
                                                                            if (*eax_177 != 0x4550
                                                                                    || *(eax_177 + 4) != 0x14c
                                                                                    || *(eax_177 + 0x14) != 0xe0)
                                                                                goto label_2178187
                                                                            
                                                                            int32_t ecx_62 = *(eax_177 + 0x7c)
                                                                            
                                                                            if (ecx_62 == 0)
                                                                                goto label_2178187
                                                                            
                                                                            int32_t ecx_63 = *(eax_177 + 0x78)
                                                                            int32_t eax_178 =
                                                                                *(ecx_63 + ebx_8 + 0x18)
                                                                            
                                                                            if (eax_178 == 0)
                                                                                goto label_2178187
                                                                            
                                                                            int32_t edx_20 =
                                                                                *(ecx_63 + ebx_8 + 0x14)
                                                                            int32_t var_14_6 = edx_20
                                                                            
                                                                            if (edx_20 == 0)
                                                                                goto label_2178187
                                                                            
                                                                            int32_t edi_32 = 0
                                                                            void* esi_17 =
                                                                                *(ecx_63 + ebx_8 + 0x20) + ebx_8
                                                                            void* ecx_65 =
                                                                                *(ecx_63 + ebx_8 + 0x24) + ebx_8
                                                                            void* var_8_4 = ecx_65
                                                                            
                                                                            if (eax_178 == 0)
                                                                                goto label_2178187
                                                                            
                                                                            char* var_5c
                                                                            char* eax_179 = var_5c
                                                                            edx_20.b = *eax_179
                                                                            
                                                                            while (true)
                                                                                void* edx_22 = *esi_17 + ebx_8
                                                                                
                                                                                if (edx_20.b != 0)
                                                                                    while (true)
                                                                                        ecx_65.b = *edx_22
                                                                                        
                                                                                        if (ecx_65.b == 0)
                                                                                            break
                                                                                        
                                                                                        ecx_65:1.b = *eax_179
                                                                                        
                                                                                        if (ecx_65:1.b s< ecx_65.b)
                                                                                            goto label_2178052
                                                                                        
                                                                                        if (ecx_65:1.b s> ecx_65.b)
                                                                                            goto label_2178052
                                                                                        
                                                                                        eax_179 = &eax_179[1]
                                                                                        edx_22 += 1
                                                                                        
                                                                                        if (*eax_179 == 0)
                                                                                            ecx_65 = var_8_4
                                                                                            goto label_2178048
                                                                                    
                                                                                    goto label_217804d
                                                                                
                                                                            label_2178048:
                                                                                
                                                                                if (*edx_22 == 0)
                                                                                label_217804d:
                                                                                    
                                                                                    if (*eax_179 == 0)
                                                                                        break
                                                                                    
                                                                                label_2178052:
                                                                                    ecx_65 = var_8_4
                                                                                
                                                                                edi_32 += 1
                                                                                ecx_65 += 2
                                                                                esi_17 += 4
                                                                                var_8_4 = ecx_65
                                                                                
                                                                                if (edi_32 u>= *(ecx_63 + ebx_8 + 0x18))
                                                                                    goto label_2178187
                                                                                
                                                                                eax_179 = var_5c
                                                                            
                                                                            uint32_t ecx_66 = zx.d(*var_8_4)
                                                                            
                                                                            if (ecx_66 == 0xffffffff
                                                                                    || ecx_66 u> var_14_6)
                                                                                goto label_2178187
                                                                            
                                                                            void* ecx_67 = *(
                                                                                *(ecx_63 + ebx_8 + 0x1c) + (ecx_66 << 2)
                                                                                + ebx_8)
                                                                            
                                                                            if (ecx_67 u>= ecx_63
                                                                                    && ecx_67 u< ecx_62 + ecx_63)
                                                                                goto label_2178187
                                                                            
                                                                            void* eax_186 = ecx_67 + ebx_8
                                                                            
                                                                            if (eax_186 == 0)
                                                                                goto label_2178187
                                                                            
                                                                            char eax_187 =
                                                                                eax_186(arg1, &var_234, 0xf0)
                                                                            arg1:3.b = eax_187
                                                                            
                                                                            if (eax_187 == 0x30)
                                                                                if (0x5a4d == *ebx_8)
                                                                                    int32_t* esi_19 = ebx_8[0xf] + ebx_8
                                                                                    
                                                                                    if (*esi_19 == 0x4550
                                                                                            && esi_19[1].w == 0x14c
                                                                                            && esi_19[5].w == 0xe0)
                                                                                        void* eax_188 = esi_19[0xa]
                                                                                        
                                                                                        if (eax_188 == 0)
                                                                                            goto label_217811c
                                                                                        
                                                                                        if (eax_188 != neg.d(ebx_8))
                                                                                            (eax_188 + ebx_8)(ebx_8, 0, 0)
                                                                                        label_217811c:
                                                                                            
                                                                                            if (esi_19[0x21] u> 0)
                                                                                                void* esi_21 = esi_19[0x20] + ebx_8
                                                                                                
                                                                                                if (var_100(esi_21, 0x14) == 0)
                                                                                                    void** esi_22 = esi_21 + 0xc
                                                                                                    int32_t i_11
                                                                                                    
                                                                                                    do
                                                                                                        void* eax_191 = *esi_22
                                                                                                        
                                                                                                        if (eax_191 == 0)
                                                                                                            break
                                                                                                        
                                                                                                        int32_t eax_193 =
                                                                                                            var_f4(eax_191 + ebx_8)
                                                                                                        int32_t var_f8
                                                                                                        
                                                                                                        if (eax_193 != 0)
                                                                                                            var_f8(eax_193)
                                                                                                        esi_22 = &esi_22[5]
                                                                                                        i_11 = var_100(&esi_22[-3], 0x14)
                                                                                                    while (i_11 == 0)
                                                                                            
                                                                                            var_108(ebx_8, 0, 0x8000)
                                                                                
                                                                                return var_214 + eax_3
                                                                            
                                                                            ebx_8.b = arg1:3.b
                                                                    else
                                                                        ebx_8.b = 0x51
                                                                        arg1:3.b = 0x51
                                                                else
                                                                    ebx_8.b = 0x57
                                                                    arg1:3.b = 0x57
                                                            
                                                            int32_t var_130
                                                            int32_t eax_197 = var_130()
                                                            
                                                            if (ebx_8.b != 0x35 && ebx_8.b != 0x30
                                                                    && ebx_8.b != 0x45)
                                                                void var_288
                                                                void* eax_198 = &var_288
                                                                char* var_6c
                                                                char i_12
                                                                
                                                                for (i_12 = *var_6c; i_12 != 0; 
                                                                        i_12 = *(var_6c - &var_288 + eax_198))
                                                                    *eax_198 = i_12
                                                                    eax_198 += 1
                                                                
                                                                *eax_198 = 0
                                                                char var_268[0x34]
                                                                char (* eax_199)[0x34] = &var_268
                                                                char* var_68
                                                                
                                                                for (i_12 = *var_68; i_12 != 0; 
                                                                        i_12 = *(var_68 - &var_268 + eax_199))
                                                                    *eax_199 = i_12
                                                                    eax_199 = &(*eax_199)[1]
                                                                
                                                                *eax_199 = 0
                                                                int32_t eax_200 = 0
                                                                
                                                                if (var_268[0] != 0)
                                                                    do
                                                                        eax_200 += 1
                                                                    while (var_268[eax_200] != 0)
                                                                
                                                                int32_t __saved_ebp
                                                                
                                                                for (void* i_13 =
                                                                        &__saved_ebp + eax_200 - 0x265; 
                                                                        i_13 u> &var_268; i_13 -= 1)
                                                                    if (*i_13 == 0x3a)
                                                                        *(i_13 - 1) = ebx_8.b
                                                                        *(i_13 + 1) =
                                                                            ((eax_197 + 0xff98) u/ 0x3b9aca00).b
                                                                            + 0x30
                                                                        int32_t ebx_13 =
                                                                            (eax_197 + 0xff98) u% 0x3b9aca00
                                                                        uint32_t edx_30 = ebx_13 u/ 0x5f5e100
                                                                        *(i_13 + 2) = edx_30.b + 0x30
                                                                        int32_t ebx_14 =
                                                                            ebx_13 + edx_30 * 0xfa0a1f00
                                                                        uint32_t edx_32 = ebx_14 u/ 0x989680
                                                                        *(i_13 + 3) = edx_32.b + 0x30
                                                                        int32_t ebx_15 =
                                                                            ebx_14 + edx_32 * 0xff676980
                                                                        uint32_t edx_34 = ebx_15 u/ 0xf4240
                                                                        *(i_13 + 4) = edx_34.b + 0x30
                                                                        int32_t ebx_16 =
                                                                            ebx_15 + edx_34 * 0xfff0bdc0
                                                                        uint32_t ecx_77 = ebx_16 u/ 0x186a0
                                                                        *(i_13 + 5) = ecx_77.b + 0x30
                                                                        int32_t ebx_17 =
                                                                            ebx_16 + ecx_77 * 0xfffe7960
                                                                        uint32_t edx_37 = ebx_17 u/ 0x2710
                                                                        *(i_13 + 6) = edx_37.b + 0x30
                                                                        int32_t ebx_18 =
                                                                            ebx_17 + edx_37 * 0xffffd8f0
                                                                        uint32_t edx_39 = ebx_18 u/ 0x3e8
                                                                        *(i_13 + 7) = edx_39.b + 0x30
                                                                        int32_t ebx_19 =
                                                                            ebx_18 + edx_39 * 0xfffffc18
                                                                        uint32_t edx_41 = ebx_19 u/ 0x64
                                                                        *(i_13 + 8) = edx_41.b + 0x30
                                                                        int32_t ebx_20 =
                                                                            ebx_19 + edx_41 * 0xffffff9c
                                                                        uint8_t edx_43 = (ebx_20 u/ 0xa).b
                                                                        *(i_13 + 9) = edx_43 + 0x30
                                                                        *(i_13 + 0xa) =
                                                                            ebx_20.b - edx_43 * 0xa + 0x30
                                                                        break
                                                                
                                                                int32_t var_220
                                                                
                                                                if (var_220 u> 0 || (var_220 u>= 0
                                                                    && var_224 u> 0xffffffff))
                                                                label_217845f:
                                                                    
                                                                    if ((var_1f8 & 0x40) == 0)
                                                                        int32_t var_88
                                                                        int32_t eax_227 = eax_32(var_88)
                                                                        
                                                                        if (eax_227 != 0)
                                                                            int32_t var_78
                                                                            int32_t eax_228 =
                                                                                var_e4_1(eax_227, var_78)
                                                                            __builtin_memset(&var_234, 0, 0xf0)
                                                                            __builtin_memset(&var_508, 0, 0x280)
                                                                            
                                                                            if (eax_228 != 0)
                                                                                eax_228(0, &var_268, &var_288, 0x10)
                                                                else
                                                                    int32_t var_12c
                                                                    int32_t var_70
                                                                    int32_t eax_219 =
                                                                        var_12c(0x100000, 0, var_70)
                                                                    int32_t var_128
                                                                    int32_t var_74
                                                                    int32_t eax_220 = var_128(2, 0, var_74)
                                                                    
                                                                    if (eax_219 == 0 || eax_220 == 0)
                                                                        goto label_217845f
                                                                    
                                                                    int32_t var_120
                                                                    int32_t eax_221 =
                                                                        var_120(eax_219, 0x1388)
                                                                    
                                                                    if (eax_221 != 0)
                                                                        goto label_217845f
                                                                    
                                                                    int32_t var_124
                                                                    void* eax_222 = var_124(eax_220, 2, 
                                                                        eax_221, eax_221, eax_221)
                                                                    
                                                                    if (eax_222 == 0
                                                                            || *(eax_222 + 0x90) != 2
                                                                            || *(eax_222 + 0x94) != 0)
                                                                        goto label_217845f
                                                                    
                                                                    int32_t var_11c
                                                                    int32_t eax_223 = var_11c(0, 0, 0, 0)
                                                                    int32_t var_110
                                                                    *(eax_222 + 0x98) = var_110()
                                                                    int32_t var_1fc
                                                                    *(eax_222 + 0xa0) = var_1fc
                                                                    *(eax_222 + 0xa4) = var_1f0
                                                                    *(eax_222 + 0xa8) = sx.d(arg1:3.b)
                                                                    int32_t var_518_33 = 0x1388
                                                                    *(eax_222 + 0xac) = var_224 - 0xf0
                                                                    *(eax_222 + 0x9c) = eax_223
                                                                    *(eax_222 + 0x94) = 2
                                                                    int32_t eax_226 =
                                                                        var_120(eax_223, var_518_33)
                                                                    int32_t var_118
                                                                    var_118(eax_222)
                                                                    int32_t var_114
                                                                    var_114(eax_220)
                                                                    var_114(eax_219)
                                                                    var_114(eax_223)
                                                                    
                                                                    if (eax_226 != 0)
                                                                        goto label_217845f
                                                            
                                                            __builtin_memset(&var_234, 0, 0xf0)
                                                            __builtin_memset(&var_508, 0, 0x280)
                                                            var_134(0xffffffff, sx.d(arg1:3.b))
                                                            return 0
                                                    
                                                    break
                                                
                                                ebx_4 = var_e4_1
                                                eax_33 = var_c_2
                                else
                                    int32_t var_80
                                    int32_t eax_31 = ebx_4(eax_17, var_80)
                                    var_f4 = eax_31
                                    
                                    if (eax_31 != 0)
                                        goto label_2177700
                            else if (0x5a4d == *eax_17)
                                void* eax_21 = *(eax_17 + 0x3c) + eax_17
                                
                                if (*eax_21 == 0x4550)
                                    if (*(eax_21 + 4) != 0x14c)
                                        ebx_4 = nullptr
                                    label_21776cc:
                                        var_e4_1 = ebx_4
                                        
                                        if (ebx_4 != 0)
                                            goto label_21776e0
                                    else if (*(eax_21 + 0x14) == 0xe0)
                                        int32_t ecx_10 = *(eax_21 + 0x7c)
                                        
                                        if (ecx_10 != 0)
                                            int32_t ecx_11 = *(eax_21 + 0x78)
                                            int32_t eax_22 = *(ecx_11 + eax_17 + 0x18)
                                            
                                            if (eax_22 != 0)
                                                int32_t edx_4 = *(ecx_11 + eax_17 + 0x14)
                                                int32_t var_c_1 = edx_4
                                                
                                                if (edx_4 != 0)
                                                    void* edi_6 = *(ecx_11 + eax_17 + 0x20) + eax_17
                                                    void* ebx_6 = *(ecx_11 + eax_17 + 0x24) + eax_17
                                                    void* var_18_1 = ebx_6
                                                    int32_t var_8_1 = 0
                                                    
                                                    if (eax_22 != 0)
                                                        char* var_84
                                                        char* eax_23 = var_84
                                                        edx_4.b = *eax_23
                                                        int32_t ecx_12 = 0
                                                        
                                                        while (true)
                                                            void* edx_6 = *edi_6 + eax_17
                                                            
                                                            if (edx_4.b != 0)
                                                                while (true)
                                                                    ecx_12.b = *edx_6
                                                                    
                                                                    if (ecx_12.b == 0)
                                                                        ebx_6 = var_18_1
                                                                        goto label_2177665
                                                                    
                                                                    char ebx_7 = *eax_23
                                                                    
                                                                    if (ebx_7 s< ecx_12.b
                                                                            || ebx_7 s> ecx_12.b)
                                                                        ebx_6 = var_18_1
                                                                        goto label_21776a5
                                                                    
                                                                    eax_23 = &eax_23[1]
                                                                    edx_6 += 1
                                                                    
                                                                    if (*eax_23 != 0)
                                                                        continue
                                                                    
                                                                    ecx_12 = var_8_1
                                                                    ebx_6 = var_18_1
                                                                    break
                                                            
                                                            if (*edx_6 == 0)
                                                            label_2177665:
                                                                
                                                                if (*eax_23 == 0)
                                                                    break
                                                                
                                                            label_21776a5:
                                                                ecx_12 = var_8_1
                                                            
                                                            ecx_12 += 1
                                                            ebx_6 += 2
                                                            var_8_1 = ecx_12
                                                            edi_6 += 4
                                                            var_18_1 = ebx_6
                                                            
                                                            if (ecx_12
                                                                    u>= *(ecx_11 + eax_17 + 0x18))
                                                                goto label_21784f7
                                                            
                                                            eax_23 = var_84
                                                        
                                                        uint32_t ecx_13 = zx.d(*ebx_6)
                                                        
                                                        if (ecx_13 != 0xffffffff
                                                                && ecx_13 u<= var_c_1)
                                                            void* ecx_14 = *(
                                                                *(ecx_11 + eax_17 + 0x1c)
                                                                + (ecx_13 << 2) + eax_17)
                                                            
                                                            if (ecx_14 u< ecx_11
                                                                    || ecx_14 u>= ecx_10 + ecx_11)
                                                                ebx_4 = ecx_14 + eax_17
                                                                goto label_21776cc
                
                break

label_21784f7:
__builtin_memset(&var_234, 0, 0xf0)
__builtin_memset(&var_508, 0, 0x280)
breakpoint

// 函数: sub_44ea67
// 地址: 0x44ea67
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_98 = edi
int32_t* ebx_2 = arg2 * 0x64 + *(arg1 + 0x2c)
void* ecx = ebx_2[1]
int32_t eax_1 = *(ecx + 0x1c) << 2
int32_t edx = 0
int32_t result_1 = 0
char* var_70 = nullptr
int32_t esi_2

if (*(*(eax_1 + *(arg1 + 0xb0)) + 0x40) != 0)
    esi_2 = *(*(arg1 + 0x38) + 0x10)
else
    esi_2 = *(arg1 + 0x20)

*(ecx + 8) = *(*(eax_1 + *(arg1 + 0xb0)) + 0x30) + *(ecx + 0x24) + esi_2
void* ecx_1 = ebx_2[1]
int32_t eax_7 = *(ecx_1 + 0x1c) << 2
int32_t esi_7

if (*(*(eax_7 + *(arg1 + 0xb0)) + 0x40) != 0)
    esi_7 = *(*(arg1 + 0x38) + 0x10)
else
    esi_7 = *(arg1 + 0x20)

*(ecx_1 + 0xc) = *(*(eax_7 + *(arg1 + 0xb0)) + 0x2c) + *(ecx_1 + 0x20) + esi_7
void* ecx_2 = ebx_2[1]
int32_t eax_13 = *(ecx_2 + 0x1c) << 2
void* eax_14 = *(eax_13 + *(arg1 + 0xb0))
int32_t eax_17

if (*(*(eax_13 + *(arg1 + 0xb0)) + 0x40) != 0)
    int32_t eax_18
    
    if (*(eax_14 + 0x40) != 0)
        eax_18 = *(*(arg1 + 0x38) + 0x10)
    else
        eax_18 = *(arg1 + 0x20)
    
    void* eax_21 = *(*(arg1 + 0xb0) + (*(ecx_2 + 0x1c) << 2))
    eax_17 = *(*(*(eax_21 + 0x40) + 8) + (*(*(ecx_2 + 0x24) + *(eax_21 + 0x30) + eax_18) << 2))
else
    int32_t esi_13
    
    if (*(eax_14 + 0x40) != 0)
        esi_13 = *(*(arg1 + 0x38) + 0x10)
    else
        esi_13 = *(arg1 + 0x20)
    
    eax_17 = *(*(eax_14 + 0x30) + *(ecx_2 + 0x24) + esi_13)

void* esi_17 = *(arg1 + 0x18) + eax_17 * 0x18
int32_t eax_25 = *(esi_17 + 0x14)
int32_t result
int32_t var_6c

if ((1 & eax_25.b) == 0)
    if ((ebx_2[2].b & 8) != 0 && *(arg1 + 0xb4) != 0 && (*(arg1 + 0x119) & 8) == 0)
        int32_t esi_115 = *(arg1 + 0xac) * *(arg1 + 0xa0)
        var_6c = esi_115
        int32_t var_50_4 = 0
        
        if (esi_115 u> 0)
            do
                int32_t ecx_161 = var_50_4 << 2
                int32_t* eax_144 = *(ecx_161 + *(arg1 + 0xc0))
                
                if (eax_144 != 0)
                    int32_t* var_3c_7 = eax_144
                    void** var_1c_2 = *(ecx_161 + *(arg1 + 0xb4))
                    void* i = *var_3c_7
                    void** ecx_162 = nullptr
                    
                    if (i != 0)
                        do
                            if (zx.d(*(i + 0x14)) == arg2)
                                if (ecx_162 == 0)
                                    ecx_162 = var_1c_2
                                    
                                    if (*ecx_162 != 0)
                                        do
                                            ecx_162 = &ecx_162[1]
                                        while (*ecx_162 != 0)
                                        
                                        var_1c_2 = ecx_162
                                
                                *ecx_162 = i
                                ecx_162 = &ecx_162[1]
                                *ecx_162 = nullptr
                            
                            var_3c_7 = &var_3c_7[1]
                            i = *var_3c_7
                        while (i != 0)
                        
                        esi_115 = var_6c
                
                var_50_4 += 1
            while (var_50_4 u< esi_115)
        
        ebx_2[2] &= 0xfffffff7
    
    result_1 = 0
    j__free(var_70)
    result = result_1
else if (*(esi_17 + 4) != 0)
    int32_t result_3 = sub_448e65(arg1, esi_17)
    result_1 = result_3
    
    if (result_3 s>= 0)
        edx = 0
        goto label_44ebb5
    
    j__free(var_70)
    result = result_1
else
    *(esi_17 + 0x14) = eax_25 | 2
    *(esi_17 + 0xc) = 0
label_44ebb5:
    *(esi_17 + 0x14) &= 0xfffffffe
    int32_t i_1 = 1
    
    if (*(ebx_2 + 0x36) u> 1)
        int32_t var_3c_1 = 0x64
        
        do
            void* eax_28 = ebx_2[1] + var_3c_1
            int32_t* ecx_7
            ecx_7.w = *(eax_28 + 0x52)
            void* var_54_1 = eax_28
            
            if (ecx_7.w == 0xb4 || ecx_7.w == 0xb5)
                ecx_7 = *(eax_28 + 0x38)
                
                if (ecx_7 != 0)
                    (*(*ecx_7 + 8))(ecx_7)
                    eax_28 = var_54_1
                    *(eax_28 + 0x38) = 0
                    edx = 0
                
                int32_t j = 0
                
                if (*(eax_28 + 0x4e) u> 0)
                    do
                        sub_448de6(arg1, arg2, i_1, j)
                        result_1 = 0
                        j += 1
                    while (j u< zx.d(*(var_54_1 + 0x4e)))
                    
                    eax_28 = var_54_1
                    edx = 0
            else if (*(eax_28 + 0x4e) u> 0)
                sub_448de6(arg1, arg2, i_1, 0)
                result_1 = 0
                eax_28 = var_54_1
                edx = 0
            
            i_1 += 1
            var_3c_1 += 0x64
            *(eax_28 + 0x4e) = 0
        while (i_1 u< zx.d(*(ebx_2 + 0x36)))
    
    int32_t* var_88_1 = nullptr
    int32_t* var_84
    int32_t* edi_2 = &var_84
    *edi_2 = 0
    void* edi_3 = &edi_2[1]
    *edi_3 = 0
    *(edi_3 + 4) = 0
    *(ebx_2 + 0x36) = 1
    ebx_2[0xd].w = 0
    ebx_2[6].w = 0
    ebx_2[7] = 0
    ebx_2[8] = 0
    
    if ((*(esi_17 + 0x14) & 2) == 0)
        j__free(var_70)
        result = result_1
    else
        int32_t* var_5c = nullptr
        int32_t* var_68 = nullptr
        int32_t var_40_3 = 1
        int32_t var_3c_2 = 1
        int32_t var_78
        void* var_44_1
        void var_38
        int32_t* var_14
        int32_t var_10
        int16_t var_c
        void* edi_9
        
        if (*(esi_17 + 4) == 0)
            var_44_1 = esi_17 + 0xc
            *(esi_17 + 0xc) = 0
            int32_t i_2 = 0
            var_10 = 0
            void* ecx_13 = &ebx_2[7]
            var_c.d = nullptr
            
            do
                *(i_2 + ebx_2 + 0x2c) = 0
                *ecx_13 = 0
                i_2 += 1
                ecx_13 += 2
            while (i_2 u< 4)
            
            edi_9 = var_44_1
            int32_t var_3c_3 = 0
        label_44eded:
            void* esi_21 = *edi_9
            int32_t eax_40 = ebx_2[2]
            *(ebx_2 + 0x4e) = 1
            ebx_2[0x15].w = 1
            *(ebx_2 + 0x5a) = 1
            ebx_2[0x18].w = 1
            ebx_2[0x13].w = 1
            *(ebx_2 + 0x52) = 1
            ebx_2[0x16].w = 1
            *(ebx_2 + 0x5e) = 1
            ebx_2[0x14].w = ebx_2[7].w
            *(ebx_2 + 0x56) = ebx_2[8].w
            int16_t ecx_15 = *(ebx_2 + 0x1e)
            int32_t eax_43 = (eax_40 & 0xfffffffa) | (edx & 1) | 2
            ebx_2[2] = eax_43
            ebx_2[0x17].w = ecx_15
            
            if (*edi_9 != 0)
                ebx_2[2] = eax_43 | 8
                int32_t esi_22 = *(esi_21 + 0xc) + var_40_3
                
                if (zx.d(ebx_2[0xe].w) u>= esi_22)
                label_44ef7c:
                    int16_t eax_55 = ebx_2[7].w
                    bool cond:13_1 = eax_55 u> var_10.w
                    ebx_2[3] = 0
                    ebx_2[0x10] = 0
                    
                    if (not(cond:13_1))
                        eax_55 = var_10.w
                    
                    uint32_t eax_57 = zx.d(eax_55) << 4
                    int32_t eax_59 = (eax_57 & 3) + (eax_57 u>> 2 << 2)
                    int16_t ecx_45 = *(ebx_2 + 0x1e)
                    bool cond:15_1 = ecx_45 u> var_10:2.w
                    ebx_2[3] = eax_59
                    ebx_2[0x12] = eax_59
                    
                    if (not(cond:15_1))
                        ecx_45 = var_10.w
                    
                    int32_t eax_60 = eax_59 + (zx.d(ecx_45) << 2)
                    int32_t eax_62 = (eax_60 & 3) + (eax_60 u>> 2 << 2)
                    int16_t ecx_49 = ebx_2[8].w
                    bool cond:17_1 = ecx_49 u> var_c
                    ebx_2[3] = eax_62
                    ebx_2[0x11] = eax_62
                    
                    if (not(cond:17_1))
                        ecx_49 = (var_c.d).w
                    
                    int32_t eax_63 = eax_62 + (zx.d(ecx_49) << 4)
                    int32_t ecx_54 = (eax_63 & 3) + (eax_63 u>> 2 << 2)
                    int32_t eax_64
                    eax_64.w = *(ebx_2 + 0x22)
                    var_6c = ecx_54
                    ebx_2[3] = ecx_54 + (zx.d(eax_64.w) << 2)
                    ebx_2[0xd].w = eax_64.w
                    
                    if (var_5c == 0)
                    label_44f3a1:
                        int32_t result_7 = sub_44330f(ebx_2)
                        result_1 = result_7
                        
                        if (result_7 s>= 0)
                            ebx_2[0xd].w = 0
                            char* eax_97 = sub_745f3f(*(esi_21 + 0xc) << 2)
                            var_70 = eax_97
                            
                            if (eax_97 == 0)
                            label_44f908:
                                result_1 = 0x8007000e
                            else
                                int32_t i_3 = 0
                                void* ecx_97 = *(esi_21 + 0x10) + esi_21
                                
                                if (*(esi_21 + 0xc) u> 0)
                                    do
                                        *(eax_97 + (i_3 << 2)) = ecx_97
                                        i_3 += 1
                                        ecx_97 += 0x14
                                    while (i_3 u< *(esi_21 + 0xc))
                                
                                sub_761c30(eax_97, *(esi_21 + 0xc), 4, sub_443227)
                                int32_t i_11 = *(esi_21 + 0xc)
                                int32_t edx_31 = 0
                                int32_t edi_78 = 0
                                int32_t var_58_2 = 0
                                
                                if (i_11 u> 0)
                                    void* eax_100 = *(esi_21 + 0x10) + esi_21 + 4
                                    int32_t i_10 = i_11
                                    int32_t i_4
                                    
                                    do
                                        uint32_t ecx_98 = zx.d(*eax_100)
                                        
                                        if (ecx_98 == 0)
                                            edi_78 += 1
                                        else if (ecx_98 == 1)
                                            var_58_2 += 1
                                        else if (ecx_98 == 2)
                                            edx_31 += 1
                                        
                                        eax_100 += 0x14
                                        i_4 = i_10
                                        i_10 -= 1
                                    while (i_4 != 1)
                                
                                int32_t i_5 = 0
                                int32_t eax_101
                                eax_101.w = *(ebx_2 + 0x36)
                                int32_t edx_32 = edx_31 + eax_101
                                int32_t ecx_103 = var_58_2 + edx_32
                                int32_t var_48_3 = edi_78 + ecx_103
                                int32_t edi_79
                                edi_79.w = *(esi_21 + 0xc)
                                edi_79.w += eax_101.w
                                *(ebx_2 + 0x36) = edi_79.w
                                edi_79.w = var_48_3.w
                                ebx_2[0x13].w = eax_101.w
                                *(ebx_2 + 0x52) = edx_32.w
                                ebx_2[0x16].w = ecx_103.w
                                *(ebx_2 + 0x5e) = edi_79.w
                                int32_t var_3c_6 = eax_101
                                int32_t var_50_3 = edx_32
                                int32_t var_58_3 = ecx_103
                                
                                if (*(esi_21 + 0xc) u> 0)
                                    do
                                        int32_t* edi_80 = *(var_70 + (i_5 << 2))
                                        uint32_t eax_103 = zx.d(edi_80[1].w)
                                        uint32_t var_44_2 = 0
                                        uint32_t eax_107
                                        
                                        if (eax_103 == 0)
                                            eax_107 = zx.d(var_58_3.w)
                                            var_58_3 += 1
                                            var_44_2 = eax_107
                                        else if (eax_103 == 1)
                                            eax_107 = zx.d(var_50_3.w)
                                            var_50_3 += 1
                                            var_44_2 = eax_107
                                        else if (eax_103 == 2)
                                            eax_107 = zx.d(var_3c_6.w)
                                            var_3c_6 += 1
                                            var_44_2 = eax_107
                                        else if (eax_103 == 3)
                                            eax_107 = zx.d(var_48_3.w)
                                            var_48_3 += 1
                                            var_44_2 = eax_107
                                        
                                        eax_107.w = *(edi_80 + 6)
                                        int32_t* esi_91 = var_44_2 * 0x64 + ebx_2[1]
                                        esi_91[0x15].w = eax_107.w
                                        eax_107.w = edi_80[2].w
                                        esi_91[0xc] |= 9
                                        *(esi_91 + 0x56) = eax_107.w
                                        int32_t var_9c_14 = 0xa
                                        void* eax_110 = sub_4439e9(arg1, *edi_80 + esi_21)
                                        var_c.d = eax_110
                                        int32_t* eax_114
                                        int32_t* edx_33
                                        
                                        if (eax_110 == 0)
                                            *esi_91 = 0
                                            eax_114 = var_c.d
                                            edx_33 = esi_91
                                        else
                                            if (esi_91[0x14].w u< 1)
                                                int32_t* eax_111 = sub_745f3f(0x24)
                                                int32_t* eax_113
                                                
                                                if (eax_111 == 0)
                                                    eax_113 = nullptr
                                                else
                                                    *eax_111 = 1
                                                    var_14 = &eax_111[1]
                                                    sub_61cdd0(&eax_111[1], 0x20, 1, sub_44325c)
                                                    eax_113 = var_14
                                                
                                                esi_91[0xd] = eax_113
                                                
                                                if (eax_113 == 0)
                                                    goto label_44f908_1
                                                
                                                esi_91[0x14].w = 1
                                            
                                            sub_4438fa(arg1, arg2, var_44_2, 0, var_c.d, edi_80)
                                            result_1 = 0
                                            edx_33 = esi_91
                                            eax_114 = var_c.d
                                            *(edx_33 + 0x4e) = 1
                                            __builtin_memcpy(&edx_33[2], eax_114, 0x28)
                                            edx_33[0xa] = 0
                                            edx_33[0xb] = 0
                                            edx_33[0xc] &= 0xfffffffd
                                            *edx_33 = 1
                                        
                                        int32_t* edi_82 = edi_80
                                        edx_33[0xf] = esi_21
                                        uint32_t ecx_108 = zx.d(edi_82[1].w)
                                        
                                        if (ecx_108 == 0)
                                            *(edx_33 + 0x52) = 0x95
                                            edx_33[0x16] = 0xc010000
                                            int32_t* eax_138 = eax_59 + (zx.d(*(edi_82 + 6)) << 2)
                                            edx_33[0x12] = eax_138
                                            uint32_t ecx_151 = zx.d(edi_82[2].w)
                                            var_14 = eax_138
                                            int32_t eax_139 = edi_82[4]
                                            void* edi_93 = *ebx_2 + var_14
                                            uint32_t ecx_152 = ecx_151 << 2
                                            
                                            if (eax_139 == 0)
                                                __builtin_memset(
                                                    __builtin_memset(edi_93, 0, 
                                                        ecx_152 u>> 2 << 2), 
                                                    0, ecx_152 & 3)
                                            else
                                                int32_t esi_112
                                                int32_t edi_94
                                                edi_94, esi_112 = __builtin_memcpy(edi_93, 
                                                    esi_21 + eax_139, ecx_152 u>> 2 << 2)
                                                __builtin_memcpy(edi_94, esi_112, ecx_152 & 3)
                                            
                                            if (*(ebx_2 + 0x2d) != 0)
                                                int32_t* eax_141 = var_84
                                                
                                                if (eax_141 != 0)
                                                    eax_141[0xc] &= 0xfffffffe
                                                
                                                var_84 = edx_33
                                        else if (ecx_108 == 1)
                                            int32_t j_1 = 0
                                            *(edx_33 + 0x52) = 0x96
                                            edx_33[0x16] = 0xc020000
                                            edx_33[0x12] = (zx.d(*(edi_82 + 6)) << 4) + eax_62
                                            
                                            if (edi_82[2].w u> 0)
                                                int32_t eax_133 = 0
                                                
                                                do
                                                    *(*ebx_2 + edx_33[0x12] + eax_133) = 0
                                                    eax_133 += 0x10
                                                    *(*ebx_2 + edx_33[0x12] + eax_133 - 0xc) = 0
                                                    *(*ebx_2 + edx_33[0x12] + eax_133 - 8) = 1
                                                    *(*ebx_2 + edx_33[0x12] + eax_133 - 4) = 0
                                                    j_1 += 1
                                                while (j_1 u< zx.d(edi_82[2].w))
                                            
                                            int32_t eax_134 = edi_82[4]
                                            
                                            if (eax_134 != 0)
                                                uint32_t ecx_146 = zx.d(edi_82[2].w) << 4
                                                int32_t esi_110
                                                int32_t edi_91
                                                edi_91, esi_110 = __builtin_memcpy(
                                                    *ebx_2 + edx_33[0x12], esi_21 + eax_134, 
                                                    ecx_146 u>> 2 << 2)
                                                __builtin_memcpy(edi_91, esi_110, ecx_146 & 3)
                                            
                                            if (*(ebx_2 + 0x2e) != 0)
                                                int32_t* var_80
                                                
                                                if (var_80 != 0)
                                                    var_80[0xc] &= 0xfffffffe
                                                
                                                var_80 = edx_33
                                        else if (ecx_108 == 2)
                                            if (eax_114 != 0)
                                                int32_t* ecx_120 = eax_114[1]
                                                var_14 = *ecx_120
                                                uint32_t var_44_3
                                                
                                                if (ecx_120[4] u>= 1)
                                                    var_44_3 = *(eax_114[1] + 0x10)
                                                else
                                                    var_44_3 = 1
                                                
                                                void* ecx_123 = eax_114[1]
                                                uint32_t esi_99 = *(ecx_123 + 0x18)
                                                int32_t ecx_124 = *(ecx_123 + 4)
                                                
                                                if (ecx_124 s>= 0)
                                                    uint32_t eax_122
                                                    
                                                    if (ecx_124 s<= 1)
                                                        if (var_14 == 3)
                                                            edx_33[0xc] |= 0x10
                                                            edx_33[0x17] = *eax_114
                                                            eax_122 = zx.d(edi_82[2].w)
                                                            
                                                            if (var_44_3 u< eax_122)
                                                                eax_122 = var_44_3
                                                            
                                                            edx_33[0x18] = eax_122 << 4
                                                    else if (ecx_124 == 2)
                                                        if (var_14 == 3
                                                                && *(edi_82[3] + esi_21) == 3)
                                                            if (var_44_3 == 1)
                                                                edx_33[0xc] |= 0x10
                                                                edx_33[0x17] = *eax_114
                                                                eax_122 = zx.d(edi_82[2].w)
                                                                
                                                                if (esi_99 u< eax_122)
                                                                    eax_122 = esi_99
                                                                
                                                                edx_33[0x18] = eax_122 << 4
                                                            else if (esi_99 == 4)
                                                                edx_33[0xc] |= 0x10
                                                                edx_33[0x17] = *eax_114
                                                                uint32_t ecx_127 = zx.d(edi_82[2].w)
                                                                eax_122 = var_44_3 << 2
                                                                
                                                                if (eax_122 u>= ecx_127)
                                                                    eax_122 = ecx_127
                                                                
                                                                edx_33[0x18] = eax_122 << 4
                                                    else if (ecx_124 == 5)
                                                        int32_t* esi_102 = eax_114[1]
                                                        var_14 = esi_102
                                                        int32_t eax_119
                                                        eax_119, edx_33 = sub_442c74(&var_14)
                                                        
                                                        if (eax_119 != 0)
                                                            var_14 = esi_102
                                                            uint32_t eax_120 =
                                                                sub_442bf5(&var_14, 4)
                                                            esi_91[0xc] |= 0x10
                                                            esi_91[0x17] = *var_c.d
                                                            uint32_t edx_37 = zx.d(edi_80[2].w)
                                                            
                                                            if (eax_120 u< edx_37)
                                                                edx_37 = eax_120
                                                            
                                                            edi_82 = edi_80
                                                            esi_91[0x18] = edx_37 << 4
                                                            edx_33 = esi_91
                                            
                                            *(edx_33 + 0x52) = 0x94
                                            edx_33[0x16] = 0xc000000
                                            uint32_t esi_104 = zx.d(*(edi_82 + 6)) << 4
                                            edx_33[0x12] = esi_104
                                            int32_t eax_127 = edi_82[4]
                                            int32_t edi_84 = *ebx_2
                                            uint32_t ecx_129 = zx.d(edi_82[2].w) << 4
                                            var_14 = esi_104
                                            
                                            if (eax_127 == 0)
                                                __builtin_memset(
                                                    __builtin_memset(edi_84 + esi_104, 0, 
                                                        ecx_129 u>> 2 << 2), 
                                                    0, ecx_129 & 3)
                                            else
                                                int32_t esi_107
                                                int32_t edi_86
                                                edi_86, esi_107 = __builtin_memcpy(edi_84 + var_14, 
                                                    esi_21 + eax_127, ecx_129 u>> 2 << 2)
                                                __builtin_memcpy(edi_86, esi_107, ecx_129 & 3)
                                            
                                            if (ebx_2[0xb].b != 0)
                                                if (var_88_1 != 0)
                                                    var_88_1[0xc] &= 0xfffffffe
                                                
                                                var_88_1 = edx_33
                                        else if (ecx_108 == 3)
                                            int32_t esi_94 = var_6c
                                            *(edx_33 + 0x52) = 0xb2
                                            edx_33[0x16] = 0xf000000
                                            uint32_t ecx_113 = zx.d(*(edi_82 + 6))
                                            edx_33[0x15].w += 0x101
                                            edx_33[0xc] &= 0xfffffffd
                                            edx_33[0x12] = esi_94 + (ecx_113 << 2)
                                            *edx_33 = 0
                                            
                                            if (eax_114 == 0)
                                                *(*ebx_2 + edx_33[0x12]) = 0
                                                *(*ebx_2 + edx_33[0x12] + 2) = 0
                                            else
                                                *(*ebx_2 + edx_33[0x12]) = eax_114[0x11].w + 1
                                                *(*ebx_2 + edx_33[0x12] + 2) = 0
                                                eax_114.w = *(eax_114 + 0x46)
                                                int32_t* ecx_117
                                                ecx_117.w = *(edx_33 + 0x56)
                                                
                                                if (ecx_117.w u< eax_114.w)
                                                    eax_114 = ecx_117
                                                
                                                *(edx_33 + 0x56) = eax_114.w
                                            
                                            edx_33.w = var_44_2.w
                                            *(ebx_2[5] + (zx.d(ebx_2[0xd].w) << 1) + *ebx_2) =
                                                edx_33.w
                                            ebx_2[0xd].w += 1
                                        
                                        i_5 += 1
                                    while (i_5 u< *(esi_21 + 0xc))
                                    
                                    ecx_103 = var_58_3
                                    edx_32 = var_50_3
                                    eax_101 = var_3c_6
                                
                                *(ebx_2 + 0x4e) = eax_101.w
                                eax_101.w = var_48_3.w
                                ebx_2[0x15].w = edx_32.w
                                *(ebx_2 + 0x5a) = ecx_103.w
                                ebx_2[0x18].w = eax_101.w
                    else
                        int16_t ecx_56 = *(ebx_2 + 0x36)
                        int32_t* eax_67 = zx.d(ecx_56) * 0x64 + ebx_2[1]
                        *(ebx_2 + 0x36) = ecx_56 + 1
                        int32_t edx_11 = eax_67[0xc] & 0xfffffff5
                        *eax_67 = 1
                        eax_67[0xc] = edx_11 | 1
                        ebx_2[2] |= 4
                        void* var_9c_9 = &eax_67[0xe]
                        int32_t var_a0_8 = var_78 + 0x68
                        int32_t result_4 = sub_458de2()
                        result_1 = result_4
                        
                        if (result_4 s>= 0)
                            int32_t* eax_70 = eax_67[0xe]
                            int32_t* eax_71 = (*(*eax_70 + 0xc))(eax_70)
                            int32_t* esi_27 = var_68
                            int32_t ecx_61 = esi_27[3] + *esi_27
                            var_14 = &esi_27[4]
                            int32_t ecx_62 = ecx_61 << 2
                            int32_t ecx_63 = ecx_62 | ecx_62 u>> 1
                            int32_t ecx_64 = ecx_63 | ecx_63 u>> 2
                            int32_t ecx_65 = ecx_64 | ecx_64 u>> 4
                            int32_t ecx_66 = ecx_65 | ecx_65 u>> 8
                            int32_t edx_16 = (esi_27[4] + esi_27[1]) << 2
                            int32_t ecx_67 = ecx_66 | ecx_66 u>> 0x10
                            int32_t edx_17 = edx_16 | edx_16 u>> 1
                            int32_t edx_18 = edx_17 | edx_17 u>> 2
                            int32_t edx_19 = edx_18 | edx_18 u>> 4
                            int32_t edx_20 = edx_19 | edx_19 u>> 8
                            int32_t esi_31 = (esi_27[2] + esi_27[5]) << 2
                            int32_t edx_21 = edx_20 | edx_20 u>> 0x10
                            int32_t esi_32 = esi_31 | esi_31 u>> 1
                            eax_71[6] = 0
                            int32_t esi_33 = esi_32 | esi_32 u>> 2
                            int32_t esi_34 = esi_33 | esi_33 u>> 4
                            int32_t esi_35 = esi_34 | esi_34 u>> 8
                            int32_t esi_36 = esi_35 | esi_35 u>> 0x10
                            eax_71[2] = esi_36
                            *eax_71 = ecx_67
                            eax_71[1] = edx_21
                            int32_t esi_40 = (*esi_27 + esi_27[3]) << 2
                            eax_71[3] = esi_40
                            
                            if (esi_40 != 0)
                                eax_71[3] = esi_40 - 1
                            
                            int32_t esi_45 = (*var_14 + esi_27[1]) << 2
                            eax_71[4] = esi_45
                            
                            if (esi_45 != 0)
                                eax_71[4] = esi_45 - 1
                            
                            int32_t esi_50 = (esi_27[5] + esi_27[2]) << 2
                            eax_71[5] = esi_50
                            
                            if (esi_50 != 0)
                                eax_71[5] = esi_50 - 1
                            
                            int32_t edi_51 = eax_71[3]
                            int32_t esi_54 = edi_51 u>> 1 | edi_51
                            int32_t edi_54 = esi_54 u>> 2 | esi_54
                            int32_t esi_57 = edi_54 u>> 4 | edi_54
                            int32_t edi_57 = esi_57 u>> 8 | esi_57
                            int32_t edi_58 = eax_71[4]
                            eax_71[3] = edi_57 u>> 0x10 | edi_57
                            int32_t esi_63 = edi_58 u>> 1 | edi_58
                            int32_t edi_61 = esi_63 u>> 2 | esi_63
                            int32_t esi_66 = edi_61 u>> 4 | edi_61
                            int32_t edi_64 = esi_66 u>> 8 | esi_66
                            int32_t edi_65 = eax_71[5]
                            eax_71[4] = edi_64 u>> 0x10 | edi_64
                            int32_t esi_72 = edi_65 u>> 1 | edi_65
                            int32_t edi_68 = esi_72 u>> 2 | esi_72
                            int32_t esi_75 = edi_68 u>> 4 | edi_68
                            int32_t edi_71 = esi_75 u>> 8 | esi_75
                            eax_71[5] = edi_71 u>> 0x10 | edi_71
                            int32_t esi_79 = ebx_2[3]
                            int32_t esi_81 = (esi_79 & 7) + (esi_79 u>> 3 << 3)
                            ebx_2[3] = esi_81
                            eax_71[7] = esi_81
                            int32_t ecx_68 = ebx_2[3] + (ecx_67 << 3)
                            int32_t ecx_70 = (ecx_68 & 7) + (ecx_68 u>> 3 << 3)
                            ebx_2[3] = ecx_70
                            eax_71[8] = ecx_70
                            int32_t edx_22 = ebx_2[3] + (edx_21 << 3)
                            int32_t ecx_74 = (edx_22 & 7) + (edx_22 u>> 3 << 3)
                            ebx_2[3] = ecx_74
                            eax_71[9] = ecx_74
                            ebx_2[3] += esi_36 << 3
                            int32_t i_6 = 0
                            eax_71[0xa] = 0
                            eax_71[0xb] = eax_59
                            eax_71[0xc] = eax_62
                            *(eax_67 + 0x56) = 0
                            eax_67[0x15].w = 0
                            void* eax_72 = &eax_71[0x10]
                            
                            do
                                *(eax_72 + 0xc) = esi_27[3 + i_6]
                                *eax_72 = esi_27[i_6]
                                i_6 += 1
                                eax_72 += 4
                            while (i_6 u< 3)
                            
                            void* eax_75 = var_68 - var_5c + 0x80
                            eax_71[0x17] = eax_75
                            void* eax_76 = eax_75 + (*(eax_75 + var_5c - 0x68) << 3) + 4
                            eax_71[0x18] = eax_76
                            eax_71[0x19] = eax_76 + (*(eax_76 + var_5c - 0x68) << 3) + 4
                            int32_t ecx_85 = var_78
                            int32_t esi_86
                            int32_t edi_75
                            edi_75, esi_86 =
                                __builtin_memcpy(&eax_71[0x1a], var_5c, ecx_85 u>> 2 << 2)
                            __builtin_memcpy(edi_75, esi_86, ecx_85 & 3)
                            int32_t result_5 =
                                sub_4288c5(&eax_71[0x1a], &eax_67[0x10], &eax_67[0x11])
                            result_1 = result_5
                            
                            if (result_5 s>= 0)
                                int32_t result_6 =
                                    sub_448bce(arg1, arg2, zx.d(*(ebx_2 + 0x36)) - 1, eax_71)
                                result_1 = result_6
                                
                                if (result_6 s>= 0)
                                    *(eax_67 + 0x52) = 0xb4
                                    eax_67[0x16] = 0x10000000
                                    ebx_2[2] |= 1
                                    void* var_50_2 = &ebx_2[7]
                                    void** var_3c_5 = &eax_71[0x17]
                                    
                                    for (int32_t i_7 = 0; i_7 u< 6; i_7 += 2)
                                        int32_t edi_76
                                        edi_76.w = *(&var_10 + i_7)
                                        
                                        if (edi_76.w != 0)
                                            void* eax_87 = *var_3c_5 + eax_71
                                            int32_t edx_30 = 0
                                            int32_t j_3 = *eax_87
                                            
                                            if (j_3 u> 0)
                                                void* eax_89 = eax_87 + 8
                                                int32_t j_2
                                                
                                                do
                                                    edx_30 += *eax_89
                                                    eax_89 += 8
                                                    j_2 = j_3
                                                    j_3 -= 1
                                                while (j_2 != 1)
                                            
                                            int16_t eax_91 = *var_50_2
                                            int16_t ecx_92 = eax_91
                                            
                                            if (eax_91 u<= edi_76.w)
                                                ecx_92 = edi_76.w
                                            
                                            eax_91 = *(&var_38 + i_7)
                                            
                                            if (zx.d(eax_91) + edx_30 != zx.d(ecx_92))
                                                ebx_2[2] &= 0xfffffffe
                                                break
                                            
                                            if (edx_30 u> 0 && eax_91 == 0)
                                                ebx_2[2] |= 0x10
                                        
                                        var_3c_5 = &var_3c_5[1]
                                        var_50_2 += 2
                                    
                                    if ((ebx_2[2].b & 1) != 0)
                                        int16_t eax_92 = ebx_2[7].w
                                        
                                        if (eax_92 u<= var_10.w)
                                            eax_92 = var_10.w
                                        
                                        ebx_2[0x14].w = eax_92
                                        int16_t eax_93 = ebx_2[8].w
                                        
                                        if (eax_93 u<= var_c)
                                            eax_93 = (var_c.d).w
                                        
                                        *(ebx_2 + 0x56) = eax_93
                                        int16_t eax_94 = *(ebx_2 + 0x1e)
                                        
                                        if (eax_94 u<= var_10:2.w)
                                            eax_94 = var_10.w
                                        
                                        ebx_2[0x17].w = eax_94
                                    
                                    goto label_44f3a1
                else
                    int32_t* eax_50 = sub_745f3f(esi_22 * 0x64 + 4)
                    void* var_48_1
                    
                    if (eax_50 == 0)
                        var_48_1 = nullptr
                    else
                        *eax_50 = esi_22
                        sub_61cdd0(&eax_50[1], 0x64, esi_22, sub_44bb09)
                        var_48_1 = &eax_50[1]
                    
                    if (var_48_1 != 0)
                        int16_t ecx_17 = *(ebx_2[1] + 0x52)
                        void* eax_52 = var_48_1
                        *(eax_52 + 0x52) = ecx_17
                        int32_t ecx_20 = *(zx.d(ecx_17) * 0x1c + 0xac1bc4)
                        *(eax_52 + 0x54) = 0xffff
                        *(eax_52 + 0x58) = ecx_20
                        *(eax_52 + 0x56) = 1
                        __builtin_memcpy(eax_52 + 8, ebx_2[1] + 8, 0x28)
                        *eax_52 = *ebx_2[1]
                        *(eax_52 + 0x30) ^=
                            (*(ebx_2[1] + 0x30) << 0x1f s>> 0x1f ^ *(eax_52 + 0x30)) & 1
                        int32_t ecx_29 = *(eax_52 + 0x30)
                        *(eax_52 + 0x30) =
                            ((*(ebx_2[1] + 0x30) << 0x1e s>> 0x1e ^ ecx_29) & 2) ^ ecx_29
                        *(eax_52 + 0x3c) = *(ebx_2[1] + 0x3c)
                        *(eax_52 + 0x34) = *(ebx_2[1] + 0x34)
                        void* ecx_34
                        ecx_34.w = *(ebx_2[1] + 0x4e)
                        *(eax_52 + 0x4e) = ecx_34.w
                        void* ecx_35
                        ecx_35.w = *(ebx_2[1] + 0x50)
                        *(eax_52 + 0x50) = ecx_35.w
                        *(eax_52 + 0x38) = *(ebx_2[1] + 0x38)
                        *(ebx_2[1] + 0x34) = 0
                        *(ebx_2[1] + 0x4e) = 0
                        *(ebx_2[1] + 0x50) = 0
                        *(ebx_2[1] + 0x38) = 0
                        int32_t* ecx_42 = ebx_2[1]
                        
                        if (ecx_42 != 0)
                            sub_44cbd3(ecx_42, 3)
                            ebx_2[1] = 0
                            eax_52 = var_48_1
                        
                        ebx_2[1] = eax_52
                        void* eax_54
                        eax_54.w = *(*var_44_1 + 0xc)
                        eax_54.w += 1
                        ebx_2[0xe].w = eax_54.w
                        goto label_44ef7c
                    
                label_44f908_1:
                    result_1 = 0x8007000e
            
            j__free(var_70)
            result = result_1
        else
            int32_t* eax_33 = *(esi_17 + 8)
            int32_t var_20
            int32_t* var_9c_4 = &var_20
            edi_9 = esi_17 + 0xc
            var_44_1 = edi_9
            void var_30
            int32_t result_2 = sub_442fd3((*(*eax_33 + 0xc))(eax_33), edi_9, &var_38, &var_30)
            
            if (result_2 s< 0)
                j__free(var_70)
                result = result_2
            else
                ebx_2[7] = var_20
                int32_t var_1c
                ebx_2[8] = var_1c
                int32_t* esi_18 = *(esi_17 + 8)
                int32_t* ecx_12
                result, ecx_12 =
                    sub_46ad8d((*(*esi_18 + 0xc))(esi_18), 0x53455250, &var_5c, &var_78)
                result_1 = result
                
                if (result s>= 0)
                    if (result != 0)
                        var_10 = 0
                        var_c.d = nullptr
                        edi_9 = var_44_1
                        goto label_44ed87
                    
                    var_40_3 = 2
                    void var_8c
                    result = sub_46ad8d(var_5c, 0x49535250, &var_68, &var_8c)
                    
                    if (result s>= 0)
                        int32_t* var_9c_7 = &var_10
                        void var_28
                        void var_18
                        result = sub_442fd3(var_5c, &var_6c, &var_28, &var_18)
                        result_1 = result
                        
                        if (result s>= 0)
                            ecx_12 = var_68
                            
                            for (int32_t i_8 = 0; i_8 u< 3; )
                                int16_t edx_1 = ecx_12[i_8 + 3].w + ecx_12[i_8].w
                                i_8 += 1
                                *(&var_14:2 + (i_8 << 1)) = edx_1
                            
                            int16_t var_a_1 = 0
                        label_44ed87:
                            edx = var_3c_2
                            void* eax_39 = &ebx_2[0xb]
                            
                            for (int32_t i_9 = 0; i_9 u< 8; i_9 += 2)
                                if (*(&var_30 + i_9) == 0)
                                    ecx_12.w = *(&var_20 + i_9)
                                
                                if (*(&var_30 + i_9) != 0 || ecx_12.w != *(&var_38 + i_9))
                                    ecx_12.b = 0
                                else
                                    ecx_12.b = 1
                                
                                bool cond:18_1 = *(&var_38 + i_9) u<= 0
                                *eax_39 = ecx_12.b
                                
                                if (not(cond:18_1) && ecx_12.b == 0)
                                    edx = 0
                                
                                eax_39 += 1
                            
                            goto label_44eded
sub_745f2b(__security_cookie_1)
return result

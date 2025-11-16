// 函数: sub_44f9da
// 地址: 0x44f9da
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
        int32_t esi_128 = *(arg1 + 0xac) * *(arg1 + 0xa0)
        var_6c = esi_128
        int32_t var_50_4 = 0
        
        if (esi_128 u> 0)
            do
                int32_t ecx_144 = var_50_4 << 2
                int32_t* eax_150 = *(ecx_144 + *(arg1 + 0xc0))
                
                if (eax_150 != 0)
                    int32_t* var_40_7 = eax_150
                    void** var_1c_2 = *(ecx_144 + *(arg1 + 0xb4))
                    void* i = *var_40_7
                    void** ecx_145 = nullptr
                    
                    if (i != 0)
                        do
                            if (zx.d(*(i + 0x14)) == arg2)
                                if (ecx_145 == 0)
                                    ecx_145 = var_1c_2
                                    
                                    if (*ecx_145 != 0)
                                        do
                                            ecx_145 = &ecx_145[1]
                                        while (*ecx_145 != 0)
                                        
                                        var_1c_2 = ecx_145
                                
                                *ecx_145 = i
                                ecx_145 = &ecx_145[1]
                                *ecx_145 = nullptr
                            
                            var_40_7 = &var_40_7[1]
                            i = *var_40_7
                        while (i != 0)
                        
                        esi_128 = var_6c
                
                var_50_4 += 1
            while (var_50_4 u< esi_128)
        
        ebx_2[2] &= 0xfffffff7
    
    result_1 = 0
    j__free(var_70)
    result = result_1
else if (*(esi_17 + 4) != 0)
    int32_t result_3 = sub_448f57(arg1, esi_17)
    result_1 = result_3
    
    if (result_3 s>= 0)
        edx = 0
        goto label_44fb28
    
    j__free(var_70)
    result = result_1
else
    *(esi_17 + 0x14) = eax_25 | 2
    *(esi_17 + 0xc) = 0
label_44fb28:
    *(esi_17 + 0x14) &= 0xfffffffe
    int32_t i_1 = 1
    
    if (*(ebx_2 + 0x36) u> 1)
        int32_t var_40_1 = 0x64
        
        do
            void* eax_28 = ebx_2[1] + var_40_1
            int32_t* ecx_7
            ecx_7.w = *(eax_28 + 0x52)
            void* var_3c_1 = eax_28
            
            if (ecx_7.w == 0xb4 || ecx_7.w == 0xb5)
                ecx_7 = *(eax_28 + 0x38)
                
                if (ecx_7 != 0)
                    (*(*ecx_7 + 8))(ecx_7)
                    eax_28 = var_3c_1
                    *(eax_28 + 0x38) = 0
                    edx = 0
                
                int32_t j = 0
                
                if (*(eax_28 + 0x4e) u> 0)
                    do
                        sub_448de6(arg1, arg2, i_1, j)
                        result_1 = 0
                        j += 1
                    while (j u< zx.d(*(var_3c_1 + 0x4e)))
                    
                    eax_28 = var_3c_1
                    edx = 0
            else if (*(eax_28 + 0x4e) u> 0)
                sub_448de6(arg1, arg2, i_1, 0)
                result_1 = 0
                eax_28 = var_3c_1
                edx = 0
            
            i_1 += 1
            var_40_1 += 0x64
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
    *(ebx_2 + 0x1a) = 0
    ebx_2[9] = 0
    ebx_2[0xa] = 0
    
    if ((*(esi_17 + 0x14) & 2) == 0)
        j__free(var_70)
        result = result_1
    else
        int32_t* var_5c = nullptr
        int32_t* var_68 = nullptr
        int32_t var_44_3 = 1
        int32_t var_40_2 = 1
        int32_t var_78
        void* var_3c_2
        void var_38
        void* var_14
        int32_t var_10
        int16_t var_c
        void* edi_9
        
        if (*(esi_17 + 4) == 0)
            var_3c_2 = esi_17 + 0xc
            *(esi_17 + 0xc) = 0
            int32_t i_2 = 0
            var_10 = 0
            void* ecx_13 = &ebx_2[9]
            var_c.d = nullptr
            
            do
                *(i_2 + ebx_2 + 0x30) = 0
                *ecx_13 = 0
                i_2 += 1
                ecx_13 += 2
            while (i_2 u< 4)
            
            edi_9 = var_3c_2
            int32_t var_40_3 = 0
        label_44fd60:
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
            ebx_2[0x14].w = ebx_2[9].w
            *(ebx_2 + 0x56) = ebx_2[0xa].w
            int16_t ecx_15 = *(ebx_2 + 0x26)
            int32_t eax_42 = (eax_40 & 0xfffffffa) | (edx & 1)
            ebx_2[2] = eax_42
            ebx_2[0x17].w = ecx_15
            
            if (*edi_9 != 0)
                ebx_2[2] = eax_42 | 8
                int32_t esi_22 = *(esi_21 + 0xc) + var_44_3
                
                if (zx.d(ebx_2[0xe].w) u>= esi_22)
                label_44feec:
                    int16_t eax_54 = ebx_2[9].w
                    bool cond:13_1 = eax_54 u> var_10.w
                    ebx_2[3] = 0
                    ebx_2[0x10] = 0
                    
                    if (not(cond:13_1))
                        eax_54 = var_10.w
                    
                    uint32_t eax_56 = zx.d(eax_54) << 4
                    int32_t eax_58 = (eax_56 & 3) + (eax_56 u>> 2 << 2)
                    int16_t ecx_45 = *(ebx_2 + 0x26)
                    bool cond:15_1 = ecx_45 u> var_10:2.w
                    ebx_2[3] = eax_58
                    ebx_2[0x12] = eax_58
                    
                    if (not(cond:15_1))
                        ecx_45 = var_10.w
                    
                    int32_t eax_59 = eax_58 + (zx.d(ecx_45) << 2)
                    int32_t eax_61 = (eax_59 & 3) + (eax_59 u>> 2 << 2)
                    int16_t ecx_49 = ebx_2[0xa].w
                    bool cond:17_1 = ecx_49 u> var_c
                    ebx_2[3] = eax_61
                    ebx_2[0x11] = eax_61
                    
                    if (not(cond:17_1))
                        ecx_49 = (var_c.d).w
                    
                    int32_t eax_62 = eax_61 + (zx.d(ecx_49) << 4)
                    int32_t ecx_54 = (eax_62 & 3) + (eax_62 u>> 2 << 2)
                    int32_t eax_63
                    eax_63.w = *(ebx_2 + 0x2a)
                    var_6c = ecx_54
                    ebx_2[3] = ecx_54 + (zx.d(eax_63.w) << 2)
                    ebx_2[0xd].w = eax_63.w
                    
                    if (var_5c == 0)
                    label_450314:
                        int32_t result_7 = sub_44330f(ebx_2)
                        result_1 = result_7
                        
                        if (result_7 s>= 0)
                            ebx_2[0xd].w = 0
                            char* eax_96 = sub_745f3f(*(esi_21 + 0xc) << 2)
                            var_70 = eax_96
                            
                            if (eax_96 == 0)
                            label_450890:
                                result_1 = 0x8007000e
                            else
                                int32_t i_3 = 0
                                void* ecx_96 = *(esi_21 + 0x10) + esi_21
                                
                                if (*(esi_21 + 0xc) u> 0)
                                    do
                                        *(eax_96 + (i_3 << 2)) = ecx_96
                                        i_3 += 1
                                        ecx_96 += 0x14
                                    while (i_3 u< *(esi_21 + 0xc))
                                
                                sub_761c30(eax_96, *(esi_21 + 0xc), 4, sub_443227)
                                int32_t i_11 = *(esi_21 + 0xc)
                                int32_t edx_32 = 0
                                int32_t edi_79 = 0
                                int32_t var_58_2 = 0
                                
                                if (i_11 u> 0)
                                    void* eax_99 = *(esi_21 + 0x10) + esi_21 + 4
                                    int32_t i_10 = i_11
                                    int32_t i_4
                                    
                                    do
                                        uint32_t ecx_97 = zx.d(*eax_99)
                                        
                                        if (ecx_97 == 0)
                                            edi_79 += 1
                                        else if (ecx_97 == 1)
                                            var_58_2 += 1
                                        else if (ecx_97 == 2)
                                            edx_32 += 1
                                        
                                        eax_99 += 0x14
                                        i_4 = i_10
                                        i_10 -= 1
                                    while (i_4 != 1)
                                
                                int32_t i_5 = 0
                                int32_t eax_100
                                eax_100.w = *(ebx_2 + 0x36)
                                int32_t edx_33 = edx_32 + eax_100
                                int32_t ecx_102 = var_58_2 + edx_33
                                int32_t var_48_3 = edi_79 + ecx_102
                                int32_t edi_80
                                edi_80.w = *(esi_21 + 0xc)
                                edi_80.w += eax_100.w
                                *(ebx_2 + 0x36) = edi_80.w
                                edi_80.w = var_48_3.w
                                ebx_2[0x13].w = eax_100.w
                                *(ebx_2 + 0x52) = edx_33.w
                                ebx_2[0x16].w = ecx_102.w
                                *(ebx_2 + 0x5e) = edi_80.w
                                int32_t var_40_6 = eax_100
                                int32_t var_50_3 = edx_33
                                int32_t var_58_3 = ecx_102
                                
                                if (*(esi_21 + 0xc) u> 0)
                                    do
                                        int32_t* edi_81 = *(var_70 + (i_5 << 2))
                                        uint32_t eax_102 = zx.d(edi_81[1].w)
                                        uint32_t var_3c_3 = 0
                                        uint32_t eax_106
                                        
                                        if (eax_102 == 0)
                                            eax_106 = zx.d(var_58_3.w)
                                            var_58_3 += 1
                                            var_3c_3 = eax_106
                                        else if (eax_102 == 1)
                                            eax_106 = zx.d(var_50_3.w)
                                            var_50_3 += 1
                                            var_3c_3 = eax_106
                                        else if (eax_102 == 2)
                                            eax_106 = zx.d(var_40_6.w)
                                            var_40_6 += 1
                                            var_3c_3 = eax_106
                                        else if (eax_102 == 3)
                                            eax_106 = zx.d(var_48_3.w)
                                            var_48_3 += 1
                                            var_3c_3 = eax_106
                                        
                                        eax_106.w = *(edi_81 + 6)
                                        int32_t* esi_91 = var_3c_3 * 0x64 + ebx_2[1]
                                        esi_91[0x15].w = eax_106.w
                                        eax_106.w = edi_81[2].w
                                        esi_91[0xc] |= 9
                                        *(esi_91 + 0x56) = eax_106.w
                                        int32_t var_9c_14 = 0xa
                                        void* eax_109 = sub_4439e9(arg1, *edi_81 + esi_21)
                                        var_c.d = eax_109
                                        int32_t* eax_113
                                        int32_t* edx_34
                                        
                                        if (eax_109 == 0)
                                            *esi_91 = 0
                                            eax_113 = var_c.d
                                            edx_34 = esi_91
                                        else
                                            if (esi_91[0x14].w u< 1)
                                                int32_t* eax_110 = sub_745f3f(0x24)
                                                void* eax_112
                                                
                                                if (eax_110 == 0)
                                                    eax_112 = nullptr
                                                else
                                                    *eax_110 = 1
                                                    var_14 = &eax_110[1]
                                                    sub_61cdd0(&eax_110[1], 0x20, 1, sub_44325c)
                                                    eax_112 = var_14
                                                
                                                esi_91[0xd] = eax_112
                                                
                                                if (eax_112 == 0)
                                                    goto label_450890_1
                                                
                                                esi_91[0x14].w = 1
                                            
                                            sub_4438fa(arg1, arg2, var_3c_3, 0, var_c.d, edi_81)
                                            result_1 = 0
                                            edx_34 = esi_91
                                            eax_113 = var_c.d
                                            *(edx_34 + 0x4e) = 1
                                            __builtin_memcpy(&edx_34[2], eax_113, 0x28)
                                            edx_34[0xc] &= 0xfffffffd
                                            edx_34[0xa] = 0
                                            edx_34[0xb] = 0
                                            *edx_34 = 1
                                        
                                        int32_t* edi_83 = edi_81
                                        edx_34[0xf] = esi_21
                                        uint32_t esi_94 = zx.d(edi_83[1].w)
                                        
                                        if (esi_94 == 0)
                                            *(edx_34 + 0x52) = 0x9d
                                            edx_34[0x16] = 0xd010000
                                            void* eax_145 = eax_58 + (zx.d(*(edi_83 + 6)) << 2)
                                            edx_34[0x12] = eax_145
                                            void* esi_123 = edi_83[4]
                                            uint32_t ecx_133 = zx.d(edi_83[2].w)
                                            var_14 = eax_145
                                            
                                            if (esi_123 == 0)
                                                uint32_t ecx_138 = ecx_133 << 2
                                                __builtin_memset(
                                                    __builtin_memset(*ebx_2 + var_14, 0, 
                                                        ecx_138 u>> 2 << 2), 
                                                    0, ecx_138 & 3)
                                            else
                                                uint32_t ecx_134 = ecx_133 << 2
                                                int32_t esi_125
                                                int32_t edi_97
                                                edi_97, esi_125 = __builtin_memcpy(
                                                    *ebx_2 + eax_145, esi_123 + esi_21, 
                                                    ecx_134 u>> 2 << 2)
                                                __builtin_memcpy(edi_97, esi_125, ecx_134 & 3)
                                            
                                            if (*(ebx_2 + 0x31) != 0)
                                                int32_t* eax_147 = var_84
                                                
                                                if (eax_147 != 0)
                                                    eax_147[0xc] &= 0xfffffffe
                                                
                                                var_84 = edx_34
                                        else if (esi_94 == 1)
                                            *(edx_34 + 0x52) = 0x9e
                                            edx_34[0x16] = 0xd020000
                                            int32_t j_1 = 0
                                            edx_34[0x12] = (zx.d(*(edi_83 + 6)) << 4) + eax_61
                                            
                                            if (edi_83[2].w u> 0)
                                                int32_t var_3c_5 = 0
                                                
                                                do
                                                    *(*ebx_2 + var_3c_5 + edx_34[0x12]) = 0
                                                    *(*ebx_2 + var_3c_5 + edx_34[0x12] + 4) = 0
                                                    *(*ebx_2 + var_3c_5 + edx_34[0x12] + 8) = 1
                                                    int32_t eax_139 = *ebx_2 + var_3c_5
                                                    j_1 += 1
                                                    var_3c_5 += 0x10
                                                    *(eax_139 + edx_34[0x12] + 0xc) = 0
                                                while (j_1 u< zx.d(edi_83[2].w))
                                            
                                            int32_t eax_141 = edi_83[4]
                                            
                                            if (eax_141 != 0)
                                                uint32_t ecx_129 = zx.d(edi_83[2].w) << 4
                                                int32_t esi_121
                                                int32_t edi_93
                                                edi_93, esi_121 = __builtin_memcpy(
                                                    *ebx_2 + edx_34[0x12], esi_21 + eax_141, 
                                                    ecx_129 u>> 2 << 2)
                                                __builtin_memcpy(edi_93, esi_121, ecx_129 & 3)
                                            
                                            if (*(ebx_2 + 0x32) != 0)
                                                int32_t* var_80
                                                
                                                if (var_80 != 0)
                                                    var_80[0xc] &= 0xfffffffe
                                                
                                                var_80 = edx_34
                                        else if (esi_94 == 2)
                                            if (eax_113 != 0)
                                                int32_t* ecx_112 = eax_113[1]
                                                var_14 = *ecx_112
                                                uint32_t var_3c_4
                                                
                                                if (ecx_112[4] u>= 1)
                                                    var_3c_4 = *(eax_113[1] + 0x10)
                                                else
                                                    var_3c_4 = 1
                                                
                                                void* ecx_115 = eax_113[1]
                                                uint32_t esi_105 = *(ecx_115 + 0x18)
                                                int32_t ecx_116 = *(ecx_115 + 4)
                                                
                                                if (ecx_116 s>= 0)
                                                    uint32_t eax_121
                                                    
                                                    if (ecx_116 s<= 1)
                                                        if (var_14 == 3)
                                                            edx_34[0xc] |= 0x10
                                                            edx_34[0x17] = *eax_113
                                                            eax_121 = zx.d(edi_83[2].w)
                                                            
                                                            if (var_3c_4 u< eax_121)
                                                                eax_121 = var_3c_4
                                                            
                                                            edx_34[0x18] = eax_121 << 4
                                                    else if (ecx_116 == 2)
                                                        if (var_14 == 3
                                                                && *(edi_83[3] + esi_21) == 3)
                                                            if (var_3c_4 == 1)
                                                                edx_34[0xc] |= 0x10
                                                                edx_34[0x17] = *eax_113
                                                                eax_121 = zx.d(edi_83[2].w)
                                                                
                                                                if (esi_105 u< eax_121)
                                                                    eax_121 = esi_105
                                                                
                                                                edx_34[0x18] = eax_121 << 4
                                                            else if (esi_105 == 4)
                                                                edx_34[0xc] |= 0x10
                                                                edx_34[0x17] = *eax_113
                                                                uint32_t ecx_119 = zx.d(edi_83[2].w)
                                                                eax_121 = var_3c_4 << 2
                                                                
                                                                if (eax_121 u>= ecx_119)
                                                                    eax_121 = ecx_119
                                                                
                                                                edx_34[0x18] = eax_121 << 4
                                                    else if (ecx_116 == 5)
                                                        void* esi_108 = eax_113[1]
                                                        var_14 = esi_108
                                                        int32_t eax_118
                                                        eax_118, edx_34 = sub_442c74(&var_14)
                                                        
                                                        if (eax_118 != 0)
                                                            var_14 = esi_108
                                                            uint32_t eax_119 =
                                                                sub_442bf5(&var_14, 4)
                                                            esi_91[0xc] |= 0x10
                                                            esi_91[0x17] = *var_c.d
                                                            uint32_t edx_38 = zx.d(edi_81[2].w)
                                                            
                                                            if (eax_119 u< edx_38)
                                                                edx_38 = eax_119
                                                            
                                                            edi_83 = edi_81
                                                            esi_91[0x18] = edx_38 << 4
                                                            edx_34 = esi_91
                                            
                                            *(edx_34 + 0x52) = 0x9c
                                            edx_34[0x16] = 0xd000000
                                            uint32_t esi_110 = zx.d(*(edi_83 + 6)) << 4
                                            edx_34[0x12] = esi_110
                                            int32_t eax_126 = edi_83[4]
                                            int32_t edi_86 = *ebx_2
                                            uint32_t ecx_121 = zx.d(edi_83[2].w) << 4
                                            var_14 = esi_110
                                            
                                            if (eax_126 == 0)
                                                __builtin_memset(
                                                    __builtin_memset(edi_86 + esi_110, 0, 
                                                        ecx_121 u>> 2 << 2), 
                                                    0, ecx_121 & 3)
                                            else
                                                int32_t esi_113
                                                int32_t edi_88
                                                edi_88, esi_113 = __builtin_memcpy(edi_86 + var_14, 
                                                    esi_21 + eax_126, ecx_121 u>> 2 << 2)
                                                __builtin_memcpy(edi_88, esi_113, ecx_121 & 3)
                                            
                                            if (ebx_2[0xc].b != 0)
                                                if (var_88_1 != 0)
                                                    var_88_1[0xc] &= 0xfffffffe
                                                
                                                var_88_1 = edx_34
                                        else if (esi_94 == 3)
                                            *(edx_34 + 0x52) = 0xb2
                                            edx_34[0x16] = 0xf000000
                                            uint32_t esi_99 = zx.d(*(edi_83 + 6))
                                            int32_t edi_84 = var_6c
                                            edx_34[0xc] &= 0xfffffffd
                                            edx_34[0x12] = edi_84 + (esi_99 << 2)
                                            *edx_34 = 0
                                            
                                            if (eax_113 == 0)
                                                *(*ebx_2 + edx_34[0x12]) = 0
                                                *(*ebx_2 + edx_34[0x12] + 2) = 0
                                            else
                                                *(*ebx_2 + edx_34[0x12]) = eax_113[0x11].w + 1
                                                *(*ebx_2 + edx_34[0x12] + 2) = 0
                                                eax_113.w = *(eax_113 + 0x46)
                                                int32_t* ecx_109
                                                ecx_109.w = *(edx_34 + 0x56)
                                                
                                                if (ecx_109.w u< eax_113.w)
                                                    eax_113 = ecx_109
                                                
                                                *(edx_34 + 0x56) = eax_113.w
                                            
                                            edx_34.w = var_3c_3.w
                                            *(ebx_2[5] + (zx.d(ebx_2[0xd].w) << 1) + *ebx_2) =
                                                edx_34.w
                                            ebx_2[0xd].w += 1
                                        
                                        i_5 += 1
                                    while (i_5 u< *(esi_21 + 0xc))
                                    
                                    ecx_102 = var_58_3
                                    edx_33 = var_50_3
                                    eax_100 = var_40_6
                                
                                *(ebx_2 + 0x4e) = eax_100.w
                                eax_100.w = var_48_3.w
                                ebx_2[0x15].w = edx_33.w
                                *(ebx_2 + 0x5a) = ecx_102.w
                                ebx_2[0x18].w = eax_100.w
                    else
                        int16_t ecx_56 = *(ebx_2 + 0x36)
                        int32_t* eax_66 = zx.d(ecx_56) * 0x64 + ebx_2[1]
                        *(ebx_2 + 0x36) = ecx_56 + 1
                        int32_t edx_11 = eax_66[0xc] & 0xfffffff5
                        *eax_66 = 1
                        eax_66[0xc] = edx_11 | 1
                        ebx_2[2] |= 4
                        void* var_9c_9 = &eax_66[0xe]
                        int32_t var_a0_8 = var_78 + 0x68
                        int32_t result_4 = sub_458de2()
                        result_1 = result_4
                        
                        if (result_4 s>= 0)
                            int32_t* eax_69 = eax_66[0xe]
                            int32_t* eax_70 = (*(*eax_69 + 0xc))(eax_69)
                            int32_t* esi_27 = var_68
                            int32_t ecx_60 = *esi_27 + esi_27[3]
                            var_14 = &esi_27[1]
                            int32_t ecx_61 = ecx_60 << 2
                            int32_t ecx_62 = ecx_61 | ecx_61 u>> 1
                            int32_t ecx_63 = ecx_62 | ecx_62 u>> 2
                            int32_t ecx_64 = ecx_63 | ecx_63 u>> 4
                            int32_t ecx_65 = ecx_64 | ecx_64 u>> 8
                            int32_t edx_17 = (esi_27[1] + esi_27[4]) << 2
                            int32_t ecx_66 = ecx_65 | ecx_65 u>> 0x10
                            int32_t edx_18 = edx_17 | edx_17 u>> 1
                            int32_t edx_19 = edx_18 | edx_18 u>> 2
                            int32_t edx_20 = edx_19 | edx_19 u>> 4
                            int32_t edx_21 = edx_20 | edx_20 u>> 8
                            int32_t esi_31 = (esi_27[5] + esi_27[2]) << 2
                            int32_t edx_22 = edx_21 | edx_21 u>> 0x10
                            int32_t esi_32 = esi_31 | esi_31 u>> 1
                            eax_70[6] = 0
                            int32_t esi_33 = esi_32 | esi_32 u>> 2
                            int32_t esi_34 = esi_33 | esi_33 u>> 4
                            int32_t esi_35 = esi_34 | esi_34 u>> 8
                            int32_t esi_36 = esi_35 | esi_35 u>> 0x10
                            eax_70[2] = esi_36
                            *eax_70 = ecx_66
                            eax_70[1] = edx_22
                            int32_t esi_40 = (esi_27[3] + *esi_27) << 2
                            eax_70[3] = esi_40
                            
                            if (esi_40 != 0)
                                eax_70[3] = esi_40 - 1
                            
                            int32_t esi_45 = (*var_14 + esi_27[4]) << 2
                            eax_70[4] = esi_45
                            
                            if (esi_45 != 0)
                                eax_70[4] = esi_45 - 1
                            
                            int32_t esi_50 = (esi_27[2] + esi_27[5]) << 2
                            eax_70[5] = esi_50
                            
                            if (esi_50 != 0)
                                eax_70[5] = esi_50 - 1
                            
                            int32_t edi_52 = eax_70[3]
                            int32_t esi_54 = edi_52 u>> 1 | edi_52
                            int32_t edi_55 = esi_54 u>> 2 | esi_54
                            int32_t esi_57 = edi_55 u>> 4 | edi_55
                            int32_t edi_58 = esi_57 u>> 8 | esi_57
                            int32_t edi_59 = eax_70[4]
                            eax_70[3] = edi_58 u>> 0x10 | edi_58
                            int32_t esi_63 = edi_59 u>> 1 | edi_59
                            int32_t edi_62 = esi_63 u>> 2 | esi_63
                            int32_t esi_66 = edi_62 u>> 4 | edi_62
                            int32_t edi_65 = esi_66 u>> 8 | esi_66
                            int32_t edi_66 = eax_70[5]
                            eax_70[4] = edi_65 u>> 0x10 | edi_65
                            int32_t esi_72 = edi_66 u>> 1 | edi_66
                            int32_t edi_69 = esi_72 u>> 2 | esi_72
                            int32_t esi_75 = edi_69 u>> 4 | edi_69
                            int32_t edi_72 = esi_75 u>> 8 | esi_75
                            eax_70[5] = edi_72 u>> 0x10 | edi_72
                            int32_t esi_79 = ebx_2[3]
                            int32_t esi_81 = (esi_79 & 7) + (esi_79 u>> 3 << 3)
                            ebx_2[3] = esi_81
                            eax_70[7] = esi_81
                            int32_t ecx_67 = ebx_2[3] + (ecx_66 << 3)
                            int32_t ecx_69 = (ecx_67 & 7) + (ecx_67 u>> 3 << 3)
                            ebx_2[3] = ecx_69
                            eax_70[8] = ecx_69
                            int32_t edx_23 = ebx_2[3] + (edx_22 << 3)
                            int32_t ecx_73 = (edx_23 & 7) + (edx_23 u>> 3 << 3)
                            ebx_2[3] = ecx_73
                            eax_70[9] = ecx_73
                            ebx_2[3] += esi_36 << 3
                            int32_t i_6 = 0
                            eax_70[0xa] = 0
                            eax_70[0xb] = eax_58
                            eax_70[0xc] = eax_61
                            *(eax_66 + 0x56) = 0
                            eax_66[0x15].w = 0
                            void* eax_71 = &eax_70[0x10]
                            
                            do
                                *(eax_71 + 0xc) = esi_27[3 + i_6]
                                *eax_71 = esi_27[i_6]
                                i_6 += 1
                                eax_71 += 4
                            while (i_6 u< 3)
                            
                            void* eax_74 = var_68 - var_5c + 0x80
                            eax_70[0x17] = eax_74
                            void* eax_75 = eax_74 + (*(eax_74 + var_5c - 0x68) << 3) + 4
                            eax_70[0x18] = eax_75
                            eax_70[0x19] = eax_75 + (*(eax_75 + var_5c - 0x68) << 3) + 4
                            int32_t ecx_84 = var_78
                            int32_t esi_86
                            int32_t edi_76
                            edi_76, esi_86 =
                                __builtin_memcpy(&eax_70[0x1a], var_5c, ecx_84 u>> 2 << 2)
                            __builtin_memcpy(edi_76, esi_86, ecx_84 & 3)
                            int32_t result_5 =
                                sub_4288c5(&eax_70[0x1a], &eax_66[0x10], &eax_66[0x11])
                            result_1 = result_5
                            
                            if (result_5 s>= 0)
                                int32_t result_6 =
                                    sub_448bce(arg1, arg2, zx.d(*(ebx_2 + 0x36)) - 1, eax_70)
                                result_1 = result_6
                                
                                if (result_6 s>= 0)
                                    *(eax_66 + 0x52) = 0xb5
                                    eax_66[0x16] = 0x11000000
                                    ebx_2[2] |= 1
                                    void* var_50_2 = &ebx_2[9]
                                    void** var_40_5 = &eax_70[0x17]
                                    
                                    for (int32_t i_7 = 0; i_7 u< 6; i_7 += 2)
                                        int32_t edi_77
                                        edi_77.w = *(&var_10 + i_7)
                                        
                                        if (edi_77.w != 0)
                                            void* eax_86 = *var_40_5 + eax_70
                                            int32_t edx_31 = 0
                                            int32_t j_3 = *eax_86
                                            
                                            if (j_3 u> 0)
                                                void* eax_88 = eax_86 + 8
                                                int32_t j_2
                                                
                                                do
                                                    edx_31 += *eax_88
                                                    eax_88 += 8
                                                    j_2 = j_3
                                                    j_3 -= 1
                                                while (j_2 != 1)
                                            
                                            int16_t eax_90 = *var_50_2
                                            int16_t ecx_91 = eax_90
                                            
                                            if (eax_90 u<= edi_77.w)
                                                ecx_91 = edi_77.w
                                            
                                            eax_90 = *(&var_38 + i_7)
                                            
                                            if (zx.d(eax_90) + edx_31 != zx.d(ecx_91))
                                                ebx_2[2] &= 0xfffffffe
                                                break
                                            
                                            if (edx_31 u> 0 && eax_90 == 0)
                                                ebx_2[2] |= 0x10
                                        
                                        var_40_5 = &var_40_5[1]
                                        var_50_2 += 2
                                    
                                    if ((ebx_2[2].b & 1) != 0)
                                        int16_t eax_91 = ebx_2[9].w
                                        
                                        if (eax_91 u<= var_10.w)
                                            eax_91 = var_10.w
                                        
                                        ebx_2[0x14].w = eax_91
                                        int16_t eax_92 = ebx_2[0xa].w
                                        
                                        if (eax_92 u<= var_c)
                                            eax_92 = (var_c.d).w
                                        
                                        *(ebx_2 + 0x56) = eax_92
                                        int16_t eax_93 = *(ebx_2 + 0x26)
                                        
                                        if (eax_93 u<= var_10:2.w)
                                            eax_93 = var_10.w
                                        
                                        ebx_2[0x17].w = eax_93
                                    
                                    goto label_450314
                else
                    int32_t* eax_49 = sub_745f3f(esi_22 * 0x64 + 4)
                    void* var_48_1
                    
                    if (eax_49 == 0)
                        var_48_1 = nullptr
                    else
                        *eax_49 = esi_22
                        sub_61cdd0(&eax_49[1], 0x64, esi_22, sub_44bb09)
                        var_48_1 = &eax_49[1]
                    
                    if (var_48_1 != 0)
                        int16_t ecx_17 = *(ebx_2[1] + 0x52)
                        void* eax_51 = var_48_1
                        *(eax_51 + 0x52) = ecx_17
                        int32_t ecx_20 = *(zx.d(ecx_17) * 0x1c + 0xac1bc4)
                        *(eax_51 + 0x54) = 0xffff
                        *(eax_51 + 0x58) = ecx_20
                        *(eax_51 + 0x56) = 1
                        __builtin_memcpy(eax_51 + 8, ebx_2[1] + 8, 0x28)
                        *eax_51 = *ebx_2[1]
                        *(eax_51 + 0x30) ^=
                            (*(ebx_2[1] + 0x30) << 0x1f s>> 0x1f ^ *(eax_51 + 0x30)) & 1
                        int32_t ecx_29 = *(eax_51 + 0x30)
                        *(eax_51 + 0x30) =
                            ((*(ebx_2[1] + 0x30) << 0x1e s>> 0x1e ^ ecx_29) & 2) ^ ecx_29
                        *(eax_51 + 0x3c) = *(ebx_2[1] + 0x3c)
                        *(eax_51 + 0x34) = *(ebx_2[1] + 0x34)
                        void* ecx_34
                        ecx_34.w = *(ebx_2[1] + 0x4e)
                        *(eax_51 + 0x4e) = ecx_34.w
                        void* ecx_35
                        ecx_35.w = *(ebx_2[1] + 0x50)
                        *(eax_51 + 0x50) = ecx_35.w
                        *(eax_51 + 0x38) = *(ebx_2[1] + 0x38)
                        *(ebx_2[1] + 0x34) = 0
                        *(ebx_2[1] + 0x4e) = 0
                        *(ebx_2[1] + 0x50) = 0
                        *(ebx_2[1] + 0x38) = 0
                        int32_t* ecx_42 = ebx_2[1]
                        
                        if (ecx_42 != 0)
                            sub_44cbd3(ecx_42, 3)
                            ebx_2[1] = 0
                            eax_51 = var_48_1
                        
                        ebx_2[1] = eax_51
                        void* eax_53
                        eax_53.w = *(*var_3c_2 + 0xc)
                        eax_53.w += 1
                        ebx_2[0xe].w = eax_53.w
                        goto label_44feec
                    
                label_450890_1:
                    result_1 = 0x8007000e
            
            j__free(var_70)
            result = result_1
        else
            int32_t* eax_33 = *(esi_17 + 8)
            int32_t var_20
            int32_t* var_9c_4 = &var_20
            edi_9 = esi_17 + 0xc
            var_3c_2 = edi_9
            void var_30
            int32_t result_2 = sub_442fd3((*(*eax_33 + 0xc))(eax_33), edi_9, &var_38, &var_30)
            
            if (result_2 s< 0)
                j__free(var_70)
                result = result_2
            else
                ebx_2[9] = var_20
                int32_t var_1c
                ebx_2[0xa] = var_1c
                int32_t* esi_18 = *(esi_17 + 8)
                int32_t* ecx_12
                result, ecx_12 =
                    sub_46ad8d((*(*esi_18 + 0xc))(esi_18), 0x53455250, &var_5c, &var_78)
                result_1 = result
                
                if (result s>= 0)
                    if (result != 0)
                        var_10 = 0
                        var_c.d = nullptr
                        edi_9 = var_3c_2
                        goto label_44fcfa
                    
                    var_44_3 = 2
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
                        label_44fcfa:
                            edx = var_40_2
                            void* eax_39 = &ebx_2[0xc]
                            
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
                            
                            goto label_44fd60
sub_745f2b(__security_cookie_1)
return result

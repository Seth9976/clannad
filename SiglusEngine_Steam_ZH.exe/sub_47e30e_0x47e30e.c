// 函数: sub_47e30e
// 地址: 0x47e30e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
char* eax_1 = *(arg2 + 8)
void* esi = arg1
int32_t ecx = 0
*(esi + 0x54) = 0
bool cond:0 = *eax_1 == 0
int32_t edi
int32_t var_6c = edi
void* var_28 = esi
int32_t result_1 = 0x10d
int32_t var_5c = 0
void* var_20 = nullptr
int32_t var_24 = 0
int32_t var_58 = 1
int32_t var_50_1
__builtin_memset(&var_50_1, 0, 0x20)
char* var_54 = eax_1
char* var_2c = eax_1
int32_t result

if (not(cond:0))
    while (true)
        char* ecx_1 = var_2c
        
        while (true)
            eax_1.b = *ecx_1
            
            if (eax_1.b == 0)
                break
            
            if (eax_1.b == 0x5f)
                break
            
            ecx_1 = &ecx_1[1]
            var_2c = ecx_1
        
        void* eax_3 = ecx_1 - var_54
        
        if (eax_3 u> 0xf)
            goto label_47ebd4
        
        char var_18[0x10]
        int32_t esi_2
        int32_t edi_1
        edi_1, esi_2 = __builtin_memcpy(&var_18, var_54, eax_3 u>> 2 << 2)
        __builtin_memcpy(edi_1, esi_2, eax_3 & 3)
        *(&var_18 + eax_3) = 0
        
        if (*var_2c != 0)
            var_2c = &var_2c[1]
        
        var_54 = var_2c
        int32_t var_3c_1
        int32_t var_34_1
        int32_t var_4c_1
        int32_t var_48_1
        int32_t var_44_1
        int32_t var_40_1
        int32_t var_38_1
        
        if (var_58 == 0)
            bool cond:3_1
            
            if (var_50_1 != 0)
                void* const edi_3 = &data_ac6e28
                char (* esi_5)[0x10] = &var_18
                int32_t i = 4
                cond:3_1 = false
                
                while (i != 0)
                    char temp2_1 = *esi_5
                    char temp3_1 = *edi_3
                    cond:3_1 = temp2_1 != temp3_1
                    esi_5 = &(*esi_5)[1]
                    edi_3 += 1
                    i -= 1
                    
                    if (temp2_1 != temp3_1)
                        break
            
            if (var_50_1 == 0 || cond:3_1)
                bool cond:5_1
                
                if (var_48_1 != 0)
                    char const* const edi_4 = "centroid"
                    char (* esi_6)[0x10] = &var_18
                    int32_t i_1 = 9
                    cond:5_1 = false
                    
                    while (i_1 != 0)
                        char temp6_1 = *esi_6
                        char const temp7_1 = *edi_4
                        cond:5_1 = temp6_1 != temp7_1
                        esi_6 = &(*esi_6)[1]
                        edi_4 = &edi_4[1]
                        i_1 -= 1
                        
                        if (temp6_1 != temp7_1)
                            break
                
                if (var_48_1 != 0 && not(cond:5_1))
                    var_20:2.b |= 0x40
                    var_48_1 = 0
                else if (var_40_1 != 0)
                    void* const edi_5 = &data_ac6e18
                    char (* esi_7)[0x10] = &var_18
                    int32_t i_2 = 3
                    bool cond:7_1 = false
                    
                    while (i_2 != 0)
                        char temp9_1 = *esi_7
                        char temp10_1 = *edi_5
                        cond:7_1 = temp9_1 != temp10_1
                        esi_7 = &(*esi_7)[1]
                        edi_5 += 1
                        i_2 -= 1
                        
                        if (temp9_1 != temp10_1)
                            break
                    
                    if (cond:7_1)
                        void* const edi_6 = &data_ac6e14
                        char (* esi_8)[0x10] = &var_18
                        int32_t i_3 = 3
                        bool cond:11_1 = false
                        
                        while (i_3 != 0)
                            char temp15_1 = *esi_8
                            char temp16_1 = *edi_6
                            cond:11_1 = temp15_1 != temp16_1
                            esi_8 = &(*esi_8)[1]
                            edi_6 += 1
                            i_3 -= 1
                            
                            if (temp15_1 != temp16_1)
                                break
                        
                        if (cond:11_1)
                            void* const edi_7 = &data_ac6e10
                            char (* esi_9)[0x10] = &var_18
                            int32_t i_4 = 3
                            bool cond:18_1 = false
                            
                            while (i_4 != 0)
                                char temp24_1 = *esi_9
                                char temp25_1 = *edi_7
                                cond:18_1 = temp24_1 != temp25_1
                                esi_9 = &(*esi_9)[1]
                                edi_7 += 1
                                i_4 -= 1
                                
                                if (temp24_1 != temp25_1)
                                    break
                            
                            if (cond:18_1)
                                void* const edi_8 = &data_ac6e0c
                                char (* esi_10)[0x10] = &var_18
                                int32_t i_5 = 3
                                bool cond:24_1 = false
                                
                                while (i_5 != 0)
                                    char temp37_1 = *esi_10
                                    char temp38_1 = *edi_8
                                    cond:24_1 = temp37_1 != temp38_1
                                    esi_10 = &(*esi_10)[1]
                                    edi_8 += 1
                                    i_5 -= 1
                                    
                                    if (temp37_1 != temp38_1)
                                        break
                                
                                if (cond:24_1)
                                    void* const edi_9 = &data_ac6e08
                                    char (* esi_11)[0x10] = &var_18
                                    int32_t i_6 = 3
                                    bool cond:29_1 = false
                                    
                                    while (i_6 != 0)
                                        char temp45_1 = *esi_11
                                        char temp46_1 = *edi_9
                                        cond:29_1 = temp45_1 != temp46_1
                                        esi_11 = &(*esi_11)[1]
                                        edi_9 += 1
                                        i_6 -= 1
                                        
                                        if (temp45_1 != temp46_1)
                                            break
                                    
                                    if (cond:29_1)
                                        void* const edi_10 = &data_ac6e04
                                        char (* esi_12)[0x10] = &var_18
                                        int32_t i_7 = 3
                                        bool cond:35_1 = false
                                        
                                        while (i_7 != 0)
                                            char temp53_1 = *esi_12
                                            char temp54_1 = *edi_10
                                            cond:35_1 = temp53_1 != temp54_1
                                            esi_12 = &(*esi_12)[1]
                                            edi_10 += 1
                                            i_7 -= 1
                                            
                                            if (temp53_1 != temp54_1)
                                                break
                                        
                                        if (cond:35_1)
                                            goto label_47ebd4
                                        
                                        var_20 = 0xd000000
                                    else
                                        var_20 = 0xe000000
                                else
                                    var_20 = 0xf000000
                            else
                                var_20 = &data_1000000
                        else
                            var_20 = &data_2000000
                    else
                        var_20 = &data_3000000
                    
                    var_40_1 = 0
                else
                    char* eax_5
                    
                    if (var_38_1 == 0)
                    label_47e721:
                        bool cond:14_1
                        
                        if (var_4c_1 != 0)
                            void* const edi_14 = &data_ac6dec
                            char (* esi_16)[0x10] = &var_18
                            int32_t i_8 = 3
                            cond:14_1 = false
                            
                            while (i_8 != 0)
                                char temp13_1 = *esi_16
                                char temp14_1 = *edi_14
                                cond:14_1 = temp13_1 != temp14_1
                                esi_16 = &(*esi_16)[1]
                                edi_14 += 1
                                i_8 -= 1
                                
                                if (temp13_1 != temp14_1)
                                    break
                        
                        if (var_4c_1 == 0 || cond:14_1)
                            if (var_44_1 == 0)
                                goto label_47e912
                            
                            char* esi_17 = &var_18
                            char* ebx_3
                            
                            if (var_18[0] == 0)
                                ebx_3 = nullptr
                            else
                                do
                                    if (_isalpha(sx.d(*esi_17)) == 0)
                                        break
                                    
                                    esi_17 = &esi_17[1]
                                while (*esi_17 != 0)
                                
                                if (*esi_17 == 0)
                                    ebx_3 = nullptr
                                else
                                    char* var_70_2 = esi_17
                                    ebx_3 = sub_75efed()
                            
                            if (ebx_3 u> 0xf)
                                goto label_47e912
                            
                            eax_5.b = *esi_17
                            char var_2d_1 = eax_5.b
                            char* var_60_1 = esi_17
                            
                            if (eax_5.b != 0)
                                *esi_17 = 0
                                esi_17 = &esi_17[1]
                            
                            eax_5.b = *esi_17
                            int32_t i_9
                            
                            if (eax_5.b == 0)
                            label_47e7b6:
                                char const* const edi_15 = "position"
                                char (* esi_18)[0x10] = &var_18
                                i_9 = 9
                                int32_t eax_26 = 0
                                bool cond:41_1 = false
                                
                                while (i_9 != 0)
                                    char temp32_1 = *esi_18
                                    char const temp33_1 = *edi_15
                                    cond:41_1 = temp32_1 != temp33_1
                                    esi_18 = &(*esi_18)[1]
                                    edi_15 = &edi_15[1]
                                    i_9 -= 1
                                    
                                    if (temp32_1 != temp33_1)
                                        break
                                
                                if (cond:41_1)
                                    char const* const edi_16 = "blendweight"
                                    char (* esi_19)[0x10] = &var_18
                                    int32_t i_10 = 0xc
                                    bool cond:49_1 = false
                                    
                                    while (i_10 != 0)
                                        char temp41_1 = *esi_19
                                        char const temp42_1 = *edi_16
                                        cond:49_1 = temp41_1 != temp42_1
                                        esi_19 = &(*esi_19)[1]
                                        edi_16 = &edi_16[1]
                                        i_10 -= 1
                                        
                                        if (temp41_1 != temp42_1)
                                            break
                                    
                                    if (cond:49_1)
                                        char const* const edi_17 = "blendindices"
                                        char (* esi_20)[0x10] = &var_18
                                        int32_t i_11 = 0xd
                                        bool cond:55_1 = false
                                        
                                        while (i_11 != 0)
                                            char temp49_1 = *esi_20
                                            char const temp50_1 = *edi_17
                                            cond:55_1 = temp49_1 != temp50_1
                                            esi_20 = &(*esi_20)[1]
                                            edi_17 = &edi_17[1]
                                            i_11 -= 1
                                            
                                            if (temp49_1 != temp50_1)
                                                break
                                        
                                        if (cond:55_1)
                                            char const* const edi_18 = "normal"
                                            char (* esi_21)[0x10] = &var_18
                                            int32_t i_12 = 7
                                            bool cond:61_1 = false
                                            
                                            while (i_12 != 0)
                                                char temp57_1 = *esi_21
                                                char const temp58_1 = *edi_18
                                                cond:61_1 = temp57_1 != temp58_1
                                                esi_21 = &(*esi_21)[1]
                                                edi_18 = &edi_18[1]
                                                i_12 -= 1
                                                
                                                if (temp57_1 != temp58_1)
                                                    break
                                            
                                            if (cond:61_1)
                                                eax_26 = 6
                                                char const* const edi_19 = "psize"
                                                char (* esi_22)[0x10] = &var_18
                                                int32_t i_13 = 6
                                                bool cond:65_1 = false
                                                
                                                while (i_13 != 0)
                                                    char temp63_1 = *esi_22
                                                    char const temp64_1 = *edi_19
                                                    cond:65_1 = temp63_1 != temp64_1
                                                    esi_22 = &(*esi_22)[1]
                                                    edi_19 = &edi_19[1]
                                                    i_13 -= 1
                                                    
                                                    if (temp63_1 != temp64_1)
                                                        break
                                                
                                                if (cond:65_1)
                                                    char const* const edi_20 = "texcoord"
                                                    char (* esi_23)[0x10] = &var_18
                                                    int32_t i_14 = 9
                                                    bool cond:69_1 = false
                                                    
                                                    while (i_14 != 0)
                                                        char temp67_1 = *esi_23
                                                        char const temp68_1 = *edi_20
                                                        cond:69_1 = temp67_1 != temp68_1
                                                        esi_23 = &(*esi_23)[1]
                                                        edi_20 = &edi_20[1]
                                                        i_14 -= 1
                                                        
                                                        if (temp67_1 != temp68_1)
                                                            break
                                                    
                                                    if (cond:69_1)
                                                        char const* const edi_21 = "tangent"
                                                        char (* esi_24)[0x10] = &var_18
                                                        int32_t i_15 = 8
                                                        bool cond:73_1 = true
                                                        
                                                        while (i_15 != 0)
                                                            char temp71_1 = *esi_24
                                                            char const temp72_1 = *edi_21
                                                            cond:73_1 = temp71_1 == temp72_1
                                                            esi_24 = &(*esi_24)[1]
                                                            edi_21 = &edi_21[1]
                                                            i_15 -= 1
                                                            
                                                            if (temp71_1 != temp72_1)
                                                                break
                                                        
                                                        if (not(cond:73_1))
                                                            char const* const edi_22 = "binormal"
                                                            char (* esi_25)[0x10] = &var_18
                                                            int32_t i_16 = 9
                                                            bool cond:77_1 = false
                                                            
                                                            while (i_16 != 0)
                                                                char temp75_1 = *esi_25
                                                                char const temp76_1 = *edi_22
                                                                cond:77_1 = temp75_1 != temp76_1
                                                                esi_25 = &(*esi_25)[1]
                                                                edi_22 = &edi_22[1]
                                                                i_16 -= 1
                                                                
                                                                if (temp75_1 != temp76_1)
                                                                    break
                                                            
                                                            if (cond:77_1)
                                                                char const* const edi_23 = "tessfactor"
                                                                char (* esi_26)[0x10] = &var_18
                                                                int32_t i_17 = 0xb
                                                                bool cond:81_1 = false
                                                                
                                                                while (i_17 != 0)
                                                                    char temp79_1 = *esi_26
                                                                    char const temp80_1 = *edi_23
                                                                    cond:81_1 = temp79_1 != temp80_1
                                                                    esi_26 = &(*esi_26)[1]
                                                                    edi_23 = &edi_23[1]
                                                                    i_17 -= 1
                                                                    
                                                                    if (temp79_1 != temp80_1)
                                                                        break
                                                                
                                                                if (cond:81_1)
                                                                    eax_26 = 0xa
                                                                    char const* const edi_24 = "positiont"
                                                                    char (* esi_27)[0x10] = &var_18
                                                                    int32_t i_18 = 0xa
                                                                    bool cond:85_1 = false
                                                                    
                                                                    while (i_18 != 0)
                                                                        char temp83_1 = *esi_27
                                                                        char const temp84_1 = *edi_24
                                                                        cond:85_1 = temp83_1 != temp84_1
                                                                        esi_27 = &(*esi_27)[1]
                                                                        edi_24 = &edi_24[1]
                                                                        i_18 -= 1
                                                                        
                                                                        if (temp83_1 != temp84_1)
                                                                            break
                                                                    
                                                                    if (cond:85_1)
                                                                        char const* const edi_25 = "color"
                                                                        char (* esi_28)[0x10] = &var_18
                                                                        int32_t i_19 = 6
                                                                        bool cond:89_1 = true
                                                                        
                                                                        while (i_19 != 0)
                                                                            char temp87_1 = *esi_28
                                                                            char const temp88_1 = *edi_25
                                                                            cond:89_1 = temp87_1 == temp88_1
                                                                            esi_28 = &(*esi_28)[1]
                                                                            edi_25 = &edi_25[1]
                                                                            i_19 -= 1
                                                                            
                                                                            if (temp87_1 != temp88_1)
                                                                                break
                                                                        
                                                                        if (not(cond:89_1))
                                                                            void* const edi_26 = &data_ac6da8
                                                                            char (* esi_29)[0x10] = &var_18
                                                                            int32_t i_20 = 4
                                                                            bool cond:93_1 = false
                                                                            
                                                                            while (i_20 != 0)
                                                                                char temp91_1 = *esi_29
                                                                                char temp92_1 = *edi_26
                                                                                cond:93_1 = temp91_1 != temp92_1
                                                                                esi_29 = &(*esi_29)[1]
                                                                                edi_26 += 1
                                                                                i_20 -= 1
                                                                                
                                                                                if (temp91_1 != temp92_1)
                                                                                    break
                                                                            
                                                                            if (cond:93_1)
                                                                                char const* const edi_27 = "depth"
                                                                                char (* esi_30)[0x10] = &var_18
                                                                                int32_t i_21 = 6
                                                                                bool cond:97_1 = false
                                                                                
                                                                                while (i_21 != 0)
                                                                                    char temp95_1 = *esi_30
                                                                                    char const temp96_1 = *edi_27
                                                                                    cond:97_1 = temp95_1 != temp96_1
                                                                                    esi_30 = &(*esi_30)[1]
                                                                                    edi_27 = &edi_27[1]
                                                                                    i_21 -= 1
                                                                                    
                                                                                    if (temp95_1 != temp96_1)
                                                                                        break
                                                                                
                                                                                if (cond:97_1)
                                                                                    char const* const edi_28 = "sample"
                                                                                    char (* esi_31)[0x10] = &var_18
                                                                                    i_9 = 7
                                                                                    bool cond:101_1 = false
                                                                                    
                                                                                    while (i_9 != 0)
                                                                                        char temp99_1 = *esi_31
                                                                                        char const temp100_1 = *edi_28
                                                                                        cond:101_1 = temp99_1 != temp100_1
                                                                                        esi_31 = &(*esi_31)[1]
                                                                                        edi_28 = &edi_28[1]
                                                                                        i_9 -= 1
                                                                                        
                                                                                        if (temp99_1 != temp100_1)
                                                                                            break
                                                                                    
                                                                                    if (cond:101_1)
                                                                                        goto label_47e90b
                                                                                    
                                                                                    eax_26 = 0xd
                                                                                else
                                                                                    eax_26 = 0xc
                                                                            else
                                                                                eax_26 = 0xb
                                                                    else
                                                                        eax_26 = 9
                                                                else
                                                                    eax_26 = 8
                                                            else
                                                                eax_26 = 7
                                                    else
                                                        eax_26 = 5
                                                else
                                                    eax_26 = 4
                                            else
                                                eax_26 = 3
                                        else
                                            eax_26 = 2
                                    else
                                        eax_26 = 1
                                else if (ebx_3 == 0)
                                    goto label_47e90b
                                
                                var_24 |= (ebx_3 & 0xf) << 0x10 | (eax_26 & 0xf)
                                var_44_1 = 0
                                var_38_1 = 0
                            else
                                do
                                    if (_isdigit(sx.d(eax_5.b)) == 0)
                                        break
                                    
                                    esi_17 = &esi_17[1]
                                    eax_5.b = *esi_17
                                while (eax_5.b != 0)
                                
                                if (*esi_17 == 0)
                                    goto label_47e7b6
                                
                            label_47e90b:
                                i_9.b = var_2d_1
                                *var_60_1 = i_9.b
                            label_47e912:
                                
                                if (var_3c_1 == 0)
                                    if (var_34_1 == 0)
                                        goto label_47ebd4
                                    
                                    void* const edi_43 = &data_ac6d9c
                                    char (* esi_47)[0x10] = &var_18
                                    int32_t i_22 = 3
                                    bool cond:31_1 = false
                                    
                                    while (i_22 != 0)
                                        char temp21_1 = *esi_47
                                        char temp22_1 = *edi_43
                                        cond:31_1 = temp21_1 != temp22_1
                                        esi_47 = &(*esi_47)[1]
                                        edi_43 += 1
                                        i_22 -= 1
                                        
                                        if (temp21_1 != temp22_1)
                                            break
                                    
                                    if (cond:31_1)
                                        void* const edi_44 = &data_ac6d98
                                        char (* esi_48)[0x10] = &var_18
                                        int32_t i_23 = 3
                                        bool cond:37_1 = false
                                        
                                        while (i_23 != 0)
                                            char temp30_1 = *esi_48
                                            char temp31_1 = *edi_44
                                            cond:37_1 = temp30_1 != temp31_1
                                            esi_48 = &(*esi_48)[1]
                                            edi_44 += 1
                                            i_23 -= 1
                                            
                                            if (temp30_1 != temp31_1)
                                                break
                                        
                                        if (cond:37_1)
                                            void* const edi_45 = &data_ac6d94
                                            char (* esi_49)[0x10] = &var_18
                                            int32_t i_24 = 3
                                            bool cond:39_1 = false
                                            
                                            while (i_24 != 0)
                                                char temp39_1 = *esi_49
                                                char temp40_1 = *edi_45
                                                cond:39_1 = temp39_1 != temp40_1
                                                esi_49 = &(*esi_49)[1]
                                                edi_45 += 1
                                                i_24 -= 1
                                                
                                                if (temp39_1 != temp40_1)
                                                    break
                                            
                                            if (cond:39_1)
                                                void* const edi_46 = &data_ac6d90
                                                char (* esi_50)[0x10] = &var_18
                                                int32_t i_25 = 3
                                                bool cond:44_1 = false
                                                
                                                while (i_25 != 0)
                                                    char temp47_1 = *esi_50
                                                    char temp48_1 = *edi_46
                                                    cond:44_1 = temp47_1 != temp48_1
                                                    esi_50 = &(*esi_50)[1]
                                                    edi_46 += 1
                                                    i_25 -= 1
                                                    
                                                    if (temp47_1 != temp48_1)
                                                        break
                                                
                                                if (cond:44_1)
                                                    void* const edi_47 = &data_ac6d8c
                                                    char (* esi_51)[0x10] = &var_18
                                                    int32_t i_26 = 3
                                                    bool cond:51_1 = false
                                                    
                                                    while (i_26 != 0)
                                                        char temp55_1 = *esi_51
                                                        char temp56_1 = *edi_47
                                                        cond:51_1 = temp55_1 != temp56_1
                                                        esi_51 = &(*esi_51)[1]
                                                        edi_47 += 1
                                                        i_26 -= 1
                                                        
                                                        if (temp55_1 != temp56_1)
                                                            break
                                                    
                                                    if (cond:51_1)
                                                        int32_t i_27 = 3
                                                        void* const edi_48 = &data_ac6d88
                                                        char (* esi_52)[0x10] = &var_18
                                                        bool cond:57_1 = false
                                                        
                                                        while (i_27 != 0)
                                                            char temp61_1 = *esi_52
                                                            char temp62_1 = *edi_48
                                                            cond:57_1 = temp61_1 != temp62_1
                                                            esi_52 = &(*esi_52)[1]
                                                            edi_48 += 1
                                                            i_27 -= 1
                                                            
                                                            if (temp61_1 != temp62_1)
                                                                break
                                                        
                                                        if (cond:57_1)
                                                            goto label_47ebd4
                                                        
                                                        var_24 = 6
                                                    else
                                                        var_24 = 5
                                                else
                                                    var_24 = 4
                                            else
                                                var_24 = 3
                                        else
                                            var_24 = 2
                                    else
                                        var_24 = 1
                                    
                                    var_34_1 = 0
                                else
                                    char* esi_32 = &var_18
                                    char* ebx_7
                                    
                                    if (var_18[0] == 0)
                                        ebx_7 = nullptr
                                    else
                                        do
                                            if (_isalpha(sx.d(*esi_32)) == 0)
                                                break
                                            
                                            esi_32 = &esi_32[1]
                                        while (*esi_32 != 0)
                                        
                                        if (*esi_32 == 0)
                                            ebx_7 = nullptr
                                        else
                                            char* var_70_6 = esi_32
                                            ebx_7 = sub_75efed()
                                    
                                    if (ebx_7 u> 0xf)
                                        goto label_47ebd4
                                    
                                    if (*esi_32 != 0)
                                        *esi_32 = 0
                                        esi_32 = &esi_32[1]
                                    
                                    eax_5.b = *esi_32
                                    
                                    if (eax_5.b != 0)
                                        do
                                            if (_isdigit(sx.d(eax_5.b)) == 0)
                                                break
                                            
                                            esi_32 = &esi_32[1]
                                            eax_5.b = *esi_32
                                        while (eax_5.b != 0)
                                        
                                        if (*esi_32 != 0)
                                            goto label_47ebd4
                                    
                                    char const* const edi_29 = "position"
                                    char (* esi_33)[0x10] = &var_18
                                    int32_t i_28 = 9
                                    int32_t eax_30 = 0
                                    bool cond:46_1 = true
                                    
                                    while (i_28 != 0)
                                        char temp35_1 = *esi_33
                                        char const temp36_1 = *edi_29
                                        cond:46_1 = temp35_1 == temp36_1
                                        esi_33 = &(*esi_33)[1]
                                        edi_29 = &edi_29[1]
                                        i_28 -= 1
                                        
                                        if (temp35_1 != temp36_1)
                                            break
                                    
                                    if (not(cond:46_1))
                                        char const* const edi_30 = "blendweight"
                                        char (* esi_34)[0x10] = &var_18
                                        int32_t i_29 = 0xc
                                        bool cond:53_1 = false
                                        
                                        while (i_29 != 0)
                                            char temp43_1 = *esi_34
                                            char const temp44_1 = *edi_30
                                            cond:53_1 = temp43_1 != temp44_1
                                            esi_34 = &(*esi_34)[1]
                                            edi_30 = &edi_30[1]
                                            i_29 -= 1
                                            
                                            if (temp43_1 != temp44_1)
                                                break
                                        
                                        if (cond:53_1)
                                            char const* const edi_31 = "blendindices"
                                            char (* esi_35)[0x10] = &var_18
                                            int32_t i_30 = 0xd
                                            bool cond:59_1 = false
                                            
                                            while (i_30 != 0)
                                                char temp51_1 = *esi_35
                                                char const temp52_1 = *edi_31
                                                cond:59_1 = temp51_1 != temp52_1
                                                esi_35 = &(*esi_35)[1]
                                                edi_31 = &edi_31[1]
                                                i_30 -= 1
                                                
                                                if (temp51_1 != temp52_1)
                                                    break
                                            
                                            if (cond:59_1)
                                                char const* const edi_32 = "normal"
                                                char (* esi_36)[0x10] = &var_18
                                                int32_t i_31 = 7
                                                bool cond:63_1 = false
                                                
                                                while (i_31 != 0)
                                                    char temp59_1 = *esi_36
                                                    char const temp60_1 = *edi_32
                                                    cond:63_1 = temp59_1 != temp60_1
                                                    esi_36 = &(*esi_36)[1]
                                                    edi_32 = &edi_32[1]
                                                    i_31 -= 1
                                                    
                                                    if (temp59_1 != temp60_1)
                                                        break
                                                
                                                if (cond:63_1)
                                                    char const* const edi_33 = "psize"
                                                    char (* esi_37)[0x10] = &var_18
                                                    int32_t i_32 = 6
                                                    bool cond:67_1 = false
                                                    
                                                    while (i_32 != 0)
                                                        char temp65_1 = *esi_37
                                                        char const temp66_1 = *edi_33
                                                        cond:67_1 = temp65_1 != temp66_1
                                                        esi_37 = &(*esi_37)[1]
                                                        edi_33 = &edi_33[1]
                                                        i_32 -= 1
                                                        
                                                        if (temp65_1 != temp66_1)
                                                            break
                                                    
                                                    if (cond:67_1)
                                                        char const* const edi_34 = "texcoord"
                                                        char (* esi_38)[0x10] = &var_18
                                                        int32_t i_33 = 9
                                                        bool cond:71_1 = false
                                                        
                                                        while (i_33 != 0)
                                                            char temp69_1 = *esi_38
                                                            char const temp70_1 = *edi_34
                                                            cond:71_1 = temp69_1 != temp70_1
                                                            esi_38 = &(*esi_38)[1]
                                                            edi_34 = &edi_34[1]
                                                            i_33 -= 1
                                                            
                                                            if (temp69_1 != temp70_1)
                                                                break
                                                        
                                                        if (cond:71_1)
                                                            eax_30 = 8
                                                            char const* const edi_35 = "tangent"
                                                            char (* esi_39)[0x10] = &var_18
                                                            int32_t i_34 = 8
                                                            bool cond:75_1 = false
                                                            
                                                            while (i_34 != 0)
                                                                char temp73_1 = *esi_39
                                                                char const temp74_1 = *edi_35
                                                                cond:75_1 = temp73_1 != temp74_1
                                                                esi_39 = &(*esi_39)[1]
                                                                edi_35 = &edi_35[1]
                                                                i_34 -= 1
                                                                
                                                                if (temp73_1 != temp74_1)
                                                                    break
                                                            
                                                            if (cond:75_1)
                                                                char const* const edi_36 = "binormal"
                                                                char (* esi_40)[0x10] = &var_18
                                                                int32_t i_35 = 9
                                                                bool cond:79_1 = false
                                                                
                                                                while (i_35 != 0)
                                                                    char temp77_1 = *esi_40
                                                                    char const temp78_1 = *edi_36
                                                                    cond:79_1 = temp77_1 != temp78_1
                                                                    esi_40 = &(*esi_40)[1]
                                                                    edi_36 = &edi_36[1]
                                                                    i_35 -= 1
                                                                    
                                                                    if (temp77_1 != temp78_1)
                                                                        break
                                                                
                                                                if (cond:79_1)
                                                                    char const* const edi_37 = "tessfactor"
                                                                    char (* esi_41)[0x10] = &var_18
                                                                    int32_t i_36 = 0xb
                                                                    bool cond:83_1 = true
                                                                    
                                                                    while (i_36 != 0)
                                                                        char temp81_1 = *esi_41
                                                                        char const temp82_1 = *edi_37
                                                                        cond:83_1 = temp81_1 == temp82_1
                                                                        esi_41 = &(*esi_41)[1]
                                                                        edi_37 = &edi_37[1]
                                                                        i_36 -= 1
                                                                        
                                                                        if (temp81_1 != temp82_1)
                                                                            break
                                                                    
                                                                    if (not(cond:83_1))
                                                                        eax_30 = 0xa
                                                                        char const* const edi_38 = "positiont"
                                                                        char (* esi_42)[0x10] = &var_18
                                                                        int32_t i_37 = 0xa
                                                                        bool cond:87_1 = false
                                                                        
                                                                        while (i_37 != 0)
                                                                            char temp85_1 = *esi_42
                                                                            char const temp86_1 = *edi_38
                                                                            cond:87_1 = temp85_1 != temp86_1
                                                                            esi_42 = &(*esi_42)[1]
                                                                            edi_38 = &edi_38[1]
                                                                            i_37 -= 1
                                                                            
                                                                            if (temp85_1 != temp86_1)
                                                                                break
                                                                        
                                                                        if (cond:87_1)
                                                                            char const* const edi_39 = "color"
                                                                            char (* esi_43)[0x10] = &var_18
                                                                            int32_t i_38 = 6
                                                                            bool cond:91_1 = true
                                                                            
                                                                            while (i_38 != 0)
                                                                                char temp89_1 = *esi_43
                                                                                char const temp90_1 = *edi_39
                                                                                cond:91_1 = temp89_1 == temp90_1
                                                                                esi_43 = &(*esi_43)[1]
                                                                                edi_39 = &edi_39[1]
                                                                                i_38 -= 1
                                                                                
                                                                                if (temp89_1 != temp90_1)
                                                                                    break
                                                                            
                                                                            if (not(cond:91_1))
                                                                                void* const edi_40 = &data_ac6da8
                                                                                char (* esi_44)[0x10] = &var_18
                                                                                int32_t i_39 = 4
                                                                                bool cond:95_1 = false
                                                                                
                                                                                while (i_39 != 0)
                                                                                    char temp93_1 = *esi_44
                                                                                    char temp94_1 = *edi_40
                                                                                    cond:95_1 = temp93_1 != temp94_1
                                                                                    esi_44 = &(*esi_44)[1]
                                                                                    edi_40 += 1
                                                                                    i_39 -= 1
                                                                                    
                                                                                    if (temp93_1 != temp94_1)
                                                                                        break
                                                                                
                                                                                int32_t var_70_8
                                                                                
                                                                                if (cond:95_1)
                                                                                    char const* const edi_41 = "depth"
                                                                                    char (* esi_45)[0x10] = &var_18
                                                                                    int32_t i_40 = 6
                                                                                    bool cond:99_1 = false
                                                                                    
                                                                                    while (i_40 != 0)
                                                                                        char temp97_1 = *esi_45
                                                                                        char const temp98_1 = *edi_41
                                                                                        cond:99_1 = temp97_1 != temp98_1
                                                                                        esi_45 = &(*esi_45)[1]
                                                                                        edi_41 = &edi_41[1]
                                                                                        i_40 -= 1
                                                                                        
                                                                                        if (temp97_1 != temp98_1)
                                                                                            break
                                                                                    
                                                                                    if (cond:99_1)
                                                                                        char const* const edi_42 = "sample"
                                                                                        char (* esi_46)[0x10] = &var_18
                                                                                        int32_t i_41 = 7
                                                                                        bool cond:103_1 = false
                                                                                        
                                                                                        while (i_41 != 0)
                                                                                            char temp101_1 = *esi_46
                                                                                            char const temp102_1 = *edi_42
                                                                                            cond:103_1 = temp101_1 != temp102_1
                                                                                            esi_46 = &(*esi_46)[1]
                                                                                            edi_42 = &edi_42[1]
                                                                                            i_41 -= 1
                                                                                            
                                                                                            if (temp101_1 != temp102_1)
                                                                                                break
                                                                                        
                                                                                        if (cond:103_1)
                                                                                            goto label_47ebd4
                                                                                        
                                                                                        var_70_8 = 0xd
                                                                                    else
                                                                                        var_70_8 = 0xc
                                                                                else
                                                                                    var_70_8 = 0xb
                                                                                
                                                                                eax_30 = var_70_8
                                                                        else
                                                                            eax_30 = 9
                                                                else
                                                                    eax_30 = 7
                                                            else
                                                                eax_30 = 6
                                                        else
                                                            eax_30 = 5
                                                    else
                                                        eax_30 = 4
                                                else
                                                    eax_30 = 3
                                            else
                                                eax_30 = 2
                                        else
                                            eax_30 = 1
                                    
                                    var_3c_1 = 0
                                    var_24 = (ebx_7 & 0xf) << 0x10 | (eax_30 & 0xf)
                                    var_38_1 = 0
                        else
                            var_20:2.b |= 0x20
                            var_4c_1 = 0
                    else
                        eax_5 = nullptr
                        void* const edi_11 = &data_ac6e00
                        char (* esi_13)[0x10] = &var_18
                        int32_t i_42 = 3
                        bool cond:9_1 = false
                        
                        while (i_42 != 0)
                            char temp11_1 = *esi_13
                            char temp12_1 = *edi_11
                            cond:9_1 = temp11_1 != temp12_1
                            esi_13 = &(*esi_13)[1]
                            edi_11 += 1
                            i_42 -= 1
                            
                            if (temp11_1 != temp12_1)
                                break
                        
                        if (cond:9_1)
                            char const* const edi_12 = "cube"
                            char (* esi_14)[0x10] = &var_18
                            int32_t i_43 = 5
                            bool cond:16_1 = false
                            
                            while (i_43 != 0)
                                char temp18_1 = *esi_14
                                char const temp19_1 = *edi_12
                                cond:16_1 = temp18_1 != temp19_1
                                esi_14 = &(*esi_14)[1]
                                edi_12 = &edi_12[1]
                                i_43 -= 1
                                
                                if (temp18_1 != temp19_1)
                                    break
                            
                            if (cond:16_1)
                                char const* const edi_13 = "volume"
                                char (* esi_15)[0x10] = &var_18
                                int32_t i_44 = 7
                                bool cond:21_1 = false
                                
                                while (i_44 != 0)
                                    char temp27_1 = *esi_15
                                    char const temp28_1 = *edi_13
                                    cond:21_1 = temp27_1 != temp28_1
                                    esi_15 = &(*esi_15)[1]
                                    edi_13 = &edi_13[1]
                                    i_44 -= 1
                                    
                                    if (temp27_1 != temp28_1)
                                        break
                                
                                if (not(cond:21_1))
                                    eax_5 = 0x20000000
                            else
                                eax_5 = 0x18000000
                        else
                            eax_5 = 0x10000000
                        
                        var_24 |= eax_5
                        var_38_1 = 0
                        
                        if (eax_5 == 0)
                            goto label_47e721
                        
                        var_44_1 = 0
                        var_3c_1 = 0
            else
                var_20:2.b |= 0x10
                var_40_1 = 0
                var_50_1 = 0
            
            esi = var_28
        else
            int32_t edx_1 = 0
            int32_t edi_2 = 0
            
            while (true)
                char* esi_3 = *(edi_2 + &data_ac4dd8)
                char (* eax_6)[0x10] = &var_18
                int32_t eax_8
                
                while (true)
                    char ebx_2 = *eax_6
                    char temp1_1 = *esi_3
                    bool c_1 = ebx_2 u< temp1_1
                    
                    if (ebx_2 == temp1_1)
                        if (ebx_2 == 0)
                            eax_8 = 0
                            break
                        
                        ebx_2 = (*eax_6)[1]
                        char temp8_1 = esi_3[1]
                        c_1 = ebx_2 u< temp8_1
                        
                        if (ebx_2 == temp8_1)
                            eax_6 = &(*eax_6)[2]
                            esi_3 = &esi_3[2]
                            
                            if (ebx_2 != 0)
                                continue
                            
                            eax_8 = 0
                            break
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    eax_8 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
                    break
                
                if (eax_8 == 0)
                    break
                
                edi_2 += 0x44
                edx_1 += 1
                
                if (edi_2 u>= 0x1650)
                    break
            
            if (edx_1 == 0x54)
                goto label_47ebd4
            
            esi = var_28
            int32_t ecx_7 = *(esi + 0x38)
            int32_t eax_14 = *(((edx_1 * 0x11 + ecx_7) << 2) + &data_ac4de0)
            
            if (eax_14 == 0xfffffffb)
                result_1 = 0x10b
            else if (eax_14 == 0xfffffffc)
                result_1 = 0x10a
            else if (eax_14 == 0xfffffffd)
                result_1 = 0x108
            else if (eax_14 == 0xfffffffe)
                result_1 = 0x109
            else if (eax_14 == 0xffffffff)
                *(esi + 0x54) = 0x7e7
                goto label_47ebd4
            
            switch (eax_14)
                case 0
                    result_1 = 0x102
                case 1
                    result_1 = 0x103
                case 2
                    result_1 = 0x104
                case 3
                    result_1 = 0x105
                case 4
                    result_1 = 0x106
                case 5
                    result_1 = 0x107
                case 0xfffffffa
                    result_1 = 0x10c
            
            int32_t edx_2 = *(edx_1 * 0x44 + &data_ac4ddc)
            var_5c = edx_2
            var_58 = 0
            
            if (ecx_7 s>= 6 && ecx_7 s<= 9 && result_1 s>= 0x103 && result_1 s<= 0x107)
                var_40_1 = 1
            
            if (ecx_7 s>= 4 && ecx_7 s<= 5)
            label_47e523:
                
                if (result_1 s>= 0x103 && result_1 s<= 0x107 && edx_2 != 0x1f)
                    var_50_1 = 1
            else if (ecx_7 s>= 6 && ecx_7 s<= 0xe)
                goto label_47e523
            
            if (ecx_7 s>= 0xa)
                if (ecx_7 s<= 0xe && edx_2 == 0x1f)
                    var_48_1 = 1
                
                if (ecx_7 s>= 0xa && ecx_7 s<= 0xe && result_1 s>= 0x103 && result_1 s<= 0x107)
                    var_4c_1 = 1
            
            if (ecx_7 s>= 4 && ecx_7 s<= 5)
            label_47e582:
                
                if (edx_2 == 0x1f)
                    var_38_1 = 1
            else if (ecx_7 s>= 0xa && ecx_7 s<= 0xe)
                goto label_47e582
            
            if (ecx_7 s>= 0xd && ecx_7 s<= 0xe && edx_2 == 0x1f)
                var_44_1 = 1
            
            if (ecx_7 s>= 0 && ecx_7 s<= 5 && edx_2 == 0x1f)
                var_3c_1 = 1
            
            if (edx_2 == 0x28 || edx_2 == 0x2c || edx_2 == 0x5e)
                var_34_1 = 1
            
            *(esi + 0x54) = 0x7e8
        
        if (*var_2c == 0)
            ecx = var_5c
            
            if (ecx != 0x28)
                goto label_47eba4
            
            if (var_34_1 != 0)
            label_47ebcf:
                
                if (var_3c_1 == 0)
                    break
            else if (*((*(esi + 0x38) << 2) + &data_ac6430) != 0xffffffff)
                ecx = 0x29
                result_1 = 0x10c
            label_47eba4:
                
                if (ecx != 0x2c)
                    goto label_47ebc5
                
                if (var_34_1 != 0)
                    goto label_47ebcf
                
                if (*((*(esi + 0x38) << 2) + &data_ac6478) != 0xffffffff)
                    ecx = 0x2d
                    result_1 = 0x10c
                label_47ebc5:
                    
                    if (ecx != 0x5e || var_34_1 == 0)
                        goto label_47ebcf
            
        label_47ebd4:
            result = 0x10d
            goto label_47ebf6

*(esi + 0x44) = var_20
*(esi + 0x48) = var_24
result = result_1
*(esi + 0x40) = ecx
*(esi + 0x54) = 0
label_47ebf6:
sub_745f2b(__security_cookie_1)
return result

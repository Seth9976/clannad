// 函数: sub_43be42
// 地址: 0x43be42
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg8
int32_t edi
int32_t var_120 = edi

if (esi != 0)
    *esi = 0

if (arg9 != 0)
    *arg9 = 0

int32_t i = 0xffffffff
int32_t var_c = 0

if (arg6 != 0)
    int32_t var_114[0x40]
    
    while (i != 0)
        void* eax_1 = sub_437434(arg3, arg6)
        
        for (bool cond:3_1 = eax_1 != 0; cond:3_1; cond:3_1 = eax_1 != 0)
            if (i == 0)
                break
            
            void* esi_1 = *(eax_1 + 8)
            
            if (arg2 != *(esi_1 + 0x10))
                if ((arg7 & 5) != 0)
                    int32_t var_124_10 = (&data_ac05cc)[arg2]
                    int32_t var_128_7 = (&data_ac05cc)[*(esi_1 + 0x10)]
                    int32_t var_12c_4 = *(arg3 + 8)
                    sub_43713d(arg1, arg3, 0xbbd, "'%s': identifier represents a %s, not a %s")
                
                int32_t* eax_20 = arg8
                
                if (eax_20 != 0)
                    *eax_20 = 0
                
                return 0x80004005
            
            int32_t i_6 = 0
            
            if ((arg7 & 4) != 0)
                i_6 = sub_43a80b(arg1, *(esi_1 + 0x18), arg4, arg5, arg7.d)
            
            if ((arg7 & 8) != 0)
                int32_t var_124_3 = arg7.d
                i_6 += sub_439018(*(esi_1 + 0x18), arg4, arg5)
            
            if (i_6 != 0xffffffff)
                bool cond:19_1 = i_6 != i
                
                if (i_6 u< i)
                    var_c = 0
                    i = i_6
                    cond:19_1 = i_6 != i_6
                
                if (not(cond:19_1) && var_c u< 0x40)
                    int32_t eax_6 = var_c
                    var_c += 1
                    var_114[eax_6] = esi_1
                
                if (i == 0 && *(esi_1 + 0x2c) != 0 && *(esi_1 + 0x28) == 0)
                    void* eax_8 = *(arg6 + 0x20)
                    
                    if (eax_8 != 0 && *(eax_8 + 0x10) == 4)
                        for (void* j = sub_437434(arg3, eax_8); j != 0; j = *(j + 0xc))
                            if (*(*(j + 8) + 0x2c) == 0)
                                int32_t var_124_5 = *(arg3 + 8)
                                sub_4371a3(arg1, arg3, 0xc06, 
                                    "'%s': loop control variable used outside for-loop scope conflicts "
                                "with a previous declaration in the outer scope; most recent "
                                "definition used")
                                *(esi_1 + 0x28) = 1
                                break
                    
                    void* eax_9 = eax_1
                    
                    while (true)
                        eax_9 = *(eax_9 + 0xc)
                        
                        if (eax_9 == 0)
                            break
                        
                        if (*(*(eax_9 + 8) + 0x2c) == 0)
                            int32_t var_124_6 = *(arg3 + 8)
                            sub_4371a3(arg1, arg3, 0xc06, 
                                "'%s': loop control variable used outside for-loop scope conflicts with "
                            "a previous declaration in the outer scope; most recent definition "
                            "used")
                            *(esi_1 + 0x28) = 1
                            break
            
            eax_1 = *(eax_1 + 0xc)
        
        void* eax_12 = *(arg6 + 0x20)
        arg6 = eax_12
        
        if (eax_12 == 0)
            break
    
    if (i != 0xffffffff)
        int32_t edi_2 = var_114[0]
        
        if ((arg7 & 4) != 0)
            void* esi_2 = *(edi_2 + 0x18)
            int32_t ebx_1 = 1
            
            if (var_c u> 1)
                do
                    int32_t eax_14
                    void* edx_2
                    eax_14, edx_2 = sub_43782f(*(esi_2 + 0x20), *(*(var_114[ebx_1] + 0x18) + 0x20))
                    
                    if (eax_14 == 0)
                        break
                    
                    int32_t var_124_8 = 0
                    
                    if (sub_439018(esi_2, *(esi_2 + 0x1c), *(edx_2 + 0x24)) == 0xffffffff)
                        break
                    
                    ebx_1 += 1
                while (ebx_1 u< var_c)
                
                if (ebx_1 u< var_c)
                    int32_t var_124_9 = *(arg3 + 8)
                    sub_43713d(arg1, arg3, 0xbfb, "'%s': ambiguous function call")
        
        int32_t* eax_17 = arg8
        
        if (eax_17 != 0)
            if ((arg7 & 2) == 0)
                int32_t* eax_22 = *(edi_2 + 0x18)
                
                if (eax_22 != 0)
                    int32_t eax_23 = sub_46b5aa(eax_22)
                    *arg8 = eax_23
                    
                    if (eax_23 == 0)
                        return 0x8007000e
            else
                *eax_17 = *(edi_2 + 0x18)
        
        int32_t edi_3 = 0
        
        if (arg9 != 0)
            arg8 = nullptr
            int32_t** esi_3 = &arg8
            
            if (var_c u> 0)
                do
                    void*** eax_24 = sub_42cfa1(0x14)
                    int32_t* eax_25
                    
                    if (eax_24 == 0)
                        eax_25 = nullptr
                    else
                        eax_25 = sub_46b602(eax_24, 0, 0, "Values")
                    
                    *esi_3 = eax_25
                    
                    if (eax_25 == 0)
                        return 0x8007000e
                    
                    void*** eax_26 = sub_42cfa1(0x40)
                    void*** eax_27
                    
                    if (eax_26 == 0)
                        eax_27 = nullptr
                    else
                        eax_27 = sub_46c032(eax_26, 2, *(var_114[edi_3] + 0x24), arg3)
                    
                    (*esi_3)[2] = eax_27
                    
                    if (eax_27 == 0)
                        return 0x8007000e
                    
                    esi_3 = &(*esi_3)[3]
                    edi_3 += 1
                while (edi_3 u< var_c)
            
            *arg9 = arg8
        
        return 0
    
    esi = arg8

if ((arg7 & 2) == 0 && arg9 == 0)
    if (arg2 == 0)
        int32_t var_134_4
        int32_t var_130_7
        int32_t var_12c_5
        int32_t var_128_11
        int32_t var_124_13
        void*** eax_31
        void*** eax_32
        bool cond:31_1
        
        if (__stricmp(*(arg3 + 8), "dword") == 0)
            var_124_13 = 4
        label_43c19f:
            
            if (esi == 0)
                return 0
            
            eax_31 = sub_42cfa1(0x24)
            
            if (eax_31 == 0)
            label_43c1bc:
                eax_32 = nullptr
            else
                int32_t var_124_14 = 0
                var_128_11 = 1
                var_12c_5 = 1
                var_130_7 = var_124_13
                var_134_4 = 0
            label_43c22f:
                eax_32 = sub_46bbbb(eax_31, var_134_4, var_130_7, var_12c_5, var_128_11, 0)
            
            *esi = eax_32
        label_43c1c0:
            cond:31_1 = eax_32 != 0
        label_43c1c2:
            
            if (cond:31_1)
                return 0
            
            return 0x8007000e
        
        if (__stricmp(*(arg3 + 8), "float") == 0)
            var_124_13 = 0xb
            goto label_43c19f
        
        if (__stricmp(*(arg3 + 8), "vector") == 0)
            if (esi == 0)
                return 0
            
            eax_31 = sub_42cfa1(0x24)
            
            if (eax_31 == 0)
                goto label_43c1bc
            
            int32_t var_124_15 = 0
            var_128_11 = 4
            var_12c_5 = 1
            var_130_7 = 0xb
            var_134_4 = 1
            goto label_43c22f
        
        if (__stricmp(*(arg3 + 8), "matrix") == 0)
            if (esi == 0)
                return 0
            
            eax_31 = sub_42cfa1(0x24)
            
            if (eax_31 == 0)
                goto label_43c1bc
            
            int32_t var_124_16 = 0
            var_128_11 = 4
            var_12c_5 = 4
            var_130_7 = 0xb
            var_134_4 = 2
            goto label_43c22f
        
        int32_t var_124_17
        
        if (__stricmp(*(arg3 + 8), "string") == 0)
            var_124_17 = 0xe
        label_43c290:
            void**** edi_5 = arg8
            
            if (edi_5 == 0)
                return 0
            
            void*** eax_39 = sub_42cfa1(0x24)
            
            if (eax_39 == 0)
                eax_32 = nullptr
            else
                eax_32 = sub_46bbbb(eax_39, 3, var_124_17, 1, 1, 0)
            
            *edi_5 = eax_32
            goto label_43c1c0
        
        if (__stricmp(*(arg3 + 8), "texture") == 0)
            var_124_17 = 0xf
            goto label_43c290
        
        if (__stricmp(*(arg3 + 8), "pixelshader") == 0)
            var_124_17 = 0x19
            goto label_43c290
        
        if (__stricmp(*(arg3 + 8), "vertexshader") == 0)
            var_124_17 = 0x1a
            goto label_43c290
        
        int32_t* ebx_2 = *(arg3 + 8)
        char* eax_40 = ebx_2
        char i_1
        
        do
            i_1 = *eax_40
            eax_40 = &eax_40[1]
        while (i_1 != 0)
        void* eax_41 = eax_40 - &eax_40[1]
        int32_t i_2 = 3
        void* eax_42
        char* ebx_3
        int32_t esi_8
        
        if (eax_41 u< 4 || *ebx_2 != 0x6c6f6f62)
            bool cond:26_1
            
            if (eax_41 u>= 3)
                void* const edi_6 = &data_b08bbc
                int32_t* esi_9 = ebx_2
                cond:26_1 = false
                
                while (i_2 != 0)
                    char temp4_1 = *esi_9
                    char temp5_1 = *edi_6
                    cond:26_1 = temp4_1 != temp5_1
                    esi_9 += 1
                    edi_6 += 1
                    i_2 -= 1
                    
                    if (temp4_1 != temp5_1)
                        break
            
            int32_t var_124_18
            
            if (eax_41 u>= 3 && not(cond:26_1))
                ebx_3 = ebx_2 + 3
                var_124_18 = 4
                eax_42 = eax_41 - 3
                goto label_43c369
            
            if (eax_41 u>= 4 && *ebx_2 == 0x666c6168)
                ebx_3 = &ebx_2[1]
                var_124_18 = 0xa
                eax_42 = eax_41 - 4
            label_43c369:
                esi_8 = var_124_18
                goto label_43c36a
            
            bool cond:28_1
            
            if (eax_41 u>= 5)
                int32_t i_3 = 5
                char const* const edi_7 = "float"
                int32_t* esi_10 = ebx_2
                cond:28_1 = false
                
                while (i_3 != 0)
                    char temp6_1 = *esi_10
                    char const temp7_1 = *edi_7
                    cond:28_1 = temp6_1 != temp7_1
                    esi_10 += 1
                    edi_7 = &edi_7[1]
                    i_3 -= 1
                    
                    if (temp6_1 != temp7_1)
                        break
            
            if (eax_41 u>= 5 && not(cond:28_1))
                ebx_3 = ebx_2 + 5
                var_124_18 = 0xb
                eax_42 = eax_41 - 5
                goto label_43c369
            
            if (eax_41 u>= 6)
                int32_t i_4 = 3
                char const* const edi_8 = "double"
                int32_t* esi_11 = ebx_2
                bool cond:30_1 = false
                
                while (i_4 != 0)
                    int16_t temp8_1 = *esi_11
                    int16_t temp9_1 = *edi_8
                    cond:30_1 = temp8_1 != temp9_1
                    esi_11 += 2
                    edi_8 = &edi_8[2]
                    i_4 -= 1
                    
                    if (temp8_1 != temp9_1)
                        break
                
                if (not(cond:30_1))
                    ebx_3 = ebx_2 + 6
                    var_124_18 = 0xc
                    eax_42 = eax_41 - 6
                    goto label_43c369
        else
            esi_8 = 0
            ebx_3 = &ebx_2[1]
            eax_42 = eax_41 - 4
        label_43c36a:
            int32_t var_134_5
            int32_t var_130_9
            int32_t var_12c_6
            int32_t var_128_18
            void*** eax_43
            
            if (eax_42 == 1)
                eax_42.b = *ebx_3
                
                if (eax_42.b s>= 0x31 && eax_42.b s< 0x35)
                    if (arg8 == 0)
                        return 0
                    
                    eax_43 = sub_42cfa1(0x24)
                    void*** eax_44
                    
                    if (eax_43 == 0)
                    label_43c410:
                        eax_44 = nullptr
                    else
                        int32_t var_124_19 = 0
                        var_128_18 = sx.d(*ebx_3) - 0x30
                        var_12c_6 = 1
                        var_130_9 = esi_8
                        var_134_5 = 1
                    label_43c3a6:
                        eax_44 = sub_46bbbb(eax_43, var_134_5, var_130_9, var_12c_6, var_128_18, 0)
                    
                    *arg8 = eax_44
                    cond:31_1 = eax_44 != 0
                    goto label_43c1c2
            else if (eax_42 == 3)
                eax_42.b = *ebx_3
                
                if (eax_42.b s>= 0x31 && eax_42.b s< 0x35 && ebx_3[1] == 0x78)
                    eax_42.b = ebx_3[2]
                    
                    if (eax_42.b s>= 0x31 && eax_42.b s< 0x35)
                        if (arg8 == 0)
                            return 0
                        
                        eax_43 = sub_42cfa1(0x24)
                        
                        if (eax_43 == 0)
                            goto label_43c410
                        
                        int32_t var_124_20 = 0
                        var_128_18 = sx.d(ebx_3[2]) - 0x30
                        var_12c_6 = sx.d(*ebx_3) - 0x30
                        var_130_9 = esi_8
                        var_134_5 = 2
                        goto label_43c3a6
    else if (arg2 == 1)
        char* esi_12 = *(arg3 + 8)
        char const* const edi_9 = "NULL"
        int32_t i_5 = 5
        bool cond:7_1 = false
        
        while (i_5 != 0)
            char temp1_1 = *esi_12
            char const temp2_1 = *edi_9
            cond:7_1 = temp1_1 != temp2_1
            esi_12 = &esi_12[1]
            edi_9 = &edi_9[1]
            i_5 -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        if (not(cond:7_1))
            if (arg8 == 0)
                return 0
            
            void*** eax_46 = sub_42cfa1(0x40)
            void*** esi_13
            
            if (eax_46 == 0)
                esi_13 = nullptr
            else
                esi_13 = sub_46bd30(eax_46)
            
            if (esi_13 == 0)
                return 0x8007000e
            
            esi_13[5] = 1
            esi_13[6] = 0
            esi_13[7] = 0x202
            void*** eax_48 = sub_42cfa1(0x24)
            void*** eax_49
            
            if (eax_48 == 0)
                eax_49 = nullptr
            else
                eax_49 = sub_46bbbb(eax_48, 3, 0xd, 1, 1, 0x200)
            
            esi_13[8] = eax_49
            
            if (eax_49 == 0)
                return 0x8007000e
            
            void*** eax_50 = sub_42cfa1(0x40)
            void*** eax_51
            
            if (eax_50 == 0)
                eax_51 = nullptr
            else
                eax_51 = sub_46c09c(eax_50, 5, 0, 0, arg3)
            
            esi_13[9] = eax_51
            
            if (eax_51 == 0)
                return 0x8007000e
            
            *arg8 = esi_13
            return 0

if ((arg7 & 1) != 0)
    int32_t var_124_22 = *(arg3 + 8)
    sub_43713d(arg1, arg3, 0xbbc, "undeclared identifier '%s'")

return 1

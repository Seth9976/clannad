// 函数: sub_457357
// 地址: 0x457357
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
int32_t* esi_1

if (arg2 != 0)
    esi_1 = arg4

int32_t* result

if (arg2 == 0 || esi_1 == 0)
    result = 0x8876086c
else
    int32_t eax = sub_745f3f(0x1c)
    arg1[0x31] = eax
    
    if (eax != 0)
        result = sub_443509(arg1)
        
        if (result s>= 0)
            __builtin_memset(arg1[0x31], 0, 0x1c)
            arg1[0xe] = arg3
            
            if (arg3 != 0)
                (*(*arg3 + 4))(arg3)
            
            sub_44615e(&arg1[1], arg2)
            arg1[0xa] = esi_1
            (*(*esi_1 + 4))(esi_1)
            int32_t* edi_2 = arg5
            arg2 = *edi_2
            
            if (arg2 + 1 u<= (*(*esi_1 + 0x10))(esi_1))
                arg2 = *edi_2
                arg3 = *((*(*esi_1 + 0xc))(esi_1) + (arg2 << 2))
            
            *edi_2 = arg2 + 1
            int32_t eax_13 = (*(*esi_1 + 0x10))(esi_1)
            
            if (*edi_2 + 1 u<= eax_13)
                arg1[7] = *((*(*esi_1 + 0xc))(esi_1) + (*edi_2 << 2))
            
            *edi_2 += 1
            
            if (arg3 != 0xfeff0901)
            labelid_6f:
                result = 0x80004005
            else if ((*(*esi_1 + 0x10))(esi_1) u< *edi_2)
            labelid_6f:
                result = 0x80004005
            else
                int32_t eax_19 = arg1[8]
                
                if (eax_19 != 0)
                    j__free(eax_19)
                    arg1[8] = 0
                
                int32_t eax_20 = sub_745f3f(arg1[7])
                arg1[8] = eax_20
                
                if (eax_20 == 0)
                    result = 0x8007000e
                else
                    if (arg1[7] != 0)
                        int32_t* eax_21 = arg1[7]
                        int32_t eax_23 = (*(*esi_1 + 0x10))(esi_1)
                        void* ecx_13 = eax_21 & 3
                        char temp1_1 = ecx_13.b
                        ecx_13.b = neg.b(ecx_13.b)
                        
                        if (neg.d(sbb.d(ecx_13, ecx_13, temp1_1 != 0)) + (eax_21 u>> 2) + *edi_2
                                u<= eax_23)
                            int32_t eax_25 = (*(*arg4 + 0xc))(arg4)
                            int32_t esi_3
                            int32_t edi_4
                            edi_4, esi_3 =
                                __builtin_memcpy(arg1[8], eax_25 + (*arg5 << 2), eax_21 u>> 2 << 2)
                            __builtin_memcpy(edi_4, esi_3, eax_21 & 3)
                            edi_2 = arg5
                            esi_1 = arg4
                        
                        int32_t eax_27 = arg1[7]
                        int32_t ecx_26 = eax_27 & 3
                        char temp2_1 = ecx_26.b
                        ecx_26.b = neg.b(ecx_26.b)
                        *edi_2 += neg.d(sbb.d(ecx_26, ecx_26, temp2_1 != 0)) + (eax_27 u>> 2)
                    
                    int32_t eax_30 = (*(*esi_1 + 0x10))(esi_1)
                    
                    if (*edi_2 + 1 u<= eax_30)
                        arg1[0x26] = *((*(*esi_1 + 0xc))(esi_1) + (*edi_2 << 2))
                    
                    *edi_2 += 1
                    int32_t eax_35 = (*(*esi_1 + 0x10))(esi_1)
                    
                    if (*edi_2 + 1 u<= eax_35)
                        arg1[0x28] = *((*(*esi_1 + 0xc))(esi_1) + (*edi_2 << 2))
                    
                    *edi_2 += 1
                    int32_t eax_40 = (*(*esi_1 + 0x10))(esi_1)
                    
                    if (*edi_2 + 1 u<= eax_40)
                        arg1[0xd] = *((*(*esi_1 + 0xc))(esi_1) + (*edi_2 << 2))
                    
                    *edi_2 += 1
                    int32_t eax_45 = (*(*esi_1 + 0x10))(esi_1)
                    
                    if (*edi_2 + 1 u<= eax_45)
                        arg1[5] = *((*(*esi_1 + 0xc))(esi_1) + (*edi_2 << 2))
                    
                    *edi_2 += 1
                    
                    if ((*(*esi_1 + 0x10))(esi_1) u< *edi_2 || arg1[7] u< 4 || *arg1[8] != 0)
                    labelid_6f:
                        result = 0x80004005
                    else
                        int32_t* eax_52 = arg1[0xd]
                        int32_t* eax_57
                        
                        if (eax_52 u> 0)
                            int32_t** eax_55 = sub_745f3f(eax_52 * 0x64 + 4)
                            
                            if (eax_55 == 0)
                                eax_57 = nullptr
                            else
                                *eax_55 = eax_52
                                sub_61cdd0(&eax_55[1], 0x64, eax_52, sub_4432a5)
                                eax_57 = &eax_55[1]
                            
                            arg1[0xb] = eax_57
                        
                        if (eax_52 u> 0 && eax_57 == 0)
                            result = 0x8007000e
                        else
                            int32_t* eax_58 = arg1[0x26]
                            arg1[0xc].w = 0
                            int32_t* eax_64
                            
                            if (eax_58 u> 0)
                                int32_t** eax_62 = sub_745f3f(eax_58 * 0x50 + 4)
                                
                                if (eax_62 == 0)
                                    eax_64 = nullptr
                                else
                                    *eax_62 = eax_58
                                    sub_61cdd0(&eax_62[1], 0x50, eax_58, sub_44cb3f)
                                    eax_64 = &eax_62[1]
                                
                                arg1[0x27] = eax_64
                            
                            if (eax_58 u> 0 && eax_64 == 0)
                                result = 0x8007000e
                            else
                                int32_t* eax_65 = arg1[0x28]
                                
                                if (eax_65 u<= 0)
                                labelid_6f:
                                    result = 0x80004005
                                else
                                    int32_t** eax_68 = sub_745f3f(eax_65 * 0xb4 + 4)
                                    int32_t* eax_70
                                    
                                    if (eax_68 == 0)
                                        eax_70 = nullptr
                                    else
                                        *eax_68 = eax_65
                                        sub_61cdd0(&eax_68[1], 0xb4, eax_65, sub_44bbb0)
                                        eax_70 = &eax_68[1]
                                    
                                    arg1[0x29] = eax_70
                                    
                                    if (eax_70 == 0)
                                        result = 0x8007000e
                                    else
                                        int32_t* eax_71 = arg1[5]
                                        int32_t* eax_76
                                        
                                        if (eax_71 u> 0)
                                            int32_t** eax_74 = sub_745f3f(eax_71 * 0x18 + 4)
                                            
                                            if (eax_74 == 0)
                                                eax_76 = nullptr
                                            else
                                                *eax_74 = eax_71
                                                sub_61cdd0(&eax_74[1], 0x18, eax_71, sub_443369)
                                                eax_76 = &eax_74[1]
                                            
                                            arg1[6] = eax_76
                                        
                                        if (eax_71 u> 0 && eax_76 == 0)
                                            result = 0x8007000e
                                        else if ((*(*esi_1 + 0x10))(esi_1) u< *edi_2)
                                        label_45809b:
                                            result = 0x80004005
                                        else
                                            uint32_t i = 0
                                            bool cond:15_1 = arg1[0x26] u<= 0
                                            arg1[0x2a] = 1
                                            arg3 = nullptr
                                            
                                            if (not(cond:15_1))
                                                do
                                                    int32_t* var_40_27 = edi_2
                                                    int32_t* var_44_5 = esi_1
                                                    result = sub_4530db(arg1, i * 0x50 + arg1[0x27])
                                                    
                                                    if (result s< 0)
                                                        goto label_4582fb
                                                    
                                                    arg3 += 1
                                                    i = zx.d(arg3.w)
                                                while (i u< arg1[0x26])
                                            
                                            uint32_t i_1 = 0
                                            arg3 = nullptr
                                            
                                            if (arg1[0x28] u> 0)
                                                do
                                                    int32_t eax_82 = i_1 * 0xb4
                                                    *(arg1[0x29] + eax_82 + 0x14) = arg3.w
                                                    result = sub_4532c8(arg1, arg1[0x29] + eax_82, 
                                                        esi_1, edi_2)
                                                    
                                                    if (result s< 0)
                                                        goto label_4582fb
                                                    
                                                    arg3 += 1
                                                    i_1 = zx.d(arg3.w)
                                                while (i_1 u< arg1[0x28])
                                            
                                            int32_t* eax_86 = arg1[0x4b] + arg1[7] + arg1[0x4a]
                                                + arg1[0x49] + 0x20
                                            int32_t* eax_87 = sub_745f3f(eax_86)
                                            
                                            if (eax_87 == 0)
                                                result = 0x8007000e
                                            else
                                                int32_t ecx_57 = arg1[7]
                                                int32_t esi_5
                                                int32_t edi_6
                                                edi_6, esi_5 = __builtin_memcpy(eax_87, arg1[8], 
                                                    ecx_57 u>> 2 << 2)
                                                __builtin_memcpy(edi_6, esi_5, ecx_57 & 3)
                                                void* esi_6 = arg1[7]
                                                void* ecx_62 = eax_86 - esi_6
                                                __builtin_memset(
                                                    __builtin_memset(esi_6 + eax_87, 0, 
                                                        ecx_62 u>> 2 << 2), 
                                                    0, ecx_62 & 3)
                                                void* eax_93 = ((arg1[7] + eax_87) & 0xffffffe0)
                                                    - eax_87 + 0x20
                                                void* ecx_67 = arg1[0x49] + eax_93
                                                void* var_10 = eax_93
                                                void* var_c = arg1[0x4a] + ecx_67
                                                int32_t eax_96 = arg1[8]
                                                void* var_14 = ecx_67
                                                
                                                if (eax_96 != 0)
                                                    j__free(eax_96)
                                                    arg1[8] = 0
                                                
                                                arg1[8] = eax_87
                                                void** eax_100 = sub_745f3f(arg1[0x2a] << 2)
                                                arg1[0x2c] = eax_100
                                                
                                                if (eax_100 == 0)
                                                    result = 0x8007000e
                                                else
                                                    arg3 = nullptr
                                                    *eax_100 = &arg1[0x12]
                                                    arg2 = 1
                                                    uint32_t var_30
                                                    int32_t var_2c
                                                    int32_t var_20
                                                    int32_t var_1c
                                                    int32_t var_18
                                                    void* var_8
                                                    
                                                    if (arg1[0x26] u> 0)
                                                        do
                                                            uint32_t edx_5 = zx.d(arg2.w)
                                                            
                                                            if (edx_5 u>= arg1[0x2a])
                                                                break
                                                            
                                                            uint32_t eax_103 = zx.d(arg3.w) * 0x50
                                                            int32_t* edi_10 = arg1[0x27] + eax_103
                                                            var_30 = eax_103
                                                            *(arg1[0x2c] + (edx_5 << 2)) = edi_10
                                                            edi_10[5] = edx_5
                                                            int32_t eax_105 = arg1[0x2c]
                                                            void* ecx_71 = *(eax_105 + (edx_5 << 2))
                                                            int32_t esi_8
                                                            
                                                            if (*(ecx_71 + 0x40) != 0)
                                                                esi_8 = *(arg1[0xe] + 0x10)
                                                            else
                                                                esi_8 = arg1[8]
                                                            
                                                            var_8 =
                                                                *(ecx_71 + 0x2c) + esi_8 + edi_10[6]
                                                            void* eax_106 =
                                                                *(eax_105 + (edi_10[5] << 2))
                                                            int32_t ecx_76
                                                            
                                                            if (*(eax_106 + 0x40) != 0)
                                                                ecx_76 = *(arg1[0xe] + 0x10)
                                                            else
                                                                ecx_76 = arg1[8]
                                                            
                                                            var_18 =
                                                                edi_10[7] + *(eax_106 + 0x30) + ecx_76
                                                            var_20 = edi_10[0xb]
                                                            var_1c = edi_10[0xc]
                                                            int32_t eax_108
                                                            eax_108.w = arg1[0xc].w
                                                            edi_10[0x11].w = eax_108.w
                                                            *(edi_10 + 0x46) = 0
                                                            result =
                                                                sub_44d0fb(arg1, &var_8, &var_18, edx_5)
                                                            
                                                            if (result s< 0)
                                                                goto label_4582fb
                                                            
                                                            int32_t eax_111
                                                            
                                                            if (*(*(arg1[0x2c] + (edi_10[5] << 2))
                                                                    + 0x40) != 0)
                                                                eax_111 = *(arg1[0xe] + 0x10)
                                                            else
                                                                eax_111 = arg1[8]
                                                            
                                                            edi_10[3] =
                                                                sub_443c0f(eax_111, &var_20, &var_1c)
                                                            int32_t eax_114 = edi_10[5]
                                                            edi_10[0x12] = 0
                                                            void* eax_115 =
                                                                *(arg1[0x2c] + (eax_114 << 2))
                                                            int32_t ecx_82
                                                            
                                                            if (*(eax_115 + 0x40) != 0)
                                                                ecx_82 = *(arg1[0xe] + 0x10)
                                                            else
                                                                ecx_82 = arg1[8]
                                                            
                                                            void* eax_118 =
                                                                *(eax_115 + 0x2c) + ecx_82 + edi_10[6]
                                                            var_8 = eax_118
                                                            int32_t eax_119 = *(eax_118 + 0x10)
                                                            edi_10[0x13] = eax_119
                                                            
                                                            if (eax_119 == 0)
                                                                edi_10[0x13] = 1
                                                            
                                                            arg2 += 1
                                                            result = sub_4490e5(arg1, edi_10, 
                                                                &var_14, &var_10, &var_c)
                                                            
                                                            if (result s< 0)
                                                                goto label_4582fb
                                                            
                                                            *edi_10 = arg1[8] + edi_10[0xc]
                                                            edi_10[1] = edi_10[0xb] + arg1[8]
                                                            
                                                            for (int32_t* i_2 =
                                                                    *(arg1[0x27] + var_30 + 0x3c); 
                                                                    i_2 != 0; i_2 = i_2[0xf])
                                                                uint32_t esi_13 = zx.d(arg2.w)
                                                                
                                                                if (esi_13 u>= arg1[0x2a])
                                                                    break
                                                                
                                                                *(arg1[0x2c] + (esi_13 << 2)) = i_2
                                                                i_2[5] = esi_13
                                                                int32_t eax_126 = arg1[0x2c]
                                                                void* ecx_86 =
                                                                    *(eax_126 + (esi_13 << 2))
                                                                int32_t edx_6
                                                                
                                                                if (*(ecx_86 + 0x40) != 0)
                                                                    edx_6 = *(arg1[0xe] + 0x10)
                                                                else
                                                                    edx_6 = arg1[8]
                                                                
                                                                var_2c = edx_6
                                                                var_8 =
                                                                    i_2[6] + *(ecx_86 + 0x2c) + var_2c
                                                                void* eax_127 =
                                                                    *(eax_126 + (i_2[5] << 2))
                                                                int32_t ecx_88
                                                                
                                                                if (*(eax_127 + 0x40) != 0)
                                                                    ecx_88 = *(arg1[0xe] + 0x10)
                                                                else
                                                                    ecx_88 = arg1[8]
                                                                
                                                                var_18 =
                                                                    i_2[7] + *(eax_127 + 0x30) + ecx_88
                                                                var_20 = i_2[0xb]
                                                                var_1c = i_2[0xc]
                                                                result = sub_4490e5(arg1, i_2, &var_14, 
                                                                    &var_10, &var_c)
                                                                
                                                                if (result s< 0)
                                                                    goto label_4582fb
                                                                
                                                                *i_2 = arg1[8] + i_2[0xc]
                                                                i_2[1] = i_2[0xb] + arg1[8]
                                                                int32_t eax_133
                                                                eax_133.w = arg1[0xc].w
                                                                *(i_2 + 0x46) = 0
                                                                i_2[0x11].w = eax_133.w
                                                                result = sub_44d0fb(arg1, &var_8, 
                                                                    &var_18, esi_13)
                                                                
                                                                if (result s< 0)
                                                                    goto label_4582fb
                                                                
                                                                int32_t eax_136
                                                                
                                                                if (
                                                                        *(*(arg1[0x2c] + (i_2[5] << 2)) + 0x40)
                                                                        != 0)
                                                                    eax_136 = *(arg1[0xe] + 0x10)
                                                                else
                                                                    eax_136 = arg1[8]
                                                                
                                                                arg2 += 1
                                                                i_2[3] =
                                                                    sub_443c0f(eax_136, &var_20, &var_1c)
                                                            
                                                            arg3 += 1
                                                        while (zx.d(arg3.w) u< arg1[0x26])
                                                    
                                                    uint32_t eax_177 = 0
                                                    arg3 = nullptr
                                                    void* var_28
                                                    int32_t var_24
                                                    
                                                    if (arg1[0x28] u> 0)
                                                    label_457aa4:
                                                        void* eax_141 = eax_177 * 0xb4 + arg1[0x29]
                                                        int32_t* edi_11 = *(eax_141 + 0x30)
                                                        var_28 = eax_141
                                                        
                                                        while (true)
                                                            if (edi_11 != 0)
                                                                uint32_t esi_14 = zx.d(arg2.w)
                                                                
                                                                if (esi_14 u< arg1[0x2a])
                                                                    *(arg1[0x2c] + (esi_14 << 2)) = edi_11
                                                                    edi_11[5] = esi_14
                                                                    int32_t eax_143 = arg1[0x2c]
                                                                    void* ecx_94 =
                                                                        *(eax_143 + (esi_14 << 2))
                                                                    int32_t edx_14
                                                                    
                                                                    if (*(ecx_94 + 0x40) != 0)
                                                                        edx_14 = *(arg1[0xe] + 0x10)
                                                                    else
                                                                        edx_14 = arg1[8]
                                                                    
                                                                    var_1c =
                                                                        edi_11[6] + *(ecx_94 + 0x2c) + edx_14
                                                                    void* eax_144 =
                                                                        *(eax_143 + (edi_11[5] << 2))
                                                                    int32_t ecx_96
                                                                    
                                                                    if (*(eax_144 + 0x40) != 0)
                                                                        ecx_96 = *(arg1[0xe] + 0x10)
                                                                    else
                                                                        ecx_96 = arg1[8]
                                                                    
                                                                    var_20 =
                                                                        edi_11[7] + *(eax_144 + 0x30) + ecx_96
                                                                    var_8 = edi_11[0xb]
                                                                    var_18 = edi_11[0xc]
                                                                    result = sub_4490e5(arg1, edi_11, 
                                                                        &var_14, &var_10, &var_c)
                                                                    
                                                                    if (result s< 0)
                                                                        goto label_4582fb
                                                                    
                                                                    *edi_11 = edi_11[0xc] + arg1[8]
                                                                    edi_11[1] = arg1[8] + edi_11[0xb]
                                                                    int32_t eax_150
                                                                    eax_150.w = arg1[0xc].w
                                                                    *(edi_11 + 0x46) = 0
                                                                    edi_11[0x11].w = eax_150.w
                                                                    result = sub_44d0fb(arg1, &var_1c, 
                                                                        &var_20, esi_14)
                                                                    
                                                                    if (result s< 0)
                                                                        goto label_4582fb
                                                                    
                                                                    int32_t eax_153
                                                                    
                                                                    if (*(*(arg1[0x2c] + (edi_11[5] << 2))
                                                                            + 0x40) != 0)
                                                                        eax_153 = *(arg1[0xe] + 0x10)
                                                                    else
                                                                        eax_153 = arg1[8]
                                                                    
                                                                    arg2 += 1
                                                                    edi_11[3] =
                                                                        sub_443c0f(eax_153, &var_8, &var_18)
                                                                    edi_11 = edi_11[0xf]
                                                                    continue
                                                            
                                                            var_2c = 0
                                                            
                                                            if (*(var_28 + 0x34) u<= 0)
                                                            label_457cf8:
                                                                arg3 += 1
                                                                eax_177 = zx.d(arg3.w)
                                                                
                                                                if (eax_177 u< arg1[0x28])
                                                                    goto label_457aa4
                                                                
                                                                break
                                                            
                                                            var_24 = 0
                                                            
                                                            while (true)
                                                                int32_t* edi_12 =
                                                                    *(var_24 + *(var_28 + 0x38) + 0x30)
                                                                
                                                                while (true)
                                                                    if (edi_12 != 0)
                                                                        uint32_t esi_15 = zx.d(arg2.w)
                                                                        
                                                                        if (esi_15 u< arg1[0x2a])
                                                                            *(arg1[0x2c] + (esi_15 << 2)) = edi_12
                                                                            edi_12[5] = esi_15
                                                                            int32_t eax_160 = arg1[0x2c]
                                                                            void* ecx_103 =
                                                                                *(eax_160 + (esi_15 << 2))
                                                                            uint32_t edx_22
                                                                            
                                                                            if (*(ecx_103 + 0x40) != 0)
                                                                                edx_22 = *(arg1[0xe] + 0x10)
                                                                            else
                                                                                edx_22 = arg1[8]
                                                                            
                                                                            var_30 = edx_22
                                                                            var_1c =
                                                                                edi_12[6] + *(ecx_103 + 0x2c) + var_30
                                                                            void* eax_161 =
                                                                                *(eax_160 + (edi_12[5] << 2))
                                                                            int32_t ecx_105
                                                                            
                                                                            if (*(eax_161 + 0x40) != 0)
                                                                                ecx_105 = *(arg1[0xe] + 0x10)
                                                                            else
                                                                                ecx_105 = arg1[8]
                                                                            
                                                                            var_20 =
                                                                                *(eax_161 + 0x30) + edi_12[7] + ecx_105
                                                                            var_8 = edi_12[0xb]
                                                                            var_18 = edi_12[0xc]
                                                                            result = sub_4490e5(arg1, edi_12, 
                                                                                &var_14, &var_10, &var_c)
                                                                            
                                                                            if (result s< 0)
                                                                                goto label_4582fb
                                                                            
                                                                            *edi_12 = edi_12[0xc] + arg1[8]
                                                                            edi_12[1] = arg1[8] + edi_12[0xb]
                                                                            int32_t eax_170
                                                                            eax_170.w = arg1[0xc].w
                                                                            *(edi_12 + 0x46) = 0
                                                                            edi_12[0x11].w = eax_170.w
                                                                            result = sub_44d0fb(arg1, &var_1c, 
                                                                                &var_20, esi_15)
                                                                            
                                                                            if (result s< 0)
                                                                                goto label_4582fb
                                                                            
                                                                            int32_t eax_173
                                                                            
                                                                            if (*(*(arg1[0x2c] + (edi_12[5] << 2))
                                                                                    + 0x40) != 0)
                                                                                eax_173 = *(arg1[0xe] + 0x10)
                                                                            else
                                                                                eax_173 = arg1[8]
                                                                            
                                                                            arg2 += 1
                                                                            edi_12[3] =
                                                                                sub_443c0f(eax_173, &var_8, &var_18)
                                                                            edi_12 = edi_12[0xf]
                                                                            continue
                                                                    
                                                                    var_2c += 1
                                                                    var_24 += 0x38
                                                                    
                                                                    if (var_2c u< *(var_28 + 0x34))
                                                                        break
                                                                    
                                                                    goto label_457cf8
                                                    
                                                    if (zx.d(arg2.w) != arg1[0x2a])
                                                    label_45809b_1:
                                                        result = 0x80004005
                                                    else
                                                        int32_t* edi_13 = arg5
                                                        arg2 = *edi_13
                                                        
                                                        if (arg2 + 1 u<= (*(*arg4 + 0x10))(arg4))
                                                            arg2 = *edi_13
                                                            arg5 =
                                                                *((*(*arg4 + 0xc))(arg4) + (arg2 << 2))
                                                        
                                                        *edi_13 = arg2 + 1
                                                        arg2 += 1
                                                        
                                                        if (arg2 + 1 u<= (*(*arg4 + 0x10))(arg4))
                                                            arg2 = *edi_13
                                                            var_24 =
                                                                *((*(*arg4 + 0xc))(arg4) + (arg2 << 2))
                                                        
                                                        *edi_13 = arg2 + 1
                                                        
                                                        if ((*(*arg4 + 0x10))(arg4) u< *edi_13)
                                                        label_45809b_2:
                                                            result = 0x80004005
                                                        else
                                                            result = nullptr
                                                            arg3 = nullptr
                                                            
                                                            if (arg5 u> 0)
                                                                do
                                                                    result = sub_443608(arg1, arg4, edi_13)
                                                                    
                                                                    if (result s< 0)
                                                                        goto label_4582fb
                                                                    
                                                                    arg3 += 1
                                                                while (arg3 u< arg5)
                                                            
                                                            arg3 = nullptr
                                                            
                                                            if (var_24 u> 0)
                                                                do
                                                                    arg2 = *edi_13
                                                                    
                                                                    if (arg2 + 1
                                                                            u<= (*(*arg4 + 0x10))(arg4))
                                                                        arg2 = *edi_13
                                                                        var_20 =
                                                                            *((*(*arg4 + 0xc))(arg4) + (arg2 << 2))
                                                                    
                                                                    *edi_13 = arg2 + 1
                                                                    arg2 += 1
                                                                    
                                                                    if (arg2 + 1
                                                                            u<= (*(*arg4 + 0x10))(arg4))
                                                                        arg2 = *edi_13
                                                                        var_30 =
                                                                            *((*(*arg4 + 0xc))(arg4) + (arg2 << 2))
                                                                    
                                                                    *edi_13 = arg2 + 1
                                                                    arg2 += 1
                                                                    
                                                                    if (arg2 + 1
                                                                            u<= (*(*arg4 + 0x10))(arg4))
                                                                        arg2 = *edi_13
                                                                        var_28 =
                                                                            *((*(*arg4 + 0xc))(arg4) + (arg2 << 2))
                                                                    
                                                                    *edi_13 = arg2 + 1
                                                                    arg2 += 1
                                                                    
                                                                    if (arg2 + 1
                                                                            u<= (*(*arg4 + 0x10))(arg4))
                                                                        arg2 = *edi_13
                                                                        arg5 =
                                                                            *((*(*arg4 + 0xc))(arg4) + (arg2 << 2))
                                                                    
                                                                    *edi_13 = arg2 + 1
                                                                    arg2 += 1
                                                                    
                                                                    if (arg2 + 1
                                                                            u<= (*(*arg4 + 0x10))(arg4))
                                                                        arg2 = *edi_13
                                                                        var_2c =
                                                                            *((*(*arg4 + 0xc))(arg4) + (arg2 << 2))
                                                                    
                                                                    *edi_13 = arg2 + 1
                                                                    
                                                                    if ((*(*arg4 + 0x10))(arg4) u< *edi_13)
                                                                        goto label_45809b_2
                                                                    
                                                                    int32_t eax_241 = var_20
                                                                    int32_t* ecx_137
                                                                    
                                                                    if (eax_241 != 0xffffffff)
                                                                        if (arg1[0x28] u<= eax_241)
                                                                            goto label_45809b_2
                                                                        
                                                                        void* eax_248 =
                                                                            eax_241 * 0xb4 + arg1[0x29]
                                                                        
                                                                        if (*(eax_248 + 0x34) u<= var_30)
                                                                            goto label_45809b_2
                                                                        
                                                                        if (var_28 != 0xffffffff)
                                                                            goto label_45809b_2
                                                                        
                                                                        ecx_137 = zx.d(*(*(eax_248 + 0x38)
                                                                            + var_30 * 0x38 + 0x34))
                                                                    else
                                                                        if (arg1[0x26] u<= var_30)
                                                                            goto label_45809b_2
                                                                        
                                                                        void* eax_245 =
                                                                            var_30 * 0x50 + arg1[0x27]
                                                                        
                                                                        if (zx.d(*(eax_245 + 0x46)) u<= var_28)
                                                                            goto label_45809b_2
                                                                        
                                                                        ecx_137 =
                                                                            var_28 + zx.d(*(eax_245 + 0x44))
                                                                    
                                                                    int32_t eax_250 = arg1[0xb]
                                                                    
                                                                    if (
                                                                            zx.d(*(ecx_137 * 0x64 + eax_250 + 0x36))
                                                                            u<= arg5)
                                                                        goto label_45809b_2
                                                                    
                                                                    int32_t eax_254 = *(zx.d(*(
                                                                        *(ecx_137 * 0x64 + eax_250 + 4)
                                                                        + arg5 * 0x64 + 0x52)) * 0x1c
                                                                        + 0xac1bb4)
                                                                    
                                                                    if (eax_254 == 5 || eax_254 == 0xa)
                                                                        if (var_2c != 1)
                                                                            result = 0x80004005
                                                                        else
                                                                            result = sub_454039(arg1, ecx_137, 
                                                                                arg5, arg4, edi_13)
                                                                    else if (eax_254 s<= 0xe
                                                                            || eax_254 s> 0x10)
                                                                        result = sub_449684(arg1, ecx_137, 
                                                                            arg5, arg4, edi_13)
                                                                    else
                                                                        int32_t var_48_15 = arg5
                                                                        
                                                                        if (var_2c == 0)
                                                                            result = sub_44ce7d(arg1, ecx_137, 
                                                                                var_48_15, arg4, edi_13)
                                                                        else if (var_2c != 1)
                                                                            result = sub_454300(arg1, ecx_137, 
                                                                                var_48_15, arg4, edi_13)
                                                                        else
                                                                            result = sub_454039(arg1, ecx_137, 
                                                                                var_48_15, arg4, edi_13)
                                                                    
                                                                    if (result s< 0)
                                                                        goto label_4582fb
                                                                    
                                                                    arg3 += 1
                                                                while (arg3 u< var_24)
                                                            
                                                            uint32_t i_3 = 0
                                                            
                                                            if (arg1[0xe] != 0)
                                                                int32_t esi_17 = 0
                                                                
                                                                if (arg1[0x26] u> 0)
                                                                    do
                                                                        int32_t* ecx_147 =
                                                                            i_3 * 0x50 + arg1[0x27]
                                                                        
                                                                        if ((*(*(arg1[0x2c] + (ecx_147[5] << 2))
                                                                                + 0x28) & 1) != 0)
                                                                            result =
                                                                                sub_42a108(arg1[0xe], arg1, ecx_147)
                                                                            
                                                                            if (result s< 0)
                                                                                goto label_4582fb
                                                                        
                                                                        esi_17 += 1
                                                                        i_3 = zx.d(esi_17.w)
                                                                    while (i_3 u< arg1[0x26])
                                                            
                                                            arg4 = nullptr
                                                            
                                                            if (arg1[0xc].w u> 0)
                                                                int32_t* eax_256
                                                                
                                                                do
                                                                    int32_t* esi_20 =
                                                                        zx.d(arg4.w) * 0x64 + arg1[0xb]
                                                                    result = sub_44330f(esi_20)
                                                                    
                                                                    if (result s< 0)
                                                                        goto label_4582fb
                                                                    
                                                                    int32_t ecx_150 = esi_20[3]
                                                                    __builtin_memset(
                                                                        __builtin_memset(*esi_20, 0, 
                                                                            ecx_150 u>> 2 << 2), 
                                                                        0, ecx_150 & 3)
                                                                    arg2 = nullptr
                                                                    arg3 = esi_20[5] + *esi_20
                                                                    arg5 = nullptr
                                                                    
                                                                    if (*(esi_20 + 0x36) u> 0)
                                                                        do
                                                                            eax_256 =
                                                                                zx.d(arg5.w) * 0x64 + esi_20[1]
                                                                            int32_t ecx_155 = eax_256[7] << 2
                                                                            void* edx_38 = *(ecx_155 + arg1[0x2c])
                                                                            int32_t edi_17
                                                                            
                                                                            if (*(edx_38 + 0x40) != 0)
                                                                                edi_17 = *(arg1[0xe] + 0x10)
                                                                            else
                                                                                edi_17 = arg1[8]
                                                                            
                                                                            eax_256[2] =
                                                                                *(edx_38 + 0x30) + eax_256[9] + edi_17
                                                                            void* ecx_156 = *(ecx_155 + arg1[0x2c])
                                                                            int32_t edx_43
                                                                            
                                                                            if (*(ecx_156 + 0x40) != 0)
                                                                                edx_43 = *(arg1[0xe] + 0x10)
                                                                            else
                                                                                edx_43 = arg1[8]
                                                                            
                                                                            eax_256[3] =
                                                                                *(ecx_156 + 0x2c) + eax_256[8] + edx_43
                                                                            int32_t ecx_162 = *(
                                                                                zx.d(*(eax_256 + 0x52)) * 0x1c
                                                                                + 0xac1bc4)
                                                                            
                                                                            if (ecx_162 == 0xe000000
                                                                                    || ecx_162 == 0xf000000)
                                                                                uint32_t ecx_163 = zx.d(arg2.w)
                                                                                edi_17.w = arg5.w
                                                                                arg2 += 1
                                                                                *(arg3 + (ecx_163 << 1)) = edi_17.w
                                                                                int32_t edx_46 = eax_256[7]
                                                                                int16_t* ecx_165 =
                                                                                    eax_256[0x12] + *esi_20
                                                                                
                                                                                if (edx_46 != 0)
                                                                                    void* edx_53
                                                                                    edx_53.w =
                                                                                        *(*(arg1[0x2c] + (edx_46 << 2)) + 0x44)
                                                                                    edx_53.w += 1
                                                                                    *ecx_165 = edx_53.w
                                                                                    ecx_165[1] = (eax_256[9] u>> 2).w
                                                                                else
                                                                                    int32_t* edx_47 = arg1[0x2c]
                                                                                    void* edi_19 = *edx_47
                                                                                    int32_t eax_259
                                                                                    
                                                                                    if (*(edi_19 + 0x40) != 0)
                                                                                        void* edx_49 = *edx_47
                                                                                        eax_259 = *(*(*(edx_49 + 0x40) + 8) + (
                                                                                            *(*(edx_49 + 0x30) + eax_256[9]
                                                                                            + *(arg1[0xe] + 0x10)) << 2))
                                                                                    else
                                                                                        eax_259 = *(*(edi_19 + 0x30)
                                                                                            + eax_256[9] + arg1[8])
                                                                                    
                                                                                    eax_256.w =
                                                                                        *(arg1[6] + eax_259 * 0x18 + 0x10)
                                                                                    eax_256.w += 1
                                                                                    ecx_165[1] = 0
                                                                                    *ecx_165 = eax_256.w
                                                                            
                                                                            arg5 += 1
                                                                            eax_256.w = arg5.w
                                                                        while (eax_256.w u< *(esi_20 + 0x36))
                                                                    
                                                                    arg4 += 1
                                                                    eax_256.w = arg4.w
                                                                while (eax_256.w u< arg1[0xc].w)
                                                            
                                                            arg1[0x11].w = 0xffff
                                                            arg1[0x10].w = 0xffff
                                                            arg1[0x46] |= 0x40
                                                            int32_t esi_21 = 0
                                                            bool cond:25_1 = arg1[0x26] u<= 0
                                                            arg1[0xf] = 0
                                                            *(arg1 + 0x42) = 0
                                                            
                                                            if (not(cond:25_1))
                                                                uint32_t i_4 = 0
                                                                
                                                                do
                                                                    int32_t* ecx_168 =
                                                                        i_4 * 0x50 + arg1[0x27]
                                                                    int32_t edx_56 = *ecx_168[1]
                                                                    
                                                                    if (edx_56 s< 0xa || edx_56 s> 0xe)
                                                                        result = sub_4426f0(arg1, ecx_168)
                                                                        
                                                                        if (result s< 0)
                                                                            goto label_4582fb
                                                                    
                                                                    esi_21 += 1
                                                                    i_4 = zx.d(esi_21.w)
                                                                while (i_4 u< arg1[0x26])
                                                            
                                                            arg3 = nullptr
                                                            
                                                            if (arg1[0x2a] u> 0)
                                                                uint32_t i_5 = 0
                                                                
                                                                do
                                                                    int32_t esi_22 = arg1[0x2c]
                                                                    void** ecx_170 = *(esi_22 + (i_5 << 2))
                                                                    int32_t edx_58 = ecx_170[5] << 2
                                                                    void* esi_23 = *(edx_58 + esi_22)
                                                                    int32_t* edi_27
                                                                    
                                                                    if (*(esi_23 + 0x40) != 0)
                                                                        edi_27 = *(arg1[0xe] + 0x10)
                                                                    else
                                                                        edi_27 = arg1[8]
                                                                    
                                                                    *ecx_170 =
                                                                        ecx_170[7] + *(esi_23 + 0x30) + edi_27
                                                                    void* edx_59 = *(edx_58 + arg1[0x2c])
                                                                    int32_t* esi_25
                                                                    
                                                                    if (*(edx_59 + 0x40) != 0)
                                                                        esi_25 = *(arg1[0xe] + 0x10)
                                                                    else
                                                                        esi_25 = arg1[8]
                                                                    
                                                                    void* esi_29 =
                                                                        ecx_170[6] + *(edx_59 + 0x2c) + esi_25
                                                                    
                                                                    while (true)
                                                                        ecx_170[1] = esi_29
                                                                        ecx_170 = ecx_170[9]
                                                                        
                                                                        if (ecx_170 == 0)
                                                                            break
                                                                        
                                                                        int32_t edx_61 = ecx_170[5] << 2
                                                                        void* esi_31 = *(edx_61 + arg1[0x2c])
                                                                        int32_t* edi_32
                                                                        
                                                                        if (*(esi_31 + 0x40) != 0)
                                                                            edi_32 = *(arg1[0xe] + 0x10)
                                                                        else
                                                                            edi_32 = arg1[8]
                                                                        
                                                                        *ecx_170 =
                                                                            ecx_170[7] + *(esi_31 + 0x30) + edi_32
                                                                        void* edx_62 = *(edx_61 + arg1[0x2c])
                                                                        int32_t* esi_33
                                                                        
                                                                        if (*(edx_62 + 0x40) != 0)
                                                                            esi_33 = *(arg1[0xe] + 0x10)
                                                                        else
                                                                            esi_33 = arg1[8]
                                                                        
                                                                        esi_29 =
                                                                            ecx_170[6] + *(edx_62 + 0x2c) + esi_33
                                                                    
                                                                    arg3 += 1
                                                                    i_5 = zx.d(arg3.w)
                                                                while (i_5 u< arg1[0x2a])
    else
        result = 0x8007000e

label_4582fb:
arg1[0x2b] = arg1[0x2a]
return result

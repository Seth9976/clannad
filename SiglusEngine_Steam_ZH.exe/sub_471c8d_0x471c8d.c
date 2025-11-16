// 函数: sub_471c8d
// 地址: 0x471c8d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t var_48 = ebx[0xb]
int32_t eax_1 = ebx[0xc]
int32_t eax_2 = ebx[0xd]
int32_t eax_3 = ebx[0xf]
int32_t eax_4 = ebx[0x10]
int32_t var_10 = 0
void* var_1c = nullptr
int32_t* var_20 = nullptr
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_3c = 0
int32_t var_44 = 0
int32_t var_40 = 0
double var_78
int32_t i_8

if (sub_46cffa(arg1, i_8, &var_78) s< 0)
label_471d48:
    
    if (sub_4717ca(ebx, nullptr, &i_8, 1) s>= 0)
        int32_t var_34 = 0xffffffff
        void* ecx_2 = ebx[2]
        int32_t i_6 = i_8
        void* eax_9 = *(*(ecx_2 + 0x14) + (i_6 << 2))
        int32_t eax_10 = *(eax_9 + 0x48)
        int32_t var_30
        int32_t var_28_2
        void* var_24
        int32_t var_18
        
        if (eax_10 == 0xffffffff)
        label_471ed0:
            int32_t var_38
            
            if ((*eax_9 & 1) == 0)
                int32_t var_54 = 0xffffffff
                var_38 = 0xffffffff
                var_18 = 0xffffffff
                var_30 = 0xffffffff
                
                if (sub_471474(ebx, eax_9, arg3, &var_54, &var_38, &i_8, 1) s>= 0 &&
                        sub_46ea58(ebx, arg3, 0x20200001, &var_18, &var_38, &var_54, 0x17, arg2.b) s>= 0
                        && sub_46ea58(ebx, arg3, 0x20300001, &var_30, &var_38, &var_54, 0x17)
                        s>= 0)
                    var_28_2 = 1
                label_472012:
                    var_24 = nullptr
                label_472024:
                    
                    if (sub_4717ca(ebx, nullptr, &var_18, 1) s>= 0)
                        void* eax_28 = ebx[2]
                        int32_t* esi_6 =
                            *(*(eax_28 + 0x10) + (*(*(*(eax_28 + 0x14) + (var_18 << 2)) + 4) << 2))
                        int32_t var_2c_3 = 0
                        int32_t var_14_2 = 1
                        void* eax_34
                        
                        if ((esi_6[1] & 0x800) == 0)
                        label_4720d4:
                            eax_34 = ebx[2]
                            
                            if (*(eax_34 + 0x58) != 0 || (*(eax_34 + 0x54) != 0 && var_24 != 0))
                            label_4720f5:
                                var_2c_3 = 1
                                var_14_2 = 1
                            else if (*(eax_34 + 0x34) != 0 && ebx[0xc] == 0xffffffff)
                                goto label_4720f5
                        else
                            bool cond:5_1 = _strchr(*esi_6, 0x62) != 0
                            bool cond:6_1
                            
                            if (not(cond:5_1))
                                cond:6_1 = _strchr(*esi_6, 0x42) == 0
                            
                            if (not(cond:5_1) && cond:6_1)
                                if ((esi_6[1] & 0x800) == 0)
                                    goto label_4720d4
                                
                                bool cond:7_1 = _strchr(*esi_6, 0x63) != 0
                                bool cond:9_1
                                
                                if (not(cond:7_1))
                                    cond:9_1 = _strchr(*esi_6, 0x43) == 0
                                
                                if (not(cond:7_1) && cond:9_1)
                                    goto label_4720d4
                                
                                eax_34 = ebx[2]
                                
                                if (*(eax_34 + 0x58) != 0)
                                    var_14_2 = 1
                                    var_2c_3 = 1
                                else if (*(eax_34 + 0x34) != 0 && ebx[0xc] == 0xffffffff)
                                    var_14_2 = 1
                                    var_2c_3 = 1
                                
                                var_24 = nullptr
                            else
                                eax_34 = ebx[2]
                                
                                if (*(eax_34 + 0x54) != 0 && var_24 != 0)
                                    var_2c_3 = 1
                                    var_14_2 = 0
                        
                        if (*(eax_34 + 0x34) != 0)
                        label_472127:
                            
                            if (var_14_2 != 0 && (*(ebx + 0x15) & 2) != 0)
                                var_2c_3 = 0
                        else if (var_14_2 != 0)
                            if (var_2c_3 != 0)
                                if (var_24 == 0)
                                    if (ebx[0x10] u>= *(eax_34 + 0x58))
                                        var_2c_3 = 0
                                else if (ebx[0xf] u>= *(eax_34 + 0x54))
                                    var_2c_3 = 0
                            
                            goto label_472127
                        
                        if (var_2c_3 != 0 && (*(ebx + 0x15) & 4) != 0)
                            var_14_2 = 0
                        
                        void* i_11 = *(ebx[1] + 0x18)
                        int32_t var_c_1 = 0
                        int32_t eax_37 = sub_745f3f(i_11 << 2)
                        var_10 = eax_37
                        
                        if (eax_37 != 0)
                            void* eax_40 = sub_745f3f(i_11 << 2)
                            var_1c = eax_40
                            
                            if (eax_40 != 0)
                                int32_t* eax_43 = sub_745f3f(i_11 << 2)
                                var_20 = eax_43
                                
                                if (eax_43 != 0)
                                    int32_t ecx_36 = i_11 << 2
                                    int32_t esi_8
                                    int32_t edi_5
                                    edi_5, esi_8 =
                                        __builtin_memcpy(var_10, ebx[6], ecx_36 u>> 2 << 2)
                                    __builtin_memcpy(edi_5, esi_8, ecx_36 & 3)
                                    
                                    if (var_2c_3 == 0)
                                    label_472478:
                                        
                                        if (var_14_2 == 0)
                                        label_4726a9:
                                            
                                            if (var_c_1 == 0)
                                            label_47290f:
                                                int32_t eax_125
                                                
                                                if (var_44 == 0 || var_40 == 0)
                                                    eax_125 = 0
                                                else
                                                    eax_125 = 1
                                                
                                                ebx[0x15] = eax_125
                                                int32_t eax_126
                                                
                                                if ((var_58 == 0 || (var_3c == 0 && var_40 == 0))
                                                        && (var_3c == 0
                                                        || (var_58 == 0 && var_44 == 0)))
                                                    eax_126 = 0
                                                else
                                                    eax_126 = 1
                                                
                                                ebx[0x14] = eax_126
                                                
                                                if (var_58 == 0)
                                                label_472952:
                                                    
                                                    if (var_3c != 0)
                                                        goto label_472957
                                                else if (var_3c != 0)
                                                label_472957:
                                                    
                                                    if (var_58 == 0 && var_44 == 0)
                                                        sub_46e3d1(ebx, arg3, 0xdac, 
                                                            "asymetric returns from if statements not "
                                                        "yet implemented")
                                                else
                                                    if (var_40 != 0)
                                                        goto label_472952
                                                    
                                                    sub_46e3d1(ebx, arg3, 0xdac, 
                                                        "asymetric returns from if statements not yet 
                                                            implemented")
                                            else
                                                int32_t edi_38 = var_c_1
                                                int32_t edx_25 = sub_745f3f(edi_38 * 0x18)
                                                var_5c = edx_25
                                                
                                                if (edx_25 != 0)
                                                    int32_t* var_80
                                                    
                                                    for (int32_t i = 0; i u< 6; )
                                                        (&var_80)[i] = edx_25
                                                        i += 1
                                                        edx_25 += edi_38 << 2
                                                    
                                                    int32_t* var_7c
                                                    int32_t* eax_107 = var_7c
                                                    
                                                    if (i_11 u> 0)
                                                        int32_t* esi_36 = var_20
                                                        void* ecx_136 = var_80 - eax_107
                                                        void* ecx_138 = var_1c - esi_36
                                                        void* edx_27 = var_78.d - eax_107
                                                        void* var_68_1 = ecx_138
                                                        arg5 = i_11
                                                        void* i_1
                                                        
                                                        do
                                                            void* edx_29 = ecx_138 + esi_36
                                                            var_24 = edx_29
                                                            
                                                            if (*edx_29 != *esi_36)
                                                                int32_t ecx_139 = var_18
                                                                
                                                                if (var_28_2 == 0)
                                                                    ecx_139 = var_30
                                                                
                                                                *(ecx_136 + eax_107) = ecx_139
                                                                int32_t ecx_141 = *var_24
                                                                void* edx_32
                                                                
                                                                if (ecx_141 != 0xffffffff)
                                                                    edx_32 = ebx[2]
                                                                
                                                                if (ecx_141 == 0xffffffff
                                                                        || *(edx_32 + 0x74) == *(
                                                                        *(*(edx_32 + 0x14) + (ecx_141 << 2))
                                                                        + 4))
                                                                    ecx_141 = ebx[9]
                                                                
                                                                *eax_107 = ecx_141
                                                                int32_t ecx_142 = *esi_36
                                                                void* edx_34
                                                                
                                                                if (ecx_142 != 0xffffffff)
                                                                    edx_34 = ebx[2]
                                                                
                                                                if (ecx_142 == 0xffffffff
                                                                        || *(edx_34 + 0x74) == *(
                                                                        *(*(edx_34 + 0x14) + (ecx_142 << 2))
                                                                        + 4))
                                                                    ecx_142 = ebx[9]
                                                                
                                                                edi_38 = var_c_1
                                                                *(edx_27 + eax_107) = ecx_142
                                                                ecx_138 = var_68_1
                                                                eax_107 = &eax_107[1]
                                                            
                                                            esi_36 = &esi_36[1]
                                                            i_1 = arg5
                                                            arg5 -= 1
                                                        while (i_1 != 1)
                                                    
                                                    int32_t eax_108
                                                    
                                                    if (var_14_2 == 0)
                                                        void* edi_44 = var_c_1 & 0xfffff
                                                        arg4:3.b = edi_44:3.b | 0x10
                                                        ebx[0xc] = var_34
                                                        ebx[0xd] = var_28_2
                                                        
                                                        if (sub_46ea58(ebx, arg3, arg4, var_7c, 
                                                                var_7c, nullptr, 0, arg2.b) s>= 0)
                                                            int32_t ecx_144 = 0
                                                            
                                                            if (var_c_1 u> 0)
                                                                do
                                                                    void* eax_112 = ebx[2]
                                                                    void* edx_39 = *(*(eax_112 + 0x14)
                                                                        + (var_7c[ecx_144] << 2))
                                                                    ecx_144 += 1
                                                                    *(edx_39 + 4) = *(eax_112 + 0x98)
                                                                while (ecx_144 u< var_c_1)
                                                            
                                                            ebx[0xc] = var_34
                                                            int32_t* var_98_14 = var_78.d
                                                            int32_t ecx_145
                                                            ecx_145.b = var_28_2 == 0
                                                            int32_t var_9c_14 = var_78.d
                                                            ebx[0xd] = ecx_145
                                                            
                                                            if (sub_46ea58(ebx, arg3, arg4, 
                                                                    var_9c_14, var_98_14, nullptr, 0) s>= 0)
                                                                int32_t ecx_147 = 0
                                                                
                                                                if (var_c_1 u> 0)
                                                                    do
                                                                        void* eax_116 = ebx[2]
                                                                        void* edx_42 = *(*(eax_116 + 0x14)
                                                                            + (*(var_78.d + (ecx_147 << 2)) << 2))
                                                                        ecx_147 += 1
                                                                        *(edx_42 + 4) = *(eax_116 + 0x98)
                                                                    while (ecx_147 u< var_c_1)
                                                                
                                                                ebx[0xc] = eax_1
                                                                int32_t var_94_22 = var_78:4.d
                                                                ebx[0xd] = eax_2
                                                                sub_46cc96(var_94_22, var_c_1)
                                                                eax_108 = sub_46ea58(ebx, arg3, 
                                                                    edi_44 | 0x20700000, var_78:4.d, 
                                                                    var_7c, var_78.d, 0)
                                                                goto label_47289b
                                                    else
                                                        eax_108 = sub_470b6a(ebx, edi_38, arg3, 
                                                            var_78:4.d, var_78.d, var_7c, var_80, 
                                                            edi_38)
                                                    label_47289b:
                                                        
                                                        if (eax_108 s>= 0)
                                                            void* ecx_150 = nullptr
                                                            arg4 = nullptr
                                                            
                                                            if (i_11 u> 0)
                                                                void* edx_44 = var_20 - var_1c
                                                                int32_t* edi_46 = var_78:4.d
                                                                void* var_2c_7 = edx_44
                                                                
                                                                do
                                                                    void* eax_121 = var_1c + (ecx_150 << 2)
                                                                    
                                                                    if (*eax_121 != *(eax_121 + edx_44))
                                                                        int32_t eax_123 = *(ebx[2] + 0x14)
                                                                        void* esi_40 =
                                                                            *(eax_123 + (*edi_46 << 2))
                                                                        int32_t ecx_151 =
                                                                            *(ebx[6] + (ecx_150 << 2))
                                                                        
                                                                        if (ecx_151 != 0xffffffff)
                                                                            sub_49f12c(esi_40, 
                                                                                *(eax_123 + (ecx_151 << 2)))
                                                                        
                                                                        *(ebx[6] + (arg4 << 2)) = *edi_46
                                                                        ecx_150 = arg4
                                                                        edx_44 = var_2c_7
                                                                        *(esi_40 + 0x30) = ecx_150
                                                                        edi_46 = &edi_46[1]
                                                                    
                                                                    ecx_150 += 1
                                                                    arg4 = ecx_150
                                                                while (ecx_150 u< i_11)
                                                            
                                                            goto label_47290f
                                        else if (arg4 == 0)
                                            int32_t ecx_104 = i_11 << 2
                                            int32_t esi_28
                                            int32_t edi_30
                                            edi_30, esi_28 =
                                                __builtin_memcpy(var_1c, var_10, ecx_104 u>> 2 << 2)
                                            __builtin_memcpy(edi_30, esi_28, ecx_104 & 3)
                                        label_472550:
                                            
                                            if (arg5 == 0)
                                                int32_t ecx_121 = i_11 << 2
                                                int32_t esi_34
                                                int32_t edi_36
                                                edi_36, esi_34 = __builtin_memcpy(var_20, var_10, 
                                                    ecx_121 u>> 2 << 2)
                                                __builtin_memcpy(edi_36, esi_34, ecx_121 & 3)
                                            label_472623:
                                                var_c_1 = 0
                                                arg4 = nullptr
                                                
                                                if (i_11 u<= 0)
                                                    goto label_47290f
                                                
                                                void* ecx_125 = var_1c
                                                void* edx_20 = var_20 - ecx_125
                                                arg5 = ecx_125
                                                void* var_2c_5 = edx_20
                                                
                                                while (true)
                                                    int32_t eax_100 = *ecx_125
                                                    void* ecx_126 = ecx_125 + edx_20
                                                    var_24 = ecx_126
                                                    int32_t ecx_127 = *ecx_126
                                                    
                                                    if (eax_100 != ecx_127)
                                                        int32_t edx_22
                                                        int32_t esi_35
                                                        
                                                        if (eax_100 != 0xffffffff)
                                                            void* edx_21 = ebx[2]
                                                            esi_35 = *(edx_21 + 0x14)
                                                            edx_22 = *(edx_21 + 0x74)
                                                        
                                                        if (eax_100 == 0xffffffff || edx_22
                                                                == *(*(esi_35 + (eax_100 << 2)) + 4))
                                                            *arg5 = ecx_127
                                                            *(ebx[6] + (arg4 << 2)) = ecx_127
                                                        else if (ecx_127 == 0xffffffff || edx_22
                                                                == *(*(esi_35 + (ecx_127 << 2)) + 4))
                                                            *var_24 = eax_100
                                                            *(ebx[6] + (arg4 << 2)) = eax_100
                                                        else
                                                            var_c_1 += 1
                                                    
                                                    arg4 += 1
                                                    ecx_125 = arg5 + 4
                                                    arg5 = ecx_125
                                                    
                                                    if (arg4 u>= i_11)
                                                        break
                                                    
                                                    edx_20 = var_2c_5
                                                
                                                goto label_4726a9
                                            
                                            sub_46cc96(&ebx[0xb], 1)
                                            int32_t* eax_91 = &var_30
                                            
                                            if (var_28_2 == 0)
                                                eax_91 = &var_18
                                            
                                            if (sub_46ea58(ebx, arg3, 0x20500001, &ebx[0xb], 
                                                    &var_48, eax_91, 0x17, arg2.b) s>= 0
                                                    && sub_47ad82(ebx, arg5, var_10) s>= 0)
                                                int32_t eax_96 = i_11 << 2
                                                int32_t esi_30
                                                int32_t edi_32
                                                edi_32, esi_30 = __builtin_memcpy(var_20, ebx[6], 
                                                    eax_96 u>> 2 << 2)
                                                __builtin_memcpy(edi_32, esi_30, eax_96 & 3)
                                                int32_t esi_32
                                                int32_t edi_34
                                                edi_34, esi_32 = __builtin_memcpy(ebx[6], var_10, 
                                                    eax_96 u>> 2 << 2)
                                                __builtin_memcpy(edi_34, esi_32, eax_96 & 3)
                                                int32_t ecx_119 = ebx[0x15]
                                                ebx[0xb] = var_48
                                                var_3c = ebx[0x14]
                                                ebx[0x14] = 0
                                                var_40 = ecx_119
                                                ebx[0x15] = 0
                                                goto label_472623
                                        else
                                            sub_46cc96(&ebx[0xb], 1)
                                            int32_t* eax_80 = &var_18
                                            
                                            if (var_28_2 == 0)
                                                eax_80 = &var_30
                                            
                                            if (sub_46ea58(ebx, arg3, 0x20500001, &ebx[0xb], 
                                                    &var_48, eax_80, 0x17, arg2.b) s>= 0
                                                    && sub_47ad82(ebx, arg4, var_10) s>= 0)
                                                int32_t eax_85 = i_11 << 2
                                                int32_t esi_24
                                                int32_t edi_26
                                                edi_26, esi_24 = __builtin_memcpy(var_1c, ebx[6], 
                                                    eax_85 u>> 2 << 2)
                                                __builtin_memcpy(edi_26, esi_24, eax_85 & 3)
                                                int32_t esi_26
                                                int32_t edi_28
                                                edi_28, esi_26 = __builtin_memcpy(ebx[6], var_10, 
                                                    eax_85 u>> 2 << 2)
                                                __builtin_memcpy(edi_28, esi_26, eax_85 & 3)
                                                ebx[0xb] = var_48
                                                int32_t eax_87 = ebx[0x14]
                                                ebx[0x14] = 0
                                                var_58 = eax_87
                                                int32_t eax_88 = ebx[0x15]
                                                ebx[0x15] = 0
                                                var_44 = eax_88
                                                goto label_472550
                                    else
                                        void* eax_45 = ebx[2]
                                        int32_t i_12 = *(eax_45 + 0xc)
                                        
                                        if (*(eax_45 + 0x34) == 0)
                                            if (var_24 == 0)
                                                ebx[0x10] += 1
                                            else
                                                ebx[0xf] += 1
                                        
                                        var_34 = 0xffffffff
                                        
                                        if (sub_46ea58(ebx, arg3, 0x10f00001, &var_34, &var_18, 
                                                nullptr, 0, arg2.b) s>= 0)
                                            void* eax_47 = ebx[2]
                                            int32_t ecx_41
                                            
                                            if (*(eax_47 + 0x34) == 0)
                                                ecx_41 = *(eax_47 + 0xa0)
                                            else
                                                ecx_41 = *(eax_47 + 0x90)
                                            
                                            *(*(*(eax_47 + 0x14) + (var_34 << 2)) + 4) = ecx_41
                                            
                                            if (arg4 == 0)
                                                int32_t ecx_52 = i_11 << 2
                                                int32_t esi_14
                                                int32_t edi_11
                                                edi_11, esi_14 = __builtin_memcpy(var_1c, var_10, 
                                                    ecx_52 u>> 2 << 2)
                                                __builtin_memcpy(edi_11, esi_14, ecx_52 & 3)
                                            label_4722b5:
                                                
                                                if (arg5 == 0)
                                                    int32_t ecx_66 = i_11 << 2
                                                    int32_t esi_20
                                                    int32_t edi_17
                                                    edi_17, esi_20 = __builtin_memcpy(var_20, 
                                                        var_10, ecx_66 u>> 2 << 2)
                                                    __builtin_memcpy(edi_17, esi_20, ecx_66 & 3)
                                                label_47234f:
                                                    void* i_10 = i_11
                                                    var_c_1 = 0
                                                    
                                                    if (i_10 u> 0)
                                                        void* eax_70 = var_1c
                                                        int32_t* ecx_71 = var_20 - eax_70
                                                        void* i_2
                                                        
                                                        do
                                                            if (*eax_70 != *(ecx_71 + eax_70))
                                                                var_c_1 += 1
                                                            
                                                            eax_70 += 4
                                                            i_2 = i_10
                                                            i_10 -= 1
                                                        while (i_2 != 1)
                                                    
                                                    ebx[0xf] = eax_3
                                                    ebx[0x10] = eax_4
                                                    int32_t i_9
                                                    
                                                    if (var_14_2 == 0)
                                                        i_9 = i_12
                                                    label_4723e7:
                                                        
                                                        if (var_24 == 0)
                                                            int32_t i_3 = i_9
                                                            
                                                            if (i_9 u< *(ebx[2] + 0xc))
                                                                do
                                                                    if (sub_49eb7a(
                                                                            *(*(ebx[2] + 0x18) + (i_3 << 2))) != 0)
                                                                        var_14_2 = 1
                                                                        break
                                                                    
                                                                    i_3 += 1
                                                                while (i_3 u< *(ebx[2] + 0xc))
                                                        
                                                        if (var_14_2 == 0)
                                                            goto label_4726a9
                                                        
                                                        i_9 = i_12
                                                    else
                                                        if (var_c_1 u> 0x10)
                                                            i_9 = i_12
                                                            var_14_2 = 0
                                                        else
                                                            i_9 = i_12
                                                            
                                                            if (*(ebx[2] + 0xc) - i_9 u> 0x20)
                                                                var_14_2 = 0
                                                        
                                                        if (var_14_2 == 0)
                                                            goto label_4723e7
                                                        
                                                        void* ecx_74 = ebx[2]
                                                        int32_t i_4 = i_9
                                                        
                                                        if (i_9 u< *(ecx_74 + 0xc))
                                                            int32_t* ecx_76 =
                                                                *(ecx_74 + 0x18) + (i_9 << 2)
                                                            
                                                            do
                                                                if ((**ecx_76 & 0xf0000000)
                                                                        == 0x60000000)
                                                                    var_14_2 = 0
                                                                    break
                                                                
                                                                i_4 += 1
                                                                ecx_76 = &ecx_76[1]
                                                            while (i_4 u< *(ebx[2] + 0xc))
                                                        
                                                        if (var_14_2 == 0)
                                                            goto label_4723e7
                                                    
                                                    int32_t i_5 = i_9
                                                    
                                                    if (i_9 u< *(ebx[2] + 0xc))
                                                        do
                                                            void* ecx_82 =
                                                                *(*(ebx[2] + 0x18) + (i_5 << 2))
                                                            
                                                            if (ecx_82 != 0)
                                                                sub_46cb59(ecx_82, 1)
                                                                i_9 = i_12
                                                            
                                                            *(*(ebx[2] + 0x18) + (i_5 << 2)) = 0
                                                            i_5 += 1
                                                        while (i_5 u< *(ebx[2] + 0xc))
                                                    
                                                    *(ebx[2] + 0xc) = i_9
                                                    int32_t ecx_88 = i_11 << 2
                                                    int32_t esi_22
                                                    int32_t edi_24
                                                    edi_24, esi_22 = __builtin_memcpy(ebx[6], 
                                                        var_10, ecx_88 u>> 2 << 2)
                                                    __builtin_memcpy(edi_24, esi_22, ecx_88 & 3)
                                                    goto label_472478
                                                
                                                ebx[0xc] = var_34
                                                int32_t eax_61
                                                eax_61.b = var_28_2 == 0
                                                ebx[0xd] = eax_61
                                                
                                                if (sub_47ad82(ebx, arg5, var_10) s>= 0)
                                                    int32_t eax_64 = i_11 << 2
                                                    int32_t esi_16
                                                    int32_t edi_13
                                                    edi_13, esi_16 = __builtin_memcpy(var_20, 
                                                        ebx[6], eax_64 u>> 2 << 2)
                                                    __builtin_memcpy(edi_13, esi_16, eax_64 & 3)
                                                    int32_t esi_18
                                                    int32_t edi_15
                                                    edi_15, esi_18 = __builtin_memcpy(ebx[6], 
                                                        var_10, eax_64 u>> 2 << 2)
                                                    __builtin_memcpy(edi_15, esi_18, eax_64 & 3)
                                                    ebx[0xc] = eax_1
                                                    ebx[0xd] = eax_2
                                                    int32_t eax_67 = ebx[0x14]
                                                    ebx[0x14] = 0
                                                    var_3c = eax_67
                                                    int32_t eax_68 = ebx[0x15]
                                                    ebx[0x15] = 0
                                                    var_40 = eax_68
                                                    goto label_47234f
                                            else
                                                ebx[0xc] = var_34
                                                ebx[0xd] = var_28_2
                                                
                                                if (sub_47ad82(ebx, arg4, var_10) s>= 0)
                                                    int32_t eax_54 = i_11 << 2
                                                    int32_t esi_10
                                                    int32_t edi_7
                                                    edi_7, esi_10 = __builtin_memcpy(var_1c, 
                                                        ebx[6], eax_54 u>> 2 << 2)
                                                    __builtin_memcpy(edi_7, esi_10, eax_54 & 3)
                                                    int32_t esi_12
                                                    int32_t edi_9
                                                    edi_9, esi_12 = __builtin_memcpy(ebx[6], 
                                                        var_10, eax_54 u>> 2 << 2)
                                                    __builtin_memcpy(edi_9, esi_12, eax_54 & 3)
                                                    ebx[0xc] = eax_1
                                                    ebx[0xd] = eax_2
                                                    int32_t eax_57 = ebx[0x14]
                                                    ebx[0x14] = 0
                                                    var_58 = eax_57
                                                    int32_t eax_58 = ebx[0x15]
                                                    ebx[0x15] = 0
                                                    var_44 = eax_58
                                                    goto label_4722b5
            else
                var_38 = 0xffffffff
                var_18 = 0xffffffff
                var_30 = 0xffffffff
                
                if (sub_46ea58(ebx, arg3, 0x10100001, &var_38, &i_8, nullptr, 0x10, arg2.b) s>= 0
                        && sub_46ea58(ebx, arg3, 0x10000001, &var_18, &i_8, nullptr, 0x17) s>= 0
                        && sub_46ea58(ebx, arg3, 0x20300001, &var_30, &var_38, &i_8, 0x17) s>= 0)
                    int16_t ecx_18 = (*(*(*(ebx[2] + 0x10) + (*(eax_9 + 4) << 2)) + 4)).w
                    var_28_2 = 1
                    
                    if ((ecx_18.b & 0x10) == 0 || (ecx_18:1.b & 2) == 0
                            || *(eax_9 + 8) != 0xffffffff)
                        goto label_472012
                    
                label_471f87:
                    var_24 = 1
                    goto label_472024
        else
            int32_t* eax_11 = *(*(ecx_2 + 0x18) + (eax_10 << 2))
            
            if ((*eax_11 & 0xfff00000) != 0x20300000)
                goto label_471ed0
            
            int32_t edi = eax_11[3]
            int32_t edx_4 = 0
            
            if (edi u> 0)
                int32_t* edi_1 = eax_11[4]
                
                while (*edi_1 != i_6)
                    edx_4 += 1
                    
                    if (edx_4 u>= edi)
                        break
                    
                    edi_1 = &edi_1[1]
            
            int32_t eax_12 = eax_11[2]
            int32_t i_7 = *(eax_12 + (edx_4 << 2))
            void* eax_13 = *(eax_12 + ((edi + edx_4) << 2))
            var_24 = eax_13
            int32_t edx_5 = *(ecx_2 + 0x14)
            int32_t esi_4 = *(*(edx_5 + (i_7 << 2)) + 0x48)
            
            if (esi_4 == 0xffffffff || (**(edx_5 + (eax_13 << 2)) & 1) == 0)
                goto label_471ed0
            
            int32_t* esi_5 = *(*(ecx_2 + 0x18) + (esi_4 << 2))
            
            if ((*esi_5 & 0xfff00000) != 0x10100000)
                goto label_471ed0
            
            int32_t var_2c_2 = 0
            
            if (esi_5[3] u> 0)
                int32_t* ecx_6 = esi_5[4]
                
                while (*ecx_6 != i_7)
                    var_2c_2 += 1
                    ecx_6 = &ecx_6[1]
                    
                    if (var_2c_2 u>= esi_5[3])
                        break
            
            if (*(esi_5[2] + (var_2c_2 << 2)) != eax_13)
                goto label_471ed0
            
            if (sub_4717ca(ebx, nullptr, &var_24, 1) s>= 0)
                var_18 = 0xffffffff
                var_30 = 0xffffffff
                
                if (sub_46ea58(ebx, arg3, 0x10000001, &var_18, &var_24, nullptr, 0x17, arg2.b) s>= 0
                        && sub_46ea58(ebx, arg3, 0x10000001, &var_30, &i_8, nullptr, 0x17) s>= 0)
                    void* eax_17 = ebx[2]
                    void* ecx_12 = *(*(eax_17 + 0x14) + (var_24 << 2))
                    int16_t eax_20 = (*(*(*(eax_17 + 0x10) + (*(ecx_12 + 4) << 2)) + 4)).w
                    var_28_2 = 0
                    
                    if ((eax_20.b & 0x10) != 0 && (eax_20:1.b & 2) != 0
                            && *(ecx_12 + 8) == 0xffffffff)
                        goto label_471f87
                    
                    var_24 = nullptr
                    goto label_472024
else
    long double x87_r7_1 = fconvert.t(0.0)
    long double x87_r6_1 = fconvert.t(var_78)
    x87_r6_1 - x87_r7_1
    int32_t eax_5
    eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax_5:1.b & 0x41) == 0)
    label_471d24:
        int32_t var_90_2 = 0
        sub_47ad82(ebx, arg4, 0)
    else
        double var_70
        long double x87_r6_2 = fconvert.t(var_70)
        x87_r6_2 - x87_r7_1
        eax_5.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            goto label_471d24
        
        long double x87_r5_1 = fconvert.t(var_78)
        x87_r5_1 - x87_r7_1
        eax_5.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_471d48
        
        long double x87_r5_2 = fconvert.t(var_70)
        x87_r5_2 - x87_r7_1
        eax_5.w = (x87_r5_2 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_2, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_471d48
        
        int32_t var_90_1 = 0
        sub_47ad82(ebx, arg5, 0)

j__free(var_10)
j__free(var_1c)
j__free(var_20)
j__free(var_5c)
ebx[0xb] = var_48
ebx[0xc] = eax_1
ebx[0xd] = eax_2
ebx[0xf] = eax_3
ebx[0x10] = eax_4

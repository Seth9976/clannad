// 函数: sub_47b180
// 地址: 0x47b180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg4
int32_t var_2c = 0
void* var_20 = nullptr
int32_t var_30 = 0
void* var_24 = nullptr
uint32_t var_14 = 0
int32_t var_c = 0

if (edi == 0 || *(edi + 4) != 0xa)
    return 0x80004005

if (*(edi + 0x38) != 0)
    char* var_48_1 = arg3
    sub_46e3d1(arg1, edi, 0xdac, "'%s': recursive functions not yet implemented")
    return 0x80004001

int32_t result

if (arg7 == 0)
label_47b1fc:
    void* var_28_1
    
    if (arg5 == 0)
        var_28_1 = nullptr
    else
        var_28_1 = *(arg5 + 8)
    
    void* var_38_1
    
    if (arg5 == 0)
        var_38_1 = nullptr
    else
        var_38_1 = *(arg5 + 0xc)
    
    void* i = *(edi + 0x24)
    int32_t ecx_2 = 0
    
    while (i != 0)
        void* edx_1 = *(i + 8)
        i = *(i + 0xc)
        
        if (i != 0)
            void* edx_2 = *(i + 8)
            
            if (edx_2 != 0 && *(edx_2 + 4) == 0xc)
                i = *(i + 0xc)
        
        ecx_2 += *(*(edx_1 + 0x18) + 0x14)
    
    int32_t esi_2 = ecx_2 << 2
    void* eax_4 = sub_745f3f(esi_2)
    var_20 = eax_4
    
    if (eax_4 == 0)
    labelid_b:
        result = 0x8007000e
    else if (arg7 == 0)
    label_47b278:
        void* edx_5 = var_28_1
        void* i_1 = *(edi + 0x24)
        void* eax_6 = var_20
        arg5 = edx_5
        
        while (i_1 != 0)
            void* ecx_5 = *(i_1 + 8)
            i_1 = *(i_1 + 0xc)
            
            if (i_1 != 0)
                void* eax_7 = *(i_1 + 8)
                
                if (eax_7 != 0 && *(eax_7 + 4) == 0xc)
                    i_1 = *(i_1 + 0xc)
            
            void* eax_8 = *(ecx_5 + 0x18)
            
            if (arg7 == 0)
            label_47b2b8:
                
                if (edx_5 != 0)
                    int32_t ecx_6 = *(edx_5 + 8)
                    
                    if (ecx_6 != 0)
                        int32_t result_2 = sub_47bd3b(ecx_6, eax_6, 0)
                        result = result_2
                        
                        if (result_2 s< 0)
                            goto label_47b965
                        
                        edx_5 = arg5
                    
                    edx_5 = *(edx_5 + 0xc)
                    arg5 = edx_5
            else if (arg8 != 0 && (*(eax_8 + 0x1c) & 0x40) != 0)
                goto label_47b2b8
            
            eax_6 += *(eax_8 + 0x14) << 2
        
        void* eax_10 = *(edi + 0x24)
        arg5 = var_28_1
        void* var_10_2 = var_20
        
        if (eax_10 != 0)
            while (true)
                void* ecx_11 = *(eax_10 + 8)
                void* eax_11 = *(eax_10 + 0xc)
                void* var_34_2 = nullptr
                void* var_1c_1 = eax_11
                
                if (eax_11 != 0)
                    void* ecx_12 = *(eax_11 + 8)
                    
                    if (ecx_12 != 0 && *(ecx_12 + 4) == 0xc)
                        var_34_2 = ecx_12
                        var_1c_1 = *(eax_11 + 0xc)
                
                void* esi_3 = *(ecx_11 + 0x18)
                int32_t result_5
                
                if (arg7 == 0 || (arg8 != 0 && (*(esi_3 + 0x1c) & 0x40) != 0))
                    int32_t result_7 = sub_47ad82(arg1, ecx_11, 0)
                    result = result_7
                    
                    if (result_7 s< 0)
                        goto label_47b965
                    
                    if (arg5 == 0)
                        result_5 = sub_47ad82(arg1, var_34_2, 0)
                    label_47b56c:
                        result = result_5
                        
                        if (result_5 s< 0)
                            goto label_47b965
                    else
                        if ((*(esi_3 + 0x1c) & 0x10) != 0)
                            int32_t result_8 = sub_46ea58(arg1, *(arg5 + 8), 
                                (*(esi_3 + 0x14) & 0xfffff) | 0x10000000, 
                                arg1[6] + (*(esi_3 + 0x10) << 2), var_10_2, nullptr, 0, arg2.b)
                            result = result_8
                            
                            if (result_8 s< 0)
                                goto label_47b965
                        
                        arg5 = *(arg5 + 0xc)
                else
                    void* eax_14 = arg1[2]
                    int32_t* var_18_1 = *(eax_14 + 0x74)
                    int32_t ecx_14 = *(esi_3 + 0x1c)
                    
                    if ((ecx_14.b & 0x40) != 0)
                        var_18_1 = *(eax_14 + 0x7c)
                    else if ((ecx_14.b & 0x10) != 0)
                        var_18_1 = *(eax_14 + 0x80)
                    
                    int32_t i_2 = 0
                    
                    if (*(esi_3 + 0x14) u> 0)
                        do
                            int32_t eax_17 = *(esi_3 + 0x10) + i_2
                            int32_t var_48_5 = ecx_14
                            int32_t var_4c_2 = ecx_14
                            var_4c_2.q = fconvert.d(float.t(0))
                            int32_t eax_18 = sub_49f544(arg1[2], var_18_1, 0, 0, var_4c_2)
                            void* ecx_16 = arg1[2]
                            void* const ecx_18
                            
                            if (eax_18 u>= *(ecx_16 + 8))
                                ecx_18 = nullptr
                            else
                                ecx_18 = *(*(ecx_16 + 0x14) + (eax_18 << 2))
                            
                            if (ecx_18 != 0)
                                *(ecx_18 + 0x30) = eax_17
                                *(ecx_18 + 0x60) = ecx_11
                                *(ecx_18 + 0x64) = i_2
                            
                            ecx_14 = arg1[6]
                            i_2 += 1
                            *(ecx_14 + (eax_17 << 2)) = eax_18
                        while (i_2 u< *(esi_3 + 0x14))
                    
                    int32_t* ecx_19 = var_18_1
                    
                    if (*(arg1[2] + 0x74) != ecx_19)
                        int32_t result_3 = sub_46f26e(arg1, *(esi_3 + 0x20), 
                            arg1[6] + (*(esi_3 + 0x10) << 2), *(esi_3 + 0x14))
                        result = result_3
                        
                        if (result_3 s< 0)
                            goto label_47b965
                        
                        ecx_19 = var_18_1
                    
                    void* eax_23 = arg1[2]
                    
                    if (*(eax_23 + 0x7c) == ecx_19)
                        int32_t result_4 = sub_4716f6(arg1, *(esi_3 + 0x20), 
                            arg1[6] + (*(esi_3 + 0x10) << 2), var_18_1, 1, nullptr, nullptr, 
                            *(esi_3 + 0x30))
                        result = result_4
                        
                        if (result_4 s< 0)
                            goto label_47b965
                        
                        result_5 = sub_46ce14(arg1, esi_3)
                        goto label_47b56c
                    
                    if (*(eax_23 + 0x80) == ecx_19)
                        int32_t result_6 = sub_4716f6(arg1, *(esi_3 + 0x20), 
                            arg1[6] + (*(esi_3 + 0x10) << 2), var_18_1, nullptr, nullptr, 
                            *(esi_3 + 0x2c), *(esi_3 + 0x30))
                        result = result_6
                        
                        if (result_6 s< 0)
                            goto label_47b965
                        
                        if (sub_46dcc4(arg1, arg1[6] + (*(esi_3 + 0x10) << 2), *(esi_3 + 0x14))
                                == 0)
                            int32_t var_48_11 = *(*(ecx_11 + 0x14) + 0x18)
                            char* var_4c_6 = arg3
                            sub_46e3d1(arg1, esi_3, 0xdae, 
                                "'%s': input parameter '%s' missing semantics")
                        else
                            int32_t i_3 = 0
                            
                            if (*(esi_3 + 0x14) u> 0)
                                do
                                    int32_t eax_32 = *(esi_3 + 0x10) + i_3
                                    int32_t edx_10 = var_c
                                    var_c += 1
                                    i_3 += 1
                                    *(var_14 + (edx_10 << 2)) = eax_32
                                while (i_3 u< *(esi_3 + 0x14))
                var_10_2 += *(esi_3 + 0x14) << 2
                
                if (var_1c_1 == 0)
                    break
                
                eax_10 = var_1c_1
        
        if (arg7 == 0)
        label_47b743:
            
            if (arg7 == 0)
            label_47b77e:
                int32_t esi_29 = arg1[0x14]
                arg1[0x14] = 0
                void* var_4c_11 = *(edi + 0x28)
                *(edi + 0x38) = 1
                result = sub_47ad82(arg1, var_4c_11, var_2c)
                int32_t i_4 = 0
                void* ecx_53
                
                if (arg1[0x14] != 0 || arg1[0x15] != 0)
                    ecx_53 = 1
                else
                    ecx_53 = nullptr
                
                arg1[0x14] = esi_29
                *(edi + 0x38) = 0
                
                if (result s>= 0)
                    if (ecx_53 != 0 || *(edi + 0x14) u<= 0)
                        if (arg7 == 0)
                            if (arg6 != 0)
                                if (arg1[0x15] == 0)
                                    int32_t ecx_66 = *(arg4 + 0x14) << 2
                                    int32_t esi_33
                                    int32_t edi_4
                                    edi_4, esi_33 = __builtin_memcpy(arg6, 
                                        arg1[6] + (*(arg4 + 0x10) << 2), ecx_66 u>> 2 << 2)
                                    __builtin_memcpy(edi_4, esi_33, ecx_66 & 3)
                                    edi = arg4
                                else if (*(edi + 0x14) u> 0)
                                    do
                                        *(arg6 + (i_4 << 2)) = arg1[9]
                                        i_4 += 1
                                    while (i_4 u< *(edi + 0x14))
                            
                            goto label_47b94e
                        
                        ecx_53 = *(edi + 0x14)
                        
                        if (ecx_53 == 0)
                        label_47b94e:
                            void* edi_5 = *(edi + 0x24)
                            arg5 = var_38_1
                            void* var_10_4 = var_20
                            
                            if (edi_5 != 0)
                                while (true)
                                    void* eax_86 = *(edi_5 + 8)
                                    void* edi_6 = *(edi_5 + 0xc)
                                    void* var_1c_4 = edi_6
                                    
                                    if (edi_6 != 0)
                                        ecx_53 = *(edi_6 + 8)
                                        
                                        if (ecx_53 != 0 && *(ecx_53 + 4) == 0xc)
                                            var_1c_4 = *(edi_6 + 0xc)
                                    
                                    void* esi_34 = *(eax_86 + 0x18)
                                    
                                    if ((*(esi_34 + 0x1c) & 0x20) == 0)
                                    label_47bb6b:
                                        
                                        if (arg7 == 0
                                            || (arg8 != 0 && (*(esi_34 + 0x1c) & 0x40) != 0))
                                        label_47bbd7:
                                            
                                            if (arg5 != 0)
                                                arg5 = *(arg5 + 0xc)
                                        else if ((*(esi_34 + 0x1c) & 0x40) != 0)
                                            char* eax_118 = *(*(eax_86 + 0x14) + 0x18)
                                            arg6 = eax_118
                                            
                                            if (*eax_118 != 0x24)
                                                void* edi_9 = &eax_118[1]
                                                
                                                do
                                                    ecx_53.b = *eax_118
                                                    eax_118 = &eax_118[1]
                                                while (ecx_53.b != 0)
                                                
                                                void* eax_120 =
                                                    sub_46b465(*arg1, eax_118 - edi_9 + 2, 1)
                                                
                                                if (eax_120 == 0)
                                                    goto label_47bc1d_2
                                                
                                                char* var_48_25 = arg6
                                                sub_74aa1b(eax_120, eax_118 - edi_9 + 2, "$%s")
                                                *(*(eax_86 + 0x14) + 0x18) = eax_120
                                    else
                                        void* edi_8 = *(eax_86 + 0x14) + 0x10
                                        
                                        if (arg1[0x15] == 0)
                                            arg6 = nullptr
                                            
                                            if (*(esi_34 + 0x14) u> 0)
                                                void* ecx_71 = arg1[2]
                                                arg4 = arg1[6] + (*(esi_34 + 0x10) << 2)
                                                
                                                do
                                                    int32_t eax_93 = *arg4
                                                    void* const eax_94
                                                    
                                                    if (eax_93 u>= *(ecx_71 + 8))
                                                        eax_94 = nullptr
                                                    else
                                                        eax_94 = *(*(ecx_71 + 0x14) + (eax_93 << 2))
                                                    
                                                    if (eax_94 != 0
                                                            && *(ecx_71 + 0x74) == *(eax_94 + 4))
                                                        int32_t var_48_26 = *(edi_8 + 8)
                                                        char* var_4c_23 = arg3
                                                        sub_46e3d1(arg1, *(eax_94 + 0x60), 0xdb4, 
                                                            "'%s': output parameter '%s' never assigned "
                                                        "a value")
                                                        goto label_47b965
                                                    
                                                    arg6 = &arg6[1]
                                                    arg4 += 4
                                                while (arg6 u< *(esi_34 + 0x14))
                                        else
                                            arg4 = nullptr
                                            
                                            if (*(esi_34 + 0x14) u> 0)
                                                do
                                                    void* eax_88 = *(esi_34 + 0x10) + arg4
                                                    arg4 += 1
                                                    *(arg1[6] + (eax_88 << 2)) = arg1[9]
                                                while (arg4 u< *(esi_34 + 0x14))
                                        
                                        if (arg7 != 0)
                                            int32_t* eax_97 = arg1[6] + (*(esi_34 + 0x10) << 2)
                                            int32_t result_13 = sub_46ea58(arg1, esi_34, 
                                                (*(esi_34 + 0x14) & 0xfffff) | 0x10000000, eax_97, 
                                                eax_97, nullptr, 0, arg2.b)
                                            result = result_13
                                            
                                            if (result_13 s< 0)
                                                goto label_47b965
                                            
                                            int32_t result_14 = sub_46f26e(arg1, *(esi_34 + 0x20), 
                                                arg1[6] + (*(esi_34 + 0x10) << 2), *(esi_34 + 0x14))
                                            result = result_14
                                            
                                            if (result_14 s< 0)
                                                goto label_47b965
                                            
                                            int32_t result_15 = sub_4716f6(arg1, *(esi_34 + 0x20), 
                                                arg1[6] + (*(esi_34 + 0x10) << 2), 
                                                *(arg1[2] + 0x84), nullptr, 1, *(esi_34 + 0x2c), 
                                                nullptr)
                                            result = result_15
                                            
                                            if (result_15 s< 0)
                                                goto label_47b965
                                            
                                            int32_t eax_108
                                            eax_108, ecx_53 = sub_46dcc4(arg1, 
                                                arg1[6] + (*(esi_34 + 0x10) << 2), *(esi_34 + 0x14))
                                            
                                            if (eax_108 == 0)
                                                int32_t var_48_24 = *(edi_8 + 8)
                                                char* var_4c_21 = arg3
                                                sub_46e3d1(arg1, esi_34, 0xdaf, 
                                                    "'%s': output parameter '%s' missing semantics")
                                            else
                                                int32_t i_5 = 0
                                                
                                                if (*(esi_34 + 0x14) u> 0)
                                                    do
                                                        int32_t* ecx_80 = arg1[2]
                                                        int32_t eax_113
                                                        eax_113, ecx_53 = (*(*ecx_80 + 4))(
                                                            *(ecx_80[5] + (*(arg1[6]
                                                                + ((*(esi_34 + 0x10) + i_5) << 2))
                                                                << 2)), 
                                                            1)
                                                        
                                                        if (eax_113 s< 0)
                                                            arg1[0x13] = 1
                                                            break
                                                        
                                                        i_5 += 1
                                                    while (i_5 u< *(esi_34 + 0x14))
                                            
                                            goto label_47bb6b
                                        
                                        if (arg5 != 0)
                                            int32_t eax_115 = *(arg5 + 8)
                                            
                                            if (eax_115 == 0)
                                                goto label_47bbd7
                                            
                                            int32_t result_16
                                            result_16, ecx_53 = sub_47bd3b(eax_115, 0, 0)
                                            result = result_16
                                            
                                            if (result_16 s< 0)
                                                goto label_47b965
                                            
                                            goto label_47bb6b
                                    
                                    var_10_4 += *(esi_34 + 0x14) << 2
                                    
                                    if (var_1c_4 == 0)
                                        break
                                    
                                    edi_5 = var_1c_4
                            
                            result = 0
                        else
                            if (arg1[0x15] != 0 && ecx_53 u> 0)
                                do
                                    int32_t ecx_55 = *(edi + 0x10) + i_4
                                    i_4 += 1
                                    *(arg1[6] + (ecx_55 << 2)) = arg1[9]
                                while (i_4 u< *(edi + 0x14))
                            
                            int32_t* eax_64 = arg1[6] + (*(edi + 0x10) << 2)
                            int32_t i_6 = 0
                            int32_t result_10 = sub_46ea58(arg1, edi, 
                                (*(edi + 0x14) & 0xfffff) | 0x10000000, eax_64, eax_64, nullptr, 0, 
                                arg2.b)
                            result = result_10
                            
                            if (result_10 s>= 0)
                                int32_t result_11 = sub_46f26e(arg1, *(edi + 0x20), 
                                    arg1[6] + (*(edi + 0x10) << 2), *(edi + 0x14))
                                result = result_11
                                
                                if (result_11 s>= 0)
                                    int32_t result_12 = sub_4716f6(arg1, *(edi + 0x20), 
                                        arg1[6] + (*(edi + 0x10) << 2), *(arg1[2] + 0x84), nullptr, 
                                        1, *(edi + 0x30), nullptr)
                                    result = result_12
                                    
                                    if (result_12 s>= 0)
                                        int32_t eax_75
                                        eax_75, ecx_53 = sub_46dcc4(arg1, 
                                            arg1[6] + (*(edi + 0x10) << 2), *(edi + 0x14))
                                        
                                        if (eax_75 == 0)
                                            char* var_48_20 = arg3
                                            sub_46e3d1(arg1, edi, 0xdaf, 
                                                "'%s': function return value missing semantics")
                                        else if (*(edi + 0x14) u> 0)
                                            do
                                                int32_t* ecx_64 = arg1[2]
                                                int32_t eax_80
                                                eax_80, ecx_53 = (*(*ecx_64 + 4))(
                                                    *(ecx_64[5] + (
                                                        *(arg1[6] + ((*(edi + 0x10) + i_6) << 2))
                                                        << 2)), 
                                                    1)
                                                
                                                if (eax_80 s< 0)
                                                    arg1[0x13] = 1
                                                    break
                                                
                                                i_6 += 1
                                            while (i_6 u< *(edi + 0x14))
                                        
                                        goto label_47b94e
                    else
                        char* var_48_17 = arg3
                        sub_46e3d1(arg1, edi, 0xdb3, "'%s': function must return a value")
                        result = 0x80004005
            else
                int32_t esi_26 = *(arg1[1] + 0x18) << 2
                int32_t eax_60 = sub_745f3f(esi_26)
                var_2c = eax_60
                
                if (eax_60 != 0)
                    int32_t esi_28
                    int32_t edi_2
                    edi_2, esi_28 = __builtin_memcpy(eax_60, arg1[6], esi_26 u>> 2 << 2)
                    __builtin_memcpy(edi_2, esi_28, esi_26 & 3)
                    edi = arg4
                    goto label_47b77e
                
            labelid_b:
                result = 0x8007000e
        else
            int32_t esi_4 = 0
            
            if (var_c u<= 0)
            label_47b5d3:
                sub_458e55(sub_46e4ac, var_14, var_c, arg1)
                arg5 = nullptr
                
                if (var_c == 0)
                    goto label_47b743
                
                int32_t eax_47 = arg1[6]
                int32_t ecx_41 = *(arg1[2] + 0x14)
                int32_t* var_28_3 = *(ecx_41 + (*(eax_47 + (*var_14 << 2)) << 2))
                int32_t var_1c_2 = 1
                
                if (var_c u<= 1)
                    goto label_47b743
                
                do
                    int32_t* edx_22 =
                        *(ecx_41 + (*(eax_47 + (*(var_14 + (var_1c_2 << 2)) << 2)) << 2))
                    
                    if (var_28_3[0x1b] != edx_22[0x1b] || var_28_3[4] != edx_22[4]
                            || *var_28_3 != *edx_22)
                        var_28_3 = edx_22
                    else
                        arg5 += 1
                    
                    var_1c_2 += 1
                while (var_1c_2 u< var_c)
                
                if (arg5 == 0)
                    goto label_47b743
                
                int32_t esi_13 = arg5 << 2
                int32_t eax_49 = sub_745f3f(esi_13)
                var_30 = eax_49
                
                if (eax_49 == 0)
                label_47bc1d:
                    result = 0x8007000e
                else
                    void* eax_50 = sub_745f3f(esi_13)
                    var_24 = eax_50
                    
                    if (eax_50 == 0)
                    label_47bc1d_1:
                        result = 0x8007000e
                    else
                        int32_t ecx_45 = *var_14
                        void* var_1c_3 = *(*(arg1[2] + 0x14) + (*(arg1[6] + (ecx_45 << 2)) << 2))
                        void* var_34_4 = var_24
                        void* eax_51 = nullptr
                        arg5 = nullptr
                        int32_t var_28_4 = 1
                        
                        do
                            int32_t edx_31 = *(var_14 + (var_28_4 << 2))
                            int32_t edx_32 = *(arg1[6] + (edx_31 << 2))
                            void* edx_33 = *(*(arg1[2] + 0x14) + (edx_32 << 2))
                            
                            if (*(var_1c_3 + 0x6c) != *(edx_33 + 0x6c)
                                    || *(var_1c_3 + 0x10) != *(edx_33 + 0x10))
                                ecx_45 = edx_31
                                var_1c_3 = edx_33
                            else
                                int32_t* edx_34 = var_34_4
                                *(var_30 - var_24 + edx_34) = edx_32
                                *edx_34 = *(arg1[6] + (ecx_45 << 2))
                                eax_51 = arg5 + 1
                                arg5 = eax_51
                                var_34_4 = &edx_34[1]
                            
                            var_28_4 += 1
                        while (var_28_4 u< var_c)
                        
                        int32_t result_9 = sub_46ea58(arg1, edi, (eax_51 & 0xfffff) | 0x10000000, 
                            var_30, var_24, nullptr, 0, arg2.b)
                        result = result_9
                        
                        if (result_9 s>= 0)
                            goto label_47b743
            else
                while (true)
                    int32_t* ecx_39 = arg1[2]
                    
                    if ((*(*ecx_39 + 4))(
                            *(ecx_39[5] + (*(arg1[6] + (*(var_14 + (esi_4 << 2)) << 2)) << 2)), 1) s< 0)
                        break
                    
                    esi_4 += 1
                    
                    if (esi_4 u>= var_c)
                        goto label_47b5d3
                
                result = 0x80004005
    else
        uint32_t eax_5 = sub_745f3f(esi_2)
        var_14 = eax_5
        
        if (eax_5 != 0)
            goto label_47b278
        
    label_47bc1d_2:
        result = 0x8007000e
else
    int32_t result_1 = sub_49fdf5(arg1[2], arg3)
    result = result_1
    
    if (result_1 s>= 0)
        goto label_47b1fc

label_47b965:
j__free(var_2c)
j__free(var_20)
j__free(var_14)
j__free(var_30)
j__free(var_24)
return result

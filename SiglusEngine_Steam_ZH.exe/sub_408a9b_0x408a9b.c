// 函数: sub_408a9b
// 地址: 0x408a9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_748 = edi
int32_t* var_8 = nullptr
int32_t* var_14 = nullptr
int32_t var_4c = 0
int32_t var_38 = 0
int32_t var_10 = 0
int32_t var_24 = 0
void var_124
sub_408604(&var_124)
int32_t* ebx = arg1
int32_t var_44 = 0
int32_t var_3c = 0
int32_t var_2c = 0
int32_t var_40 = 0
int32_t var_48 = 0
int32_t* var_18 = nullptr
int32_t* var_1c = nullptr
int32_t* var_34 = nullptr
int32_t* var_50 = nullptr

if (ebx != 0)
    int32_t* esi_1 = arg6
    
    if (esi_1 != 0 && arg12 != 0)
        int32_t eax_1 = (*(*ebx + 0x14))(ebx)
        void* eax_3 = (*(*esi_1 + 0x14))(esi_1)
        void* eax_4 = eax_3 + eax_1
        void* i_3 = (*(*ebx + 0x10))(ebx)
        int32_t eax_7 = (*(*esi_1 + 0x10))(esi_1)
        int32_t* edi_3 = i_3 + eax_7
        int32_t* var_c_1 = (*(*ebx + 0x24))(ebx)
        char eax_11
        
        if (edi_3 u< 0xffff && eax_4 u< 0xffff)
            eax_11 = (*(*esi_1 + 0x24))(esi_1)
        
        if (edi_3 u>= 0xffff || eax_4 u>= 0xffff || (eax_11 & 1) != 0)
            var_c_1 |= 1
        
        int32_t eax_14 = not.d(var_c_1) & 1
        void var_534
        (*(*ebx + 0x1c))(ebx, &var_534)
        int16_t var_73c[0x104]
        (*(*esi_1 + 0x1c))(esi_1, &var_73c)
        int32_t eax_18 = (*(*ebx + 0x18))(ebx)
        int32_t eax_20 = (*(*esi_1 + 0x18))(esi_1)
        void var_32c
        
        if (eax_18 != 0 && eax_20 != 0)
            int32_t eax_21
            
            if (eax_18 == eax_20)
                eax_21 = eax_18
            else
                eax_21 = sub_408950(eax_18, eax_20)
            
            sub_40b224(eax_21, &var_32c)
            goto label_408c09
        
        if (sub_408829(&var_534, &var_73c) == 0)
            int32_t* eax_23 = sub_408a3d(&var_534, &var_73c, &var_32c)
            arg1 = eax_23
            
            if (eax_23 s>= 0)
                esi_1 = arg6
                goto label_408c09
        else
            sub_40889e(&var_32c, &var_534)
        label_408c09:
            int32_t* eax_28
            
            if ((*(*ebx + 0x24))(ebx) != var_c_1)
            label_408c3c:
                eax_28 = (*(*ebx + 0x30))(ebx, var_c_1, &var_32c, arg11, &var_34)
                
                if (eax_28 s< 0)
                    return eax_28
                
                ebx = var_34
            else if (sub_408829(&var_32c, &var_534) == 0)
                goto label_408c3c
            
            if ((*(*esi_1 + 0x24))(esi_1) != var_c_1)
            label_408c7d:
                eax_28 = (*(*esi_1 + 0x30))(esi_1, var_c_1, &var_32c, arg11, &var_50)
                
                if (eax_28 s< 0)
                    return eax_28
                
                arg6 = var_50
            else if (sub_408829(&var_32c, &var_73c) == 0)
                goto label_408c7d
            
            int32_t* eax_35 = (*(*ebx + 0x60))(ebx, 0x10, &var_4c)
            arg1 = eax_35
            
            if (eax_35 s>= 0)
                int32_t* eax_37 = (*(*arg6 + 0x60))(arg6, 0x10, &var_38)
                arg1 = eax_37
                
                if (eax_37 s>= 0)
                    int32_t* eax_39 = (*(*ebx + 0x44))(ebx, 0x10, &var_44)
                    arg1 = eax_39
                    
                    if (eax_39 s>= 0)
                        int32_t* eax_41 = (*(*arg6 + 0x44))(arg6, 0x10, &var_3c)
                        arg1 = eax_41
                        
                        if (eax_41 s>= 0)
                            int32_t eax_42
                            eax_42.b = eax_14 == 0
                            int32_t* eax_44 = sub_45eecd(arg3, arg5, arg8, arg10, &var_18)
                            arg1 = eax_44
                            
                            if (eax_44 s>= 0)
                                int32_t* eax_45 = sub_45f1c3(arg4, arg5, arg9, arg10, &var_1c)
                                arg1 = eax_45
                                
                                if (eax_45 s>= 0)
                                    int32_t* eax_46 =
                                        sub_41237d(edi_3, eax_4, var_c_1, &var_32c, arg11, &var_8)
                                    arg1 = eax_46
                                    
                                    if (eax_46 s>= 0)
                                        int32_t* eax_47 = var_8
                                        int32_t* eax_48 = (*(*eax_47 + 0x44))(eax_47, 0, &var_10)
                                        arg1 = eax_48
                                        
                                        if (eax_48 s>= 0)
                                            int32_t* eax_49 = var_8
                                            int32_t* eax_50 =
                                                (*(*eax_49 + 0x60))(eax_49, 0, &var_24)
                                            arg1 = eax_50
                                            
                                            if (eax_50 s>= 0)
                                                int32_t* var_74c_31 = &var_14
                                                int32_t var_750_15 = edi_3 * 0xc
                                                int32_t* eax_54 = sub_458de2()
                                                arg1 = eax_54
                                                
                                                if (eax_54 s>= 0)
                                                    int32_t* eax_55 = var_14
                                                    int32_t* eax_56 = (*(*eax_55 + 0xc))(eax_55)
                                                    int32_t* ecx_8 = (eax_42 * 2 + 2) * i_3 * 3
                                                    int32_t esi_3
                                                    int32_t edi_7
                                                    edi_7, esi_3 = __builtin_memcpy(var_10, var_44, 
                                                        ecx_8 u>> 2 << 2)
                                                    __builtin_memcpy(edi_7, esi_3, ecx_8 & 3)
                                                    int32_t ecx_13 = i_3 << 2
                                                    int32_t esi_5
                                                    int32_t edi_9
                                                    edi_9, esi_5 = __builtin_memcpy(var_24, var_4c, 
                                                        ecx_13 u>> 2 << 2)
                                                    void* i_1 = i_3 * 3
                                                    __builtin_memcpy(edi_9, esi_5, ecx_13 & 3)
                                                    
                                                    if (i_1 u> 0)
                                                        int32_t* eax_59 = eax_56
                                                        void* ecx_18 = arg2 - eax_59
                                                        void* i_5 = i_1
                                                        void* i
                                                        
                                                        do
                                                            if (arg2 == 0)
                                                                *eax_59 = 0xffffffff
                                                            else
                                                                *eax_59 = *(ecx_18 + eax_59)
                                                            
                                                            eax_59 = &eax_59[1]
                                                            i = i_5
                                                            i_5 -= 1
                                                        while (i != 1)
                                                    
                                                    int32_t ecx_19 = (eax_42 * 2 + 2) * eax_7 * 3
                                                    int32_t esi_7
                                                    int32_t edi_13
                                                    edi_13, esi_7 = __builtin_memcpy(
                                                        ecx_8 + var_10, var_3c, ecx_19 u>> 2 << 2)
                                                    __builtin_memcpy(edi_13, esi_7, ecx_19 & 3)
                                                    __builtin_memcpy(ecx_13 + var_24, var_38, 
                                                        eax_7 << 2)
                                                    void* i_4 = i_1
                                                    void* ecx_25 = edi_3 * 3
                                                    
                                                    if (i_4 u< ecx_25)
                                                        arg2 = arg7
                                                        int32_t* esi_10 = eax_56
                                                        
                                                        do
                                                            void* edi_17
                                                            
                                                            if (arg7 != 0)
                                                                edi_17 = *arg2
                                                            
                                                            if (arg7 == 0 || edi_17 == 0xffffffff)
                                                                esi_10[i_4] = 0xffffffff
                                                            else
                                                                esi_10 = eax_56
                                                                esi_10[i_4] = edi_17 + i_3
                                                            
                                                            arg2 = &arg2[1]
                                                            i_4 += 1
                                                        while (i_4 u< ecx_25)
                                                    
                                                    int32_t esi_12 = var_10
                                                    
                                                    if (eax_14 == 0)
                                                        for (; i_1 u< ecx_25; i_1 += 1)
                                                            int32_t eax_67 = *(esi_12 + (i_1 << 2))
                                                            
                                                            if (eax_67 != 0xffffffff)
                                                                *(esi_12 + (i_1 << 2)) = eax_67 + eax_1
                                                    else
                                                        for (; i_1 u< ecx_25; i_1 += 1)
                                                            int16_t eax_65 = *(esi_12 + (i_1 << 1))
                                                            
                                                            if (eax_65 != 0xffff)
                                                                *(esi_12 + (i_1 << 1)) =
                                                                    eax_65 + eax_1.w
                                                    
                                                    for (void* i_2 = i_3; i_2 u< edi_3; i_2 += 1)
                                                        void** eax_70 = var_24 + (i_2 << 2)
                                                        *eax_70 += arg5
                                                    
                                                    int32_t* eax_71 = var_8
                                                    int32_t* eax_72 =
                                                        (*(*eax_71 + 0x3c))(eax_71, 0, &var_2c)
                                                    arg1 = eax_72
                                                    
                                                    if (eax_72 s>= 0)
                                                        int32_t* eax_74 =
                                                            (*(*ebx + 0x3c))(ebx, 0x10, &var_40)
                                                        arg1 = eax_74
                                                        
                                                        if (eax_74 s>= 0)
                                                            int32_t* eax_76 =
                                                                (*(*arg6 + 0x3c))(arg6, 0x10, &var_48)
                                                            arg1 = eax_76
                                                            
                                                            if (eax_76 s>= 0)
                                                                sub_408645(&var_124, &var_32c)
                                                                int32_t var_64
                                                                int32_t ecx_30 = var_64 * eax_1
                                                                int32_t esi_14
                                                                int32_t edi_22
                                                                edi_22, esi_14 = __builtin_memcpy(
                                                                    var_2c, var_40, ecx_30 u>> 2 << 2)
                                                                __builtin_memcpy(edi_22, esi_14, 
                                                                    ecx_30 & 3)
                                                                int32_t ecx_35 = var_64 * eax_3
                                                                int32_t esi_16
                                                                int32_t edi_26
                                                                edi_26, esi_16 = __builtin_memcpy(
                                                                    var_64 * eax_1 + var_2c, var_48, 
                                                                    ecx_35 u>> 2 << 2)
                                                                __builtin_memcpy(edi_26, esi_16, 
                                                                    ecx_35 & 3)
                                                                int32_t* eax_79 = var_8
                                                                *arg12 = eax_79
                                                                (*(*eax_79 + 4))(eax_79)
                                                                
                                                                if (arg13 != 0)
                                                                    int32_t* ecx_41 = var_14
                                                                    var_14 = nullptr
                                                                    *arg13 = ecx_41
                                                                
                                                                if (arg14 != 0)
                                                                    int32_t* ecx_42 = var_18
                                                                    var_18 = nullptr
                                                                    *arg14 = ecx_42
                                                                
                                                                if (arg15 != 0)
                                                                    int32_t* ecx_43 = var_1c
                                                                    var_1c = nullptr
                                                                    *arg15 = ecx_43
                                                                
                                                                if (arg16 != 0)
                                                                    *arg16 = arg5 + arg10
        
        if (var_10 != 0)
            int32_t* eax_84 = var_8
            (*(*eax_84 + 0x48))(eax_84)
        
        if (var_24 != 0)
            int32_t* eax_85 = var_8
            (*(*eax_85 + 0x64))(eax_85)
        
        if (var_4c != 0)
            (*(*ebx + 0x64))(ebx)
        
        if (var_38 != 0)
            (*(*arg6 + 0x64))(arg6)
        
        if (var_44 != 0)
            (*(*ebx + 0x48))(ebx)
        
        if (var_3c != 0)
            (*(*arg6 + 0x48))(arg6)
        
        if (var_2c != 0)
            int32_t* eax_90 = var_8
            (*(*eax_90 + 0x40))(eax_90)
        
        if (var_40 != 0)
            (*(*ebx + 0x40))(ebx)
        
        if (var_48 != 0)
            (*(*arg6 + 0x40))(arg6)
        
        int32_t* eax_93 = var_8
        
        if (eax_93 != 0)
            (*(*eax_93 + 8))(eax_93)
            var_8 = nullptr
        
        int32_t* eax_94 = var_14
        
        if (eax_94 != 0)
            (*(*eax_94 + 8))(eax_94)
            var_14 = nullptr
        
        int32_t* eax_95 = var_18
        
        if (eax_95 != 0)
            (*(*eax_95 + 8))(eax_95)
            var_18 = nullptr
        
        int32_t* eax_96 = var_1c
        
        if (eax_96 != 0)
            (*(*eax_96 + 8))(eax_96)
            var_1c = nullptr
        
        int32_t* eax_97 = var_34
        
        if (eax_97 != 0)
            (*(*eax_97 + 8))(eax_97)
            var_34 = nullptr
        
        int32_t* eax_98 = var_50
        
        if (eax_98 != 0)
            (*(*eax_98 + 8))(eax_98)
        
        return arg1

return 0x88760b59

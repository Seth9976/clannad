// 函数: sub_43f01c
// 地址: 0x43f01c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_58 = edi
char const* const var_34 = "global variables"
char const* const var_30 = "structure members"
char const* const var_2c = "function parameters"
char const* const var_28 = "local variables"
char const* const var_24 = "loop control variables"
char const* const var_20 = "annotation members"
char const* const var_4c = "initial value"
char const* const var_48 = "initializer"
char const* const var_44 = "default value"
char const* const var_40 = "initial value"
char const* const var_3c = "initial value"
char const* const var_38 = "value"
void* eax = sub_437565(arg1)

if (eax != 0 && arg1[4] != 0 && arg2 != 0)
    int32_t* eax_1 = *(eax + 0x18)
    void*** eax_2 = sub_42cfa1(0x14)
    void*** result
    
    if (eax_2 == 0)
        result = nullptr
    else
        result = sub_46b602(eax_2, 0, 0, "Stmts")
    
    if (result != 0)
        void*** eax_4 = sub_42cfa1(0x30)
        void*** edi_1
        
        if (eax_4 == 0)
            edi_1 = nullptr
        else
            edi_1 = sub_46b9d6(eax_4, 1, 0, 0, 0)
        
        void*** var_c_1 = edi_1
        
        if (edi_1 != 0)
            result[2] = edi_1
            void*** eax_7 = sub_42cfa1(0x40)
            void*** esi_1
            
            if (eax_7 == 0)
                esi_1 = nullptr
            else
                esi_1 = sub_46bd30(eax_7)
            
            if (esi_1 != 0)
                edi_1[6] = esi_1
                
                if (arg4 == 0)
                label_43f134:
                    int32_t* i = arg3
                    
                    if (i == 0)
                    label_43f17c:
                        
                        if (arg5 != 0 && arg5[1] != 0xd)
                            esi_1[9] = sub_439d96(arg2, arg5)
                        
                        arg4 = 1
                        arg3 = nullptr
                        int32_t var_14_1 = 0
                        int32_t eax_15
                        
                        if (eax_1 != 0)
                            eax_15 = sub_46b5aa(eax_1)
                            esi_1[8] = eax_15
                        
                        if (eax_1 == 0 || eax_15 != 0)
                            if (*(arg2 + 4) != 3)
                                void* eax_26
                                
                                do
                                    void*** eax_17 = sub_42cfa1(0x18)
                                    void*** ebx_1
                                    
                                    if (eax_17 == 0)
                                        ebx_1 = nullptr
                                    else
                                        ebx_1 = sub_46bb21(eax_17)
                                    
                                    if (ebx_1 == 0)
                                        return nullptr
                                    
                                    if (arg3 != 0)
                                        var_14_1 = 0xc01
                                    
                                    ebx_1[4] = esi_1[8]
                                    void* eax_21 = *(arg2 + 0xc)
                                    
                                    if (eax_21 == 0)
                                        arg3 = &ebx_1[5]
                                        ebx_1[5] = 1
                                    else if (sub_43e52c(eax_21, &ebx_1[5]) s< 0)
                                        var_14_1 = 0xbf2
                                        ebx_1[5] = 1
                                    
                                    arg4 *= ebx_1[5]
                                    esi_1[8] = ebx_1
                                    eax_26 = *(arg2 + 8)
                                    arg2 = eax_26
                                while (*(eax_26 + 4) != 3)
                                edi_1 = var_c_1
                            
                            int32_t eax_27 = sub_46b5aa(arg2)
                            edi_1[5] = eax_27
                            
                            if (eax_27 != 0)
                                int32_t ebx_2 = arg1[4][4]
                                
                                if (var_14_1 == 0xbf2)
                                    int32_t var_5c_52 = *(arg2 + 0x18)
                                    sub_43713d(arg1, arg2 + 0x10, 0xbf2, 
                                        "'%s': array dimensions must be literal scalar expressions")
                                else if (var_14_1 == 0xc01)
                                    int32_t var_5c_51 = *(arg2 + 0x18)
                                    sub_43713d(arg1, arg2 + 0x10, 0xc01, 
                                        "'%s': secondary array dimensions must be explicit")
                                else
                                    if (arg3 == 0)
                                        goto label_43f328
                                    
                                    if (ebx_2 == 0 || ebx_2 == 3 || ebx_2 == 4 || ebx_2 == 5)
                                        int32_t eax_34 = sub_4377a1(arg1, eax_1) * arg4
                                        
                                        if (eax_34 == 0)
                                            *arg3 = 0
                                            arg4 = nullptr
                                        label_43f328:
                                            
                                            if (arg4 u< 1 || arg4 u> 0x10000)
                                                int32_t var_5c_50 = *(arg2 + 0x18)
                                                sub_43713d(arg1, arg2 + 0x10, 0xbf3, 
                                                    "'%s': array dimension must be between 1 and 65536")
                                            else
                                                int32_t eax_40 = sub_4377a1(arg1, esi_1[8])
                                                esi_1[5] = eax_40
                                                esi_1[6] = arg1[4][4]
                                                
                                                if (arg1[4][4] == 1)
                                                    esi_1[4] = 0xffffffff
                                                else
                                                    esi_1[4] = arg1[0x16]
                                                    arg1[0x16] += eax_40
                                                
                                                arg4 = *(eax + 0x10)
                                                
                                                if (*(eax + 0x14) != 0)
                                                    int32_t var_5c_14 = (&var_34)[ebx_2]
                                                    int32_t var_60_6 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbdf, 
                                                        "'%s': %s cannot be target specific")
                                                
                                                if ((arg4:1.b & 1) != 0)
                                                    int32_t var_5c_15 = (&var_34)[ebx_2]
                                                    int32_t var_60_7 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbef, 
                                                        "'%s': %s cannot be declared 'inline'")
                                                
                                                if (ebx_2 != 1)
                                                    goto label_43f3f9
                                                
                                                if (sub_437693(arg1, esi_1[8]) == 0)
                                                label_43f4eb:
                                                    
                                                    if ((arg4.b & 2) != 0 && ebx_2 != 3
                                                            && ebx_2 != 4)
                                                        int32_t var_5c_24 = (&var_34)[ebx_2]
                                                        int32_t var_60_12 = *(arg2 + 0x18)
                                                        sub_43713d(arg1, arg2 + 0x10, 0xbbf, 
                                                            "'%s': %s cannot be declared 'static'")
                                                        arg4 &= 0xfffffffd
                                                    
                                                    if ((arg4.b & 0x40) != 0)
                                                        if (ebx_2 != 2)
                                                            int32_t var_5c_25 = (&var_34)[ebx_2]
                                                            int32_t var_60_13 = *(arg2 + 0x18)
                                                            sub_43713d(arg1, arg2 + 0x10, 0xbe7, 
                                                                "'%s': %s cannot be declared 'uniform'")
                                                            arg4 &= 0xffffffbf
                                                        
                                                        if ((arg4.b & 0x40) != 0
                                                                && (arg4.b & 0x20) != 0)
                                                            int32_t var_5c_26 = (&var_34)[ebx_2]
                                                            int32_t var_60_14 = *(arg2 + 0x18)
                                                            sub_43713d(arg1, arg2 + 0x10, 0xbf6, 
                                                                "'%s': %s cannot be declared 'uniform "
                                                            "out'")
                                                            arg4 &= 0xffffffbf
                                                    
                                                    if ((arg4.b & 1) != 0)
                                                        int32_t var_5c_27 = (&var_34)[ebx_2]
                                                        int32_t var_60_15 = *(arg2 + 0x18)
                                                        sub_43713d(arg1, arg2 + 0x10, 0xbbe, 
                                                            "'%s': %s cannot be declared 'extern'")
                                                        arg4 &= 0xfffffffe
                                                    
                                                    if ((arg4.b & 8) != 0)
                                                        int32_t var_5c_28 = (&var_34)[ebx_2]
                                                        int32_t var_60_16 = *(arg2 + 0x18)
                                                        sub_43713d(arg1, arg2 + 0x10, 0xbee, 
                                                            "'%s': %s cannot be declared 'shared'")
                                                        arg4 &= 0xfffffff7
                                                else
                                                    char const* const var_5c_17 =
                                                        "structure members"
                                                    int32_t var_60_8 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbdb, 
                                                        "'%s': %s cannot be declared 'const'")
                                                label_43f3f9:
                                                    
                                                    if (ebx_2 != 2)
                                                        goto label_43f43c
                                                    
                                                    if ((arg4.b & 0x10) != 0)
                                                        goto label_43f4eb
                                                    
                                                    if (sub_437693(arg1, esi_1[8]) == 0)
                                                        goto label_43f4eb
                                                    
                                                    int32_t var_5c_19 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbe6, 
                                                        "'%s': output paramaters cannot be declared "
                                                    "'const'")
                                                label_43f43c:
                                                    
                                                    if ((ebx_2 == 3 || ebx_2 == 4)
                                                            && sub_43772a(arg1, esi_1[8]) == 0)
                                                        int32_t var_5c_21 = (&var_34)[ebx_2]
                                                        int32_t var_60_9 = *(arg2 + 0x18)
                                                        sub_43713d(arg1, arg2 + 0x10, 0xbde, 
                                                            "'%s': %s must be numeric")
                                                    
                                                    if (ebx_2 != 0)
                                                        goto label_43f4eb
                                                    
                                                    if ((arg4.b & 2) == 0)
                                                        arg4 |= 0x41
                                                    else
                                                        if ((arg4.b & 1) != 0)
                                                            char const* const var_5c_22 =
                                                                "global variables"
                                                            int32_t var_60_10 = *(arg2 + 0x18)
                                                            sub_43713d(arg1, arg2 + 0x10, 0xbbf, 
                                                                "'%s': extern %s cannot be declared "
                                                            "'static'")
                                                            arg4 &= 0xfffffffd
                                                        
                                                        if ((arg4.b & 2) == 0)
                                                            arg4 |= 0x41
                                                        else
                                                            if ((arg4.b & 0x40) != 0)
                                                                char const* const var_5c_23 =
                                                                    "global variables"
                                                                int32_t var_60_11 = *(arg2 + 0x18)
                                                                sub_43713d(arg1, arg2 + 0x10, 0xbbf, 
                                                                    "'%s': uniform %s cannot be declared "
                                                                "'static'")
                                                                arg4 &= 0xfffffffd
                                                            
                                                            if ((arg4.b & 2) == 0)
                                                                arg4 |= 0x41
                                                
                                                if ((arg4.b & 4) != 0 && ebx_2 != 3 && ebx_2 != 4
                                                        && ebx_2 != 2)
                                                    int32_t var_5c_29 = (&var_34)[ebx_2]
                                                    int32_t var_60_17 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbc0, 
                                                        "'%s': %s cannot be declared 'volatile'")
                                                    arg4 &= 0xfffffffb
                                                
                                                if (ebx_2 == 5)
                                                    sub_437571(arg1, esi_1[8], 1)
                                                    arg4 |= 0x40
                                                
                                                void*** var_18_3 = nullptr
                                                esi_1[7] = arg4
                                                
                                                if (arg5 == 0)
                                                    if ((ebx_2 == 0 || ebx_2 == 3 || ebx_2 == 4)
                                                            && (arg4.b & 2) != 0)
                                                        int32_t* var_60_22 = arg4
                                                        int32_t* var_64_4 = arg4
                                                        var_64_4.q = fconvert.d(float.t(0))
                                                        esi_1[9] =
                                                            sub_439b14(5, 0, var_64_4, arg2 + 0x10)
                                                else if (arg5[1] != 0xd)
                                                    void* eax_46 = esi_1[9]
                                                    
                                                    if (eax_46 == 0)
                                                        arg5 = nullptr
                                                    else
                                                        arg5 = *(eax_46 + 0x10)
                                                    
                                                    int32_t eax_48 = sub_4377a1(arg1, arg5)
                                                    
                                                    if (esi_1[5] != eax_48)
                                                        sub_439635(arg1, arg2 + 0x10, 
                                                            *(arg2 + 0x18), esi_1[8], arg5, 1)
                                                        esi_1[9] = 0
                                                    else
                                                        int32_t var_60_20 = 0
                                                        esi_1[9] =
                                                            sub_43c606(arg1, esi_1[8], eax_46, 0, 1)
                                                else
                                                    int32_t var_60_19 = 0
                                                    esi_1[9] =
                                                        sub_43c606(arg1, esi_1[8], arg5, 0, 0)
                                                
                                                if (esi_1[9] == 0)
                                                    if (ebx_2 != 0)
                                                    label_43f82a:
                                                        
                                                        if (ebx_2 != 3 && ebx_2 != 4)
                                                            if (ebx_2 != 5)
                                                                goto label_43f865
                                                            
                                                            goto label_43f848
                                                        
                                                        if (sub_437693(arg1, esi_1[8]) != 0
                                                                || ebx_2 == 5)
                                                            goto label_43f848
                                                        
                                                        goto label_43f865
                                                    
                                                    if (sub_437693(arg1, esi_1[8]) != 0)
                                                        if ((arg4.b & 2) == 0)
                                                            goto label_43f82a
                                                        
                                                    label_43f848:
                                                        int32_t var_5c_46 = (&var_4c)[ebx_2]
                                                        int32_t var_60_31 = *(arg2 + 0x18)
                                                        sub_43713d(arg1, arg2 + 0x10, 0xbc4, 
                                                            "'%s': missing %s")
                                                    label_43f865:
                                                        
                                                        if (ebx_2 != 0 && ebx_2 != 1 && ebx_2 != 2
                                                                && esi_1[0xb] != 0)
                                                            int32_t var_5c_47 = (&var_34)[ebx_2]
                                                            int32_t var_60_32 = *(arg2 + 0x18)
                                                            sub_43713d(arg1, arg2 + 0x10, 0xbe3, 
                                                                "'%s': %s cannot have semantics")
                                                            esi_1[9] = 0
                                                else if (ebx_2 != 1)
                                                    int32_t eax_50
                                                    
                                                    if (ebx_2 == 2)
                                                        eax_50 = sub_43772a(arg1, esi_1[8])
                                                    
                                                    if (ebx_2 != 2 || eax_50 != 0)
                                                        void*** eax_51 = arg4
                                                        void* temp5_1 = eax_51 & 0x10
                                                        
                                                        if (temp5_1 != 0 || (eax_51.b & 0x20) == 0)
                                                            void* temp6_1 = eax_51 & 0x50
                                                            int32_t eax_52
                                                            
                                                            if (temp6_1 != 0)
                                                                eax_52 = sub_4380be(esi_1[9])
                                                            
                                                            if (temp6_1 == 0 || eax_52 != 0)
                                                                int32_t eax_54 = sub_4392fd(arg1, 
                                                                    esi_1[8], esi_1[9][4], 0)
                                                                
                                                                if (eax_54 != 0)
                                                                    void* eax_57 = arg4 & 0x40
                                                                    
                                                                    if (eax_57 != 0)
                                                                        esi_1[0xa] = sub_43e401(arg1, esi_1[9])
                                                                    
                                                                    int32_t eax_59
                                                                    
                                                                    if (temp6_1 == 0)
                                                                        eax_59 = sub_437693(arg1, esi_1[8])
                                                                    
                                                                    if (temp6_1 != 0 || eax_59 == 0)
                                                                        if (temp5_1 != 0 || eax_57 == 0)
                                                                            void*** eax_61 = esi_1[9]
                                                                            esi_1[9] = 0
                                                                            var_18_3 = sub_43eb4f(arg1, 0x14, 
                                                                                sub_43c4ff(arg1, arg2, esi_1), eax_61, 
                                                                                1)
                                                                        else
                                                                            esi_1[9] = nullptr
                                                                    else
                                                                        esi_1[9] = sub_43e401(arg1, esi_1[9])
                                                                else
                                                                    sub_439635(arg1, arg2 + 0x10, 
                                                                        *(arg2 + 0x18), esi_1[8], esi_1[9][4], 
                                                                        eax_54)
                                                                    esi_1[9] = 0
                                                            else
                                                                int32_t var_5c_38 = (&var_4c)[ebx_2]
                                                                int32_t var_60_26 = *(arg2 + 0x18)
                                                                sub_43713d(arg1, arg2 + 0x10, 0xbc3, 
                                                                    "'%s': %s must be a literal expression")
                                                                esi_1[9] = 0
                                                        else
                                                            int32_t var_5c_36 = (&var_4c)[ebx_2]
                                                            int32_t var_60_25 = (&var_34)[ebx_2]
                                                            int32_t var_64_7 = *(arg2 + 0x18)
                                                            sub_43713d(arg1, arg2 + 0x10, 0xbe5, 
                                                                "'%s': output only %s cannot have %ss")
                                                            esi_1[9] = 0
                                                        
                                                        goto label_43f865
                                                    
                                                    char const* const var_5c_35 = "default value"
                                                    char const* const var_60_24 =
                                                        "function parameters"
                                                    int32_t var_64_6 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbc1, 
                                                        "'%s': non-numeric uniform %s cannot have %ss")
                                                    esi_1[9] = 0
                                                else
                                                    char const* const var_5c_33 = "initializer"
                                                    char const* const var_60_23 =
                                                        "structure members"
                                                    int32_t var_64_5 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbc1, 
                                                        "'%s': %s cannot have %ss")
                                                    esi_1[9] = 0
                                                
                                                if (var_c_1[7] != 0 && ebx_2 != 0 && ebx_2 != 2)
                                                    int32_t var_5c_48 = (&var_34)[ebx_2]
                                                    int32_t var_60_33 = *(arg2 + 0x18)
                                                    sub_43713d(arg1, arg2 + 0x10, 0xbe0, 
                                                        "'%s': %s cannot have annotations")
                                                    var_c_1[7] = 0
                                                
                                                if (sub_438816(arg1, var_c_1, 0) s>= 0)
                                                    if (var_18_3 == 0)
                                                        return result
                                                    
                                                    void*** eax_69 = sub_438224(var_18_3)
                                                    result[3] = eax_69
                                                    
                                                    if (eax_69 != 0)
                                                        return result
                                        else
                                            void* eax_35 = esi_1[9]
                                            
                                            if (eax_35 == 0 || *(eax_35 + 4) != 0xd)
                                                int32_t var_5c_12 = (&var_4c)[ebx_2]
                                                int32_t var_60_5 = *(arg2 + 0x18)
                                                sub_43713d(arg1, arg2 + 0x10, 0xc02, 
                                                    "'%s': implicit array missing %s")
                                            else
                                                int32_t eax_36 = sub_4377a1(arg1, *(eax_35 + 0x10))
                                                int32_t edx_1 = 0
                                                uint32_t temp0_1 = divu.dp.d(edx_1:eax_36, eax_34)
                                                
                                                if (modu.dp.d(edx_1:eax_36, eax_34) == 0)
                                                    *arg3 = temp0_1
                                                    arg4 *= temp0_1
                                                    goto label_43f328
                                                
                                                int32_t var_5c_11 = (&var_4c)[ebx_2]
                                                int32_t var_60_4 = *(arg2 + 0x18)
                                                sub_43713d(arg1, arg2 + 0x10, 0xc03, 
                                                    "'%s': implicit array type does not match %s")
                                    else
                                        int32_t var_5c_8 = (&var_34)[ebx_2]
                                        int32_t var_60_3 = *(arg2 + 0x18)
                                        sub_43713d(arg1, arg2 + 0x10, 0xc00, 
                                            "'%s': array dimensions of %s must be explicit")
                    else
                        int32_t eax_10 = sub_46b5aa(i)
                        esi_1[0xc] = eax_10
                        
                        if (eax_10 != 0)
                            do
                                int32_t* eax_11 = i[2]
                                
                                if (eax_11 != 0 && eax_11[1] == 3)
                                    int32_t eax_12 = sub_46b5aa(eax_11)
                                    esi_1[0xb] = eax_12
                                    
                                    if (eax_12 == 0)
                                        return nullptr
                                
                                i = i[3]
                            while (i != 0)
                            
                            goto label_43f17c
                else
                    int32_t eax_9 = sub_46b5aa(arg4)
                    edi_1[7] = eax_9
                    
                    if (eax_9 != 0)
                        goto label_43f134

return nullptr

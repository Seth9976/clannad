// 函数: sub_4302e7
// 地址: 0x4302e7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* esi = arg2
int32_t* i = esi[0xa]
int32_t edi
int32_t var_50 = edi
int32_t edi_1 = 0
int32_t var_c = 0
int32_t var_20 = 0
int32_t var_10 = 0
int32_t var_2c = 0
uint32_t arg_20

for (; i != 0; i = i[0xa])
    if (*esi == *i)
        if (arg_20 != 0xffffffff)
            goto label_430c18
        
        if (esi[1] == i[1])
            goto label_430c18

uint32_t ebx_2 = esi[2]
int32_t edx_2 = esi[3]
arg2 = *esi
int32_t var_34_1 = esi[1]
int32_t var_24 = esi[4]
int32_t var_28 = esi[5]
int32_t var_30 = esi[6]
arg_20 = esi[8]
int32_t eax_6 = *(ebx_2 + 4)
int32_t var_18 = edx_2
char const* const var_58_1
int32_t* var_14

if (eax_6 == 1)
    void* eax_22 = *(ebx_2 + 8)
    
    if (eax_22 != 0)
        int32_t ecx_15 = *(eax_22 + 4)
        
        if (ecx_15 == 3)
            int32_t ecx_56 = *(eax_22 + 0x10)
            int32_t** var_54_11
            
            if (ecx_56 s< 5 || ecx_56 s> 8)
                arg_20 = 0
                uint32_t edx_6 = ebx_2
                
                while (true)
                    if (edx_6 == 0)
                        void* eax_51 = arg2 * 0x1c
                        int32_t ecx_64 = *(eax_51 + 0xab87a4)
                        
                        if (ecx_64 == "D")
                            if (arg_20 == 0)
                                sub_42aba3(arg1 + 0x28, esi[9], 0, 
                                    "ID3DXEffectCompiler: FVFs must not evaluate to NULL")
                                goto label_430c18
                        else if (ecx_64 == 0x9000000)
                        label_430c93:
                            
                            if (arg_20 != 0)
                                int32_t var_54_18 = *(eax_51 + &data_ab8790)
                                var_58_1 = "ID3DXEffectCompiler: Dword expressions for state '%s' "
                                "must be evaluate to NULL"
                                goto label_430388
                        else if (ecx_64 != 0xa000000)
                            if (ecx_64 == 0xb000000)
                                goto label_430c93
                            
                            if (ecx_64 == 0xe000000)
                                goto label_430c18
                            
                            if (ecx_64 == 0xf000000)
                                goto label_430c18
                        else if (arg_20 != 0)
                            arg2 = nullptr
                            char const (** const eax_94)[0x8] = &data_ab8790
                            
                            while (eax_94[5] != "D")
                                arg2 += 1
                                eax_94 = &eax_94[7]
                                
                                if (*eax_94 == 0)
                                    break
                            
                            int32_t var_2c_1 = 1
                        
                        var_54_11 = &var_14
                        break
                    
                    if (*(edx_6 + 4) != 1)
                        goto label_430c18
                    
                    void* ebx_4 = *(edx_6 + 8)
                    
                    if (ebx_4 == 0)
                        goto label_430c18
                    
                    if (*(ebx_4 + 4) != 3)
                        goto label_430c18
                    
                    int32_t eax_43 = *(ebx_4 + 0x10)
                    
                    if (eax_43 s>= 2)
                        int32_t eax_49
                        
                        if (eax_43 s<= 4)
                            eax_49 = *(ebx_4 + 0x18)
                        label_430920:
                            arg_20 |= eax_49
                            edx_6 = *(edx_6 + 0xc)
                            continue
                        else if (eax_43 == 9)
                            if (*(ebx_4 + 0x18) == 0)
                                goto label_430c18
                            
                            void* ecx_59 = &(&data_ab87a8)[arg2 * 7]
                            int32_t* eax_44 = *ecx_59
                            
                            if (eax_44 == 0)
                            label_430c1f:
                                int32_t var_54_16 = *(ebx_4 + 0x18)
                                int32_t var_58_8 = (&data_ab8790)[arg2 * 7]
                                sub_42aba3(arg1 + 0x28, esi[9], 0, 
                                    "ID3DXEffectCompiler: State '%s' does not accept '%s' as a value")
                                goto label_430c18
                            
                            arg4 = 0
                            
                            if (*eax_44 != 0)
                                do
                                    if (__stricmp(eax_44[arg4 * 2], *(ebx_4 + 0x18)) == 0)
                                        break
                                    
                                    arg4 += 1
                                    eax_44 = *ecx_59
                                while (eax_44[arg4 * 2] != 0)
                            
                            int32_t* eax_48 = *ecx_59 + (arg4 << 3)
                            
                            if (*eax_48 == 0)
                                goto label_430c1f
                            
                            eax_49 = eax_48[1]
                            goto label_430920
                    
                    int32_t var_54_17 = (&data_ab8790)[arg2 * 7]
                    var_58_1 = "ID3DXEffectCompiler: State '%s' accepts only dwords and ids"
                    goto label_430388
            else
                var_54_11 = &var_14
                arg_20 = fconvert.s(fconvert.t(*(eax_22 + 0x18)))
            
            edi_1 = sub_42f442(arg7, &arg_20, 4, var_54_11)
            
            if (edi_1 s>= 0)
                goto label_4309a4
        else
            if (ecx_15 != 0xd)
                goto label_4309a4
            
            float* eax_23 = sub_745f3f(arg_20)
            
            if (eax_23 != 0)
                uint32_t ecx_17 = arg_20
                __builtin_memset(__builtin_memset(eax_23, 0, ecx_17 u>> 2 << 2), 0, ecx_17 & 3)
                uint32_t edx_5 = esi[2]
                arg3 = edx_5
                int16_t x87control
                
                if (edx_5 == 0)
                label_430699:
                    uint32_t eax_31 = eax_23
                    bool cond:13_1
                    
                    if (*(arg2 * 0x1c + 0xab8794) != 0xf20000)
                        edi_1 = sub_42f442(arg7, eax_23, arg_20, &var_14)
                        cond:13_1 = edi_1 s< 0
                    else
                        float ecx_50 = *eax_31
                        long double x87_r7_6 = fconvert.t(*(eax_31 + 0xc))
                        long double x87_r6_2 = fconvert.t(1f)
                        long double x87_r5_1 = fconvert.t(ecx_50)
                        float ecx_51 = *(eax_31 + 4)
                        x87_r5_1 - x87_r6_2
                        float ecx_52 = *(eax_31 + 8)
                        long double x87_r5_2 = fconvert.t(0f)
                        eax_31.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                            | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
                        
                        if ((eax_31:1.b & 1) != 0)
                            long double x87_r4_1 = fconvert.t(ecx_50)
                            x87_r4_1 - x87_r5_2
                            eax_31.w = (x87_r4_1 < x87_r5_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r4_1, x87_r5_2) ? 1 : 0) << 0xa
                                | (x87_r4_1 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800
                            bool p_2 = unimplemented  {test ah, 0x41}
                            
                            if (p_2)
                                eax_31, x87control = __ftol(x87control, 
                                    fconvert.t(ecx_50) * fconvert.t(255f) + fconvert.t(0.5f))
                                arg_20 = eax_31
                            else
                                arg_20 = 0
                        else
                            arg_20 = 0xff
                        
                        long double x87_r4_5 = fconvert.t(ecx_51)
                        x87_r4_5 - x87_r6_2
                        eax_31.w = (x87_r4_5 < x87_r6_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_5, x87_r6_2) ? 1 : 0) << 0xa
                            | (x87_r4_5 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
                        
                        if ((eax_31:1.b & 1) != 0)
                            long double x87_r4_6 = fconvert.t(ecx_51)
                            x87_r4_6 - x87_r5_2
                            eax_31.w = (x87_r4_6 < x87_r5_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r4_6, x87_r5_2) ? 1 : 0) << 0xa
                                | (x87_r4_6 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800
                            bool p_3 = unimplemented  {test ah, 0x41}
                            
                            if (p_3)
                                eax_31, x87control = __ftol(x87control, 
                                    fconvert.t(ecx_51) * fconvert.t(255f) + fconvert.t(0.5f))
                                arg3 = eax_31
                            else
                                arg3 = 0
                        else
                            arg3 = 0xff
                        
                        long double x87_r4_10 = fconvert.t(ecx_52)
                        x87_r4_10 - x87_r6_2
                        eax_31.w = (x87_r4_10 < x87_r6_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_10, x87_r6_2) ? 1 : 0) << 0xa
                            | (x87_r4_10 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
                        uint32_t ebx_3
                        
                        if ((eax_31:1.b & 1) != 0)
                            long double x87_r4_11 = fconvert.t(ecx_52)
                            x87_r4_11 - x87_r5_2
                            eax_31.w = (x87_r4_11 < x87_r5_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r4_11, x87_r5_2) ? 1 : 0) << 0xa
                                | (x87_r4_11 == x87_r5_2 ? 1 : 0) << 0xe | 0x3000
                            bool p_4 = unimplemented  {test ah, 0x41}
                            
                            if (p_4)
                                eax_31, x87control = __ftol(x87control, 
                                    fconvert.t(ecx_52) * fconvert.t(255f) + fconvert.t(0.5f))
                                ebx_3 = eax_31
                            else
                                ebx_3 = 0
                        else
                            x87_r6_2 = x87_r5_2
                            ebx_3 = 0xff
                        
                        x87_r7_6 - x87_r6_2
                        eax_31.w = (x87_r7_6 < x87_r6_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_6, x87_r6_2) ? 1 : 0) << 0xa
                            | (x87_r7_6 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
                        int32_t eax_34
                        
                        if ((eax_31:1.b & 1) != 0)
                            long double temp4_1 = fconvert.t(0f)
                            x87_r7_6 - temp4_1
                            eax_31.w = (x87_r7_6 < temp4_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe | 0x3800
                            bool p_5 = unimplemented  {test ah, 0x41}
                            
                            if (p_5)
                                eax_34 = __ftol(x87control, 
                                    x87_r7_6 * fconvert.t(255f) + fconvert.t(0.5f))
                            else
                                eax_34 = 0
                        else
                            eax_34 = 0xff
                        
                        int32_t eax_38 = (eax_34 << 8 | arg_20) << 8 | arg3
                        var_18 = 2
                        arg_20 = eax_38 << 8 | ebx_3
                        var_24 = 1
                        var_28 = 1
                        edi_1 = sub_42f442(arg7, &arg_20, 4, &var_14)
                        cond:13_1 = edi_1 s< 0
                    
                    if (cond:13_1)
                        goto label_430c04
                    
                    j__free(eax_23)
                    int32_t var_c_3 = 0
                    goto label_4309a4
                
                float* edi_6 = eax_23
                
                while (*(edx_5 + 4) == 1)
                    void* eax_24 = *(edx_5 + 8)
                    
                    if (eax_24 == 0)
                        break
                    
                    if (*(eax_24 + 4) != 0xd)
                        break
                    
                    arg4 = 0
                    
                    if (*(eax_24 + 0x1c) == 5)
                        void* ecx_21 = *(eax_24 + 0x20)
                        
                        if (ecx_21 != 0 && *(ecx_21 + 4) == 0xd)
                            arg4 = 1
                            
                            do
                                eax_24 = ecx_21
                                
                                if (*(eax_24 + 0x1c) != 0)
                                    break
                                
                                void* ecx_22 = *(eax_24 + 0x20)
                                
                                if (ecx_22 == 0)
                                    break
                                
                                if (*(ecx_22 + 4) != 1)
                                    break
                                
                                ecx_21 = *(ecx_22 + 8)
                                
                                if (ecx_21 == 0)
                                    break
                            while (*(ecx_21 + 4) == 0xd)
                    
                    char* var_54_7
                    
                    if (*(eax_24 + 0x1c) != 0)
                        var_54_7 = "ID3DXEffectCompiler: Initializer list elements cannot be complex "
                        "expressions or variables"
                    else
                        void* eax_25 = *(eax_24 + 0x20)
                        
                        if (eax_25 == 0 || *(eax_25 + 4) != 1)
                            var_54_7 = "ID3DXEffectCompiler: Initializer list elements cannot be "
                            "complex expressions or variables"
                        else
                            void* eax_26 = *(eax_25 + 8)
                            
                            if (eax_26 == 0 || *(eax_26 + 4) != 0xe || *(eax_26 + 0x10) == 6)
                                var_54_7 = "ID3DXEffectCompiler: Initializer list elements cannot be "
                                "complex expressions or variables"
                            else
                                int32_t ecx_25 = *(arg2 * 0x1c + 0xab8794)
                                
                                if (ecx_25 == 1)
                                    int32_t ecx_42 = *(eax_26 + 0x10)
                                    
                                    if (ecx_42 == 0 || ecx_42 == 1 || ecx_42 == 2)
                                        float ecx_47
                                        ecx_47.b = *(eax_26 + 0x18) != 0
                                        *edi_6 = ecx_47
                                    label_430685:
                                        edx_5 = *(edx_5 + 0xc)
                                        edi_6 = &edi_6[1]
                                        arg3 = edx_5
                                        
                                        if (edx_5 == 0)
                                            goto label_430699
                                        
                                        continue
                                    else
                                        if (ecx_42 == 3)
                                            long double x87_r7_5 = fconvert.t(*(eax_26 + 0x18))
                                            long double x87_r6_1 = fconvert.t(0.0)
                                            x87_r6_1 - x87_r7_5
                                            eax_26.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0)
                                                << 0xa | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe
                                            bool p_1 = unimplemented  {test ah, 0x44}
                                            float eax_30
                                            
                                            eax_30 = not(p_1) ? 0f : 1.40129846e-45f
                                            
                                            *edi_6 = eax_30
                                            goto label_430685
                                        
                                        var_54_7 = "ID3DXEffectCompiler: Unexpected error"
                                else if (ecx_25 == 2)
                                    int32_t ecx_36 = *(eax_26 + 0x10)
                                    
                                    if (ecx_36 == 0)
                                        float ecx_41
                                        ecx_41.b = *(eax_26 + 0x18) != 0
                                        *edi_6 = ecx_41
                                    label_430641:
                                        
                                        if (arg4 == 0)
                                            goto label_430685
                                        
                                        *edi_6 = neg.d(*edi_6)
                                        goto label_430685
                                    
                                    if (ecx_36 == 1 || ecx_36 == 2)
                                        *edi_6 = *(eax_26 + 0x18)
                                        goto label_430641
                                    
                                    if (ecx_36 == 3)
                                        float eax_28
                                        eax_28, x87control =
                                            __ftol(x87control, fconvert.t(*(eax_26 + 0x18)))
                                        edx_5 = arg3
                                        *edi_6 = eax_28
                                        goto label_430641
                                    
                                    var_54_7 = "ID3DXEffectCompiler: Unexpected error"
                                else if (ecx_25 == 3 || ecx_25 == 0xf20000)
                                    int32_t ecx_30 = *(eax_26 + 0x10)
                                    long double x87_r7_1
                                    
                                    if (ecx_30 == 0)
                                        uint32_t ecx_35
                                        ecx_35.b = *(eax_26 + 0x18) != 0
                                        x87_r7_1 = float.t(ecx_35)
                                    label_4305fd:
                                        *edi_6 = fconvert.s(x87_r7_1)
                                        
                                        if (arg4 != 0)
                                            *edi_6 = fconvert.s(fneg(fconvert.t(*edi_6)))
                                        
                                        goto label_430685
                                    
                                    if (ecx_30 == 1)
                                        x87_r7_1 = float.t(*(eax_26 + 0x18))
                                        goto label_4305fd
                                    
                                    if (ecx_30 == 2)
                                        uint32_t eax_27 = *(eax_26 + 0x18)
                                        x87_r7_1 = float.t(eax_27)
                                        
                                        if (eax_27 s< 0)
                                            x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
                                        
                                        goto label_4305fd
                                    
                                    if (ecx_30 == 3)
                                        x87_r7_1 = fconvert.t(*(eax_26 + 0x18))
                                        goto label_4305fd
                                    
                                    var_54_7 = "ID3DXEffectCompiler: Unexpected error"
                                else
                                    var_54_7 = "ID3DXEffectCompiler: Error in type checking"
                    
                    sub_42aba3(arg1 + 0x28, esi[9], 0, var_54_7)
                    break
                
                goto label_430c04
            
        label_430c04:
            
            if (ebp_1[-2] != 0)
                j__free(ebp_1[-2])
else if (eax_6 == 0xd)
    if (edx_2 s< 5)
    label_4303b8:
        int32_t eax_13 = sub_745f3f(arg_20)
        
        if (eax_13 == 0)
            goto label_430c04
        
        uint32_t ecx_1 = arg_20
        __builtin_memset(__builtin_memset(eax_13, 0, ecx_1 u>> 2 << 2), 0, ecx_1 & 3)
        edi_1 = sub_42f442(arg7, eax_13, ecx_1, &var_14)
        
        if (edi_1 s< 0)
            goto label_430c04
        
        goto label_4303fb
    
    if (edx_2 s<= 9)
        goto label_43042b
    
    if (edx_2 s<= 0xe)
        edi_1 = sub_42f442(arg7, &var_10, 4, &var_14)
        
        if (edi_1 s>= 0)
            goto label_4303fb
    else
        if (edx_2 s> 0x10)
            if (edx_2 == &data_f30000)
                goto label_4303fb
            
            goto label_4303b8
        
        *(arg1 + 0x334) += 1
    label_43042b:
        edi_1 = sub_42f442(arg7, arg1 + 0x330, 4, &var_14)
        
        if (edi_1 s>= 0)
            *(arg1 + 0x330) += 1
        label_4303fb:
            int32_t* eax_15 = sub_745f3f(0x24)
            
            if (eax_15 == 0)
                eax_15 = nullptr
            else
                eax_15[6] = 0
                int32_t* var_20_1 = eax_15
            
            if (eax_15 == 0)
                goto label_430c04
            
            *eax_15 = arg2
            eax_15[1] = arg3
            eax_15[2] = arg4
            eax_15[3] = arg5
            eax_15[4] = *arg6
            eax_15[5] = ebx_2
        label_4309a4:
            int32_t eax_53 = var_18
            int32_t* var_1c
            
            if (eax_53 == 0)
                int32_t var_54_20 = 0
                int32_t** var_58_9 = &var_1c
                int32_t var_5c_31 = 0
                void* var_60_5 = arg7
                int32_t eax_109
                eax_109, ebp_1, edi_1 =
                    sub_42fdc0(arg1, esi, edi_1, *(esi[2] + 0x10), nullptr, nullptr, nullptr)
                
                if (eax_109 s>= 0)
                label_430a5b:
                    void* ebx_5 = ebp_1[7]
                    
                    if (sub_42f442(ebx_5, &ebp_1[2], 4, nullptr) s>= 0
                            && sub_42f442(ebx_5, &ebp_1[-0xc], 4, nullptr) s>= 0
                            && sub_42f54b(ebx_5, ebp_1[-6], nullptr) s>= 0)
                        int32_t esi_1 = ebp_1[-4]
                        
                        if (sub_42f54b(ebx_5, esi_1, nullptr) s>= 0)
                            void* eax_66 = ebp_1[-7]
                            
                            if (eax_66 != 0)
                                *(eax_66 + 0x20) = ebp_1[-6]
                                void** ecx_77 = ebp_1[-1] + 0x354
                                ebp_1[-7] = 0
                                *(eax_66 + 0x1c) = esi_1
                                *(eax_66 + 0x18) = *ecx_77
                                *ecx_77 = eax_66
                            
                            int32_t* eax_67 = ebp_1[6]
                            *eax_67 += 1
                            
                            if (ebp_1[-0xa] != 0)
                                void* ecx_79 = ebp_1[8]
                                ebp_1[2] = 4
                                ebp_1[-5] = 0x10
                                
                                if (sub_42f442(ecx_79, &ebp_1[-5], 4, &ebp_1[-6]) s>= 0
                                        && sub_42f442(ebp_1[8], &ebp_1[2], 4, nullptr) s>= 0
                                        && sub_42f442(ebp_1[8], &ebp_1[-3], 4, nullptr) s>= 0
                                        && sub_42f442(ebp_1[8], &ebp_1[-3], 4, nullptr) s>= 0
                                        && sub_42f442(ebp_1[8], &ebp_1[-3], 4, nullptr) s>= 0)
                                    ebp_1[2] = 0
                                    char const (** const eax_78)[0x8] = &data_ab8790
                                    
                                    while (eax_78[5] != 0xa000000)
                                        ebp_1[2] += 1
                                        eax_78 = &eax_78[7]
                                        
                                        if (*eax_78 == 0)
                                            break
                                    
                                    if (sub_42f442(ebx_5, &ebp_1[2], 4, nullptr) s>= 0
                                            && sub_42f442(ebx_5, &ebp_1[-3], 4, nullptr) s>= 0
                                            && sub_42f54b(ebx_5, ebp_1[-6], nullptr) s>= 0
                                            && sub_42f442(ebx_5, &ebp_1[-3], 4, nullptr) s>= 0)
                                        int32_t* eax_86 = ebp_1[6]
                                        *eax_86 += 1
                else
                    sub_42aba3(ebp_1[-1] + 0x28, esi[9], 0, 
                        "ID3DXEffectCompiler: Error initializing assignment type")
            else if (eax_53 s<= 0)
                sub_42aba3(arg1 + 0x28, esi[9], 0, 
                    "ID3DXEffectCompiler: Internal error initializing assignment - missing type case")
            else
                int32_t* eax_58
                
                if (eax_53 s<= 3)
                    int32_t eax_99 = *(arg2 * 0x1c + 0xab87a4)
                    bool cond:11_1
                    
                    if (eax_99 u> 0xd000004)
                        if (eax_99 == 0xd010000)
                            arg_20 = 3
                        else
                            cond:11_1 = eax_99 == 0xd020000
                        label_430d1a:
                            
                            arg_20 = cond:11_1 ? 3 : 2
                    else if (eax_99 u>= 0xd000000)
                        arg_20 = 3
                    else if (eax_99 u< 0xc000000)
                        arg_20 = 2
                    else
                        if (eax_99 u> 0xc000004 && eax_99 != 0xc010000)
                            cond:11_1 = eax_99 == 0xc020000
                            goto label_430d1a
                        
                        arg_20 = 3
                    
                    if (sub_42f442(arg7, &var_18, 4, &var_1c) s>= 0
                            && sub_42f442(arg7, &arg_20, 4, nullptr) s>= 0
                            && sub_42f442(arg7, &var_10, 4, nullptr) s>= 0
                            && sub_42f442(arg7, &var_10, 4, nullptr) s>= 0
                            && sub_42f442(arg7, &var_30, 4, nullptr) s>= 0
                            && sub_42f442(arg7, &var_24, 4, nullptr) s>= 0)
                        eax_58 = &var_28
                        goto label_430a51
                else if (eax_53 s<= 4 || eax_53 s> 0x10)
                    sub_42aba3(arg1 + 0x28, esi[9], 0, 
                        "ID3DXEffectCompiler: Internal error initializing assignment - missing type case")
                else
                    arg_20 = 4
                    
                    if (sub_42f442(arg7, &var_18, 4, &var_1c) s>= 0
                            && sub_42f442(arg7, &arg_20, 4, nullptr) s>= 0
                            && sub_42f442(arg7, &var_10, 4, nullptr) s>= 0
                            && sub_42f442(arg7, &var_10, 4, nullptr) s>= 0)
                        eax_58 = &var_10
                    label_430a51:
                        
                        if (sub_42f442(arg7, eax_58, 4, nullptr) s>= 0)
                            goto label_430a5b
            void* ecx_88 = ebp_1[-7]
            
            if (ecx_88 != 0)
                sub_42f3a5(ecx_88, 1)
            
            goto label_430c04
else
    int32_t var_54_1 = (&data_ab8790)[arg2 * 7]
    var_58_1 = "ID3DXEffectCompiler: State '%s' was assigned an unsupported value"
label_430388:
    sub_42aba3(arg1 + 0x28, esi[9], 0, var_58_1)
label_430c18:
*ebp_1

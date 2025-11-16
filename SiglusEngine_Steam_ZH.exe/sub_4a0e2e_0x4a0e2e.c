// 函数: sub_4a0e2e
// 地址: 0x4a0e2e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ebx
int32_t var_20 = ebx
int32_t edi
int32_t var_24 = edi
int32_t* esp_1 = &var_24
char* eax_1 = *(*(arg1 + 0x14) + (arg2 << 2))
int32_t result

if (*(eax_1 + 8) != 0xffffffff || (*eax_1 & 1) == 0
        || (*(*(*(arg1 + 0x10) + (*(eax_1 + 4) << 2)) + 4) & 2) == 0)
    result = 0x80004005
else
    int32_t* edx_2 = *(*(arg1 + 0x18) + (*(eax_1 + 0x48) << 2))
    int32_t eax_3 = edx_2[3]
    int32_t ecx_3 = 0
    int32_t esi
    int32_t var_28 = esi
    int32_t* esp_2 = &var_28
    
    if (eax_3 u> 0)
        int32_t* esi_1 = edx_2[4]
        
        while (*esi_1 != arg2)
            ecx_3 += 1
            esi_1 = &esi_1[1]
            
            if (ecx_3 u>= eax_3)
                break
    
    if (ecx_3 == eax_3)
        result = 0x80004005
    else
        int32_t esi_3 = *edx_2 & 0xfff00000
        int32_t var_40
        
        if (esi_3 == 0x10000000)
            int32_t* var_2c_1 = arg7
            int32_t* var_30_1 = arg6
            int32_t* var_34_1 = arg5
            int32_t* var_38_1 = arg4
            int32_t* var_3c_1 = arg3
            var_40 = *(edx_2[2] + (ecx_3 << 2))
            esp_2 = &var_40
        label_4a0f07:
            result = sub_4a0e2e()
            
            if (result s>= 0)
                result = 0
        else if (esi_3 == 0x20500000)
            int32_t edx_3 = edx_2[2]
            int32_t esi_4 = *(edx_3 + (ecx_3 << 2))
            int32_t ebx_2 = *(edx_3 + ((eax_3 + ecx_3) << 2))
            var_40 = esi_4
            esp_2 = &var_40
            result = sub_4a0e2e(var_40, arg3, arg4, arg5, arg6, arg7)
            
            if (result s>= 0)
                if (esi_4 != ebx_2)
                    int32_t* var_44_1 = arg7
                    int32_t* var_48_1 = arg6
                    int32_t* var_4c_1 = arg5
                    int32_t* var_50_1 = arg4
                    int32_t* var_54_1 = arg3
                    int32_t var_58 = ebx_2
                    esp_2 = &var_58
                    goto label_4a0f07
                
                result = 0
        else
            int32_t* ecx_7
            int32_t* ecx_9
            int32_t edx_5
            int32_t esi_5
            
            if (esi_3 == 0x20200000)
                int32_t edx_4 = edx_2[2]
                esi_5 = *(edx_4 + (ecx_3 << 2))
                edx_5 = *(edx_4 + ((eax_3 + ecx_3) << 2))
                int32_t eax_8 = *arg3
                int32_t* eax_10
                
                if (eax_8 == 0xffffffff || edx_5 == eax_8)
                    eax_10 = *(*(arg1 + 0x14) + (esi_5 << 2))
                
                if ((eax_8 != 0xffffffff && edx_5 != eax_8)
                        || (*(*(*(arg1 + 0x10) + (eax_10[1] << 2)) + 4) & 0x100) == 0
                        || eax_10[2] != 0xffffffff)
                    int32_t eax_17 = *arg3
                    
                    if (eax_17 == 0xffffffff || esi_5 == eax_17)
                        int32_t* eax_19 = *(*(arg1 + 0x14) + (edx_5 << 2))
                        
                        if ((*(*(*(arg1 + 0x10) + (eax_19[1] << 2)) + 4) & 0x100) == 0
                                || eax_19[2] != 0xffffffff)
                            result = 0x80004005
                        else
                            ecx_9 = arg7
                            int32_t eax_23 = *ecx_9
                            
                            if (eax_23 == 0xffffffff)
                            label_4a0fe9:
                                *arg3 = esi_5
                                *ecx_9 = edx_5
                                result = 0
                            else
                                int32_t edi_4 = *(arg1 + 0x14)
                                long double x87_r7_2 =
                                    fconvert.t(*(*(edi_4 + (eax_23 << 2)) + 0x20))
                                long double temp3_1 = fconvert.t(*(*(edi_4 + (edx_5 << 2)) + 0x20))
                                x87_r7_2 - temp3_1
                                void* eax_24
                                eax_24.w = (x87_r7_2 < temp3_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe
                                
                                if ((eax_24:1.b & 0x41) == 0)
                                    goto label_4a0fe9
                                
                                result = 0
                    else
                        result = 0x80004005
                else
                    ecx_7 = arg4
                    int32_t eax_14 = *ecx_7
                    
                    if (eax_14 == 0xffffffff)
                    label_4a1061:
                        *arg3 = edx_5
                        *ecx_7 = esi_5
                        result = 0
                    else
                        int32_t edi_2 = *(arg1 + 0x14)
                        long double x87_r7_1 = fconvert.t(*(*(edi_2 + (eax_14 << 2)) + 0x20))
                        long double temp1_1 = fconvert.t(*(*(edi_2 + (esi_5 << 2)) + 0x20))
                        x87_r7_1 - temp1_1
                        void* eax_15
                        eax_15.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_1))
                            goto label_4a1061
                        
                        result = 0
            else if (esi_3 == 0x20300000)
                int32_t edx_6 = edx_2[2]
                esi_5 = *(edx_6 + (ecx_3 << 2))
                edx_5 = *(edx_6 + ((eax_3 + ecx_3) << 2))
                int32_t eax_28 = *arg3
                int32_t* eax_30
                
                if (eax_28 == 0xffffffff || edx_5 == eax_28)
                    eax_30 = *(*(arg1 + 0x14) + (esi_5 << 2))
                
                if ((eax_28 != 0xffffffff && edx_5 != eax_28)
                        || (*(*(*(arg1 + 0x10) + (eax_30[1] << 2)) + 4) & 0x100) == 0
                        || eax_30[2] != 0xffffffff)
                    int32_t eax_38 = *arg3
                    
                    if (eax_38 == 0xffffffff || esi_5 == eax_38)
                        int32_t* eax_40 = *(*(arg1 + 0x14) + (edx_5 << 2))
                        
                        if ((*(*(*(arg1 + 0x10) + (eax_40[1] << 2)) + 4) & 0x100) == 0
                                || eax_40[2] != 0xffffffff)
                            result = 0x80004005
                        else
                            ecx_9 = arg5
                            int32_t eax_44 = *ecx_9
                            
                            if (eax_44 == 0xffffffff)
                                goto label_4a0fe9
                            
                            int32_t edi_8 = *(arg1 + 0x14)
                            long double x87_r7_4 = fconvert.t(*(*(edi_8 + (eax_44 << 2)) + 0x20))
                            long double temp4_1 = fconvert.t(*(*(edi_8 + (edx_5 << 2)) + 0x20))
                            x87_r7_4 - temp4_1
                            void* eax_45
                            eax_45.w = (x87_r7_4 < temp4_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_4, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_4 == temp4_1 ? 1 : 0) << 0xe
                            bool p_2 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_2))
                                goto label_4a0fe9
                            
                            result = 0
                    else
                        result = 0x80004005
                else
                    ecx_7 = arg6
                    int32_t eax_34 = *ecx_7
                    
                    if (eax_34 == 0xffffffff)
                        goto label_4a1061
                    
                    int32_t edi_6 = *(arg1 + 0x14)
                    long double x87_r7_3 = fconvert.t(*(*(edi_6 + (eax_34 << 2)) + 0x20))
                    long double temp2_1 = fconvert.t(*(*(edi_6 + (esi_5 << 2)) + 0x20))
                    x87_r7_3 - temp2_1
                    void* eax_35
                    eax_35.w = (x87_r7_3 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe
                    
                    if ((eax_35:1.b & 0x41) == 0)
                        goto label_4a1061
                    
                    result = 0
            else if (esi_3 != 0x30000000)
                result = 0x80004005
            else
                int32_t eax_46 = edx_2[3]
                int32_t esi_6 = edx_2[2]
                int32_t edi_10 = *(arg1 + 0x14)
                void* ebx_5 = *(edi_10 + (*(esi_6 + ((ecx_3 + eax_46) << 2)) << 2))
                void* eax_49 = *(edi_10 + (*(esi_6 + ((ecx_3 + (eax_46 << 1)) << 2)) << 2))
                int32_t edi_11 = *(arg1 + 0x10)
                
                if ((*(*(edi_11 + (*(ebx_5 + 4) << 2)) + 4) & 0x100) == 0
                        || *(ebx_5 + 8) != 0xffffffff
                        || (*(*(edi_11 + (*(eax_49 + 4) << 2)) + 4) & 0x100) == 0
                        || *(eax_49 + 8) != 0xffffffff)
                    result = 0x80004005
                else
                    long double x87_r7_5 = fconvert.t(*(ebx_5 + 0x20))
                    long double x87_r6_1 = fconvert.t(0.0)
                    x87_r6_1 - x87_r7_5
                    void* eax_57
                    eax_57.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe
                    bool p_3 = unimplemented  {test ah, 0x44}
                    bool p_4
                    
                    if (not(p_3))
                        long double x87_r7_6 = fconvert.t(*(eax_49 + 0x20))
                        long double x87_r6_2 = fconvert.t(1.0)
                        x87_r6_2 - x87_r7_6
                        void* eax_58
                        eax_58.w = (x87_r6_2 < x87_r7_6 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
                            | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_3) && not(p_4))
                    label_4a11a0:
                        int32_t i = *(edx_2[2] + (ecx_3 << 2))
                        void* eax_63 = *(*(arg1 + 0x14) + (i << 2))
                        
                        if ((*(*(edi_11 + (*(eax_63 + 4) << 2)) + 4) & 2) == 0)
                            result = 0x80004005
                        else
                            int32_t* edi_12 = *(*(arg1 + 0x18) + (*(eax_63 + 0x48) << 2))
                            int32_t eax_66 = *edi_12 & 0xfff00000
                            
                            if (eax_66 == 0x20400000 || eax_66 == 0x10100000)
                                int32_t eax_67 = edi_12[3]
                                arg2 = nullptr
                                
                                if (eax_67 u> 0)
                                    int32_t* var_10_1 = edi_12[4]
                                    
                                    while (*var_10_1 != i)
                                        arg2 += 1
                                        var_10_1 = &var_10_1[1]
                                        
                                        if (arg2 u>= eax_67)
                                            break
                                
                                int32_t* ecx_14
                                int32_t* edx_12
                                
                                if (eax_66 != 0x10100000)
                                    int32_t var_8_2 = 0
                                    int32_t edi_13 = edi_12[2]
                                    int32_t* var_10_2 = edi_13 + ((arg2 + eax_67) << 2)
                                    
                                    while (true)
                                        int32_t i_1 = *var_10_2
                                        void* ecx_20 = *(*(arg1 + 0x14) + (i_1 << 2))
                                        
                                        if ((*(*(*(arg1 + 0x10) + (*(ecx_20 + 4) << 2)) + 4) & 2)
                                                != 0)
                                            int32_t* ecx_25 =
                                                *(*(arg1 + 0x18) + (*(ecx_20 + 0x48) << 2))
                                            
                                            if ((*ecx_25 & 0xfff00000) == 0x10100000)
                                                int32_t var_10_3 = 0
                                                
                                                if (ecx_25[3] u> 0)
                                                    int32_t* edx_16 = ecx_25[4]
                                                    
                                                    while (i_1 != *edx_16)
                                                        var_10_3 += 1
                                                        
                                                        if (var_10_3 u>= ecx_25[3])
                                                            break
                                                        
                                                        edx_16 = &edx_16[1]
                                                
                                                edx_12 =
                                                    *(edi_13 + ((eax_67 * var_8_2 + arg2) << 2))
                                                ecx_14 = *(ecx_25[2] + (var_10_3 << 2))
                                                break
                                        
                                        var_8_2 += 1
                                        var_10_2 = &var_10_2[neg.d(eax_67)]
                                        
                                        if (var_8_2 u>= 2)
                                            edx_12 = arg3
                                            ecx_14 = arg3
                                            break
                                    
                                    if (var_8_2 != 2)
                                        goto label_4a12f7
                                    
                                    result = 0x80004005
                                else
                                    int32_t i_3 = i
                                    int32_t i_2 = i
                                    i_2.q = fconvert.d(float.t(0))
                                    esp_2 = &var_28
                                    edx_12 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, i_2)
                                    ecx_14 = *(edi_12[2] + (arg2 << 2))
                                    
                                    if (edx_12 != 0xffffffff)
                                    label_4a12f7:
                                        int32_t eax_74 = *arg3
                                        void* eax_76
                                        
                                        if (eax_74 == 0xffffffff || edx_12 == eax_74)
                                            eax_76 = *(*(arg1 + 0x14) + (ecx_14 << 2))
                                        
                                        if ((eax_74 != 0xffffffff && edx_12 != eax_74) || (
                                                *(*(*(arg1 + 0x10) + (*(eax_76 + 4) << 2)) + 4)
                                                & 0x100) == 0 || *(eax_76 + 8) != 0xffffffff)
                                            int32_t eax_87 = *arg3
                                            
                                            if (eax_87 == 0xffffffff || ecx_14 == eax_87)
                                                int32_t* eax_89 = *(*(arg1 + 0x14) + (edx_12 << 2))
                                                
                                                if ((*(*(*(arg1 + 0x10) + (eax_89[1] << 2)) + 4)
                                                        & 0x100) == 0 || eax_89[2] != 0xffffffff)
                                                    result = 0x80004005
                                                else
                                                    long double x87_r7_13 =
                                                        fconvert.t(*(ebx_5 + 0x20))
                                                    long double x87_r6_6 = fconvert.t(1.0)
                                                    x87_r6_6 - x87_r7_13
                                                    void* eax_93
                                                    eax_93.w = (x87_r6_6 < x87_r7_13 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r6_6, x87_r7_13) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r6_6 == x87_r7_13 ? 1 : 0) << 0xe
                                                    bool p_9 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (p_9)
                                                        int32_t eax_96 = *arg4
                                                        
                                                        if (eax_96 == 0xffffffff)
                                                            *arg3 = ecx_14
                                                            *arg4 = edx_12
                                                        else
                                                            int32_t esi_14 = *(arg1 + 0x14)
                                                            long double x87_r7_15 = fconvert.t(
                                                                *(*(esi_14 + (eax_96 << 2)) + 0x20))
                                                            long double temp7_1 = fconvert.t(
                                                                *(*(esi_14 + (edx_12 << 2)) + 0x20))
                                                            x87_r7_15 - temp7_1
                                                            void* eax_97
                                                            eax_97.w =
                                                                (x87_r7_15 < temp7_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r7_15, temp7_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_15 == temp7_1 ? 1 : 0) << 0xe
                                                            bool p_10 =
                                                                unimplemented  {test ah, 0x5}
                                                            
                                                            if (not(p_10))
                                                                *arg3 = ecx_14
                                                                *arg4 = edx_12
                                                    else
                                                        int32_t eax_94 = *arg6
                                                        
                                                        if (eax_94 == 0xffffffff)
                                                            *arg3 = ecx_14
                                                            *arg6 = edx_12
                                                        else
                                                            int32_t esi_12 = *(arg1 + 0x14)
                                                            long double x87_r7_14 = fconvert.t(
                                                                *(*(esi_12 + (eax_94 << 2)) + 0x20))
                                                            long double temp8_1 = fconvert.t(
                                                                *(*(esi_12 + (edx_12 << 2)) + 0x20))
                                                            x87_r7_14 - temp8_1
                                                            void* eax_95
                                                            eax_95.w =
                                                                (x87_r7_14 < temp8_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r7_14, temp8_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_14 == temp8_1 ? 1 : 0) << 0xe
                                                            
                                                            if ((eax_95:1.b & 0x41) == 0)
                                                                *arg3 = ecx_14
                                                                *arg6 = edx_12
                                                    
                                                    result = 0
                                            else
                                                result = 0x80004005
                                        else
                                            long double x87_r7_10 = fconvert.t(*(ebx_5 + 0x20))
                                            long double x87_r6_5 = fconvert.t(1.0)
                                            x87_r6_5 - x87_r7_10
                                            void* eax_80
                                            eax_80.w = (x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_5, x87_r7_10) ? 1 : 0)
                                                << 0xa | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe
                                            bool p_7 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_7)
                                                int32_t eax_83 = *arg7
                                                
                                                if (eax_83 == 0xffffffff)
                                                    *arg3 = edx_12
                                                    *arg7 = ecx_14
                                                else
                                                    int32_t esi_10 = *(arg1 + 0x14)
                                                    long double x87_r7_12 = fconvert.t(
                                                        *(*(esi_10 + (eax_83 << 2)) + 0x20))
                                                    long double temp5_1 = fconvert.t(
                                                        *(*(esi_10 + (ecx_14 << 2)) + 0x20))
                                                    x87_r7_12 - temp5_1
                                                    void* eax_84
                                                    eax_84.w = (x87_r7_12 < temp5_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r7_12, temp5_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r7_12 == temp5_1 ? 1 : 0) << 0xe
                                                    
                                                    if ((eax_84:1.b & 0x41) == 0)
                                                        *arg3 = edx_12
                                                        *arg7 = ecx_14
                                            else
                                                int32_t eax_81 = *arg5
                                                
                                                if (eax_81 == 0xffffffff)
                                                    *arg3 = edx_12
                                                    *arg5 = ecx_14
                                                else
                                                    int32_t esi_8 = *(arg1 + 0x14)
                                                    long double x87_r7_11 = fconvert.t(
                                                        *(*(esi_8 + (eax_81 << 2)) + 0x20))
                                                    long double temp6_1 = fconvert.t(
                                                        *(*(esi_8 + (ecx_14 << 2)) + 0x20))
                                                    x87_r7_11 - temp6_1
                                                    void* eax_82
                                                    eax_82.w = (x87_r7_11 < temp6_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r7_11, temp6_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r7_11 == temp6_1 ? 1 : 0) << 0xe
                                                    bool p_8 = unimplemented  {test ah, 0x5}
                                                    
                                                    if (not(p_8))
                                                        *arg3 = edx_12
                                                        *arg5 = ecx_14
                                            
                                            result = 0
                                    else
                                        result = 0x8007000e
                            else
                                result = 0x80004005
                    else
                        long double x87_r7_7 = fconvert.t(*(ebx_5 + 0x20))
                        long double x87_r6_3 = fconvert.t(1.0)
                        x87_r6_3 - x87_r7_7
                        void* eax_59
                        eax_59.w = (x87_r6_3 < x87_r7_7 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_7) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_7 ? 1 : 0) << 0xe
                        bool p_5 = unimplemented  {test ah, 0x44}
                        
                        if (p_5)
                            result = 0x80004005
                        else
                            long double x87_r7_8 = fconvert.t(*(eax_49 + 0x20))
                            long double x87_r6_4 = fconvert.t(0.0)
                            x87_r6_4 - x87_r7_8
                            void* eax_60
                            eax_60.w = (x87_r6_4 < x87_r7_8 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_4, x87_r7_8) ? 1 : 0) << 0xa
                                | (x87_r6_4 == x87_r7_8 ? 1 : 0) << 0xe
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_6))
                                goto label_4a11a0
                            
                            result = 0x80004005
    
    *esp_2
    esp_1 = &esp_2[1]

*esp_1
esp_1[1]
return result

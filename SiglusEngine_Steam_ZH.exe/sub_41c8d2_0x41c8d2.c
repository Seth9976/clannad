// 函数: sub_41c8d2
// 地址: 0x41c8d2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_40 = edi
void* edx = arg1[1]
int32_t* var_1c = nullptr
void* var_c = nullptr
void* var_18 = nullptr
void* const var_10 = nullptr

if (*(edx + 0x70) == 1)
    void* esi_1 = *arg1
    
    if (*(esi_1 + 0x70) == 1)
        int32_t eax = arg1[2]
        int32_t* eax_4
        int80_t st0_1
        st0_1, eax_4 = sub_41969c(*(esi_1 + 0x68), *(edx + 0x68), not.d(eax u>> 0x10) & 1)
        int32_t* eax_7
        
        if (eax_4 != 0)
            int80_t st0_2
            st0_2, eax_7 = sub_41969c(*(*arg1 + 0x6c), *(arg1[1] + 0x6c), not.d(eax u>> 0x11) & 1)
            var_1c = eax_7
        
        int32_t result
        
        if (eax_4 == 0 || eax_7 == 0)
            result = 0x80004005
        else
            void* eax_9 = *eax_4 + eax_4
            void* edi_3 = *var_1c + var_1c
            int32_t esi_2 = *(arg1[1] + 0x6c)
            int32_t* eax_14 = sub_745f3f(esi_2 * 0xc + 4)
            
            if (eax_14 == 0)
                var_c = nullptr
            else
                *eax_14 = esi_2
                sub_61cdd0(&eax_14[1], 0xc, esi_2, sub_41968f)
                var_c = &eax_14[1]
            
            if (var_c == 0)
            label_41ce48:
                result = 0x8007000e
            else
                int32_t esi_3 = *(*arg1 + 0x68)
                void* eax_20 = sub_745f3f(esi_3 << 4)
                
                if (eax_20 == 0)
                    var_10 = nullptr
                else
                    sub_61cdd0(eax_20, 0x10, esi_3, sub_52e900)
                    var_10 = eax_20
                
                if (var_10 == 0)
                label_41ce48_1:
                    result = 0x8007000e
                else
                    int32_t* ecx_8 = &var_1c[1]
                    int32_t* var_30_2 = ecx_8
                    
                    if (ecx_8 u< edi_3)
                        void* edx_2
                        
                        do
                            edx_2 = *ecx_8 + ecx_8
                            
                            for (void* i = &ecx_8[1]; i u< edx_2; i += 8)
                                int32_t eax_22 = *i
                                *(var_c + eax_22 * 0xc + 8) += 1
                            
                            ecx_8 = edx_2
                        while (edx_2 u< edi_3)
                    
                    int32_t* eax_25 = var_30_2
                    int32_t var_20_2 = 0
                    
                    while (eax_25 u< edi_3)
                        void* ecx_10 = *eax_25 + eax_25
                        void* var_14_1 = ecx_10
                        void* var_8_1 = &eax_25[1]
                        
                        if (&eax_25[1] u< ecx_10)
                            do
                                void* edi_4 = var_c + *var_8_1 * 0xc
                                
                                if (*edi_4 == 0)
                                    if (var_18 == 0)
                                        int32_t esi_5 = *(arg1[1] + 0x68)
                                        int32_t eax_35 = sub_745f3f(esi_5 << 4)
                                        int32_t eax_36
                                        
                                        if (eax_35 == 0)
                                            eax_36 = 0
                                        else
                                            sub_61cdd0(eax_35, 0x10, esi_5, sub_52e900)
                                            eax_36 = eax_35
                                        
                                        *edi_4 = eax_36
                                        
                                        if (eax_36 == 0)
                                            goto label_41ce48_1
                                    else
                                        *edi_4 = *var_18
                                        *var_18 = 0
                                        var_18 = *(var_18 + 4)
                                    
                                    int32_t ecx_14 = *(arg1[1] + 0x68) << 4
                                    __builtin_memset(
                                        __builtin_memset(*edi_4, 0, ecx_14 u>> 2 << 2), 0, 
                                        ecx_14 & 3)
                                    ecx_10 = var_14_1
                                
                                var_8_1 += 8
                            while (var_8_1 u< ecx_10)
                        
                        (*(**arg1 + 4))(var_20_2, 0, var_10)
                        void** eax_40 = &eax_4[1]
                        
                        if (eax_40 u< eax_9)
                            float* edx_6 = var_10 + 8
                            void* edi_8
                            
                            do
                                edi_8 = *eax_40 + eax_40
                                void* var_8_2 = &eax_25[1]
                                
                                if (&eax_25[1] u< var_14_1)
                                    do
                                        int32_t ecx_21 = *(var_c + *var_8_2 * 0xc)
                                        void* eax_45 = &eax_40[1]
                                        
                                        while (eax_45 u< edi_8)
                                            long double x87_r5_2 = fconvert.t(*(eax_45 + 4))
                                                * fconvert.t(*(var_8_2 + 4))
                                            float* esi_9 = (*eax_45 << 4) + ecx_21
                                            *esi_9 = fconvert.s(x87_r5_2 * fconvert.t(edx_6[-2])
                                                + fconvert.t(*esi_9))
                                            float* esi_12 = (*eax_45 << 4) + ecx_21 + 4
                                            *esi_12 = fconvert.s(x87_r5_2 * fconvert.t(edx_6[-1])
                                                + fconvert.t(*esi_12))
                                            float* esi_15 = (*eax_45 << 4) + ecx_21 + 8
                                            *esi_15 = fconvert.s(x87_r5_2 * fconvert.t(*edx_6)
                                                + fconvert.t(*esi_15))
                                            float* esi_18 = (*eax_45 << 4) + ecx_21 + 0xc
                                            eax_45 += 8
                                            *esi_18 = fconvert.s(x87_r5_2 * fconvert.t(edx_6[1])
                                                + fconvert.t(*esi_18))
                                        
                                        var_8_2 += 8
                                    while (var_8_2 u< var_14_1)
                                
                                edx_6 = &edx_6[4]
                                eax_40 = edi_8
                            while (edi_8 u< eax_9)
                        
                        void* i_1 = &eax_25[1]
                        
                        for (eax_25 = var_14_1; i_1 u< eax_25; i_1 += 8)
                            void* esi_19 = var_c + *i_1 * 0xc
                            int32_t temp0_1 = *(esi_19 + 8)
                            *(esi_19 + 8) -= 1
                            
                            if (temp0_1 == 1)
                                int32_t eax_48 = *(*arg1 + 8)
                                
                                if (eax_48 == 1)
                                    int32_t edx_10 = 0
                                    int32_t j = 0
                                    
                                    if (*(arg1[1] + 0x68) u> 0)
                                        long double x87_r5_7 = fconvert.t(1f)
                                        
                                        do
                                            long double x87_r4_11 = float.t(0)
                                            float* ecx_32 = *esi_19 + edx_10
                                            long double temp4_1 = fconvert.t(*ecx_32)
                                            x87_r4_11 - temp4_1
                                            void* eax_65
                                            eax_65.w = (x87_r4_11 < temp4_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r4_11, temp4_1) ? 1 : 0)
                                                << 0xa | (x87_r4_11 == temp4_1 ? 1 : 0) << 0xe | 0x2800
                                            long double x87_r4_12
                                            
                                            if ((eax_65:1.b & 0x41) != 0)
                                                long double temp5_1 = fconvert.t(*ecx_32)
                                                x87_r5_7 - temp5_1
                                                eax_65.w = (x87_r5_7 < temp5_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_7, temp5_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_7 == temp5_1 ? 1 : 0) << 0xe
                                                    | 0x2800
                                                
                                                if ((eax_65:1.b & 0x41) != 0)
                                                    x87_r4_12 = float.t(1)
                                                else
                                                    x87_r4_12 = fconvert.t(*ecx_32)
                                            else
                                                x87_r4_12 = float.t(0)
                                            
                                            *ecx_32 = fconvert.s(x87_r4_12)
                                            float* ecx_33 = *esi_19 + edx_10 + 4
                                            long double x87_r4_13 = float.t(0)
                                            long double temp7_1 = fconvert.t(*ecx_33)
                                            x87_r4_13 - temp7_1
                                            int32_t eax_66
                                            eax_66.w = (x87_r4_13 < temp7_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r4_13, temp7_1) ? 1 : 0)
                                                << 0xa | (x87_r4_13 == temp7_1 ? 1 : 0) << 0xe | 0x2800
                                            long double x87_r4_14
                                            
                                            if ((eax_66:1.b & 0x41) != 0)
                                                long double temp10_1 = fconvert.t(*ecx_33)
                                                x87_r5_7 - temp10_1
                                                eax_66.w = (x87_r5_7 < temp10_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_7, temp10_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_7 == temp10_1 ? 1 : 0) << 0xe
                                                    | 0x2800
                                                
                                                if ((eax_66:1.b & 0x41) != 0)
                                                    x87_r4_14 = float.t(1)
                                                else
                                                    x87_r4_14 = fconvert.t(*ecx_33)
                                            else
                                                x87_r4_14 = float.t(0)
                                            
                                            *ecx_33 = fconvert.s(x87_r4_14)
                                            float* ecx_34 = *esi_19 + edx_10 + 8
                                            long double x87_r4_15 = float.t(0)
                                            long double temp13_1 = fconvert.t(*ecx_34)
                                            x87_r4_15 - temp13_1
                                            int32_t eax_67
                                            eax_67.w = (x87_r4_15 < temp13_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r4_15, temp13_1) ? 1 : 0)
                                                << 0xa | (x87_r4_15 == temp13_1 ? 1 : 0) << 0xe
                                                | 0x2800
                                            long double x87_r4_16
                                            
                                            if ((eax_67:1.b & 0x41) != 0)
                                                long double temp16_1 = fconvert.t(*ecx_34)
                                                x87_r5_7 - temp16_1
                                                eax_67.w = (x87_r5_7 < temp16_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_7, temp16_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_7 == temp16_1 ? 1 : 0) << 0xe
                                                    | 0x2800
                                                
                                                if ((eax_67:1.b & 0x41) != 0)
                                                    x87_r4_16 = float.t(1)
                                                else
                                                    x87_r4_16 = fconvert.t(*ecx_34)
                                            else
                                                x87_r4_16 = float.t(0)
                                            
                                            *ecx_34 = fconvert.s(x87_r4_16)
                                            float* ecx_35 = *esi_19 + edx_10 + 0xc
                                            long double x87_r4_17 = float.t(0)
                                            long double temp19_1 = fconvert.t(*ecx_35)
                                            x87_r4_17 - temp19_1
                                            int32_t eax_68
                                            eax_68.w = (x87_r4_17 < temp19_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r4_17, temp19_1) ? 1 : 0)
                                                << 0xa | (x87_r4_17 == temp19_1 ? 1 : 0) << 0xe
                                                | 0x2800
                                            long double x87_r4_18
                                            
                                            if ((eax_68:1.b & 0x41) != 0)
                                                long double temp22_1 = fconvert.t(*ecx_35)
                                                x87_r5_7 - temp22_1
                                                eax_68.w = (x87_r5_7 < temp22_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_7, temp22_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_7 == temp22_1 ? 1 : 0) << 0xe
                                                    | 0x2800
                                                
                                                if ((eax_68:1.b & 0x41) != 0)
                                                    x87_r4_18 = float.t(1)
                                                else
                                                    x87_r4_18 = fconvert.t(*ecx_35)
                                            else
                                                x87_r4_18 = float.t(0)
                                            
                                            *ecx_35 = fconvert.s(x87_r4_18)
                                            j += 1
                                            edx_10 += 0x10
                                        while (j u< *(arg1[1] + 0x68))
                                else
                                    long double x87_r4_10
                                    
                                    if (eax_48 == 2)
                                        int32_t edx_9 = 0
                                        int32_t j_1 = 0
                                        
                                        if (*(arg1[1] + 0x68) u> 0)
                                            long double x87_r5_6 = fconvert.t(-1f)
                                            x87_r4_10 = fconvert.t(1f)
                                            
                                            do
                                                float* ecx_28 = *esi_19 + edx_9
                                                long double temp6_1 = fconvert.t(*ecx_28)
                                                x87_r5_6 - temp6_1
                                                void* eax_59
                                                eax_59.w = (x87_r5_6 < temp6_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_6, temp6_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_6 == temp6_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_10
                                                
                                                if ((eax_59:1.b & 0x41) != 0)
                                                    long double temp8_1 = fconvert.t(*ecx_28)
                                                    x87_r4_10 - temp8_1
                                                    eax_59.w = (x87_r4_10 < temp8_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp8_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp8_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_59:1.b & 0x41) != 0)
                                                        x87_r3_10 = float.t(1)
                                                    else
                                                        x87_r3_10 = fconvert.t(*ecx_28)
                                                else
                                                    x87_r3_10 = x87_r5_6
                                                
                                                *ecx_28 = fconvert.s(x87_r3_10)
                                                float* ecx_29 = *esi_19 + edx_9 + 4
                                                long double temp11_1 = fconvert.t(*ecx_29)
                                                x87_r5_6 - temp11_1
                                                int32_t eax_60
                                                eax_60.w = (x87_r5_6 < temp11_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_6, temp11_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_6 == temp11_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_12
                                                
                                                if ((eax_60:1.b & 0x41) != 0)
                                                    long double temp14_1 = fconvert.t(*ecx_29)
                                                    x87_r4_10 - temp14_1
                                                    eax_60.w = (x87_r4_10 < temp14_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp14_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp14_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_60:1.b & 0x41) != 0)
                                                        x87_r3_12 = float.t(1)
                                                    else
                                                        x87_r3_12 = fconvert.t(*ecx_29)
                                                else
                                                    x87_r3_12 = x87_r5_6
                                                
                                                *ecx_29 = fconvert.s(x87_r3_12)
                                                float* ecx_30 = *esi_19 + edx_9 + 8
                                                long double temp17_1 = fconvert.t(*ecx_30)
                                                x87_r5_6 - temp17_1
                                                int32_t eax_61
                                                eax_61.w = (x87_r5_6 < temp17_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_6, temp17_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_6 == temp17_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_14
                                                
                                                if ((eax_61:1.b & 0x41) != 0)
                                                    long double temp20_1 = fconvert.t(*ecx_30)
                                                    x87_r4_10 - temp20_1
                                                    eax_61.w = (x87_r4_10 < temp20_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp20_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp20_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_61:1.b & 0x41) != 0)
                                                        x87_r3_14 = float.t(1)
                                                    else
                                                        x87_r3_14 = fconvert.t(*ecx_30)
                                                else
                                                    x87_r3_14 = x87_r5_6
                                                
                                                *ecx_30 = fconvert.s(x87_r3_14)
                                                float* ecx_31 = *esi_19 + edx_9 + 0xc
                                                long double x87_r3_15 = float.t(0)
                                                long double temp23_1 = fconvert.t(*ecx_31)
                                                x87_r3_15 - temp23_1
                                                int32_t eax_62
                                                eax_62.w = (x87_r3_15 < temp23_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r3_15, temp23_1) ? 1 : 0)
                                                    << 0xa | (x87_r3_15 == temp23_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_16
                                                
                                                if ((eax_62:1.b & 0x41) != 0)
                                                    long double temp25_1 = fconvert.t(*ecx_31)
                                                    x87_r4_10 - temp25_1
                                                    eax_62.w = (x87_r4_10 < temp25_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp25_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp25_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_62:1.b & 0x41) != 0)
                                                        x87_r3_16 = float.t(1)
                                                    else
                                                        x87_r3_16 = fconvert.t(*ecx_31)
                                                else
                                                    x87_r3_16 = float.t(0)
                                                
                                                *ecx_31 = fconvert.s(x87_r3_16)
                                                j_1 += 1
                                                edx_9 += 0x10
                                            while (j_1 u< *(arg1[1] + 0x68))
                                    else if (eax_48 == 3)
                                        int32_t edx_8 = 0
                                        int32_t j_2 = 0
                                        
                                        if (*(arg1[1] + 0x68) u> 0)
                                            long double x87_r5_5 = fconvert.t(-1f)
                                            x87_r4_10 = fconvert.t(1f)
                                            
                                            do
                                                float* ecx_24 = *esi_19 + edx_8
                                                long double temp9_1 = fconvert.t(*ecx_24)
                                                x87_r5_5 - temp9_1
                                                void* eax_53
                                                eax_53.w = (x87_r5_5 < temp9_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_5, temp9_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_5 == temp9_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_2
                                                
                                                if ((eax_53:1.b & 0x41) != 0)
                                                    long double temp12_1 = fconvert.t(*ecx_24)
                                                    x87_r4_10 - temp12_1
                                                    eax_53.w = (x87_r4_10 < temp12_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp12_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp12_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_53:1.b & 0x41) != 0)
                                                        x87_r3_2 = float.t(1)
                                                    else
                                                        x87_r3_2 = fconvert.t(*ecx_24)
                                                else
                                                    x87_r3_2 = x87_r5_5
                                                
                                                *ecx_24 = fconvert.s(x87_r3_2)
                                                float* ecx_25 = *esi_19 + edx_8 + 4
                                                long double temp15_1 = fconvert.t(*ecx_25)
                                                x87_r5_5 - temp15_1
                                                int32_t eax_54
                                                eax_54.w = (x87_r5_5 < temp15_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_5, temp15_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_5 == temp15_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_4
                                                
                                                if ((eax_54:1.b & 0x41) != 0)
                                                    long double temp18_1 = fconvert.t(*ecx_25)
                                                    x87_r4_10 - temp18_1
                                                    eax_54.w = (x87_r4_10 < temp18_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp18_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp18_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_54:1.b & 0x41) != 0)
                                                        x87_r3_4 = float.t(1)
                                                    else
                                                        x87_r3_4 = fconvert.t(*ecx_25)
                                                else
                                                    x87_r3_4 = x87_r5_5
                                                
                                                *ecx_25 = fconvert.s(x87_r3_4)
                                                float* ecx_26 = *esi_19 + edx_8 + 8
                                                long double temp21_1 = fconvert.t(*ecx_26)
                                                x87_r5_5 - temp21_1
                                                int32_t eax_55
                                                eax_55.w = (x87_r5_5 < temp21_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_5, temp21_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_5 == temp21_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_6
                                                
                                                if ((eax_55:1.b & 0x41) != 0)
                                                    long double temp24_1 = fconvert.t(*ecx_26)
                                                    x87_r4_10 - temp24_1
                                                    eax_55.w = (x87_r4_10 < temp24_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp24_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp24_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_55:1.b & 0x41) != 0)
                                                        x87_r3_6 = float.t(1)
                                                    else
                                                        x87_r3_6 = fconvert.t(*ecx_26)
                                                else
                                                    x87_r3_6 = x87_r5_5
                                                
                                                *ecx_26 = fconvert.s(x87_r3_6)
                                                float* ecx_27 = *esi_19 + edx_8 + 0xc
                                                long double temp26_1 = fconvert.t(*ecx_27)
                                                x87_r5_5 - temp26_1
                                                int32_t eax_56
                                                eax_56.w = (x87_r5_5 < temp26_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_5, temp26_1) ? 1 : 0)
                                                    << 0xa | (x87_r5_5 == temp26_1 ? 1 : 0) << 0xe
                                                    | 0x2000
                                                long double x87_r3_8
                                                
                                                if ((eax_56:1.b & 0x41) != 0)
                                                    long double temp27_1 = fconvert.t(*ecx_27)
                                                    x87_r4_10 - temp27_1
                                                    eax_56.w = (x87_r4_10 < temp27_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r4_10, temp27_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r4_10 == temp27_1 ? 1 : 0) << 0xe
                                                        | 0x2000
                                                    
                                                    if ((eax_56:1.b & 0x41) != 0)
                                                        x87_r3_8 = float.t(1)
                                                    else
                                                        x87_r3_8 = fconvert.t(*ecx_27)
                                                else
                                                    x87_r3_8 = x87_r5_5
                                                
                                                *ecx_27 = fconvert.s(x87_r3_8)
                                                j_2 += 1
                                                edx_8 += 0x10
                                            while (j_2 u< *(arg1[1] + 0x68))
                                
                                (*(*arg1[1] + 8))(*i_1, 0, *esi_19)
                                *(esi_19 + 4) = var_18
                                eax_25 = var_14_1
                                var_18 = esi_19
                        
                        var_20_2 += 1
                    
                    result = 0
        
        if (var_c != 0)
            type_info::`vector deleting destructor'(var_c, 3)
        
        j__free(var_1c)
        j__free(eax_4)
        j__free(var_10)
        j__free(0)
        return result

return 0x80004005

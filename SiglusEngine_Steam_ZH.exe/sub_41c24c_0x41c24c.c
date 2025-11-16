// 函数: sub_41c24c
// 地址: 0x41c24c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[2]
int32_t edi
int32_t var_58 = edi
int32_t* var_20 = nullptr
int32_t* var_1c = nullptr
void* var_c = nullptr
void* var_18 = nullptr
void* const var_10 = nullptr
int32_t* eax_6
int80_t st0
st0, eax_6 = sub_41969c(*(*arg1 + 0x68), *(arg1[1] + 0x68), not.d(eax u>> 0x10) & 1)
int32_t result

if (eax_6 == 0)
    result = 0x80004005
else
    int32_t* eax_9
    int80_t st0_1
    st0_1, eax_9 = sub_41969c(*(*arg1 + 0x6c), *(arg1[1] + 0x6c), not.d(eax u>> 0x11) & 1)
    var_20 = eax_9
    
    if (eax_9 == 0)
        result = 0x80004005
    else
        int32_t* eax_12
        int80_t st0_2
        st0_2, eax_12 = sub_41969c(*(*arg1 + 0x70), *(arg1[1] + 0x70), not.d(eax u>> 0x12) & 1)
        var_1c = eax_12
        
        if (eax_12 == 0)
            result = 0x80004005
        else
            void* eax_14 = *eax_6 + eax_6
            void* eax_16 = *var_20 + var_20
            void* ebx_2 = *var_1c + var_1c
            int32_t edi_5 = *(arg1[1] + 0x70)
            int32_t* eax_21 = sub_745f3f(edi_5 * 0xc + 4)
            
            if (eax_21 == 0)
                var_c = nullptr
            else
                *eax_21 = edi_5
                sub_61cdd0(&eax_21[1], 0xc, edi_5, sub_41968f)
                var_c = &eax_21[1]
            
            if (var_c == 0)
            label_41c887:
                result = 0x8007000e
            else
                int32_t edi_6 = *(*arg1 + 0x68)
                void* eax_27 = sub_745f3f(edi_6 << 4)
                
                if (eax_27 == 0)
                    var_10 = nullptr
                else
                    sub_61cdd0(eax_27, 0x10, edi_6, sub_52e900)
                    var_10 = eax_27
                
                if (var_10 == 0)
                label_41c887_1:
                    result = 0x8007000e
                else
                    int32_t* ecx_9 = &var_1c[1]
                    int32_t* var_48_3 = ecx_9
                    
                    if (ecx_9 u< ebx_2)
                        void* edx_2
                        
                        do
                            edx_2 = *ecx_9 + ecx_9
                            
                            for (void* i = &ecx_9[1]; i u< edx_2; i += 8)
                                int32_t eax_29 = *i
                                *(var_c + eax_29 * 0xc + 8) += 1
                            
                            ecx_9 = edx_2
                        while (edx_2 u< ebx_2)
                    
                    int32_t* eax_32 = var_48_3
                    int32_t var_38_1 = 0
                    
                    if (eax_32 u< ebx_2)
                        long double x87_r4_1 = fconvert.t(-1f)
                        
                        do
                            void* ecx_11 = *eax_32 + eax_32
                            void* var_8_1 = &eax_32[1]
                            
                            if (&eax_32[1] u< ecx_11)
                                do
                                    void* ebx_3 = var_c + *var_8_1 * 0xc
                                    
                                    if (*ebx_3 == 0)
                                        if (var_18 == 0)
                                            void* eax_39 = arg1[1]
                                            int32_t edi_9 = *(eax_39 + 0x6c) * *(eax_39 + 0x68)
                                            int32_t eax_42 = sub_745f3f(edi_9 << 4)
                                            int32_t eax_43
                                            
                                            if (eax_42 == 0)
                                                eax_43 = 0
                                            else
                                                sub_61cdd0(eax_42, 0x10, edi_9, sub_52e900)
                                                eax_43 = eax_42
                                            
                                            *ebx_3 = eax_43
                                            
                                            if (eax_43 == 0)
                                                goto label_41c887_1
                                            
                                            x87_r4_1 = fconvert.t(-1f)
                                        else
                                            *ebx_3 = *var_18
                                            *var_18 = 0
                                            var_18 = *(var_18 + 4)
                                        
                                        void* eax_44 = arg1[1]
                                        int32_t ecx_17 = (*(eax_44 + 0x6c) * *(eax_44 + 0x68)) << 4
                                        __builtin_memset(
                                            __builtin_memset(*ebx_3, 0, ecx_17 u>> 2 << 2), 0, 
                                            ecx_17 & 3)
                                    
                                    var_8_1 += 8
                                while (var_8_1 u< ecx_11)
                            
                            int32_t var_2c_1 = 0
                            void* var_34_2 = &var_20[1]
                            
                            if (&var_20[1] u< eax_16)
                                void* eax_49
                                
                                do
                                    int32_t* ecx_21 = var_34_2
                                    eax_49 = *ecx_21 + ecx_21
                                    (*(**arg1 + 4))(var_2c_1, var_38_1, var_10)
                                    void** var_28_1 = &eax_6[1]
                                    
                                    if (&eax_6[1] u< eax_14)
                                        float* edx_5 = var_10 + 8
                                        void* eax_54
                                        
                                        do
                                            eax_54 = *var_28_1 + var_28_1
                                            void* i_1 = &eax_32[1]
                                            void* i_3 = i_1
                                            
                                            for (; i_1 u< ecx_11; i_1 = i_3)
                                                for (void* j = var_34_2 + 4; j u< eax_49; j += 8)
                                                    int32_t eax_61 = ((*(arg1[1] + 0x68) * *j) << 4)
                                                        + *(var_c + *i_3 * 0xc)
                                                    void* ecx_26 = &var_28_1[1]
                                                    
                                                    while (ecx_26 u< eax_54)
                                                        float* edi_16 = (*ecx_26 << 4) + eax_61
                                                        long double x87_r4_4 =
                                                            fconvert.t(*(ecx_26 + 4))
                                                            * fconvert.t(*(i_3 + 4))
                                                            * fconvert.t(*(j + 4))
                                                        *edi_16 = fconvert.s(
                                                            x87_r4_4 * fconvert.t(edx_5[-2])
                                                            + fconvert.t(*edi_16))
                                                        float* edi_19 = (*ecx_26 << 4) + eax_61 + 4
                                                        *edi_19 = fconvert.s(
                                                            x87_r4_4 * fconvert.t(edx_5[-1])
                                                            + fconvert.t(*edi_19))
                                                        float* edi_22 = (*ecx_26 << 4) + eax_61 + 8
                                                        *edi_22 = fconvert.s(
                                                            x87_r4_4 * fconvert.t(*edx_5)
                                                            + fconvert.t(*edi_22))
                                                        float* edi_25 =
                                                            (*ecx_26 << 4) + eax_61 + 0xc
                                                        ecx_26 += 8
                                                        *edi_25 = fconvert.s(
                                                            x87_r4_4 * fconvert.t(edx_5[1])
                                                            + fconvert.t(*edi_25))
                                                
                                                i_3 += 8
                                            
                                            edx_5 = &edx_5[4]
                                            var_28_1 = eax_54
                                        while (eax_54 u< eax_14)
                                    
                                    var_2c_1 += 1
                                    var_34_2 = eax_49
                                while (eax_49 u< eax_16)
                                x87_r4_1 = fconvert.t(-1f)
                            
                            void* i_2 = &eax_32[1]
                            
                            for (eax_32 = ecx_11; i_2 u< eax_32; i_2 += 8)
                                void* edi_26 = var_c + *i_2 * 0xc
                                int32_t temp0_1 = *(edi_26 + 8)
                                *(edi_26 + 8) -= 1
                                
                                if (temp0_1 == 1)
                                    void* eax_64 = arg1[1]
                                    int32_t j_1 = 0
                                    
                                    if (*(eax_64 + 0x6c) u> 0)
                                        do
                                            int32_t ecx_29 = *(eax_64 + 0x68)
                                            int32_t edx_8 = *(*arg1 + 8)
                                            void* eax_68 = ((ecx_29 * j_1) << 4) + *edi_26
                                            
                                            if (edx_8 == 1)
                                                int32_t k = 0
                                                
                                                if (ecx_29 u> 0)
                                                    x87_r4_1 = fconvert.t(1f)
                                                    void* ecx_32 = eax_68 + 8
                                                    
                                                    do
                                                        long double x87_r3_27 = float.t(0)
                                                        long double temp4_1 =
                                                            fconvert.t(*(ecx_32 - 8))
                                                        x87_r3_27 - temp4_1
                                                        eax_68.w =
                                                            (x87_r3_27 < temp4_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r3_27, temp4_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r3_27 == temp4_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_28
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double temp5_1 =
                                                                fconvert.t(*(ecx_32 - 8))
                                                            x87_r4_1 - temp5_1
                                                            eax_68.w =
                                                                (x87_r4_1 < temp5_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r4_1, temp5_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r4_1 == temp5_1 ? 1 : 0) << 0xe
                                                                | 0x2000
                                                            
                                                            if ((eax_68:1.b & 0x41) != 0)
                                                                x87_r3_28 = float.t(1)
                                                            else
                                                                x87_r3_28 = fconvert.t(*(ecx_32 - 8))
                                                        else
                                                            x87_r3_28 = float.t(0)
                                                        
                                                        *(ecx_32 - 8) = fconvert.s(x87_r3_28)
                                                        long double x87_r3_29 = float.t(0)
                                                        long double temp7_1 =
                                                            fconvert.t(*(ecx_32 - 4))
                                                        x87_r3_29 - temp7_1
                                                        eax_68.w =
                                                            (x87_r3_29 < temp7_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r3_29, temp7_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r3_29 == temp7_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_30
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double temp10_1 =
                                                                fconvert.t(*(ecx_32 - 4))
                                                            x87_r4_1 - temp10_1
                                                            eax_68.w =
                                                                (x87_r4_1 < temp10_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r4_1, temp10_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r4_1 == temp10_1 ? 1 : 0) << 0xe
                                                                | 0x2000
                                                            
                                                            if ((eax_68:1.b & 0x41) != 0)
                                                                x87_r3_30 = float.t(1)
                                                            else
                                                                x87_r3_30 = fconvert.t(*(ecx_32 - 4))
                                                        else
                                                            x87_r3_30 = float.t(0)
                                                        
                                                        *(ecx_32 - 4) = fconvert.s(x87_r3_30)
                                                        long double x87_r3_31 = float.t(0)
                                                        long double temp13_1 = fconvert.t(*ecx_32)
                                                        x87_r3_31 - temp13_1
                                                        eax_68.w =
                                                            (x87_r3_31 < temp13_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r3_31, temp13_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r3_31 == temp13_1 ? 1 : 0)
                                                            << 0xe | 0x2000
                                                        long double x87_r3_32
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double temp16_1 =
                                                                fconvert.t(*ecx_32)
                                                            x87_r4_1 - temp16_1
                                                            eax_68.w =
                                                                (x87_r4_1 < temp16_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r4_1, temp16_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r4_1 == temp16_1 ? 1 : 0) << 0xe
                                                                | 0x2000
                                                            
                                                            if ((eax_68:1.b & 0x41) != 0)
                                                                x87_r3_32 = float.t(1)
                                                            else
                                                                x87_r3_32 = fconvert.t(*ecx_32)
                                                        else
                                                            x87_r3_32 = float.t(0)
                                                        
                                                        *ecx_32 = fconvert.s(x87_r3_32)
                                                        long double x87_r3_33 = float.t(0)
                                                        long double temp19_1 =
                                                            fconvert.t(*(ecx_32 + 4))
                                                        x87_r3_33 - temp19_1
                                                        eax_68.w =
                                                            (x87_r3_33 < temp19_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r3_33, temp19_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r3_33 == temp19_1 ? 1 : 0)
                                                            << 0xe | 0x2000
                                                        long double x87_r3_34
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double temp22_1 =
                                                                fconvert.t(*(ecx_32 + 4))
                                                            x87_r4_1 - temp22_1
                                                            eax_68.w =
                                                                (x87_r4_1 < temp22_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r4_1, temp22_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r4_1 == temp22_1 ? 1 : 0) << 0xe
                                                                | 0x2000
                                                            
                                                            if ((eax_68:1.b & 0x41) != 0)
                                                                x87_r3_34 = float.t(1)
                                                            else
                                                                x87_r3_34 = fconvert.t(*(ecx_32 + 4))
                                                        else
                                                            x87_r3_34 = float.t(0)
                                                        
                                                        *(ecx_32 + 4) = fconvert.s(x87_r3_34)
                                                        k += 1
                                                        ecx_32 += 0x10
                                                    while (k u< *(arg1[1] + 0x68))
                                            else if (edx_8 == 2)
                                                int32_t k_1 = 0
                                                
                                                if (ecx_29 u> 0)
                                                    void* ecx_31 = eax_68 + 8
                                                    
                                                    do
                                                        long double temp6_1 =
                                                            fconvert.t(*(ecx_31 - 8))
                                                        x87_r4_1 - temp6_1
                                                        eax_68.w = (x87_r4_1 < temp6_1 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r4_1, temp6_1)
                                                            ? 1 : 0) << 0xa
                                                            | (x87_r4_1 == temp6_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_18
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_19 =
                                                                fconvert.t(*(ecx_31 - 8))
                                                            long double temp8_1 = fconvert.t(1f)
                                                            x87_r3_19 - temp8_1
                                                            eax_68.w =
                                                                (x87_r3_19 < temp8_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_19, temp8_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_19 == temp8_1 ? 1 : 0) << 0xe
                                                                | 0x2000
                                                            bool p_5 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_5)
                                                                x87_r3_18 = float.t(1)
                                                            else
                                                                x87_r3_18 = fconvert.t(*(ecx_31 - 8))
                                                        else
                                                            x87_r3_18 = x87_r4_1
                                                        
                                                        *(ecx_31 - 8) = fconvert.s(x87_r3_18)
                                                        long double temp11_1 =
                                                            fconvert.t(*(ecx_31 - 4))
                                                        x87_r4_1 - temp11_1
                                                        eax_68.w =
                                                            (x87_r4_1 < temp11_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r4_1, temp11_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r4_1 == temp11_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_20
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_21 =
                                                                fconvert.t(*(ecx_31 - 4))
                                                            long double temp14_1 = fconvert.t(1f)
                                                            x87_r3_21 - temp14_1
                                                            eax_68.w =
                                                                (x87_r3_21 < temp14_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_21, temp14_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_21 == temp14_1 ? 1 : 0)
                                                                << 0xe | 0x2000
                                                            bool p_6 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_6)
                                                                x87_r3_20 = float.t(1)
                                                            else
                                                                x87_r3_20 = fconvert.t(*(ecx_31 - 4))
                                                        else
                                                            x87_r3_20 = x87_r4_1
                                                        
                                                        *(ecx_31 - 4) = fconvert.s(x87_r3_20)
                                                        long double temp17_1 = fconvert.t(*ecx_31)
                                                        x87_r4_1 - temp17_1
                                                        eax_68.w =
                                                            (x87_r4_1 < temp17_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r4_1, temp17_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r4_1 == temp17_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_22
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_23 =
                                                                fconvert.t(*ecx_31)
                                                            long double temp20_1 = fconvert.t(1f)
                                                            x87_r3_23 - temp20_1
                                                            eax_68.w =
                                                                (x87_r3_23 < temp20_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_23, temp20_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_23 == temp20_1 ? 1 : 0)
                                                                << 0xe | 0x2000
                                                            bool p_7 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_7)
                                                                x87_r3_22 = float.t(1)
                                                            else
                                                                x87_r3_22 = fconvert.t(*ecx_31)
                                                        else
                                                            x87_r3_22 = x87_r4_1
                                                        
                                                        *ecx_31 = fconvert.s(x87_r3_22)
                                                        long double x87_r3_24 = float.t(0)
                                                        long double temp23_1 =
                                                            fconvert.t(*(ecx_31 + 4))
                                                        x87_r3_24 - temp23_1
                                                        eax_68.w =
                                                            (x87_r3_24 < temp23_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r3_24, temp23_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r3_24 == temp23_1 ? 1 : 0)
                                                            << 0xe | 0x2000
                                                        long double x87_r3_25
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_26 =
                                                                fconvert.t(*(ecx_31 + 4))
                                                            long double temp25_1 = fconvert.t(1f)
                                                            x87_r3_26 - temp25_1
                                                            eax_68.w =
                                                                (x87_r3_26 < temp25_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_26, temp25_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_26 == temp25_1 ? 1 : 0)
                                                                << 0xe | 0x2000
                                                            bool p_8 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_8)
                                                                x87_r3_25 = float.t(1)
                                                            else
                                                                x87_r3_25 = fconvert.t(*(ecx_31 + 4))
                                                        else
                                                            x87_r3_25 = float.t(0)
                                                        
                                                        *(ecx_31 + 4) = fconvert.s(x87_r3_25)
                                                        k_1 += 1
                                                        ecx_31 += 0x10
                                                    while (k_1 u< *(arg1[1] + 0x68))
                                            else if (edx_8 == 3)
                                                int32_t k_2 = 0
                                                
                                                if (ecx_29 u> 0)
                                                    void* ecx_30 = eax_68 + 8
                                                    
                                                    do
                                                        long double temp9_1 =
                                                            fconvert.t(*(ecx_30 - 8))
                                                        x87_r4_1 - temp9_1
                                                        eax_68.w = (x87_r4_1 < temp9_1 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r4_1, temp9_1)
                                                            ? 1 : 0) << 0xa
                                                            | (x87_r4_1 == temp9_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_10
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_11 =
                                                                fconvert.t(*(ecx_30 - 8))
                                                            long double temp12_1 = fconvert.t(1f)
                                                            x87_r3_11 - temp12_1
                                                            eax_68.w =
                                                                (x87_r3_11 < temp12_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_11, temp12_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_11 == temp12_1 ? 1 : 0)
                                                                << 0xe | 0x2000
                                                            bool p_1 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_1)
                                                                x87_r3_10 = float.t(1)
                                                            else
                                                                x87_r3_10 = fconvert.t(*(ecx_30 - 8))
                                                        else
                                                            x87_r3_10 = x87_r4_1
                                                        
                                                        *(ecx_30 - 8) = fconvert.s(x87_r3_10)
                                                        long double temp15_1 =
                                                            fconvert.t(*(ecx_30 - 4))
                                                        x87_r4_1 - temp15_1
                                                        eax_68.w =
                                                            (x87_r4_1 < temp15_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r4_1, temp15_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r4_1 == temp15_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_12
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_13 =
                                                                fconvert.t(*(ecx_30 - 4))
                                                            long double temp18_1 = fconvert.t(1f)
                                                            x87_r3_13 - temp18_1
                                                            eax_68.w =
                                                                (x87_r3_13 < temp18_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_13, temp18_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_13 == temp18_1 ? 1 : 0)
                                                                << 0xe | 0x2000
                                                            bool p_2 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_2)
                                                                x87_r3_12 = float.t(1)
                                                            else
                                                                x87_r3_12 = fconvert.t(*(ecx_30 - 4))
                                                        else
                                                            x87_r3_12 = x87_r4_1
                                                        
                                                        *(ecx_30 - 4) = fconvert.s(x87_r3_12)
                                                        long double temp21_1 = fconvert.t(*ecx_30)
                                                        x87_r4_1 - temp21_1
                                                        eax_68.w =
                                                            (x87_r4_1 < temp21_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r4_1, temp21_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r4_1 == temp21_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_14
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_15 =
                                                                fconvert.t(*ecx_30)
                                                            long double temp24_1 = fconvert.t(1f)
                                                            x87_r3_15 - temp24_1
                                                            eax_68.w =
                                                                (x87_r3_15 < temp24_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_15, temp24_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_15 == temp24_1 ? 1 : 0)
                                                                << 0xe | 0x2000
                                                            bool p_3 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_3)
                                                                x87_r3_14 = float.t(1)
                                                            else
                                                                x87_r3_14 = fconvert.t(*ecx_30)
                                                        else
                                                            x87_r3_14 = x87_r4_1
                                                        
                                                        *ecx_30 = fconvert.s(x87_r3_14)
                                                        long double temp26_1 =
                                                            fconvert.t(*(ecx_30 + 4))
                                                        x87_r4_1 - temp26_1
                                                        eax_68.w =
                                                            (x87_r4_1 < temp26_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r4_1, temp26_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r4_1 == temp26_1 ? 1 : 0) << 0xe
                                                            | 0x2000
                                                        long double x87_r3_16
                                                        
                                                        if ((eax_68:1.b & 0x41) != 0)
                                                            long double x87_r3_17 =
                                                                fconvert.t(*(ecx_30 + 4))
                                                            long double temp27_1 = fconvert.t(1f)
                                                            x87_r3_17 - temp27_1
                                                            eax_68.w =
                                                                (x87_r3_17 < temp27_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r3_17, temp27_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r3_17 == temp27_1 ? 1 : 0)
                                                                << 0xe | 0x2000
                                                            bool p_4 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (p_4)
                                                                x87_r3_16 = float.t(1)
                                                            else
                                                                x87_r3_16 = fconvert.t(*(ecx_30 + 4))
                                                        else
                                                            x87_r3_16 = x87_r4_1
                                                        
                                                        *(ecx_30 + 4) = fconvert.s(x87_r3_16)
                                                        k_2 += 1
                                                        ecx_30 += 0x10
                                                    while (k_2 u< *(arg1[1] + 0x68))
                                            
                                            int32_t* ecx_33 = arg1[1]
                                            (*(*ecx_33 + 8))(j_1, *i_2, 
                                                ((ecx_33[0x1a] * j_1) << 4) + *edi_26)
                                            x87_r4_1 = fconvert.t(-1f)
                                            j_1 += 1
                                            eax_64 = arg1[1]
                                        while (j_1 u< *(eax_64 + 0x6c))
                                    
                                    *(edi_26 + 4) = var_18
                                    eax_32 = ecx_11
                                    var_18 = edi_26
                            
                            var_38_1 += 1
                        while (eax_32 u< ebx_2)
                    
                    result = 0

if (var_c != 0)
    type_info::`vector deleting destructor'(var_c, 3)

j__free(var_1c)
j__free(var_20)
j__free(eax_6)
j__free(var_10)
j__free(0)
return result

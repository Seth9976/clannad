// 函数: sub_4ae1e5
// 地址: 0x4ae1e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_3c = 0xffffffff
int32_t var_1c = 0xffffffff
int32_t edi
int32_t var_80 = edi
int32_t* var_14 = nullptr
int32_t* j_27 = nullptr
int32_t var_24 = 0
sub_4a39e3(arg1)
int32_t i = 0
int32_t var_8 = 0

if (*(arg1 + 8) u> 0)
    do
        *(*(*(arg1 + 0x14) + (i << 2)) + 0x40) = 0xffffffff
        i += 1
    while (i u< *(arg1 + 8))

int32_t i_1 = 0
int32_t* i_8
int32_t* j_6
int32_t* j_48
int32_t* j_49
int32_t* j_26
int32_t* j_3

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* ebx_1 = *(*(arg1 + 0x18) + (i_1 << 2))
        int32_t eax_2 = *ebx_1 & 0xfff00000
        int32_t* var_2c_1 = ebx_1
        
        if (eax_2 != 0)
            void* ecx_3 = ebx_1[3]
            
            if ((ecx_3 == 0 || (**(*(arg1 + 0x14) + (*ebx_1[4] << 2)) & 0x40) == 0)
                    && (eax_2 == 0x20400000 || eax_2 == 0x20500000))
                j_3 = nullptr
                
                if (ecx_3 u> 0)
                    do
                        int32_t* j_13 = j_3
                        int32_t eax_3 = ebx_1[2]
                        int32_t j = 0
                        int32_t* var_64 = eax_3 + (j_13 << 2)
                        
                        do
                            int32_t eax_5 = *(arg1 + 0x14)
                            int32_t var_74 = *(eax_5 + (*var_64 << 2))
                            int32_t var_70_1 = *(eax_5 + (*(eax_3 + ((ecx_3 + j_13) << 2)) << 2))
                            
                            if ((*(*(*(arg1 + 0x10) + (*((&var_74)[j] + 4) << 2)) + 4) & 2) != 0)
                                void* ecx_10 = (&var_74)[j]
                                
                                if (*(ecx_10 + 8) == 0xffffffff)
                                    int32_t* i_15 = *(*(arg1 + 0x18) + (*(ecx_10 + 0x48) << 2))
                                    int32_t edx_13 = *i_15 ^ *ebx_1
                                    i_8 = i_15
                                    
                                    if ((edx_13 & 0xfff00000) == 0)
                                        int32_t* j_38 = i_15[3]
                                        int32_t edx_14 = 0
                                        j_6 = j_38
                                        
                                        if (j_38 u> 0)
                                            int32_t* ecx_12 = i_15[4]
                                            
                                            while (*ecx_12 != *(&var_64)[j])
                                                edx_14 += 1
                                                ecx_12 = &ecx_12[1]
                                                
                                                if (edx_14 u>= j_6)
                                                    break
                                            
                                            i_15 = i_8
                                        
                                        int32_t ecx_13 = i_15[2]
                                        j_49 = nullptr
                                        int32_t* j_39 = j_6
                                        j_6 = 0xffffffff
                                        int32_t edx_16 = *(ecx_13 + (edx_14 << 2))
                                        int32_t* ecx_14 = ecx_13 + ((j_39 + edx_14) << 2)
                                        int32_t* var_58_1 = ecx_14
                                        int32_t ecx_15 = *ecx_14
                                        int32_t var_68_1 = *(eax_5 + (ecx_15 << 2))
                                        int32_t var_6c_1 = *(eax_5 + (edx_16 << 2))
                                        void* eax_8 = (&var_74)[j]
                                        void var_54
                                        
                                        if (*(eax_8 + 0x5c) == 1 && edx_16 != ecx_15)
                                            sub_4a0ba4(arg1, *(&var_64)[1 - j], &j_6, &var_54)
                                            i_8 = j_6
                                            int32_t* j_69
                                            j_69.b =
                                                sub_4a0ba4(arg1, *(&var_64)[j], &i_8, &var_54) s>= 0
                                            j_49 = j_69
                                        
                                        int32_t* j_61 = 2
                                        j_26 = 2
                                        
                                        while (true)
                                            int32_t ecx_18 = *(arg1 + 0x10)
                                            int32_t* j_66 = 5 - j_61
                                            int32_t* i_20 =
                                                *(*(ecx_18 + (*((&var_74)[j_61] + 4) << 2)) + 4)
                                                & 0x100
                                            j_48 = j_66
                                            i_8 = i_20
                                            
                                            if (i_20 != 0 && *((&var_74)[j_61] + 8) == 0xffffffff
                                                    && (*(
                                                    *(ecx_18 + (*((&var_74)[1 - j] + 4) << 2)) + 5)
                                                    & 1) != 0 && *((&var_74)[1 - j] + 8) == 0xffffffff)
                                                ebx_1 = var_2c_1
                                                long double x87_r7_1 = float.t(0)
                                                int32_t eax_18 = *ebx_1 & 0xfff00000
                                                
                                                if (eax_18 == 0x20400000)
                                                    x87_r7_1 = fconvert.t(*((&var_74)[j_61] + 0x20))
                                                        + fconvert.t(*((&var_74)[1 - j] + 0x20))
                                                else if (eax_18 == 0x20500000)
                                                    x87_r7_1 = fconvert.t(*((&var_74)[j_61] + 0x20))
                                                        * fconvert.t(*((&var_74)[1 - j] + 0x20))
                                                
                                                int32_t* ecx_35 = (&var_64)[j]
                                                int32_t* var_84_4 = ecx_35
                                                int32_t* var_88_4 = ecx_35
                                                var_88_4.q = fconvert.d(x87_r7_1)
                                                *ecx_35 = *(&var_64)[j_48]
                                                *(&var_64)[1 - j] =
                                                    sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_88_4)
                                                goto label_4ae555
                                            
                                            if (*(eax_8 + 0x5c) == 1)
                                                int32_t ecx_22 = *((&var_74)[1 - j] + 0x48)
                                                
                                                if (ecx_22 == 0xffffffff
                                                        || ecx_22 u< *(eax_8 + 0x48))
                                                    void* ecx_23 = (&var_74)[1 - j]
                                                    
                                                    if (*(ecx_23 + 8) == 0xffffffff)
                                                        int32_t* eax_25
                                                        
                                                        if (i_8 != 0
                                                                && *((&var_74)[j_61] + 8) == 0xffffffff
                                                                && (*(
                                                                *(*(arg1 + 0x10) + (*(ecx_23 + 4) << 2))
                                                                + 5) & 1) == 0)
                                                            eax_25 = (&var_64)[j_61]
                                                        label_4ae526:
                                                            int32_t* edi_4 = (&var_64)[1 - j]
                                                            int32_t ecx_38 = *edi_4
                                                            ebx_1 = var_2c_1
                                                            *edi_4 = *eax_25
                                                            *eax_25 = ecx_38
                                                            void* eax_27 = (&var_74)[j]
                                                            *(eax_27 + 0x60) = 0
                                                            *(eax_27 + 0x64) = 0
                                                            *(eax_27 + 0x40) = 0xffffffff
                                                        label_4ae555:
                                                            *(*(*(arg1 + 0x14)
                                                                + (*(ebx_1[4] + (j_3 << 2)) << 2))
                                                                + 0x40) = 0xffffffff
                                                            var_8 = 1
                                                            break
                                                        
                                                        int32_t* ecx_26 = (&var_64)[j_61]
                                                        int32_t ecx_27 = *ecx_26
                                                        
                                                        if (*(&var_64)[j_66] != ecx_27)
                                                            if (j_49 == 0)
                                                                i_8 = j_6
                                                                int32_t ecx_29
                                                                ecx_29.b =
                                                                    sub_4a0ba4(arg1, ecx_27, &i_8, &var_54)
                                                                    s>= 0
                                                                j_66 = j_48
                                                                
                                                                if (ecx_29 != 0)
                                                                    eax_25 = (&var_64)[j_66]
                                                                    goto label_4ae526
                                                                
                                                                j_61 = j_26
                                                            
                                                            if (*(&var_64)[1 - j] == *ecx_26)
                                                                eax_25 = (&var_64)[j_66]
                                                                goto label_4ae526
                                            
                                            j_61 += 1
                                            j_26 = j_61
                                            
                                            if (j_61 u>= 4)
                                                ebx_1 = var_2c_1
                                                break
                            
                            j += 1
                        while (j u< 2)
                        
                        ecx_3 = ebx_1[3]
                        j_3 += 1
                    while (j_3 u< ecx_3)
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))
    
    if (var_8 != 0)
        var_8 = 0
        var_24 = 1
        sub_4a39e3(arg1)

int32_t i_2 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* j_63 = *(*(arg1 + 0x18) + (i_2 << 2))
        int32_t eax_34 = *j_63 & 0xfff00000
        j_26 = j_63
        
        if (eax_34 != 0)
            int32_t ecx_43 = j_63[3]
            
            if ((ecx_43 == 0 || (**(*(arg1 + 0x14) + (*j_63[4] << 2)) & 0x40) == 0)
                    && (eax_34 == 0x30000000 || eax_34 == 0x11000000))
                int32_t j_1 = 0
                
                if (ecx_43 u> 0)
                    do
                        int32_t* i_9 = j_63[2] + (j_1 << 2)
                        int32_t* k = *i_9
                        int32_t ecx_45 = *(arg1 + 0x10)
                        i_8 = i_9
                        void* eax_37 = *(*(arg1 + 0x14) + (k << 2))
                        void* ecx_46 = *(ecx_45 + (*(eax_37 + 4) << 2))
                        j_3 = k
                        
                        while ((*(ecx_46 + 4) & 2) != 0)
                            if (*(eax_37 + 8) != 0xffffffff)
                                break
                            
                            int32_t ecx_47 = j_63[3]
                            
                            if (ecx_47 u< j_63[1])
                                int32_t* edx_23 = j_63[2] + (ecx_47 << 2)
                                
                                while (k != *edx_23)
                                    ecx_47 += 1
                                    
                                    if (ecx_47 u>= j_63[1])
                                        break
                                    
                                    edx_23 = &edx_23[1]
                                
                                if (ecx_47 u< j_63[1])
                                    break
                            
                            int32_t* ecx_49 = *(*(arg1 + 0x18) + (*(eax_37 + 0x48) << 2))
                            int32_t edx_25 = ecx_49[3]
                            int32_t eax_39 = 0
                            
                            if (edx_25 u> 0)
                                int32_t* edi_5 = ecx_49[4]
                                
                                while (*edi_5 != k)
                                    eax_39 += 1
                                    edi_5 = &edi_5[1]
                                    
                                    if (eax_39 u>= edx_25)
                                        break
                                
                                j_63 = j_26
                            
                            int32_t ebx_22 = *ecx_49 & 0xfff00000
                            
                            if (ebx_22 != 0x20400000)
                                if (ebx_22 != 0x20500000)
                                    break
                                
                                int32_t ecx_51 = ecx_49[2]
                                int32_t* j_17 = *(ecx_51 + (eax_39 << 2))
                                int32_t edi_6 = *(arg1 + 0x10)
                                int32_t edx_28 = *(arg1 + 0x14)
                                j_6 = *(ecx_51 + ((edx_25 + eax_39) << 2))
                                void* eax_41 = *(edx_28 + (j_17 << 2))
                                
                                if ((*(*(edi_6 + (*(eax_41 + 4) << 2)) + 5) & 1) == 0)
                                label_4ae6ee:
                                    void* edx_29 = *(edx_28 + (j_6 << 2))
                                    
                                    if ((*(*(edi_6 + (*(edx_29 + 4) << 2)) + 5) & 1) == 0)
                                        break
                                    
                                    long double x87_r7_5 = fconvert.t(*(edx_29 + 0x20))
                                    long double temp1_1 = fconvert.t(0.0)
                                    x87_r7_5 - temp1_1
                                    void* eax_45
                                    eax_45.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                                        | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe
                                    
                                    if ((eax_45:1.b & 0x41) != 0)
                                        break
                                    
                                    j_3 = j_17
                                else
                                    long double x87_r7_4 = fconvert.t(*(eax_41 + 0x20))
                                    long double temp0_1 = fconvert.t(0.0)
                                    x87_r7_4 - temp0_1
                                    eax_41.w = (x87_r7_4 < temp0_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_4, temp0_1) ? 1 : 0) << 0xa
                                        | (x87_r7_4 == temp0_1 ? 1 : 0) << 0xe
                                    
                                    if ((eax_41:1.b & 0x41) != 0)
                                        goto label_4ae6ee
                                    
                                    j_3 = j_6
                                
                                j_63 = j_26
                                k = j_3
                            else
                                int32_t ecx_50 = ecx_49[2]
                                k = *(ecx_50 + (eax_39 << 2))
                                
                                if (k != *(ecx_50 + ((edx_25 + eax_39) << 2)))
                                    break
                                
                                j_3 = k
                            
                            eax_37 = *(*(arg1 + 0x14) + (k << 2))
                            ecx_46 = *(*(arg1 + 0x10) + (*(eax_37 + 4) << 2))
                        
                        int32_t* j_7 = j_3
                        int32_t* i_16 = i_8
                        
                        if (*i_16 != j_7)
                            *i_16 = j_7
                            var_8 = 1
                        
                        j_1 += 1
                        j_63 = j_26
                    while (j_1 u< j_63[3])
        
        i_2 += 1
    while (i_2 u< *(arg1 + 0xc))

if (var_8 != 0)
    var_8 = 0
    var_24 = 1
    sub_4a39e3(arg1)

int32_t i_3 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* ecx_57 = *(*(arg1 + 0x18) + (i_3 << 2))
        int32_t eax_51 = *ecx_57 & 0xfff00000
        
        if (eax_51 != 0)
            int32_t edx_31 = ecx_57[3]
            
            if ((edx_31 == 0 || (**(*(arg1 + 0x14) + (*ecx_57[4] << 2)) & 0x40) == 0)
                    && eax_51 == 0x30000000)
                int32_t j_2 = 0
                int32_t j_5 = 0
                
                if (edx_31 u> 0)
                    do
                        int32_t k_1 = *(ecx_57[2] + (j_2 << 2))
                        void* eax_53 = *(*(arg1 + 0x14) + (k_1 << 2))
                        
                        if ((*(*(*(arg1 + 0x10) + (*(eax_53 + 4) << 2)) + 4) & 2) != 0
                                && *(eax_53 + 8) == 0xffffffff)
                            int32_t* eax_55 = *(*(arg1 + 0x18) + (*(eax_53 + 0x48) << 2))
                            void* edx_36 = eax_55[3]
                            j_26 = nullptr
                            
                            if (edx_36 u> 0)
                                j_6 = eax_55[4]
                                
                                while (*j_6 != k_1)
                                    j_26 += 1
                                    j_6 = &j_6[1]
                                    
                                    if (j_26 u>= edx_36)
                                        break
                            
                            int32_t ebx_29 = *eax_55 & 0xfff00000
                            int32_t var_28
                            
                            if (ebx_29 == 0x10100000)
                                var_28 = 1
                            label_4ae85d:
                                j_49 = nullptr
                                
                                if (var_28 u> 0)
                                    int32_t eax_56 = eax_55[2]
                                    j_6 = eax_56 + (j_26 << 2)
                                    j_48 = eax_56 + ((edx_36 + j_26) << 2)
                                    
                                    do
                                        int32_t k_2 = *j_6
                                        int32_t eax_59 = *(arg1 + 0x14)
                                        int32_t k_7 = k_2
                                        j_26 = *(eax_59 + (k_2 << 2))
                                        
                                        if (ebx_29 != 0x20500000)
                                        label_4ae8f0:
                                            int32_t edx_42 = ecx_57[2]
                                            
                                            if (k_2 == *(edx_42 + ((j_2 + (ecx_57[3] << 1)) << 2)))
                                                int32_t* j_8 = *(edx_42 + ((ecx_57[3] + j_2) << 2))
                                                int32_t edx_43 = *(arg1 + 0x14)
                                                j_3 = j_8
                                                int32_t* i_12 = *(edx_43 + (j_8 << 2))
                                                int32_t edx_44 = i_12[1]
                                                i_8 = i_12
                                                
                                                if ((*(*(*(arg1 + 0x10) + (edx_44 << 2)) + 5) & 1)
                                                        != 0)
                                                    int32_t* i_13 = i_8
                                                    
                                                    if (i_13[2] == 0xffffffff)
                                                        long double x87_r7_7 = fconvert.t(0.0)
                                                        long double x87_r6_1 =
                                                            fconvert.t(*(i_13 + 0x20))
                                                        x87_r6_1 - x87_r7_7
                                                        i_13.w = (x87_r6_1 < x87_r7_7 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r6_1, x87_r7_7)
                                                            ? 1 : 0) << 0xa
                                                            | (x87_r6_1 == x87_r7_7 ? 1 : 0) << 0xe
                                                        bool p_1 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (not(p_1))
                                                            *(ecx_57[2] + (j_2 << 2)) = k_2
                                                            *(ecx_57[2]
                                                                + ((ecx_57[3] + j_2) << 2)) = k_2
                                                            *(ecx_57[2]
                                                                + ((j_2 + (ecx_57[3] << 1)) << 2)) =
                                                                j_3
                                                            var_8 = 1
                                                            break
                                                            break
                                            
                                            if ((*(*(*(arg1 + 0x10) + (j_26[1] << 2)) + 4) & 2)
                                                    != 0)
                                                int32_t* j_50 = j_26
                                                
                                                if (j_50[2] == 0xffffffff)
                                                    int32_t* edx_47 =
                                                        *(*(arg1 + 0x18) + (j_50[0x12] << 2))
                                                    
                                                    if ((*edx_47 & 0xfff00000) == 0x30000000)
                                                        j_3 = nullptr
                                                        
                                                        if (edx_47[3] u> 0)
                                                            int32_t* i_14 = edx_47[4]
                                                            
                                                            while (*i_14 != k_2)
                                                                j_3 += 1
                                                                i_8 = &i_14[1]
                                                                
                                                                if (j_3 u>= edx_47[3])
                                                                    break
                                                                
                                                                k_2 = k_7
                                                                i_14 = i_8
                                                        
                                                        int32_t* j_18 = j_3
                                                        j_26 = *(*(arg1 + 0x14) + (
                                                            *(edx_47[2] + ((j_3 + edx_47[3]) << 2))
                                                            << 2))
                                                        char* eax_83 = *(*(arg1 + 0x14) + (*(
                                                            edx_47[2]
                                                            + ((j_18 + (edx_47[3] << 1)) << 2)) << 2))
                                                        int32_t* j_62 = j_26
                                                        char* var_c_1 = eax_83
                                                        
                                                        if ((*j_62 & 8) != 0)
                                                            j_26 = nullptr
                                                        label_4aea14:
                                                            
                                                            if ((*eax_83 & 8) != 0)
                                                                j_6 = nullptr
                                                            label_4aea90:
                                                                int32_t ebx_46 = ecx_57[3]
                                                                int32_t eax_97 = ecx_57[2]
                                                                int32_t edx_50 = edx_47[2]
                                                                bool cond:42_1 = j_26 != 0
                                                                j_49 = *(eax_97 + ((j_2 + ebx_46) << 2))
                                                                j_2 = j_5
                                                                j_48 =
                                                                    *(eax_97 + ((j_2 + (ebx_46 << 1)) << 2))
                                                                *(eax_97 + (j_2 << 2)) =
                                                                    *(edx_50 + (j_3 << 2))
                                                                int32_t* j_67 = j_48
                                                                
                                                                if (not(cond:42_1))
                                                                    j_67 = j_49
                                                                
                                                                bool cond:45_1 = j_6 != 0
                                                                *(ecx_57[2]
                                                                    + ((ecx_57[3] + j_2) << 2)) = j_67
                                                                int32_t* j_68 = j_48
                                                                
                                                                if (not(cond:45_1))
                                                                    j_68 = j_49
                                                                
                                                                *(ecx_57[2]
                                                                    + ((j_2 + (ecx_57[3] << 1)) << 2)) =
                                                                    j_68
                                                                var_8 = 1
                                                                break
                                                            
                                                            if ((*(
                                                                    *(*(arg1 + 0x10) + (*(eax_83 + 4) << 2))
                                                                    + 5) & 1) != 0
                                                                    && *(var_c_1 + 8) == 0xffffffff)
                                                                long double x87_r7_9 =
                                                                    fconvert.t(*(var_c_1 + 0x20))
                                                                long double temp10_1 = fconvert.t(0.0)
                                                                x87_r7_9 - temp10_1
                                                                char* eax_88
                                                                eax_88.w =
                                                                    (x87_r7_9 < temp10_1 ? 1 : 0) << 8 | (
                                                                    is_unordered.t(x87_r7_9, temp10_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_9 == temp10_1 ? 1 : 0) << 0xe
                                                                
                                                                if ((eax_88:1.b & 0x41) == 0)
                                                                    j_6 = 1
                                                                    goto label_4aea90
                                                        else if ((*(
                                                                *(*(arg1 + 0x10) + (j_62[1] << 2)) + 5) & 1)
                                                                != 0)
                                                            int32_t* j_51 = j_26
                                                            
                                                            if (j_51[2] == 0xffffffff)
                                                                long double x87_r7_8 =
                                                                    fconvert.t(*(j_51 + 0x20))
                                                                long double temp9_1 = fconvert.t(0.0)
                                                                x87_r7_8 - temp9_1
                                                                j_51.w =
                                                                    (x87_r7_8 < temp9_1 ? 1 : 0) << 8 | (
                                                                    is_unordered.t(x87_r7_8, temp9_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_8 == temp9_1 ? 1 : 0) << 0xe
                                                                
                                                                if ((j_51:1.b & 0x41) == 0)
                                                                    eax_83 = var_c_1
                                                                    j_26 = 1
                                                                    goto label_4aea14
                                        else
                                            int32_t* i_10 = *(eax_59 + (*j_48 << 2))
                                            int32_t edx_41 = i_10[1]
                                            i_8 = i_10
                                            
                                            if ((*(*(*(arg1 + 0x10) + (edx_41 << 2)) + 5) & 1) != 0)
                                                int32_t* i_11 = i_8
                                                
                                                if (i_11[2] == 0xffffffff)
                                                    long double x87_r7_6 =
                                                        fconvert.t(*(i_11 + 0x20))
                                                    long double temp5_1 = fconvert.t(0.0)
                                                    x87_r7_6 - temp5_1
                                                    i_11.w = (x87_r7_6 < temp5_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r7_6, temp5_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe
                                                    
                                                    if ((i_11:1.b & 1) != 0)
                                                        goto label_4ae8f0
                                        
                                        j_6 = &j_6[edx_36]
                                        j_49 += 1
                                        j_48 = &j_48[neg.d(edx_36)]
                                    while (j_49 u< var_28)
                            else if (ebx_29 == 0x20500000)
                                var_28 = 2
                                goto label_4ae85d
                        
                        j_2 += 1
                        j_5 = j_2
                    while (j_2 u< ecx_57[3])
        
        i_3 += 1
    while (i_3 u< *(arg1 + 0xc))

if (var_8 != 0)
    var_8 = 0
    var_24 = 1
    sub_4a39e3(arg1)

int32_t i_4 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* edi_12 = *(*(arg1 + 0x18) + (i_4 << 2))
        int32_t eax_101 = *edi_12 & 0xfff00000
        
        if (eax_101 != 0 && (edi_12[3] == 0 || (**(*(arg1 + 0x14) + (*edi_12[4] << 2)) & 0x40) == 0)
                && eax_101 == 0x10500000)
            j_49 = 0xffffffff
            i_8 = 0xffffffff
            bool cond:8_1 = edi_12[1] u<= 0
            j_3 = nullptr
            
            if (not(cond:8_1))
                do
                    int32_t k_3 = *(edi_12[2] + (j_3 << 2))
                    void* eax_104 = *(*(arg1 + 0x14) + (k_3 << 2))
                    
                    if ((*(*(*(arg1 + 0x10) + (*(eax_104 + 4) << 2)) + 4) & 2) != 0
                            && *(eax_104 + 8) == 0xffffffff)
                        int32_t* eax_106 = *(*(arg1 + 0x18) + (*(eax_104 + 0x48) << 2))
                        int32_t* var_28_1 = eax_106
                        
                        if ((*eax_106 & 0xfff00000) == 0x20500000)
                            int32_t edx_64 = eax_106[3]
                            j_26 = nullptr
                            
                            if (edx_64 u> 0)
                                j_6 = eax_106[4]
                                
                                while (*j_6 != k_3)
                                    j_26 += 1
                                    j_6 = &j_6[1]
                                    
                                    if (j_26 u>= edx_64)
                                        break
                            
                            int32_t k_4 = 0
                            j_48 = 1
                            
                            do
                                int32_t ecx_64 = *(eax_106[2] + ((eax_106[3] * k_4 + j_26) << 2))
                                int32_t* ecx_65 = *(*(arg1 + 0x14) + (ecx_64 << 2))
                                
                                if ((*(*(*(arg1 + 0x10) + (ecx_65[1] << 2)) + 4) & 2) != 0
                                        && ecx_65[2] == 0xffffffff)
                                    int32_t* edx_70 = *(*(arg1 + 0x18) + (ecx_65[0x12] << 2))
                                    
                                    if ((*edx_70 & 0xfff00000) == 0x10600000)
                                        if (ecx_65[0x17] == 1)
                                            int32_t edx_71 = *ecx_65
                                            void* eax_112 = (*
                                                *(*(arg1 + 0x14) + (*(edi_12[4] + (j_3 << 2)) << 2))
                                                | edx_71) & 0xe000000
                                            
                                            if ((0x8000000 & eax_112) != 0)
                                                eax_112 = 0x8000000
                                            else if ((&data_4000000 & eax_112) != 0)
                                                eax_112 = &data_4000000
                                            else if ((&data_2000000 & eax_112) != 0)
                                                eax_112 = &data_2000000
                                            
                                            if ((edx_71 & 0xe000000) != eax_112)
                                                *ecx_65 = (edx_71 & 0xf1ffffff) | eax_112
                                                var_8 = 1
                                            
                                            eax_106 = var_28_1
                                        
                                        if ((*(arg1 + 0x6c) & 0x40) != 0 && edi_12[3] == 1 && (*(
                                                *(*(arg1 + 0x14) + (*(edi_12[4] + (j_3 << 2)) << 2))
                                                + 3) & 2) != 0)
                                            int32_t ecx_69 = 0
                                            
                                            if (edx_70[3] u> 0)
                                                j_6 = edx_70[4]
                                                
                                                while (*j_6 != ecx_64)
                                                    j_6 = &j_6[1]
                                                    ecx_69 += 1
                                                    
                                                    if (ecx_69 u>= edx_70[3])
                                                        break
                                            
                                            int32_t edx_75 = eax_106[2]
                                            j_49 = *(edx_70[2] + (ecx_69 << 2))
                                            i_8 = *(edx_75 + ((eax_106[3] * j_48 + j_26) << 2))
                                
                                k_4 += 1
                                j_48 -= 1
                            while (k_4 u< 2)
                    
                    j_3 += 1
                while (j_3 u< edi_12[1])
                
                if (j_49 != 0xffffffff)
                    int32_t eax_114 = sub_49f5a4(arg1, 0x50100004, 0xffffffff, 0xffffffff)
                    
                    if (eax_114 == 0xffffffff)
                        return 
                    
                    int32_t eax_115 = sub_49f5a4(arg1, 0x10000001, 0xffffffff, 0xffffffff)
                    
                    if (eax_115 == 0xffffffff)
                        return 
                    
                    int32_t ecx_77 = *(arg1 + 0x18)
                    void* ebx_71 = *(ecx_77 + (eax_114 << 2))
                    j_6 = *(ecx_77 + (eax_115 << 2))
                    sub_49e7bf(ebx_71, edi_12)
                    sub_49e7bf(j_6, edi_12)
                    int32_t* j_70 = j_49
                    j_3 = nullptr
                    *(*(ebx_71 + 8) + 4) = j_70
                    **(ebx_71 + 8) = j_70
                    int32_t* i_17 = i_8
                    *(*(ebx_71 + 8) + 0xc) = i_17
                    *(*(ebx_71 + 8) + 8) = i_17
                    
                    do
                        int32_t* i_23 = i_17
                        int32_t* i_21 = i_17
                        i_21.q = fconvert.d(float.t(0))
                        int32_t eax_119 = sub_49f544(arg1, *(arg1 + 0x88), 0, 0, i_21)
                        int32_t* j_10 = j_3
                        *(j_10 + *(ebx_71 + 0x10)) = eax_119
                        
                        if (*(j_10 + *(ebx_71 + 0x10)) == 0xffffffff)
                            return 
                        
                        int32_t* j_14 = j_3
                        *(*(*(arg1 + 0x14) + (*(j_3 + *(ebx_71 + 0x10)) << 2)) + 0x14) =
                            *(*(*(arg1 + 0x14) + (*edi_12[4] << 2)) + 0x14)
                        void* eax_128 = *(*(arg1 + 0x14) + (*(j_14 + *(ebx_71 + 0x10)) << 2))
                        int32_t ecx_88 = *(*(*(arg1 + 0x14) + (*edi_12[4] << 2)) + 0x18)
                        int32_t* j_15 = j_3
                        j_3 = &j_3[1]
                        *(eax_128 + 0x18) = ecx_88
                        int32_t eax_129 = *(arg1 + 0x14)
                        i_17 = *(eax_129 + (*(j_15 + *(ebx_71 + 0x10)) << 2))
                        *i_17 |= **(eax_129 + (*edi_12[4] << 2)) & 0xe000000
                    while (j_3 u< 0x10)
                    
                    int32_t* j_28 = j_6
                    *j_28[2] = *(*(ebx_71 + 0x10) + 8)
                    *j_28[4] = *edi_12[4]
                    sub_46cb59(edi_12, 1)
                    *(arg1 + 0xc) -= 1
                    int32_t ecx_96 = *(arg1 + 0xc) - 1
                    
                    while (ecx_96 u> i_4)
                        int32_t* edx_87 = *(arg1 + 0x18) + (ecx_96 << 2)
                        ecx_96 -= 1
                        *edx_87 = edx_87[-1]
                    
                    int32_t* j_36 = j_6
                    *(*(arg1 + 0x18) + (i_4 << 2)) = ebx_71
                    *(*(arg1 + 0x18) + (i_4 << 2) + 4) = j_36
                    sub_4a39e3(arg1)
                    var_8 = 1
        
        i_4 += 1
    while (i_4 u< *(arg1 + 0xc))

if (var_8 != 0)
    var_8 = 0
    var_24 = 1
    sub_4a39e3(arg1)

bool cond:4_1 = *(arg1 + 0xc) u<= 0
j_3 = nullptr

if (not(cond:4_1))
    do
        int32_t* edx_88 = *(*(arg1 + 0x18) + (j_3 << 2))
        int32_t eax_139 = *edx_88 & 0xfff00000
        int32_t* var_40_3 = edx_88
        
        if (eax_139 != 0 && (edx_88[3] == 0 || (**(*(arg1 + 0x14) + (*edx_88[4] << 2)) & 0x40) == 0)
                && eax_139 == 0x10400000)
            int32_t j_4 = 0
            
            if (edx_88[1] u> 0)
                do
                    int32_t edi_15 = *(arg1 + 0x10)
                    int32_t* eax_141 = edx_88[2] + (j_4 << 2)
                    int32_t k_5 = *eax_141
                    void* eax_143 = *(*(arg1 + 0x14) + (k_5 << 2))
                    
                    if ((*(*(edi_15 + (*(eax_143 + 4) << 2)) + 4) & 2) != 0
                            && *(eax_143 + 8) == 0xffffffff)
                        int32_t* eax_145 = *(*(arg1 + 0x18) + (*(eax_143 + 0x48) << 2))
                        
                        if ((*eax_145 & 0xfff00000) == 0x20400000)
                            int32_t* i_19 = eax_145[3]
                            j_26 = nullptr
                            i_8 = i_19
                            
                            if (i_19 u> 0)
                                j_6 = eax_145[4]
                                
                                while (*j_6 != k_5)
                                    j_26 += 1
                                    j_6 = &j_6[1]
                                    
                                    if (j_26 u>= i_19)
                                        break
                            
                            int32_t eax_146 = eax_145[2]
                            int32_t k_6 = 0
                            int32_t* edx_89 = eax_146 + (j_26 << 2)
                            
                            do
                                char* ecx_108 = *(*(arg1 + 0x14) + (*edx_89 << 2))
                                
                                if ((*(*(edi_15 + (*(ecx_108 + 4) << 2)) + 5) & 1) != 0
                                        && (*ecx_108 & 2) != 0 && *(ecx_108 + 8) == 0xffffffff)
                                    var_8 = 1
                                    *eax_141 = *(eax_146 + (((1 - k_6) * i_8 + j_26) << 2))
                                    break
                                
                                k_6 += 1
                                edx_89 = &edx_89[i_8]
                            while (k_6 u< 2)
                            
                            edx_88 = var_40_3
                    
                    j_4 += 1
                while (j_4 u< edx_88[1])
        
        j_3 += 1
    while (j_3 u< *(arg1 + 0xc))

if (var_8 == 0 && var_24 == 0)
    int32_t eax_151 = *(arg1 + 0xc)
    int32_t* j_75 = nullptr
    int32_t var_2c_2 = eax_151
    int32_t eax_296
    
    if (eax_151 u<= 0)
    label_4af9ea:
        
        if (sub_4a4f2f(arg1) s>= 0 && sub_49ff18(arg1) s>= 0 && sub_4a6590(arg1) s>= 0)
            eax_296.b = var_8 == 0
    else
        while (true)
            var_2c_2 -= 1
            int32_t* ebx_83 = *(*(arg1 + 0x18) + (var_2c_2 << 2))
            int32_t* j_72 = ebx_83[3]
            j_48 = j_72
            
            if (j_72 == 0 || (**(*(arg1 + 0x14) + (*ebx_83[4] << 2)) & 0x40) == 0)
                int32_t eax_157 = *ebx_83 & 0xfff00000
                
                if (eax_157 == 0x20400000 || eax_157 == 0x20500000)
                    if (j_72 u> j_75)
                        j_75 = j_72
                        
                        if (j_72 u<= 0x10)
                            j_75 = 0x10
                        
                        j__free(var_14)
                        int32_t* eax_160 = sub_745f3f(j_75 << 2)
                        var_14 = eax_160
                        
                        if (eax_160 == 0)
                            goto label_4afa17
                        
                        j__free(j_27)
                        int32_t* j_52 = sub_745f3f(j_75 << 3)
                        j_27 = j_52
                        
                        if (j_52 == 0)
                            goto label_4afa17
                    
                    j_3 = nullptr
                    
                    if (j_72 u> 0)
                        int32_t* var_28_2 = var_14
                        j_6 = j_27
                        
                        do
                            int32_t* j_29 = j_6
                            *var_28_2 = 0xffffffff
                            *j_29 = fconvert.d(float.t(1))
                            
                            if (sub_4a0ba4(arg1, *(ebx_83[4] + (j_3 << 2)), var_28_2, j_29) s< 0)
                                break
                            
                            if (*var_28_2 == *(ebx_83[4] + (j_3 << 2)))
                                break
                            
                            j_3 += 1
                            j_6 = &j_6[2]
                            var_28_2 = &var_28_2[1]
                        while (j_3 u< j_72)
                    
                    if (j_3 == j_72)
                        int32_t edx_95 = 0
                        int32_t var_40_4 = 1
                        i_8 = 1
                        
                        if (j_72 u> 0)
                            do
                                if (edx_95 u> 0)
                                    fconvert.t(*(j_27 + (edx_95 << 3)))
                                        - fconvert.t(*(j_27 + (edx_95 << 3) - 8))
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_2)
                                        i_8 = nullptr
                                
                                fconvert.t(*(j_27 + (edx_95 << 3))) - fconvert.t(-1.0)
                                bool p_3 = unimplemented  {test ah, 0x5}
                                long double x87_r7_14
                                long double temp6_1
                                
                                if (p_3)
                                    x87_r7_14 = fconvert.t(*(j_27 + (edx_95 << 3)))
                                    temp6_1 = fconvert.t(1.0)
                                    x87_r7_14 - temp6_1
                                
                                if (not(p_3) || (((x87_r7_14 < temp6_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_14, temp6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_14 == temp6_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
                                    var_40_4 = 0
                                
                                edx_95 += 1
                            while (edx_95 u< j_72)
                        
                        if (j_72 u> 0 && i_8 == 0)
                            goto label_4af35a
                        
                        fconvert.t(2.0) - fconvert.t(*j_27)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            fconvert.t(1.0) - fconvert.t(*j_27)
                            bool p_5 = unimplemented  {test ah, 0x44}
                            
                            if (p_5)
                                fconvert.t(0.0) - fconvert.t(*j_27)
                                bool p_6 = unimplemented  {test ah, 0x44}
                                
                                if (p_6)
                                    fconvert.t(-1.0) - fconvert.t(*j_27)
                                    bool p_7 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_7)
                                    label_4af35a:
                                        
                                        if ((*(arg1 + 0x6e) & 0x10) == 0 || var_40_4 != 0)
                                            int32_t eax_196 = (j_72 & 0xfffff) | 0x20500000
                                            
                                            if (*ebx_83 != eax_196)
                                                *ebx_83 = eax_196
                                                int32_t* j_54 = j_72 * 2
                                                bool cond:39_1 = ebx_83[1] u>= j_54
                                                var_8 = 1
                                                j_26 = j_54
                                                
                                                if (not(cond:39_1))
                                                    int32_t eax_197 = sub_49ec06(j_54)
                                                    ebx_83[2] = eax_197
                                                    
                                                    if (eax_197 == 0)
                                                        goto label_4afa17
                                                    
                                                    int32_t* j_57 = j_26
                                                    ebx_83[1] = j_57
                                                    __builtin_memset(eax_197, 0xffffffff, j_57 << 2)
                                                    j_72 = j_48
                                            
                                            j_3 = nullptr
                                            
                                            if (j_72 u> 0)
                                                int32_t var_28_6 = j_72 << 2
                                                
                                                do
                                                    int32_t* ecx_131 = j_3 << 2
                                                    void* eax_201 = ebx_83[2] + ecx_131
                                                    int32_t ecx_132 = *(ecx_131 + var_14)
                                                    
                                                    if (*eax_201 != ecx_132)
                                                        *eax_201 = ecx_132
                                                        var_8 = 1
                                                    
                                                    int32_t eax_203 = *(var_28_6 + ebx_83[2])
                                                    void* const eax_204
                                                    
                                                    if (eax_203 == 0xffffffff)
                                                        eax_204 = nullptr
                                                    else
                                                        eax_204 = *(*(arg1 + 0x14) + (eax_203 << 2))
                                                    
                                                    if (eax_204 == 0 || (*(
                                                        *(*(arg1 + 0x10) + (*(eax_204 + 4) << 2))
                                                        + 5) & 1) == 0 || *(eax_204 + 8) != 0xffffffff)
                                                    label_4af427:
                                                        int32_t* j_11 = j_3
                                                        int32_t* j_23 = j_11
                                                        int32_t* j_20 = j_11
                                                        j_20.q = fconvert.d(fconvert.t(
                                                            *(j_27 + (j_11 << 3))))
                                                        *(var_28_6 + ebx_83[2]) = sub_49f544(arg1, 
                                                            *(arg1 + 0x78), 0, 0, j_20)
                                                        
                                                        if (*(var_28_6 + ebx_83[2]) == 0xffffffff)
                                                            goto label_4afa17
                                                        
                                                        var_8 = 1
                                                    else
                                                        long double x87_r7_20 =
                                                            fconvert.t(*(j_27 + (j_3 << 3)))
                                                        long double x87_r6_7 =
                                                            fconvert.t(*(eax_204 + 0x20))
                                                        x87_r6_7 - x87_r7_20
                                                        eax_204.w =
                                                            (x87_r6_7 < x87_r7_20 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r6_7, x87_r7_20) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r6_7 == x87_r7_20 ? 1 : 0)
                                                            << 0xe
                                                        bool p_8 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (p_8)
                                                            goto label_4af427
                                                    
                                                    j_3 += 1
                                                    var_28_6 += 4
                                                while (j_3 u< j_72)
                                    else
                                        int32_t eax_191 = (j_72 & 0xfffff) | 0x10100000
                                        
                                        if (*ebx_83 != eax_191)
                                            *ebx_83 = eax_191
                                            ebx_83[1] = j_72
                                            var_8 = 1
                                        
                                        int32_t var_28_5 = 0
                                        
                                        if (j_72 u> 0)
                                            do
                                                int32_t* ecx_128 = var_28_5 << 2
                                                void* eax_193 = ebx_83[2] + ecx_128
                                                int32_t ecx_129 = *(ecx_128 + var_14)
                                                
                                                if (*eax_193 != ecx_129)
                                                    *eax_193 = ecx_129
                                                    var_8 = 1
                                                
                                                var_28_5 += 1
                                            while (var_28_5 u< j_72)
                                else
                                    *ebx_83 = (j_72 & 0xfffff) | 0x10000000
                                    ebx_83[1] = j_72
                                    
                                    if (var_1c == 0xffffffff)
                                        int32_t* j_45 = j_27
                                        int32_t* j_42 = j_27
                                        j_42.q = fconvert.d(float.t(0))
                                        int32_t eax_187 =
                                            sub_49f544(arg1, *(arg1 + 0x78), 0, 0, j_42)
                                        var_1c = eax_187
                                        
                                        if (eax_187 == 0xffffffff)
                                            goto label_4afa17
                                    
                                    int32_t eax_188 = 0
                                    
                                    if (j_72 u> 0)
                                        do
                                            *(ebx_83[2] + (eax_188 << 2)) = var_1c
                                            eax_188 += 1
                                        while (eax_188 u< j_72)
                                    
                                    var_8 = 1
                            else
                                int32_t var_28_4 = 0
                                *ebx_83 = (j_72 & 0xfffff) | 0x10000000
                                ebx_83[1] = j_72
                                
                                if (j_72 u> 0)
                                    do
                                        int32_t* eax_183 = var_28_4 << 2
                                        var_28_4 += 1
                                        *(eax_183 + ebx_83[2]) = *(eax_183 + var_14)
                                    while (var_28_4 u< j_72)
                                
                                var_8 = 1
                        else
                            int32_t eax_171 = (j_72 & 0xfffff) | 0x20400000
                            
                            if (*ebx_83 != eax_171)
                                *ebx_83 = eax_171
                                int32_t* j_53 = j_72 * 2
                                bool cond:32_1 = ebx_83[1] u>= j_53
                                var_8 = 1
                                j_26 = j_53
                                
                                if (not(cond:32_1))
                                    int32_t eax_172 = sub_49ec06(j_53)
                                    ebx_83[2] = eax_172
                                    
                                    if (eax_172 == 0)
                                        goto label_4afa17
                                    
                                    int32_t* j_56 = j_26
                                    ebx_83[1] = j_56
                                    __builtin_memset(eax_172, 0xffffffff, j_56 << 2)
                                    j_72 = j_48
                            
                            int32_t var_28_3 = 0
                            
                            if (j_72 u> 0)
                                j_6 = j_72 << 2
                                
                                do
                                    int32_t* edx_97 = &var_14[var_28_3]
                                    int32_t* eax_176 = ebx_83[2] + (var_28_3 << 2)
                                    int32_t ecx_122 = *edx_97
                                    
                                    if (*eax_176 != ecx_122)
                                        *eax_176 = ecx_122
                                        var_8 = 1
                                    
                                    int32_t edx_98 = *edx_97
                                    void* eax_178 = ebx_83[2] + j_6
                                    
                                    if (*eax_178 != edx_98)
                                        *eax_178 = edx_98
                                        var_8 = 1
                                    
                                    var_28_3 += 1
                                    j_6 = &j_6[1]
                                while (var_28_3 u< j_72)
                
                if ((*ebx_83 & 0xfff00000) == 0x20500000)
                    int32_t i_25 = ebx_83[3]
                    int32_t edi_18 = 0
                    int32_t var_28_7 = 0
                    j_6 = nullptr
                    
                    if (i_25 u> 0)
                        do
                            j_3 = 0xffffffff
                            j_26 = 0xffffffff
                            j_48 = 0xffffffff
                            j_49 = 0xffffffff
                            void* eax_211 = &var_14[edi_18]
                            *eax_211 = 0xffffffff
                            
                            if (sub_4a0e2e(arg1, *(ebx_83[4] + (edi_18 << 2)), eax_211, &j_3, 
                                    &j_26, &j_48, &j_49) s< 0)
                                break
                            
                            int32_t* j_16 = j_3
                            int32_t* j_9 = 0xffffffff
                            
                            if (j_16 != 0xffffffff)
                                int32_t* j_58 = j_26
                                
                                if (j_58 != 0xffffffff)
                                    int32_t eax_214 = *(arg1 + 0x14)
                                    long double x87_r7_22 =
                                        fconvert.t(*(*(eax_214 + (j_16 << 2)) + 0x20))
                                    long double temp7_1 =
                                        fconvert.t(*(*(eax_214 + (j_58 << 2)) + 0x20))
                                    x87_r7_22 - temp7_1
                                    void* eax_215
                                    eax_215.w = (x87_r7_22 < temp7_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_22, temp7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_22 == temp7_1 ? 1 : 0) << 0xe
                                    
                                    if ((eax_215:1.b & 1) != 0)
                                        j_9 = eax_215 | 0xffffffff
                                        j_3 = j_9
                                    else
                                        j_9 = eax_215 | 0xffffffff
                                        j_26 = j_9
                            
                            int32_t* j_37 = j_49
                            int32_t* j_33 = j_48
                            int32_t eax_223
                            int32_t* j_34
                            
                            if (j_37 == j_9)
                            label_4af547:
                                
                                if (j_33 != j_9 || j_3 == j_9)
                                    if (j_37 != j_9 || j_33 != j_9 || j_26 == j_9)
                                        goto label_4af586
                                    
                                    *(j_27 + (edi_18 << 3)) = fconvert.d(fconvert.t(
                                        *(*(*(arg1 + 0x14) + (j_26 << 2)) + 0x20)))
                                    eax_223 = 0x20300000
                                    j_34 = nullptr
                                else
                                    j_34 = 1
                                    *(j_27 + (edi_18 << 3)) = fconvert.d(fconvert.t(
                                        *(*(*(arg1 + 0x14) + (j_3 << 2)) + 0x20)))
                                    eax_223 = 0x20200000
                            else
                                if (j_33 != j_9)
                                    int32_t eax_216 = *(arg1 + 0x14)
                                    long double x87_r7_23 =
                                        fconvert.t(*(*(eax_216 + (j_37 << 2)) + 0x20))
                                    long double temp8_1 =
                                        fconvert.t(*(*(eax_216 + (j_33 << 2)) + 0x20))
                                    x87_r7_23 - temp8_1
                                    void* eax_217
                                    eax_217.w = (x87_r7_23 < temp8_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_23, temp8_1) ? 1 : 0) << 0xa
                                        | (x87_r7_23 == temp8_1 ? 1 : 0) << 0xe
                                    bool p_9 = unimplemented  {test ah, 0x41}
                                    
                                    if (p_9)
                                        j_9 = eax_217 | 0xffffffff
                                        j_37 = j_9
                                        j_49 = j_37
                                    else
                                        j_37 = j_49
                                        j_9 = eax_217 | 0xffffffff
                                        j_33 = j_9
                                        j_48 = j_33
                                
                                if (j_37 == j_9)
                                    goto label_4af547
                                
                            label_4af586:
                                
                                if (j_3 != j_9)
                                    break
                                
                                if (j_26 != j_9)
                                    break
                                
                                if (j_33 == j_9)
                                    if (j_37 == j_9)
                                        break
                                    
                                    j_34 = nullptr
                                    *(j_27 + (edi_18 << 3)) = fconvert.d(fconvert.t(
                                        *(*(*(arg1 + 0x14) + (j_37 << 2)) + 0x20)))
                                    eax_223 = 0x20200000
                                else
                                    *(j_27 + (edi_18 << 3)) = fconvert.d(fconvert.t(
                                        *(*(*(arg1 + 0x14) + (j_33 << 2)) + 0x20)))
                                    eax_223 = 0x20300000
                                    j_34 = 1
                            
                            if (edi_18 != 0)
                                if (eax_223 != var_28_7)
                                    break
                                
                                if (j_34 != j_6)
                                    break
                            else
                                var_28_7 = eax_223
                                j_6 = j_34
                            
                            edi_18 += 1
                        while (edi_18 u< i_25)
                    
                    if (edi_18 == i_25)
                        if ((*(arg1 + 0x6c) & 0x80) != 0)
                            int32_t edi_22 = i_25 & 0xfffff
                            i_8 = sub_49f5a4(arg1, edi_22 | 0x10100000, i_25, i_25)
                            int32_t eax_249 = sub_49f5a4(arg1, edi_22 | 0x20400000, i_25 * 2, i_25)
                            int32_t eax_252 = sub_49f5a4(arg1, edi_22 | 0x30000000, i_25 * 3, i_25)
                            
                            if (i_8 == 0xffffffff)
                                goto label_4afa17
                            
                            if (eax_249 == 0xffffffff)
                                goto label_4afa17
                            
                            if (eax_252 == 0xffffffff)
                                goto label_4afa17
                            
                            int32_t edx_112 = *(arg1 + 0x18)
                            int32_t* j_60 = *(edx_112 + (i_8 << 2))
                            int32_t* j_19 = *(edx_112 + (eax_249 << 2))
                            int32_t* j_30 = *(edx_112 + (eax_252 << 2))
                            j_26 = j_60
                            j_3 = j_19
                            sub_49e7bf(j_60, ebx_83)
                            sub_49e7bf(j_19, ebx_83)
                            int32_t* j_12 = j_30
                            sub_49e7bf(j_12, ebx_83)
                            bool cond:38_1 = j_6 != 0
                            j_6 = nullptr
                            
                            if (cond:38_1)
                                if (i_25 u> 0)
                                    do
                                        int32_t* j_32 = j_6
                                        int32_t edi_28 = j_32 << 2
                                        *(edi_28 + j_26[2]) = var_14[j_32]
                                        int32_t* j_47 = j_27
                                        int32_t* j_44 = j_27
                                        j_44.q = fconvert.d(fconvert.t(*(j_27 + (j_32 << 3))))
                                        int32_t eax_258 =
                                            sub_49f544(arg1, *(arg1 + 0x78), 0, 0, j_44)
                                        j_12 = j_3
                                        *(edi_28 + j_12[2]) = eax_258
                                        
                                        if (*(edi_28 + j_12[2]) == 0xffffffff)
                                            goto label_4afa17
                                        
                                        j_6 += 1
                                    while (j_6 u< i_25)
                            else if (i_25 u> 0)
                                do
                                    int32_t* j_31 = j_6
                                    int32_t* j_46 = j_27
                                    int32_t* j_43 = j_27
                                    j_43.q = fconvert.d(fconvert.t(*(j_27 + (j_31 << 3))))
                                    int32_t edi_26 = j_31 << 2
                                    int32_t eax_253 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, j_43)
                                    j_12 = j_26
                                    *(edi_26 + j_12[2]) = eax_253
                                    *(edi_26 + j_3[2]) = var_14[j_31]
                                    
                                    if (*(edi_26 + j_12[2]) == 0xffffffff)
                                        goto label_4afa17
                                    
                                    j_6 += 1
                                while (j_6 u< i_25)
                            
                            if (var_3c == 0xffffffff)
                                int32_t* j_24 = j_12
                                int32_t* j_21 = j_12
                                j_21.q = fconvert.d(float.t(1))
                                int32_t eax_261
                                eax_261, j_12 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, j_21)
                                var_3c = eax_261
                                
                                if (eax_261 == 0xffffffff)
                                    goto label_4afa17
                            
                            if (var_1c == 0xffffffff)
                                int32_t* j_25 = j_12
                                int32_t* j_22 = j_12
                                j_22.q = fconvert.d(float.t(0))
                                int32_t eax_262 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, j_22)
                                var_1c = eax_262
                                
                                if (eax_262 == 0xffffffff)
                                    goto label_4afa17
                            
                            int32_t i_18 = i_25
                            
                            if (var_28_7 != 0x20300000)
                                if (i_18 u> 0)
                                    j_48 = i_18 << 3
                                    j_6 = i_18 << 2
                                    i_8 = i_18
                                    int32_t* i_5
                                    
                                    do
                                        int32_t eax_276 = j_30[2]
                                        int32_t* j_41 = j_6
                                        j_6 = &j_6[1]
                                        *(j_41 + eax_276) = var_1c
                                        int32_t* j_74 = j_48
                                        int32_t eax_278 = j_30[2]
                                        j_48 = &j_48[1]
                                        i_5 = i_8
                                        i_8 -= 1
                                        *(j_74 + eax_278) = var_3c
                                    while (i_5 != 1)
                            else if (i_18 u> 0)
                                j_48 = i_18 << 3
                                j_6 = i_18 << 2
                                i_8 = i_18
                                int32_t* i_6
                                
                                do
                                    int32_t eax_268 = j_30[2]
                                    int32_t* j_40 = j_6
                                    j_6 = &j_6[1]
                                    *(j_40 + eax_268) = var_3c
                                    int32_t* j_73 = j_48
                                    int32_t eax_270 = j_30[2]
                                    j_48 = &j_48[1]
                                    i_6 = i_8
                                    i_8 -= 1
                                    *(j_73 + eax_270) = var_1c
                                while (i_6 != 1)
                            
                            j_6 = nullptr
                            
                            if (i_18 u> 0)
                                j_48 = i_18 << 2
                                
                                do
                                    int32_t i_24 = i_18
                                    int32_t i_22 = i_18
                                    i_22.q = fconvert.d(float.t(0))
                                    int32_t edi_30 = j_6 << 2
                                    int32_t eax_281 = sub_49f544(arg1, *(arg1 + 0x88), 0, 0, i_22)
                                    int32_t ecx_165 = j_26[4]
                                    int32_t var_84_19 = ecx_165
                                    int32_t var_88_12 = ecx_165
                                    var_88_12.q = fconvert.d(float.t(0))
                                    *(edi_30 + ecx_165) = eax_281
                                    *(edi_30 + j_3[4]) =
                                        sub_49f544(arg1, *(arg1 + 0x88), 0, 0, var_88_12)
                                    *(edi_30 + j_30[4]) = *(edi_30 + ebx_83[4])
                                    int32_t eax_287 = *(edi_30 + j_26[4])
                                    
                                    if (eax_287 == 0xffffffff)
                                        goto label_4afa17
                                    
                                    if (*(edi_30 + j_3[4]) == 0xffffffff)
                                        goto label_4afa17
                                    
                                    int32_t ecx_174 = j_3[2]
                                    int32_t* j_71 = j_48
                                    j_6 += 1
                                    j_48 = &j_48[1]
                                    *(j_71 + ecx_174) = eax_287
                                    i_18 = j_30[2]
                                    *(edi_30 + i_18) = *(edi_30 + j_3[4])
                                while (j_6 u< i_25)
                            
                            for (int32_t i_7 = *(arg1 + 0xc) - 3; i_7 u> var_2c_2; i_7 -= 1)
                                int32_t* edx_123 = *(arg1 + 0x18)
                                edx_123[i_7 + 2] = edx_123[i_7 - 1]
                            
                            *(*(arg1 + 0x18) + (var_2c_2 << 2) + 4) = j_26
                            *(*(arg1 + 0x18) + (var_2c_2 << 2) + 8) = j_3
                            *(*(arg1 + 0x18) + (var_2c_2 << 2) + 0xc) = j_30
                            *ebx_83 = 0
                        else
                            int32_t* j_35 = j_6
                            *ebx_83 = ((var_28_7 ^ i_25) & 0xfffff) ^ var_28_7
                            int32_t eax_234 = neg.d(j_35)
                            int32_t ecx_143 = neg.d(j_35)
                            j_26 = nullptr
                            
                            if (i_25 u> 0)
                                int32_t ecx_147 = ebx_83[2]
                                int32_t edi_20 =
                                    (not.d(sbb.d(ecx_143, ecx_143, j_35 != 0)) & i_25) << 2
                                j_6 = (sbb.d(eax_234, eax_234, j_35 != 0) & i_25) << 2
                                int32_t* j_55
                                
                                do
                                    *(j_6 + ecx_147) = var_14[j_26]
                                    int32_t* j_59 = j_26
                                    int32_t* j_65 = j_59
                                    int32_t* j_64 = j_59
                                    j_64.q = fconvert.d(fconvert.t(*(j_27 + (j_59 << 3))))
                                    *(edi_20 + ebx_83[2]) =
                                        sub_49f544(arg1, *(arg1 + 0x78), 0, 0, j_64)
                                    ecx_147 = ebx_83[2]
                                    
                                    if (*(edi_20 + ecx_147) == 0xffffffff)
                                        goto label_4afa17
                                    
                                    j_26 += 1
                                    j_55 = j_26
                                    j_6 = &j_6[1]
                                    edi_20 += 4
                                while (j_55 u< i_25)
                        
                        var_8 = 1
            
            if (var_2c_2 u<= 0)
                if (var_8 != 0)
                    break
                
                goto label_4af9ea
        
        eax_296.b = var_8 == 0

label_4afa17:
j__free(var_14)
j__free(j_27)

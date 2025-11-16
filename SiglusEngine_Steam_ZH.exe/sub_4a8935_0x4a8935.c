// 函数: sub_4a8935
// 地址: 0x4a8935
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_d0 = edi
int32_t var_8 = 0
sub_4a39e3(arg1)
bool cond:0 = *(arg1 + 8) u<= 0
int32_t var_28 = 0
int32_t var_44 = 0

if (not(cond:0))
    int32_t edx_1 = *(arg1 + 0x88)
    int32_t* ecx = *(arg1 + 0x14)
    int32_t i_25 = *(arg1 + 8)
    int32_t i
    
    do
        void* eax_1 = *ecx
        
        if (edx_1 == *(eax_1 + 4))
            int32_t eax_2 = *(eax_1 + 0xc)
            
            if (var_28 u<= eax_2)
                var_28 = eax_2 + 1
        
        ecx = &ecx[1]
        i = i_25
        i_25 -= 1
    while (i != 1)

void* j_11
int32_t* i_3

if ((*(arg1 + 0x6c) & 0x20) == 0)
    bool cond:1_1 = *(arg1 + 0xc) u<= 0
    i_3 = nullptr
    
    if (not(cond:1_1))
        while (true)
            void* eax_5 = *(*(arg1 + 0x18) + (i_3 << 2))
            
            if (*eax_5 == 0x50000002)
                int32_t eax_6 = sub_49f5a4(arg1, 0x20500002, 0xffffffff, 0xffffffff)
                
                if (eax_6 == 0xffffffff)
                    goto label_4a9f10
                
                int32_t eax_7 = sub_49f5a4(arg1, 0x20400001, 0xffffffff, 0xffffffff)
                
                if (eax_7 == 0xffffffff)
                    goto label_4a9f10
                
                int32_t ecx_4 = *(arg1 + 0x18)
                void* j_20 = *(ecx_4 + (eax_6 << 2))
                void* eax_8 = *(ecx_4 + (eax_7 << 2))
                j_11 = j_20
                sub_49e7bf(j_20, eax_5)
                sub_49e7bf(eax_8, eax_5)
                int32_t* edi_1 = *(j_20 + 8)
                int32_t* esi_3 = *(eax_5 + 8)
                int32_t var_14_1 = 0
                *edi_1 = *esi_3
                void* edi_2 = &edi_1[1]
                void* esi_4 = &esi_3[1]
                *edi_2 = *esi_4
                void* edi_3 = edi_2 + 4
                void* esi_5 = esi_4 + 4
                *edi_3 = *esi_5
                *(edi_3 + 4) = *(esi_5 + 4)
                int32_t* ecx_8 = *(eax_8 + 0x10)
                void* j_21 = j_11
                *ecx_8 = **(eax_5 + 0x10)
                
                while (true)
                    int32_t* var_d4_3 = ecx_8
                    int32_t* var_d8_1 = ecx_8
                    var_d8_1.q = fconvert.d(float.t(0))
                    int32_t esi_9 = var_14_1 << 2
                    *(esi_9 + *(eax_8 + 8)) =
                        sub_49f544(arg1, *(arg1 + 0x88), var_28, var_14_1, var_d8_1)
                    *(esi_9 + *(j_21 + 0x10)) = *(esi_9 + *(eax_8 + 8))
                    
                    if (*(esi_9 + *(j_21 + 0x10)) == 0xffffffff)
                        goto label_4a9f10
                    
                    int32_t eax_17 = *(arg1 + 0x14)
                    j_21 = j_11
                    var_14_1 += 1
                    *(*(eax_17 + (*(esi_9 + *(j_21 + 0x10)) << 2)) + 0x18) =
                        *(*(eax_17 + (**(eax_5 + 0x10) << 2)) + 0x18)
                    int32_t eax_19 = *(arg1 + 0x14)
                    ecx_8 = *(*(eax_19 + (**(eax_5 + 0x10) << 2)) + 0x14)
                    *(*(eax_19 + (*(esi_9 + *(j_21 + 0x10)) << 2)) + 0x14) = ecx_8
                    
                    if (var_14_1 u>= 2)
                        int32_t ecx_21 = *(arg1 + 0xc)
                        int32_t* i_21 = i_3
                        
                        while (true)
                            ecx_21 -= 1
                            
                            if (ecx_21 u<= i_21)
                                break
                            
                            int32_t* edx_8 = *(arg1 + 0x18) + (ecx_21 << 2)
                            *edx_8 = edx_8[-1]
                        
                        *(*(arg1 + 0x18) + (i_21 << 2)) = j_21
                        *(*(arg1 + 0x18) + (i_21 << 2) + 4) = eax_8
                        sub_46cb59(eax_5, 1)
                        *(arg1 + 0xc) -= 1
                        var_28 += 1
                        var_8 = 1
                        break
            
            i_3 += 1
            
            if (i_3 u>= *(arg1 + 0xc))
                if (var_8 != 0)
                    sub_4a39e3(arg1)
                
                break

if ((*(arg1 + 0x6c) & 1) != 0)
    int32_t ecx_26 = *(arg1 + 0xc)
    void* j_14 = nullptr
    j_11 = nullptr
    
    if (ecx_26 u> 0)
        do
            void* edi_6 = *(*(arg1 + 0x18) + (j_14 << 2))
            
            if ((*(edi_6 + 2) & 0xfff0) != 0)
                int32_t eax_22 = *(edi_6 + 0xc)
                
                if (eax_22 != 0)
                    int32_t ecx_28 = *(arg1 + 0x14)
                    
                    if ((*(*(*(arg1 + 0x10) + (*(*(ecx_28 + (**(edi_6 + 0x10) << 2)) + 4) << 2))
                            + 4) & 0x20) != 0)
                        int32_t i_1 = 0
                        int32_t temp4_1 = *(edi_6 + 4)
                        bool cond:13_1 = 0 == temp4_1
                        
                        if (0 u< temp4_1)
                            int32_t* var_18_1 = *(edi_6 + 8)
                            
                            while (i_1 == *(*(ecx_28 + (*var_18_1 << 2)) + 0x10))
                                var_18_1 = &var_18_1[1]
                                i_1 += 1
                                
                                if (i_1 u>= *(edi_6 + 4))
                                    break
                            
                            cond:13_1 = i_1 == *(edi_6 + 4)
                        
                        if (not(cond:13_1))
                            int32_t eax_25 = sub_49f5a4(arg1, (eax_22 & 0xfffff) | 0x10000000, 
                                0xffffffff, 0xffffffff)
                            
                            if (eax_25 == 0xffffffff)
                                goto label_4a9f10
                            
                            void* eax_26 = *(*(arg1 + 0x18) + (eax_25 << 2))
                            sub_49e7bf(eax_26, edi_6)
                            void* eax_29 = *(*(arg1 + 0x14) + (**(edi_6 + 0x10) << 2))
                            int32_t ecx_33 = *(eax_29 + 0x18)
                            int32_t eax_30 = *(eax_29 + 0x14)
                            int32_t i_2 = 0
                            
                            if (*(edi_6 + 0xc) u> 0)
                                do
                                    int32_t esi_17 = i_2 << 2
                                    int32_t ecx_35 = *(esi_17 + *(edi_6 + 0x10))
                                    int32_t var_d4_5 = ecx_35
                                    int32_t var_d8_2 = ecx_35
                                    var_d8_2.q = fconvert.d(float.t(0))
                                    int32_t var_e0_2 = var_28
                                    *(esi_17 + *(eax_26 + 0x10)) = ecx_35
                                    *(esi_17 + *(edi_6 + 0x10)) =
                                        sub_49f544(arg1, *(arg1 + 0x88), var_e0_2, i_2, var_d8_2)
                                    *(esi_17 + *(eax_26 + 8)) = *(esi_17 + *(edi_6 + 0x10))
                                    
                                    if (*(esi_17 + *(eax_26 + 8)) == 0xffffffff)
                                        goto label_4a9f10
                                    
                                    i_2 += 1
                                    *(*(*(arg1 + 0x14) + (*(esi_17 + *(eax_26 + 8)) << 2))
                                        + 0x18) = ecx_33
                                    *(*(*(arg1 + 0x14) + (*(esi_17 + *(eax_26 + 8)) << 2))
                                        + 0x14) = eax_30
                                    int32_t eax_41 = *(arg1 + 0x14)
                                    **(eax_41 + (*(esi_17 + *(eax_26 + 8)) << 2)) =
                                        **(eax_41 + (*(esi_17 + *(eax_26 + 0x10)) << 2))
                                while (i_2 u< *(edi_6 + 0xc))
                            
                            var_28 += 1
                            var_8 = 1
            
            j_14 = j_11 + 1
            j_11 = j_14
        while (j_14 u< ecx_26)

int32_t result

if (*(arg1 + 0x4c) != 0 && (*(arg1 + 0x70) & 0x20) == 0)
    bool cond:5_1 = *(arg1 + 0xc) u<= 0
    i_3 = nullptr
    
    if (not(cond:5_1))
        do
            int32_t* ecx_45 = *(*(arg1 + 0x18) + (i_3 << 2))
            int32_t* var_30_2 = ecx_45
            
            if ((*ecx_45 & 0xf0000000) == 0x60000000)
                int32_t* var_d4_6 = &j_11
                int32_t var_18_3 = 1
                int32_t var_d8_3 = 1
                
                while (true)
                    int32_t eax_50 = sub_49e7de(ecx_45, var_d8_3, var_d4_6)
                    
                    if (eax_50 == 0)
                        break
                    
                    int32_t* j_22 = j_11
                    int32_t j = 0
                    
                    if (eax_50 u> 0)
                        while (*(*(*(arg1 + 0x14) + (j_22[j] << 2)) + 0x10) == j)
                            j += 1
                            
                            if (j u>= eax_50)
                                break
                    
                    if (j != eax_50)
                        int32_t esi_20 = *(arg1 + 0xc)
                        int32_t result_1 = sub_4a20bf(arg1, i_3, j_22, eax_50, &var_28)
                        result = result_1
                        
                        if (result_1 s< 0)
                            goto label_4a95d9
                        
                        int32_t eax_48 = *(arg1 + 0xc)
                        
                        if (eax_48 != esi_20)
                            i_3 += eax_48 - esi_20
                            sub_4a39e3(arg1)
                        
                        var_8 = 1
                    
                    var_18_3 += 1
                    ecx_45 = var_30_2
                    var_d4_6 = &j_11
                    var_d8_3 = var_18_3
            
            i_3 += 1
        while (i_3 u< *(arg1 + 0xc))

int32_t var_54[0x4]

if (*(arg1 + 0x4c) != 0)
    int32_t i_4 = 0
    
    if (*(arg1 + 0xc) u> 0)
        do
            int32_t* i_27 = *(*(arg1 + 0x18) + (i_4 << 2))
            bool cond:7_1 = (*i_27 & 0xfff00000) != 0x11000000
            i_3 = i_27
            
            if (not(cond:7_1))
                if (i_27[1] != 4)
                label_4a8e21:
                    int32_t eax_56 = sub_49f5a4(arg1, 0x10000004, 0xffffffff, 0xffffffff)
                    int32_t eax_57 = sub_49f5a4(arg1, 0x11000004, 0xffffffff, 0xffffffff)
                    
                    if (eax_56 == 0xffffffff)
                        goto label_4a9f10
                    
                    if (eax_57 == 0xffffffff)
                        goto label_4a9f10
                    
                    int32_t ecx_60 = *(arg1 + 0x18)
                    void* esi_26 = *(ecx_60 + (eax_56 << 2))
                    void* eax_58 = *(ecx_60 + (eax_57 << 2))
                    sub_49e7bf(esi_26, i_27)
                    sub_49e7bf(eax_58, i_27)
                    int32_t var_8_2 = 0
                    
                    while (true)
                        int32_t edi_7 = i_27[1]
                        int32_t eax_59 = var_8_2
                        
                        if (eax_59 u>= edi_7)
                            eax_59 = edi_7 - 1
                        
                        int32_t ecx_64 = i_3[2]
                        int32_t var_d4_10 = ecx_64
                        int32_t var_d8_5 = ecx_64
                        var_d8_5.q = fconvert.d(float.t(0))
                        int32_t eax_60 = eax_59 << 2
                        int32_t var_e0_4 = var_28
                        int32_t edi_9 = var_8_2 << 2
                        *(edi_9 + *(esi_26 + 8)) = *(eax_60 + ecx_64)
                        *(edi_9 + *(esi_26 + 0x10)) =
                            sub_49f544(arg1, *(arg1 + 0x88), var_e0_4, var_8_2, var_d8_5)
                        int32_t eax_63 = *(arg1 + 0x14)
                        *(*(eax_63 + (*(edi_9 + *(esi_26 + 0x10)) << 2)) + 0x14) =
                            *(*(eax_63 + (*(eax_60 + i_3[4]) << 2)) + 0x14)
                        int32_t eax_65 = *(arg1 + 0x14)
                        *(*(eax_65 + (*(edi_9 + *(esi_26 + 0x10)) << 2)) + 0x18) =
                            *(*(eax_65 + (*(eax_60 + i_3[4]) << 2)) + 0x18)
                        int32_t eax_67 = *(esi_26 + 0x10)
                        
                        if (*(edi_9 + eax_67) == 0xffffffff)
                            goto label_4a9f10
                        
                        int32_t ecx_78 = *(eax_58 + 8)
                        int32_t var_d4_11 = ecx_78
                        int32_t var_d8_6 = ecx_78
                        *(edi_9 + ecx_78) = *(edi_9 + eax_67)
                        var_d8_6.q = fconvert.d(float.t(0))
                        int32_t eax_69 = *(arg1 + 0xa8)
                        *(edi_9 + *(eax_58 + 0x10)) = sub_49f544(arg1, eax_69, 
                            *(*(*(arg1 + 0x10) + (eax_69 << 2)) + 8), var_8_2, var_d8_6)
                        int32_t eax_71 = *(arg1 + 0x14)
                        var_8_2 += 1
                        *(*(eax_71 + (*(edi_9 + *(eax_58 + 0x10)) << 2)) + 0x14) =
                            *(*(eax_71 + (*(eax_60 + i_3[4]) << 2)) + 0x14)
                        int32_t eax_73 = *(arg1 + 0x14)
                        *(*(eax_73 + (*(edi_9 + *(eax_58 + 0x10)) << 2)) + 0x18) =
                            *(*(eax_73 + (*(eax_60 + i_3[4]) << 2)) + 0x18)
                        
                        if (var_8_2 u>= 4)
                            void* eax_76 = *(*(arg1 + 0x10) + (*(arg1 + 0xa8) << 2))
                            *(eax_76 + 8) += 1
                            int32_t ecx_95 = eax_56
                            int32_t eax_78
                            
                            while (true)
                                eax_78 = *(arg1 + 0x18)
                                
                                if (ecx_95 u<= i_4)
                                    break
                                
                                int32_t* eax_77 = eax_78 + (ecx_95 << 2)
                                *eax_77 = eax_77[-1]
                                ecx_95 -= 1
                            
                            int32_t* i_23 = i_3
                            *(eax_78 + (i_4 << 2)) = esi_26
                            int32_t i_28 = i_4 + 1
                            i_4 = i_28
                            sub_46cb59(i_23, 1)
                            *(arg1 + 0xc) -= 1
                            int32_t eax_79 = *(arg1 + 0x18)
                            var_28 += 1
                            *(eax_79 + (i_28 << 2)) = eax_58
                            var_8 = 1
                            break
                        
                        i_27 = i_3
                else
                    int32_t* edx_26 = i_27[2]
                    int32_t eax_55 = *(arg1 + 0x14)
                    
                    if ((*(*(*(arg1 + 0x10) + (*(*(eax_55 + (*edx_26 << 2)) + 4) << 2)) + 5) & 2)
                            != 0)
                        goto label_4a8e21
                    
                    int32_t var_18_4 = 0
                    j_11 = 4
                    void* j_1
                    
                    do
                        int32_t esi_22 = 1 << (*(*(eax_55 + (*edx_26 << 2)) + 0x10)).b
                        edx_26 = &edx_26[1]
                        var_18_4 |= esi_22
                        j_1 = j_11
                        j_11 -= 1
                    while (j_1 != 1)
                    
                    if (var_18_4 != 0xf)
                        goto label_4a8e21
                    
                    int32_t* edx_27 = i_27[2]
                    j_11 = 4
                    void* j_2
                    
                    do
                        int32_t ecx_56 = *edx_27
                        int32_t esi_24 = *(*(eax_55 + (ecx_56 << 2)) + 0x10)
                        edx_27 = &edx_27[1]
                        j_2 = j_11
                        j_11 -= 1
                        var_54[esi_24] = ecx_56
                    while (j_2 != 1)
                    
                    for (int32_t* j_3 = nullptr; j_3 u< 0x10; j_3 = &j_3[1])
                        *(j_3 + i_27[2]) = *(&var_54 + j_3)
            
            i_4 += 1
        while (i_4 u< *(arg1 + 0xc))

if ((*(arg1 + 0x6c) & 6) != 0)
    void* i_5 = nullptr
    
    if (*(arg1 + 0xc) u> 0)
        do
            int32_t* edi_11 = *((i_5 << 2) + *(arg1 + 0x18))
            
            if ((*edi_11 & 0xfff00000) == 0x10000000)
                int32_t eax_85 = *(arg1 + 0x14)
                
                if ((*(*(*(arg1 + 0x10) + (*(*(eax_85 + (*edi_11[4] << 2)) + 4) << 2)) + 4) & 0x20)
                        == 0)
                    int32_t var_14_3 = 0
                    
                    if (edi_11[3] u> 0)
                        int32_t* ecx_103 = edi_11[2]
                        int32_t j_4 = *(*(eax_85 + (*ecx_103 << 2)) + 0x48)
                        
                        while (j_4 == *(*(eax_85 + (*ecx_103 << 2)) + 0x48))
                            var_14_3 += 1
                            ecx_103 = &ecx_103[1]
                            
                            if (var_14_3 u>= edi_11[3])
                                break
                    
                    if (var_14_3 != edi_11[3])
                        int32_t eax_87 = edi_11[1]
                        i_3 = nullptr
                        int32_t j_12 = 0
                        
                        if (eax_87 u> 0)
                            do
                                int32_t* esi_30 = edi_11[2] + (j_12 << 2)
                                int32_t edx_49 = *esi_30
                                
                                if (edx_49 != 0xffffffff)
                                    int32_t ecx_105 = *(arg1 + 0x14)
                                    int32_t edx_51 = *(*(ecx_105 + (edx_49 << 2)) + 0x48)
                                    int32_t edx_52 = 0
                                    
                                    if (j_12 u< eax_87)
                                        int32_t* var_18_5 = esi_30
                                        j_11 = eax_87 - j_12
                                        void* j_5
                                        
                                        do
                                            int32_t eax_90 = *var_18_5
                                            
                                            if (eax_90 != 0xffffffff && edx_51
                                                    == *(*(ecx_105 + (eax_90 << 2)) + 0x48))
                                                edx_52 += 1
                                            
                                            var_18_5 = &var_18_5[1]
                                            j_5 = j_11
                                            j_11 -= 1
                                        while (j_5 != 1)
                                    
                                    int32_t eax_92 = sub_49f5a4(arg1, 
                                        (edx_52 & 0xfffff) | 0x10000000, 0xffffffff, 0xffffffff)
                                    
                                    if (eax_92 == 0xffffffff)
                                        goto label_4a9f10
                                    
                                    void* esi_32 = *(*(arg1 + 0x18) + (eax_92 << 2))
                                    void* var_24_1 = esi_32
                                    sub_49e7bf(esi_32, edi_11)
                                    i_3 += 1
                                    int32_t j_6 = j_12
                                    
                                    if (j_12 u< edi_11[1])
                                        j_11 = nullptr
                                        
                                        do
                                            int32_t eax_95 = j_6 << 2
                                            int32_t ecx_110 = *(eax_95 + edi_11[2])
                                            
                                            if (ecx_110 != 0xffffffff && edx_51 ==
                                                    *(*(*(arg1 + 0x14) + (ecx_110 << 2)) + 0x48))
                                                void* j_17 = j_11
                                                *(j_17 + *(esi_32 + 8)) = *(eax_95 + edi_11[2])
                                                *(j_17 + *(var_24_1 + 0x10)) = *(eax_95 + edi_11[4])
                                                *(eax_95 + edi_11[2]) = 0xffffffff
                                                esi_32 = var_24_1
                                                j_11 = j_17 + 4
                                            
                                            j_6 += 1
                                        while (j_6 u< edi_11[1])
                                
                                j_12 += 1
                                eax_87 = edi_11[1]
                            while (j_12 u< eax_87)
                            
                            if (i_3 u> 0)
                                int32_t* i_24 = i_3
                                __builtin_memcpy(&var_54, 
                                    *(arg1 + 0x18) + ((*(arg1 + 0xc) - i_24) << 2), i_24 << 2)
                        
                        void* eax_101 = *(arg1 + 0xc) - i_3 - 1
                        
                        if (eax_101 u> i_5)
                            int32_t edx_63 = (eax_101 + i_3) << 2
                            
                            do
                                int32_t ecx_115 = *(arg1 + 0x18)
                                *(ecx_115 + edx_63 - 4) = *(ecx_115 + (eax_101 << 2))
                                eax_101 -= 1
                                edx_63 -= 4
                            while (eax_101 u> i_5)
                        
                        int32_t* i_26 = i_3
                        int32_t var_14_4 = 0
                        
                        if (i_26 u> 0)
                            int32_t eax_103 = i_5 << 2
                            
                            do
                                int32_t edx_65 = var_54[var_14_4]
                                var_14_4 += 1
                                *(eax_103 + *(arg1 + 0x18)) = edx_65
                                eax_103 += 4
                            while (var_14_4 u< i_26)
                        
                        sub_46cb59(edi_11, 1)
                        *(arg1 + 0xc) -= 1
                        i_5 = i_5 + i_26 - 1
                        var_8 = 1
            
            i_5 += 1
        while (i_5 u< *(arg1 + 0xc))
    
    i_3 = nullptr
    
    if (*(arg1 + 0xc) u> 0)
        do
            int32_t* edi_12 = *((i_3 << 2) + *(arg1 + 0x18))
            
            if ((*edi_12 & 0xfff00000) == 0x10000000)
                int32_t* edx_66 = edi_12[4]
                int32_t eax_111 = *(arg1 + 0x14)
                
                if ((*(*(*(arg1 + 0x10) + (*(*(eax_111 + (*edx_66 << 2)) + 4) << 2)) + 4) & 0x20)
                        == 0)
                    int32_t ecx_123 = edi_12[3]
                    int32_t esi_39 = 0
                    int32_t var_24_2 = 0
                    int32_t var_14_5 = 0
                    int32_t var_34_1 = 0
                    
                    if (ecx_123 u> 0)
                        int32_t* ecx_124 = edi_12[2]
                        int32_t* var_c_2 = nullptr
                        int32_t* var_3c_1 = ecx_124
                        
                        do
                            if (*(*(eax_111 + (*(edx_66 - ecx_124 + var_3c_1) << 2)) + 0x10)
                                    == *(*(eax_111 + (*var_3c_1 << 2)) + 0x10))
                                var_34_1 += 1
                            
                            int32_t var_10_2 = 0
                            
                            if (var_c_2 u> 0)
                                int32_t* ecx_128 = edi_12[2]
                                int32_t edx_74 = *(*(eax_111 + (*(var_c_2 + ecx_128) << 2)) + 0x10)
                                
                                do
                                    if (*(*(eax_111 + (*ecx_128 << 2)) + 0x10) == edx_74)
                                        var_24_2 += 1
                                        break
                                    
                                    var_10_2 += 1
                                    ecx_128 = &ecx_128[1]
                                while (var_10_2 u< var_14_5)
                            
                            var_14_5 += 1
                            ecx_123 = edi_12[3]
                            var_c_2 = &var_c_2[1]
                            var_3c_1 = &var_3c_1[1]
                        while (var_14_5 u< ecx_123)
                        
                        esi_39 = var_34_1
                    
                    if (esi_39 != ecx_123 && var_24_2 + 1 != ecx_123
                            && (esi_39 u> 1 || var_24_2 != 0))
                        int32_t var_c_3 = 0
                        
                        if (esi_39 u> 1)
                            int32_t eax_113 = sub_49f5a4(arg1, (esi_39 & 0xfffff) | 0x10000000, 
                                0xffffffff, 0xffffffff)
                            
                            if (eax_113 == 0xffffffff)
                                goto label_4a9f10
                            
                            void* j_15 = *(*(arg1 + 0x18) + (eax_113 << 2))
                            j_11 = j_15
                            sub_49e7bf(j_15, edi_12)
                            var_c_3 = 1
                            int32_t j_7 = 0
                            
                            if (edi_12[3] u> 0)
                                void* var_2c_3 = nullptr
                                
                                do
                                    int32_t edx_76 = *(arg1 + 0x14)
                                    int32_t eax_115 = j_7 << 2
                                    int32_t ecx_133 = *(eax_115 + edi_12[4])
                                    
                                    if (*(*(edx_76 + (ecx_133 << 2)) + 0x10)
                                            == *(*(edx_76 + (*(eax_115 + edi_12[2]) << 2)) + 0x10))
                                        int32_t* edx_80 = var_2c_3
                                        *(edx_80 + *(j_11 + 0x10)) = ecx_133
                                        *(edx_80 + *(j_11 + 8)) = *(eax_115 + edi_12[2])
                                        *(eax_115 + edi_12[2]) = 0xffffffff
                                        var_2c_3 = &edx_80[1]
                                    
                                    j_7 += 1
                                while (j_7 u< edi_12[3])
                        
                        int32_t eax_117 = edi_12[1]
                        int32_t j_13 = 0
                        
                        if (eax_117 u> 0)
                            do
                                int32_t* esi_51 = edi_12[2] + (j_13 << 2)
                                int32_t edx_83 = *esi_51
                                
                                if (edx_83 != 0xffffffff)
                                    int32_t ecx_138 = *(arg1 + 0x14)
                                    int32_t edx_85 = *(*(ecx_138 + (edx_83 << 2)) + 0x10)
                                    int32_t edx_86 = 0
                                    
                                    if (j_13 u< eax_117)
                                        int32_t* var_24_3 = esi_51
                                        j_11 = eax_117 - j_13
                                        void* j_8
                                        
                                        do
                                            int32_t eax_120 = *var_24_3
                                            
                                            if (eax_120 != 0xffffffff && edx_85
                                                    == *(*(ecx_138 + (eax_120 << 2)) + 0x10))
                                                edx_86 += 1
                                            
                                            var_24_3 = &var_24_3[1]
                                            j_8 = j_11
                                            j_11 -= 1
                                        while (j_8 != 1)
                                    
                                    int32_t eax_122 = sub_49f5a4(arg1, 
                                        (edx_86 & 0xfffff) | 0x10000000, 0xffffffff, 0xffffffff)
                                    
                                    if (eax_122 == 0xffffffff)
                                        goto label_4a9f10
                                    
                                    void* esi_53 = *(*(arg1 + 0x18) + (eax_122 << 2))
                                    void* var_24_4 = esi_53
                                    sub_49e7bf(esi_53, edi_12)
                                    var_c_3 += 1
                                    int32_t j_9 = j_13
                                    
                                    if (j_13 u< edi_12[1])
                                        j_11 = nullptr
                                        
                                        do
                                            int32_t eax_125 = j_9 << 2
                                            int32_t ecx_143 = *(eax_125 + edi_12[2])
                                            
                                            if (ecx_143 != 0xffffffff && edx_85 ==
                                                    *(*(*(arg1 + 0x14) + (ecx_143 << 2)) + 0x10))
                                                void* j_18 = j_11
                                                *(j_18 + *(esi_53 + 0x10)) = *(eax_125 + edi_12[4])
                                                *(j_18 + *(var_24_4 + 8)) = *(eax_125 + edi_12[2])
                                                *(eax_125 + edi_12[2]) = 0xffffffff
                                                esi_53 = var_24_4
                                                j_11 = j_18 + 4
                                            
                                            j_9 += 1
                                        while (j_9 u< edi_12[1])
                                
                                j_13 += 1
                                eax_117 = edi_12[1]
                            while (j_13 u< eax_117)
                        
                        if (var_c_3 u> 0)
                            __builtin_memcpy(&var_54, 
                                *(arg1 + 0x18) + ((*(arg1 + 0xc) - var_c_3) << 2), var_c_3 << 2)
                        
                        int32_t eax_131 = *(arg1 + 0xc) - var_c_3 - 1
                        
                        if (eax_131 u> i_3)
                            int32_t edx_97 = (eax_131 + var_c_3) << 2
                            
                            do
                                int32_t ecx_149 = *(arg1 + 0x18)
                                *(ecx_149 + edx_97 - 4) = *(ecx_149 + (eax_131 << 2))
                                eax_131 -= 1
                                edx_97 -= 4
                            while (eax_131 u> i_3)
                        
                        int32_t eax_132 = 0
                        
                        if (var_c_3 u> 0)
                            int32_t ecx_151 = i_3 << 2
                            
                            do
                                *(ecx_151 + *(arg1 + 0x18)) = var_54[eax_132]
                                eax_132 += 1
                                ecx_151 += 4
                            while (eax_132 u< var_c_3)
                        
                        sub_46cb59(edi_12, 1)
                        int32_t* i_22 = i_3
                        *(arg1 + 0xc) -= 1
                        i_3 = i_22 + var_c_3 - 1
                        var_8 = 1
            
            i_3 += 1
        while (i_3 u< *(arg1 + 0xc))

if (var_8 != 0)
    sub_4a39e3(arg1)

int32_t esi_61 = var_28 << 2
int32_t eax_135 = sub_745f3f(esi_61)
var_44 = eax_135

if (eax_135 == 0)
label_4a9f10:
    result = 0x8007000e
else
    int32_t i_6 = 0
    __builtin_memset(__builtin_memset(eax_135, 0, esi_61 u>> 2 << 2), 0, esi_61 & 3)
    
    if (*(arg1 + 8) u> 0)
        do
            void* eax_137 = *(*(arg1 + 0x14) + (i_6 << 2))
            *(eax_137 + 0x5c) = 0
            
            if (*(arg1 + 0x88) == *(eax_137 + 4))
                int32_t eax_138 = *(eax_137 + 0x10)
                int32_t* ecx_162 = eax_135 + (*(eax_137 + 0xc) << 2)
                
                if (eax_138 u>= *ecx_162)
                    *ecx_162 = eax_138 + 1
            
            i_6 += 1
        while (i_6 u< *(arg1 + 8))
    
    void* j_16 = *(arg1 + 0xc)
    
    if (j_16 u> 0)
        while (true)
            int32_t ecx_164 = *(arg1 + 0x18)
            j_11 = j_16 - 1
            int32_t* eax_142 = *(ecx_164 + ((j_16 - 1) << 2))
            int32_t ecx_165 = *eax_142
            
            if ((ecx_165 & 0xfff00000) != 0)
                int32_t var_10_3
                var_10_3:2.w = ecx_165:2.w & 0xf
                uint32_t temp0_1 = divu.dp.d(0:(eax_142[1]), var_10_3)
                
                if (eax_142[3] != 0)
                    int32_t ecx_166 = ecx_165 & 0xf0000000
                    
                    if (ecx_166 u>= 0x10000000 && ecx_166 u<= 0x40000000)
                        void var_94
                        sub_4a3777(arg1, eax_142[4], &var_94, var_10_3, 1)
                        int32_t edi_16 = 0
                        
                        if (temp0_1 u> 0)
                            do
                                sub_4a3777(arg1, eax_142[2] + ((eax_142[3] * edi_16) << 2), 
                                    &var_94, var_10_3, 0)
                                edi_16 += 1
                            while (edi_16 u< temp0_1)
                
                int32_t var_64 = 0
                void var_60
                void* edi_17 = &var_60
                *edi_17 = 0
                void* edi_18 = edi_17 + 4
                *edi_18 = 0
                *(edi_18 + 4) = 0
                
                if ((*eax_142 & 0xfff00000) == 0x10000000)
                    int32_t ecx_170 = *(arg1 + 0x14)
                    void* eax_152 = *(ecx_170 + (*eax_142[4] << 2))
                    char eax_154 = (*(*(*(arg1 + 0x10) + (*(eax_152 + 4) << 2)) + 4)).b
                    
                    if ((eax_154 & 4) == 0 && ((*(arg1 + 0x6c) & 1) == 0 || (eax_154 & 0x20) == 0))
                        int32_t* edx_103 = eax_142[2]
                        
                        if (*(arg1 + 0x88) == *(*(ecx_170 + (*edx_103 << 2)) + 4))
                            int32_t i_7 = 0
                            int32_t i_18 = 0
                            
                            if (eax_142[1] u> 0)
                                int32_t edi_24 = *(arg1 + 0xcc) & 4
                                int32_t var_24_6 = edx_103 - &var_64
                                
                                do
                                    void* eax_159 =
                                        *(ecx_170 + (*(&var_64 + var_24_6 + (i_7 << 2)) << 2))
                                    int32_t edi_25 = *(eax_159 + 0x48)
                                    int32_t* edi_26 = *(*(arg1 + 0x18) + (edi_25 << 2))
                                    int32_t* var_10_4 = edi_26
                                    
                                    if (edi_24 != 0)
                                        int32_t edx_107 = *(eax_152 + 0x60)
                                        
                                        if (edx_107 != 0)
                                            int32_t edx_108 = *(eax_159 + 0x60)
                                            
                                            if (edx_108 != 0 && edx_107 != edx_108)
                                                break
                                    
                                    if (*(eax_152 + 0x18) != *(eax_159 + 0x18))
                                        break
                                    
                                    if (*(eax_152 + 0x14) != *(eax_159 + 0x14))
                                        break
                                    
                                    int32_t j_10 = 0
                                    
                                    if (edi_26[3] u> 0)
                                        int32_t* var_3c_2 = edi_26[4]
                                        
                                        do
                                            void* eax_163 = *(ecx_170 + (*var_3c_2 << 2))
                                            void* j_19 = j_11
                                            
                                            if (j_19 != *(eax_163 + 0x54))
                                                break
                                            
                                            if (j_19 != *(eax_163 + 0x58))
                                                break
                                            
                                            j_10 += 1
                                            var_3c_2 = &var_3c_2[1]
                                        while (j_10 u< edi_26[3])
                                    
                                    int32_t eax_165 = edi_26[3]
                                    
                                    if (j_10 != eax_165)
                                        break
                                    
                                    int32_t var_8_3 = 0
                                    
                                    if (eax_165 u> 0)
                                        int32_t* edx_113 = edi_26[4]
                                        bool cond:38_1
                                        
                                        do
                                            int32_t eax_168 = *(*(ecx_170 + (*edx_113 << 2)) + 0x14)
                                            
                                            if (eax_168 != 0xffffffff)
                                                edi_26 = var_10_4
                                                
                                                if (*(*(ecx_170 + (eax_168 << 2)) + 0x48)
                                                        u>= edi_25)
                                                    break
                                            
                                            var_8_3 += 1
                                            edx_113 = &edx_113[1]
                                            cond:38_1 = var_8_3 u< edi_26[3]
                                            edi_26 = var_10_4
                                        while (cond:38_1)
                                    
                                    if (var_8_3 != edi_26[3])
                                        break
                                    
                                    if ((*edi_26 & 0xfff00000) == 0x20700000)
                                        break
                                    
                                    (&var_64)[i_18] = 1
                                    i_7 = i_18 + 1
                                    i_18 = i_7
                                while (i_7 u< eax_142[1])
                
                int32_t eax_176 = *eax_142 & 0xf0000000
                int32_t var_84[0x3]
                
                if (eax_176 u< 0x10000000 || eax_176 u> 0x40000000)
                    for (int32_t i_8 = 0; i_8 u< 4; i_8 += 1)
                        var_84[i_8] = i_8
                else
                    int32_t i_9 = 0
                    
                    if (eax_142[3] u> 0)
                        int32_t ecx_171 = *(arg1 + 0x14)
                        void* eax_178 = eax_142[4] - &var_84
                        
                        do
                            int32_t edx_115 = i_9 << 2
                            i_9 += 1
                            var_84[i_9] =
                                *(*(ecx_171 + (*(&var_84 + edx_115 + eax_178) << 2)) + 0x10)
                        while (i_9 u< eax_142[3])
                
                int32_t var_2c_6 = 0
                int32_t** var_d4_17 = &i_3
                int32_t var_d8_9 = 0
                int32_t* ecx_172 = eax_142
                
                while (true)
                    int32_t eax_279 = sub_49e7de(ecx_172, var_d8_9, var_d4_17)
                    var_28 = eax_279
                    
                    if (eax_279 == 0)
                        break
                    
                    int32_t edx_117 = var_28
                    int32_t var_74 = 0
                    void var_70
                    void* edi_32 = &var_70
                    *edi_32 = 0
                    void* edi_33 = edi_32 + 4
                    *edi_33 = 0
                    int32_t var_c_4 = 0
                    int32_t var_3c_3 = 0
                    *(edi_33 + 4) = 0
                    int32_t var_10_5 = 0
                    int32_t __saved_ebp
                    
                    if (edx_117 u> 0)
                        do
                            void* eax_180 = &i_3[var_10_5]
                            void* esi_63 = *(*(arg1 + 0x14) + (*eax_180 << 2))
                            
                            if (*(arg1 + 0x88) != *(esi_63 + 4))
                                break
                            
                            int32_t ecx_174 = *(esi_63 + 0x48)
                            
                            if (ecx_174 == 0xffffffff)
                                break
                            
                            if (*(esi_63 + 0x5c) != 0)
                                var_c_4 = 1
                            
                            int32_t eax_184 = *(esi_63 + 0x10)
                            
                            if ((&__saved_ebp)[eax_184 - 0x1c] == 0)
                                var_3c_3 += 1
                            
                            void* eax_187 = &(&__saved_ebp)[*(esi_63 + 0x10) - 0x1c]
                            *eax_187 += 1
                            int32_t* ecx_175 = *(*(arg1 + 0x18) + (ecx_174 << 2))
                            int32_t edi_36 = *ecx_175
                            int32_t eax_190 = edi_36 & 0xfff00000
                            
                            if (eax_190 == 0x20700000 || eax_190 == 0x20800000
                                    || eax_190 == 0x20900000)
                                var_c_4 = 1
                            else
                                int32_t eax_192 = edi_36 & 0xf0000000
                                
                                if (eax_192 u>= 0x10000000 && eax_192 u<= 0x40000000)
                                    if (*(esi_63 + 0x5c) != 0)
                                        int32_t edx_120 = var_84[var_10_5]
                                        
                                        if (edx_120 != eax_184)
                                            int32_t i_17 = 0xffffffff
                                            int32_t i_20 = 0xffffffff
                                            int32_t i_10 = 0
                                            
                                            if (ecx_175[3] u> 0)
                                                int32_t* var_24_7 = ecx_175[4]
                                                
                                                do
                                                    int32_t eax_195 = *var_24_7
                                                    
                                                    if (*eax_180 == eax_195)
                                                        i_17 = i_10
                                                    
                                                    if (edx_120 == *(
                                                            *(*(arg1 + 0x14) + (eax_195 << 2))
                                                            + 0x10))
                                                        i_20 = i_10
                                                    
                                                    i_10 += 1
                                                    var_24_7 = &var_24_7[1]
                                                while (i_10 u< ecx_175[3])
                                                
                                                if (i_17 != 0xffffffff && i_20 != 0xffffffff)
                                                    uint32_t temp0_2 =
                                                        divu.dp.d(0:(ecx_175[1]), edi_36 & 0xfffff)
                                                    int32_t var_8_4 = 0
                                                    
                                                    if (temp0_2 u> 0)
                                                        int32_t edi_38 = ecx_175[2]
                                                        int32_t* var_24_8 = edi_38 + (i_17 << 2)
                                                        ecx_175[3]
                                                        int32_t* edi_39 = edi_38 + (i_20 << 2)
                                                        
                                                        while (*var_24_8 == *edi_39)
                                                            var_8_4 += 1
                                                            var_24_8 = &var_24_8[ecx_175[3]]
                                                            
                                                            if (var_8_4 u>= temp0_2)
                                                                break
                                                            
                                                            edi_39 = &edi_39[ecx_175[3]]
                                                    
                                                    if (var_8_4 == temp0_2)
                                                        *eax_180 = *(ecx_175[4] + (i_20 << 2))
                                    
                                    if (sub_49e84e(ecx_175) != 0
                                            && (&var_74)[*(esi_63 + 0x10)] u> 1)
                                        var_c_4 = 1
                                else if ((ecx_175[3] u> 1 && var_10_5 != eax_184)
                                        || (&__saved_ebp)[eax_184 - 0x1c] u> 1)
                                    var_c_4 = 1
                            
                            var_10_5 += 1
                        while (var_10_5 u< var_28)
                        
                        edx_117 = var_28
                        
                        if (var_10_5 u< edx_117)
                            var_c_4 = 1
                        
                        if (var_c_4 != 0)
                            goto label_4a9ad8
                    
                    if ((*eax_142 & 0xfff00000) != 0x10000000)
                        for (int32_t i_11 = 0; i_11 u< 4; i_11 += 1)
                            if ((&var_74)[i_11] == edx_117)
                                var_c_4 = 1
                                break
                    
                    if ((*eax_142 & 0xfff00000) != 0x10000000 && var_c_4 != 0)
                    label_4a9ad8:
                        var_64 = 0
                        void* edi_42 = &var_60
                        *edi_42 = 0
                        void* edi_43 = edi_42 + 4
                        *edi_43 = 0
                        *(edi_43 + 4) = 0
                    else
                        if (var_3c_3 != *(var_44 + (*(*(*(arg1 + 0x14) + (*i_3 << 2)) + 0xc) << 2)))
                            int32_t i_12 = 0
                            
                            if (eax_142[3] u> 0)
                                do
                                    if ((&var_64)[i_12] == 0)
                                        var_c_4 = 1
                                        break
                                    
                                    i_12 += 1
                                while (i_12 u< eax_142[3])
                                
                                if (var_c_4 != 0)
                                    goto label_4a9ad8
                        
                        int32_t var_18_9 = 0
                        
                        if (edx_117 u> 0)
                            do
                                int32_t esi_67 = var_18_9 << 2
                                
                                if ((&var_64)[var_18_9] == 0)
                                    int32_t eax_226 = i_3[var_18_9]
                                    int32_t* edi_51 = *(*(arg1 + 0x14) + (eax_226 << 2))
                                    int32_t ecx_183 = edi_51[4]
                                    
                                    if ((&var_74)[ecx_183] != 1)
                                        int32_t var_d4_18 = ecx_183
                                        int32_t var_d8_10 = ecx_183
                                        var_d8_10.q = fconvert.d(float.t(0))
                                        int32_t eax_228 = sub_49f544(arg1, edi_51[1], edi_51[3], 
                                            var_84[var_18_9], var_d8_10)
                                        var_54[var_18_9] = eax_228
                                        
                                        if (eax_228 == 0xffffffff)
                                            goto label_4a9f10
                                        
                                        sub_49f12c((*(arg1 + 0x14))[eax_228], edi_51)
                                        **((eax_228 << 2) + *(arg1 + 0x14)) = *edi_51
                                        *((*(arg1 + 0x14))[eax_228] + 0x18) = edi_51[6]
                                        *((*(arg1 + 0x14))[eax_228] + 0x14) = edi_51[5]
                                        int32_t* eax_237 = var_44 + (edi_51[3] << 2)
                                        *eax_237 += 1
                                        void* eax_239 = &(&__saved_ebp)[edi_51[4] - 0x1c]
                                        *eax_239 -= 1
                                    else
                                        var_54[var_18_9] = eax_226
                                        edi_51[4] = var_84[var_18_9]
                                else
                                    int32_t* edx_131 = eax_142[4] + esi_67
                                    int32_t edi_46 = *edx_131
                                    int32_t eax_221 = *(arg1 + 0x14)
                                    var_54[var_18_9] = edi_46
                                    
                                    if (*(*(eax_221 + (edi_46 << 2)) + 0x60) == 0)
                                        *(*(eax_221 + (*edx_131 << 2)) + 0x60) =
                                            *(*(eax_221 + (*(esi_67 + eax_142[2]) << 2)) + 0x60)
                                        int32_t eax_223 = *(arg1 + 0x14)
                                        *(*(eax_223 + (*(esi_67 + eax_142[4]) << 2)) + 0x64) =
                                            *(*(eax_223 + (*(esi_67 + eax_142[2]) << 2)) + 0x64)
                                
                                var_18_9 += 1
                            while (var_18_9 u< var_28)
                        
                        int32_t i_13 = 0
                        int32_t i_16 = 0
                        
                        if (var_28 u> 0)
                            do
                                void* edx_137 = *(*(arg1 + 0x14) + (i_3[i_13] << 2))
                                
                                if (*(edx_137 + 0x5c) == 0)
                                    int32_t var_c_5 = 0
                                    int32_t var_b4[0x4]
                                    int32_t var_a4[0x4]
                                    
                                    for (; i_13 u< var_28; i_13 += 1)
                                        int32_t eax_244 = i_3[i_13]
                                        void* ecx_192 = *(*(arg1 + 0x14) + (eax_244 << 2))
                                        
                                        if (*(edx_137 + 0x48) == *(ecx_192 + 0x48))
                                            var_c_5 += 1
                                            var_b4[var_c_5] = eax_244
                                            var_a4[var_c_5] = var_54[i_13]
                                            *(ecx_192 + 0x5c) = 1
                                    
                                    int32_t* esi_70 = *(*(arg1 + 0x18) + (*(edx_137 + 0x48) << 2))
                                    int32_t ecx_194 = *esi_70
                                    int32_t eax_248 = ecx_194 & 0xf0000000
                                    
                                    if (eax_248 u< 0x10000000 || eax_248 u> 0x40000000)
                                        int32_t i_14 = 0
                                        
                                        if (esi_70[3] u> 0)
                                            do
                                                int32_t* eax_276 = esi_70[4] + (i_14 << 2)
                                                int32_t ecx_207 = 0
                                                
                                                do
                                                    if (*eax_276 == i_3[ecx_207])
                                                        *eax_276 = var_54[ecx_207]
                                                        break
                                                    
                                                    ecx_207 += 1
                                                while (ecx_207 u< var_28)
                                                
                                                i_14 += 1
                                            while (i_14 u< esi_70[3])
                                    else
                                        uint32_t temp0_3 =
                                            divu.dp.d(0:(esi_70[1]), ecx_194 & 0xfffff)
                                        int32_t edx_139 = 0
                                        int32_t var_c4[0x4]
                                        
                                        if (var_c_5 u> 0)
                                            int32_t edi_55 = esi_70[3]
                                            
                                            do
                                                int32_t var_18_10 = 0
                                                
                                                if (edi_55 u> 0)
                                                    int32_t* eax_251 = esi_70[4]
                                                    
                                                    do
                                                        if (*eax_251 == var_b4[edx_139])
                                                            var_c4[edx_139] = var_18_10
                                                            break
                                                        
                                                        var_18_10 += 1
                                                        edi_55 = esi_70[3]
                                                        eax_251 = &eax_251[1]
                                                    while (var_18_10 u< edi_55)
                                                
                                                edx_139 += 1
                                            while (edx_139 u< var_c_5)
                                        
                                        void* eax_253 = sub_49ec23(0x74)
                                        int32_t* edi_56
                                        
                                        if (eax_253 == 0)
                                            edi_56 = nullptr
                                        else
                                            edi_56 = sub_49e789(eax_253)
                                        
                                        if (edi_56 == 0)
                                            goto label_4a9f10
                                        
                                        int32_t result_2 = sub_49ec6e(edi_56, 
                                            ((*esi_70 ^ var_c_5) & 0xfffff) ^ *esi_70, 
                                            temp0_3 * var_c_5, var_c_5, 0)
                                        result = result_2
                                        int32_t result_3
                                        
                                        if (result_2 s>= 0)
                                            result_3 = sub_49e7bf(edi_56, esi_70)
                                            result = result_3
                                        
                                        if (result_2 s< 0 || result_3 s< 0)
                                            sub_46cb59(edi_56, 1)
                                            goto label_4a95d9
                                        
                                        int32_t var_10_6 = 0
                                        
                                        if (var_c_5 u> 0)
                                            do
                                                int32_t var_18_11 = 0
                                                int32_t eax_262 = var_10_6 << 2
                                                *(eax_262 + edi_56[4]) = var_a4[var_10_6]
                                                
                                                if (temp0_3 u> 0)
                                                    int32_t ecx_201 = var_c4[var_10_6]
                                                    int32_t var_24_9 = eax_262
                                                    
                                                    do
                                                        int32_t eax_266 = *(esi_70[2] + ((
                                                            esi_70[3] * var_18_11 + ecx_201) << 2))
                                                        var_18_11 += 1
                                                        *(var_24_9 + edi_56[2]) = eax_266
                                                        var_24_9 += var_c_5 << 2
                                                    while (var_18_11 u< temp0_3)
                                                
                                                var_10_6 += 1
                                            while (var_10_6 u< var_c_5)
                                        
                                        void* ecx_205 = *(*(arg1 + 0x18) + (*(edx_137 + 0x48) << 2))
                                        
                                        if (ecx_205 != 0)
                                            sub_46cb59(ecx_205, 1)
                                        
                                        *(*(arg1 + 0x18) + (*(edx_137 + 0x48) << 2)) = edi_56
                                
                                i_13 = i_16 + 1
                                i_16 = i_13
                            while (i_13 u< var_28)
                        
                        int32_t eax_278 = 0
                        
                        if (var_28 u> 0)
                            bool cond:35_1
                            
                            do
                                i_3[eax_278] = var_54[eax_278]
                                void* ecx_212 = *(*(arg1 + 0x14) + (i_3[eax_278] << 2))
                                eax_278 += 1
                                cond:35_1 = eax_278 u< var_28
                                *(ecx_212 + 0x5c) = 1
                            while (cond:35_1)
                    
                    var_2c_6 += 1
                    ecx_172 = eax_142
                    var_d4_17 = &i_3
                    var_d8_9 = var_2c_6
                
                if ((*eax_142 & 0xfff00000) == 0x10000000)
                    int32_t i_15 = 0
                    int32_t edx_146 = 0
                    int32_t i_19 = 0
                    
                    if (eax_142[3] u> 0)
                        do
                            if ((&var_64)[i_15] != 0)
                                int32_t esi_75 = *(arg1 + 0x14)
                                int32_t ecx_218 = edx_146 << 2
                                void* edi_60 = *(esi_75 + (*(ecx_218 + eax_142[4]) << 2))
                                
                                if (*(edi_60 + 0x60) == 0)
                                    *(edi_60 + 0x60) =
                                        *(*(esi_75 + (*(ecx_218 + eax_142[2]) << 2)) + 0x60)
                                    *(*(*(arg1 + 0x14) + (*(ecx_218 + eax_142[4]) << 2)) + 0x64) =
                                        *(*(*(arg1 + 0x14) + (*(ecx_218 + eax_142[2]) << 2)) + 0x64)
                            else
                                int32_t ecx_215 = eax_142[4]
                                *(ecx_215 + (edx_146 << 2)) = *(ecx_215 + (i_15 << 2))
                                int32_t ecx_216 = eax_142[2]
                                *(ecx_216 + (edx_146 << 2)) = *(ecx_216 + (i_19 << 2))
                                edx_146 += 1
                            
                            i_15 = i_19 + 1
                            i_19 = i_15
                        while (i_15 u< eax_142[3])
                    
                    int32_t ecx_222 = neg.d(edx_146)
                    *eax_142 =
                        sbb.d(ecx_222, ecx_222, edx_146 != 0) & ((edx_146 & 0xfffff) | 0x10000000)
                    eax_142[1] = edx_146
                    eax_142[3] = edx_146
            
            if (j_11 u<= 0)
                break
            
            j_16 = j_11
    
    result = 0

label_4a95d9:
j__free(var_44)
return result

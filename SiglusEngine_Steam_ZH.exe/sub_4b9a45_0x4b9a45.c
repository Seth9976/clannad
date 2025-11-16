// 函数: sub_4b9a45
// 地址: 0x4b9a45
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_dc = edi
int32_t i_7 = 0
int32_t* var_20 = nullptr
int32_t var_2c = 0
int32_t edi_11

while (true)
    void* eax_2 = *(*(arg1 + 0x22c) + (var_2c << 2))
    
    if (eax_2 != 0 && *(eax_2 + 0xc) != 0)
        int32_t var_10_1 = 0
        
        if (*(arg1 + 0x224) u> 0)
            while (true)
                int32_t* ebx_1 = *(*(arg1 + 0x230) + (var_10_1 << 2))
                int32_t* var_18_1 = ebx_1
                
                if (ebx_1 != 0)
                    int32_t eax_4 = *ebx_1
                    
                    if (eax_4 != 0)
                        void* var_28_1 = nullptr
                        int32_t ecx_2 = neg.d(sbb.d(var_10_1, var_10_1, var_10_1 u< 6))
                        int32_t k_3 = eax_4 & 0xfffff
                        int32_t var_40_1 = ecx_2
                        
                        if (k_3 != 0)
                            uint32_t temp0_1 = divu.dp.d(0:(ebx_1[1]), k_3)
                            int32_t edx_3 = *(arg1 + 0x22c)
                            void* edi_2 = *(edx_3 + (var_2c << 2))
                            int32_t var_24_1 = 0
                            int32_t i = 0
                            
                            if (*(edi_2 + 0xc) u> 0)
                                do
                                    if (ecx_2 u< temp0_1)
                                        int32_t edx_7 = (k_3 * ecx_2) << 2
                                        int32_t j_7 = temp0_1 - ecx_2
                                        int32_t j
                                        
                                        do
                                            if (k_3 u> 0)
                                                int32_t eax_13 = *(*(edi_2 + 0x10) + (i << 2))
                                                int32_t* ecx_5 = ebx_1[2] + edx_7
                                                int32_t k_2 = k_3
                                                int32_t k
                                                
                                                do
                                                    int32_t eax_15 = *ecx_5
                                                    
                                                    if ((eax_15 == eax_13 || *(
                                                            *(*(arg1 + 0x14) + (eax_15 << 2))
                                                            + 0x38) == eax_13) && var_10_1 u> var_2c)
                                                        int32_t* eax_18 =
                                                            *(*(arg1 + 0x230) + (var_2c << 2))
                                                        
                                                        if (eax_18 != 0)
                                                            int32_t eax_19 = *eax_18
                                                            
                                                            if (eax_19 != 0
                                                                    && (eax_19 & 0xfff00000) != 0x11000000)
                                                                var_24_1 = 1
                                                                var_28_1 = edi_2
                                                    
                                                    ecx_5 = &ecx_5[1]
                                                    k = k_2
                                                    k_2 -= 1
                                                while (k != 1)
                                                ebx_1 = var_18_1
                                                ecx_2 = var_40_1
                                            
                                            edx_7 += k_3 << 2
                                            j = j_7
                                            j_7 -= 1
                                        while (j != 1)
                                    
                                    i += 1
                                while (i u< *(*(edx_3 + (var_2c << 2)) + 0xc))
                                
                                if (var_24_1 != 0)
                                    if (arg2 == 0)
                                        int32_t var_50 = 0xffffffff
                                        void var_4c
                                        void* edi_3 = &var_4c
                                        *edi_3 = 0xffffffff
                                        void* edi_4 = edi_3 + 4
                                        bool cond:5_1 = ebx_1[1] u<= 0
                                        *edi_4 = 0xffffffff
                                        int32_t var_8_1 = 0
                                        *(edi_4 + 4) = 0xffffffff
                                        int32_t i_1 = 0
                                        
                                        if (not(cond:5_1))
                                            do
                                                int32_t eax_29 = *(var_28_1 + 0xc)
                                                
                                                if (eax_29 u> 0)
                                                    int32_t edx_10 = *(ebx_1[2] + (i_1 << 2))
                                                    int32_t* ecx_11 = *(var_28_1 + 0x10)
                                                    int32_t var_30_2 = edx_10
                                                    int32_t var_24_3 = eax_29
                                                    
                                                    while (true)
                                                        int32_t j_1 = *ecx_11
                                                        
                                                        if (j_1 == edx_10 || j_1 == *(
                                                                *(*(arg1 + 0x14) + (edx_10 << 2))
                                                                + 0x38))
                                                            int32_t edx_12 = 0
                                                            
                                                            if (var_8_1 u> 0)
                                                                while ((&var_50)[edx_12] != j_1)
                                                                    edx_12 += 1
                                                                    
                                                                    if (edx_12 u>= var_8_1)
                                                                        break
                                                            
                                                            if (edx_12 == var_8_1)
                                                                (&var_50)[var_8_1] = j_1
                                                                var_8_1 += 1
                                                        
                                                        ecx_11 = &ecx_11[1]
                                                        int32_t temp7_1 = var_24_3
                                                        var_24_3 -= 1
                                                        
                                                        if (temp7_1 == 1)
                                                            break
                                                        
                                                        edx_10 = var_30_2
                                                
                                                i_1 += 1
                                            while (i_1 u< ebx_1[1])
                                        
                                        void* eax_31 = sub_49ec23(0x74)
                                        
                                        if (eax_31 == 0)
                                            var_20 = nullptr
                                        else
                                            var_20 = sub_49e789(eax_31)
                                        
                                        if (var_20 == 0)
                                        label_4b9eb8:
                                            edi_11 = 0x8007000e
                                            break
                                        
                                        edi_11 = sub_49ec6e(var_20, 
                                            (var_8_1 & 0xfffff) | 0x10000000, var_8_1, var_8_1, 0)
                                        int32_t var_14_2 = edi_11
                                        
                                        if (edi_11 s< 0)
                                            break
                                        
                                        int32_t* edx_13 = var_20
                                        __builtin_memset(edx_13[4], 0xffffffff, var_8_1 << 2)
                                        int32_t i_2 = 0
                                        
                                        if (ebx_1[1] u> 0)
                                            void* eax_37 = var_28_1
                                            
                                            do
                                                int32_t j_2 = 0
                                                
                                                if (*(eax_37 + 0xc) u> 0)
                                                    do
                                                        int32_t ecx_16 = *(ebx_1[2] + (i_2 << 2))
                                                        int32_t edi_13 = *(arg1 + 0x14)
                                                        void* edx_15 = *(edi_13 + (ecx_16 << 2))
                                                        int32_t eax_39 =
                                                            *(*(eax_37 + 0x10) + (j_2 << 2))
                                                        
                                                        if (eax_39 == ecx_16
                                                                || eax_39 == *(edx_15 + 0x38))
                                                            void* ebx_7 = *(edi_13 + (eax_39 << 2))
                                                            uint32_t edx_19 =
                                                                modu.dp.d(0:i_2, var_8_1) << 2
                                                            int32_t ecx_18 = *(edx_19 + var_20[4])
                                                            
                                                            if (ecx_18 == 0xffffffff)
                                                                int32_t eax_43 = *(arg1 + 0x408)
                                                                
                                                                if (eax_43 u>= 0x40)
                                                                    goto label_4b9eb8
                                                                
                                                                ecx_18 = *(arg1 + (eax_43 << 2) + 0x304)
                                                                *(arg1 + 0x408) = eax_43 + 1
                                                                void* eax_45 = *(edi_13 + (ecx_18 << 2))
                                                                int32_t edi_14 = *(arg1 + 0x88)
                                                                *(eax_45 + 0x3c) = 0
                                                                *(eax_45 + 0x38) = 0xffffffff
                                                                *(eax_45 + 4) = edi_14
                                                                *(eax_45 + 0x10) = *(ebx_7 + 0x10)
                                                                
                                                                if (ecx_18 == 0xffffffff)
                                                                    goto label_4b9eb8
                                                            
                                                            if (*(*(var_28_1 + 0x10) + (j_2 << 2))
                                                                    != *(edx_15 + 0x38))
                                                                *(var_18_1[2] + (i_2 << 2)) = ecx_18
                                                            else
                                                                int32_t eax_49 = *(arg1 + 0x408)
                                                                
                                                                if (eax_49 u>= 0x40)
                                                                    goto label_4b9eb8
                                                                
                                                                int32_t edi_18 =
                                                                    *(arg1 + (eax_49 << 2) + 0x304)
                                                                *(arg1 + 0x408) = eax_49 + 1
                                                                void* eax_52 =
                                                                    *(*(arg1 + 0x14) + (edi_18 << 2))
                                                                *(eax_52 + 0x10) = *(ebx_7 + 0x10)
                                                                *(eax_52 + 0x3c) = *(edx_15 + 0x3c)
                                                                *(eax_52 + 0x38) = ecx_18
                                                                *(eax_52 + 4) = *(arg1 + 0x88)
                                                                int32_t var_30_4 = edi_18
                                                                *(var_18_1[2] + (i_2 << 2)) = edi_18
                                                            
                                                            ebx_1 = var_18_1
                                                            *(edx_19 + var_20[2]) =
                                                                *(*(var_28_1 + 0x10) + (j_2 << 2))
                                                            *(edx_19 + var_20[4]) = ecx_18
                                                            *(*(*(arg1 + 0x14) + (ecx_18 << 2))
                                                                + 0x3c) = 0
                                                        
                                                        j_2 += 1
                                                        eax_37 = var_28_1
                                                    while (j_2 u< *(eax_37 + 0xc))
                                                    
                                                    edx_13 = var_20
                                                
                                                i_2 += 1
                                            while (i_2 u< ebx_1[1])
                                        
                                        *(*(arg1 + 0x22c) + (*(arg1 + 0x220) << 2)) = edx_13
                                        *(arg1 + 0x220) += 1
                                        int32_t ecx_22 = *(arg1 + 0x404)
                                        
                                        if (ecx_22 u>= 0xc)
                                            goto label_4b9eb8
                                        
                                        *(arg1 + (ecx_22 << 2) + 0x2c4) = edx_13
                                        *(arg1 + 0x404) += 1
                                        var_20 = nullptr
                                    else
                                        *arg2 += 1
                                        *arg2 += 1
                
                var_10_1 += 1
                
                if (var_10_1 u>= *(arg1 + 0x224))
                    goto label_4b9bd3
            
            break
    
label_4b9bd3:
    var_2c += 1
    
    if (var_2c u>= 6)
        int32_t i_3 = 0
        int32_t var_d0[0x10]
        
        if (*(arg1 + 0x220) u> 0)
            do
                int32_t* eax_27 = *(*(arg1 + 0x22c) + (i_3 << 2))
                
                if (eax_27 != 0 && *eax_27 != 0)
                    int32_t j_9 = eax_27[3]
                    int32_t var_24_2 = 0
                    
                    if (j_9 u> 0)
                        int32_t* eax_28 = eax_27[4]
                        int32_t j_8 = j_9
                        int32_t ebx_6
                        int32_t j_3
                        
                        do
                            int32_t ecx_9 = *eax_28
                            
                            if (*(*(*(arg1 + 0x14) + (ecx_9 << 2)) + 0x10) != 3)
                                ebx_6 = var_2c
                            else
                                ebx_6 = ecx_9
                                var_24_2 = 1
                                var_2c = ebx_6
                            
                            eax_28 = &eax_28[1]
                            j_3 = j_8
                            j_8 -= 1
                        while (j_3 != 1)
                        
                        if (var_24_2 != 0)
                            int32_t var_8_2 = 0
                            int32_t j_4 = 6
                            int32_t var_90[0xf]
                            
                            if (*(arg1 + 0x224) u> 6)
                                int32_t* edx_21 = *(arg1 + 0x230) + 0x18
                                
                                do
                                    int32_t* eax_66 = *edx_21
                                    
                                    if (eax_66 != 0 && *eax_66 != 0)
                                        int32_t k_1 = 0
                                        
                                        if (eax_66[1] u> 0)
                                            int32_t* var_14_4 = eax_66[2]
                                            
                                            do
                                                int32_t ecx_25 = *var_14_4
                                                
                                                if (*(*(*(arg1 + 0x14) + (ecx_25 << 2)) + 0x38)
                                                        == ebx_6 || ecx_25 == ebx_6)
                                                    if (var_8_2 u>= 0x10)
                                                        return 0x80004005
                                                    
                                                    int32_t ecx_26 = var_8_2
                                                    var_8_2 += 1
                                                    var_90[ecx_26] = eax_66
                                                
                                                k_1 += 1
                                                var_14_4 = &var_14_4[1]
                                            while (k_1 u< eax_66[1])
                                    
                                    j_4 += 1
                                    edx_21 = &edx_21[1]
                                while (j_4 u< *(arg1 + 0x224))
                            
                            int32_t* eax_73 = arg2
                            
                            if (eax_73 == 0)
                                goto label_4b9fd9
                            
                            int32_t j_5 = 0
                            
                            if (*(arg1 + 0xc) u> 0)
                                int32_t* var_18_2 = *(arg1 + 0x18)
                                
                                do
                                    int32_t* eax_70 = *var_18_2
                                    
                                    if (eax_70 != 0 && *eax_70 != 0 && eax_70[0xa] != 1)
                                        int32_t edi_24 = eax_70[1]
                                        int32_t var_14_5 = 0
                                        
                                        if (edi_24 u> 0)
                                            int32_t* eax_71 = eax_70[2]
                                            
                                            do
                                                int32_t ecx_28 = *eax_71
                                                
                                                if (*(*(*(arg1 + 0x14) + (ecx_28 << 2)) + 0x38)
                                                        == ebx_6 || ecx_28 == ebx_6)
                                                    if (var_8_2 u>= 0x10)
                                                        return 0x80004005
                                                    
                                                    var_8_2 += 1
                                                
                                                var_14_5 += 1
                                                eax_71 = &eax_71[1]
                                            while (var_14_5 u< edi_24)
                                    
                                    j_5 += 1
                                    var_18_2 = &var_18_2[1]
                                while (j_5 u< *(arg1 + 0xc))
                                
                                eax_73 = arg2
                            
                            if (var_8_2 != 0)
                                *eax_73 += 1
                            label_4b9fd9:
                                
                                if (var_8_2 != 0 && eax_73 == 0)
                                    if (*(arg1 + 0x404) u>= 0xc)
                                        return 1
                                    
                                    void* eax_74 = sub_49ec23(0x74)
                                    int32_t* edi_25
                                    
                                    if (eax_74 == 0)
                                        edi_25 = nullptr
                                    else
                                        edi_25 = sub_49e789(eax_74)
                                    
                                    void* eax_76 = sub_49ec23(0x74)
                                    int32_t* var_c_2
                                    
                                    if (eax_76 == 0)
                                        var_c_2 = nullptr
                                    else
                                        var_c_2 = sub_49e789(eax_76)
                                    
                                    int32_t eax_78
                                    
                                    if (edi_25 != 0 && var_c_2 != 0)
                                        eax_78 = *(arg1 + 0x408)
                                    
                                    if (edi_25 == 0 || var_c_2 == 0 || eax_78 u> 0x40)
                                        return 0x8007000e
                                    
                                    int32_t ecx_31 = *(arg1 + (eax_78 << 2) + 0x308)
                                    int32_t ebx_16 = *(arg1 + (eax_78 << 2) + 0x304)
                                    void* eax_80 = *(*(arg1 + 0x14) + (ecx_31 << 2))
                                    *(eax_80 + 0x38) = 0xffffffff
                                    *(eax_80 + 0x10) = 3
                                    *(eax_80 + 0x3c) = 0
                                    void* eax_82 = *(*(arg1 + 0x14) + (ebx_16 << 2))
                                    *(eax_82 + 0x38) = 0xffffffff
                                    *(eax_82 + 0x10) = 4
                                    *(eax_82 + 0x3c) = 0
                                    *(arg1 + 0x408) += 2
                                    int32_t var_10_2 = 0
                                    
                                    if (var_8_2 u> 0)
                                        do
                                            void* eax_84 = var_90[var_10_2]
                                            int32_t j_6 = 0
                                            
                                            if (*(eax_84 + 4) u> 0)
                                                do
                                                    int32_t* eax_86 = *(eax_84 + 8) + (j_6 << 2)
                                                    void* eax_88 =
                                                        *(*(arg1 + 0x14) + (*eax_86 << 2))
                                                    
                                                    if (*(eax_88 + 0x38) == var_2c)
                                                        *(eax_88 + 0x38) = ecx_31
                                                    else if (*eax_86 == var_2c)
                                                        *eax_86 = ecx_31
                                                    
                                                    j_6 += 1
                                                    eax_84 = var_90[var_10_2]
                                                while (j_6 u< *(eax_84 + 4))
                                            
                                            var_10_2 += 1
                                        while (var_10_2 u< var_8_2)
                                    
                                    int32_t eax_92 = sub_49ec6e(edi_25, 0x10000001, 1, 1, 0)
                                    int32_t var_14_6 = eax_92
                                    int32_t eax_93
                                    
                                    if (eax_92 s>= 0)
                                        eax_93 = sub_49ec6e(var_c_2, 0x10000001, 1, 1, 0)
                                        var_14_6 = eax_93
                                    
                                    if (eax_92 s< 0 || eax_93 s< 0)
                                        return var_14_6
                                    
                                    *edi_25[4] = ebx_16
                                    *edi_25[2] = var_2c
                                    edi_25[0xa] = 1
                                    *var_c_2[4] = ecx_31
                                    *var_c_2[2] = ebx_16
                                    edi_25[0xa] = 2
                                    *(arg1 + (*(arg1 + 0x404) << 2) + 0x2c4) = edi_25
                                    *(arg1 + (*(arg1 + 0x404) << 2) + 0x2c8) = var_c_2
                                    *(arg1 + 0x404) += 2
                                    *(*(arg1 + 0x22c) + (*(arg1 + 0x220) << 2)) = edi_25
                                    int32_t i_8 = i_7
                                    *(arg1 + 0x220) += 1
                                    i_7 += 1
                                    var_d0[i_8] = var_c_2
                
                i_3 += 1
            while (i_3 u< *(arg1 + 0x220))
        
        int32_t i_4 = *(arg1 + 0x224)
        
        if (i_4 + i_7 u> 0x200)
            return 0x80004005
        
        if (i_4 u>= 6)
            int32_t ecx_39 = (i_4 + i_7) << 2
            
            do
                int32_t* eax_100 = *(arg1 + 0x230)
                *(eax_100 + ecx_39) = eax_100[i_4]
                i_4 -= 1
                ecx_39 -= 4
            while (i_4 u>= 6)
        
        if (i_7 u> 0)
            int32_t i_6 = i_7
            int32_t* eax_101 = 0x18
            int32_t i_5
            
            do
                *(eax_101 + *(arg1 + 0x230)) = *(&var_d0 - 0x18 + eax_101)
                eax_101 = &eax_101[1]
                i_5 = i_6
                i_6 -= 1
            while (i_5 != 1)
        
        *(arg1 + 0x224) += i_7
        edi_11 = 0
        break

if (var_20 != 0)
    sub_46cb59(var_20, 1)

return edi_11

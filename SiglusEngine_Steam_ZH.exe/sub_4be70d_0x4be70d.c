// 函数: sub_4be70d
// 地址: 0x4be70d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t j = 0
int32_t i = 0
int32_t edi
int32_t var_114 = edi
int32_t* var_24 = nullptr
int32_t* var_1c = nullptr

if (*(arg1 + 8) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        int32_t edi_1 = *(eax_2 + 4)
        *(eax_2 + 0x30) = 0
        
        if (edi_1 == *(arg1 + 0x88))
            *(eax_2 + 0xc) = 0xffffffff
        
        i += 1
    while (i u< *(arg1 + 8))

for (int32_t i_1 = *(arg1 + 0x4c); i_1 u< *(arg1 + 0x224); i_1 += 1)
    int32_t* eax_4 = *(*(arg1 + 0x230) + (i_1 << 2))
    
    if (eax_4 != 0 && *eax_4 != 0 && eax_4[3] u> 0)
        do
            void* edi_4 = *(*(arg1 + 0x14) + (*(eax_4[4] + (j << 2)) << 2))
            j += 1
            *(edi_4 + 0x48) = i_1
        while (j u< eax_4[3])
        
        j = 0

int32_t ecx = *(arg1 + 0x224)
int32_t* eax_5 = *(arg1 + 0x4c)
int32_t* var_28 = eax_5
int32_t result
int32_t* ecx_86

if (eax_5 u>= ecx)
label_4bef82:
    
    for (int32_t i_2 = *(arg1 + 0x4c); i_2 u< ecx; i_2 += 1)
        **(*(arg1 + 0x230) + (i_2 << 2)) = 0
    
    result = 0
label_4beff7:
    ecx_86 = var_24
    
    if (ecx_86 != 0)
    label_4bf000:
        sub_46cb59(ecx_86, 1)
else
    while (true)
        int32_t* eax_7 = *(*(arg1 + 0x230) + (var_28 << 2))
        
        if (eax_7 != 0 && *eax_7 != 0)
            void* eax_8 = sub_49ec23(0x74)
            
            if (eax_8 == 0)
                var_1c = nullptr
            else
                var_1c = sub_49e789(eax_8)
            
            if (var_1c == 0)
            label_4befda:
                result = 0x8007000e
                goto label_4beff7
            
            int32_t result_1 = sub_49eecd(var_1c, eax_7)
            result = result_1
            
            if (result_1 s< 0)
                break
            
            if (*(arg1 + 0x224) u>= 0x200)
                goto label_4befda
            
            int32_t* ebx_2 = eax_7
            int32_t var_34_1 = 0
            int32_t var_40_1 = 0
            int32_t edx_1 = *ebx_2 & 0xfff00000
            int32_t* eax_10
            int32_t* ecx_5
            
            if (edx_1 == 0x50000000 && ebx_2[3] == 1)
                eax_10 = ebx_2[4]
                ecx_5 = *(*(arg1 + 0x14) + (*eax_10 << 2))
            
            void* var_3c
            int32_t* var_2c
            
            if (edx_1 == 0x50000000 && ebx_2[3] == 1 && ecx_5[4] == 3)
                int32_t var_48
                int32_t ecx_7 = sub_4ba560(arg1, *(arg1 + 0x230), var_28, ecx, eax_10, 1, &var_2c, 
                    &var_3c, &var_48)
                
                if (var_48 == 0)
                    goto label_4be9cf
                
                int32_t var_118_3 = ecx_7
                int32_t var_11c_2 = ecx_7
                var_11c_2.q = fconvert.d(float.t(0))
                int32_t eax_11 = sub_49f544(arg1, *(arg1 + 0x88), 0, 3, var_11c_2)
                
                if (eax_11 == 0xffffffff)
                    goto label_4befda
                
                int32_t* edi_6 = *(*(arg1 + 0x14) + (eax_11 << 2))
                sub_49f070(edi_6, ecx_5)
                int32_t eax_13 = *(arg1 + 0x88)
                edi_6[0xf] = 0
                edi_6[1] = eax_13
                edi_6[4] = 3
                void* eax_14 = sub_49ec23(0x74)
                int32_t* edi_7
                
                if (eax_14 == 0)
                    edi_7 = nullptr
                else
                    edi_7 = sub_49e789(eax_14)
                
                if (edi_7 == 0)
                    goto label_4befda
                
                int32_t result_2 = sub_49ec6e(edi_7, 0x10000001, 1, 1, 0)
                result = result_2
                int32_t result_3
                
                if (result_2 s>= 0)
                    result_3 = sub_49e7bf(edi_7, eax_7)
                    result = result_3
                
                if (result_2 s< 0 || result_3 s< 0)
                    ecx_86 = edi_7
                    goto label_4bf000
                
                *edi_7[4] = *eax_7[4]
                *edi_7[2] = eax_11
                *var_1c[4] = eax_11
                *(*(arg1 + 0x230) + (*(arg1 + 0x224) << 2)) = var_1c
                *(arg1 + 0x224) += 1
                var_2c = var_1c
                
                if (sub_49f431(arg1, var_1c) s< 0)
                    goto label_4befda
                
                int32_t eax_22 = *(arg1 + 0x224)
                
                if (eax_22 u>= 0x200)
                    goto label_4befda
                
                *(*(arg1 + 0x230) + (eax_22 << 2)) = edi_7
                *(arg1 + 0x224) += 1
                
                if (sub_49f431(arg1, edi_7) s< 0)
                    goto label_4befda
                
                goto label_4be97f
            
            if (edx_1 != 0x10000000)
            label_4be9cf:
                
                if (sub_49f431(arg1, var_1c) s< 0)
                    goto label_4befda
                
                *(*(arg1 + 0x230) + (*(arg1 + 0x224) << 2)) = var_1c
                *(arg1 + 0x224) += 1
                var_2c = var_1c
            label_4be97f:
                ebx_2 = eax_7
            else
                if (sub_4b593e(arg1, ebx_2) == 0)
                    goto label_4be9cf
                
                int32_t i_8 = ebx_2[3]
                var_34_1 = 1
                
                if (i_8 u> 0)
                    int32_t* eax_25 = ebx_2[4]
                    int32_t i_3
                    
                    do
                        if (*(*(*(arg1 + 0x14) + (*eax_25 << 2)) + 0x3c) != 0)
                            var_34_1 = 0
                        
                        eax_25 = &eax_25[1]
                        i_3 = i_8
                        i_8 -= 1
                    while (i_3 != 1)
                    
                    if (var_34_1 == 0)
                        goto label_4be9cf
                
                sub_46cb59(var_1c, 1)
                var_2c = nullptr
            
            var_1c = nullptr
            
            if (sub_4b593e(arg1, ebx_2) != 0)
                int32_t var_20_2 = 0
                int32_t var_10 = 0
                int32_t var_58 = 0xffffffff
                void var_54
                void* edi_10 = &var_54
                *edi_10 = 0xffffffff
                void* edi_11 = edi_10 + 4
                *edi_11 = 0xffffffff
                *(edi_11 + 4) = 0xffffffff
                int32_t eax_29 = ebx_2[3]
                int32_t var_88[0x4]
                
                if (eax_29 u> 0)
                    int32_t edx_5 = *(arg1 + 0x14)
                    
                    do
                        int32_t edi_15 = var_10 << 2
                        int32_t ecx_24 = *(edi_15 + ebx_2[4])
                        void* eax_31 = *(edx_5 + (ecx_24 << 2))
                        
                        if (*(eax_31 + 0x30) != 0)
                            *(eax_31 + 0x10)
                            (&var_58)[*(eax_31 + 0x10)] = ecx_24
                            var_88[*(eax_31 + 0x10)] = *(edi_15 + ebx_2[2])
                            var_20_2 = 1
                        
                        eax_29 = ebx_2[3]
                        var_10 += 1
                    while (var_10 u< eax_29)
                
                int32_t var_124_1 = ebx_2[4]
                int32_t edi_16 = 0
                var_10 = 0
                int32_t var_108[0x20]
                sub_4ba3c2(arg1, *(arg1 + 0x230), var_28, ecx, var_124_1, eax_29, &var_108, &var_10)
                
                if (var_20_2 != 0)
                    int32_t var_68 = 0xffffffff
                    void var_64
                    void* edi_17 = &var_64
                    *edi_17 = 0xffffffff
                    void* edi_18 = edi_17 + 4
                    *edi_18 = 0xffffffff
                    *(edi_18 + 4) = 0xffffffff
                    int32_t eax_34 = 0
                    int32_t var_18_1 = 0
                    int32_t var_78[0x3]
                    
                    if (var_10 u> 0)
                        do
                            int32_t ecx_28 = var_108[eax_34]
                            int32_t eax_35 = *(arg1 + 0x14)
                            void* edi_21 = *(eax_35 + (ecx_28 << 2))
                            int32_t var_c_1 = ecx_28
                            
                            if (*(edi_21 + 0x38) != 0xffffffff)
                                int32_t edi_22 = *(edi_21 + 0x38)
                                var_c_1 = edi_22
                                edi_21 = *(eax_35 + (edi_22 << 2))
                            
                            int32_t eax_36 = *(edi_21 + 0x48)
                            
                            if ((eax_36 u>= ecx || eax_36 u< var_28) && eax_36 != 0xffffffff)
                                int32_t eax_37 = eax_36 << 2
                                int32_t* eax_38 = *(eax_37 + *(arg1 + 0x230))
                                
                                if (sub_4b593e(arg1, eax_38) != 0)
                                    if ((*eax_38 & 0xfff00000) == 0x10000000
                                            && *(edi_21 + 0x38) == 0xffffffff)
                                        int32_t eax_42 = 0
                                        
                                        if (eax_38[3] u> 0)
                                            int32_t* ecx_32 = eax_38[4]
                                            
                                            while (true)
                                                if (var_c_1 == *ecx_32)
                                                    var_78[*(edi_21 + 0x10)] =
                                                        *(eax_38[2] + (eax_42 << 2))
                                                    var_40_1 = 1
                                                    break
                                                
                                                eax_42 += 1
                                                
                                                if (eax_42 u>= *(*(eax_37 + *(arg1 + 0x230)) + 0xc))
                                                    break
                                                
                                                ecx_32 = &ecx_32[1]
                                    
                                    int32_t __saved_ebp
                                    void* eax_45 = &(&__saved_ebp)[*(edi_21 + 0x10) - 0x19]
                                    int32_t ecx_38 = *eax_45
                                    
                                    if (ecx_38 == 0xffffffff)
                                        *eax_45 = var_c_1
                                    else if (ecx_38 != var_c_1)
                                    label_4bef96:
                                        uint32_t var_118_19 = zx.d((*(arg1 + 0xc8)).b)
                                        sub_4a4100(arg1, ebx_2[0xf], 0x11b9, 
                                            "unable to emmulate write masks for ps_1_%i shader model")
                                        return 0x80004005
                            
                            eax_34 = var_18_1 + 1
                            var_18_1 = eax_34
                        while (eax_34 u< var_10)
                    
                    int32_t edi_23 = 0
                    int32_t i_4 = 0
                    var_10 = 0
                    
                    do
                        int32_t ecx_40 = *(&var_68 + i_4)
                        
                        if (ecx_40 != 0xffffffff)
                            if (*(&var_58 + i_4) != 0xffffffff)
                                goto label_4bef96
                            
                            if (ecx_40 != 0xffffffff || *(&var_58 + i_4) != 0xffffffff)
                                edi_23 += 1
                                var_10 = edi_23
                        else if (*(&var_58 + i_4) != 0xffffffff)
                            edi_23 += 1
                            var_10 = edi_23
                        
                        i_4 += 4
                    while (i_4 u< 0x10)
                    
                    void* eax_47 = sub_49ec23(0x74)
                    int32_t* eax_48
                    
                    if (eax_47 == 0)
                        eax_48 = nullptr
                    else
                        eax_48 = sub_49e789(eax_47)
                    
                    var_24 = eax_48
                    
                    if (eax_48 == 0)
                        return 0x8007000e
                    
                    int32_t result_4 =
                        sub_49ec6e(eax_48, (edi_23 & 0xfffff) | 0x70100000, edi_23 * 3, edi_23, 0)
                    result = result_4
                    
                    if (result_4 s< 0)
                        goto label_4beff7
                    
                    int32_t result_5 = sub_49e7bf(var_24, eax_7)
                    result = result_5
                    
                    if (result_5 s< 0)
                        goto label_4beff7
                    
                    int32_t var_8_2 = 0
                    int32_t var_20_4 = 0
                    int32_t var_c_2 = var_10 << 2
                    int32_t eax_51 = 0
                    
                    while (true)
                        int32_t ebx_4 = *(&var_58 + eax_51)
                        int32_t var_44
                        
                        if (ebx_4 != 0xffffffff)
                            int32_t ecx_46 = var_24[4]
                            *(ecx_46 + (var_8_2 << 2)) = ebx_4
                            int32_t eax_53
                            
                            if (var_34_1 != 0)
                                eax_53 = *(&var_88 + eax_51)
                                *(*(*(arg1 + 0x14) + (ebx_4 << 2)) + 0x48) = *(arg1 + 0x224)
                            else
                                void* edi_26 = *(*(arg1 + 0x14) + (ebx_4 << 2))
                                int32_t var_118_14 = ecx_46
                                int32_t var_11c_5 = ecx_46
                                var_11c_5.q = fconvert.d(float.t(0))
                                eax_53 =
                                    sub_49f544(arg1, *(arg1 + 0x88), 0, *(edi_26 + 0x10), var_11c_5)
                                
                                if (eax_53 == 0xffffffff)
                                    goto label_4befda
                                
                                *(*(*(arg1 + 0x14) + (eax_53 << 2)) + 0x3c) = *(edi_26 + 0x3c)
                                *(edi_26 + 0x3c) = 0
                                *(edi_26 + 0x48) = *(arg1 + 0x224)
                                int32_t* ecx_51 = var_2c
                                int32_t i_5 = 0
                                
                                if (ecx_51[3] u> 0)
                                    do
                                        int32_t* edx_12 = ecx_51[4] + (i_5 << 2)
                                        
                                        if (*edx_12 == ebx_4)
                                            *edx_12 = eax_53
                                        
                                        i_5 += 1
                                    while (i_5 u< ecx_51[3])
                            
                            *(var_c_2 + var_24[2]) = eax_53
                            var_44 = eax_53
                            *(var_24[2] + (var_8_2 << 2)) = *(arg1 + 0x444)
                            goto label_4beddd
                        
                        int32_t ebx_5 = *(&var_68 + eax_51)
                        int32_t var_38
                        
                        if (ebx_5 != 0xffffffff)
                            int32_t ecx_57 = var_24[4]
                            int32_t edx_17 = var_8_2 << 2
                            *(edx_17 + ecx_57) = ebx_5
                            int32_t eax_56
                            
                            if (var_40_1 != 0)
                                eax_56 = *(&var_78 + eax_51)
                                *(*(*(arg1 + 0x14) + (ebx_5 << 2)) + 0x48) = *(arg1 + 0x224)
                            else
                                void* edi_28 = *(*(arg1 + 0x14) + (ebx_5 << 2))
                                int32_t var_118_15 = ecx_57
                                int32_t var_11c_6 = ecx_57
                                var_11c_6.q = fconvert.d(float.t(0))
                                eax_56 =
                                    sub_49f544(arg1, *(arg1 + 0x88), 0, *(edi_28 + 0x10), var_11c_6)
                                
                                if (eax_56 == 0xffffffff)
                                    goto label_4befda
                                
                                *(*(*(arg1 + 0x14) + (eax_56 << 2)) + 0x3c) = *(edi_28 + 0x3c)
                                int32_t ecx_61 = *(edi_28 + 0x48)
                                *(edi_28 + 0x3c) = 0
                                
                                if (ecx_61 == 0xffffffff || ecx_61 == *(arg1 + 0x224))
                                    sub_4a4100(arg1, eax_7[0xf], 0x12ca, 
                                        "internal error: illformed write field")
                                    goto label_4beff7
                                
                                void* ecx_62 = *(*(arg1 + 0x230) + (ecx_61 << 2))
                                int32_t i_6 = 0
                                bool cond:20_1 = *(ecx_62 + 0xc) u<= 0
                                var_3c = ecx_62
                                
                                if (not(cond:20_1))
                                    do
                                        int32_t* ecx_64 = *(ecx_62 + 0x10) + (i_6 << 2)
                                        
                                        if (*ecx_64 == ebx_5)
                                            *ecx_64 = eax_56
                                        
                                        ecx_62 = var_3c
                                        i_6 += 1
                                    while (i_6 u< *(ecx_62 + 0xc))
                                
                                *(edi_28 + 0x48) = *(arg1 + 0x224)
                            
                            *(edx_17 + var_24[2]) = *(arg1 + 0x440)
                            var_38 = eax_56
                            *(var_24[2] + ((var_8_2 + (var_10 << 1)) << 2)) = eax_56
                        label_4beddd:
                            var_8_2 += 1
                            var_c_2 += 4
                            eax_51 = var_20_4
                        
                        eax_51 += 4
                        var_20_4 = eax_51
                        
                        if (eax_51 u>= 0x10)
                            int32_t var_8_3 = 0
                            int32_t var_14_2 = 0
                            int32_t var_c_3 = var_10 << 2
                            
                            while (true)
                                int32_t eax_60 = *(&var_58 + var_14_2)
                                
                                if (eax_60 == 0xffffffff)
                                    int32_t eax_63 = *(&var_68 + var_14_2)
                                    
                                    if (eax_63 != 0xffffffff)
                                        int32_t ecx_76 = *(arg1 + 0x14)
                                        void* edi_35 = *(ecx_76 + (eax_63 << 2))
                                        int32_t var_118_17 = ecx_76
                                        int32_t var_11c_8 = ecx_76
                                        var_11c_8.q = fconvert.d(float.t(0))
                                        int32_t eax_64 = sub_49f544(arg1, *(arg1 + 0x88), 0, 
                                            *(edi_35 + 0x10), var_11c_8)
                                        
                                        if (eax_64 == 0xffffffff)
                                            goto label_4befda
                                        
                                        void* ecx_79 = *(*(arg1 + 0x14) + (eax_64 << 2))
                                        *(ecx_79 + 0x38) = var_44
                                        *(ecx_79 + 0x3c) = *(edi_35 + 0x3c)
                                        
                                        if (var_44 != 0xffffffff)
                                            *(ecx_79 + 4) = *(*(*(arg1 + 0x14) + (var_44 << 2)) + 4)
                                        
                                        *(var_c_3 + var_24[2]) = eax_64
                                        var_8_3 += 1
                                        var_c_3 += 4
                                else
                                    int32_t ecx_70 = *(arg1 + 0x14)
                                    void* edi_32 = *(ecx_70 + (eax_60 << 2))
                                    int32_t var_118_16 = ecx_70
                                    int32_t var_11c_7 = ecx_70
                                    var_11c_7.q = fconvert.d(float.t(0))
                                    int32_t eax_61 = sub_49f544(arg1, *(arg1 + 0x88), 0, 
                                        *(edi_32 + 0x10), var_11c_7)
                                    
                                    if (eax_61 == 0xffffffff)
                                        goto label_4befda
                                    
                                    void* ecx_73 = *(*(arg1 + 0x14) + (eax_61 << 2))
                                    *(ecx_73 + 0x38) = var_38
                                    *(ecx_73 + 0x3c) = *(edi_32 + 0x3c)
                                    
                                    if (var_38 != 0xffffffff)
                                        *(ecx_73 + 4) = *(*(*(arg1 + 0x14) + (var_38 << 2)) + 4)
                                    
                                    *(var_24[2] + ((var_8_3 + (var_10 << 1)) << 2)) = eax_61
                                    var_8_3 += 1
                                    var_c_3 += 4
                                
                                var_14_2 += 4
                                
                                if (var_14_2 u>= 0x10)
                                    int32_t eax_65 = *(arg1 + 0x224)
                                    
                                    if (eax_65 u>= 0x200)
                                        goto label_4befda
                                    
                                    *(*(arg1 + 0x230) + (eax_65 << 2)) = var_24
                                    *(arg1 + 0x224) += 1
                                    
                                    if (sub_49f431(arg1, var_24) s< 0)
                                        goto label_4befda
                                    
                                    var_24 = nullptr
                                    break
                            
                            break
                else if (var_10 u> 0)
                    bool cond:10_1
                    
                    do
                        int32_t ecx_83 = *(arg1 + 0x14)
                        void* eax_68 = *(ecx_83 + (var_108[edi_16] << 2))
                        int32_t edx_31 = *(eax_68 + 0x38)
                        
                        if (edx_31 != 0xffffffff)
                            eax_68 = *(ecx_83 + (edx_31 << 2))
                        
                        edi_16 += 1
                        cond:10_1 = edi_16 u< var_10
                        *(eax_68 + 0x30) = 1
                    while (cond:10_1)
            
            int32_t* eax_69 = var_2c
            int32_t i_7 = 0
            
            if (eax_69 != 0 && eax_69[3] u> 0)
                do
                    void* edi_40 = *(*(arg1 + 0x14) + (*(eax_69[4] + (i_7 << 2)) << 2))
                    i_7 += 1
                    *(edi_40 + 0x48) = *(arg1 + 0x224) - 1
                while (i_7 u< eax_69[3])
        
        var_28 += 1
        
        if (var_28 u>= ecx)
            goto label_4bef82

if (var_1c != 0)
    sub_46cb59(var_1c, 1)

return result

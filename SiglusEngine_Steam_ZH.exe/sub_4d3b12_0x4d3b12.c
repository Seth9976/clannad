// 函数: sub_4d3b12
// 地址: 0x4d3b12
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg1[0x40]
int32_t esi = *edx
int32_t var_28_1 = esi & 0xfffff
int32_t eax_1 = *edx & 0xfffff
int32_t edi
int32_t var_2d4 = edi
int32_t* var_58 = nullptr
int32_t var_30 = 0
int32_t var_54 = 0
int32_t var_50 = 1
int32_t var_4c = 2
int32_t var_48 = 3
int32_t var_40 = 0
int32_t var_34 = eax_1

if (var_28_1 u> eax_1 || (esi & 0xfff00000) != 0x20400000)
    goto label_4d3f3e

void var_2c8
int32_t var_228[0x28]
int32_t var_188[0x4]
int32_t var_e8[0x10]
int32_t var_a8[0x10]
void var_68
int32_t var_20
int32_t var_8_1
int32_t __saved_ebp

for (int32_t i = 0; i u< 1; i += 1)
    for (int32_t j = 0; j u< 2; j += 1)
        __builtin_memset(&var_228, 0xffffffff, 0xa0)
        __builtin_memset(&var_2c8, 0xffffffff, 0xa0)
        int32_t eax_2 = 0
        var_20 = 0
        var_8_1 = 0
        int32_t k = 0
        int32_t var_1c_1 = 0
        
        do
            int32_t k_5
            
            if (j == 0)
                k_5 = k
            else
                k_5 = 1 - k
            
            int32_t edi_1 = edx[2]
            int32_t ecx = *((k_5 << 2) + &data_acb324)
            int32_t* esi_2 = edi_1 + (eax_2 << 2)
            
            if (ecx u>= 0x10)
                int32_t edx_3 = 0
                void* ecx_7 = &(&__saved_ebp)[(ecx - 0x10) * 4 - 0x89]
                
                do
                    int32_t eax_10 = (&var_54)[edx_3]
                    
                    if (eax_10 u>= var_28_1)
                        *ecx_7 = 0xffffffff
                    else
                        *ecx_7 = *(edi_1 + ((var_1c_1 + eax_10) << 2))
                    
                    edx_3 += 1
                    ecx_7 += 4
                while (edx_3 u< 4)
            else
                int32_t eax_5 = *(*(arg1[5] + (*esi_2 << 2)) + 0x48)
                int32_t* eax_6
                int32_t eax_7
                int32_t ecx_1
                
                if (eax_5 != 0xffffffff)
                    ecx_1 = ecx << 5
                    eax_6 = *(arg1[6] + (eax_5 << 2))
                    eax_7 = sub_4c721b(arg1, eax_6, esi_2, var_28_1, &var_54, &var_68, 
                        *(ecx_1 + 0xacb330), 0)
                
                if (eax_5 == 0xffffffff || eax_7 != 0)
                    var_8_1 = 1
                    break
                
                var_8_1 = sub_4c73cc(arg1, eax_6, ecx_1 + 0xacb318, &var_a8, &var_20, &var_2c8, 
                    &var_68, var_34, eax_7)
            
            if (var_8_1 == 1)
                break
            
            eax_2 = var_1c_1 + var_28_1
            k += 1
            var_1c_1 = eax_2
        while (k u< 2)
        
        int32_t k_1 = 0
        int32_t var_10_1 = 0
        
        do
            int32_t k_6
            
            if (j == 0)
                k_6 = k_1
            else
                k_6 = 1 - k_1
            
            if (*((k_6 << 2) + &data_acb324) u>= 0x10)
                int32_t var_24_1 = 0
                
                if (var_20 u> 0)
                    do
                        int32_t esi_5 = 0
                        
                        if (var_28_1 u> 0)
                            void* ecx_8 = var_a8[var_24_1]
                            int32_t edi_3 = *(ecx_8 + 0xc)
                            
                            do
                                int32_t var_1c_2 = 0
                                
                                if (edi_3 u> 0)
                                    int32_t* eax_16 = *(ecx_8 + 0x10)
                                    
                                    while (*(edx[2] + ((var_10_1 + esi_5) << 2)) != *eax_16)
                                        var_1c_2 += 1
                                        edi_3 = *(ecx_8 + 0xc)
                                        eax_16 = &eax_16[1]
                                        
                                        if (var_1c_2 u>= edi_3)
                                            goto label_4d3d12
                                    
                                    var_8_1 = 1
                                    break
                                
                            label_4d3d12:
                                esi_5 += 1
                            while (esi_5 u< var_28_1)
                        
                        var_24_1 += 1
                    while (var_24_1 u< var_20)
            
            k_1 += 1
            var_10_1 += var_28_1
        while (k_1 u< 2)
        
        if (var_8_1 == 0)
            if (i != 0)
                goto label_4d3ecd
            
            int32_t var_24_2 = 0
            
            if (var_20 u> 0)
                do
                    int32_t eax_21 = *(var_a8[var_24_2] + 0xc)
                    int32_t var_1c_3 = 0
                    
                    if (eax_21 u> 0)
                        do
                            if (arg1[3] u> 0)
                                int32_t* var_10_2 = arg1[6]
                                int32_t k_4 = arg1[3]
                                int32_t k_2
                                
                                do
                                    int32_t* ecx_9 = *var_10_2
                                    
                                    if (ecx_9 != 0 && *ecx_9 != 0)
                                        int32_t edi_4 = ecx_9[1]
                                        int32_t var_18_1 = 0
                                        
                                        if (edi_4 u> 0)
                                            int32_t esi_6 =
                                                *(*(var_a8[var_24_2] + 0x10) + (var_1c_3 << 2))
                                            int32_t* edx_8 = ecx_9[2]
                                            int32_t var_44_1 = edi_4
                                            int32_t temp4_1
                                            
                                            do
                                                int32_t eax_28 = *edx_8
                                                
                                                if (eax_28 == esi_6
                                                        || *(*(arg1[5] + (eax_28 << 2)) + 0x38)
                                                        == esi_6)
                                                    var_18_1 = 1
                                                
                                                edx_8 = &edx_8[1]
                                                temp4_1 = var_44_1
                                                var_44_1 -= 1
                                            while (temp4_1 != 1)
                                        
                                        if (ecx_9 == edx)
                                            var_18_1 = 0
                                        
                                        if (var_18_1 != 0)
                                            int32_t eax_30 = 0
                                            
                                            do
                                                if (ecx_9 == var_a8[eax_30])
                                                    var_18_1 = 0
                                                
                                                eax_30 += 1
                                            while (eax_30 u< var_20)
                                            
                                            if (var_18_1 != 0)
                                                var_8_1 = 1
                                    
                                    var_10_2 = &var_10_2[1]
                                    k_2 = k_4
                                    k_4 -= 1
                                while (k_2 != 1)
                            
                            var_1c_3 += 1
                        while (var_1c_3 u< eax_21)
                    
                    var_24_2 += 1
                while (var_24_2 u< var_20)
            
            for (int32_t k_3 = 0; k_3 u< 0x28; k_3 += 1)
                int32_t esi_7 = var_228[k_3]
                
                if (esi_7 != 0xffffffff)
                    int32_t edi_6 = 0
                    
                    if (var_20 u> 0)
                        do
                            void* ecx_10 = var_a8[edi_6]
                            int32_t eax_36 = *(ecx_10 + 0xc)
                            
                            if (eax_36 u> 0)
                                int32_t* ecx_11 = *(ecx_10 + 0x10)
                                int32_t var_2c_2 = eax_36
                                int32_t temp2_1
                                
                                do
                                    int32_t edx_9 = *ecx_11
                                    
                                    if (esi_7 == edx_9
                                            || *(*(arg1[5] + (esi_7 << 2)) + 0x38) == edx_9)
                                        var_8_1 = 1
                                    
                                    ecx_11 = &ecx_11[1]
                                    temp2_1 = var_2c_2
                                    var_2c_2 -= 1
                                while (temp2_1 != 1)
                            
                            edi_6 += 1
                        while (edi_6 u< var_20)
            
            if (var_8_1 == 0)
                goto label_4d3ecd
    
    if (var_8_1 == 0)
    label_4d3ecd:
        int32_t eax_39 = var_20 << 2
        int32_t esi_8
        int32_t edi_7
        edi_7, esi_8 = __builtin_memcpy(&var_e8, &var_a8, eax_39 u>> 2 << 2)
        __builtin_memcpy(edi_7, esi_8, eax_39 & 3)
        var_e8[var_20] = edx
        var_30 = var_20 + 1
        
        for (int32_t j_1 = 0; j_1 u< 0xa0; j_1 += 4)
            int32_t ecx_17 = *(&var_228 + j_1)
            
            if (ecx_17 != 0xffffffff)
                *(&var_188 + j_1) = ecx_17
            else
                ecx_17 = *(&var_2c8 + j_1)
                
                if (ecx_17 != 0xffffffff)
                    *(&var_188 + j_1) = ecx_17
        
        var_8_1 = 0
        break

if (var_8_1 == 0)
    goto label_4d4688

eax_1 = var_34
label_4d3f3e:
int32_t* edx_11 = arg1[0x40]
int32_t edx_12 = *edx_11
int32_t var_28_3 = edx_12 & 0xfffff
int32_t eax_42

if (var_28_3 u<= eax_1 && (edx_12 & 0xfff00000) == 0x20400000)
    int32_t var_38_1 = 0
    
    while (true)
        int32_t var_18_2 = 0
        
        while (true)
            int32_t edx_14 = var_30
            int32_t ecx_19 = edx_14 << 2
            int32_t esi_9
            int32_t edi_8
            edi_8, esi_9 = __builtin_memcpy(&var_a8, &var_e8, ecx_19 u>> 2 << 2)
            __builtin_memcpy(edi_8, esi_9, ecx_19 & 3)
            __builtin_memset(&var_228, 0xffffffff, 0xa0)
            __builtin_memset(&var_2c8, 0xffffffff, 0xa0)
            int32_t eax_44 = 0
            var_20 = edx_14
            int32_t var_8_2 = 0
            int32_t i_1 = 0
            int32_t var_10_3 = 0
            
            do
                int32_t i_10
                
                if (var_18_2 == 0)
                    i_10 = i_1
                else
                    i_10 = 1 - i_1
                
                int32_t edi_9 = edx_11[2]
                int32_t ecx_23 = *((i_10 << 2) + &data_acb384)
                int32_t* esi_10 = edi_9 + (eax_44 << 2)
                
                if (ecx_23 u>= 0x10)
                    int32_t j_2 = 0
                    void* ecx_30 = &(&__saved_ebp)[(ecx_23 - 0x10) * 4 - 0x89]
                    
                    do
                        int32_t eax_52 = (&var_54)[j_2]
                        
                        if (eax_52 u>= var_28_3)
                            *ecx_30 = 0xffffffff
                        else
                            *ecx_30 = *(edi_9 + ((eax_52 + var_10_3) << 2))
                        
                        j_2 += 1
                        ecx_30 += 4
                    while (j_2 u< 4)
                else
                    int32_t eax_47 = *(*(arg1[5] + (*esi_10 << 2)) + 0x48)
                    int32_t* eax_48
                    int32_t eax_49
                    int32_t ecx_24
                    
                    if (eax_47 != 0xffffffff)
                        ecx_24 = ecx_23 << 5
                        eax_48 = *(arg1[6] + (eax_47 << 2))
                        eax_49 = sub_4c721b(arg1, eax_48, esi_10, var_28_3, &var_54, &var_68, 
                            *(ecx_24 + 0xacb390), 0)
                    
                    if (eax_47 == 0xffffffff || eax_49 != 0)
                        var_8_2 = 1
                        break
                    
                    var_8_2 = sub_4c73cc(arg1, eax_48, ecx_24 + 0xacb378, &var_a8, &var_20, 
                        &var_2c8, &var_68, var_34, eax_49)
                
                if (var_8_2 == 1)
                    break
                
                eax_44 = var_10_3 + var_28_3
                i_1 += 1
                var_10_3 = eax_44
            while (i_1 u< 2)
            
            int32_t esi_12 = 0
            int32_t i_2 = 0
            int32_t var_24_3 = 0
            
            do
                int32_t i_11
                
                if (var_18_2 == 0)
                    i_11 = i_2
                else
                    i_11 = 1 - i_2
                
                if (*((i_11 << 2) + &data_acb384) u>= 0x10)
                    int32_t var_c_1 = 0
                    
                    if (var_20 u> 0)
                        do
                            if (var_28_3 u> 0)
                                void* ecx_31 = var_a8[var_c_1]
                                int32_t edi_11 = *(ecx_31 + 0xc)
                                
                                do
                                    int32_t var_10_4 = 0
                                    
                                    if (edi_11 u> 0)
                                        int32_t* eax_59 = *(ecx_31 + 0x10)
                                        
                                        while (*(edx_11[2] + ((var_24_3 + esi_12) << 2)) != *eax_59)
                                            var_10_4 += 1
                                            edi_11 = *(ecx_31 + 0xc)
                                            eax_59 = &eax_59[1]
                                            
                                            if (var_10_4 u>= edi_11)
                                                goto label_4d410f
                                        
                                        var_8_2 = 1
                                        break
                                    
                                label_4d410f:
                                    esi_12 += 1
                                while (esi_12 u< var_28_3)
                            
                            var_c_1 += 1
                            esi_12 = 0
                        while (var_c_1 u< var_20)
                
                i_2 += 1
                var_24_3 += var_28_3
            while (i_2 u< 2)
            
            if (var_8_2 == 0)
                if (var_38_1 != 0)
                    goto label_4d42cc
                
                int32_t var_24_4 = 0
                
                if (var_20 u> 0)
                    do
                        int32_t eax_64 = *(var_a8[var_24_4] + 0xc)
                        int32_t var_c_2 = 0
                        
                        if (eax_64 u> 0)
                            do
                                if (arg1[3] u> 0)
                                    int32_t* var_10_5 = arg1[6]
                                    int32_t i_9 = arg1[3]
                                    int32_t i_3
                                    
                                    do
                                        int32_t* ecx_32 = *var_10_5
                                        
                                        if (ecx_32 != 0 && *ecx_32 != 0)
                                            int32_t j_8 = ecx_32[1]
                                            int32_t var_14_1 = 0
                                            
                                            if (j_8 u> 0)
                                                int32_t esi_13 =
                                                    *(*(var_a8[var_24_4] + 0x10) + (var_c_2 << 2))
                                                int32_t* edx_21 = ecx_32[2]
                                                int32_t j_5 = j_8
                                                int32_t j_3
                                                
                                                do
                                                    int32_t eax_71 = *edx_21
                                                    
                                                    if (eax_71 == esi_13
                                                            || *(*(arg1[5] + (eax_71 << 2)) + 0x38)
                                                            == esi_13)
                                                        var_14_1 = 1
                                                    
                                                    edx_21 = &edx_21[1]
                                                    j_3 = j_5
                                                    j_5 -= 1
                                                while (j_3 != 1)
                                            
                                            if (ecx_32 == edx_11)
                                                var_14_1 = 0
                                            
                                            if (var_14_1 != 0)
                                                int32_t eax_73 = 0
                                                
                                                do
                                                    if (ecx_32 == var_a8[eax_73])
                                                        var_14_1 = 0
                                                    
                                                    eax_73 += 1
                                                while (eax_73 u< var_20)
                                                
                                                if (var_14_1 != 0)
                                                    var_8_2 = 1
                                        
                                        var_10_5 = &var_10_5[1]
                                        i_3 = i_9
                                        i_9 -= 1
                                    while (i_3 != 1)
                                
                                var_c_2 += 1
                            while (var_c_2 u< eax_64)
                        
                        var_24_4 += 1
                    while (var_24_4 u< var_20)
                
                for (int32_t i_4 = 0; i_4 u< 0x28; i_4 += 1)
                    int32_t esi_14 = var_228[i_4]
                    
                    if (esi_14 != 0xffffffff)
                        int32_t edi_13 = 0
                        
                        if (var_20 u> 0)
                            do
                                void* ecx_33 = var_a8[edi_13]
                                int32_t j_7 = *(ecx_33 + 0xc)
                                
                                if (j_7 u> 0)
                                    int32_t* ecx_34 = *(ecx_33 + 0x10)
                                    int32_t j_6 = j_7
                                    int32_t j_4
                                    
                                    do
                                        int32_t edx_22 = *ecx_34
                                        
                                        if (esi_14 == edx_22
                                                || *(*(arg1[5] + (esi_14 << 2)) + 0x38) == edx_22)
                                            var_8_2 = 1
                                        
                                        ecx_34 = &ecx_34[1]
                                        j_4 = j_6
                                        j_6 -= 1
                                    while (j_4 != 1)
                                
                                edi_13 += 1
                            while (edi_13 u< var_20)
                
                if (var_8_2 == 0)
                    goto label_4d42cc
            
            var_18_2 += 1
            
            if (var_18_2 u>= 2)
                if (var_8_2 == 0)
                label_4d42cc:
                    int32_t eax_81 = var_20 << 2
                    int32_t esi_15
                    int32_t edi_14
                    edi_14, esi_15 = __builtin_memcpy(&var_e8, &var_a8, eax_81 u>> 2 << 2)
                    __builtin_memcpy(edi_14, esi_15, eax_81 & 3)
                    var_e8[var_20] = edx_11
                    var_30 = var_20 + 1
                    
                    for (int32_t i_5 = 0; i_5 u< 0xa0; i_5 += 4)
                        int32_t ecx_40 = *(&var_228 + i_5)
                        
                        if (ecx_40 != 0xffffffff)
                            *(&var_188 + i_5) = ecx_40
                        else
                            ecx_40 = *(&var_2c8 + i_5)
                            
                            if (ecx_40 != 0xffffffff)
                                *(&var_188 + i_5) = ecx_40
                    
                    var_8_2 = 0
                else
                    var_38_1 += 1
                    
                    if (var_38_1 u< 1)
                        break
                
                eax_42 = var_8_2
                goto label_4d4330

eax_42 = 1
label_4d4330:
var_40 = 1
int32_t result
int32_t* esi_17

if (eax_42 == 0)
label_4d4688:
    void* eax_104 = sub_49ec23(0x74)
    
    if (eax_104 == 0)
        esi_17 = nullptr
    else
        esi_17 = sub_49e789(eax_104)
    
    if (esi_17 == 0)
        return 0x8007000e
    
    int32_t eax_107 = var_34 & 0xfffff
    int32_t eax_108
    
    if (var_40 == 0)
        eax_108 = eax_107 | 0x70300000
    else
        eax_108 = eax_107 | 0x70400000
    
    int32_t result_1 = sub_49ec6e(esi_17, eax_108, var_34 * 3, var_34, 0)
    result = result_1
    
    if (result_1 s>= 0)
        int32_t result_2 = sub_49e7bf(esi_17, arg1[0x40])
        result = result_2
        
        if (result_2 s>= 0)
            int32_t eax_109 = 0
            int32_t var_2c_3 = 0
            
            if (var_34 u> 0)
                int32_t var_c_3 = var_34 << 3
                int32_t var_10_6 = var_34 << 2
                
                do
                    int32_t eax_110 = eax_109 << 2
                    *(eax_110 + esi_17[4]) = *(eax_110 + *(arg1[0x40] + 0x10))
                    *(eax_110 + esi_17[2]) = (&__saved_ebp)[eax_109 - 0x61]
                    int32_t edi_21 = var_10_6
                    int32_t ecx_74 = (&__saved_ebp)[eax_109 - 0x59]
                    var_10_6 += 4
                    *(edi_21 + esi_17[2]) = (&__saved_ebp)[eax_109 - 0x5d]
                    int32_t edx_30 = var_c_3
                    var_c_3 += 4
                    *(edx_30 + esi_17[2]) = ecx_74
                    eax_109 = var_2c_3 + 1
                    var_2c_3 = eax_109
                while (eax_109 u< var_34)
            
            if (arg2 == 0)
                return sub_4ceaa2(arg1, esi_17, &var_e8, var_30)
            
            int32_t result_3 = sub_49eecd(arg1[0x40], esi_17)
            result = result_3
            
            if (result_3 s>= 0)
                result = 0
else
    if (arg2 == 0)
        goto label_4d43b2
    
    var_40 = 0
    
    if (sub_4c73cc(arg1, arg1[0x40], 0xacb318, &var_e8, &var_30, &var_188, &var_54, var_34, arg2)
            == 0)
        goto label_4d4688
    
    eax_42 =
        sub_4c73cc(arg1, arg1[0x40], 0xacb378, &var_e8, &var_30, &var_188, &var_54, var_34, arg2)
    var_40 = 1
label_4d43b2:
    
    if (eax_42 == 0)
        goto label_4d4688
    
    var_40 = 0
    int32_t eax_85 =
        sub_4c73cc(arg1, arg1[0x40], 0xacb3d8, &var_e8, &var_30, &var_188, &var_54, var_34, arg2)
    int32_t ecx_44 = 0
    int32_t var_178[0x4]
    
    if (var_34 u> 0)
        do
            if (var_188[ecx_44] != var_178[ecx_44])
                eax_85 = 1
            
            ecx_44 += 1
        while (ecx_44 u< var_34)
    
    int32_t esi_16
    
    if (eax_85 == 0)
        esi_16 = 1
    label_4d454a:
        int32_t eax_93 = 0
        
        if (var_34 u> 0)
            do
                if (var_188[eax_93] != var_178[eax_93])
                    return 1
                
                eax_93 += 1
            while (eax_93 u< var_34)
        
        if (arg1[0x58] == 0xffffffff)
            int32_t eax_94
            int32_t ecx_54
            eax_94, ecx_54 = sub_49f4eb(arg1, 0xabfed8, 0x311, 1, 4)
            arg1[0x5c] = eax_94
            
            if (eax_94 == 0xffffffff)
                return 0x8007000e
            
            int32_t var_2d8_9 = ecx_54
            int32_t var_2dc_11 = ecx_54
            var_2dc_11.q = fconvert.d(fconvert.t(2.0))
            int32_t eax_95 = sub_49f544(arg1, eax_94, 0, 0, var_2dc_11)
            arg1[0x58] = eax_95
            
            if (eax_95 == 0xffffffff)
                return 0x8007000e
        
        int32_t eax_96 = 0
        int32_t var_168[0x20]
        
        if (var_34 u> 0)
            int32_t ecx_56 = arg1[0x58]
            
            do
                int32_t edx_25 = var_168[eax_96]
                var_188[eax_96] = ecx_56
                
                if (edx_25 != var_168[0])
                    esi_16 = 0
                
                eax_96 += 1
            while (eax_96 u< var_34)
        
        int32_t edi_17 = arg1[5]
        void* edx_26 = *(edi_17 + (var_168[0] << 2))
        
        if ((*(*(arg1[4] + (*(edx_26 + 4) << 2)) + 5) & 1) != 0 && esi_16 != 0)
            int32_t i_6 = 0
            void* esi_18 = &arg1[0x59]
            
            do
                int32_t eax_100 = *esi_18
                
                if (eax_100 == 0xffffffff)
                    break
                
                long double x87_r7_2 = fconvert.t(*(edx_26 + 0x20))
                long double x87_r6_1 = fconvert.t(*(*(edi_17 + (eax_100 << 2)) + 0x20))
                x87_r6_1 - x87_r7_2
                void* eax_101
                eax_101.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1))
                    break
                
                i_6 += 1
                esi_18 += 4
            while (i_6 u< 3)
            
            if (i_6 != 3)
                int32_t eax_102
                
                if (arg1[i_6 + 0x59] == 0xffffffff)
                    int32_t i_8 = i_6
                    int32_t i_7 = i_6
                    i_7.q = fconvert.d(fconvert.t(*(edx_26 + 0x20)))
                    eax_102 = sub_49f544(arg1, arg1[0x5c], 0, i_6 + 1, i_7)
                    arg1[i_6 + 0x59] = eax_102
                
                if (arg1[i_6 + 0x59] == 0xffffffff && eax_102 == 0xffffffff)
                    return 0x8007000e
                
                int32_t ecx_61
                int32_t edi_18
                
                if (var_34 u> 0)
                    edi_18, ecx_61 = __memfill_u32(&var_168, arg1[i_6 + 0x59], var_34)
        
        goto label_4d4688
    
    var_30 = 0
    esi_16 = 1
    int32_t ecx_46 = 0
    int32_t var_8_3 =
        sub_4c73cc(arg1, arg1[0x40], 0xacb438, &var_e8, &var_30, &var_188, &var_54, var_34, arg2)
    var_40 = 1
    
    if (var_34 u> 0)
        do
            if (var_188[ecx_46] != var_178[ecx_46])
                var_8_3 = 1
            
            ecx_46 += 1
        while (ecx_46 u< var_34)
    
    if (var_8_3 == 0)
        goto label_4d454a
    
    var_40 = 0
    var_30 = 0
    int32_t ecx_48 = 0
    int32_t var_8_4 =
        sub_4c73cc(arg1, arg1[0x40], 0xacb498, &var_e8, &var_30, &var_188, &var_54, var_34, arg2)
    
    if (var_34 u> 0)
        do
            if (var_188[ecx_48] != var_178[ecx_48])
                var_8_4 = 1
            
            ecx_48 += 1
        while (ecx_48 u< var_34)
    
    if (var_8_4 == 0)
        goto label_4d454a
    
    var_30 = 0
    int32_t ecx_50 = 0
    int32_t var_8_5 =
        sub_4c73cc(arg1, arg1[0x40], 0xacb4f8, &var_e8, &var_30, &var_188, &var_54, var_34, arg2)
    var_40 = 1
    
    if (var_34 u> 0)
        do
            if (var_188[ecx_50] != var_178[ecx_50])
                var_8_5 = 1
            
            ecx_50 += 1
        while (ecx_50 u< var_34)
    
    if (var_8_5 == 0)
        goto label_4d454a
    
    esi_17 = var_58
    result = 0

if (esi_17 != 0)
    sub_46cb59(esi_17, 1)

return result

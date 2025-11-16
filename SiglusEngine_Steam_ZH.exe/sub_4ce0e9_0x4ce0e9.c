// 函数: sub_4ce0e9
// 地址: 0x4ce0e9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4c = 0
int32_t edi
int32_t var_288 = edi
int32_t var_13c[0x7]
__builtin_memset(&var_13c, 0xffffffff, 0xa0)
int32_t* eax = *(arg1 + 0x100)
int32_t esi = *eax
int32_t var_28_1 = esi & 0xfffff
int32_t edi_2 = *eax & 0xfffff
int32_t var_48 = 1
int32_t var_44 = 2
int32_t var_40 = 3
int32_t var_10_1
int32_t __saved_ebp

if (var_28_1 u> edi_2 || (esi & 0xfff00000) != 0x20500000)
    var_10_1 = 1
else
    int32_t var_34_1 = 0
label_4ce15b:
    int32_t var_10_2 = 0
    
    while (true)
        int32_t var_1dc[0x28]
        __builtin_memset(&var_1dc, 0xffffffff, 0xa0)
        void var_27c
        __builtin_memset(&var_27c, 0xffffffff, 0xa0)
        int32_t eax_1 = 0
        int32_t var_2c = 0
        int32_t var_20_1 = 0
        int32_t i = 0
        int32_t var_c_1 = 0
        int32_t var_8c[0x10]
        
        do
            int32_t i_6
            
            if (var_10_2 == 0)
                i_6 = i
            else
                i_6 = 1 - i
            
            int32_t edi_3 = eax[2]
            int32_t ecx = *((i_6 << 2) + &data_acba44)
            int32_t* esi_2 = edi_3 + (eax_1 << 2)
            
            if (ecx u>= 0x10)
                int32_t j = 0
                void* ecx_7 = &(&__saved_ebp)[(ecx - 0x10) * 4 - 0x76]
                
                do
                    int32_t eax_9 = (&var_4c)[j]
                    
                    if (eax_9 u>= var_28_1)
                        *ecx_7 = 0xffffffff
                    else
                        *ecx_7 = *(edi_3 + ((eax_9 + var_c_1) << 2))
                    
                    j += 1
                    ecx_7 += 4
                while (j u< 4)
            else
                int32_t eax_4 = *(*(*(arg1 + 0x14) + (*esi_2 << 2)) + 0x48)
                void var_9c
                int32_t* eax_5
                int32_t eax_6
                int32_t ecx_1
                
                if (eax_4 != 0xffffffff)
                    ecx_1 = ecx << 5
                    eax_5 = *(*(arg1 + 0x18) + (eax_4 << 2))
                    eax_6 = sub_4c721b(arg1, eax_5, esi_2, var_28_1, &var_4c, &var_9c, 
                        *(ecx_1 + 0xacba50), 0)
                
                if (eax_4 == 0xffffffff || eax_6 != 0)
                    var_20_1 = 1
                    break
                
                var_20_1 = sub_4c73cc(arg1, eax_5, ecx_1 + 0xacba38, &var_8c, &var_2c, &var_27c, 
                    &var_9c, edi_2, eax_6)
            
            if (var_20_1 == 1)
                break
            
            eax_1 = var_c_1 + var_28_1
            i += 1
            var_c_1 = eax_1
        while (i u< 2)
        
        int32_t esi_4 = 0
        int32_t i_1 = 0
        int32_t var_30_1 = 0
        
        do
            int32_t i_7
            
            if (var_10_2 == 0)
                i_7 = i_1
            else
                i_7 = 1 - i_1
            
            if (*((i_7 << 2) + &data_acba44) u>= 0x10)
                int32_t var_14_1 = 0
                
                if (var_2c u> 0)
                    do
                        if (var_28_1 u> 0)
                            void* ecx_8 = var_8c[var_14_1]
                            int32_t edi_5 = *(ecx_8 + 0xc)
                            
                            do
                                int32_t var_c_2 = 0
                                
                                if (edi_5 u> 0)
                                    int32_t* eax_16 = *(ecx_8 + 0x10)
                                    
                                    while (*(eax[2] + ((var_30_1 + esi_4) << 2)) != *eax_16)
                                        var_c_2 += 1
                                        edi_5 = *(ecx_8 + 0xc)
                                        eax_16 = &eax_16[1]
                                        
                                        if (var_c_2 u>= edi_5)
                                            goto label_4ce2f2
                                    
                                    var_20_1 = 1
                                    break
                                
                            label_4ce2f2:
                                esi_4 += 1
                            while (esi_4 u< var_28_1)
                        
                        var_14_1 += 1
                        esi_4 = 0
                    while (var_14_1 u< var_2c)
            
            i_1 += 1
            var_30_1 += var_28_1
        while (i_1 u< 2)
        
        int32_t eax_35
        
        if (var_20_1 == 0)
            if (var_34_1 == 0)
                int32_t var_14_2 = 0
                
                if (var_2c u> 0)
                    do
                        int32_t eax_21 = *(var_8c[var_14_2] + 0xc)
                        int32_t var_c_3 = 0
                        
                        if (eax_21 u> 0)
                            do
                                int32_t i_8 = *(arg1 + 0xc)
                                
                                if (i_8 u> 0)
                                    int32_t* var_30_2 = *(arg1 + 0x18)
                                    int32_t i_5 = i_8
                                    int32_t i_2
                                    
                                    do
                                        int32_t* ecx_10 = *var_30_2
                                        
                                        if (ecx_10 != 0 && *ecx_10 != 0)
                                            int32_t j_6 = ecx_10[1]
                                            int32_t var_8_1 = 0
                                            
                                            if (j_6 u> 0)
                                                int32_t edi_6 =
                                                    *(*(var_8c[var_14_2] + 0x10) + (var_c_3 << 2))
                                                int32_t* esi_6 = ecx_10[2]
                                                int32_t j_3 = j_6
                                                int32_t j_1
                                                
                                                do
                                                    int32_t eax_26 = *esi_6
                                                    
                                                    if (eax_26 == edi_6 || *(
                                                            *(*(arg1 + 0x14) + (eax_26 << 2))
                                                            + 0x38) == edi_6)
                                                        var_8_1 = 1
                                                    
                                                    esi_6 = &esi_6[1]
                                                    j_1 = j_3
                                                    j_3 -= 1
                                                while (j_1 != 1)
                                            
                                            if (ecx_10 == eax)
                                                var_8_1 = 0
                                            
                                            if (var_8_1 != 0)
                                                int32_t eax_28 = 0
                                                
                                                do
                                                    if (ecx_10 == var_8c[eax_28])
                                                        var_8_1 = 0
                                                    
                                                    eax_28 += 1
                                                while (eax_28 u< var_2c)
                                                
                                                if (var_8_1 != 0)
                                                    var_20_1 = 1
                                        
                                        var_30_2 = &var_30_2[1]
                                        i_2 = i_5
                                        i_5 -= 1
                                    while (i_2 != 1)
                                
                                var_c_3 += 1
                            while (var_c_3 u< eax_21)
                        
                        var_14_2 += 1
                    while (var_14_2 u< var_2c)
                
                for (int32_t i_3 = 0; i_3 u< 0x28; i_3 += 1)
                    int32_t esi_7 = var_1dc[i_3]
                    
                    if (esi_7 != 0xffffffff)
                        int32_t edi_7 = 0
                        
                        if (var_2c u> 0)
                            do
                                void* ecx_11 = var_8c[edi_7]
                                int32_t j_5 = *(ecx_11 + 0xc)
                                
                                if (j_5 u> 0)
                                    int32_t* ecx_12 = *(ecx_11 + 0x10)
                                    int32_t j_4 = j_5
                                    int32_t j_2
                                    
                                    do
                                        int32_t edx_7 = *ecx_12
                                        
                                        if (esi_7 == edx_7
                                                || *(*(*(arg1 + 0x14) + (esi_7 << 2)) + 0x38)
                                                == edx_7)
                                            var_20_1 = 1
                                        
                                        ecx_12 = &ecx_12[1]
                                        j_2 = j_4
                                        j_4 -= 1
                                    while (j_2 != 1)
                                
                                edi_7 += 1
                            while (edi_7 u< var_2c)
            
            if (var_34_1 != 0 || var_20_1 == 0)
            label_4ce4b2:
                var_8c[var_2c] = eax
                
                for (int32_t i_4 = 0; i_4 u< 0xa0; i_4 += 4)
                    int32_t ecx_14 = *(&var_1dc + i_4)
                    
                    if (ecx_14 != 0xffffffff)
                        *(&var_13c + i_4) = ecx_14
                    else
                        ecx_14 = *(&var_27c + i_4)
                        
                        if (ecx_14 != 0xffffffff)
                            *(&var_13c + i_4) = ecx_14
                
                eax_35 = 0
            label_4ce4e8:
                var_10_1 = eax_35
                break
        
        var_10_2 += 1
        
        if (var_10_2 u>= 2)
            eax_35 = var_20_1
            
            if (eax_35 == 0)
                goto label_4ce4b2
            
            var_34_1 += 1
            
            if (var_34_1 u< 1)
                goto label_4ce15b
            
            goto label_4ce4e8

if (edi_2 u< 3)
    return 1

int32_t var_18_2 = 0

if (edi_2 u> 0)
    int32_t* ecx_15 = *(*(arg1 + 0x100) + 0x10)
    bool cond:2_1
    
    do
        void* eax_39 = *(*(arg1 + 0x14) + (*ecx_15 << 2))
        
        if ((*(*(*(arg1 + 0x10) + (*(eax_39 + 4) << 2)) + 4) & 0x20) != 0)
            return 1
        
        if (*(eax_39 + 0x10) != var_18_2)
            return 1
        
        ecx_15 = &ecx_15[1]
        cond:2_1 = var_18_2 + 1 u< edi_2
        var_18_2 += 1
    while (cond:2_1)

if (var_10_1 == 0)
    int32_t edx_8 = 0
    
    while (true)
        int32_t eax_40 = var_13c[edx_8]
        
        if (eax_40 == (&__saved_ebp)[edx_8 - 0x4a] && eax_40 == (&__saved_ebp)[edx_8 - 0x46] &&
                (*(*(*(arg1 + 0x14) + (eax_40 << 2)) + 0x10) == edx_8 || (*(arg1 + 0x6c) & 2) == 0))
            edx_8 += 1
            int32_t var_120
            int32_t var_110
            
            if (edx_8 u< 3)
                continue
            else if (var_120 == 0xffffffff && var_110 == 0xffffffff)
                break
        
        return 1
    
    void* eax_42 = sub_49ec23(0x74)
    int32_t* esi_9
    
    if (eax_42 == 0)
        esi_9 = nullptr
    else
        esi_9 = sub_49e789(eax_42)
    
    if (esi_9 == 0)
        return 0x8007000e
    
    int32_t edi_13 = sub_49ec6e(esi_9, (edi_2 & 0xfffff) | 0x70200000, edi_2, edi_2, 0)
    
    if (edi_13 s< 0)
        sub_46cb59(esi_9, 1)
        return edi_13
    
    edi_13 = sub_49e7bf(esi_9, *(arg1 + 0x100))
    
    if (edi_13 s< 0)
        sub_46cb59(esi_9, 1)
        return edi_13
    
    int32_t ecx_22 = edi_2 << 2
    int32_t esi_11
    int32_t edi_15
    edi_15, esi_11 = __builtin_memcpy(esi_9[4], *(*(arg1 + 0x100) + 0x10), ecx_22 u>> 2 << 2)
    __builtin_memcpy(edi_15, esi_11, ecx_22 & 3)
    int32_t ecx_27 = edi_2 << 2
    int32_t esi_12
    int32_t edi_17
    edi_17, esi_12 = __builtin_memcpy(esi_9[2], &var_13c, ecx_27 u>> 2 << 2)
    __builtin_memcpy(edi_17, esi_12, ecx_27 & 3)
    int32_t esi_13 = 0
    
    if (edi_2 u> 0)
        do
            if ((*(arg1 + 0x6c) & 2) != 0)
                int32_t* ecx_34 =
                    *(*(arg1 + 0x14) + (*(*(*(arg1 + 0x100) + 8) + (esi_13 << 2)) << 2))
                *ecx_34 |= 0x80000000
                int32_t edx_12 = *(arg1 + 0x14)
                
                if (*(*(edx_12 + (*(*(*(arg1 + 0x100) + 8) + (esi_13 << 2)) << 2)) + 0x38)
                        != 0xffffffff)
                    int32_t* ecx_40 = *(edx_12 + (
                        *(*(edx_12 + (*(*(*(arg1 + 0x100) + 8) + (esi_13 << 2)) << 2)) + 0x38)
                        << 2))
                    *ecx_40 |= 0x80000000
            
            int32_t* ecx_44 =
                *(*(arg1 + 0x14) + (*(*(*(arg1 + 0x100) + 0x10) + (esi_13 << 2)) << 2))
            *ecx_44 |= 0x80000000
            esi_13 += 1
        while (esi_13 u< edi_2)
    
    var_10_1 = sub_49eecd(*(arg1 + 0x100), esi_9)
    sub_46cb59(esi_9, 1)

return var_10_1

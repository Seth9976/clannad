// 函数: sub_4c5f60
// 地址: 0x4c5f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_30 = 0
int32_t edi
int32_t var_a0 = edi
int32_t var_48 = 0
int32_t var_44
int32_t* edi_1 = &var_44
*edi_1 = 0
edi_1[1] = 0
int32_t var_64 = 0
int32_t var_60
int32_t* edi_4 = &var_60
*edi_4 = 0
bool cond:0 = arg1[3] != 0
edi_4[1] = 0

if (not(cond:0))
    return 1

void* result_1 = sub_4b2406(arg1, arg2)
void* result = result_1
int32_t var_5c

if (result_1 s>= 0)
    void* result_2 = sub_4c7be2(arg1, arg1[0x1f], arg1[0xe], 0x200, 0x42080, 0x63)
    result = result_2
    
    if (result_2 s>= 0)
        int32_t var_28_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_58 = 0xffffffff
        int32_t var_54
        int32_t* edi_7 = &var_54
        *edi_7 = 0xffffffff
        void* edi_8 = &edi_7[1]
        *edi_8 = 0xffffffff
        *(edi_8 + 4) = 0xffffffff
        int32_t var_84 = 0
        int32_t var_80
        int32_t* edi_11 = &var_80
        *edi_11 = 0
        void* edi_12 = &edi_11[1]
        *edi_12 = 0
        *(edi_12 + 4) = 0
        int32_t i_13 = arg1[2]
        
        if (i_13 u> 0)
            int32_t ebx_1 = arg1[0x1e]
            int32_t* edi_15 = arg1[5]
            int32_t i_11 = i_13
            int32_t i
            
            do
                void* eax_1 = *edi_15
                int32_t edx_1 = *(eax_1 + 4)
                int32_t ecx_3
                
                if (ebx_1 == edx_1)
                    ecx_3 = *(eax_1 + 0xc) + 1
                
                if (ebx_1 == edx_1 && ecx_3 u> var_28_1)
                    var_28_1 = ecx_3
                else if (arg1[0x22] == edx_1)
                    int32_t ecx_5 = *(eax_1 + 0xc) + 1
                    
                    if (ecx_5 u> var_1c_1)
                        var_1c_1 = ecx_5
                
                if (arg1[0x21] == edx_1)
                    int32_t ecx_6 = *(eax_1 + 0xc)
                    
                    if (ecx_6 u> var_84)
                        var_84 = ecx_6
                    
                    if (arg1[0x21] == edx_1)
                        int32_t ecx_7 = *(eax_1 + 0xc)
                        
                        if (ecx_7 u< var_58)
                            var_58 = ecx_7
                
                if (arg1[0x2d] == edx_1)
                    int32_t ecx_8 = *(eax_1 + 0xc)
                    
                    if (ecx_8 u> var_80)
                        var_80 = ecx_8
                    
                    if (arg1[0x2d] == edx_1)
                        int32_t ecx_9 = *(eax_1 + 0xc)
                        
                        if (ecx_9 u< var_54)
                            var_54 = ecx_9
                
                if (arg1[0x2e] == edx_1)
                    int32_t ecx_10 = *(eax_1 + 0xc)
                    int32_t var_7c
                    
                    if (ecx_10 u> var_7c)
                        var_7c = ecx_10
                    
                    if (arg1[0x2e] == edx_1)
                        int32_t eax_2 = *(eax_1 + 0xc)
                        int32_t var_50
                        
                        if (eax_2 u< var_50)
                            var_50 = eax_2
                
                edi_15 = &edi_15[1]
                i = i_11
                i_11 -= 1
            while (i != 1)
        
        int32_t var_20_1 = 0
        int32_t var_70 = arg1[0x21]
        int32_t eax_4 = arg1[0x2d]
        int32_t var_68 = arg1[0x2e]
        
        while (true)
            if (*(&var_58 + var_20_1) == 0xffffffff)
            label_4c61ce:
                var_20_1 += 4
                
                if (var_20_1 u< 0xc)
                    continue
                else
                    int32_t edi_22 = var_28_1 << 5
                    int32_t eax_18 = sub_745f3f(edi_22)
                    var_30 = eax_18
                    
                    if (eax_18 != 0)
                        if (var_1c_1 u<= 0x40)
                            __builtin_memset(__builtin_memset(var_30, 0, edi_22 u>> 2 << 2), 0, 
                                edi_22 & 3)
                            int32_t edi_25 = 0
                            
                            if (arg1[2] u<= 0)
                            label_4c62b6:
                                int32_t eax_21 = arg1[3]
                                int32_t var_1c_2 = 0
                                void*** i_10
                                
                                if (eax_21 u> 0)
                                    do
                                        int32_t* edi_26 = *(arg1[6] + (var_1c_2 << 2))
                                        int32_t eax_23 = *edi_26
                                        int32_t var_24_1 = 0
                                        edi_26[0xa] = 0
                                        int32_t var_34_2 = eax_23 & 0xfff00000
                                        void* ebx_6 = eax_23 & 0xfffff
                                        
                                        if (ebx_6 == 0)
                                            sub_49f69d(arg1, edi_26)
                                        else
                                            uint32_t i_2 = divu.dp.d(0:(edi_26[1]), ebx_6)
                                            int32_t var_10_2 = 0
                                            int32_t* eax_26 = edi_26[4]
                                            int32_t var_74_1 = *(*(arg1[5] + (*eax_26 << 2)) + 0x10)
                                            
                                            if (i_2 u> 0)
                                                int32_t* var_8_2 = edi_26[2]
                                                
                                                do
                                                    int32_t edx_18 = var_10_2
                                                    var_10_2 += 1
                                                    (&var_70)[edx_18] =
                                                        *(*(arg1[5] + (*var_8_2 << 2)) + 0x10)
                                                    var_8_2 = &var_8_2[ebx_6]
                                                while (var_10_2 u< i_2)
                                            
                                            if (ebx_6 == edi_26[3] && ebx_6 u> 1)
                                                int32_t var_10_3 = var_74_1 + 1
                                                void* eax_27 = &eax_26[1]
                                                void* i_12 = ebx_6 - 1
                                                void* i_1
                                                
                                                do
                                                    if (*(*(arg1[5] + (*eax_27 << 2)) + 0x10)
                                                            == var_10_3)
                                                        var_74_1 += 1
                                                        var_10_3 += 1
                                                    else
                                                        var_24_1 = 1
                                                    
                                                    eax_27 += 4
                                                    i_1 = i_12
                                                    i_12 -= 1
                                                while (i_1 != 1)
                                            
                                            if (i_2 != 2 || var_24_1 != 0)
                                            label_4c6509:
                                                int32_t var_8_5 = 1
                                                
                                                if (ebx_6 u> 1)
                                                    do
                                                        int32_t var_10_7 = 0
                                                        
                                                        if (i_2 u> 0)
                                                            int32_t* var_14_3 =
                                                                edi_26[2] + (var_8_5 << 2)
                                                            
                                                            do
                                                                int32_t __saved_ebp
                                                                int32_t ecx_71 =
                                                                    (&__saved_ebp)[var_10_7 - 0x1b] + 1
                                                                
                                                                if (
                                                                        *(*(arg1[5] + (*var_14_3 << 2)) + 0x10)
                                                                        == ecx_71)
                                                                    (&__saved_ebp)[var_10_7 - 0x1b] = ecx_71
                                                                else
                                                                    var_24_1 = 1
                                                                
                                                                var_10_7 += 1
                                                                var_14_3 = &var_14_3[ebx_6]
                                                            while (var_10_7 u< i_2)
                                                        
                                                        var_8_5 += 1
                                                    while (var_8_5 u< ebx_6)
                                                
                                                if (var_24_1 == 0)
                                                    sub_49f69d(arg1, edi_26)
                                                else if (var_34_2 == 0x50000000)
                                                    *edi_26 = 0x70e00001
                                                    sub_49f69d(arg1, edi_26)
                                                else if (var_34_2 != 0x50300000)
                                                    int32_t var_10_8 = 0
                                                    
                                                    if (ebx_6 u> 0)
                                                        do
                                                            void* eax_63 = sub_49ec23(0x74)
                                                            int32_t* var_8_7
                                                            
                                                            if (eax_63 == 0)
                                                                var_8_7 = nullptr
                                                            else
                                                                var_8_7 = sub_49e789(eax_63)
                                                            
                                                            int32_t var_98[0x4]
                                                            var_98[var_10_8] = var_8_7
                                                            
                                                            if (var_8_7 == 0)
                                                                goto label_4c6283
                                                            
                                                            void* result_4 = sub_49ec6e(var_8_7, 
                                                                var_34_2 | 1, i_2, 1, 0)
                                                            result = result_4
                                                            
                                                            if (result_4 s< 0)
                                                                goto label_4c6bd3
                                                            
                                                            void* result_5 =
                                                                sub_49e7bf(var_8_7, edi_26)
                                                            result = result_5
                                                            
                                                            if (result_5 s< 0)
                                                                goto label_4c6bd3
                                                            
                                                            int32_t* edx_31 = var_8_7[4]
                                                            int32_t ecx_88 = edi_26[4]
                                                            i_10 = nullptr
                                                            int32_t eax_71 = var_10_8 << 2
                                                            *edx_31 = *(eax_71 + ecx_88)
                                                            
                                                            if (i_2 u> 0)
                                                                int32_t var_14_4 = eax_71
                                                                void*** i_15
                                                                
                                                                do
                                                                    i_15 = i_10
                                                                    *(var_8_7[2] + (i_15 << 2)) =
                                                                        *(var_14_4 + edi_26[2])
                                                                    var_14_4 += ebx_6 << 2
                                                                    i_10 = i_15 + 1
                                                                while (i_15 + 1 u< i_2)
                                                            
                                                            sub_49f69d(arg1, var_8_7)
                                                            sub_46cb59(var_8_7, 1)
                                                            var_10_8 += 1
                                                        while (var_10_8 u< ebx_6)
                                                else
                                                    int32_t var_8_6 = 0
                                                    
                                                    if (ebx_6 u> 0)
                                                        do
                                                            if (*(*(arg1[5]
                                                                    + (*(edi_26[4] + (var_8_6 << 2)) << 2))
                                                                    + 0x5c) != 0)
                                                                int32_t var_b0_2
                                                                
                                                                var_b0_2 =
                                                                    var_8_6 != 0 ? 0x10800001 : 0x10900001
                                                                
                                                                int32_t eax_58 =
                                                                    sub_49f5a4(arg1, var_b0_2, 1, 1)
                                                                
                                                                if (eax_58 == 0xffffffff)
                                                                    goto label_4c6283
                                                                
                                                                void*** i_14 =
                                                                    *(arg1[6] + (eax_58 << 2))
                                                                i_10 = i_14
                                                                void* result_3 =
                                                                    sub_49e7bf(i_14, edi_26)
                                                                result = result_3
                                                                
                                                                if (result_3 s< 0)
                                                                    goto label_4c6bd3
                                                                
                                                                *i_10[4] = *(edi_26[4] + (var_8_6 << 2))
                                                                *i_10[2] = *(edi_26[2] + (var_8_6 << 2))
                                                            
                                                            var_8_6 += 1
                                                        while (var_8_6 u< ebx_6)
                                            else
                                                int32_t var_c_1 = 1
                                                int32_t var_8_3 = eax_4 + 1
                                                
                                                if (ebx_6 u<= 1)
                                                    edi_26[0xa] = 1
                                                    sub_49f69d(arg1, edi_26)
                                                else
                                                    int32_t* eax_28 = edi_26[2]
                                                    int32_t ecx_52 =
                                                        *(*(arg1[5] + (*eax_28 << 2)) + 0x10)
                                                    void* var_88 = &eax_28[1]
                                                    void* var_10_4 = &eax_28[1]
                                                    void* eax_29 = &eax_28[ebx_6]
                                                    void* var_14_1 = eax_29 + 4
                                                    i_10 = ebx_6 - 1
                                                    void*** i_3
                                                    
                                                    do
                                                        if (*(*(arg1[5] + (*var_10_4 << 2)) + 0x10)
                                                                != ecx_52)
                                                            var_c_1 = 0
                                                        
                                                        if (*(*(arg1[5] + (*var_14_1 << 2)) + 0x10)
                                                                == var_8_3)
                                                            var_8_3 += 1
                                                        else
                                                            var_c_1 = 0
                                                        
                                                        var_10_4 += 4
                                                        var_14_1 += 4
                                                        i_3 = i_10
                                                        i_10 -= 1
                                                    while (i_3 != 1)
                                                    
                                                    if (var_c_1 != 0)
                                                        edi_26[0xa] = 1
                                                        sub_49f69d(arg1, edi_26)
                                                    else
                                                        int32_t var_8_4 = var_70 + 1
                                                        int32_t ecx_65 = arg1[5]
                                                        int32_t eax_32 =
                                                            *(*(ecx_65 + (*eax_29 << 2)) + 0x10)
                                                        void* var_10_5 = var_88
                                                        void* var_14_2 = eax_29 + 4
                                                        int32_t var_c_2 = 1
                                                        i_10 = ebx_6 - 1
                                                        void*** i_4
                                                        
                                                        do
                                                            if (
                                                                    *(*(ecx_65 + (*var_14_2 << 2)) + 0x10)
                                                                    != eax_32)
                                                                var_c_2 = 0
                                                            
                                                            if (
                                                                    *(*(arg1[5] + (*var_10_5 << 2)) + 0x10)
                                                                    == var_8_4)
                                                                var_8_4 += 1
                                                            else
                                                                var_c_2 = 0
                                                            
                                                            var_14_2 += 4
                                                            var_10_5 += 4
                                                            i_4 = i_10
                                                            i_10 -= 1
                                                        while (i_4 != 1)
                                                        
                                                        if (var_c_2 == 0)
                                                            goto label_4c6509
                                                        
                                                        int32_t var_10_6 = 0
                                                        
                                                        if (ebx_6 u> 0)
                                                            i_10 = ebx_6 << 2
                                                            
                                                            do
                                                                int32_t eax_45 = edi_26[2]
                                                                int32_t ecx_66 = var_10_6
                                                                var_10_6 += 1
                                                                int32_t* ecx_67 = eax_45 + (ecx_66 << 2)
                                                                int32_t edx_26 = *ecx_67
                                                                void*** i_17 = i_10
                                                                *ecx_67 = *(i_17 + eax_45)
                                                                *(i_17 + edi_26[2]) = edx_26
                                                                i_10 = &i_17[1]
                                                            while (var_10_6 u< ebx_6)
                                                        
                                                        edi_26[0xa] = 1
                                                        sub_49f69d(arg1, edi_26)
                                        
                                        *edi_26 = 0
                                        var_1c_2 += 1
                                    while (var_1c_2 u< eax_21)
                                
                                sub_49ff18(arg1)
                                void* result_6 = sub_4d546f(arg1, arg1[0x32])
                                result = result_6
                                
                                if (result_6 s>= 0)
                                    if (arg1[0x32] != 0x46580201)
                                    label_4c684c:
                                        void* result_8 = sub_4d55c7(arg1)
                                        result = result_8
                                        
                                        if (result_8 s>= 0)
                                            void* result_9 = sub_4d546f(arg1, 
                                                (((var_28_1 << 0x13) + 0x20000) & 0x7fff0000)
                                                    | 0xfffe)
                                            result = result_9
                                            
                                            if (result_9 s>= 0)
                                                void* result_10 = sub_4d546f(arg1, 0x54494c43)
                                                result = result_10
                                                
                                                if (result_10 s>= 0)
                                                    int32_t ebx_11 = var_28_1 << 2
                                                    void* result_11
                                                    int32_t ecx_120
                                                    result_11, ecx_120 = sub_4d546f(arg1, ebx_11)
                                                    result = result_11
                                                    
                                                    if (result_11 s>= 0)
                                                        int32_t edi_31 = 0
                                                        
                                                        if (ebx_11 u> 0)
                                                            do
                                                                int32_t var_ac_1 = ecx_120
                                                                var_ac_1.q = fconvert.d(fconvert.t(
                                                                    *(var_30 + (edi_31 << 3))))
                                                                void* result_12
                                                                result_12, ecx_120 =
                                                                    sub_4c5cc1(arg1, var_ac_1, ecx_120)
                                                                result = result_12
                                                                
                                                                if (result_12 s< 0)
                                                                    goto label_4c6bd3
                                                                
                                                                edi_31 += 1
                                                            while (edi_31 u< ebx_11)
                                                        
                                                        int32_t eax_90 = arg1[0x44]
                                                        void* result_13 = sub_4d546f(arg1, 0)
                                                        result = result_13
                                                        
                                                        if (result_13 s>= 0)
                                                            void* result_14 =
                                                                sub_4d546f(arg1, 0x434c5846)
                                                            result = result_14
                                                            
                                                            if (result_14 s>= 0)
                                                                void* result_15 =
                                                                    sub_4d546f(arg1, arg1[3])
                                                                result = result_15
                                                                
                                                                if (result_15 s>= 0)
                                                                    int32_t var_28_2 = 0
                                                                    
                                                                    if (arg1[3] u<= 0)
                                                                    label_4c6b1d:
                                                                        void* result_26 =
                                                                            sub_4d546f(arg1, 0xf0f0f0f0)
                                                                        result = result_26
                                                                        
                                                                        if (result_26 s>= 0)
                                                                            void* result_27 =
                                                                                sub_4d546f(arg1, 0xf0f0f0f)
                                                                            result = result_27
                                                                            
                                                                            if (result_27 s>= 0)
                                                                                int32_t* eax_125 =
                                                                                    arg1[0x43] + (eax_90 << 2)
                                                                                *eax_125 = ((*eax_125 + 4) << 0x10
                                                                                    & 0x7fff0000) | 0xfffe
                                                                                void* result_28 =
                                                                                    sub_4d546f(arg1, 0xffff)
                                                                                result = result_28
                                                                                
                                                                                if (result_28 s>= 0)
                                                                                    if (arg2 == 0)
                                                                                        result = nullptr
                                                                                    else
                                                                                        void* result_29 =
                                                                                            sub_458ce7(arg1[0x44] << 2, &i_10)
                                                                                        result = result_29
                                                                                        
                                                                                        if (result_29 s>= 0)
                                                                                            void*** i_16 = i_10
                                                                                            int32_t ebx_15 = arg1[0x44] << 2
                                                                                            int32_t esi_2
                                                                                            int32_t edi_37
                                                                                            edi_37, esi_2 = __builtin_memcpy(
                                                                                                (*i_16)[3](i_16), arg1[0x43], 
                                                                                                ebx_15 u>> 2 << 2)
                                                                                            __builtin_memcpy(edi_37, esi_2, 
                                                                                                ebx_15 & 3)
                                                                                            *arg2 = i_10
                                                                                            result = nullptr
                                                                    else
                                                                        int32_t* var_8_8 = nullptr
                                                                        
                                                                        while (true)
                                                                            void* eax_92 = *(var_8_8 + arg1[6])
                                                                            int32_t ecx_126 = *(eax_92 + 0x28)
                                                                            int32_t ecx_127 = neg.d(ecx_126)
                                                                            void* result_16 = sub_4d546f(arg1, 
                                                                                (sbb.d(ecx_127, ecx_127, ecx_126 != 0)
                                                                                    & 0x80000000) | *eax_92)
                                                                            result = result_16
                                                                            
                                                                            if (result_16 s< 0)
                                                                                break
                                                                            
                                                                            int32_t* eax_94 = *(var_8_8 + arg1[6])
                                                                            int32_t edi_33 = *eax_94 & 0xfffff
                                                                            uint32_t i_18 =
                                                                                divu.dp.d(0:(eax_94[1]), edi_33)
                                                                            i_10 = i_18
                                                                            void* result_17 = sub_4d546f(arg1, i_18)
                                                                            result = result_17
                                                                            
                                                                            if (result_17 s< 0)
                                                                                break
                                                                            
                                                                            int32_t var_1c_3 = 0
                                                                            int32_t* eax_98 =
                                                                                arg1[0x43] + (eax_90 << 2)
                                                                            *eax_98 += 2
                                                                            
                                                                            if (i_10 u> 0)
                                                                                int32_t* var_14_5 = nullptr
                                                                                
                                                                                do
                                                                                    void* edi_34 = *(arg1[5] + (*(var_14_5
                                                                                        + *(*(arg1[6] + var_8_8) + 8)) << 2))
                                                                                    int32_t ebx_12 = arg1[0x44]
                                                                                    void* result_18 = sub_4d546f(arg1, 0)
                                                                                    result = result_18
                                                                                    
                                                                                    if (result_18 s< 0)
                                                                                        goto label_4c6bd3
                                                                                    
                                                                                    int32_t eax_105 = *(edi_34 + 8)
                                                                                    
                                                                                    if (eax_105 != 0xffffffff)
                                                                                        void* result_19 =
                                                                                            sub_4c5ef9(arg1, eax_105, ebx_12)
                                                                                        result = result_19
                                                                                        
                                                                                        if (result_19 s< 0)
                                                                                            goto label_4c6bd3
                                                                                    
                                                                                    void* result_20 =
                                                                                        sub_4c5c00(arg1, edi_34)
                                                                                    result = result_20
                                                                                    
                                                                                    if (result_20 s< 0)
                                                                                        goto label_4c6bd3
                                                                                    
                                                                                    void* result_21 = sub_4d546f(arg1, 
                                                                                        *(edi_34 + 0x10)
                                                                                            + (*(edi_34 + 0xc) << 2))
                                                                                    result = result_21
                                                                                    
                                                                                    if (result_21 s< 0)
                                                                                        goto label_4c6bd3
                                                                                    
                                                                                    int32_t eax_108 = arg1[0x43]
                                                                                    int32_t* ecx_144 =
                                                                                        eax_108 + (eax_90 << 2)
                                                                                    *ecx_144 +=
                                                                                        *(eax_108 + (ebx_12 << 2)) * 2 + 3
                                                                                    var_1c_3 += 1
                                                                                    var_14_5 = &var_14_5[edi_33]
                                                                                while (var_1c_3 u< i_10)
                                                                            
                                                                            int32_t* var_1c_4 = nullptr
                                                                            
                                                                            while (true)
                                                                                void* edi_35 = *(arg1[5] + (*(var_1c_4
                                                                                    + *(*(arg1[6] + var_8_8) + 0x10))
                                                                                    << 2))
                                                                                int32_t ebx_13 = arg1[0x44]
                                                                                void* result_22 = sub_4d546f(arg1, 0)
                                                                                result = result_22
                                                                                
                                                                                if (result_22 s< 0)
                                                                                    goto label_4c6bd3
                                                                                
                                                                                int32_t eax_117 = *(edi_35 + 8)
                                                                                
                                                                                if (eax_117 != 0xffffffff)
                                                                                    void* result_23 =
                                                                                        sub_4c5ef9(arg1, eax_117, ebx_13)
                                                                                    result = result_23
                                                                                    
                                                                                    if (result_23 s< 0)
                                                                                        goto label_4c6bd3
                                                                                
                                                                                void* result_24 =
                                                                                    sub_4c5c00(arg1, edi_35)
                                                                                result = result_24
                                                                                
                                                                                if (result_24 s< 0)
                                                                                    goto label_4c6bd3
                                                                                
                                                                                void* result_25 = sub_4d546f(arg1, 
                                                                                    *(edi_35 + 0x10)
                                                                                        + (*(edi_35 + 0xc) << 2))
                                                                                result = result_25
                                                                                
                                                                                if (result_25 s< 0)
                                                                                    goto label_4c6bd3
                                                                                
                                                                                int32_t eax_120 = arg1[0x43]
                                                                                var_1c_4 = &var_1c_4[1]
                                                                                int32_t* ecx_154 =
                                                                                    eax_120 + (eax_90 << 2)
                                                                                *ecx_154 +=
                                                                                    *(eax_120 + (ebx_13 << 2)) * 2 + 3
                                                                                
                                                                                if (var_1c_4 u>= 4)
                                                                                    var_28_2 += 1
                                                                                    var_8_8 = &var_8_8[1]
                                                                                    
                                                                                    if (var_28_2 u< arg1[3])
                                                                                        break
                                                                                    
                                                                                    goto label_4c6b1d
                                    else
                                        int32_t ebx_7 = var_48
                                        int32_t var_40
                                        sub_4d546f(arg1, 
                                            ((var_40 + var_44 + ebx_7 + 5) << 0x11 & 0x7fff0000)
                                                | 0xfffe)
                                        void* result_7 = sub_4d546f(arg1, 0x49535250)
                                        result = result_7
                                        
                                        if (result_7 s>= 0)
                                            for (int32_t i_5 = 0; i_5 u< 3; i_5 += 1)
                                                int32_t eax_80 = (&var_58)[i_5]
                                                int32_t var_a8_13
                                                
                                                var_a8_13 = eax_80 != 0xffffffff ? eax_80 : 0
                                                
                                                sub_4d546f(arg1, var_a8_13)
                                            
                                            for (int32_t i_6 = 0; i_6 u< 0xc; i_6 += 4)
                                                int32_t eax_81 = *(&var_58 + i_6)
                                                int32_t var_a8_14
                                                
                                                if (eax_81 != 0xffffffff)
                                                    var_a8_14 = *(&var_84 + i_6) - eax_81 + 1
                                                else
                                                    var_a8_14 = 0
                                                
                                                sub_4d546f(arg1, var_a8_14)
                                            
                                            sub_4d546f(arg1, ebx_7)
                                            int32_t edi_28 = 0
                                            
                                            if (ebx_7 u> 0)
                                                do
                                                    sub_4d546f(arg1, *(var_64 + (edi_28 << 3)))
                                                    sub_4d546f(arg1, *(var_64 + (edi_28 << 3) + 4))
                                                    edi_28 += 1
                                                while (edi_28 u< ebx_7)
                                            
                                            sub_4d546f(arg1, var_44)
                                            int32_t edi_29 = 0
                                            
                                            if (var_44 u> 0)
                                                int32_t ebx_8 = var_60
                                                
                                                do
                                                    sub_4d546f(arg1, *(ebx_8 + (edi_29 << 3)))
                                                    sub_4d546f(arg1, *(ebx_8 + (edi_29 << 3) + 4))
                                                    edi_29 += 1
                                                while (edi_29 u< var_44)
                                            
                                            sub_4d546f(arg1, var_40)
                                            int32_t edi_30 = 0
                                            
                                            if (var_40 u> 0)
                                                int32_t ebx_9 = var_5c
                                                
                                                do
                                                    sub_4d546f(arg1, *(ebx_9 + (edi_30 << 3)))
                                                    sub_4d546f(arg1, *(ebx_9 + (edi_30 << 3) + 4))
                                                    edi_30 += 1
                                                while (edi_30 u< var_40)
                                            
                                            goto label_4c684c
                            else
                                while (true)
                                    void* eax_20 = *(arg1[5] + (edi_25 << 2))
                                    
                                    if (arg1[0x1e] == *(eax_20 + 4) && *(eax_20 + 8) == 0xffffffff)
                                        *(var_30 +
                                            ((*(eax_20 + 0x10) + (*(eax_20 + 0xc) << 2)) << 3)) =
                                            fconvert.d(fconvert.t(*(eax_20 + 0x20)))
                                    
                                    if (arg1[0x32] == 0x54580100)
                                        int32_t edx_14 = *(eax_20 + 4)
                                        
                                        if (arg1[0x20] == edx_14)
                                            if (*(eax_20 + 0xc) u> 1)
                                                sub_4a4100(arg1, nullptr, 0x1194, 
                                                    "too many arguments to target TX")
                                                break
                                                break
                                            
                                            uint32_t ecx_28 = zx.d((*(eax_20 + 0x6c)).b)
                                            
                                            if (ecx_28 == 2)
                                                *(eax_20 + 0xc) = 0
                                            else if (ecx_28 == 3)
                                                *(eax_20 + 0xc) = 1
                                        
                                        if (arg1[0x21] == edx_14 && *(eax_20 + 0xc) u> 0)
                                            sub_4a4100(arg1, nullptr, 0x1194, 
                                                "too many outputs to target TX")
                                            break
                                    
                                    edi_25 += 1
                                    
                                    if (edi_25 u>= arg1[2])
                                        goto label_4c62b6
                        
                        break
            else
                uint32_t ebx_4 = *(&var_84 + var_20_1) - *(&var_58 + var_20_1) + 1
                int32_t eax_7 = sub_745f3f(ebx_4)
                
                if (eax_7 != 0)
                    __builtin_memset(__builtin_memset(eax_7, 0, ebx_4 u>> 2 << 2), 0, ebx_4 & 3)
                    int32_t i_7 = 0
                    
                    if (arg1[2] u> 0)
                        int32_t edx_3 = *(&var_70 + var_20_1)
                        
                        do
                            void* eax_10 = *(arg1[5] + (i_7 << 2))
                            
                            if (edx_3 == *(eax_10 + 4))
                                (*(eax_10 + 0xc) - *(&var_58 + var_20_1))[eax_7] = 1
                            
                            i_7 += 1
                        while (i_7 u< arg1[2])
                    
                    char* i_8 = nullptr
                    int32_t var_10_1 = 0
                    
                    if (ebx_4 u> 0)
                        for (; i_8 u< ebx_4; i_8 = &i_8[1])
                            while (i_8[eax_7] != 0)
                            label_4c6149:
                                var_10_1 += 1
                            label_4c6155:
                                
                                if (i_8 u< ebx_4 && i_8[eax_7] != 0)
                                    i_8 = &i_8[1]
                                    goto label_4c6155
                                
                                i_8 = &i_8[1]
                                
                                if (i_8 u>= ebx_4)
                                    goto label_4c6165
                        
                        goto label_4c6149
                    
                label_4c6165:
                    int32_t* eax_15 = sub_745f3f(var_10_1 << 3)
                    *(&var_64 + var_20_1) = eax_15
                    
                    if (eax_15 != 0)
                        char* i_9 = nullptr
                        
                        if (ebx_4 u<= 0)
                        label_4c61c1:
                            j__free(eax_7)
                            *(&var_48 + var_20_1) = var_10_1
                            goto label_4c61ce
                        
                        for (; i_9 u< ebx_4; i_9 = &i_9[1])
                            while (i_9[eax_7] != 0)
                            label_4c6196:
                                *eax_15 = *(&var_58 + var_20_1) + i_9
                            label_4c61a7:
                                
                                if (i_9 u< ebx_4 && i_9[eax_7] != 0)
                                    i_9 = &i_9[1]
                                    goto label_4c61a7
                                
                                eax_15[1] = *(&var_58 + var_20_1) - *eax_15 + i_9
                                eax_15 = &eax_15[2]
                                i_9 = &i_9[1]
                                
                                if (i_9 u>= ebx_4)
                                    goto label_4c61c1
                        
                        goto label_4c6196
                    
                    j__free(eax_7)
            
        label_4c6283:
            result = 0x8007000e
            break

label_4c6bd3:
j__free(var_30)
j__free(var_64)
j__free(var_60)
j__free(var_5c)
return result

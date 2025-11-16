// 函数: sub_4a045d
// 地址: 0x4a045d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg2
int32_t esi = *edx
int32_t edi
int32_t var_48 = edi

if ((esi & 0xfff00000) != 0x50000000)
    return 

int32_t* eax_4 = *(*(arg1 + 0x14) + (*edx[4] << 2))
int16_t eax_7 = (*(*(*(arg1 + 0x10) + (eax_4[1] << 2)) + 4)).w

if ((eax_7.b & 1) == 0 || (eax_7:1.b & 0x10) != 0)
    return 

int32_t* i_4 = esi & 0xfffff
arg2 = i_4
int32_t var_18_1 = 0xe

if (i_4 u> 0)
    int32_t* ecx_2 = edx[2]
    int32_t* var_14_1 = &ecx_2[i_4]
    int32_t* i_3 = i_4
    int32_t* i
    
    do
        int32_t esi_2 = *ecx_2
        int32_t eax_9 = *(arg1 + 0x14)
        int32_t esi_4
        int32_t* edi_1
        
        if (arg3 != 0)
            edi_1 = *(eax_9 + (*(*(eax_9 + (esi_2 << 2)) + 0x30) << 2))
            esi_4 = *(*(eax_9 + (*var_14_1 << 2)) + 0x30)
        else
            edi_1 = *(eax_9 + (esi_2 << 2))
            esi_4 = *var_14_1
        
        char* esi_10 = *(eax_9 + (esi_4 << 2))
        int32_t eax_10 = *edi_1
        int32_t var_c_1 = 0
        int32_t temp1_1 = eax_10 & 4
        char var_8_1 = eax_10.b
        
        if (temp1_1 != 0 && (*esi_10 & 4) != 0)
            var_c_1 = 4
        else if ((var_8_1 & 8) == 0)
            if (edi_1 == esi_10)
                var_c_1 = 4
        else if ((*esi_10 & 8) != 0 || edi_1 == esi_10)
            var_c_1 = 4
        
        if (temp1_1 != 0 && (*esi_10 & 8) != 0)
            var_c_1 |= 8
        else if ((var_8_1 & 8) != 0 && (*esi_10 & 4) != 0)
            var_c_1 |= 8
        
        if ((var_8_1 & 2) != 0 && (*esi_10 & 2) != 0)
            var_c_1 |= 2
        
        var_18_1 &= var_c_1
        var_14_1 = &var_14_1[1]
        ecx_2 = &ecx_2[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

long double x87_r7_1 = fconvert.t(0.0)
*eax_4 |= var_18_1

if (arg3 == 0)
label_4a0725:
    int32_t var_28_2 = 0
    int32_t var_c_3 = 0
    int32_t var_10_4 = 0
    int32_t var_24_2 = 0
    
    if (arg2 u<= 0)
    label_4a094e:
        
        if (arg2 u<= 1 || (arg2 == 2 && (*(arg1 + 0x6c) & 0x20) == 0))
            int32_t esi_20 = 0
            int32_t var_c_5 = 0
            
            if (arg2 u> 0)
                int32_t edi_24 = arg2 << 2
                int32_t var_2c_3 = edi_24
                
                do
                    void* ecx_29
                    void* esi_22
                    
                    if (arg3 != 0)
                        int32_t ecx_30 = edx[2]
                        int32_t eax_64 = *(arg1 + 0x14)
                        esi_22 = *(eax_64
                            + (*(*(eax_64 + (*(ecx_30 + (esi_20 << 2)) << 2)) + 0x30) << 2))
                        ecx_29 = *(eax_64 + (*(*(eax_64 + (*(edi_24 + ecx_30) << 2)) + 0x30) << 2))
                    else
                        int32_t eax_62 = edx[2]
                        int32_t ecx_28 = *(arg1 + 0x14)
                        esi_22 = *(ecx_28 + (*(eax_62 + (esi_20 << 2)) << 2))
                        ecx_29 = *(ecx_28 + (*(edi_24 + eax_62) << 2))
                    
                    int32_t edi_25 = *(arg1 + 0x10)
                    bool p_10
                    
                    if ((*(*(edi_25 + (*(esi_22 + 4) << 2)) + 5) & 1) != 0
                            && *(esi_22 + 8) == 0xffffffff)
                        long double x87_r7_3 = fconvert.t(*(esi_22 + 0x20))
                        long double x87_r6_14 = fconvert.t(1.0)
                        x87_r6_14 - x87_r7_3
                        void* eax_66
                        eax_66.w = (x87_r6_14 < x87_r7_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_14, x87_r7_3) ? 1 : 0) << 0xa
                            | (x87_r6_14 == x87_r7_3 ? 1 : 0) << 0xe
                        p_10 = unimplemented  {test ah, 0x44}
                    
                    if ((*(*(edi_25 + (*(esi_22 + 4) << 2)) + 5) & 1) == 0
                            || *(esi_22 + 8) != 0xffffffff || p_10)
                        if ((*(*(edi_25 + (*(ecx_29 + 4) << 2)) + 5) & 1) == 0)
                            break
                        
                        if (*(ecx_29 + 8) != 0xffffffff)
                            break
                        
                        long double x87_r7_4 = fconvert.t(*(ecx_29 + 0x20))
                        long double x87_r6_15 = fconvert.t(1.0)
                        x87_r6_15 - x87_r7_4
                        void* eax_68
                        eax_68.w = (x87_r6_15 < x87_r7_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_15, x87_r7_4) ? 1 : 0) << 0xa
                            | (x87_r6_15 == x87_r7_4 ? 1 : 0) << 0xe
                        bool p_11 = unimplemented  {test ah, 0x44}
                        
                        if (p_11)
                            break
                    
                    esi_20 = var_c_5 + 1
                    edi_24 = var_2c_3 + 4
                    var_c_5 = esi_20
                    var_2c_3 = edi_24
                while (esi_20 u< arg2)
            
            if (var_c_5 == arg2)
                int32_t eax_69 = 0
                int32_t var_c_6 = 0
                
                if (arg2 u> 0)
                    int32_t var_28_4 = arg2 << 2
                    
                    do
                        int32_t* ecx_36 = edx[2]
                        void* esi_27 = &ecx_36[eax_69]
                        void* eax_71
                        
                        if (arg3 != 0)
                            int32_t eax_72 = *(arg1 + 0x14)
                            eax_71 = *(eax_72 + (*(*(eax_72 + (*esi_27 << 2)) + 0x30) << 2))
                        else
                            eax_71 = *(*(arg1 + 0x14) + (*esi_27 << 2))
                        
                        if ((*(*(*(arg1 + 0x10) + (*(eax_71 + 4) << 2)) + 5) & 1) != 0
                                && *(eax_71 + 8) == 0xffffffff)
                            long double x87_r7_5 = fconvert.t(*(eax_71 + 0x20))
                            long double x87_r6_16 = fconvert.t(1.0)
                            x87_r6_16 - x87_r7_5
                            void* eax_75
                            eax_75.w = (x87_r6_16 < x87_r7_5 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_16, x87_r7_5) ? 1 : 0) << 0xa
                                | (x87_r6_16 == x87_r7_5 ? 1 : 0) << 0xe
                            bool p_12 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_12))
                                *esi_27 = *(ecx_36 + var_28_4)
                        
                        var_28_4 += 4
                        eax_69 = var_c_6 + 1
                        var_c_6 = eax_69
                    while (eax_69 u< arg2)
                
                if (arg2 != 2)
                    *edx = 0x10000001
                    edx[1] = 1
                else
                    *edx = 0x20400001
                    edx[1] = 2
                
                var_24_2 = 1
        
        int32_t eax_79
        eax_79.b = var_24_2 == 0
    else
        int32_t* eax_33 = edx[2]
        int32_t* var_14_3 = eax_33
        int32_t* esi_12 = &eax_33[arg2]
        int32_t* i_2 = arg2
        int32_t* i_1
        
        do
            int32_t eax_34 = *(arg1 + 0x14)
            int32_t edi_9 = *esi_12
            void* ecx_14 = *(eax_34 + (*var_14_3 << 2))
            
            if (arg3 != 0)
                ecx_14 = *(eax_34 + (*(ecx_14 + 0x30) << 2))
                edi_9 = *(*(eax_34 + (edi_9 << 2)) + 0x30)
            
            void* eax_35 = *(eax_34 + (edi_9 << 2))
            int32_t edi_11 = *(arg1 + 0x10)
            bool p_6
            
            if ((*(*(edi_11 + (*(ecx_14 + 4) << 2)) + 5) & 1) != 0 && *(ecx_14 + 8) == 0xffffffff)
                long double x87_r6_10 = fconvert.t(*(ecx_14 + 0x20))
                x87_r7_1 - x87_r6_10
                void* eax_37
                eax_37.w = (x87_r7_1 < x87_r6_10 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, x87_r6_10) ? 1 : 0) << 0xa
                    | (x87_r7_1 == x87_r6_10 ? 1 : 0) << 0xe | 0x3800
                p_6 = unimplemented  {test ah, 0x44}
            
            bool p_7
            
            if (((*(*(edi_11 + (*(ecx_14 + 4) << 2)) + 5) & 1) == 0 || *(ecx_14 + 8) != 0xffffffff
                    || p_6) && (*(*(edi_11 + (*(eax_35 + 4) << 2)) + 5) & 1) != 0
                    && *(eax_35 + 8) == 0xffffffff)
                long double x87_r6_11 = fconvert.t(*(eax_35 + 0x20))
                x87_r7_1 - x87_r6_11
                void* eax_38
                eax_38.w = (x87_r7_1 < x87_r6_11 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, x87_r6_11) ? 1 : 0) << 0xa
                    | (x87_r7_1 == x87_r6_11 ? 1 : 0) << 0xe | 0x3800
                p_7 = unimplemented  {test ah, 0x44}
            
            if (((*(*(edi_11 + (*(ecx_14 + 4) << 2)) + 5) & 1) == 0 || *(ecx_14 + 8) != 0xffffffff
                    || p_6) && ((*(*(edi_11 + (*(eax_35 + 4) << 2)) + 5) & 1) == 0
                    || *(eax_35 + 8) != 0xffffffff || p_7))
                var_c_3 += 1
                var_10_4 = 0
            else
                var_28_2 += 1
                var_10_4 += 1
            
            var_14_3 = &var_14_3[1]
            esi_12 = &esi_12[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        
        if (var_28_2 == 0 || (var_c_3 == 2 && (*(arg1 + 0x6c) & 0x20) == 0)
                || (var_c_3 != 1 && var_28_2 != var_10_4 && (*(arg1 + 0x6c) & 6) != 0))
            goto label_4a094e
        
        int32_t eax_40 = 0
        
        if (var_c_3 != 0)
            int32_t* var_c_4 = nullptr
            int32_t ecx_19 = arg2 << 2
            int32_t var_2c_2 = 0
            int32_t var_28_3 = ecx_19
            int32_t var_14_4 = ecx_19
            
            do
                int32_t ecx_20 = edx[2]
                int32_t esi_13 = *(ecx_20 + (eax_40 << 2))
                int32_t eax_41 = *(arg1 + 0x14)
                void* edi_12 = *(eax_41 + (esi_13 << 2))
                void* var_10_5
                int32_t edi_14
                
                if (arg3 != 0)
                    var_10_5 = *(eax_41 + (*(edi_12 + 0x30) << 2))
                    edi_14 = *(*(eax_41 + (*(var_14_4 + ecx_20) << 2)) + 0x30)
                else
                    var_10_5 = edi_12
                    edi_14 = *(var_14_4 + ecx_20)
                
                void* eax_42 = *(eax_41 + (edi_14 << 2))
                int32_t edi_20 = *(arg1 + 0x10)
                
                if ((*(*(edi_20 + (*(var_10_5 + 4) << 2)) + 5) & 1) == 0
                    || *(var_10_5 + 8) != 0xffffffff)
                label_4a0893:
                    bool p_9
                    
                    if ((*(*(edi_20 + (*(eax_42 + 4) << 2)) + 5) & 1) != 0
                            && *(eax_42 + 8) == 0xffffffff)
                        long double x87_r6_13 = fconvert.t(*(eax_42 + 0x20))
                        x87_r7_1 - x87_r6_13
                        void* eax_50
                        eax_50.w = (x87_r7_1 < x87_r6_13 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r6_13) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r6_13 ? 1 : 0) << 0xe | 0x3800
                        p_9 = unimplemented  {test ah, 0x44}
                    
                    if ((*(*(edi_20 + (*(eax_42 + 4) << 2)) + 5) & 1) == 0
                            || *(eax_42 + 8) != 0xffffffff || p_9)
                        int32_t* eax_51 = var_c_4
                        var_c_4 += 1
                        *(ecx_20 + (eax_51 << 2)) = esi_13
                        int32_t eax_52 = edx[2]
                        int32_t esi_14 = var_28_3
                        var_28_3 += 4
                        *(esi_14 + eax_52) = *(var_14_4 + eax_52)
                else
                    long double x87_r6_12 = fconvert.t(*(var_10_5 + 0x20))
                    x87_r7_1 - x87_r6_12
                    void* eax_46
                    eax_46.w = (x87_r7_1 < x87_r6_12 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, x87_r6_12) ? 1 : 0) << 0xa
                        | (x87_r7_1 == x87_r6_12 ? 1 : 0) << 0xe | 0x3800
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        goto label_4a0893
                
                var_14_4 += 4
                eax_40 = var_2c_2 + 1
                var_2c_2 = eax_40
            while (eax_40 u< arg2)
            
            int32_t eax_54 = edx[2]
            int32_t ecx_24 = var_c_4 << 2
            int32_t esi_18
            int32_t edi_22
            edi_22, esi_18 =
                __builtin_memcpy(eax_54 + ecx_24, (arg2 << 2) + eax_54, ecx_24 u>> 2 << 2)
            __builtin_memcpy(edi_22, esi_18, ecx_24 & 3)
            int32_t eax_56
            
            if (var_c_4 != 1)
                eax_56 = (var_c_4 & 0xfffff) | 0x50000000
            else
                eax_56 = 0x20500001
            
            *edx = eax_56
            edx[1] = var_c_4 * 2
            edx[3] = 1
            int32_t eax_60
            eax_60.b = arg2 != var_c_4
            arg2 = var_c_4
            var_24_2 = eax_60
            goto label_4a094e
        
        *edx = 0
else
    int32_t var_24_1 = 0xffffffff
    double var_3c_1 = fconvert.d(float.t(0))
    int32_t var_c_2 = 0
    int32_t var_10_3 = 0
    int32_t var_20_1 = 0
    
    if (arg2 u<= 0)
    label_4a06eb:
        
        if (arg2 != var_c_2)
            goto label_4a0725
        
        int32_t var_4c_1 = var_c_2
        int32_t var_50_1 = var_c_2
        var_50_1.q = fconvert.d(fconvert.t(var_3c_1))
        *edx = 0
        int32_t eax_31 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_50_1)
        eax_4[0xc] = eax_31
        *(*(*(arg1 + 0x14) + (eax_31 << 2)) + 0x30) = eax_31
    else
        int32_t* eax_13 = edx[2]
        int32_t ecx_4 = *(arg1 + 0x14)
        int32_t esi_11 = *(arg1 + 0x10)
        int32_t* var_1c_1 = eax_13
        int32_t* eax_14 = &eax_13[arg2]
        int32_t* var_2c_1 = eax_14
        
        do
            int32_t eax_17 = *(*(ecx_4 + (*eax_14 << 2)) + 0x30)
            int32_t edi_6 = *(*(ecx_4 + (*var_1c_1 << 2)) + 0x30)
            void* eax_18 = *(ecx_4 + (eax_17 << 2))
            void* edi_7 = *(ecx_4 + (edi_6 << 2))
            int32_t var_18_2
            
            if ((*(*(esi_11 + (*(edi_7 + 4) << 2)) + 5) & 1) == 0 || *(edi_7 + 8) != 0xffffffff)
                var_18_2 = 0
            else
                var_18_2 = 1
            
            int32_t var_14_2
            
            if ((*(*(esi_11 + (*(eax_18 + 4) << 2)) + 5) & 1) == 0 || *(eax_18 + 8) != 0xffffffff)
                var_14_2 = 0
            else
                var_14_2 = 1
            
            void* eax_23
            
            if (var_18_2 == 0)
            label_4a062b:
                
                if (var_14_2 == 0)
                label_4a0642:
                    
                    if (var_18_2 == 0)
                        if (var_14_2 == 0)
                            break
                        
                        long double x87_r6_8 = fconvert.t(*(eax_18 + 0x20))
                        long double x87_r5_4 = fconvert.t(1.0)
                        x87_r5_4 - x87_r6_8
                        void* eax_26
                        eax_26.w = (x87_r5_4 < x87_r6_8 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_4, x87_r6_8) ? 1 : 0) << 0xa
                            | (x87_r5_4 == x87_r6_8 ? 1 : 0) << 0xe | 0x3800
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            break
                        
                        var_10_3 += 1
                        var_24_1 = edi_6
                    else if (var_14_2 == 0)
                        long double x87_r6_7 = fconvert.t(*(edi_7 + 0x20))
                        long double x87_r5_3 = fconvert.t(1.0)
                        x87_r5_3 - x87_r6_7
                        eax_23.w = (x87_r5_3 < x87_r6_7 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_3, x87_r6_7) ? 1 : 0) << 0xa
                            | (x87_r5_3 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800
                        bool p_3 = unimplemented  {test ah, 0x44}
                        
                        if (p_3)
                            break
                        
                        var_10_3 += 1
                        var_24_1 = eax_17
                    else
                        var_3c_1 = fconvert.d(
                            fconvert.t(*(eax_18 + 0x20)) * fconvert.t(*(edi_7 + 0x20))
                            + fconvert.t(var_3c_1))
                        var_c_2 += 1
                else
                    long double x87_r6_3 = fconvert.t(*(eax_18 + 0x20))
                    x87_r7_1 - x87_r6_3
                    eax_23.w = (x87_r7_1 < x87_r6_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, x87_r6_3) ? 1 : 0) << 0xa
                        | (x87_r7_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        goto label_4a0642
                    
                    var_c_2 += 1
            else
                long double x87_r6_2 = fconvert.t(*(edi_7 + 0x20))
                x87_r7_1 - x87_r6_2
                eax_23.w = (x87_r7_1 < x87_r6_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, x87_r6_2) ? 1 : 0) << 0xa
                    | (x87_r7_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    goto label_4a062b
                
                var_c_2 += 1
            var_20_1 += 1
            var_1c_1 = &var_1c_1[1]
            eax_14 = &var_2c_1[1]
            var_2c_1 = eax_14
        while (var_20_1 u< arg2)
        
        if (var_10_3 != 1 || arg2 - 1 != var_c_2)
            goto label_4a06eb
        
        long double x87_r6_9 = fconvert.t(var_3c_1)
        x87_r7_1 - x87_r6_9
        void* eax_29
        eax_29.w = (x87_r7_1 < x87_r6_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, x87_r6_9) ? 1 : 0) << 0xa
            | (x87_r7_1 == x87_r6_9 ? 1 : 0) << 0xe | 0x3800
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_4a06eb
        
        *edx = 0
        eax_4[0xc] = var_24_1

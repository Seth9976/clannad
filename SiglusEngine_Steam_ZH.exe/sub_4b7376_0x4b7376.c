// 函数: sub_4b7376
// 地址: 0x4b7376
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_20 = 0
int32_t var_14 = 0
int32_t* eax = *(arg1 + 0x100)
int32_t ecx = *(arg1 + 0x14)
int32_t* eax_1 = eax[2]
int32_t i_3 = *eax & 0xfffff
int32_t edi
int32_t var_a0 = edi
void* edi_2 = *(ecx + (*eax_1 << 2))
void* edx = &eax_1[i_3]
void* ecx_1 = *(ecx + (*edx << 2))
int32_t edx_2 = *(edi_2 + 4)
int32_t edi_3 = *(arg1 + 0x10)
int32_t ecx_3 = *(arg1 + 0x88)
int32_t* var_18_1
long double x87_r7_1

if (edx_2 != ecx_3 || (*(*(edi_3 + (*(ecx_1 + 4) << 2)) + 5) & 1) == 0
        || (**(arg1 + 0x100) & 0xfff00000) != 0x20500000)
    int32_t edx_14 = *(ecx_1 + 4)
    
    if (edx_14 == ecx_3 && (*(*(edi_3 + (edx_2 << 2)) + 5) & 1) != 0
            && (**(arg1 + 0x100) & 0xfff00000) == 0x20500000)
        var_18_1 = edx
        goto label_4b7401
    
    if (*(edi_2 + 4) == ecx_3 && edx_14 == ecx_3 && (**(arg1 + 0x100) & 0xfff00000) == 0x20400000)
        var_14 = 1
        
        if (i_3 u> 0)
            int32_t* ecx_11 = eax_1
            int32_t i_2 = i_3
            int32_t i
            
            do
                if (*ecx_11 != *(edx - eax_1 + ecx_11))
                    var_14 = 0
                
                ecx_11 = &ecx_11[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int32_t ecx_13 = *(edi_2 + 0x3c)
        
        if (ecx_13 == *(ecx_1 + 0x3c))
            long double x87_r7_2
            
            if (ecx_13 == 0x80000)
                x87_r7_2 = fconvert.t(-1f)
            label_4b74e4:
                var_18_1 = eax_1
                
                if (var_14 != 0)
                    int32_t* var_28
                    eax_1 = var_28
                    x87_r7_1 = x87_r7_2 + x87_r7_2
                    goto label_4b7404
            else if ((0x80000 & ecx_13) == 0)
                x87_r7_2 = float.t(1)
                goto label_4b74e4
    
    return 

var_18_1 = eax_1
eax_1 = edx
label_4b7401:
x87_r7_1 = fconvert.t(*(*(*(arg1 + 0x14) + (*eax_1 << 2)) + 0x20))
label_4b7404:
int32_t var_8_1 = 0
float var_24_1 = fconvert.s(x87_r7_1)
int32_t var_54[0x3]

if (i_3 u> 0)
    int32_t ecx_6 = *(arg1 + 0x14)
    int32_t* edx_11 = var_18_1 - eax_1
    int32_t* var_c_1 = eax_1
    
    do
        eax_1 = *(ecx_6 + (*(edx_11 + var_c_1) << 2))
        int32_t edi_4 = 0
        int32_t* var_10_1
        
        if (var_14 == 0)
            var_10_1 = *(ecx_6 + (*var_c_1 << 2))
        else
            var_10_1 = nullptr
        
        int32_t edx_21 = *(arg1 + 0xfc)
        
        if (eax_1[0x16] != edx_21)
            return 
        
        if (eax_1[0x15] != edx_21)
            return 
        
        if ((eax_1[0xf] & 0x1ffe00) != 0)
            return 
        
        if (var_20 u> 0)
            while (eax_1[0x12] != var_54[edi_4])
                edi_4 += 1
                
                if (edi_4 u>= var_20)
                    break
        
        if (edi_4 == var_20)
            int32_t edx_23 = var_20
            var_20 += 1
            var_54[edx_23] = eax_1[0x12]
        
        if (var_14 == 0)
            long double x87_r7_3 = fconvert.t(*(var_10_1 + 0x20))
            long double x87_r5_1 = fconvert.t(var_24_1)
            x87_r5_1 - x87_r7_3
            eax_1.w = (x87_r5_1 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                return 
        
        var_8_1 += 1
        var_c_1 = &var_c_1[1]
    while (var_8_1 u< i_3)

long double x87_r7_5 = fabs(fconvert.t(var_24_1))
long double x87_r6_3 = fabs(x87_r7_5)
long double x87_r5_2 = fconvert.t(2.0)
x87_r5_2 - x87_r6_3
eax_1.w = (x87_r5_2 < x87_r6_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_2, x87_r6_3) ? 1 : 0) << 0xa
    | (x87_r5_2 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    eax_1 = 0x400

if (p_2 || (*(arg1 + 0x6c) & 0x400) == 0)
    long double x87_r6_4 = fconvert.t(4.0)
    x87_r7_5 - x87_r6_4
    eax_1.w = (x87_r7_5 < x87_r6_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_5, x87_r6_4) ? 1 : 0) << 0xa
        | (x87_r7_5 == x87_r6_4 ? 1 : 0) << 0xe | 0x3800
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        eax_1 = 0x800
    
    if (not(p_3) && (*(arg1 + 0x6c) & 0x800) != 0)
        goto label_4b762b
    
    long double x87_r6_5 = fconvert.t(8.0)
    x87_r7_5 - x87_r6_5
    eax_1.w = (x87_r7_5 < x87_r6_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_5, x87_r6_5) ? 1 : 0) << 0xa
        | (x87_r7_5 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (not(p_4))
        eax_1 = 0x1000
    
    if (not(p_4) && (*(arg1 + 0x6c) & 0x1000) != 0)
        goto label_4b762b
    
    long double x87_r6_6 = fconvert.t(0.5)
    x87_r7_5 - x87_r6_6
    eax_1.w = (x87_r7_5 < x87_r6_6 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_5, x87_r6_6) ? 1 : 0) << 0xa
        | (x87_r7_5 == x87_r6_6 ? 1 : 0) << 0xe | 0x3800
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (not(p_5))
        eax_1 = 0x2000
    
    if (not(p_5) && (*(arg1 + 0x6c) & 0x2000) != 0)
        goto label_4b762b
    
    long double x87_r6_7 = fconvert.t(0.25)
    x87_r7_5 - x87_r6_7
    eax_1.w = (x87_r7_5 < x87_r6_7 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_5, x87_r6_7) ? 1 : 0) << 0xa
        | (x87_r7_5 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (not(p_6))
        eax_1 = 0x4000
    
    if (not(p_6) && (*(arg1 + 0x6c) & 0x4000) != 0)
        goto label_4b762b
    
    long double x87_r6_8 = fconvert.t(0.125)
    x87_r7_5 - x87_r6_8
    eax_1.w = (x87_r7_5 < x87_r6_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_5, x87_r6_8) ? 1 : 0) << 0xa
        | (x87_r7_5 == x87_r6_8 ? 1 : 0) << 0xe | 0x3800
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (not(p_7))
        eax_1 = 0x8000
        
        if ((*(arg1 + 0x6c) & 0x8000) != 0)
            goto label_4b762b
    
    return 

label_4b762b:
long double x87_r7_6 = fconvert.t(var_24_1)
int32_t* var_14_1 = eax_1
long double temp1_1 = fconvert.t(0f)
x87_r7_6 - temp1_1
eax_1.w = (x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
    | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe
bool p_8 = unimplemented  {test ah, 0x5}

if (not(p_8))
    var_14_1:2.b |= 8

int32_t var_44 = 0
void var_40
void* edi_12 = &var_40
*edi_12 = 0
void* edi_13 = edi_12 + 4
*edi_13 = 0
*(edi_13 + 4) = 0
int32_t var_c_2 = 0
int32_t var_94[0x10]

if (var_20 u> 0)
    int32_t (* var_1c_2)[0x10] = &var_94
    int32_t var_10_2 = 0
    
    do
        int32_t* edx_24 = *(*(arg1 + 0x18) + (var_54[var_c_2] << 2))
        int32_t eax_7 = *edx_24
        
        if ((eax_7 & 0xf0000000) == 0x60000000)
            return 
        
        if ((eax_7 & 0xff000000) == 0x72000000)
            return 
        
        int32_t var_30_1 = 0
        int32_t var_8_2 = 0
        int32_t ecx_17 = edx_24[3]
        *var_1c_2 = 0xffffffff
        int32_t* edi_17 = &(*var_1c_2)[1]
        *edi_17 = 0xffffffff
        void* edi_18 = &edi_17[1]
        *edi_18 = 0xffffffff
        *(edi_18 + 4) = 0xffffffff
        
        if (i_3 u> 0)
            do
                int32_t var_2c_1 = 0
                
                if (ecx_17 u> 0)
                    int32_t eax_10 = var_18_1[var_8_2]
                    int32_t* var_34_1 = edx_24[4]
                    int32_t __saved_ebp
                    void* edi_22 = &__saved_ebp + var_10_2 - 0x90
                    
                    do
                        if (*var_34_1 == eax_10)
                            (&__saved_ebp)[var_c_2 - 0x10] += 1
                            int32_t ecx_23 = *(*(arg1 + 0x100) + 0x10)
                            *edi_22 = var_8_2
                            
                            if ((*(*(*(arg1 + 0x14) + (*(ecx_23 + (var_8_2 << 2)) << 2)) + 0x3d)
                                    & 2) != 0)
                                long double x87_r7_7 = fconvert.t(var_24_1)
                                long double temp3_1 = fconvert.t(0f)
                                x87_r7_7 - temp3_1
                                void* eax_15
                                eax_15.w = (x87_r7_7 < temp3_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe
                                bool p_9 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_9))
                                    return 
                            
                            var_30_1 += 1
                        
                        var_2c_1 += 1
                        ecx_17 = edx_24[3]
                        var_34_1 = &var_34_1[1]
                        edi_22 += 4
                    while (var_2c_1 u< ecx_17)
                
                var_8_2 += 1
            while (var_8_2 u< i_3)
        
        if (var_30_1 != ecx_17)
            return 
        
        var_c_2 += 1
        var_1c_2 = &(*var_1c_2)[4]
        var_10_2 += 0x10
    while (var_c_2 u< var_20)

int32_t edx_25 = 0
int32_t var_10_3 = 0

if (var_20 u> 0)
    int32_t (* var_1c_3)[0x10] = &var_94
    
    do
        int32_t edi_23 = (&var_44)[edx_25]
        int32_t eax_18 = var_54[edx_25] << 2
        int32_t* esi_1 = *(eax_18 + *(arg1 + 0x18))
        int32_t* var_18_2 = esi_1
        
        if (edi_23 != esi_1[3])
            void* eax_19 = sub_49ec23(0x74)
            int32_t* var_8_3
            
            if (eax_19 == 0)
                var_8_3 = nullptr
            else
                var_8_3 = sub_49e789(eax_19)
            
            if (var_8_3 == 0)
                return 
            
            if (sub_49ec6e(var_8_3, *esi_1, esi_1[1], edi_23, 0) s< 0)
                sub_46cb59(var_8_3, 1)
                return 
            
            if (sub_49e7bf(var_8_3, esi_1) s< 0)
                sub_46cb59(var_8_3, 1)
                return 
            
            int32_t ecx_30 = var_18_2[1] << 2
            int32_t esi_4
            int32_t edi_26
            edi_26, esi_4 = __builtin_memcpy(var_8_3[2], var_18_2[2], ecx_30 u>> 2 << 2)
            __builtin_memcpy(edi_26, esi_4, ecx_30 & 3)
            sub_46cb59(var_18_2, 1)
            *(eax_18 + *(arg1 + 0x18)) = var_8_3
            edx_25 = var_10_3
            var_18_2 = var_8_3
            esi_1 = var_8_3
        
        int32_t edi_27 = 0
        int32_t var_8_4 = 0
        
        if ((&var_44)[edx_25] u> 0)
            int32_t (* var_10_4)[0x10] = var_1c_3
            
            while (true)
                int32_t eax_26 = edi_27
                
                if (edi_27 u< 4)
                    int32_t (* ecx_36)[0x10] = var_10_4
                    
                    while (*ecx_36 == 0xffffffff)
                        eax_26 += 1
                        ecx_36 = &(*ecx_36)[1]
                        
                        if (eax_26 u>= 4)
                            break
                
                int32_t i_1 = 0
                int32_t ecx_38 = var_94[eax_26 + (edx_25 << 2)] << 2
                *(esi_1[4] + (edi_27 << 2)) = *(ecx_38 + *(*(arg1 + 0x100) + 0x10))
                void* eax_35 = *(*(arg1 + 0x14) + (*(ecx_38 + *(*(arg1 + 0x100) + 0x10)) << 2))
                *(eax_35 + 0x3c) |= var_14_1
                
                if (*(arg1 + 8) u> 0)
                    do
                        void* esi_9 = *(*(arg1 + 0x14) + (i_1 << 2))
                        
                        if (*(esi_9 + 0x38) == *(ecx_38 + *(*(arg1 + 0x100) + 0x10)))
                            long double x87_r7_8 = fconvert.t(var_24_1)
                            long double temp2_1 = fconvert.t(0f)
                            x87_r7_8 - temp2_1
                            *(esi_9 + 0x3c) |= var_14_1 & 0xfff7ffff
                            int32_t edi_29 = *(esi_9 + 0x3c)
                            void* eax_40
                            eax_40.w = (x87_r7_8 < temp2_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe
                            bool p_10 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_10))
                                int32_t edi_30
                                
                                if ((0x80000 & edi_29) == 0)
                                    edi_30 = edi_29 | 0x80000
                                else
                                    edi_30 = edi_29 & 0xfff7ffff
                                
                                *(esi_9 + 0x3c) = edi_30
                        
                        i_1 += 1
                    while (i_1 u< *(arg1 + 8))
                    
                    edi_27 = var_8_4
                
                var_10_4 = &(*var_10_4)[1]
                edi_27 += 1
                var_8_4 = edi_27
                
                if (edi_27 u>= (&var_44)[edx_25])
                    break
                
                esi_1 = var_18_2
        
        var_1c_3 = &(*var_1c_3)[4]
        edx_25 += 1
        var_10_3 = edx_25
    while (edx_25 u< var_20)

**(arg1 + 0x100) = 0

// 函数: sub_459656
// 地址: 0x459656
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 

if (*(arg1 + 0xac) != 0)
    if (*(arg1 + 0x64) == 0 && (*(arg1 + 0xb0) & 8) == 0)
        int32_t eax_2 = *(arg1 + 0xcc)
        int32_t ecx_3 = eax_2 * 0x60 + *(arg1 + 0xc0)
        j_sub_4018e8(ecx_3, 0x18, ecx_3, 0x18, *(arg1 + 0x70), (*(arg1 + 0xc4) - eax_2) << 2)
    
    *(arg1 + 0xcc) = *(arg1 + 0xc4)

long double x87_r7_1 = fconvert.t(1f)
int32_t edi
int32_t var_10_2 = edi
__builtin_memcpy(*(arg1 + 0x70), arg2, 0x40)
float* ecx_4 = *(arg1 + 0x70)
long double x87_r6_1 = fconvert.t(*ecx_4)
x87_r6_1 - x87_r7_1
int32_t eax
eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
bool p_1 = unimplemented  {test ah, 0x44}
int32_t eax_3

if (p_1)
    eax_3 = 0
else
    long double x87_r7_2 = fconvert.t(0f)
    long double x87_r5_1 = fconvert.t(ecx_4[1])
    x87_r5_1 - x87_r7_2
    eax.w = (x87_r5_1 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        eax_3 = 0
    else
        long double x87_r5_2 = fconvert.t(ecx_4[2])
        x87_r5_2 - x87_r7_2
        eax.w = (x87_r5_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            eax_3 = 0
        else
            long double x87_r5_3 = fconvert.t(ecx_4[3])
            x87_r5_3 - x87_r7_2
            eax.w = (x87_r5_3 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_3, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r5_3 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                eax_3 = 0
            else
                long double x87_r5_4 = fconvert.t(ecx_4[4])
                x87_r5_4 - x87_r7_2
                eax.w = (x87_r5_4 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_4, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r5_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                bool p_5 = unimplemented  {test ah, 0x44}
                
                if (p_5)
                    eax_3 = 0
                else
                    long double x87_r6_6 = fconvert.t(1f)
                    long double x87_r5_5 = fconvert.t(ecx_4[5])
                    x87_r5_5 - x87_r6_6
                    eax.w = (x87_r5_5 < x87_r6_6 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_5, x87_r6_6) ? 1 : 0) << 0xa
                        | (x87_r5_5 == x87_r6_6 ? 1 : 0) << 0xe | 0x3800
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        eax_3 = 0
                    else
                        long double x87_r5_6 = fconvert.t(ecx_4[6])
                        x87_r5_6 - x87_r7_2
                        eax.w = (x87_r5_6 < x87_r7_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_6, x87_r7_2) ? 1 : 0) << 0xa
                            | (x87_r5_6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                        bool p_7 = unimplemented  {test ah, 0x44}
                        
                        if (p_7)
                            eax_3 = 0
                        else
                            long double x87_r5_7 = fconvert.t(ecx_4[7])
                            x87_r5_7 - x87_r7_2
                            eax.w = (x87_r5_7 < x87_r7_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r5_7, x87_r7_2) ? 1 : 0) << 0xa
                                | (x87_r5_7 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                            bool p_8 = unimplemented  {test ah, 0x44}
                            
                            if (p_8)
                                eax_3 = 0
                            else
                                long double x87_r5_8 = fconvert.t(ecx_4[8])
                                x87_r5_8 - x87_r7_2
                                eax.w = (x87_r5_8 < x87_r7_2 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r5_8, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r5_8 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                                bool p_9 = unimplemented  {test ah, 0x44}
                                
                                if (p_9)
                                    eax_3 = 0
                                else
                                    long double x87_r5_9 = fconvert.t(ecx_4[9])
                                    x87_r5_9 - x87_r7_2
                                    eax.w = (x87_r5_9 < x87_r7_2 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r5_9, x87_r7_2) ? 1 : 0) << 0xa
                                        | (x87_r5_9 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                                    bool p_10 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_10)
                                        eax_3 = 0
                                    else
                                        long double x87_r6_11 = fconvert.t(1f)
                                        long double x87_r5_10 = fconvert.t(ecx_4[0xa])
                                        x87_r5_10 - x87_r6_11
                                        eax.w = (x87_r5_10 < x87_r6_11 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r5_10, x87_r6_11) ? 1 : 0) << 0xa
                                            | (x87_r5_10 == x87_r6_11 ? 1 : 0) << 0xe | 0x3800
                                        bool p_11 = unimplemented  {test ah, 0x44}
                                        
                                        if (p_11)
                                            eax_3 = 0
                                        else
                                            long double x87_r5_11 = fconvert.t(ecx_4[0xb])
                                            x87_r5_11 - x87_r7_2
                                            eax.w = (x87_r5_11 < x87_r7_2 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r5_11, x87_r7_2) ? 1 : 0)
                                                << 0xa | (x87_r5_11 == x87_r7_2 ? 1 : 0) << 0xe
                                                | 0x3800
                                            bool p_12 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_12)
                                                eax_3 = 0
                                            else
                                                long double x87_r5_12 = fconvert.t(ecx_4[0xc])
                                                x87_r5_12 - x87_r7_2
                                                eax.w = (x87_r5_12 < x87_r7_2 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r5_12, x87_r7_2) ? 1 : 0)
                                                    << 0xa | (x87_r5_12 == x87_r7_2 ? 1 : 0) << 0xe
                                                    | 0x3800
                                                bool p_13 = unimplemented  {test ah, 0x44}
                                                
                                                if (p_13)
                                                    eax_3 = 0
                                                else
                                                    long double x87_r5_13 = fconvert.t(ecx_4[0xd])
                                                    x87_r5_13 - x87_r7_2
                                                    eax.w = (x87_r5_13 < x87_r7_2 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r5_13, x87_r7_2) ? 1 : 0)
                                                        << 0xa | (x87_r5_13 == x87_r7_2 ? 1 : 0) << 0xe
                                                        | 0x3800
                                                    bool p_14 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (p_14)
                                                        eax_3 = 0
                                                    else
                                                        long double x87_r5_14 =
                                                            fconvert.t(ecx_4[0xe])
                                                        x87_r5_14 - x87_r7_2
                                                        eax.w = (x87_r5_14 < x87_r7_2 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r5_14, x87_r7_2)
                                                            ? 1 : 0) << 0xa
                                                            | (x87_r5_14 == x87_r7_2 ? 1 : 0)
                                                            << 0xe | 0x3800
                                                        bool p_15 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (p_15)
                                                            eax_3 = 0
                                                        else
                                                            long double x87_r7_3 = fconvert.t(1f)
                                                            long double x87_r6_16 =
                                                                fconvert.t(ecx_4[0xf])
                                                            x87_r6_16 - x87_r7_3
                                                            eax.w =
                                                                (x87_r6_16 < x87_r7_3 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r6_16, x87_r7_3) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r6_16 == x87_r7_3 ? 1 : 0)
                                                                << 0xe
                                                            bool p_16 =
                                                                unimplemented  {test ah, 0x44}
                                                            
                                                            eax_3 = p_16 ? 0 : 1

*(arg1 + 0x68) = 0
*(arg1 + 0x64) = eax_3

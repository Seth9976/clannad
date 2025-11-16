// 函数: sub_4693d0
// 地址: 0x4693d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_68
void* const var_5c

if (arg5 != 3)
    var_5c = &data_ac4390
    var_68 = 0xac4380
else
    var_5c = &data_ac43ac
    var_68 = 0xac43a0

int32_t edi
int32_t var_cc = edi
float var_24 = fconvert.s(float.t(0))
long double x87_r7_1 = float.t(0)
float var_20 = fconvert.s(x87_r7_1)
float var_14 = data_b54dd0
float var_10
float* edi_1 = &var_10
int32_t* esi = &data_b54dd4
*edi_1 = *esi
void* edi_2 = &edi_1[1]
void* esi_1 = &esi[1]
float var_1c = fconvert.s(float.t(0))
*edi_2 = *esi_1
*(edi_2 + 4) = *(esi_1 + 4)
float* esi_5 = arg4 i+ 8
int32_t* ecx = esi_5
int32_t i_5 = 0x10
float var_c
float eax
int32_t i

do
    long double x87_r6_1 = fconvert.t(ecx[-2])
    long double temp1_1 = fconvert.t(var_14)
    x87_r6_1 - temp1_1
    eax.w = (x87_r6_1 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, temp1_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        var_14 = ecx[-2]
    
    long double x87_r6_2 = fconvert.t(ecx[-1])
    long double temp2_1 = fconvert.t(var_10)
    x87_r6_2 - temp2_1
    eax.w = (x87_r6_2 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, temp2_1) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp2_1 ? 1 : 0) << 0xe | 0x3800
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        var_10 = ecx[-1]
    
    long double x87_r6_3 = fconvert.t(*ecx)
    long double temp3_1 = fconvert.t(var_c)
    x87_r6_3 - temp3_1
    eax.w = (x87_r6_3 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, temp3_1) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp3_1 ? 1 : 0) << 0xe | 0x3800
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (not(p_3))
        var_c = *ecx
    
    long double x87_r6_4 = fconvert.t(ecx[-2])
    long double temp4_1 = fconvert.t(var_24)
    x87_r6_4 - temp4_1
    eax.w = (x87_r6_4 < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, temp4_1) ? 1 : 0) << 0xa
        | (x87_r6_4 == temp4_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax:1.b & 0x41) == 0)
        var_24 = ecx[-2]
    
    long double temp5_1 = fconvert.t(ecx[-1])
    x87_r7_1 - temp5_1
    eax.w = (x87_r7_1 < temp5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        x87_r7_1 = fconvert.t(ecx[-1])
    
    long double x87_r6_5 = fconvert.t(*ecx)
    long double temp6_1 = fconvert.t(var_1c)
    x87_r6_5 - temp6_1
    eax.w = (x87_r6_5 < temp6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, temp6_1) ? 1 : 0) << 0xa
        | (x87_r6_5 == temp6_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax:1.b & 0x41) == 0)
        var_1c = *ecx
    
    ecx = &ecx[4]
    i = i_5
    i_5 -= 1
while (i != 1)
float var_20_1 = fconvert.s(x87_r7_1)
float var_44 = fconvert.s(fconvert.t(var_24) - fconvert.t(var_14))
float var_40 = fconvert.s(x87_r7_1 - fconvert.t(var_10))
long double x87_r6_11 = fconvert.t(var_1c) - fconvert.t(var_c)
long double x87_r5_3 = x87_r6_11 * x87_r6_11 + fconvert.t(var_40) * fconvert.t(var_40)
    + fconvert.t(var_44) * fconvert.t(var_44)
long double temp8 = fconvert.t(1.17549435e-38f)
x87_r5_3 - temp8
float var_58 = fconvert.s(x87_r5_3)
bool c1 = unimplemented  {fst dword [ebp-0x54], st0}
eax.w = (x87_r5_3 < temp8 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
    | (is_unordered.t(x87_r5_3, temp8) ? 1 : 0) << 0xa | (x87_r5_3 == temp8 ? 1 : 0) << 0xe
    | 0x2800
bool p_5 = unimplemented  {test ah, 0x5}
int32_t* eax_2

if (p_5)
    long double x87_r4_4 = float.t(1)
    float* eax_3 = esi_5
    long double x87_r5_4 = x87_r4_4 / x87_r4_4
    int32_t i_4 = 0x10
    long double x87_r6_13 = fconvert.t(0.5f)
    float var_28_1 = fconvert.s(float.t(0))
    float var_2c_1 = fconvert.s(float.t(0))
    float var_30_1 = fconvert.s(float.t(0))
    long double x87_r6_17
    int32_t i_1
    
    do
        float var_44_1 = fconvert.s((fconvert.t(eax_3[-2])
            - fconvert.t(fconvert.s((fconvert.t(var_24) + fconvert.t(var_14)) * x87_r6_13)))
            * fconvert.t(fconvert.s(fconvert.t(var_44) * x87_r5_4)))
        float var_40_1 = fconvert.s((fconvert.t(eax_3[-1])
            - fconvert.t(fconvert.s((x87_r6_11 + fconvert.t(var_10)) * x87_r6_13)))
            * fconvert.t(fconvert.s(fconvert.t(var_40) * x87_r5_4)))
        long double x87_r5_21 = fconvert.t(*eax_3)
        eax_3 = &eax_3[4]
        i_1 = i_4
        i_4 -= 1
        long double x87_r4_14 = fconvert.t(var_40_1) + fconvert.t(var_44_1) - (fconvert.t(var_40_1)
            + (x87_r5_21
            - fconvert.t(fconvert.s((fconvert.t(var_1c) + fconvert.t(var_c)) * x87_r6_13)))
            * fconvert.t(fconvert.s(x87_r5_4 * x87_r6_11)) + fconvert.t(var_44_1))
        var_30_1 = fconvert.s(x87_r4_14 * x87_r4_14 + fconvert.t(var_30_1))
        long double x87_r3_7 = fconvert.t(var_44_1) - fconvert.t(var_40_1) + x87_r4_14
        var_2c_1 = fconvert.s(x87_r3_7 * x87_r3_7 + fconvert.t(var_2c_1))
        long double x87_r5_26 = x87_r3_7 - x87_r4_14
        var_28_1 = fconvert.s(x87_r5_26 * x87_r5_26 + fconvert.t(var_28_1))
        x87_r6_17 = x87_r5_26
    while (i_1 != 1)
    float var_34_1 = fconvert.s(x87_r6_17)
    char ebx_1 = 0
    
    for (int32_t i_2 = 1; i_2 u< 4; i_2 += 1)
        int32_t __saved_ebp
        long double temp10_1 = fconvert.t((&__saved_ebp)[i_2 - 0xc])
        x87_r6_17 - temp10_1
        eax_3.w = (x87_r6_17 < temp10_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, temp10_1) ? 1 : 0) << 0xa
            | (x87_r6_17 == temp10_1 ? 1 : 0) << 0xe | 0x3000
        bool p_6 = unimplemented  {test ah, 0x5}
        
        if (not(p_6))
            ebx_1 = i_2.b
            x87_r6_17 = fconvert.t((&__saved_ebp)[i_2 - 0xc])
    
    long double x87_r7_6 = x87_r6_17
    
    if ((ebx_1 & 2) != 0)
        eax_3 = var_10
        var_10 = fconvert.s(x87_r7_6)
        x87_r7_6 = fconvert.t(eax_3)
        var_20_1 = fconvert.s(x87_r7_6)
    
    if ((ebx_1 & 1) != 0)
        eax_3 = var_1c
        var_1c = fconvert.s(fconvert.t(var_c))
        var_c = eax_3
    
    long double x87_r6_20 = fconvert.t(var_58)
    long double temp11_1 = fconvert.t(0.000244140625f)
    x87_r6_20 - temp11_1
    eax_3.w = (x87_r6_20 < temp11_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_20, temp11_1) ? 1 : 0) << 0xa
        | (x87_r6_20 == temp11_1 ? 1 : 0) << 0xe | 0x3800
    bool p_7 = unimplemented  {test ah, 0x5}
    
    if (p_7)
        int32_t j_4 = arg5
        long double x87_r7_7 = float.t(j_4 - 1)
        
        if (j_4 - 1 s< 0)
            x87_r7_7 = x87_r7_7 + fconvert.t(4.2949673e+09f)
        
        float var_58_1 = fconvert.s(x87_r7_7)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
        arg5.w = temp0_1
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16((arg5 | 0xc00).w)
        int32_t i_3 = 0
        int16_t var_7c_1 = arg5.w
        
        do
            var_c0
            float* eax_8
            
            if (j_4 u> 0)
                eax_8 = var_5c
                void* ecx_10 = &var_c0
                float* edx_1 = var_68 - eax_8
                int32_t j_2 = j_4
                int32_t j
                
                do
                    *(ecx_10 - 4) = fconvert.s(fconvert.t(var_14) * fconvert.t(*eax_8)
                        + fconvert.t(var_24) * fconvert.t(*(edx_1 + eax_8)))
                    *ecx_10 = fconvert.s(fconvert.t(var_10) * fconvert.t(*eax_8)
                        + fconvert.t(var_20_1) * fconvert.t(*(edx_1 + eax_8)))
                    long double x87_r6_28 = fconvert.t(var_c) * fconvert.t(*eax_8)
                    long double x87_r5_32 = fconvert.t(var_1c) * fconvert.t(*(edx_1 + eax_8))
                    eax_8 = &eax_8[1]
                    *(ecx_10 + 4) = fconvert.s(x87_r6_28 + x87_r5_32)
                    ecx_10 += 0x10
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            long double x87_r6_31 = fconvert.t(var_24) - fconvert.t(var_14)
            float var_40_2 = fconvert.s(fconvert.t(var_20_1) - fconvert.t(var_10))
            long double x87_r5_36 = fconvert.t(var_1c) - fconvert.t(var_c)
            long double x87_r4_24 = x87_r5_36 * x87_r5_36
                + fconvert.t(var_40_2) * fconvert.t(var_40_2) + x87_r6_31 * x87_r6_31
            long double temp12_1 = fconvert.t(0.000244140625f)
            x87_r4_24 - temp12_1
            eax_8.w = (x87_r4_24 < temp12_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_24, temp12_1) ? 1 : 0) << 0xa
                | (x87_r4_24 == temp12_1 ? 1 : 0) << 0xe | 0x2000
            bool p_8 = unimplemented  {test ah, 0x5}
            
            if (not(p_8))
                break
            
            long double x87_r4_25 = fconvert.t(var_58_1) / x87_r4_24
            float* ecx_11 = esi_5
            int32_t j_3 = 0x10
            float var_2c_2 = fconvert.s(float.t(0))
            float var_30_2 = fconvert.s(float.t(0))
            float var_34_2 = fconvert.s(float.t(0))
            float var_4c_2 = fconvert.s(float.t(0))
            float var_50_2 = fconvert.s(float.t(0))
            float var_54_2 = fconvert.s(float.t(0))
            arg4 = fconvert.s(float.t(0))
            arg5 = fconvert.s(float.t(0))
            long double x87_r4_28
            int32_t j_1
            
            do
                long double x87_r6_45 = (fconvert.t(ecx_11[-1]) - fconvert.t(var_10))
                    * fconvert.t(fconvert.s(fconvert.t(var_40_2) * x87_r4_25))
                    + (fconvert.t(ecx_11[-2]) - fconvert.t(var_14))
                    * fconvert.t(fconvert.s(x87_r4_25 * x87_r6_31))
                    + (fconvert.t(*ecx_11) - fconvert.t(var_c))
                    * fconvert.t(fconvert.s(x87_r4_25 * x87_r5_36))
                long double temp14_1 = fconvert.t(var_58_1)
                x87_r6_45 - temp14_1
                eax_8.w = (x87_r6_45 < temp14_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_45, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r6_45 == temp14_1 ? 1 : 0) << 0xe | 0x3800
                int32_t edx_2
                
                if ((eax_8:1.b & 1) != 0)
                    edx_2 = int.d(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6_45))
                        + fconvert.t(0.5f))))
                else
                    edx_2 = j_4 - 1
                
                int32_t eax_10 = edx_2 << 4
                int32_t var_c4[0x10]
                long double x87_r6_47 = fconvert.t(var_c4[edx_2 * 4]) - fconvert.t(ecx_11[-2])
                float var_74_2 =
                    fconvert.s(fconvert.t(*(&var_c0 + eax_10)) - fconvert.t(ecx_11[-1]))
                var_bc
                long double x87_r5_46 = fconvert.t(*(&var_bc + eax_10)) - fconvert.t(*ecx_11)
                int32_t eax_12 = edx_2 << 2
                void* edx_4 = var_5c + eax_12
                eax_8 = eax_12 + var_68
                x87_r4_28 = fconvert.t(*edx_4) * fconvert.t(0.125f)
                ecx_11 = &ecx_11[4]
                j_1 = j_3
                j_3 -= 1
                long double x87_r3_17 = fconvert.t(*eax_8) * fconvert.t(0.125f)
                arg5 = fconvert.s(x87_r4_28 * fconvert.t(*edx_4) + fconvert.t(arg5))
                var_54_2 = fconvert.s(x87_r4_28 * x87_r6_47 + fconvert.t(var_54_2))
                var_50_2 = fconvert.s(x87_r4_28 * fconvert.t(var_74_2) + fconvert.t(var_50_2))
                var_4c_2 = fconvert.s(x87_r4_28 * x87_r5_46 + fconvert.t(var_4c_2))
                arg4 = fconvert.s(x87_r3_17 * fconvert.t(*eax_8) + fconvert.t(arg4))
                var_34_2 = fconvert.s(x87_r3_17 * x87_r6_47 + fconvert.t(var_34_2))
                var_30_2 = fconvert.s(fconvert.t(var_74_2) * x87_r3_17 + fconvert.t(var_30_2))
                var_2c_2 = fconvert.s(x87_r3_17 * x87_r5_46 + fconvert.t(var_2c_2))
            while (j_1 != 1)
            long double x87_r6_49 = fconvert.t(arg5)
            long double temp16_1 = fconvert.t(0f)
            x87_r6_49 - temp16_1
            eax_8.w = (x87_r6_49 < temp16_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_49, temp16_1) ? 1 : 0) << 0xa
                | (x87_r6_49 == temp16_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_8:1.b & 0x41) == 0)
                long double x87_r6_51 = fconvert.t(-1f) / fconvert.t(arg5)
                var_14 = fconvert.s(fconvert.t(var_54_2) * x87_r6_51 + fconvert.t(var_14))
                var_10 = fconvert.s(fconvert.t(var_50_2) * x87_r6_51 + fconvert.t(var_10))
                var_c = fconvert.s(x87_r6_51 * fconvert.t(var_4c_2) + fconvert.t(var_c))
            
            long double x87_r6_54 = fconvert.t(arg4)
            long double temp17_1 = fconvert.t(0f)
            x87_r6_54 - temp17_1
            eax_8.w = (x87_r6_54 < temp17_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_54, temp17_1) ? 1 : 0) << 0xa
                | (x87_r6_54 == temp17_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_8:1.b & 0x41) == 0)
                long double x87_r6_56 = fconvert.t(-1f) / fconvert.t(arg4)
                var_24 = fconvert.s(fconvert.t(var_34_2) * x87_r6_56 + fconvert.t(var_24))
                var_20_1 = fconvert.s(fconvert.t(var_30_2) * x87_r6_56 + fconvert.t(var_20_1))
                var_1c = fconvert.s(x87_r6_56 * fconvert.t(var_2c_2) + fconvert.t(var_1c))
            
            long double x87_r6_60 = fconvert.t(var_54_2) * fconvert.t(var_54_2)
            x87_r6_60 - x87_r4_28
            eax_8.w = (x87_r6_60 < x87_r4_28 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_60, x87_r4_28) ? 1 : 0) << 0xa
                | (x87_r6_60 == x87_r4_28 ? 1 : 0) << 0xe | 0x3800
            bool p_9 = unimplemented  {test ah, 0x5}
            
            if (not(p_9))
                long double x87_r6_62 = fconvert.t(var_50_2) * fconvert.t(var_50_2)
                x87_r6_62 - x87_r4_28
                eax_8.w = (x87_r6_62 < x87_r4_28 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_62, x87_r4_28) ? 1 : 0) << 0xa
                    | (x87_r6_62 == x87_r4_28 ? 1 : 0) << 0xe | 0x3800
                bool p_10 = unimplemented  {test ah, 0x5}
                
                if (not(p_10))
                    long double x87_r6_64 = fconvert.t(var_4c_2) * fconvert.t(var_4c_2)
                    x87_r6_64 - x87_r4_28
                    eax_8.w = (x87_r6_64 < x87_r4_28 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_64, x87_r4_28) ? 1 : 0) << 0xa
                        | (x87_r6_64 == x87_r4_28 ? 1 : 0) << 0xe | 0x3800
                    bool p_11 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_11))
                        long double x87_r6_66 = fconvert.t(var_34_2) * fconvert.t(var_34_2)
                        x87_r6_66 - x87_r4_28
                        eax_8.w = (x87_r6_66 < x87_r4_28 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_66, x87_r4_28) ? 1 : 0) << 0xa
                            | (x87_r6_66 == x87_r4_28 ? 1 : 0) << 0xe | 0x3800
                        bool p_12 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_12))
                            long double x87_r6_68 = fconvert.t(var_30_2) * fconvert.t(var_30_2)
                            x87_r6_68 - x87_r4_28
                            eax_8.w = (x87_r6_68 < x87_r4_28 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_68, x87_r4_28) ? 1 : 0) << 0xa
                                | (x87_r6_68 == x87_r4_28 ? 1 : 0) << 0xe | 0x3800
                            bool p_13 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_13))
                                long double x87_r6_70 = fconvert.t(var_2c_2) * fconvert.t(var_2c_2)
                                x87_r6_70 - x87_r4_28
                                eax_8.w = (x87_r6_70 < x87_r4_28 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_70, x87_r4_28) ? 1 : 0) << 0xa
                                    | (x87_r6_70 == x87_r4_28 ? 1 : 0) << 0xe | 0x3800
                                bool p_14 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_14))
                                    break
            
            i_3 += 1
        while (i_3 u< 8)
        
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(var_7c_1)
        *arg2 = var_14
        arg2[1] = var_10
        arg2[2] = var_c
        eax_2 = arg3
        *eax_2 = var_24
        eax_2[1] = var_20_1
    else
        *arg2 = var_14
        arg2[1] = var_10
        arg2[2] = var_c
        eax_2 = arg3
        eax_2[1] = fconvert.s(x87_r7_6)
        *eax_2 = var_24
else
    *arg2 = var_14
    arg2[1] = var_10
    arg2[2] = var_c
    eax_2 = arg3
    eax_2[1] = fconvert.s(x87_r5_3)
    *eax_2 = var_24

eax_2[2] = var_1c

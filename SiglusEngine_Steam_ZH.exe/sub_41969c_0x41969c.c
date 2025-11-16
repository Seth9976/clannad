// 函数: sub_41969c
// 地址: 0x41969c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_4c = edi
int32_t edi_1 = 0

if (arg1 == 0)
    return 

int32_t eax_1 = arg2

if (eax_1 == 0)
    return 

long double x87_r7_1 = float.t(eax_1)

if (eax_1 s< 0)
    x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)

float var_20_1 = fconvert.s(x87_r7_1)
long double x87_r7_2 = float.t(arg1)

if (arg1 s< 0)
    x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)

int32_t eax_2
eax_2.b = arg3 != 0
uint32_t esi_1 = 0x10
float var_2c_1 = fconvert.s(fconvert.t(var_20_1) / x87_r7_2)
float var_38_1 = fconvert.s(fconvert.t(0.5f) / x87_r7_2)

if (arg1 u> 0)
    long double x87_r6_5 = float.t(eax_2)
    
    if (eax_2 s< 0)
        x87_r6_5 = x87_r6_5 + fconvert.t(4.2949673e+09f)
    
    do
        long double x87_r5_1 = float.t(edi_1)
        
        if (edi_1 s< 0)
            x87_r5_1 = x87_r5_1 + fconvert.t(4.2949673e+09f)
        
        long double x87_r5_3 = (x87_r5_1 - fconvert.t(0.5f)) * x87_r7_2
        int32_t eax_3
        int16_t x87control
        eax_3, x87control =
            __ftol(x87control, x87_r5_3 + x87_r7_2 - x87_r5_3 + x87_r6_5 + fconvert.t(1f))
        x87_r6_5 = x87_r5_3
        edi_1 += 1
        esi_1 = esi_1 + (eax_3 << 4) + 0xc
    while (edi_1 u< arg1)

void** eax_5 = sub_745f3f(esi_1)
uint32_t ecx_1 = esi_1

if (eax_5 == 0)
    return 

uint32_t ebx_1 = 0
int32_t var_1c_1 = 0
float var_8_1 = fconvert.s(float.t(0))
void* esi_2 = 4

if (arg1 u> 0)
    do
        int32_t i = 0
        long double x87_r7_4 = float.t(var_1c_1)
        void* eax_6 = esi_2 + eax_5
        void* var_3c_1 = esi_2
        esi_2 += 4
        
        if (var_1c_1 s< 0)
            x87_r7_4 = x87_r7_4 + fconvert.t(4.2949673e+09f)
        
        uint32_t* eax_10
        
        do
            long double x87_r7_5 = float.t(i)
            
            if (i s< 0)
                x87_r7_5 = x87_r7_5 + fconvert.t(4.2949673e+09f)
            
            long double x87_r7_7 = x87_r7_5 + fconvert.t(fconvert.s(x87_r7_4)) - fconvert.t(0.5f)
            float var_14_1 = fconvert.s(x87_r7_7)
            long double x87_r7_8 = x87_r7_7 * fconvert.t(var_2c_1)
            float var_24_1 = fconvert.s(x87_r7_8)
            float var_c_1 = fconvert.s(fconvert.t(var_2c_1) + x87_r7_8)
            
            if (arg3 == 0)
                long double temp2_1 = fconvert.t(0f)
                x87_r7_8 - temp2_1
                int32_t eax_8
                eax_8.w = (x87_r7_8 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    x87_r7_8 = float.t(0)
                    var_24_1 = fconvert.s(x87_r7_8)
                
                long double x87_r6_8 = fconvert.t(var_c_1)
                long double temp3_1 = fconvert.t(var_20_1)
                x87_r6_8 - temp3_1
                eax_8.w = (x87_r6_8 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_8, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_8 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_8:1.b & 0x41) == 0)
                    var_c_1 = var_20_1
            
            uint32_t var_50_2 = ecx_1
            int16_t x87control_1
            long double st0_1
            st0_1, x87control_1 = sub_419677(fconvert.s(x87_r7_8))
            uint32_t* edx_1 = __ftol(x87control_1, st0_1)
            long double x87_r7_10 = float.t(edx_1)
            long double temp1_1 = fconvert.t(var_c_1)
            x87_r7_10 - temp1_1
            eax_10.w = (x87_r7_10 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe | 0x3800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                ecx_1 = edx_1 - arg2
                uint32_t var_28_1 = ecx_1
                
                while (true)
                    float var_18_2 = fconvert.s(fconvert.t(1f) + x87_r7_10)
                    
                    if (edx_1 s< 0)
                        ecx_1 = edx_1 + arg2
                    else if (edx_1 s< arg2)
                        ecx_1 = edx_1
                    
                    if (ecx_1 != ebx_1)
                        long double x87_r6_11 = fconvert.t(var_8_1)
                        long double temp6_1 = fconvert.t(9.99999975e-06f)
                        x87_r6_11 - temp6_1
                        eax_10.w = (x87_r6_11 < temp6_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_11, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r6_11 == temp6_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_10:1.b & 0x41) == 0)
                            eax_10 = esi_2 + eax_5
                            *eax_10 = ebx_1
                            esi_2 += 8
                            eax_10[1] = var_8_1
                        
                        ebx_1 = ecx_1
                        var_8_1 = fconvert.s(float.t(0))
                    
                    long double temp5_1 = fconvert.t(var_24_1)
                    x87_r7_10 - temp5_1
                    eax_10.w = (x87_r7_10 < temp5_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_10, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_3 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_3))
                        x87_r7_10 = fconvert.t(var_24_1)
                    
                    long double x87_r6_13 = fconvert.t(var_18_2)
                    long double temp7_1 = fconvert.t(var_c_1)
                    x87_r6_13 - temp7_1
                    eax_10.w = (x87_r6_13 < temp7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_13, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r6_13 == temp7_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_10:1.b & 0x41) == 0)
                        var_18_2 = var_c_1
                    
                    long double x87_r6_15
                    
                    if (arg3 != 0)
                        x87_r6_15 = (fconvert.t(var_18_2) + x87_r7_10) * fconvert.t(var_38_1)
                            - fconvert.t(var_14_1)
                    else
                        long double x87_r6_14 = fconvert.t(var_14_1)
                        long double temp8_1 = fconvert.t(0f)
                        x87_r6_14 - temp8_1
                        eax_10.w = (x87_r6_14 < temp8_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_14, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r6_14 == temp8_1 ? 1 : 0) << 0xe | 0x3800
                        bool p_4 = unimplemented  {test ah, 0x5}
                        
                        if (p_4)
                            long double x87_r6_17 = fconvert.t(var_14_1) + fconvert.t(1f)
                            long double temp9_1 = fconvert.t(fconvert.s(x87_r7_2))
                            x87_r6_17 - temp9_1
                            eax_10.w = (x87_r6_17 < temp9_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_17, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r6_17 == temp9_1 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax_10:1.b & 1) != 0)
                                x87_r6_15 =
                                    (fconvert.t(var_18_2) + x87_r7_10) * fconvert.t(var_38_1)
                                    - fconvert.t(var_14_1)
                            else
                                x87_r6_15 = float.t(0)
                        else
                            x87_r6_15 = float.t(1)
                    
                    if (i != 0)
                        x87_r6_15 = float.t(1) - x87_r6_15
                    
                    edx_1 += 1
                    var_28_1 += 1
                    var_8_1 = fconvert.s((fconvert.t(var_18_2) - x87_r7_10) * x87_r6_15
                        + fconvert.t(var_8_1))
                    x87_r7_10 = float.t(edx_1)
                    long double temp10_1 = fconvert.t(var_c_1)
                    x87_r7_10 - temp10_1
                    eax_10.w = (x87_r7_10 < temp10_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_10, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == temp10_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_5 = unimplemented  {test ah, 0x5}
                    
                    if (p_5)
                        break
                    
                    ecx_1 = var_28_1
            
            i += 1
        while (i u< 2)
        
        long double x87_r7_12 = fconvert.t(var_8_1)
        long double temp4_1 = fconvert.t(9.99999975e-06f)
        x87_r7_12 - temp4_1
        eax_10.w = (x87_r7_12 < temp4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_12, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe
        
        if ((eax_10:1.b & 0x41) == 0)
            void* eax_11 = esi_2 + eax_5
            esi_2 += 8
            *eax_11 = ebx_1
            *(eax_11 + 4) = var_8_1
        
        ecx_1 = eax_6
        var_8_1 = fconvert.s(float.t(0))
        var_1c_1 += 1
        *ecx_1 = esi_2 - var_3c_1
    while (var_1c_1 u< arg1)

*eax_5 = esi_2

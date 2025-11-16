// 函数: sub_46a7fb
// 地址: 0x46a7fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float ebx = arg3
float eax = *(ebx i+ 0xc)
int32_t i = 0
int32_t edi
int32_t var_b0 = edi
float var_14 = eax
float var_8 = eax
int32_t var_a4[0x10]

if (arg4 != 0)
    __builtin_memset(&var_a4, 0, 0x40)

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
arg3.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg3.w | 0xc00)
int16_t eax_3 = arg3.w
int32_t* edi_1 = ebx i+ 0xc
int32_t var_64[0x8]
float var_10
int32_t __saved_ebp

do
    arg3 = *edi_1
    
    if (arg4 != 0)
        arg3 = fconvert.s(fconvert.t(arg3) + fconvert.t(var_a4[i]))
    
    var_10 = int.d(fconvert.t(fconvert.s(fconvert.t(arg3) * fconvert.t(255f) + fconvert.t(0.5f))))
    long double x87_r7_8 = float.t(var_10) * fconvert.t(0.00392156886f)
    long double temp1_1 = fconvert.t(var_14)
    x87_r7_8 - temp1_1
    var_64[i] = fconvert.s(x87_r7_8)
    bool c1_1 = unimplemented  {fst dword [ebp+ecx-0x60], st0}
    float eax_5
    eax_5.w = (x87_r7_8 < temp1_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
        | (is_unordered.t(x87_r7_8, temp1_1) ? 1 : 0) << 0xa | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe
        | 0x3800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double temp2_1 = fconvert.t(var_8)
        x87_r7_8 - temp2_1
        eax_5.w = (x87_r7_8 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_5:1.b & 0x41) == 0)
            var_8 = fconvert.s(x87_r7_8)
    else
        var_14 = fconvert.s(x87_r7_8)
    
    if (arg4 != 0)
        x87_r7_8 = fconvert.t(arg3) - x87_r7_8
        int32_t edx_2 = i & 3
        
        if (edx_2 != 3)
            (&__saved_ebp)[i - 0x27] =
                fconvert.s(fconvert.t(0.4375f) * x87_r7_8 + fconvert.t((&__saved_ebp)[i - 0x27]))
        
        if (i u< 0xc)
            if (edx_2 != 0)
                (&__saved_ebp)[i - 0x25] = fconvert.s(fconvert.t(0.1875f) * x87_r7_8
                    + fconvert.t((&__saved_ebp)[i - 0x25]))
            
            (&__saved_ebp)[i - 0x24] =
                fconvert.s(fconvert.t(0.3125f) * x87_r7_8 + fconvert.t((&__saved_ebp)[i - 0x24]))
            
            if (edx_2 != 3)
                (&__saved_ebp)[i - 0x23] = fconvert.s(x87_r7_8 * fconvert.t(0.0625f)
                    + fconvert.t((&__saved_ebp)[i - 0x23]))
    
    i += 1
    edi_1 = &edi_1[4]
while (i u< 0x10)

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(eax_3)
char* esi = arg2
int32_t eax_12
int16_t x87control_2
long double result_1
result_1, eax_12, x87control_2 = sub_469950(ebx, x87control_1, &esi[8], 0f, arg4)
long double result = result_1
long double x87_r7_11 = fconvert.t(var_14)
long double x87_r6_10 = fconvert.t(1f)
x87_r6_10 - x87_r7_11
eax_12.w = (x87_r6_10 < x87_r7_11 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_10, x87_r7_11) ? 1 : 0) << 0xa
    | (x87_r6_10 == x87_r7_11 ? 1 : 0) << 0xe
bool p_2 = unimplemented  {test ah, 0x44}

if (p_2)
    long double x87_r7_12 = fconvert.t(var_14)
    long double x87_r6_11 = fconvert.t(0f)
    x87_r6_11 - x87_r7_12
    eax_12.w = (x87_r6_11 < x87_r7_12 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_11, x87_r7_12) ? 1 : 0) << 0xa
        | (x87_r6_11 == x87_r7_12 ? 1 : 0) << 0xe
    bool p_3 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (p_3)
        long double x87_r7_13 = fconvert.t(var_8)
        long double x87_r6_12 = fconvert.t(1f)
        x87_r6_12 - x87_r7_13
        eax_12.w = (x87_r6_12 < x87_r7_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_12, x87_r7_13) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_13 ? 1 : 0) << 0xe
        p_4 = unimplemented  {test ah, 0x44}
    
    int32_t edi_2
    
    if (not(p_3) || not(p_4))
        arg2 = 6
        edi_2 = 6
    else
        edi_2 = 8
        arg2 = 8
    
    int16_t x87control_3
    long double result_2
    result_2, x87control_3 = sub_4690a9(x87control_2, &var_10, &arg3, &var_64, edi_2)
    result = result_2
    int16_t x87status_3
    int16_t temp0_1
    temp0_1, x87status_3 = __fnstcw_memmem16(x87control_3)
    var_8.w = temp0_1
    int16_t x87control_4
    int16_t x87status_4
    x87control_4, x87status_4 = __fldcw_memmem16(var_8.w | 0xc00)
    var_10 = int.d(fconvert.t(fconvert.s(fconvert.t(var_10) * fconvert.t(255f) + fconvert.t(0.5f))))
    char eax_16 = var_10.b
    arg3 = fconvert.s(fconvert.t(arg3) * fconvert.t(255f) + fconvert.t(0.5f))
    char var_c_5 = (int.d(fconvert.t(arg3))).b
    int16_t x87control_5
    int16_t x87status_5
    x87control_5, x87status_5 = __fldcw_memmem16(var_8.w)
    arg3 = zx.d(eax_16)
    long double x87_r7_22 = float.t(arg3)
    arg3 = zx.d(var_c_5)
    long double result_3 = float.t(arg3) * fconvert.t(0.00392156886f)
    arg3 = fconvert.s(result_3)
    
    if (edi_2 == 8)
        if (eax_16 != var_c_5)
            goto label_46aaa3
        
        *esi = eax_16
        result = result_3
        esi[1] = var_c_5
        goto label_46aa33
    
    float var_44
    float var_40_1
    int32_t var_c_6
    float i_1
    
    if (edi_2 != 6)
    label_46aaa3:
        esi[1] = eax_16
        var_44 = fconvert.s(result_3)
        var_40_1 = fconvert.s(x87_r7_22 * fconvert.t(0.00392156886f))
        *esi = var_c_5
        i_1 = 1.40129846e-45f
        
        do
            arg3 = 7 i- i_1
            long double x87_r7_32 = float.t(arg3)
            
            if (7 i- i_1 s< 0)
                x87_r7_32 = x87_r7_32 + fconvert.t(4.2949673e+09f)
            
            long double x87_r7_33 = x87_r7_32 * fconvert.t(var_44)
            arg3 = i_1
            long double x87_r6_16 = float.t(arg3)
            
            if (i_1 s< 0)
                x87_r6_16 = x87_r6_16 + fconvert.t(4.2949673e+09f)
            
            i_1 += 1
            (&var_44)[i_1] = fconvert.s((x87_r7_33 + x87_r6_16 * fconvert.t(var_40_1))
                * fconvert.t(0.142857149f))
        while (i_1 u< 7)
        
        var_c_6 = 0xac43dc
    else
        *esi = eax_16
        float eax_17 = arg3
        var_44 = fconvert.s(result_3)
        var_40_1 = eax_17
        esi[1] = var_c_5
        i_1 = 1.40129846e-45f
        
        do
            arg3 = 5 i- i_1
            long double x87_r7_26 = float.t(arg3)
            
            if (5 i- i_1 s< 0)
                x87_r7_26 = x87_r7_26 + fconvert.t(4.2949673e+09f)
            
            long double x87_r7_27 = x87_r7_26 * fconvert.t(var_44)
            arg3 = i_1
            long double x87_r6_14 = float.t(arg3)
            
            if (i_1 s< 0)
                x87_r6_14 = x87_r6_14 + fconvert.t(4.2949673e+09f)
            
            i_1 += 1
            (&var_44)[i_1] = fconvert.s((x87_r7_27 + x87_r6_14 * fconvert.t(var_40_1))
                * fconvert.t(0.200000003f))
        while (i_1 u< 5)
        
        var_c_6 = 0xac43fc
        float var_2c_1 = fconvert.s(float.t(0))
        float var_28_1 = fconvert.s(float.t(1))
    
    arg3 = edi_2 - 1
    long double x87_r7_36 = float.t(arg3)
    
    if (edi_2 - 1 s< 0)
        x87_r7_36 = x87_r7_36 + fconvert.t(4.2949673e+09f)
    
    var_10 = fconvert.s(x87_r7_36)
    long double x87_r7_37 = fconvert.t(var_40_1)
    long double x87_r6_18 = fconvert.t(var_44)
    x87_r6_18 - x87_r7_37
    i_1.w = (x87_r6_18 < x87_r7_37 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_18, x87_r7_37) ? 1 : 0) << 0xa
        | (x87_r6_18 == x87_r7_37 ? 1 : 0) << 0xe
    bool p_5 = unimplemented  {test ah, 0x44}
    long double x87_r7_40
    
    if (not(p_5))
        x87_r7_40 = float.t(0)
    else
        x87_r7_40 = fconvert.t(var_10) / (fconvert.t(var_40_1) - fconvert.t(var_44))
    
    float var_20_1 = fconvert.s(x87_r7_40)
    
    if (arg4 != 0)
        __builtin_memset(&var_a4, 0, 0x40)
    
    int16_t x87status_6
    int16_t temp0_2
    temp0_2, x87status_6 = __fnstcw_memmem16(x87control_5)
    arg3.w = temp0_2
    int16_t x87control_6
    int16_t x87status_7
    x87control_6, x87status_7 = __fldcw_memmem16(arg3.w | 0xc00)
    int16_t eax_20 = arg3.w
    float* i_2 = nullptr
    void* ecx_6 = &esi[3]
    int32_t* var_14_1 = ebx i+ 0xc
    
    do
        int32_t ebx_1 = 0
        void* i_4 = &i_2[2]
        int24_t var_8_2 = 0
        float* i_3 = i_2
        
        if (i_2 u< i_4)
            int32_t* var_8_3 = var_14_1
            
            do
                arg3 = *var_8_3
                
                if (arg4 != 0)
                    arg3 = fconvert.s(fconvert.t(arg3) + fconvert.t(var_a4[i_3]))
                
                long double result_4 =
                    (fconvert.t(arg3) - fconvert.t(var_44)) * fconvert.t(var_20_1)
                long double temp3_1 = fconvert.t(0f)
                result_4 - temp3_1
                float eax_23
                eax_23.w = (result_4 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(result_4, temp3_1) ? 1 : 0) << 0xa
                    | (result_4 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                bool p_6 = unimplemented  {test ah, 0x41}
                
                if (p_6)
                    long double temp4_1 = fconvert.t(var_10)
                    result_4 - temp4_1
                    eax_23.w = (result_4 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(result_4, temp4_1) ? 1 : 0) << 0xa
                        | (result_4 == temp4_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_23:1.b & 1) != 0)
                        i_2 = *(var_c_6
                            + (int.d(fconvert.t(fconvert.s(result_4 + fconvert.t(0.5f)))) << 2))
                    else
                        result = result_4
                        
                        if (arg2 != 6)
                            i_2 = 1
                        else
                            long double x87_r7_49 =
                                (fconvert.t(var_40_1) + fconvert.t(1f)) * fconvert.t(0.5f)
                            long double temp6_1 = fconvert.t(arg3)
                            x87_r7_49 - temp6_1
                            eax_23.w = (x87_r7_49 < temp6_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_49, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_49 == temp6_1 ? 1 : 0) << 0xe
                            bool p_7 = unimplemented  {test ah, 0x41}
                            
                            i_2 = p_7 ? 1 : 7
                else
                    result = result_4
                    
                    if (arg2 == 6)
                        long double x87_r7_46 = fconvert.t(var_44) * fconvert.t(0.5f)
                        long double temp5_1 = fconvert.t(arg3)
                        x87_r7_46 - temp5_1
                        eax_23.w = (x87_r7_46 < temp5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_46, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_46 == temp5_1 ? 1 : 0) << 0xe
                    
                    if (arg2 != 6 || (eax_23:1.b & 1) != 0)
                        i_2 = nullptr
                    else
                        i_2 = 6
                
                ebx_1 = ebx_1 u>> 3 | i_2 << 0x15
                
                if (arg4 != 0)
                    long double result_5 = fconvert.t(arg3) - fconvert.t((&var_44)[i_2])
                    void* edx_10 = i_3 & 3
                    
                    if (edx_10 != 3)
                        (&__saved_ebp)[i_3 - 0x27] = fconvert.s(fconvert.t(0.4375f) * result_5
                            + fconvert.t((&__saved_ebp)[i_3 - 0x27]))
                    
                    if (i_3 u< 0xc)
                        if (edx_10 != 0)
                            (&__saved_ebp)[i_3 - 0x25] = fconvert.s(fconvert.t(0.1875f) * result_5
                                + fconvert.t((&__saved_ebp)[i_3 - 0x25]))
                        
                        (&__saved_ebp)[&i_3[-9]] = fconvert.s(fconvert.t(0.3125f) * result_5
                            + fconvert.t((&__saved_ebp)[&i_3[-9]]))
                    
                    if (i_3 u>= 0xc || edx_10 == 3)
                        result = result_5
                    else
                        (&__saved_ebp)[i_3 - 0x23] = fconvert.s(result_5 * fconvert.t(0.0625f)
                            + fconvert.t((&__saved_ebp)[i_3 - 0x23]))
                
                var_8_3 = &var_8_3[4]
                i_3 += 1
            while (i_3 u< i_4)
            
            var_8_2 = ebx_1.3
        
        i_2.b = var_8_2:2.b
        var_14_1 = &var_14_1[0x20]
        *(ecx_6 + 1) = i_2.b
        *(ecx_6 - 1) = ebx_1.b
        *ecx_6 = ebx_1:1.b
        i_2 = i_4
        ecx_6 += 3
    while (i_2 u< 0x10)
    
    int16_t x87control_7
    int16_t x87status_8
    x87control_7, x87status_8 = __fldcw_memmem16(eax_20)
else
    *esi = 0xff
    esi[1] = 0xff
label_46aa33:
    *(esi + 2) = 0
    *(esi + 6) = 0

return result

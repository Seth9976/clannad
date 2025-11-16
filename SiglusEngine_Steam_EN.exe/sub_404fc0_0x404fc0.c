// 函数: sub_404fc0
// 地址: 0x404fc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x7f08)
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
float* edi
float* var_10 = edi
int32_t eax_2
eax_2.b = ((arg3 << 2) + 3).b & 0xfc
__chkstk(eax_2)
int32_t* var_1c = &var_10
int32_t eax_3 = _malloc(0x44)
int32_t var_7f0c[0x1dc0]
__builtin_memset(&var_7f0c, 0, 0x7700)
var_10 = arg1
int32_t (* var_8_1)[0x1dc0] = &var_7f0c
void* var_14_1 = &data_62d170
void* var_18 = &data_62d010
float* var_1c_2
float* var_18_3

do
    void* esi_1 = var_18
    void var_10c
    float* edi_1 = &var_10c
    int32_t i_5 = 0x38
    int32_t i
    
    do
        long double x87_r7_1 = fconvert.t(999f)
        void* ecx_1 = esi_1
        int32_t j_8 = 4
        int32_t j
        
        do
            void* eax_4
            
            if (ecx_1 s>= &data_62d170)
                long double temp1_1 = fconvert.t(data_62d16c)
                x87_r7_1 - temp1_1
                eax_4.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_4:1.b & 0x41) == 0)
                    x87_r7_1 = fconvert.t(data_62d16c)
            else
                long double temp2_1 = fconvert.t(*ecx_1)
                x87_r7_1 - temp2_1
                eax_4.w = (x87_r7_1 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_4:1.b & 0x41) == 0)
                    x87_r7_1 = fconvert.t(*ecx_1)
            ecx_1 += 4
            j = j_8
            j_8 -= 1
        while (j != 1)
        *edi_1 = fconvert.s(x87_r7_1)
        esi_1 += 4
        edi_1 = &edi_1[1]
        i = i_5
        i_5 -= 1
    while (i != 1)
    __builtin_memcpy(&(*var_8_1)[0x70], var_14_1, 0x540)
    __builtin_memcpy(var_8_1, var_14_1, 0xe0)
    __builtin_memcpy(&(*var_8_1)[0x38], var_14_1, 0xe0)
    int32_t (* ecx_2)[0x1dc0] = var_8_1
    int32_t i_7 = 8
    int32_t i_1
    
    do
        for (int32_t j_1 = 0x10; j_1 s> 0xffffffd8; )
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(j_1)
            long double x87_r7_4 =
                float.t((eax_7 ^ edx_2) - edx_2) * fconvert.t(arg5) + fconvert.t(arg4)
            long double temp5_1 = fconvert.t(0.0)
            x87_r7_4 - temp5_1
            int32_t eax_9
            eax_9.w = (x87_r7_4 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp5_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_9:1.b & 1) != 0)
                long double x87_r6_1 = fconvert.t(arg4)
                long double temp7_1 = fconvert.t(0f)
                x87_r6_1 - temp7_1
                eax_9.w = (x87_r6_1 < temp7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == temp7_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_9:1.b & 0x41) == 0)
                    x87_r7_4 = fconvert.t(0f)
            
            long double temp6_1 = fconvert.t(0.0)
            x87_r7_4 - temp6_1
            eax_9.w = (x87_r7_4 < temp6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp6_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_9:1.b & 0x41) == 0)
                long double x87_r6_2 = fconvert.t(arg4)
                long double temp8_1 = fconvert.t(0f)
                x87_r6_2 - temp8_1
                eax_9.w = (x87_r6_2 < temp8_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp8_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_9:1.b & 1) != 0)
                    x87_r7_4 = fconvert.t(0f)
            
            long double x87_r7_5 = x87_r7_4 + fconvert.t(*ecx_2)
            ecx_2 = &(*ecx_2)[1]
            j_1 -= 1
            (*ecx_2)[-1] = fconvert.s(x87_r7_5)
        
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)
    arg1 = 0
    void var_80c
    void* ebx_1 = &var_80c
    int32_t (* var_8_2)[0x1dc0] = var_8_1
    bool cond:2_1
    
    do
        int32_t var_20_1 = 2
        
        if (arg1 s>= 2)
            var_20_1 = arg1
        
        float* ecx_3 = var_10
        float* var_14_2 = ecx_3
        sub_4057a0(var_8_2, 
            fconvert.s(fconvert.t(*ecx_3) + fconvert.t(100.0) - float.t(var_20_1) * fconvert.t(10.0)
                - fconvert.t(30.0)))
        __builtin_memcpy(ebx_1, &var_10c, 0xe0)
        sub_4057a0(ebx_1, 
            fconvert.s(fconvert.t(100.0) - float.t(arg1) * fconvert.t(10f) - fconvert.t(30.0)))
        sub_405770(ebx_1, var_8_2)
        ebx_1 += 0xe0
        cond:2_1 = arg1 + 1 s< 8
        arg1 += 1
        var_8_2 = &(*var_8_2)[0x38]
    while (cond:2_1)
    int32_t* edi_6 = &(*var_8_1)[0x38]
    void var_72c
    float* esi_7 = &var_72c
    int32_t i_6 = 7
    void* eax_14
    int32_t i_2
    
    do
        eax_14 = &esi_7[-0x38]
        var_18_3 = esi_7
        sub_405740(var_18_3, eax_14)
        var_1c_2 = esi_7
        sub_405740(edi_6, var_1c_2)
        esi_7 = &esi_7[0x38]
        edi_6 = &edi_6[0x38]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    var_14_1 = eax_14 + 0x540
    var_18 = &var_18_3[4]
    var_10 = &var_10[1]
    var_8_1 = ecx_2
while (&var_18_3[4] s< 0x62d120)
arg4 = 0f
long double result
bool cond:9_1

do
    int32_t eax_16
    int32_t ecx_5
    eax_16, ecx_5 = _malloc(0x20)
    int32_t var_18_4 = ecx_5
    long double x87_r7_15 = float.t(arg4) * fconvert.t(0.5)
    *(eax_3 + (arg4 << 2)) = eax_16
    double var_28_1 = fconvert.d(x87_r7_15)
    long double x87_r7_18 = (x87_r7_15 + fconvert.t(5.9657840728759766))
        * fconvert.t(0.69314700365066528)
        * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10))
    long double x87_r6_7 = roundint.t(x87_r7_18)
    __fscale(__f2xm1(x87_r7_18 - x87_r6_7) + float.t(1), x87_r6_7)
    var_18_4.q = fconvert.d(x87_r6_7 / fconvert.t(arg2))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0_3
    st0_3, x87control_1 = sub_5f2080(mxcsr, x87control, var_18_4)
    int32_t eax_17
    int16_t x87control_2
    eax_17, x87control_2 = __ftol(x87control_1, st0_3)
    long double x87_r7_28 = __fyl2x(float.t(eax_17) * fconvert.t(arg2) + fconvert.t(1f), 
        fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
        * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)
    var_18_4.q = fconvert.d(x87_r7_28 + x87_r7_28)
    int16_t x87control_3
    long double st0_4
    st0_4, x87control_3 = sub_5f2940(mxcsr, x87control_2, var_18_4)
    float* eax_18
    int16_t x87control_4
    eax_18, x87control_4 = __ftol(x87control_3, st0_4)
    float* esi_8 = eax_18
    var_10 = esi_8
    long double x87_r7_36 = __fyl2x(float.t(eax_17 + 1) * fconvert.t(arg2), 
        fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
        * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)
    var_18_4.q = fconvert.d(x87_r7_36 + x87_r7_36)
    int16_t x87control_5
    long double st0_5
    st0_5, x87control_5 = sub_5f2080(mxcsr, x87control_4, var_18_4)
    int32_t eax_19
    eax_19, x87control = __ftol(x87control_5, st0_5)
    int32_t var_8_3 = eax_19
    
    if (esi_8 s> arg4)
        esi_8 = arg4
        var_10 = esi_8
    
    int32_t i_3 = 0
    
    if (esi_8 s< 0)
        var_10 = nullptr
    
    if (eax_19 s>= 0x11)
        var_8_3 = 0x10
    
    int32_t i_4 = 0
    
    do
        *(*(eax_3 + (arg4 << 2)) + (i_3 << 2)) = _malloc(0xe8)
        int32_t ecx_9
        int32_t edi_12
        
        if (arg3 s> 0)
            edi_12, ecx_9 = __memfill_u32(var_1c_2, 0x4479c000, arg3)
        float* eax_21 = var_10
        arg5 = eax_21
        int32_t __saved_ebp
        
        if (eax_21 s<= var_8_3)
            int32_t eax_22 = i_3 + (eax_21 << 3)
            int32_t var_18_5 = eax_22 * 0x38
            float* var_14_8 = &(&__saved_ebp)[eax_22 * 0x38 - 0x1f8b]
            bool cond:15_1
            
            do
                float esi_9 = 0f
                arg1 = 0
                long double x87_r7_40 = float.t(arg5) * fconvert.t(0.5)
                float edx_11
                bool cond:8_1
                
                do
                    long double x87_r5_6 = (float.t(arg1) * fconvert.t(0.125) + x87_r7_40
                        - fconvert.t(2.0625) + fconvert.t(5.9657840728759766))
                        * fconvert.t(0.69314700365066528)
                        * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10))
                    long double x87_r4_3 = roundint.t(x87_r5_6)
                    long double st0_7 =
                        __fscale(__f2xm1(x87_r5_6 - x87_r4_3) + float.t(1), x87_r4_3)
                    float eax_24
                    int16_t x87control_6
                    eax_24, x87control_6 = __ftol(x87control, x87_r4_3 / fconvert.t(arg2))
                    float edi_13 = eax_24
                    long double x87_r6_24 = (st0_7 - fconvert.t(1.9375)
                        + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                        * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10))
                    long double x87_r5_11 = roundint.t(x87_r6_24)
                    x87_r7_40 = __fscale(__f2xm1(x87_r6_24 - x87_r5_11) + float.t(1), x87_r5_11)
                    float eax_25
                    eax_25, x87control =
                        __ftol(x87control_6, x87_r5_11 / fconvert.t(arg2) + fconvert.t(1.0))
                    float ebx_3 = eax_25
                    
                    if (edi_13 s< 0)
                        edi_13 = 0f
                    
                    edx_11 = arg3
                    
                    if (edi_13 s> edx_11)
                        edi_13 = edx_11
                    
                    if (edi_13 s< esi_9)
                        esi_9 = edi_13
                    
                    if (ebx_3 s< 0)
                        ebx_3 = 0f
                    
                    if (ebx_3 s> edx_11)
                        ebx_3 = edx_11
                    
                    if (esi_9 s< ebx_3)
                        float* ecx_15 = &var_1c_2[esi_9]
                        
                        while (esi_9 s< edx_11)
                            long double x87_r6_28 = fconvert.t(*ecx_15)
                            int32_t edx_13 = var_18_5 + arg1
                            long double temp14_1 = fconvert.t(var_7f0c[edx_13])
                            x87_r6_28 - temp14_1
                            int32_t eax_26
                            eax_26.w = (x87_r6_28 < temp14_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_28, temp14_1) ? 1 : 0) << 0xa
                                | (x87_r6_28 == temp14_1 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax_26:1.b & 0x41) == 0)
                                *ecx_15 = (&__saved_ebp)[edx_13 - 0x1fc2]
                            
                            edx_11 = arg3
                            esi_9 += 1
                            ecx_15 = &ecx_15[1]
                            
                            if (esi_9 s>= ebx_3)
                                break
                    
                    cond:8_1 = arg1 + 1 s< 0x38
                    arg1 += 1
                while (cond:8_1)
                
                if (esi_9 s< edx_11)
                    int32_t j_9 = edx_11 i- esi_9
                    float** ecx_16 = &var_1c_2[esi_9]
                    int32_t j_2
                    
                    do
                        long double x87_r7_41 = fconvert.t(*ecx_16)
                        long double temp16_1 = fconvert.t(*var_14_8)
                        x87_r7_41 - temp16_1
                        float* eax_29
                        eax_29.w = (x87_r7_41 < temp16_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_41, temp16_1) ? 1 : 0) << 0xa
                            | (x87_r7_41 == temp16_1 ? 1 : 0) << 0xe
                        
                        if ((eax_29:1.b & 0x41) == 0)
                            *ecx_16 = *var_14_8
                        
                        ecx_16 = &ecx_16[1]
                        j_2 = j_9
                        j_9 -= 1
                    while (j_2 != 1)
                
                cond:15_1 = arg5 i+ 1 s<= var_8_3
                arg5 += 1
                var_18_5 += 0x1c0
                var_14_8 = &var_14_8[0x1c0]
            while (cond:15_1)
            i_3 = i_4
        
        if (arg4 i+ 1 s< 0x11)
            float esi_13 = 0f
            arg1 = 0
            float ecx_19
            bool cond:10_1
            
            do
                long double x87_r6_33 = (float.t(arg1) * fconvert.t(0.125) + fconvert.t(var_28_1)
                    - fconvert.t(2.0625) + fconvert.t(5.9657840728759766))
                    * fconvert.t(0.69314700365066528)
                    * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10))
                long double x87_r5_19 = roundint.t(x87_r6_33)
                long double st0_11 =
                    __fscale(__f2xm1(x87_r6_33 - x87_r5_19) + float.t(1), x87_r5_19)
                float eax_33
                int16_t x87control_7
                eax_33, x87control_7 = __ftol(x87control, x87_r5_19 / fconvert.t(arg2))
                float edi_14 = eax_33
                long double x87_r7_49 = (st0_11 - fconvert.t(1.9375)
                    + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                    * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10))
                long double x87_r6_38 = roundint.t(x87_r7_49)
                __fscale(__f2xm1(x87_r7_49 - x87_r6_38) + float.t(1), x87_r6_38)
                float eax_34
                eax_34, x87control =
                    __ftol(x87control_7, x87_r6_38 / fconvert.t(arg2) + fconvert.t(1.0))
                arg5 = eax_34
                
                if (edi_14 s< 0)
                    edi_14 = 0f
                
                ecx_19 = arg3
                
                if (edi_14 s> ecx_19)
                    edi_14 = ecx_19
                
                if (edi_14 s< esi_13)
                    esi_13 = edi_14
                
                float eax_35 = arg5
                
                if (eax_35 s< 0)
                    eax_35 = 0f
                    arg5 = 0f
                
                if (eax_35 s> ecx_19)
                    eax_35 = ecx_19
                    arg5 = eax_35
                
                if (esi_13 s< eax_35)
                    void* edx_19 = &var_1c_2[esi_13]
                    
                    while (esi_13 s< ecx_19)
                        long double x87_r7_53 = fconvert.t(*edx_19)
                        int32_t ecx_22 = arg1 + (i_3 + ((arg4 i+ 1) << 3)) * 0x38
                        long double temp13_1 = fconvert.t(var_7f0c[ecx_22])
                        x87_r7_53 - temp13_1
                        int32_t eax_39
                        eax_39.w = (x87_r7_53 < temp13_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_53, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_53 == temp13_1 ? 1 : 0) << 0xe
                        
                        if ((eax_39:1.b & 0x41) == 0)
                            *edx_19 = (&__saved_ebp)[ecx_22 - 0x1fc2]
                        
                        ecx_19 = arg3
                        esi_13 += 1
                        edx_19 += 4
                        
                        if (esi_13 s>= arg5)
                            break
                
                cond:10_1 = arg1 + 1 s< 0x38
                arg1 += 1
            while (cond:10_1)
            
            if (esi_13 s< ecx_19)
                int32_t eax_45 = i_3 + ((arg4 i+ 1) << 3)
                int32_t j_7 = arg3 i- esi_13
                float** edx_23 = &var_1c_2[esi_13]
                int32_t j_3
                
                do
                    long double x87_r7_54 = fconvert.t(*edx_23)
                    long double temp15_1 = fconvert.t((&__saved_ebp)[eax_45 * 0x38 - 0x1f8b])
                    x87_r7_54 - temp15_1
                    float* eax_46
                    eax_46.w = (x87_r7_54 < temp15_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_54, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_54 == temp15_1 ? 1 : 0) << 0xe
                    
                    if ((eax_46:1.b & 0x41) == 0)
                        *edx_23 = (&__saved_ebp)[eax_45 * 0x38 - 0x1f8b]
                    
                    edx_23 = &edx_23[1]
                    j_3 = j_7
                    j_7 -= 1
                while (j_3 != 1)
        
        arg1 = 0
        
        for (int32_t j_4 = 8; j_4 s< 0xe8; )
            long double x87_r7_61 = (float.t(arg1) * fconvert.t(0.125) + fconvert.t(var_28_1)
                - fconvert.t(2.0) + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10))
            long double x87_r6_46 = roundint.t(x87_r7_61)
            result = __fscale(__f2xm1(x87_r7_61 - x87_r6_46) + float.t(1), x87_r6_46)
            int32_t eax_47
            eax_47, x87control = __ftol(x87control, x87_r6_46 / fconvert.t(arg2))
            
            if (eax_47 s>= 0)
                int32_t edx_25 = *(eax_3 + (arg4 << 2))
                
                if (eax_47 s< arg3)
                    *(*(edx_25 + (i_3 << 2)) + j_4) = var_1c_2[eax_47]
                else
                    *(*(edx_25 + (i_3 << 2)) + j_4) = 0xc479c000
            else
                *(*(*(eax_3 + (arg4 << 2)) + (i_3 << 2)) + j_4) = 0xc479c000
            
            j_4 += 4
            arg1 += 1
        
        int32_t j_5 = 0
        arg1 = 0
        float* esi_14 = *(*(eax_3 + (arg4 << 2)) + (i_3 << 2))
        float* edx_30 = &esi_14[2]
        
        do
            long double x87_r7_64 = fconvert.t(*edx_30)
            long double temp11_1 = fconvert.t(-200f)
            x87_r7_64 - temp11_1
            int32_t eax_51
            eax_51.w = (x87_r7_64 < temp11_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_64, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_64 == temp11_1 ? 1 : 0) << 0xe
            
            if ((eax_51:1.b & 0x41) == 0)
                break
            
            j_5 += 1
            edx_30 = &edx_30[1]
        while (j_5 s< 0x10)
        
        int32_t j_6 = 0x37
        arg1 = 0x37
        *esi_14 = fconvert.s(float.t(j_5))
        void* esi_15 = *(*(eax_3 + (arg4 << 2)) + (i_3 << 2))
        float* edx_32 = esi_15 + 0xe4
        
        do
            long double x87_r7_66 = fconvert.t(*edx_32)
            long double temp12_1 = fconvert.t(-200f)
            x87_r7_66 - temp12_1
            int32_t eax_52
            eax_52.w = (x87_r7_66 < temp12_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_66, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_66 == temp12_1 ? 1 : 0) << 0xe
            
            if ((eax_52:1.b & 0x41) == 0)
                break
            
            j_6 -= 1
            edx_32 -= 4
        while (j_6 s> 0x11)
        
        i_3 += 1
        i_4 = i_3
        *(esi_15 + 4) = fconvert.s(float.t(j_6))
    while (i_3 s< 8)
    
    cond:9_1 = arg4 i+ 1 s< 0x11
    arg4 += 1
while (cond:9_1)
return result

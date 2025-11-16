// 函数: sub_404a30
// 地址: 0x404a30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t* esi = arg1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
__builtin_memset(esi, 0, 0x34)
int32_t* edi_1 = arg3
int32_t ebp = 1
int32_t var_24 = 0xffffff9d
int32_t var_20 = 1
esi[9] = *edi_1
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_5f2080(mxcsr, x87control, 
    fconvert.d(__fyl2x(float.t(*edi_1) * fconvert.t(8f), 
        fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11)) / __fyl2x(
        fconvert.t(2.0), fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
        + fconvert.t(0.5)))
int32_t eax_1
int16_t x87control_2
eax_1, x87control_2 = __ftol(x87control_1, st0 - fconvert.t(1.0))
long double x87_r7_8 = float.t(arg5)
long double x87_r6_4 = float.t(arg4)
double var_10 = fconvert.d(x87_r6_4)
esi[8] = eax_1
long double x87_r5_1 = float.t(1 << (eax_1.b + 1))
int32_t eax_2
int16_t x87control_3
eax_2, x87control_3 = __ftol(x87control_2, 
    (__fyl2x(x87_r7_8 * fconvert.t(0.25f) * fconvert.t(0.5) / x87_r6_4, 
        fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
        * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)) * x87_r5_1
        - float.t(*edi_1))
esi[7] = eax_2
int32_t eax_3
int16_t x87control_4
eax_3, x87control_4 = __ftol(x87control_3, 
    (__fyl2x((float.t(arg4) + fconvert.t(0.25f)) * x87_r7_8 * fconvert.t(0.5) / x87_r6_4, 
        fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
        * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)) * x87_r5_1
        + fconvert.t(0.5))
int32_t edi_3 = arg4
int32_t ebx = edi_3 << 2
esi[0xa] = eax_3 - eax_2 + 1
esi[4] = _malloc(ebx)
esi[5] = _malloc(ebx)
esi[6] = _malloc(ebx)
esi[1] = arg2
*esi = edi_3
esi[0xb] = arg5
esi[0xc] = 0x3f800000

if (arg5 s< 0x6590)
    esi[0xc] = 0
else if (arg5 s< 0x9470)
    esi[0xc] = 0x3f70a3d7
else if (arg5 s> 0xb3b0)
    esi[0xc] = 0x3fa33333

int32_t eax_11 = 0
int32_t ebx_1 = 0
arg3 = &data_62d014
double var_8 = fconvert.d(float.t(arg5))
void* ecx_1

do
    long double x87_r7_16 = (float.t(eax_11 + 1) * fconvert.t(0.125) - fconvert.t(2.0)
        + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
        * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10))
    long double x87_r6_8 = roundint.t(x87_r7_16)
    __fscale(__f2xm1(x87_r7_16 - x87_r6_8) + float.t(1), x87_r6_8)
    long double x87_r7_18 = x87_r6_8 * fconvert.t(var_10)
    int16_t x87control_5
    long double st0_3
    st0_3, x87control_5 = sub_5f2080(mxcsr, x87control_4, 
        fconvert.d((x87_r7_18 + x87_r7_18) / fconvert.t(var_8) + fconvert.t(0.5)))
    int32_t eax_13
    eax_13, x87control_4 = __ftol(x87control_5, st0_3)
    ecx_1 = arg3
    long double x87_r7_23 = fconvert.t(*(ecx_1 - 4))
    
    if (ebx_1 s< eax_13)
        arg3 = fconvert.s((fconvert.t(*ecx_1) - x87_r7_23) / float.t(eax_13 - ebx_1))
        
        while (ebx_1 s< edi_3)
            ebx_1 += 1
            *(esi[4] + (ebx_1 << 2) - 4) = fconvert.s(x87_r7_23 + fconvert.t(100.0))
            x87_r7_23 = x87_r7_23 + fconvert.t(arg3)
            
            if (ebx_1 s>= eax_13)
                break
    
    eax_11 += 1
    arg3 = ecx_1 + 4
while (ecx_1 + 4 s< &data_62d170)
int32_t ebx_2 = 0

if (edi_3 s> 0)
    int32_t temp0_4 = divs.dp.d(sx.q(arg5), edi_3 * 2)
    arg3 = nullptr
    arg1 = 0
    int32_t edx_6 = temp0_4 * temp0_4
    
    do
        long double x87_r7_24 = float.t(arg3)
        int32_t eax_21 = *(arg2 + 0x78) + var_24
        float var_18_1 = fconvert.s(
            __fpatan(float.t(1), float.t(arg1 * ebx_2) * fconvert.t(1.84999998e-08f))
            * fconvert.t(2.2400000095367432)
            + __fpatan(float.t(1), x87_r7_24 * fconvert.t(0.000739999989f))
            * fconvert.t(13.100000381469727) + x87_r7_24 * fconvert.t(9.99999975e-05f))
        
        if (eax_21 s< ebx_2)
            int32_t ebp_2 = temp0_4 * var_24
            float var_14_1 = fconvert.s(fconvert.t(var_18_1) - fconvert.t(*(arg2 + 0x70)))
            int32_t var_1c_1 = eax_21
            int32_t edi_7 = edx_6 * var_24
            arg5 = ebp_2
            bool cond:9_1
            
            do
                long double x87_r7_29 = float.t(arg5)
                long double x87_r7_31 =
                    __fpatan(float.t(1), float.t(edi_7 * var_24) * fconvert.t(1.84999998e-08f))
                    * fconvert.t(2.2400000095367432)
                    + __fpatan(float.t(1), x87_r7_29 * fconvert.t(0.000739999989f))
                    * fconvert.t(13.100000381469727) + x87_r7_29 * fconvert.t(9.99999975e-05f)
                long double x87_r6_33 = fconvert.t(var_14_1)
                x87_r6_33 - x87_r7_31
                int32_t eax_23
                eax_23.w = (x87_r6_33 < x87_r7_31 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_33, x87_r7_31) ? 1 : 0) << 0xa
                    | (x87_r6_33 == x87_r7_31 ? 1 : 0) << 0xe
                
                if ((eax_23:1.b & 0x41) != 0)
                    break
                
                edi_7 += edx_6
                ebp_2 += temp0_4
                var_24 += 1
                arg5 = ebp_2
                cond:9_1 = var_1c_1 + 1 s< ebx_2
                var_1c_1 += 1
            while (cond:9_1)
            ebp = var_20
        
        if (ebp s<= arg4)
            int32_t eax_30 = *(arg2 + 0x7c) + ebx_2
            int32_t edi_9 = edx_6 * ebp
            arg5 = temp0_4 * ebp
            
            do
                if (ebp s>= eax_30)
                    long double x87_r7_32 = float.t(arg5)
                    long double x87_r7_34 =
                        __fpatan(float.t(1), float.t(edi_9 * ebp) * fconvert.t(1.84999998e-08f))
                        * fconvert.t(2.2400000095367432)
                        + __fpatan(float.t(1), x87_r7_32 * fconvert.t(0.000739999989f))
                        * fconvert.t(13.100000381469727) + x87_r7_32 * fconvert.t(9.99999975e-05f)
                    long double x87_r6_42 = fconvert.t(var_18_1) + fconvert.t(*(arg2 + 0x74))
                    x87_r6_42 - x87_r7_34
                    void* eax_35
                    eax_35.w = (x87_r6_42 < x87_r7_34 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_42, x87_r7_34) ? 1 : 0) << 0xa
                        | (x87_r6_42 == x87_r7_34 ? 1 : 0) << 0xe
                    
                    if ((eax_35:1.b & 0x41) != 0)
                        break
                
                ebp += 1
                edi_9 += edx_6
                arg5 += temp0_4
            while (ebp s<= arg4)
            
            var_20 = ebp
        
        ebx_2 += 1
        *(esi[6] + (ebx_2 << 2) - 4) = (var_24 << 0x10) + ebp - 0x10001
        arg3 += temp0_4
        edi_3 = arg4
        arg1 += edx_6
    while (ebx_2 s< edi_3)

int32_t ebx_3 = 0
arg4 = 0

if (edi_3 s> 0)
    do
        int32_t eax_44
        eax_44, x87control_4 = __ftol(x87control_4, 
            (__fyl2x(
                (float.t(arg4) + fconvert.t(0.25f)) * fconvert.t(var_8) * fconvert.t(0.5)
                    / fconvert.t(var_10), 
                fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
                * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766))
                * float.t(1 << ((esi[8]).b + 1)) + fconvert.t(0.5))
        ebx_3 += 1
        arg4 = ebx_3
        *(esi[5] + (ebx_3 << 2) - 4) = eax_44
    while (ebx_3 s< edi_3)

int32_t ecx_8 = *(arg2 + 0x18)
double var_3c_2
var_3c_2:4.d = *(arg2 + 0x1c)
var_3c_2.d = ecx_8
int32_t var_44_1 = ecx_8
int32_t eax_47
int16_t x87control_6
long double st0_4
st0_4, eax_47, x87control_6 = sub_404fc0(arg2 + 0x24, 
    fconvert.s(fconvert.t(var_8) * fconvert.t(0.5) / fconvert.t(var_10)), edi_3, var_3c_2)
int32_t var_4c = 0xc
esi[2] = eax_47
esi[3] = _malloc(0xc)

for (int32_t i = 0; i s< 0xc; )
    var_3c_2:4.d = edi_3 << 2
    i += 4
    *(i + esi[3] - 4) = _malloc()

int32_t ebx_4 = 0
arg4 = 0

if (edi_3 s<= 0)
    return st0_4

long double x87_r6_46 = fconvert.t(var_10)
long double x87_r6_47 = x87_r6_46 + x87_r6_46

do
    long double x87_r5_25 = __fyl2x(
        (float.t(arg4) + fconvert.t(0.5)) * fconvert.t(var_8) / x87_r6_47, 
        fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
        * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)
    long double x87_r5_26 = x87_r5_25 + x87_r5_25
    long double temp2_1 = fconvert.t(0f)
    x87_r5_26 - temp2_1
    void* eax_50
    eax_50.w = (x87_r5_26 < temp2_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_26, temp2_1) ? 1 : 0) << 0xa
        | (x87_r5_26 == temp2_1 ? 1 : 0) << 0xe | 0x2800
    
    if ((eax_50:1.b & 1) == 0)
        long double temp3_1 = fconvert.t(16f)
        x87_r5_26 - temp3_1
        eax_50.w = (x87_r5_26 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_26, temp3_1) ? 1 : 0) << 0xa
            | (x87_r5_26 == temp3_1 ? 1 : 0) << 0xe | 0x2800
        
        if ((eax_50:1.b & 1) == 0)
            x87_r5_26 = fconvert.t(16f)
    else
        x87_r5_26 = fconvert.t(0f)
    
    int32_t eax_51
    eax_51, x87control_6 = __ftol(x87control_6, x87_r5_26)
    int32_t i_1 = 0
    long double x87_r5_27 = x87_r5_26 - float.t(eax_51)
    eax_50 = (eax_51 << 2) + 0x88
    long double x87_r4_28 = fconvert.t(1.0) - x87_r5_27
    
    do
        float* edx_10 = esi[1]
        i_1 += 4
        long double x87_r3_5 = fconvert.t(*(edx_10 + eax_50 - 4)) * x87_r4_28
        long double x87_r2_2 = x87_r5_27 * fconvert.t(*(edx_10 + eax_50))
        eax_50 += 0x44
        *(*(i_1 + esi[3] - 4) + (ebx_4 << 2)) = fconvert.s(x87_r3_5 + x87_r2_2)
    while (i_1 s< 0xc)
    
    ebx_4 += 1
    arg4 = ebx_4
    x87_r6_47 = x87_r4_28
while (ebx_4 s< edi_3)

return x87_r6_47

// 函数: sub_4b7b00
// 地址: 0x4b7b00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg6
int32_t ecx = arg8

if (edx s> ecx)
    int32_t eax = edx
    edx = ecx
    ecx = eax
    arg6 = edx
    arg8 = ecx

int32_t* ebx = arg7
int32_t* edi = arg9

if (ebx s> edi)
    int32_t* eax_1 = ebx
    ebx = edi
    edi = eax_1

void* var_3c_1 = arg2 + ebx
int32_t var_c = arg3 + edx
int32_t esi_4 = (ecx - edx + 1) s/ 0xa
int32_t eax_6 = (edi - ebx + 1) s/ 0xa

if (esi_4 s< 0x10)
    esi_4 = 0x10

if (eax_6 s< 0x10)
    eax_6 = 0x10

if (esi_4 s< eax_6)
    esi_4 = eax_6

int32_t* eax_7 = var_3c_1
int32_t ecx_7 = arg6 - esi_4
int32_t ebx_1 = ebx - esi_4
int32_t edx_6 = arg8 + esi_4
arg6 = ecx_7
void* edi_1 = edi + esi_4
arg8 = edx_6
arg9 = edi_1
int32_t var_48_1
int32_t var_38
int32_t var_2c
int32_t var_28_1
void* var_20_1
int32_t var_14_1
int32_t var_10
int32_t esi_8

if (eax_7 s<= ebx_1)
label_4b7c32:
    
    if (eax_7 s<= edi_1)
        esi_8 = var_c
        var_28_1 = edx_6
        
        if (eax_7 s> ebx_1)
            ebx_1 = eax_7
        
        var_2c = ecx_7
        var_10 = ebx_1
        
        if (esi_8 s< ecx_7)
            var_20_1 = ebx_1
            var_38 = edi_1
            var_14_1 = ecx_7
            var_48_1 = edx_6
            goto label_4b7ca0
        
        var_38 = ebx_1
        
        if (esi_8 s> edx_6)
            var_20_1 = edi_1
            var_14_1 = edx_6
            goto label_4b7c92
        
        var_20_1 = ebx_1
        var_14_1 = esi_8
        var_48_1 = edx_6
        eax_7 = var_3c_1
        
        if (esi_8 s< (edx_6 - ecx_7 + 1) s>> 1)
            goto label_4b7ca0
        
        goto label_4b7c92
else
    if (eax_7 s>= edi_1)
        goto label_4b7bd4
    
    void* esi_7 = edi_1 - ebx_1 + 1
    
    if (esi_7 s> 0)
        ecx_7 = arg6
        eax_7 = var_3c_1
        esi_7 = ebx_1 + modu.dp.d(0:(sub_4d18c0(2)), esi_7)
        edx_6 = arg8
    
    if (eax_7 s<= esi_7)
        goto label_4b7c32
    
    edi_1 = eax_7
    arg9 = eax_7
label_4b7bd4:
    esi_8 = var_c
    var_28_1 = ecx_7
    var_2c = edx_6
    var_10 = edi_1
    
    if (esi_8 s>= ecx_7)
        var_20_1 = edi_1
        
        if (esi_8 s> edx_6)
            var_38 = ebx_1
            edi_1 = ebx_1
            var_14_1 = edx_6
        label_4b7c92:
            var_48_1 = ecx_7
            goto label_4b7ca0
        
        var_38 = edi_1
        var_14_1 = esi_8
        edi_1 = ebx_1
        eax_7 = var_3c_1
        
        if (esi_8 s>= (edx_6 - ecx_7 + 1) s>> 1)
            goto label_4b7c92
        
        var_48_1 = edx_6
        goto label_4b7ca0
    
    var_38 = edi_1
    edi_1 = ebx_1
    var_20_1 = ebx_1
    var_14_1 = ecx_7
    var_48_1 = edx_6
label_4b7ca0:
    var_2c -= esi_8
    var_38 -= eax_7
    var_20_1.q = _mm_cvtepi32_pd(zx.q(var_20_1 - eax_7))
    var_20_1.q = _mm_cvtepi32_pd(zx.q(var_28_1 - esi_8))
    sub_603a7a()
    var_20_1.q = fconvert.d(fconvert.t(var_20_1.q))
    int32_t eax_17 = int.d(var_20_1.q * 1000.0)
    var_28_1.q = _mm_cvtepi32_pd(zx.q(var_38))
    var_28_1.q = _mm_cvtepi32_pd(zx.q(var_2c))
    int16_t x87control_1 = sub_603a7a()
    double xmm1_1 = 1000.0
    var_28_1.q = fconvert.d(fconvert.t(var_28_1.q))
    int32_t ecx_10 = int.d(var_28_1.q * xmm1_1)
    uint64_t xmm0_13
    
    if (eax_17 s< ecx_10)
        if (ecx_10 != eax_17)
            xmm1_1 = 1000.0
            xmm0_13 = zx.q(modu.dp.d(0:(sub_4d18c0(2)), ecx_10 - eax_17) + eax_17)
        else
            xmm0_13 = zx.q(eax_17)
    else if (eax_17 != ecx_10)
        xmm1_1 = 1000.0
        xmm0_13 = zx.q(modu.dp.d(0:(sub_4d18c0(2)), eax_17 - ecx_10) + eax_17)
    else
        xmm0_13 = zx.q(eax_17)
    
    double xmm0_14 = _mm_cvtepi32_pd(xmm0_13)
    int32_t edx_17 = var_14_1 - esi_8
    void* ecx_13 = var_10 - var_3c_1
    int32_t var_48_2 = var_48_1 - esi_8
    void* edi_2 = edi_1 - var_3c_1
    var_38.q = xmm0_14 / xmm1_1
    int32_t mxcsr
    int16_t x87control_2
    double xmm0_18
    x87control_2, xmm0_18 = __libm_sse2_sqrt_precise(mxcsr, x87control_1, 
        _mm_cvtepi32_pd(zx.q(ecx_13 * ecx_13 + edx_17 * edx_17)))
    var_10 = int.d(xmm0_18)
    int16_t x87control_3
    double xmm0_21
    x87control_3, xmm0_21 = __libm_sse2_sqrt_precise(mxcsr, x87control_2, 
        _mm_cvtepi32_pd(zx.q(edi_2 * edi_2 + var_48_2 * var_48_2)))
    int32_t eax_24 = int.d(xmm0_21)
    int32_t var_14_2 = eax_24
    int32_t edi_7 = (eax_24 - var_10) * arg11 s/ 0x64
    uint32_t temp1_3
    
    if (edi_7 s> 0)
        temp1_3 = modu.dp.d(0:(sub_4d18c0(2)), edi_7)
        var_10 += temp1_3
        var_14_2 += temp1_3
    
    int32_t var_28_3
    int32_t var_20_3
    
    if (edi_7 s<= 0 || temp1_3 s<= 0)
        var_28_3 = arg5
        var_20_3 = arg4
    else
        int32_t esi_10 = edi_7 - temp1_3
        int32_t eax_31 = edi_7 * 0x46 s/ 0x64
        
        if (esi_10 s< eax_31)
            esi_10 = eax_31
        
        var_20_3 = divs.dp.d(sx.q(esi_10 * arg4), edi_7)
        esi_8 = var_c
        var_28_3 = divs.dp.d(sx.q(esi_10 * arg5), edi_7)
    
    int16_t x87control_4
    double xmm0_23
    x87control_4, xmm0_23 = __libm_sse2_cos_precise(mxcsr, x87control_3, var_38.q)
    double xmm1_2 = _mm_cvtepi32_pd(zx.q(var_10))
    double xmm0_25 = var_38.q
    var_48_2.q = xmm0_23
    int32_t edi_8 = int.d(xmm1_2 * xmm0_23 + _mm_cvtepi32_pd(zx.q(esi_8)))
    var_2c = edi_8
    double xmm0_26 = __libm_sse2_sin_precise(mxcsr, x87control_4, xmm0_25)
    int32_t eax_42 = var_c
    double xmm1_6 = xmm0_26 * _mm_cvtepi32_pd(zx.q(var_10))
    double xmm4_2 = _mm_cvtepi32_pd(zx.q(var_3c_1))
    double xmm2_6 = _mm_cvtepi32_pd(zx.q(eax_42))
    *arg12 = edi_8
    int32_t esi_12 = int.d(xmm1_6 + xmm4_2)
    double xmm1_9 = _mm_cvtepi32_pd(zx.q(var_14_2))
    *arg13 = esi_12
    var_38 = esi_12
    int32_t ecx_20 = int.d(xmm1_9 * xmm0_26 + xmm4_2)
    int32_t edx_29 = int.d(xmm1_9 f* var_48_2.q + xmm2_6)
    var_10 = ecx_20
    *arg14 = edx_29
    var_c = edx_29
    *arg15 = ecx_20
    *arg16 = var_20_3 * 0xa
    *arg17 = var_28_3 * 0xa
    
    if (sub_4c08c0(&var_c, &var_38, &var_2c, &var_c, &var_10, arg6, ebx_1, arg8, arg9) == 0)
        *arg19 = 3
        *arg21 = 3
        return arg21
    
    int32_t edx_32
    
    if (arg10 != 0)
        int32_t edx_33 = var_2c
        *arg18 = edx_33
        
        if (edx_33 s> arg6)
            int32_t ecx_27 = 0
            
            if (edx_33 s>= arg8)
                ecx_27 = 2
            
            *arg19 = ecx_27
        else
            *arg19 = 1
        
        edx_32 = var_38
    else
        int32_t edx_31 = var_c
        *arg18 = edx_31
        
        if (edx_31 s> arg6)
            int32_t ecx_26 = 0
            edx_32 = var_10
            
            if (edx_31 s>= arg8)
                ecx_26 = 2
            
            *arg19 = ecx_26
        else
            edx_32 = var_10
            *arg19 = 1
    
    *arg20 = edx_32
    eax_7 = arg21
    
    if (edx_32 s<= ebx_1)
        *eax_7 = 1
        return eax_7
    
    int32_t ecx_28 = 0
    
    if (edx_32 s>= arg9)
        ecx_28 = 2
    
    *eax_7 = ecx_28
return eax_7

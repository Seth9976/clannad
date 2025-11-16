// 函数: sub_67d630
// 地址: 0x67d630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edx = arg3
int32_t ecx = arg2
int32_t ebx
ebx.b = 1
int32_t var_c = ecx

if (*(arg1 + 0x38) != 0)
    if (*(arg1 + 0x14) s> ecx || ecx s>= *(arg1 + 0x1c) || *(arg1 + 0x18) s> edx
            || edx s>= *(arg1 + 0x20))
        ebx = 0
    else
        ebx = 1
    
    ebx.b &= 1

double var_1c
int32_t* eax_6

if (*(arg1 + 0x38) == 0 || ebx.b != 0)
    int32_t eax_2 = *(arg1 + 0x2c)
    
    if (eax_2 != 0)
        double xmm0_4 = _mm_cvtepi32_pd(zx.q(eax_2)) * -3.1415927410125732 / 1800.0
        var_1c = xmm0_4
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        double xmm0_5
        x87control_1, xmm0_5 = __libm_sse2_cos_precise(mxcsr, x87control, xmm0_4)
        int32_t esi_1 = *(arg1 + 0x24)
        double xmm0_7 = _mm_cvtepi32_pd(zx.q(var_c - esi_1))
        double xmm0_9 = __libm_sse2_sin_precise(mxcsr, x87control_1, var_1c)
        int32_t eax_5 = *(arg1 + 0x28)
        double xmm3_2 = _mm_cvtepi32_pd(zx.q(edx - eax_5))
        ecx = int.d(xmm0_7 * xmm0_5 - xmm3_2 * xmm0_9 + _mm_cvtepi32_pd(zx.q(esi_1)))
        var_c = ecx
        arg2 = ecx
        edx = int.d(xmm0_9 * xmm0_7 + xmm3_2 * xmm0_5 + _mm_cvtepi32_pd(zx.q(eax_5)))
        arg3 = edx
    
    eax_6 = *(arg1 + 0x3c)

char eax_20

if ((*(arg1 + 0x38) == 0 || ebx.b != 0) && eax_6 != 0)
    int32_t ecx_1 = eax_6[7]
    int32_t eax_7 = eax_6[8]
    double var_2c
    var_2c:4.d = neg.d(eax_7)
    char var_10_1 = 0
    var_1c:4.d = *(*(arg1 + 0x3c) + 8) - eax_7
    int32_t temp0_1 = divs.dp.d(sx.q(*(*(arg1 + 0x3c) + 4) * (var_c - *(arg1 + 0x24))), 
        *(arg1 + 0xc) - *(arg1 + 4))
    int32_t temp0_2 =
        divs.dp.d(sx.q(eax_6[2] * (edx - *(arg1 + 0x28))), *(arg1 + 0x10) - *(arg1 + 8))
    
    if (neg.d(ecx_1) s> temp0_1 || temp0_1 s>= *(*(arg1 + 0x3c) + 4) - ecx_1
            || var_2c:4.d s> temp0_2 || temp0_2 s>= var_1c:4.d)
        eax_20 = var_10_1
    else
        sub_6f54d0(eax_6, &var_1c:4, temp0_1, temp0_2)
        eax_20 = var_10_1
        
        if (var_1c:7.b u> 0)
            eax_20 = 1
else if (*(arg1 + 4) s> ecx || ecx s>= *(arg1 + 0xc) || *(arg1 + 8) s> edx
        || edx s>= *(arg1 + 0x10))
    eax_20 = 0
else
    eax_20 = 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_20 & ebx.b

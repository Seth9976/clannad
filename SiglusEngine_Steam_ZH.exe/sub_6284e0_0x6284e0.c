// 函数: sub_6284e0
// 地址: 0x6284e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg1

if (edi == 0)
    return 

char* ebx_1 = arg2

if (ebx_1 == 0)
    return 

char eax_1

if (*edi == 0 || *ebx_1 == 0)
    eax_1 = 0
else
    eax_1 = 1

float xmm1_1 = *(edi + 0x18)
*edi = eax_1
float xmm1_4 = (xmm1_1 f- *(ebx_1 + 0x24)) f* *(ebx_1 + 0x30) f+ *(ebx_1 + 0x24)
*(edi + 0x18) = xmm1_4
float xmm1_8 = (*(edi + 0x1c) f- *(ebx_1 + 0x28)) f* *(ebx_1 + 0x34) f+ *(ebx_1 + 0x28)
*(edi + 0x1c) = xmm1_8
float xmm1_12 = (*(edi + 0x20) f- *(ebx_1 + 0x2c)) f* *(ebx_1 + 0x38) f+ *(ebx_1 + 0x2c)
*(edi + 0x20) = xmm1_12
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_3
x87control_1, xmm0_3 = __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(*(ebx_1 + 0x44)))
float xmm1_14 = fconvert.s(xmm0_3) * (xmm1_4 f- *(ebx_1 + 0x24))
int16_t x87control_2
double xmm0_8
x87control_2, xmm0_8 = __libm_sse2_sin_precise(mxcsr, x87control_1, _mm_cvtps_pd(*(ebx_1 + 0x44)))
float xmm0_13 = xmm1_14 - fconvert.s(xmm0_8) * (xmm1_8 f- *(ebx_1 + 0x28)) f+ *(ebx_1 + 0x24)
*(edi + 0x18) = xmm0_13
int16_t x87control_3
double xmm0_16
x87control_3, xmm0_16 = __libm_sse2_sin_precise(mxcsr, x87control_2, _mm_cvtps_pd(*(ebx_1 + 0x44)))
float xmm2_5 = fconvert.s(xmm0_16) * (xmm1_4 f- *(ebx_1 + 0x24))
    + fconvert.s(__libm_sse2_cos_precise(mxcsr, x87control_3, _mm_cvtps_pd(*(ebx_1 + 0x44))))
    * (xmm1_8 f- *(ebx_1 + 0x28)) f+ *(ebx_1 + 0x28)
*(edi + 0x1c) = xmm2_5
*(edi + 0x18) = *(ebx_1 + 0x18) + xmm0_13
*(edi + 0x1c) = *(ebx_1 + 0x1c) + xmm2_5
*(edi + 0x20) = *(ebx_1 + 0x20) + xmm1_12
*(edi + 0x30) = *(ebx_1 + 0x30) f* *(edi + 0x30)
*(edi + 0x34) = *(ebx_1 + 0x34) f* *(edi + 0x34)
*(edi + 0x38) = *(edi + 0x38) f* *(ebx_1 + 0x38)
*(edi + 0x3c) = *(ebx_1 + 0x3c) f+ *(edi + 0x3c)
uint32_t eax_2 = zx.d(edi[0x78])
*(edi + 0x40) = *(ebx_1 + 0x40) f+ *(edi + 0x40)
*(edi + 0x44) = *(edi + 0x44) f+ *(ebx_1 + 0x44)
edi[0x78] = (zx.d(ebx_1[0x78]) * eax_2 s/ 0xff).b
edi[0x79] = 0xff - ((0xff - zx.d(ebx_1[0x79])) * (0xff - zx.d(edi[0x79])) s/ 0xff).b
edi[0x7a] = 0xff - ((0xff - zx.d(ebx_1[0x7a])) * (0xff - zx.d(edi[0x7a])) s/ 0xff).b
edi[0x7b] = 0xff - ((0xff - zx.d(ebx_1[0x7b])) * (0xff - zx.d(edi[0x7b])) s/ 0xff).b
uint32_t ecx_19 = zx.d(edi[0x80])
edi[0x7c] = 0xff - ((0xff - zx.d(ebx_1[0x7c])) * (0xff - zx.d(edi[0x7c])) s/ 0xff).b
uint32_t esi_9 = zx.d(ebx_1[0x80])

if (esi_9 + ecx_19 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(esi_9 * 0xfe01), 0xfe01 - (0xff - esi_9) * (0xff - ecx_19))
    arg1[0x7d] = ((zx.d(arg2[0x7d]) * temp0_1 + zx.d(arg1[0x7d]) * (0xff - temp0_1)) s/ 0xff).b
    arg1[0x7e] = ((zx.d(arg2[0x7e]) * temp0_1 + zx.d(arg1[0x7e]) * (0xff - temp0_1)) s/ 0xff).b
    edi = arg1
    ebx_1 = arg2
    edi[0x7f] = ((zx.d(arg2[0x7f]) * temp0_1 + zx.d(edi[0x7f]) * (0xff - temp0_1)) s/ 0xff).b

edi[0x80] = 0xff - ((0xff - zx.d(ebx_1[0x80])) * (0xff - ecx_19) s/ 0xff).b
uint32_t ecx_34 = zx.d(ebx_1[0x81])
uint32_t eax_45 = zx.d(edi[0x81])
uint32_t ecx_35 = ecx_34 + eax_45

if (ecx_34 + eax_45 s< 0)
    ecx_35 = 0
else if (ecx_35 s> 0xff)
    ecx_35 = 0xff

uint32_t eax_46 = zx.d(edi[0x82])
edi[0x81] = ecx_35.b
uint32_t ecx_36 = zx.d(ebx_1[0x82])
uint32_t ecx_37 = ecx_36 + eax_46

if (ecx_36 + eax_46 s< 0)
    ecx_37 = 0
else if (ecx_37 s> 0xff)
    ecx_37 = 0xff

uint32_t eax = zx.d(edi[0x83])
edi[0x82] = ecx_37.b
uint32_t ecx_38 = zx.d(ebx_1[0x83])
uint32_t ecx_39 = ecx_38 + eax

if (ecx_38 + eax s< 0)
    ecx_39 = 0
else if (ecx_39 s> 0xff)
    ecx_39 = 0xff

edi[0x83] = ecx_39.b

if (ebx_1[4] != 0)
    if (edi[4] == 0)
        edi[4] = 1
        *(edi + 0x58) = *(ebx_1 + 0x58)
    else
        void* ecx_40 = &edi[0x58]
        
        if (*(edi + 0x58) s< *(ebx_1 + 0x58))
            ecx_40 = &ebx_1[0x58]
        
        void* ecx_41 = &edi[0x5c]
        *(edi + 0x58) = *ecx_40
        
        if (*(edi + 0x5c) s< *(ebx_1 + 0x5c))
            ecx_41 = &ebx_1[0x5c]
        
        void* ecx_42 = &edi[0x60]
        *(edi + 0x5c) = *ecx_41
        
        if (*(ebx_1 + 0x60) s< *(edi + 0x60))
            ecx_42 = &ebx_1[0x60]
        
        void* ecx_43 = &edi[0x64]
        *(edi + 0x60) = *ecx_42
        
        if (*(ebx_1 + 0x64) s< *(edi + 0x64))
            ecx_43 = &ebx_1[0x64]
        
        *(edi + 0x64) = *ecx_43

if (*(edi + 0x84) == 0xffffffff)
    *(edi + 0x84) = *(ebx_1 + 0x84)
    eax.b = ebx_1[0x88]
    edi[0x88] = eax.b

if (*(edi + 0x98) == 0)
    *(edi + 0x98) = *(ebx_1 + 0x98)

// 函数: sub_6289b0
// 地址: 0x6289b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return 

int32_t eax_1

if (*arg1 == 0 || *arg2 == 0)
    eax_1 = 0
else
    eax_1 = 1

*arg1 = eax_1
int32_t eax_3 = arg1[3] + arg2[3]
bool cond:0_1 = arg1[4] != 0
arg1[2] += arg2[2]
arg1[3] = eax_3

if (not(cond:0_1))
    arg1[4] = arg2[4]

float xmm1_4 = (arg1[5] f- arg2[0xb]) f* arg2[0xe] f+ arg2[0xb]
arg1[5] = xmm1_4
float xmm1_8 = (arg1[6] f- arg2[0xc]) f* arg2[0xf] f+ arg2[0xc]
arg1[6] = xmm1_8
float xmm1_12 = (arg1[7] f- arg2[0xd]) f* arg2[0x10] f+ arg2[0xd]
arg1[7] = xmm1_12
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_3
x87control_1, xmm0_3 = __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(arg2[0x13]))
float xmm1_14 = fconvert.s(xmm0_3) * (xmm1_4 f- arg2[0xb])
int16_t x87control_2
double xmm0_8
x87control_2, xmm0_8 = __libm_sse2_sin_precise(mxcsr, x87control_1, _mm_cvtps_pd(arg2[0x13]))
float xmm0_13 = xmm1_14 - fconvert.s(xmm0_8) * (xmm1_8 f- arg2[0xc]) f+ arg2[0xb]
arg1[5] = xmm0_13
int16_t x87control_3
double xmm0_16
x87control_3, xmm0_16 = __libm_sse2_sin_precise(mxcsr, x87control_2, _mm_cvtps_pd(arg2[0x13]))
float xmm2_5 = fconvert.s(xmm0_16) * (xmm1_4 f- arg2[0xb])
    + fconvert.s(__libm_sse2_cos_precise(mxcsr, x87control_3, _mm_cvtps_pd(arg2[0x13])))
    * (xmm1_8 f- arg2[0xc]) f+ arg2[0xc]
arg1[6] = xmm2_5
arg1[5] = arg2[5] f+ xmm0_13
arg1[6] = arg2[6] f+ xmm2_5
arg1[7] = arg2[7] f+ xmm1_12
arg1[0xe] = arg2[0xe] f* arg1[0xe]
arg1[0xf] = arg1[0xf] f* arg2[0xf]
arg1[0x10] = arg1[0x10] f* arg2[0x10]
arg1[0x11] = arg2[0x11] f+ arg1[0x11]
arg1[0x12] = arg2[0x12] f+ arg1[0x12]
arg1[0x13] = arg2[0x13] f+ arg1[0x13]

if (arg2[0x14] != 0)
    int32_t eax_12
    
    if (arg1[0x14] == 0)
        arg1[0x14] = 1
        arg1[0x15] = arg2[0x15]
        arg1[0x16] = arg2[0x16]
        arg1[0x17] = arg2[0x17]
        eax_12 = arg2[0x18]
    else
        void* ecx_2 = &arg1[0x15]
        
        if (arg2[0x15] s< arg1[0x15])
            ecx_2 = &arg2[0x15]
        
        void* ecx_3 = &arg1[0x16]
        arg1[0x15] = *ecx_2
        
        if (arg2[0x16] s< arg1[0x16])
            ecx_3 = &arg2[0x16]
        
        void* ecx_4 = &arg1[0x17]
        arg1[0x16] = *ecx_3
        
        if (arg1[0x17] s< arg2[0x17])
            ecx_4 = &arg2[0x17]
        
        void* ecx_5 = &arg1[0x18]
        arg1[0x17] = *ecx_4
        
        if (arg1[0x18] s< arg2[0x18])
            ecx_5 = &arg2[0x18]
        
        eax_12 = *ecx_5
    
    arg1[0x18] = eax_12

arg1[0x1e] = arg2[0x1e] * arg1[0x1e] s/ 0xff
arg1[0x1f] = 0xff - (0xff - arg2[0x1f]) * (0xff - arg1[0x1f]) s/ 0xff
arg1[0x20] = 0xff - (0xff - arg2[0x20]) * (0xff - arg1[0x20]) s/ 0xff
arg1[0x21] = 0xff - (0xff - arg2[0x21]) * (0xff - arg1[0x21]) s/ 0xff
int32_t ecx_28 = arg1[0x26]
arg1[0x22] = 0xff - (0xff - arg2[0x22]) * (0xff - arg1[0x22]) s/ 0xff
int32_t esi_1 = arg2[0x26]

if (esi_1 + ecx_28 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(esi_1 * 0xfe01), 0xfe01 - (0xff - esi_1) * (0xff - ecx_28))
    arg1[0x23] = (arg2[0x23] * temp0_1 + arg1[0x23] * (0xff - temp0_1)) s/ 0xff
    arg1[0x24] = (arg2[0x24] * temp0_1 + arg1[0x24] * (0xff - temp0_1)) s/ 0xff
    arg1[0x25] = (arg2[0x25] * temp0_1 + arg1[0x25] * (0xff - temp0_1)) s/ 0xff
    ecx_28 = arg1[0x26]

arg1[0x26] = 0xff - (0xff - ecx_28) * (0xff - arg2[0x26]) s/ 0xff
int32_t eax_54 = arg2[0x27]
int32_t eax_55 = eax_54 + arg1[0x27]

if (eax_54 + arg1[0x27] s< 0)
    eax_55 = 0
else if (eax_55 s> 0xff)
    eax_55 = 0xff

arg1[0x27] = eax_55
int32_t eax_56 = arg2[0x28]
int32_t eax_57 = eax_56 + arg1[0x28]

if (eax_56 + arg1[0x28] s< 0)
    eax_57 = 0
else if (eax_57 s> 0xff)
    eax_57 = 0xff

arg1[0x28] = eax_57
int32_t eax_58 = arg2[0x29]
int32_t eax = eax_58 + arg1[0x29]

if (eax_58 + arg1[0x29] s< 0)
    eax = 0
else if (eax s> 0xff)
    eax = 0xff

bool cond:2_1 = arg1[0x2a] != 0xffffffff
arg1[0x29] = eax

if (not(cond:2_1))
    arg1[0x2a] = arg2[0x2a]

if (arg1[0x2b] == 0xffffffff)
    arg1[0x2b] = arg2[0x2b]

if (arg1[0x2e] == 0)
    arg1[0x2e] = arg2[0x2e]

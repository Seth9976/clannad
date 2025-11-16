// 函数: sub_645fb0
// 地址: 0x645fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (arg2 s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

*(arg3 + 0xc) = arg2
*(arg3 + 0x10) = arg4
int32_t var_84 = (arg2 * arg4) << 2
sub_5979b0(arg3)

if (arg6 s< 0 || arg6 s>= 4)
    arg6 = 0

int32_t esi = 0

if (arg7 != 0)
    esi = arg4
    
    if (arg2 s< arg4)
        esi = arg2

int32_t eax_4 = esi + arg4
int32_t edi_1 = esi + arg2
int32_t eax_5

if (edi_1 s< eax_4)
    eax_5 = eax_4 + 0x40
else
    eax_5 = edi_1 + 0x40

int32_t mxcsr
int16_t x87control
int32_t ecx =
    int.d(__libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(eax_5 * eax_5 * 2))))
double* var_58_1
int64_t* eax_9
void* ebx_1
int64_t* esi_1
int64_t* edi_2

if (arg6 u> 3)
    edi_2 = arg3
    esi_1 = arg3
    ebx_1 = arg3
    eax_9 = arg3
    var_58_1 = eax_9
else
    switch (arg6)
        case 0
            esi_1 = neg.d(esi)
            edi_2 = esi_1
            eax_9 = esi_1
            ebx_1 = edi_2 + ecx
            var_58_1 = eax_9
        case 1
            edi_2 = edi_1 - 1
            esi_1 = neg.d(esi)
            ebx_1 = edi_2
            eax_9 = esi_1 + ecx
            var_58_1 = eax_9
        case 2
            esi_1 = eax_4 - 1
            edi_2 = neg.d(esi)
            ebx_1 = edi_2
            eax_9 = esi_1 - ecx
            var_58_1 = eax_9
        case 3
            edi_2 = edi_1 - 1
            esi_1 = eax_4 - 1
            ebx_1 = edi_2 - ecx
            var_58_1 = esi_1
            eax_9 = esi_1

int64_t xmm0_3 = (zx.o(0)).q
double xmm1 = 90.0
int64_t var_50 = (zx.o(0)).q
double var_48 = xmm1

if (arg7 != 0)
    double* var_84_1 = &var_48
    int64_t var_88
    var_88.d = &var_50
    int64_t var_90
    var_90:4.d = eax_9
    var_90.d = ebx_1
    eax_9 = sub_645e20(eax_9, edi_2, arg3, esi_1, var_90, var_88)
    xmm0_3 = var_50
    xmm1 = var_48

int32_t var_94_2 = 0xff
int32_t var_98 = 0
sub_645430(eax_9, arg5, arg3, edi_2, esi_1, ebx_1, var_58_1, 0, 0xff, xmm0_3, xmm1)
double* eax_11
eax_11.b = 1
return eax_11

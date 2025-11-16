// 函数: sub_6cdb80
// 地址: 0x6cdb80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi

if (arg3 != 0)
    int32_t eax_3 = *(arg3 + 0x254)
    char* eax_4
    
    if (eax_3 == 0)
        eax_4 = _malloc(0x100)
    else
        eax_4 = eax_3(arg3, 0x100)
    
    esi = eax_4
    
    if (esi == 0)
        sub_6d42e0(arg3, "Out of memory")
        noreturn
else
    esi = nullptr

int32_t ecx = arg4
*arg2 = esi

if (ecx - 0x17318 u<= 0x2710)
    int32_t i
    
    for (i = 0; i u< 0x100; i += 1)
        esi[i] = i.b
    
    return i

int32_t i_1 = 0
void* eax_1 = 0xffffffff - esi
void* var_c = eax_1

do
    char* edi_1 = &esi[i_1]
    int32_t eax_2
    
    if (eax_1 + edi_1 u> 0xfd)
        eax_2.b = i_1.b
    else
        double xmm0_3 = _mm_cvtepi32_pd(zx.q(i_1)) / 255.0
        _mm_cvtepi32_pd(zx.q(ecx))
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        double xmm0_4
        x87control_1, xmm0_4 = __libm_sse2_pow_precise(esi, edi_1, mxcsr, x87control, xmm0_3)
        void* var_30
        var_30.q = fconvert.d(fconvert.t(xmm0_4 * 255.0 + 0.5))
        long double st0_1
        st0_1, x87control = sub_74c3d0(mxcsr, x87control_1, var_30)
        ecx = arg4
        eax_2 = int.d(fconvert.t(fconvert.d(st0_1)))
    
    i_1 += 1
    *edi_1 = eax_2.b
    eax_1 = var_c
while (i_1 u< 0x100)

return eax_1

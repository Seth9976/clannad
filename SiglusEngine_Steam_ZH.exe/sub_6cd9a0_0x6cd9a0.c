// 函数: sub_6cd9a0
// 地址: 0x6cd9a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* edi = arg3
int32_t edx = 1 << (8 - arg4)
char* eax_1 = sub_6d81b0(edi, edx << 2)
*arg2 = eax_1
int32_t esi_1 = 0

if (edx u> 0)
    do
        int32_t eax_2
        
        if (edi != 0)
            int32_t eax_3 = *(edi + 0x254)
            int32_t var_84_1 = 0x200
            
            if (eax_3 == 0)
                eax_2 = _malloc()
            else
                int64_t var_88
                var_88.d = edi
                eax_2 = eax_3(var_88)
            
            if (eax_2 == 0)
                sub_6d42e0(edi, "Out of memory")
                noreturn
        else
            eax_2 = 0
        
        *(eax_1 + (esi_1 << 2)) = eax_2
        esi_1 += 1
    while (esi_1 u< edx)

int32_t esi_2 = 0
int32_t i = 0
int32_t i_1 = 0

do
    int16_t eax_4 = i.w * 0x101
    int16_t eax_8
    
    if (zx.d(eax_4) + 0x7f u> 0xfffd)
        eax_8 = eax_4 + 0x80
    else
        double xmm0_3 = _mm_cvtepi32_pd(zx.q(zx.d(eax_4) + 0x80)) / 65535.0
        _mm_cvtepi32_pd(zx.q(arg5))
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        double xmm0_4
        x87control_1, xmm0_4 = __libm_sse2_pow_precise(esi_2, edi, mxcsr, x87control, xmm0_3)
        long double st0_1
        st0_1, x87control =
            sub_74c3d0(mxcsr, x87control_1, fconvert.d(fconvert.t(xmm0_4 * 65535.0 + 0.5)))
        eax_8 = (int.d(fconvert.t(fconvert.d(st0_1)))).w
    
    edi = (zx.d(eax_8) * ((1 << (0x10 - arg4)) - 1) + 0x8000) u/ 0xffff + 1
    
    while (esi_2 u< edi)
        uint32_t edx_4 = esi_2 u>> (8 - arg4)
        int32_t eax_11 = 0xff u>> arg4 & esi_2
        esi_2 += 1
        *(*(eax_1 + (eax_11 << 2)) + (edx_4 << 1)) = eax_4
    
    i = i_1 + 1
    i_1 = i
while (i u< 0xff)

int32_t edi_4 = edx << 8

if (esi_2 u< edi_4)
    i = 0xff s>> arg4
    char ecx_13 = 8 - arg4
    int32_t i_2 = i
    
    do
        int32_t eax_14 = i & esi_2
        uint32_t edx_6 = esi_2 u>> ecx_13
        esi_2 += 1
        *(*(eax_1 + (eax_14 << 2)) + (edx_6 << 1)) = 0xffff
        ecx_13 = 8 - arg4
        i = i_2
    while (esi_2 u< edi_4)

return i

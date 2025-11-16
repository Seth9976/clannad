// 函数: sub_455ae0
// 地址: 0x455ae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2)
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(arg3)
int32_t edi_1 = (eax_1 - edx) s>> 1
int32_t ebx_1 = (eax_4 - edx_1) s>> 1
int32_t eax_6 = ebx_1 + 0x40

if (ebx_1 s< edi_1)
    eax_6 = edi_1 + 0x40

int32_t mxcsr
int16_t x87control
double xmm0_2 =
    __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(eax_6 * eax_6 * 2)))
int32_t esi = int.d(xmm0_2)
*arg4 = ebx_1 - 1
*arg5 = edi_1 - 1
*arg7 = edi_1 - 1
arg5[1] = edi_1 - 1
*arg6 = ebx_1 - 1 - esi
arg6[1] = ebx_1
arg4[1] = ebx_1
arg7[1] = edi_1 - 1 - esi
arg7[2] = edi_1
arg5[2] = edi_1
arg5[3] = edi_1
arg4[2] = ebx_1
arg6[2] = int.d(xmm0_2) + ebx_1
arg6[3] = ebx_1 - 1
arg4[3] = ebx_1 - 1
int32_t result = int.d(xmm0_2) + edi_1
arg7[3] = result
return result

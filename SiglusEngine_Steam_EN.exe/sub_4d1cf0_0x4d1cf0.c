// 函数: sub_4d1cf0
// 地址: 0x4d1cf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg1 + 0x20)
uint32_t temp1 = modu.dp.d(0:(*(arg1 + 0x1c)), esi)
int32_t eax_1 = *(arg1 + 0x10) - *(arg1 + 0x14)
*(arg1 + 0x1c) = temp1
double xmm0_1 = _mm_cvtepi32_pd(zx.q(eax_1))

if (not(xmm0_1 f<= 0))
    xmm0_1 = xmm0_1 + 1.0
else if (not(0 f<= xmm0_1))
    xmm0_1 = xmm0_1 - 1.0

int32_t result = int.d((_mm_cvtepi32_pd(zx.q(temp1)) f+ *((temp1 u>> 0x1f << 3) + &data_624a10))
    * xmm0_1 / (_mm_cvtepi32_pd(zx.q(esi)) f+ *((esi u>> 0x1f << 3) + &data_624a10))) + *(arg1 + 0xc)
*(arg1 + 4) = result
return result

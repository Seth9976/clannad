// 函数: sub_5b8040
// 地址: 0x5b8040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xa2) == 0)
    return *(arg1 + 0xb0)

int32_t edx = *(arg1 + 0xac)

if (edx s<= 0)
    return *(arg1 + 0xa8)

int32_t ecx = *(arg1 + 0xa4)
int32_t esi = *(arg1 + 0xa8)

if (ecx == esi)
    return esi

int32_t edi_1 = esi - ecx
bool cond:0 = *(arg1 + 0xa3) == 0
int32_t edx_1 = int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0xb0))) * _mm_cvtepi32_pd(zx.q(edi_1))
    / _mm_cvtepi32_pd(zx.q(edx)))

if (not(cond:0))
    return mods.dp.d(sx.q(edx_1), edi_1) + ecx

int32_t edx_5 = edx_1 + ecx

if (ecx s> esi)
    if (edx_5 s< esi)
        return esi
    
    if (edx_5 s<= ecx)
        return edx_5
else if (edx_5 s>= ecx)
    if (edx_5 s> esi)
        return esi
    
    return edx_5

return ecx

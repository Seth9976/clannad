// 函数: sub_48aee3
// 地址: 0x48aee3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t xmm1_1[0x8] = data_b56590 & arg1
int32_t xmm2_1[0x4] = data_b565a0 & arg1
int64_t xmm0 = arg1.q & (data_b56580).q
int16_t xmm3_1[0x8] = _mm_cmpeq_epi16(xmm1_1, zx.o(0))

if (_mm_movemask_epi8(xmm3_1) == 0)
    int32_t xmm6[0x4] = data_b565d0
    _mm_unpacklo_epi16(zx.o(0), xmm0)
    int32_t xmm7_3[0x4] = _mm_unpackhi_epi16(zx.o(0), xmm0)
    int32_t xmm1_7[0x4] = _mm_unpacklo_epi16(xmm1_1, xmm7_3)
    int32_t xmm3_10[0x4] = _mm_unpackhi_epi16(xmm1_1, xmm7_3)
    int32_t xmm1_8[0x4] = _mm_add_epi32(xmm1_7, xmm6)
    int32_t xmm3_11[0x4] = _mm_add_epi32(xmm3_10, xmm6)
    int32_t xmm0_4[0x4] = _mm_unpacklo_epi16(xmm2_1, xmm7_3)
    uint32_t xmm3_12[0x4] = xmm3_11 | _mm_unpackhi_epi16(xmm2_1, xmm7_3)
    _mm_slli_epi32(xmm0_4 | xmm1_8, 0xd)
    _mm_slli_epi32(xmm3_12, 0xd)
    return 

int32_t xmm2_2[0x4] = xmm2_1 | (xmm3_1 & not.o(data_b56570))
int32_t xmm1_2[0x4] = __pmaxsw_xmmdq_memdq(xmm1_1, data_b565b0)
int32_t xmm4[0x4] = data_b565c0
int32_t xmm1_3[0x4] = _mm_unpacklo_epi16(xmm1_2, 0)
int32_t xmm3_4[0x4] = _mm_unpackhi_epi16(xmm1_2, 0)
int32_t xmm5[0x4] = _mm_unpacklo_epi16(zx.o(0), xmm0)
int32_t xmm7[0x4] = _mm_unpackhi_epi16(zx.o(0), xmm0)
int32_t xmm1_4[0x4] = _mm_add_epi32(xmm1_3, xmm4)
int32_t xmm3_5[0x4] = _mm_add_epi32(xmm3_4, xmm4)
uint32_t xmm1_5[0x4] = _mm_slli_epi32(xmm1_4, 0xd)
float xmm3_7[0x4] = _mm_slli_epi32(xmm3_5, 0xd) | xmm7
int32_t xmm2_3[0x4] = _mm_unpacklo_epi16(xmm2_2, 0)
int32_t xmm7_2[0x4] = _mm_unpackhi_epi16(xmm2_2, 0)
float xmm0_1[0x4] = _mm_cvtepi32_ps(xmm2_3)
float xmm2_4[0x4] = _mm_cvtepi32_ps(xmm7_2)
_mm_mul_ps(xmm0_1, xmm1_5 | xmm5)
_mm_mul_ps(xmm3_7, xmm2_4)

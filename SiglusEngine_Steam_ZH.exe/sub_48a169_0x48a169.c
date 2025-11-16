// 函数: sub_48a169
// 地址: 0x48a169
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st6 = data_b56520 & arg1
int64_t st2 = data_b56530 & arg1
arg1 &= data_b56510
st2 |= _m_pcmpeqw(st6, 0) & not.q(data_b56500)
int64_t temp0_1 = __pmaxsw_mmxq_memq(st6, data_b56540)
int64_t st4 = data_b56550
st6 = _m_punpcklwd(temp0_1, 0)
int16_t st3[0x4] = __punpckhwd_mmxq_mmxd(temp0_1, 0)
uint16_t temp0_4[0x4] = _m_punpcklwd(0, arg1.d)
int64_t temp0_5 = __punpckhwd_mmxq_mmxd(0, arg1.d)
int64_t temp0_6 = _m_paddd(st6, st4)
st3 = _m_paddd(st3, st4)
int128_t xmm1_1 = _m_pslldi(temp0_6, 0xd) | temp0_4 | (_m_pslldi(st3, 0xd) | temp0_5) << 0x40
int64_t st7 = st2
st2 = _m_punpcklwd(st2, 0)
int64_t temp0_11 = __punpckhwd_mmxq_mmxd(st7, 0)
float xmm0[0x2] = _mm_cvtpi32_ps(arg3, st2)
float xmm2[0x2] = _mm_cvtpi32_ps(arg4, temp0_11)
_mm_mul_ps(xmm0 | xmm2 << 0x40, xmm1_1)
st6 = data_b56520 & arg2
arg1 = arg2 & data_b56510
st2 = (data_b56530 & arg2) | (_m_pcmpeqw(st6, 0) & not.q(data_b56500))
int64_t temp0_13 = __pmaxsw_mmxq_memq(st6, data_b56540)
st4 = data_b56550
st6 = _m_punpcklwd(temp0_13, 0)
st3 = __punpckhwd_mmxq_mmxd(temp0_13, 0)
uint16_t temp0_16[0x4] = _m_punpcklwd(0, arg1.d)
int64_t temp0_17 = __punpckhwd_mmxq_mmxd(0, arg1.d)
int64_t temp0_18 = _m_paddd(st6, st4)
st3 = _m_paddd(st3, st4)
int128_t xmm1_3 = _m_pslldi(temp0_18, 0xd) | temp0_16 | (_m_pslldi(st3, 0xd) | temp0_17) << 0x40
st7 = st2
st2 = _m_punpcklwd(st2, 0)
int64_t temp0_23 = __punpckhwd_mmxq_mmxd(st7, 0)
_mm_mul_ps(_mm_cvtpi32_ps(arg5, st2) | _mm_cvtpi32_ps(xmm2, temp0_23) << 0x40, xmm1_3)

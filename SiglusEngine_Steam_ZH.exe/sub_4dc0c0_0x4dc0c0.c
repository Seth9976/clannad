// 函数: sub_4dc0c0
// 地址: 0x4dc0c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint64_t st5 = zx.q(data_b5b09c)
uint64_t st7 = _m_psrldi(zx.q(data_b5b098) & arg1, 1) | (zx.q(data_b5b098) & arg2)
arg2 &= st5
arg1 &= st5
uint64_t st6 = _m_pcmpgtd(arg2, arg1)
int64_t temp0_2 = __pfmax_mmxq_mmxq(arg1, arg2)
st6 = _m_pslldi(st6, 0x1f)
int64_t temp0_4 = __pfmin_mmxq_mmxq(arg2, arg1)
int64_t temp0_5 = __pfrcp_mmxq_mmxq(arg1, temp0_2)
st5 = zx.q(data_b5b0d8)
int64_t temp0_6 = __pfrcpit1_mmxq_mmxq(temp0_2, temp0_5)
uint64_t st4 = zx.q(data_b5b0dc)
int64_t temp0_7 = __pfrcpit2_mmxq_mmxq(temp0_6, temp0_5)
int64_t st3 = zx.q(data_b5b0d0)
int64_t temp0_8 = __pfmul_mmxq_mmxq(temp0_7, temp0_4)
int64_t temp0_9 = __pfmul_mmxq_mmxq(temp0_8, temp0_8)
int64_t temp0_10 = __pfadd_mmxq_mmxq(st3, temp0_9)
int64_t temp0_11 = __pfmul_mmxq_mmxq(st4, temp0_9)
int64_t st2 = zx.q(data_b5b0cc)
int64_t temp0_12 = __pfmul_mmxq_mmxq(temp0_10, temp0_9)
int64_t temp0_13 = __pfadd_mmxq_mmxq(temp0_11, st5)
st5 = zx.q(data_b5b0d4)
int64_t temp0_14 = __pfadd_mmxq_mmxq(temp0_12, st2)
int64_t temp0_15 = __pfmul_mmxq_mmxq(temp0_13, temp0_9)
st2 = zx.q(data_b5b0c8)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_14, temp0_9)
int64_t temp0_17 = __pfadd_mmxq_mmxq(temp0_15, st5)
int64_t temp0_18 = __pfadd_mmxq_mmxq(temp0_16, st2)
int64_t temp0_20 = __pfmul_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_9, temp0_17), temp0_8)
int64_t temp0_21 = __pfrcp_mmxq_mmxq(st5, temp0_18)
st7 = _m_pslldi(st7, 1)
st5 = st7
st7 ^= st6
int64_t temp0_25 = __pfmul_mmxq_mmxq(temp0_20, 
    __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_18, temp0_21), temp0_21))
st3 = zx.q(data_b5b0f8)
st6 = _m_psradi(st6, 0x1f)
int64_t temp0_27 = __pfadd_mmxq_mmxq(temp0_25, temp0_8)
data_b5b098
__pfadd_mmxq_mmxq(temp0_27 | st7, __pfsub_mmxq_mmxq(st6 & not.q(st5 ^ st3), st3))

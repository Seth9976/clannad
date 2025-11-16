// 函数: sub_4dc1c0
// 地址: 0x4dc1c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint64_t st7 = zx.q(data_b5b09c)
uint64_t st4 = zx.q(data_b5b0ac)
uint64_t st6 = zx.q(data_b5b098) & arg1
arg1 &= st7
_m_pcmpgtd(arg1, zx.q(data_b5b0a8))
uint64_t st5 = arg1
int64_t temp0_1 = __pfmul_mmxq_mmxq(arg1, st4)
int64_t st2 = zx.q(data_b5b0e0)
int64_t temp0_2 = __pfsubr_mmxq_mmxq(temp0_1, st4)
int64_t temp0_3 = __pfrsqrt_mmxq_mmxq(st7, temp0_2)
int64_t temp0_4 = __pfmul_mmxq_mmxq(temp0_3, temp0_3)
st2 = _m_pcmpgtd(st2, st5)
int64_t temp0_6 = __pfrsqit1_mmxq_mmxq(temp0_4, temp0_2)
st4 = zx.q(data_b5b0f0)
arg1 = st2 & not.q(__pfmul_mmxq_mmxq(__pfrcpit2_mmxq_mmxq(temp0_6, temp0_3), temp0_2))
st7 = zx.q(data_b5b0e8)
arg1 |= st5 & st2
int64_t temp0_9 = __pfmul_mmxq_mmxq(arg1, arg1)
st5 = zx.q(data_b5b0e4)
int64_t temp0_10 = __pfmul_mmxq_mmxq(st7, temp0_9)
int64_t temp0_11 = __pfadd_mmxq_mmxq(st4, temp0_9)
int64_t temp0_12 = __pfadd_mmxq_mmxq(temp0_10, st5)
st5 = zx.q(data_b5b0ec)
int64_t temp0_13 = __pfmul_mmxq_mmxq(temp0_12, temp0_9)
int64_t temp0_15 = __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_9, temp0_11), st5)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_13, arg1)
int64_t temp0_17 = __pfrcp_mmxq_mmxq(temp0_11, temp0_15)
int64_t temp0_18 = __pfrcpit1_mmxq_mmxq(temp0_15, temp0_17)
st5 = zx.q(data_b5b0f8)
int64_t temp0_20 = __pfmul_mmxq_mmxq(__pfrcpit2_mmxq_mmxq(temp0_18, temp0_17), temp0_16)
st4 = st2
st2 &= not.q(st5)
st5 = zx.q(data_b5b0f4)
int64_t temp0_21 = __pfadd_mmxq_mmxq(arg1, temp0_20)
data_b5b0b4
int64_t temp0_22 = __pfadd_mmxq_mmxq(st2 ^ st6, st5)
st7 = _m_pslldi(st4, 0x1f)
__pfadd_mmxq_mmxq(temp0_22, __pfadd_mmxq_mmxq(temp0_21, st4 & not.q(temp0_21)) | (st7 ^ st6))

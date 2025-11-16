// 函数: sub_4dc3c0
// 地址: 0x4dc3c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st4 = arg1
arg1 = (arg1 & zx.q(data_b5b0a0)) | zx.q(data_b5b0a8)
int64_t st3 = zx.q(data_b5b110)
st4 = _m_psrldi(st4 & zx.q(data_b5b0a4), 0x17)
int64_t st2 = arg1
uint64_t st6 = zx.q(data_b5b114)
arg1 = _m_pcmpgtd(arg1, st3)
_m_pcmpeqd(0, st4)
int64_t temp0_3 = _m_psubd(st4, arg1)
st3 = zx.q(data_b5b118)
arg1 &= st6
st6 = zx.q(data_b5b0a8)
int64_t temp0_4 = _m_psubd(st2, arg1)
int64_t temp0_5 = _m_psubd(temp0_3, st3)
int64_t temp0_6 = __pfadd_mmxq_mmxq(temp0_4, st6)
int64_t temp0_7 = __pfsub_mmxq_mmxq(temp0_4, st6)
int64_t temp0_8 = __pi2fd_mmxq_mmxq(temp0_5, temp0_5)
uint64_t st7 = zx.q(data_b5b10c)
int64_t temp0_9 = __pfrcp_mmxq_mmxq(st6, temp0_6)
st3 = zx.q(data_b5b108)
int64_t temp0_10 = __pfrcpit1_mmxq_mmxq(temp0_6, temp0_9)
int64_t temp0_11 = __pfmul_mmxq_mmxq(st7, temp0_8)
int64_t temp0_12 = __pfmul_mmxq_mmxq(st3, temp0_8)
st4 = zx.q(data_b5b11c)
int64_t temp0_13 = __pfrcpit2_mmxq_mmxq(temp0_10, temp0_9)
uint64_t st1 = zx.q(data_b5b120)
int64_t temp0_14 = __pfmul_mmxq_mmxq(temp0_13, temp0_7)
int64_t temp0_15 = __pfadd_mmxq_mmxq(temp0_14, temp0_14)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_14, temp0_14)
int64_t temp0_17 = __pfmul_mmxq_mmxq(temp0_16, st4)
st4 = zx.q(data_b5b124)
int64_t temp0_19 = __pfmul_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_17, st1), temp0_16)
data_b5b12c
int64_t temp0_20 = __pfmul_mmxq_mmxq(temp0_16, temp0_15)
__pfadd_mmxq_mmxq(
    __pfadd_mmxq_mmxq(
        __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_19, st4), temp0_20), temp0_15), 
        temp0_11), 
    temp0_12)

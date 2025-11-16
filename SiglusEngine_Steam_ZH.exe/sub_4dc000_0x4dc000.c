// 函数: sub_4dc000
// 地址: 0x4dc000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

data_b5b098
arg1 &= zx.q(data_b5b09c)
uint64_t st6 = _m_pcmpgtd(zx.q(data_b5b0a8), arg1)
int64_t temp0_1 = __pfrcp_mmxq_mmxq(arg2, arg1)
int64_t temp0_2 = __pfrcpit1_mmxq_mmxq(arg1, temp0_1)
int64_t st3 = zx.q(data_b5b0d0)
int64_t temp0_3 = __pfrcpit2_mmxq_mmxq(temp0_2, temp0_1)
uint64_t st4 = zx.q(data_b5b0dc)
int64_t temp0_4 = __pfmin_mmxq_mmxq(temp0_3, arg1)
int64_t temp0_5 = __pfmul_mmxq_mmxq(temp0_4, temp0_4)
uint64_t st5 = zx.q(data_b5b0d8)
int64_t temp0_6 = __pfadd_mmxq_mmxq(st3, temp0_5)
int64_t temp0_7 = __pfmul_mmxq_mmxq(st4, temp0_5)
arg2 = zx.q(data_b5b0cc)
int64_t temp0_8 = __pfmul_mmxq_mmxq(temp0_6, temp0_5)
int64_t temp0_9 = __pfadd_mmxq_mmxq(temp0_7, st5)
st5 = zx.q(data_b5b0d4)
int64_t temp0_10 = __pfadd_mmxq_mmxq(temp0_8, arg2)
int64_t temp0_11 = __pfmul_mmxq_mmxq(temp0_9, temp0_5)
arg2 = zx.q(data_b5b0c8)
int64_t temp0_12 = __pfmul_mmxq_mmxq(temp0_10, temp0_5)
int64_t temp0_13 = __pfadd_mmxq_mmxq(temp0_11, st5)
int64_t temp0_14 = __pfadd_mmxq_mmxq(temp0_12, arg2)
int64_t temp0_16 = __pfmul_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_5, temp0_13), temp0_4)
int64_t temp0_17 = __pfrcp_mmxq_mmxq(st5, temp0_14)
st4 = zx.q(data_b5b0f4)
int64_t temp0_21 = __pfadd_mmxq_mmxq(
    __pfmul_mmxq_mmxq(temp0_16, 
        __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_14, temp0_17), temp0_17)), 
    temp0_4)
__pfmax_mmxq_mmxq(temp0_21, st6 & not.q(__pfsub_mmxq_mmxq(st4, temp0_21)))

// 函数: sub_494cce
// 地址: 0x494cce
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint32_t st0[0x2] = *arg2
int64_t st1 = st0
uint32_t temp0[0x2] = _m_punpckldq(st0, st0[0])
int64_t temp0_1 = _m_punpckhdq(st1, st1.d)
uint64_t st2 = zx.q(arg2[1].d)
st2 = _m_punpckldq(st2, st2.d)
st0 = __pfmul_mmxq_memq(temp0, *arg3)
int64_t temp0_4 = __pfmul_mmxq_memq(temp0_1, arg3[2])
int64_t temp0_5 = __pfmul_mmxq_memq(st2, arg3[4])
st0 = __pfadd_mmxq_memq(st0, arg3[6])
uint32_t st3[0x2] = __pfmul_mmxq_memq(temp0, arg3[1])
int64_t temp0_8 = __pfadd_mmxq_mmxq(temp0_4, temp0_5)
int64_t temp0_9 = __pfmul_mmxq_memq(temp0_1, arg3[3])
int64_t temp0_10 = __pfmul_mmxq_memq(st2, arg3[5])
st3 = __pfadd_mmxq_memq(st3, arg3[7])
st0 = __pfadd_mmxq_mmxq(st0, temp0_8)
int64_t temp0_13 = __pfadd_mmxq_mmxq(temp0_9, temp0_10)
st3 = __pfadd_mmxq_mmxq(st3, temp0_13)
int64_t st5 = st3
int64_t temp0_15 = _m_punpckhdq(st5, st5.d)
int64_t temp0_16 = __pfrcp_mmxq_mmxq(temp0_13, temp0_15)
int64_t temp0_18 = __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_15, temp0_16), temp0_16)
st0 = __pfmul_mmxq_mmxq(st0, temp0_18)
st3 = __pfmul_mmxq_mmxq(st3, temp0_18)
*arg1 = st0
arg1[1][0] = st3[0]
__femms()
return arg1

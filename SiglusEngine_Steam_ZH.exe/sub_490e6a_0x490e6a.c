// 函数: sub_490e6a
// 地址: 0x490e6a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t var_18
int64_t x87_r4
sub_496b95(x87_r4, &var_18, arg3)
int64_t st0 = var_18
int64_t st1 = *arg2
int64_t temp0 = __pfmul_mmxq_mmxq(st1, st0)
int64_t st3 = arg2[1]
int64_t st7 = st3
int64_t var_10
int64_t temp0_1 = __pfmul_mmxq_mmxq(st3, var_10)
int64_t temp0_2 = __pfadd_mmxq_mmxq(temp0, temp0_1)
st0 ^= 0x8000000080000000
int64_t st2 = var_10 ^ 0x8000000080000000
int64_t temp0_3 = __pfacc_mmxq_mmxq(temp0_2, temp0_2)
st3 = _m_punpckldq(temp0_1, temp0_3.d)
uint64_t temp0_5 = _m_psllqi(temp0_3, 0x20)
uint64_t temp0_6 = _m_psrlqi(st3, 0x20)
int64_t st4 = _m_punpckldq(st0, st0.d)
int64_t st5 = _m_punpckldq(st0, st0.d)
int64_t temp0_9 = __pfmul_mmxq_mmxq(st4, st1)
int64_t temp0_10 = __pfmul_mmxq_mmxq(st5, st7)
*arg1 = __pfadd_mmxq_mmxq(temp0_9, temp0_6)
arg1[1] = temp0_10
int64_t temp0_12 = _m_punpckhdq(st0, st0.d)
int64_t temp0_13 = _m_punpckhdq(st0, st0.d)
int64_t temp0_14 = __pfmul_mmxq_mmxq(temp0_12, st1)
int64_t temp0_15 = __pfmul_mmxq_mmxq(temp0_13, st7)
arg1[2] = __pfadd_mmxq_mmxq(temp0_14, temp0_5)
arg1[3] = temp0_15
st4 = _m_punpckldq(st2, st2.d)
st5 = _m_punpckldq(st2, st2.d)
int64_t temp0_19 = __pfmul_mmxq_mmxq(st4, st1)
int64_t temp0_21 = __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(st5, st7), temp0_6)
arg1[4] = temp0_19
arg1[5] = temp0_21
int64_t temp0_22 = _m_punpckhdq(st2, st2.d)
int64_t temp0_23 = _m_punpckhdq(st2, st2.d)
int64_t temp0_24 = __pfmul_mmxq_mmxq(temp0_22, st1)
int64_t temp0_26 = __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_23, st7), temp0_5)
arg1[6] = temp0_24
arg1[7] = temp0_26
__femms()
return arg1

// 函数: sub_490f55
// 地址: 0x490f55
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t var_18
int64_t x87_r4
sub_496b95(x87_r4, &var_18, arg2)
int64_t st0 = var_18
int64_t var_10
uint32_t st3[0x2] = var_10
int64_t temp0 = __pfmul_mmxq_memq(st0, -0x3fffffff40000000)
int64_t temp0_1 = __pfmul_mmxq_memq(var_10, 0x3f800000c0000000)
uint32_t st4[0x2] = st0
uint32_t temp0_2[0x2] = _m_punpckldq(st4, st4[0])
int64_t temp0_3 = _m_punpckhdq(st0, st0.d)
uint32_t st5[0x2] = _m_psrlqi(temp0_2, 0x20)
uint64_t temp0_5 = _m_psrlqi(temp0_3, 0x20)
st4 = __pfmul_mmxq_mmxq(temp0_2, temp0)
st5 = __pfmul_mmxq_mmxq(st5, temp0_1)
int64_t temp0_8 = __pfmul_mmxq_mmxq(temp0_3, temp0)
int64_t temp0_9 = __pfmul_mmxq_mmxq(temp0_5, temp0_1)
st4 = __pfadd_mmxq_memq(st4, 0x3f800000)
int64_t temp0_11 = __pfadd_mmxq_memq(temp0_8, 0x3f80000000000000)
*arg1 = st4
arg1[1] = st5
arg1[2] = temp0_11
arg1[3] = temp0_9
int64_t st6 = st3
uint32_t temp0_12[0x2] = _m_punpckldq(st3, st3[0])
int64_t temp0_13 = _m_punpckhdq(st6, st6.d)
st5 = _m_psrlqi(temp0_12, 0x20)
uint64_t temp0_15 = _m_psrlqi(temp0_13, 0x20)
st4 = __pfmul_mmxq_mmxq(temp0_12, temp0)
st5 = __pfmul_mmxq_mmxq(st5, temp0_1)
int64_t temp0_18 = __pfmul_mmxq_mmxq(temp0_13, temp0)
int64_t temp0_19 = __pfmul_mmxq_mmxq(temp0_15, temp0_1)
st5 = __pfadd_mmxq_memq(st5, 0x3f800000)
int64_t temp0_21 = __pfadd_mmxq_memq(temp0_19, 0x3f80000000000000)
arg1[4] = st4
arg1[5] = st5
arg1[6] = temp0_18
arg1[7] = temp0_21
__femms()
return arg1

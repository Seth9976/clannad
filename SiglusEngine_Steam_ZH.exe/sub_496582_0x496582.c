// 函数: sub_496582
// 地址: 0x496582
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint32_t st0[0x2] = *arg2
int64_t st1 = st0
uint32_t temp0[0x2] = _m_punpckldq(st0, st0[0])
int64_t temp0_1 = _m_punpckhdq(st1, st1.d)
uint32_t st2[0x2] = arg2[1]
int64_t st3 = st2
uint32_t temp0_2[0x2] = _m_punpckldq(st2, st2[0])
int64_t temp0_3 = _m_punpckhdq(st3, st3.d)
st0 = __pfmul_mmxq_memq(temp0, *arg3)
int64_t temp0_5 = __pfmul_mmxq_memq(temp0_1, arg3[2])
st2 = __pfmul_mmxq_memq(temp0_2, arg3[4])
int64_t temp0_7 = __pfmul_mmxq_memq(temp0_3, arg3[6])
st0 = __pfadd_mmxq_mmxq(st0, temp0_5)
uint32_t st4[0x2] = __pfmul_mmxq_memq(temp0, arg3[1])
st2 = __pfadd_mmxq_mmxq(st2, temp0_7)
int64_t temp0_11 = __pfmul_mmxq_memq(temp0_1, arg3[3])
int64_t temp0_12 = __pfmul_mmxq_memq(temp0_2, arg3[5])
int64_t temp0_13 = __pfmul_mmxq_memq(temp0_3, arg3[7])
st0 = __pfadd_mmxq_mmxq(st0, st2)
st4 = __pfadd_mmxq_mmxq(__pfadd_mmxq_mmxq(st4, temp0_11), __pfadd_mmxq_mmxq(temp0_12, temp0_13))
*arg1 = st0
arg1[1] = st4
__femms()
return arg1

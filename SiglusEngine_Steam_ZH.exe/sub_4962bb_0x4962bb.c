// 函数: sub_4962bb
// 地址: 0x4962bb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint32_t st0[0x2] = *arg2
int64_t st1 = st0
uint32_t temp0[0x2] = _m_punpckldq(st0, st0[0])
int64_t temp0_1 = _m_punpckhdq(st1, st1.d)
st0 = __pfmul_mmxq_memq(temp0, *arg3)
int64_t temp0_3 = __pfmul_mmxq_memq(temp0_1, arg3[2])
st0 = __pfadd_mmxq_memq(st0, arg3[6])
uint32_t st3[0x2] = __pfmul_mmxq_memq(temp0, arg3[1])
int64_t temp0_6 = __pfmul_mmxq_memq(temp0_1, arg3[3])
st0 = __pfadd_mmxq_mmxq(st0, temp0_3)
st3 = __pfadd_mmxq_mmxq(__pfadd_mmxq_memq(st3, arg3[7]), temp0_6)
*arg1 = st0
arg1[1] = st3
__femms()
return arg1

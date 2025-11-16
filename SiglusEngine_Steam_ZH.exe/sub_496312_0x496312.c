// 函数: sub_496312
// 地址: 0x496312
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint32_t st0[0x2] = *arg2
int64_t st1 = st0
uint32_t temp0[0x2] = _m_punpckldq(st0, st0[0])
int64_t temp0_1 = _m_punpckhdq(st1, st1.d)
int80_t st3
st3.q = temp0
int80_t st4
st4.q = temp0_1
*arg1 = __pfadd_mmxq_mmxq(__pfmul_mmxq_memq(temp0, *arg3), __pfmul_mmxq_memq(temp0_1, arg3[2]))
__femms()
return arg1

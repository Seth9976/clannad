// 函数: sub_49644b
// 地址: 0x49644b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint64_t st6 = zx.q(arg5)
int64_t st0 = *arg3
int64_t st2 = *arg4
int64_t st4 = *arg2
st6 = _m_punpckldq(st6, st6.d)
uint64_t st7 = zx.q(arg6)
int64_t temp0_1 = __pfsub_mmxq_mmxq(st0, st4)
st7 = _m_punpckldq(st7, st7.d)
int64_t temp0_3 = __pfmul_mmxq_mmxq(temp0_1, st6)
int64_t temp0_4 = __pfsub_mmxq_mmxq(st2, st4)
*arg1 = __pfadd_mmxq_mmxq(__pfadd_mmxq_mmxq(st4, temp0_3), __pfmul_mmxq_mmxq(temp0_4, st7))
__femms()
return arg1

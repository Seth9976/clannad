// 函数: sub_496799
// 地址: 0x496799
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st1 = arg3[1]
int64_t st2 = *arg4
int64_t st3 = arg4[1]
int64_t st4 = *arg2
int64_t st5 = arg2[1]
uint64_t st6 = zx.q(arg5)
uint64_t st7 = zx.q(arg6)
int64_t temp0 = __pfsub_mmxq_mmxq(*arg3, st4)
int64_t temp0_1 = __pfsub_mmxq_mmxq(st1, st5)
int64_t temp0_2 = __pfsub_mmxq_mmxq(st2, st4)
int64_t temp0_3 = __pfsub_mmxq_mmxq(st3, st5)
st6 = _m_punpckldq(st6, st6.d)
st7 = _m_punpckldq(st7, st7.d)
int64_t temp0_6 = __pfmul_mmxq_mmxq(temp0, st6)
int64_t temp0_7 = __pfmul_mmxq_mmxq(temp0_1, st6)
int64_t temp0_8 = __pfmul_mmxq_mmxq(temp0_2, st7)
int64_t temp0_9 = __pfadd_mmxq_mmxq(temp0_6, st4)
int64_t temp0_10 = __pfmul_mmxq_mmxq(temp0_3, st7)
int64_t temp0_11 = __pfadd_mmxq_mmxq(temp0_7, st5)
int64_t temp0_12 = __pfadd_mmxq_mmxq(temp0_9, temp0_8)
int64_t temp0_13 = __pfadd_mmxq_mmxq(temp0_11, temp0_10)
*arg1 = temp0_12
arg1[1] = temp0_13
__femms()
return arg1

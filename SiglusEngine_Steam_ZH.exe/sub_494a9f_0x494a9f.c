// 函数: sub_494a9f
// 地址: 0x494a9f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st4 = *arg2
uint64_t st6 = zx.q(arg5)
uint64_t st1 = zx.q(arg3[1].d)
int64_t st2 = *arg4
uint64_t st3 = zx.q(arg4[1].d)
uint64_t st5 = zx.q(arg2[1].d)
int64_t temp0 = __pfsub_mmxq_mmxq(*arg3, st4)
uint64_t st7 = zx.q(arg6)
int64_t temp0_1 = __pfsub_mmxq_mmxq(st1, st5)
int64_t temp0_2 = __pfsub_mmxq_mmxq(st2, st4)
st6 = _m_punpckldq(st6, st6.d)
int64_t temp0_4 = __pfsub_mmxq_mmxq(st3, st5)
int64_t temp0_5 = __pfmul_mmxq_mmxq(temp0, st6)
st7 = _m_punpckldq(st7, st7.d)
int64_t temp0_7 = __pfmul_mmxq_mmxq(temp0_1, st6)
int64_t temp0_8 = __pfadd_mmxq_mmxq(temp0_5, st4)
int64_t temp0_9 = __pfmul_mmxq_mmxq(temp0_2, st7)
int64_t temp0_10 = __pfadd_mmxq_mmxq(temp0_7, st5)
int64_t temp0_11 = __pfmul_mmxq_mmxq(temp0_4, st7)
int64_t temp0_12 = __pfadd_mmxq_mmxq(temp0_8, temp0_9)
int64_t temp0_13 = __pfadd_mmxq_mmxq(temp0_10, temp0_11)
*arg1 = temp0_12
arg1[1].d = temp0_13.d
__femms()
return arg1

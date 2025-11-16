// 函数: sub_494b10
// 地址: 0x494b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint64_t st0 = zx.q(arg6)
int64_t temp0 = __pfmul_mmxq_mmxq(st0, st0)
int64_t temp0_1 = __pfmul_mmxq_mmxq(temp0, st0)
int64_t temp0_2 = __pfsub_mmxq_mmxq(temp0_1, temp0)
int64_t temp0_3 = __pfmul_mmxq_mmxq(temp0, 0x4000000040000000)
int64_t temp0_4 = __pfmul_mmxq_memq(temp0, 0x4040000040400000)
int64_t temp0_5 = __pfmul_mmxq_mmxq(temp0_1, 0x4000000040000000)
int64_t temp0_6 = __pfsub_mmxq_mmxq(temp0_1, temp0_3)
int64_t temp0_7 = __pfsub_mmxq_mmxq(temp0_4, temp0_5)
int64_t temp0_8 = __pfadd_mmxq_mmxq(temp0_6, st0)
int64_t temp0_10 = __pfadd_mmxq_memq(__pfsub_mmxq_mmxq(temp0_5, temp0_4), 0x3f8000003f800000)
uint64_t st7 = _m_punpckldq(temp0_2, temp0_2.d)
uint64_t st1 = _m_punpckldq(temp0_7, temp0_7.d)
uint64_t st6 = _m_punpckldq(temp0_8, temp0_8.d)
uint64_t st2 = _m_punpckldq(temp0_10, temp0_10.d)
int64_t temp0_15 = __pfmul_mmxq_memq(st7, *arg5)
int64_t temp0_16 = __pfmul_mmxq_memq(st1, *arg4)
int64_t temp0_17 = __pfmul_mmxq_mmxq(st7, zx.q(arg5[1].d))
int64_t temp0_18 = __pfmul_mmxq_mmxq(st1, zx.q(arg4[1].d))
int64_t temp0_19 = __pfmul_mmxq_memq(st6, *arg3)
int64_t temp0_20 = __pfadd_mmxq_mmxq(temp0_16, temp0_15)
int64_t temp0_21 = __pfadd_mmxq_mmxq(temp0_18, temp0_17)
int64_t temp0_22 = __pfmul_mmxq_memq(st2, *arg2)
int64_t temp0_23 = __pfmul_mmxq_mmxq(st6, zx.q(arg3[1].d))
int64_t temp0_24 = __pfmul_mmxq_mmxq(st2, zx.q(arg2[1].d))
int64_t temp0_25 = __pfadd_mmxq_mmxq(temp0_22, temp0_19)
int64_t temp0_26 = __pfadd_mmxq_mmxq(temp0_24, temp0_23)
int64_t temp0_27 = __pfadd_mmxq_mmxq(temp0_20, temp0_25)
int64_t temp0_28 = __pfadd_mmxq_mmxq(temp0_21, temp0_26)
*arg1 = temp0_27
arg1[1].d = temp0_28.d
__femms()
return arg1

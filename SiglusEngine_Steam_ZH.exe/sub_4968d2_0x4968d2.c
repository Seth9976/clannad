// 函数: sub_4968d2
// 地址: 0x4968d2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint64_t st0 = zx.q(arg6)
uint64_t st1 = st0
st0 = _m_punpckldq(st0, st0.d)
int64_t temp0_1 = __pfmul_mmxq_mmxq(st0, st0)
st1 = __punpckldq_mmxq_memd(st1, 0x3f800000)
int64_t temp0_3 = __pfmul_mmxq_mmxq(temp0_1, st1)
uint64_t st3 = st1
int64_t temp0_4 = __pfmul_mmxq_mmxq(st1, st1)
int64_t temp0_5 = __pfsub_mmxq_mmxq(temp0_3, temp0_4)
st1 = _m_punpckldq(temp0_4, temp0_4.d)
st3 = _m_punpckldq(st3, st3.d)
int64_t temp0_8 = __pfmul_mmxq_memq(temp0_5, 0x4000000040400000)
st0 = _m_punpckldq(temp0_8, temp0_5.d)
int64_t temp0_10 = _m_punpckhdq(temp0_8, 0)
int64_t temp0_12 = __pfsub_mmxq_mmxq(__pfadd_mmxq_mmxq(st1, st3 ^ 0x8000000000000000), st0)
int64_t temp0_13 = __pfsub_mmxq_mmxq(st0, temp0_10)
int64_t temp0_14 = _m_punpckhdq(temp0_12, temp0_12.d)
st0 = _m_punpckldq(temp0_13, temp0_13.d)
uint64_t st2 = _m_punpckldq(temp0_12, temp0_12.d)
int64_t temp0_17 = __pfmul_mmxq_memq(temp0_14, *arg2)
int64_t temp0_18 = _m_punpckhdq(temp0_13, temp0_13.d)
int64_t temp0_19 = __pfmul_mmxq_memq(st0, *arg3)
int64_t temp0_20 = __pfmul_mmxq_memq(st2, *arg4)
int64_t temp0_21 = __pfmul_mmxq_memq(temp0_14, arg2[1])
int64_t temp0_22 = __pfmul_mmxq_memq(st0, arg3[1])
int64_t temp0_23 = __pfadd_mmxq_mmxq(temp0_19, temp0_17)
int64_t temp0_24 = __pfmul_mmxq_memq(st2, arg4[1])
int64_t temp0_25 = __pfadd_mmxq_mmxq(temp0_21, temp0_22)
int64_t temp0_28 =
    __pfadd_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_23, temp0_20), __pfmul_mmxq_memq(temp0_18, *arg5))
int64_t temp0_29 = __pfmul_mmxq_memq(temp0_18, arg5[1])
int64_t temp0_30 = __pfadd_mmxq_mmxq(temp0_25, temp0_24)
int64_t temp0_31 = __pfmul_mmxq_mmxq(temp0_28, 0x3f0000003f000000)
int64_t temp0_32 = __pfadd_mmxq_mmxq(temp0_30, temp0_29)
*arg1 = temp0_31
arg1[1] = __pfmul_mmxq_mmxq(temp0_32, 0x3f0000003f000000)
__femms()
return arg1

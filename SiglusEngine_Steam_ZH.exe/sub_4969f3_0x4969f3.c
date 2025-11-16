// 函数: sub_4969f3
// 地址: 0x4969f3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t st0 = *arg2
uint64_t st1 = zx.q(arg2[1].d)
uint64_t st2 = st1
uint64_t st6 = zx.q(arg4[1].d)
st1 = _m_punpckldq(st1, st1.d)
st6 = __punpckldq_mmxq_memd(st6, arg3[1].d)
int64_t temp0_2 = __pfsub_mmxq_memq(st0, *arg3)
int64_t temp0_3 = __pfsub_mmxq_mmxq(st1, st6)
int64_t temp0_4 = __pfsub_mmxq_memq(st0, *arg4)
int64_t temp0_5 = __pfsub_mmxq_mmxq(0, temp0_4)
int64_t temp0_7 = __pfmul_mmxq_mmxq(_m_punpckhdq(temp0_2, temp0_5.d), temp0_3)
st6 = _m_punpckldq(temp0_5, temp0_3.d)
st0 = __pfacc_mmxq_mmxq(temp0_7, 
    __pfmul_mmxq_mmxq(_m_punpckldq(_m_punpckhdq(temp0_3, 0), temp0_2.d), st6)) ^ 0x8000000000000000
int64_t st4 = _m_punpckldq(temp0_4, temp0_5.d)
int64_t temp0_15 = __pfmul_mmxq_mmxq(_m_punpckhdq(temp0_4, st4.d), temp0_2)
int64_t temp0_16 = __pfacc_mmxq_mmxq(temp0_15, temp0_15)
uint64_t temp0_17 = _m_psllqi(temp0_16, 0x20)
int64_t temp0_20 =
    __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(st0, st0), __pfmul_mmxq_mmxq(temp0_17, temp0_17))
int64_t temp0_21 = __pfacc_mmxq_mmxq(temp0_20, temp0_20)
int64_t temp0_22 = __pfrsqrt_mmxq_mmxq(st4, temp0_21)
int64_t temp0_23 = __pfcmpgt_mmxq_memq(temp0_21, 0x80000000800000)
int64_t temp0_26 = __pfrcpit2_mmxq_mmxq(
    __pfrsqit1_mmxq_mmxq(temp0_21, __pfmul_mmxq_mmxq(temp0_22, temp0_22)), temp0_22)
int64_t temp0_27 = __pfmul_mmxq_mmxq(st0 & temp0_23, temp0_26)
int64_t temp0_28 = __pfmul_mmxq_mmxq(temp0_16 & temp0_23, temp0_26)
int64_t temp0_29 = __pfmul_mmxq_memq(temp0_27, *arg2)
int64_t temp0_30 = __pfmul_mmxq_mmxq(temp0_28, st2)
int64_t st5 =
    _m_punpckldq(temp0_28, __pfadd_mmxq_mmxq(__pfacc_mmxq_mmxq(temp0_29, temp0_29), temp0_30).d)
    ^ 0x8000000000000000
*arg1 = temp0_27
arg1[1] = st5
__femms()
return arg1

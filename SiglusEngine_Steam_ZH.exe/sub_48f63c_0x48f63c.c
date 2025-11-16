// 函数: sub_48f63c
// 地址: 0x48f63c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st2 = *arg3
int64_t st3 = arg3[1]
int64_t st0 = *arg2
int64_t temp0 = _m_punpckhdq(st2, st2.d)
int64_t temp0_1 = _m_punpckhdq(st3, st3.d)
int64_t st1 = arg2[1]
int64_t st4 = _m_punpckldq(temp0, st2.d)
int64_t st5 = _m_punpckldq(temp0_1, st3.d)
int64_t st7 = st5
int64_t temp0_4 = __pfmul_mmxq_mmxq(st2, st1)
int64_t temp0_5 = __pfmul_mmxq_mmxq(st3, st0)
int64_t temp0_6 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, st0)
int64_t temp0_7 = __pfmul_mmxq_mmxq(st4, st1)
int64_t temp0_8 = __pfadd_mmxq_mmxq(temp0_4 ^ 0x80000000, temp0_5)
st3 = *arg3
int64_t temp0_9 = __pfsub_mmxq_mmxq(temp0_7, temp0_6)
st5 = arg3[1]
int64_t temp0_10 = __pfmul_mmxq_mmxq(st7, st1)
int64_t temp0_11 = __pfacc_mmxq_mmxq(temp0_9, temp0_8)
int64_t temp0_12 = __pfmul_mmxq_mmxq(st4 ^ 0x80000000, st0)
int64_t temp0_13 = __pfmul_mmxq_mmxq(st3, st0)
*arg1 = temp0_11
int64_t temp0_14 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, st1)
arg1[1] =
    __pfacc_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_12, temp0_10), __pfsub_mmxq_mmxq(temp0_14, temp0_13))
__femms()
return arg1

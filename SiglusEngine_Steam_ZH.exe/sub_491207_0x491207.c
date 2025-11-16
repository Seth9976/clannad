// 函数: sub_491207
// 地址: 0x491207
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st0 = *arg2
int64_t st1 = arg2[1]
int64_t temp0 = __pfadd_mmxq_mmxq(st0, st0)
int64_t st7 = st1
int64_t temp0_1 = __pfadd_mmxq_mmxq(st1, st1)
int64_t temp0_2 = _m_punpckhdq(st0, st0.d)
int64_t temp0_3 = _m_punpckhdq(st1, st1.d)
int64_t temp0_4 = __pfmul_mmxq_mmxq(st0, temp0)
st1 = _m_punpckldq(temp0_1, temp0.d)
st7 = _m_punpckldq(st7, st7.d)
int64_t temp0_7 = __pfmul_mmxq_mmxq(temp0, temp0_3)
int64_t temp0_8 = __pfmul_mmxq_mmxq(st7, st1)
int64_t temp0_9 = __pfmul_mmxq_mmxq(st1, temp0_2)
uint32_t st6[0x2] = __pfmul_mmxq_mmxq(st1, temp0_3)
int64_t temp0_11 = _m_punpckhdq(temp0_9, temp0_8.d)
st7 = _m_punpckldq(temp0_8, temp0_8.d)
uint32_t temp0_13[0x2] = _m_punpckldq(st6, st6[0])
arg1[6] = 0
int64_t temp0_14 = __pfadd_mmxq_mmxq(st7, temp0_4)
int64_t temp0_15 = __pfacc_mmxq_mmxq(temp0_4, temp0_4)
st6 = _m_punpckhdq(temp0_13, temp0_7.d)
int64_t temp0_17 = __pfsubr_mmxq_memq(temp0_15, 0x3f8000003f800000)
int64_t temp0_18 = __pfsubr_mmxq_memq(temp0_14, 0x3f8000003f800000)
int64_t st3 = _m_punpckldq(temp0_17, 0)
int64_t temp0_20 = __pfadd_mmxq_mmxq(temp0_11, st6)
arg1[5] = st3
int64_t temp0_21 = __pfsub_mmxq_mmxq(temp0_11, st6)
int64_t temp0_22 = __pfadd_mmxq_mmxq(temp0_9, temp0_7)
int64_t temp0_23 = __pfsub_mmxq_mmxq(temp0_9, temp0_7)
int64_t st2 = _m_punpckldq(temp0_22, 0)
st6 = temp0_20
int64_t st4 = _m_punpckldq(temp0_21, temp0_18.d)
st1 = _m_punpckldq(temp0_20, temp0_20.d)
arg1[3] = st2
int64_t temp0_27 = _m_punpckhdq(temp0_21, 0)
st0 = __punpckldq_mmxq_memd(0, 0x3f800000)
arg1[1] = temp0_27
st6 = _m_punpckhdq(st6, st6[0])
arg1[2] = st4
int64_t temp0_30 = _m_punpckhdq(temp0_18, st1.d)
uint32_t temp0_31[0x2] = _m_punpckldq(st6, temp0_23.d)
*arg1 = temp0_30
arg1[4] = temp0_31
arg1[7] = st0
__femms()
return arg1

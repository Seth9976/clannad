// 函数: sub_4912d9
// 地址: 0x4912d9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st0 = *arg3
int64_t st1 = arg3[1]
int64_t temp0 = __pswapd_mmxq_mmxq(arg1, st0)
int64_t temp0_1 = __pfadd_mmxq_mmxq(st0, st0)
int64_t temp0_2 = _m_punpckhdq(st0, st1.d)
int64_t temp0_3 = __pfadd_mmxq_mmxq(st1, st1)
int64_t temp0_4 = __pfmul_mmxq_mmxq(temp0_1, st0)
int64_t st5 = _m_punpckldq(temp0_1, temp0_3.d)
int64_t temp0_6 = __pfmul_mmxq_mmxq(st0, temp0_3)
int64_t temp0_7 = __pfmul_mmxq_mmxq(temp0, temp0_3)
int64_t temp0_8 = __pfmul_mmxq_mmxq(temp0_3, st1)
int64_t temp0_9 = __pfmul_mmxq_mmxq(temp0_2, st5)
int64_t temp0_10 = __pfsubr_mmxq_memq(temp0_4, 0x3f8000003f800000)
st1 = _m_punpckldq(temp0_8, temp0_8.d)
int64_t temp0_12 = __pfpnacc_mmxq_mmxq(temp0_7, temp0_7)
int64_t temp0_13 = __pfacc_mmxq_mmxq(temp0_4, temp0_4)
int64_t temp0_14 = __pfpnacc_mmxq_mmxq(temp0_9, temp0_9)
int64_t temp0_15 = __pfpnacc_mmxq_mmxq(temp0_6, temp0_6)
int64_t temp0_16 = __pfsub_mmxq_mmxq(temp0_10, st1)
int64_t temp0_17 = __pswapd_mmxq_mmxq(temp0_8, temp0_15)
int64_t temp0_18 = __pfsubr_mmxq_memq(temp0_13, 0x3f8000003f800000)
arg2[6] = 0
st5 = _m_punpckldq(temp0_17, temp0_12.d)
int64_t st2 = _m_punpckldq(temp0_15, 0)
int64_t temp0_21 = _m_punpckhdq(temp0_18, 0)
int64_t temp0_22 = _m_punpckhdq(temp0_16, temp0_14.d)
arg2[4] = st5
int64_t temp0_23 = _m_punpckhdq(temp0_12, 0)
arg2[1] = st2
int64_t st6 = _m_punpckldq(temp0_14, temp0_16.d)
arg2[5] = temp0_21
uint32_t temp0_25[0x2] = __punpckldq_mmxq_memd(0, 0x3f800000)
*arg2 = temp0_22
arg2[2] = st6
arg2[3] = temp0_23
arg2[7] = temp0_25
__femms()
return arg2

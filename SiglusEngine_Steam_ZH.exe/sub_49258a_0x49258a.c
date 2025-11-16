// 函数: sub_49258a
// 地址: 0x49258a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t temp0 = __pfmul_mmxq_memq(0x3f0000003f000000, arg3)
int64_t temp0_1 = __pfmul_mmxq_memq(0x3f0000003f000000, arg2)
int64_t x87_r0
sub_4dc7a0(x87_r0)
int64_t temp0_2 = _m_punpckhdq(temp0_1, temp0_1.d)
sub_4dc7a0(x87_r0)
sub_4dc7a0(x87_r0)
int64_t st0 = _m_punpckldq(temp0_1, temp0_1.d)
int64_t st3 = _m_punpckldq(temp0_1, temp0_1.d)
int64_t temp0_5 = _m_punpckhdq(temp0_1, temp0_1.d)
int64_t temp0_6 = _m_punpckhdq(temp0_1, temp0_1.d)
uint64_t temp0_7 = _m_psrlqi(-0x8000000000000000, 0x20)
uint32_t st6[0x2] = temp0_2
int64_t st2 = _m_punpckldq(temp0_2, temp0_2.d)
st6 = _m_punpckhdq(st6, st6[0])
int64_t temp0_10 = __pfmul_mmxq_mmxq(st0 ^ 0x8000000000000000, st6)
int64_t temp0_11 = __pfmul_mmxq_mmxq(st3, st2)
int64_t temp0_12 = __pfmul_mmxq_mmxq(temp0_5, st2)
int64_t temp0_13 = __pfmul_mmxq_mmxq(temp0_6 ^ temp0_7, st6)
int64_t st7 = _m_punpckldq(_m_punpckhdq(temp0, temp0.d), temp0.d)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_10, temp0)
int64_t temp0_17 = __pfmul_mmxq_mmxq(temp0_11, st7)
int64_t temp0_18 = __pfmul_mmxq_mmxq(temp0_12, st7)
int64_t temp0_19 = __pfmul_mmxq_mmxq(temp0_13, temp0)
int64_t temp0_20 = __pfadd_mmxq_mmxq(temp0_16, temp0_18)
int64_t temp0_21 = __pfadd_mmxq_mmxq(temp0_17, temp0_19)
int64_t temp0_22 = __pfadd_mmxq_mmxq(temp0_20, temp0_20)
int64_t temp0_23 = __pfadd_mmxq_mmxq(temp0_21, temp0_21)
int64_t temp0_24 = _m_punpckhdq(temp0_20, temp0_20.d)
int64_t temp0_25 = _m_punpckhdq(temp0_21, temp0_21.d)
int64_t temp0_26 = __pfmul_mmxq_mmxq(temp0_20, temp0_22)
int64_t st1 = _m_punpckldq(temp0_23, temp0_22.d)
st7 = _m_punpckldq(temp0_21, temp0_21.d)
int64_t temp0_29 = __pfmul_mmxq_mmxq(temp0_22, temp0_25)
int64_t temp0_30 = __pfmul_mmxq_mmxq(st7, st1)
int64_t temp0_31 = __pfmul_mmxq_mmxq(st1, temp0_24)
st6 = __pfmul_mmxq_mmxq(st1, temp0_25)
int64_t temp0_33 = _m_punpckhdq(temp0_31, temp0_30.d)
st7 = _m_punpckldq(temp0_30, temp0_30.d)
uint32_t temp0_35[0x2] = _m_punpckldq(st6, st6[0])
arg1[6] = 0
int64_t temp0_36 = __pfadd_mmxq_mmxq(st7, temp0_26)
int64_t temp0_37 = __pfacc_mmxq_mmxq(temp0_26, temp0_26)
st6 = _m_punpckhdq(temp0_35, temp0_29.d)
int64_t temp0_39 = __pfsubr_mmxq_memq(temp0_37, 0x3f8000003f800000)
int64_t temp0_40 = __pfsubr_mmxq_memq(temp0_36, 0x3f8000003f800000)
st3 = _m_punpckldq(temp0_39, 0)
int64_t temp0_42 = __pfadd_mmxq_mmxq(temp0_33, st6)
arg1[5] = st3
int64_t temp0_43 = __pfsub_mmxq_mmxq(temp0_33, st6)
int64_t temp0_44 = __pfadd_mmxq_mmxq(temp0_31, temp0_29)
int64_t temp0_45 = __pfsub_mmxq_mmxq(temp0_31, temp0_29)
st2 = _m_punpckldq(temp0_44, 0)
st6 = temp0_42
int64_t st4 = _m_punpckldq(temp0_43, temp0_40.d)
st1 = _m_punpckldq(temp0_42, temp0_42.d)
arg1[3] = st2
int64_t temp0_49 = _m_punpckhdq(temp0_43, 0)
st0 = __punpckldq_mmxq_memd(0, 0x3f800000)
arg1[1] = temp0_49
st6 = _m_punpckhdq(st6, st6[0])
arg1[2] = st4
int64_t temp0_52 = _m_punpckhdq(temp0_40, st1.d)
uint32_t temp0_53[0x2] = _m_punpckldq(st6, temp0_45.d)
*arg1 = temp0_52
arg1[4] = temp0_53
arg1[7] = st0
__femms()
return arg1

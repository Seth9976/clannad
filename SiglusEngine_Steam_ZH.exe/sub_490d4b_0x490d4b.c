// 函数: sub_490d4b
// 地址: 0x490d4b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* eax = arg1
uint32_t st2[0x2] = eax[4]
int64_t st1 = eax[5]
int64_t st0 = *(eax + 0x24)
int64_t temp0 = _m_punpckhdq(st1, st1.d)
uint32_t temp0_1[0x2] = _m_punpckldq(st2, st2[0])
uint32_t st5[0x2] = eax[6]
int64_t st4 = eax[7]
int64_t st3 = *(eax + 0x34)
int64_t temp0_2 = _m_punpckhdq(st4, st4.d)
uint32_t temp0_3[0x2] = _m_punpckldq(st5, st5[0])
int64_t temp0_6 = __pfsub_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_2, st0), __pfmul_mmxq_mmxq(temp0, st3))
st2 = __pfsub_mmxq_mmxq(__pfmul_mmxq_memq(temp0_1, eax[7]), __pfmul_mmxq_memq(temp0_3, eax[5]))
int64_t temp0_12 = __pfsub_mmxq_mmxq(__pfmul_mmxq_memq(st3, eax[4]), __pfmul_mmxq_memq(st0, eax[6]))
st0 = st2
st0 = _m_punpckldq(_m_punpckhdq(st0, st0.d), temp0_6.d)
int64_t temp0_15 = _m_punpckhdq(temp0_12, temp0_6.d)
uint32_t temp0_16[0x2] = _m_punpckldq(temp0_12, st2[0])
int64_t st6 = eax[3]
int64_t temp0_17 = _m_punpckhdq(st6, st6.d)
int64_t temp0_20 =
    __pfadd_mmxq_mmxq(__pfmul_mmxq_memq(temp0_6, eax[2]), __pfmul_mmxq_mmxq(temp0_12, temp0_17))
st3 = *(eax + 0x14)
int64_t temp0_22 = __pfsub_mmxq_mmxq(temp0_20, __pfmul_mmxq_mmxq(st0, st3))
st0 = eax[2]
st0 = _m_punpckldq(st0, st0.d)
int64_t temp0_25 = __pfmul_mmxq_mmxq(temp0_22, __punpckldq_mmxq_memd(eax[1], *eax))
int64_t temp0_26 = __punpckhdq_mmxq_memq(eax[1], *eax)
st5 = __pfmul_mmxq_mmxq(temp0_16, st6)
st2 = __pfmul_mmxq_mmxq(st2, st3)
int64_t temp0_33 = __pfsub_mmxq_mmxq(temp0_25, 
    __pfmul_mmxq_mmxq(
        __pfsub_mmxq_mmxq(__pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_15, st0), st5), st2), temp0_26))
arg1 = __pfacc_mmxq_mmxq(temp0_33, temp0_33).d
__femms()
return fconvert.t(arg1)

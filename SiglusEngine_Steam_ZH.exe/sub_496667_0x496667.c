// 函数: sub_496667
// 地址: 0x496667
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint32_t st0[0x2] = *arg3
int64_t st1 = *arg4
uint32_t st2[0x2] = arg3[1]
int64_t st3 = arg4[1]
int64_t st6 = st2
int64_t temp0 = _m_punpckhdq(st3, st3.d)
int64_t temp0_1 = _m_punpckhdq(st6, st6.d)
uint32_t st7[0x2] = st3
uint32_t temp0_2[0x2] = _m_punpckldq(st2, st2[0])
uint32_t temp0_3[0x2] = _m_punpckldq(st7, st7[0])
uint32_t st5[0x2] = _m_punpckhdq(temp0_2, st0[0])
st7 = _m_punpckhdq(temp0_3, st1.d)
int64_t temp0_8 = __pfsub_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0, st5), __pfmul_mmxq_mmxq(temp0_1, st7))
st5 = __pfsub_mmxq_mmxq(__pfmul_mmxq_mmxq(_m_punpckhdq(st0, st2[0]), _m_punpckldq(st3, st1.d)), 
    __pfmul_mmxq_mmxq(_m_punpckhdq(st1, st3.d), _m_punpckldq(st2, st0[0])))
st6 = _m_punpckldq(st1, st1.d)
st2 = _m_punpckhdq(_m_punpckldq(st2, st2[0]), st0[0])
st3 = _m_punpckldq(st3, st3.d)
uint32_t temp0_20[0x2] = _m_punpckldq(st0, st0[0])
int64_t temp0_24 = __pfsub_mmxq_mmxq(__pfmul_mmxq_mmxq(st6, st2), 
    __pfmul_mmxq_mmxq(temp0_20, _m_punpckhdq(st3, st1.d)))
st0 = *arg2
st1 = arg2[1]
st2 = temp0_8
st3 = st0
st2 = __pfmul_mmxq_mmxq(_m_punpckldq(st2, st2[0]) ^ 0x8000000000000000, 
    _m_punpckhdq(st0, _m_punpckldq(st3, st3.d).d))
int64_t temp0_29 = _m_punpckhdq(temp0_8, temp0_8.d)
st7 = _m_punpckhdq(st5, st5[0])
st3 = _m_punpckldq(temp0_29, st5[0])
uint32_t temp0_32[0x2] = _m_punpckldq(st7, temp0_24.d)
int64_t temp0_35 = __pfacc_mmxq_mmxq(__pfmul_mmxq_mmxq(st3, st1) ^ 0x8000000000000000, 
    __pfmul_mmxq_mmxq(temp0_32, st1) ^ 0x8000000000000000)
st0 = *arg2
*arg1 = __pfsub_mmxq_mmxq(st2, temp0_35)
int64_t st4 = _m_punpckhdq(temp0_8, st5[0]) ^ 0x8000000000000000
st7 = _m_psrlqi(-0x8000000000000000, 0x20)
st2 = _m_punpckldq(st5, temp0_24.d) ^ st7
st6 = _m_punpckhdq(temp0_24, temp0_24.d) ^ st7
int64_t temp0_42 = _m_punpckhdq(st1, _m_punpckldq(st1, st1.d).d)
st7 = _m_psllqi(st7, 0x20)
int64_t temp0_44 = __pfmul_mmxq_mmxq(st4, st0)
st2 = __pfmul_mmxq_mmxq(st2, st0)
arg1[1] = __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_42, st6), 
    __pfacc_mmxq_mmxq(temp0_44 ^ st7, st2 ^ st7))
__femms()
return arg1

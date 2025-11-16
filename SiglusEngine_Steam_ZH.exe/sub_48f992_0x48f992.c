// 函数: sub_48f992
// 地址: 0x48f992
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st0 = *arg2
uint64_t st4 = zx.q(*(arg2 + 0x14))
int64_t temp0 = __pfadd_mmxq_mmxq(st0, st4)
uint64_t st5 = zx.q(arg2[5].d)
int64_t temp0_1 = __pfsub_mmxq_mmxq(st0, st4)
int64_t temp0_2 = __pfsubr_mmxq_mmxq(st0, st4)
int64_t temp0_3 = __pfsubr_mmxq_mmxq(st0, st5)
int64_t temp0_4 = __pfadd_mmxq_mmxq(temp0, st5)
int64_t temp0_5 = __pfsub_mmxq_mmxq(temp0_1, st5)
int64_t temp0_6 = __pfsub_mmxq_mmxq(temp0_2, st5)
st5 = arg2[4]
int64_t temp0_7 = __pfsub_mmxq_mmxq(temp0_3, st4)
st0 = _m_punpckldq(temp0_4, temp0_6.d)
uint32_t temp0_9[0x2] = _m_punpckldq(0, temp0_5.d)
uint64_t st7 = _m_punpckldq(temp0_6, temp0_5.d)
int64_t st3 = _m_punpckldq(temp0_7, temp0_7.d)
uint32_t ecx =
    _mm_movemask_pi8(_m_packssdw(__pfcmpge_mmxq_mmxq(temp0_9, st0), __pfcmpge_mmxq_mmxq(st7, st3)))
uint32_t st6[0x2] = st5
int64_t st1

if ((ecx & 1) == 0)
    int64_t temp0_15 = __pfadd_mmxq_memq(st0, -0x407fffffc0800000)
    st3 = zx.q(arg2[3].d)
    st7 = zx.q(arg2[1].d)
    int64_t temp0_16 = __pfrsqrt_mmxq_mmxq(st4, temp0_15)
    st3 = _m_punpckldq(st3, st5.d)
    st7 = _m_punpckldq(st7, st7.d)
    st0 = _m_punpckldq(temp0_15, temp0_15.d)
    int64_t temp0_20 = __pfmul_mmxq_mmxq(temp0_16, temp0_16)
    int64_t temp0_21 = _m_punpckhdq(st5, st7.d)
    st6 = zx.q(arg2[2].d)
    int64_t temp0_22 = __pfrsqit1_mmxq_mmxq(temp0_20, st0)
    int64_t temp0_23 = _m_punpckhdq(temp0_5, temp0_5.d)
    int64_t temp0_24 = __pfsub_mmxq_mmxq(st3, temp0_21)
    int64_t temp0_25 = __pfrcpit2_mmxq_mmxq(temp0_22, temp0_16)
    int64_t temp0_26 = __pfsub_mmxq_mmxq(temp0_23, st6)
    int64_t temp0_27 = __pfmul_mmxq_memq(temp0_25, 0x3f0000003f000000)
    int64_t temp0_28 = __pfmul_mmxq_mmxq(st0, temp0_27)
    int64_t temp0_29 = __pfmul_mmxq_mmxq(temp0_26, temp0_27)
    int64_t temp0_30 = __pfmul_mmxq_mmxq(temp0_24, temp0_27)
    st1 = _m_punpckldq(temp0_29, temp0_28.d)
    *arg1 = temp0_30
    arg1[1] = st1
    __femms()
    return arg1

if ((ecx & 0xcc) == 0xcc)
    int64_t temp0_32 = __pfadd_mmxq_memq(temp0_5, -0x407fffffc0800000)
    int64_t temp0_33 = _m_punpckhdq(temp0_6, temp0_6.d)
    int64_t temp0_34 = __pfrsqrt_mmxq_mmxq(st4, temp0_32)
    st3 = zx.q(arg2[2].d)
    int64_t temp0_35 = __pfmul_mmxq_mmxq(temp0_34, temp0_34)
    st1 = _m_punpckldq(temp0_32, temp0_32.d)
    st5 = __punpckldq_mmxq_memd(st5, arg2[3].d)
    int64_t temp0_38 = __pfsub_mmxq_mmxq(st3, temp0_33)
    int64_t temp0_39 = __pfrsqit1_mmxq_mmxq(temp0_35, st1)
    st7 = zx.q(arg2[1].d)
    st6 = _m_punpckhdq(st6, st6[0])
    int64_t temp0_41 = __pfrcpit2_mmxq_mmxq(temp0_39, temp0_34)
    st7 = _m_punpckldq(st7, st6[0])
    int64_t temp0_43 = __pfmul_mmxq_memq(temp0_41, 0x3f0000003f000000)
    int64_t temp0_44 = __pfmul_mmxq_mmxq(st1, temp0_43)
    int64_t temp0_45 = __pfadd_mmxq_mmxq(st5, st7 ^ 0x8000000000000000)
    int64_t temp0_46 = __pfmul_mmxq_mmxq(temp0_38, temp0_43)
    int64_t temp0_47 = __pfmul_mmxq_mmxq(temp0_45, temp0_43)
    st1 = _m_punpckldq(temp0_44, temp0_46.d)
    arg1[1] = temp0_47
    *arg1 = st1
    __femms()
    return arg1

if ((ecx & 0x10) == 0)
    int64_t temp0_66 = __pfadd_mmxq_memq(st3, -0x407fffffc0800000)
    int64_t temp0_67 = _m_punpckhdq(temp0_5, temp0_5.d)
    int64_t temp0_68 = __pfrsqrt_mmxq_mmxq(temp0_6, temp0_66)
    st4 = zx.q(arg2[1].d)
    st6 = _m_punpckhdq(st6, st6[0])
    int64_t temp0_70 = __pfmul_mmxq_mmxq(temp0_68, temp0_68)
    st3 = _m_punpckldq(temp0_66, temp0_66.d)
    st5 = __punpckldq_mmxq_memd(st5, arg2[3].d)
    st4 = _m_punpckldq(st4, st6[0])
    int64_t temp0_74 = __pfrsqit1_mmxq_mmxq(temp0_70, st3)
    st7 = zx.q(arg2[2].d)
    int64_t temp0_75 = __pfrcpit2_mmxq_mmxq(temp0_74, temp0_68)
    int64_t temp0_76 = __pfsub_mmxq_mmxq(temp0_67, st7)
    int64_t temp0_77 = __pfadd_mmxq_mmxq(st5, st4)
    int64_t temp0_78 = __pfmul_mmxq_memq(temp0_75, 0x3f0000003f000000)
    int64_t temp0_79 = __pfmul_mmxq_mmxq(st3, temp0_78)
    int64_t temp0_80 = __pfmul_mmxq_mmxq(temp0_76, temp0_78)
    int64_t temp0_81 = __pfmul_mmxq_mmxq(temp0_77, temp0_78)
    st3 = _m_punpckldq(temp0_79, temp0_80.d)
    *arg1 = temp0_81
    arg1[1] = st3
    __femms()
    return arg1

int64_t temp0_49 = __pfadd_mmxq_memq(temp0_6, -0x407fffffc0800000)
int64_t temp0_50 = _m_punpckhdq(temp0_5, temp0_5.d)
st6 = st5
int64_t temp0_51 = __pfrsqrt_mmxq_mmxq(st4, temp0_49)
st3 = zx.q(arg2[3].d)
st6 = _m_punpckhdq(st6, st6[0])
int64_t temp0_53 = __pfmul_mmxq_mmxq(temp0_51, temp0_51)
int64_t st2 = _m_punpckldq(temp0_49, temp0_49.d)
uint32_t temp0_55[0x2] = __punpckldq_mmxq_memd(st6, arg2[1].d)
st3 = _m_punpckldq(st3, st5.d)
int64_t temp0_57 = __pfrsqit1_mmxq_mmxq(temp0_53, st2)
st7 = zx.q(arg2[2].d)
int64_t temp0_58 = __pfrcpit2_mmxq_mmxq(temp0_57, temp0_51)
int64_t temp0_59 = __pfadd_mmxq_mmxq(temp0_50, st7)
int64_t temp0_60 = __pfmul_mmxq_memq(temp0_58, 0x3f0000003f000000)
int64_t temp0_61 = __pfadd_mmxq_mmxq(st3, temp0_55 ^ 0x8000000000000000)
int64_t temp0_62 = __pfmul_mmxq_mmxq(temp0_59, temp0_60)
int64_t temp0_63 = __pfmul_mmxq_mmxq(st2, temp0_60)
int64_t temp0_64 = __pfmul_mmxq_mmxq(temp0_61, temp0_60)
st1 = _m_punpckldq(temp0_62, temp0_63.d)
arg1[1] = temp0_64
*arg1 = st1
__femms()
return arg1

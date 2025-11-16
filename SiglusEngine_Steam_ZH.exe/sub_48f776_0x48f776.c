// 函数: sub_48f776
// 地址: 0x48f776
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
uint32_t st6[0x2] = _m_packssdw(__pfcmpge_mmxq_mmxq(temp0_9, st0), __pfcmpge_mmxq_mmxq(st7, st3))
uint32_t ecx = _m_packsswb(st6, st6)[0]
st6 = st5
int64_t st1

if ((ecx & 1) == 0)
    int64_t temp0_16 = __pfadd_mmxq_memq(st0, -0x407fffffc0800000)
    st3 = zx.q(arg2[3].d)
    st7 = zx.q(arg2[1].d)
    int64_t temp0_17 = __pfrsqrt_mmxq_mmxq(st4, temp0_16)
    st3 = _m_punpckldq(st3, st5.d)
    st7 = _m_punpckldq(st7, st7.d)
    st0 = _m_punpckldq(temp0_16, temp0_16.d)
    int64_t temp0_21 = __pfmul_mmxq_mmxq(temp0_17, temp0_17)
    int64_t temp0_22 = _m_punpckhdq(st5, st7.d)
    st6 = zx.q(arg2[2].d)
    int64_t temp0_23 = __pfrsqit1_mmxq_mmxq(temp0_21, st0)
    int64_t temp0_24 = _m_punpckhdq(temp0_5, temp0_5.d)
    int64_t temp0_25 = __pfsub_mmxq_mmxq(st3, temp0_22)
    int64_t temp0_26 = __pfrcpit2_mmxq_mmxq(temp0_23, temp0_17)
    int64_t temp0_27 = __pfsub_mmxq_mmxq(temp0_24, st6)
    int64_t temp0_28 = __pfmul_mmxq_memq(temp0_26, 0x3f0000003f000000)
    int64_t temp0_29 = __pfmul_mmxq_mmxq(st0, temp0_28)
    int64_t temp0_30 = __pfmul_mmxq_mmxq(temp0_27, temp0_28)
    int64_t temp0_31 = __pfmul_mmxq_mmxq(temp0_25, temp0_28)
    st1 = _m_punpckldq(temp0_30, temp0_29.d)
    *arg1 = temp0_31
    arg1[1] = st1
    __femms()
    return arg1

if ((ecx & 0xff00ff00) == 0xff00ff00)
    int64_t temp0_33 = __pfadd_mmxq_memq(temp0_5, -0x407fffffc0800000)
    int64_t temp0_34 = _m_punpckhdq(temp0_6, temp0_6.d)
    int64_t temp0_35 = __pfrsqrt_mmxq_mmxq(st4, temp0_33)
    st3 = zx.q(arg2[2].d)
    int64_t temp0_36 = __pfmul_mmxq_mmxq(temp0_35, temp0_35)
    st1 = _m_punpckldq(temp0_33, temp0_33.d)
    st5 = __punpckldq_mmxq_memd(st5, arg2[3].d)
    int64_t temp0_39 = __pfsub_mmxq_mmxq(st3, temp0_34)
    int64_t temp0_40 = __pfrsqit1_mmxq_mmxq(temp0_36, st1)
    st7 = zx.q(arg2[1].d)
    st6 = _m_punpckhdq(st6, st6[0])
    int64_t temp0_42 = __pfrcpit2_mmxq_mmxq(temp0_40, temp0_35)
    st7 = _m_punpckldq(st7, st6[0])
    int64_t temp0_44 = __pfmul_mmxq_memq(temp0_42, 0x3f0000003f000000)
    int64_t temp0_45 = __pfmul_mmxq_mmxq(st1, temp0_44)
    int64_t temp0_46 = __pfadd_mmxq_mmxq(st5, st7 ^ 0x8000000000000000)
    int64_t temp0_47 = __pfmul_mmxq_mmxq(temp0_39, temp0_44)
    int64_t temp0_48 = __pfmul_mmxq_mmxq(temp0_46, temp0_44)
    st1 = _m_punpckldq(temp0_45, temp0_47.d)
    arg1[1] = temp0_48
    *arg1 = st1
    __femms()
    return arg1

if ((ecx & 0x10000) == 0)
    int64_t temp0_67 = __pfadd_mmxq_memq(st3, -0x407fffffc0800000)
    int64_t temp0_68 = _m_punpckhdq(temp0_5, temp0_5.d)
    int64_t temp0_69 = __pfrsqrt_mmxq_mmxq(temp0_6, temp0_67)
    st4 = zx.q(arg2[1].d)
    st6 = _m_punpckhdq(st6, st6[0])
    int64_t temp0_71 = __pfmul_mmxq_mmxq(temp0_69, temp0_69)
    st3 = _m_punpckldq(temp0_67, temp0_67.d)
    st5 = __punpckldq_mmxq_memd(st5, arg2[3].d)
    st4 = _m_punpckldq(st4, st6[0])
    int64_t temp0_75 = __pfrsqit1_mmxq_mmxq(temp0_71, st3)
    st7 = zx.q(arg2[2].d)
    int64_t temp0_76 = __pfrcpit2_mmxq_mmxq(temp0_75, temp0_69)
    int64_t temp0_77 = __pfsub_mmxq_mmxq(temp0_68, st7)
    int64_t temp0_78 = __pfadd_mmxq_mmxq(st5, st4)
    int64_t temp0_79 = __pfmul_mmxq_memq(temp0_76, 0x3f0000003f000000)
    int64_t temp0_80 = __pfmul_mmxq_mmxq(st3, temp0_79)
    int64_t temp0_81 = __pfmul_mmxq_mmxq(temp0_77, temp0_79)
    int64_t temp0_82 = __pfmul_mmxq_mmxq(temp0_78, temp0_79)
    st3 = _m_punpckldq(temp0_80, temp0_81.d)
    *arg1 = temp0_82
    arg1[1] = st3
    __femms()
    return arg1

int64_t temp0_50 = __pfadd_mmxq_memq(temp0_6, -0x407fffffc0800000)
int64_t temp0_51 = _m_punpckhdq(temp0_5, temp0_5.d)
st6 = st5
int64_t temp0_52 = __pfrsqrt_mmxq_mmxq(st4, temp0_50)
st3 = zx.q(arg2[3].d)
st6 = _m_punpckhdq(st6, st6[0])
int64_t temp0_54 = __pfmul_mmxq_mmxq(temp0_52, temp0_52)
int64_t st2 = _m_punpckldq(temp0_50, temp0_50.d)
uint32_t temp0_56[0x2] = __punpckldq_mmxq_memd(st6, arg2[1].d)
st3 = _m_punpckldq(st3, st5.d)
int64_t temp0_58 = __pfrsqit1_mmxq_mmxq(temp0_54, st2)
st7 = zx.q(arg2[2].d)
int64_t temp0_59 = __pfrcpit2_mmxq_mmxq(temp0_58, temp0_52)
int64_t temp0_60 = __pfadd_mmxq_mmxq(temp0_51, st7)
int64_t temp0_61 = __pfmul_mmxq_memq(temp0_59, 0x3f0000003f000000)
int64_t temp0_62 = __pfadd_mmxq_mmxq(st3, temp0_56 ^ 0x8000000000000000)
int64_t temp0_63 = __pfmul_mmxq_mmxq(temp0_60, temp0_61)
int64_t temp0_64 = __pfmul_mmxq_mmxq(st2, temp0_61)
int64_t temp0_65 = __pfmul_mmxq_mmxq(temp0_62, temp0_61)
st1 = _m_punpckldq(temp0_63, temp0_64.d)
arg1[1] = temp0_65
*arg1 = st1
__femms()
return arg1

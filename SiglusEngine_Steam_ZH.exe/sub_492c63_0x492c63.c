// 函数: sub_492c63
// 地址: 0x492c63
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint64_t st1 = zx.q(arg2[1].d)
int64_t var_20 = *arg2
int32_t var_18 = st1.d
int64_t x87_r4
sub_494a40(x87_r4, &var_20, &var_20)
uint64_t st0 = zx.q(arg3)
int64_t x87_r0
sub_4dc7a0(x87_r0)
st1 = st0
int64_t temp0 = __pfsubr_mmxq_memq(st0, 0x3f8000003f800000)
int64_t temp0_1 = _m_punpckhdq(st0, st0.d)
int64_t st2 = var_20
uint64_t st3 = zx.q(var_18)
uint64_t st5 = st3
int32_t var_14 = temp0_1.d
uint64_t st7 = st3
st3 = _m_punpckldq(st3, st3.d)
int64_t temp0_3 = _m_punpckhdq(st2, st3.d)
int64_t temp0_4 = __pfmul_mmxq_mmxq(st3, st2)
st0 = _m_punpckldq(temp0, temp0.d)
int64_t temp0_6 = __pfmul_mmxq_mmxq(temp0_3, st2)
st1 = _m_punpckldq(st1, st1.d)
int64_t temp0_8 = __pfmul_mmxq_mmxq(temp0_6, st0)
int64_t temp0_9 = __pfmul_mmxq_mmxq(temp0_4, st0)
int64_t temp0_10 = __pfmul_mmxq_mmxq(st2, st2)
int64_t temp0_11 = __pfmul_mmxq_mmxq(st5, st5)
int64_t temp0_12 = __pfmul_mmxq_mmxq(temp0_10, st0)
int64_t temp0_13 = __pfmul_mmxq_mmxq(temp0_11, st0)
int64_t temp0_14 = __pfadd_mmxq_mmxq(temp0_12, st1)
int64_t temp0_15 = __pfadd_mmxq_mmxq(temp0_13, st1)
st1 = zx.q(var_14)
st1 = _m_punpckldq(st1, st1.d)
int64_t temp0_17 = __pfmul_mmxq_mmxq(st2, st1)
st5 = _m_punpckldq(temp0_15, 0)
int64_t temp0_19 = __pfmul_mmxq_mmxq(st7, st1)
arg1[6] = 0
st7 = _m_punpckldq(temp0_19, temp0_17.d)
int64_t temp0_21 = _m_punpckhdq(temp0_17, temp0_17.d)
arg1[5] = st5
int64_t temp0_22 = __pfsub_mmxq_mmxq(temp0_8, st7)
int64_t temp0_23 = __pfadd_mmxq_mmxq(temp0_8, st7)
int64_t temp0_24 = __pfsub_mmxq_mmxq(temp0_9, temp0_21)
int64_t st4 = _m_punpckldq(temp0_14, temp0_23.d)
st3 = _m_punpckldq(temp0_24, 0)
int64_t temp0_27 = _m_punpckhdq(temp0_23, 0)
*arg1 = st4
st7 = _m_punpckldq(temp0_9, temp0_9.d)
arg1[1] = st3
int64_t temp0_29 = __punpckhdq_mmxq_memq(0, 0x3f8000003f800000)
int64_t temp0_30 = __pfadd_mmxq_mmxq(st7, temp0_21)
arg1[3] = temp0_27
int64_t temp0_31 = _m_punpckhdq(temp0_14, temp0_14.d)
arg1[7] = temp0_29
int64_t temp0_32 = _m_punpckhdq(temp0_30, temp0_22.d)
st2 = _m_punpckldq(temp0_22, temp0_31.d)
arg1[4] = temp0_32
arg1[2] = st2
__femms()
return arg1

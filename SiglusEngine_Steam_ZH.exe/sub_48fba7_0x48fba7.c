// 函数: sub_48fba7
// 地址: 0x48fba7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
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
int64_t st2 = _m_punpckldq(temp0_2, temp0_2.d)
int64_t temp0_9 = _m_punpckhdq(temp0_2, temp0_2.d)
int64_t temp0_10 = __pfmul_mmxq_mmxq(st0 ^ 0x8000000000000000, temp0_9)
int64_t temp0_11 = __pfmul_mmxq_mmxq(st3, st2)
int64_t temp0_12 = __pfmul_mmxq_mmxq(temp0_5, st2)
int64_t temp0_13 = __pfmul_mmxq_mmxq(temp0_6 ^ temp0_7, temp0_9)
int64_t st7 = _m_punpckldq(_m_punpckhdq(temp0, temp0.d), temp0.d)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_10, temp0)
int64_t temp0_17 = __pfmul_mmxq_mmxq(temp0_11, st7)
int64_t temp0_18 = __pfmul_mmxq_mmxq(temp0_12, st7)
int64_t temp0_19 = __pfmul_mmxq_mmxq(temp0_13, temp0)
int64_t temp0_20 = __pfadd_mmxq_mmxq(temp0_16, temp0_18)
int64_t temp0_21 = __pfadd_mmxq_mmxq(temp0_17, temp0_19)
*arg1 = temp0_20
arg1[1] = temp0_21
__femms()
return arg1

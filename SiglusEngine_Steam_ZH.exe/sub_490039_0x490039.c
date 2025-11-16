// 函数: sub_490039
// 地址: 0x490039
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* edx_1 = arg2
int64_t st0 = *edx_1
uint64_t st1 = zx.q(edx_1[1].d)
int64_t temp0 = __pfmul_mmxq_mmxq(st0, st0)
int64_t temp0_1 = __pfmul_mmxq_mmxq(st1, st1)
int64_t temp0_2 = __pfadd_mmxq_mmxq(temp0, temp0_1)
int64_t temp0_3 = __pfacc_mmxq_mmxq(temp0_2, temp0_2)
int64_t temp0_4 = __pfrsqrt_mmxq_mmxq(temp0_1, temp0_3)
int64_t temp0_7 = __pfrcpit2_mmxq_mmxq(
    __pfrsqit1_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_4, temp0_4), temp0_3), temp0_4)
int64_t temp0_8 = __pfmul_mmxq_mmxq(temp0_3, temp0_7)
int64_t x87_r0
sub_4dc7a0(x87_r0)
int64_t temp0_9 = __pfcmpge_mmxq_memq(temp0_8 & 0x7fffffffffffffff, 0x3400000034000000)
int32_t ecx = _m_punpckhdq(temp0_9, temp0_9.d).d
int64_t st2 = *arg2
int64_t temp0_12 = __pfmul_mmxq_memq(_m_punpckhdq(temp0_8, temp0_8.d), temp0_7.d.q)
uint32_t st3[0x2] = zx.q(arg2[1].d)

if ((ecx & 1) != 0)
    st1 = _m_punpckldq(temp0_12, temp0_12.d)
    st3 = __pfmul_mmxq_mmxq(st3, st1)
    st2 = __pfmul_mmxq_mmxq(st2, st1)

uint32_t temp0_16[0x2] = _m_punpckldq(st3, temp0_8.d)
*arg1 = st2
arg1[1] = temp0_16
__femms()
return arg1

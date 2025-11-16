// 函数: sub_4963b3
// 地址: 0x4963b3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint64_t st0 = zx.q(arg6)
int64_t temp0 = __pfmul_mmxq_mmxq(st0, st0)
int64_t temp0_1 = __pfmul_mmxq_mmxq(temp0, st0)
int64_t temp0_2 = __pfsub_mmxq_mmxq(temp0_1, temp0)
int64_t temp0_3 = __pfmul_mmxq_mmxq(temp0, 0x4000000040000000)
int64_t temp0_4 = __pfmul_mmxq_memq(temp0, 0x4040000040400000)
int64_t temp0_5 = __pfmul_mmxq_mmxq(temp0_1, 0x4000000040000000)
int64_t temp0_6 = __pfsub_mmxq_mmxq(temp0_1, temp0_3)
int64_t temp0_7 = __pfsub_mmxq_mmxq(temp0_4, temp0_5)
int64_t temp0_8 = __pfadd_mmxq_mmxq(temp0_6, st0)
int64_t temp0_10 = __pfadd_mmxq_memq(__pfsub_mmxq_mmxq(temp0_5, temp0_4), 0x3f8000003f800000)
uint64_t st1 = _m_punpckldq(temp0_7, temp0_7.d)
int64_t st6 = _m_punpckldq(temp0_8, temp0_8.d)
int64_t st7 = _m_punpckldq(temp0_2, temp0_2.d)
*arg1 = __pfadd_mmxq_mmxq(
    __pfadd_mmxq_mmxq(__pfmul_mmxq_memq(_m_punpckldq(temp0_10, temp0_10.d), *arg2), 
        __pfmul_mmxq_memq(st6, *arg3)), 
    __pfadd_mmxq_mmxq(__pfmul_mmxq_memq(st1, *arg4), __pfmul_mmxq_memq(st7, *arg5)))
__femms()
return arg1

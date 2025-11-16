// 函数: sub_48fc6c
// 地址: 0x48fc6c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t var_18
int64_t x87_r4
sub_494a40(x87_r4, &var_18, arg2)
int64_t temp0 = __pfmul_mmxq_memq(zx.q(arg3), 0x3f0000003f000000)
int64_t x87_r0
sub_4dc7a0(x87_r0)
int64_t st1 = var_18
int64_t temp0_1 = _m_punpckhdq(temp0, temp0.d)
int64_t temp0_2 = __pfmul_mmxq_mmxq(st1, temp0_1)
int32_t var_10
uint32_t temp0_4[0x2] = _m_punpckldq(__pfmul_mmxq_mmxq(zx.q(var_10), temp0_1), temp0.d)
*arg1 = temp0_2
arg1[1] = temp0_4
__femms()
return arg1

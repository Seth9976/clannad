// 函数: sub_4969b0
// 地址: 0x4969b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t st0 = *arg3
uint64_t st1 = zx.q(arg3[1].d)
uint64_t st3 = zx.q(arg2[1].d)
int64_t temp0 = __pfmul_mmxq_mmxq(*arg2, st0)
int64_t temp0_1 = __pfmul_mmxq_mmxq(st3, st1)
int64_t temp0_3 = __pfadd_mmxq_mmxq(__pfacc_mmxq_mmxq(temp0, temp0), temp0_1)
*arg1 = st0
arg1[1].d = st1.d
*(arg1 + 0xc) = (temp0_3 ^ 0x80000000).d
__femms()
return arg1

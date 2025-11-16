// 函数: sub_496606
// 地址: 0x496606
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t st0 = *arg3
int64_t st2 = arg3[1]
int64_t temp0_2 = __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(st0, st0), __pfmul_mmxq_mmxq(st2, st2))
int64_t temp0_3 = __pfacc_mmxq_mmxq(temp0_2, temp0_2)
int64_t temp0_4 = __pfrsqrt_mmxq_mmxq(arg1, temp0_3)
int64_t temp0_5 = __pfcmpgt_mmxq_memq(temp0_3, 0x80000000800000)
int64_t temp0_8 = __pfrcpit2_mmxq_mmxq(
    __pfrsqit1_mmxq_mmxq(temp0_3, __pfmul_mmxq_mmxq(temp0_4, temp0_4)), temp0_4)
int64_t temp0_9 = __pfmul_mmxq_mmxq(st0 & temp0_5, temp0_8)
int64_t temp0_10 = __pfmul_mmxq_mmxq(st2 & temp0_5, temp0_8)
*arg2 = temp0_9
arg2[1] = temp0_10
__femms()
return arg2

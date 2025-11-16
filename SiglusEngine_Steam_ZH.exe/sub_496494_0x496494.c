// 函数: sub_496494
// 地址: 0x496494
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st0 = *arg3
int64_t temp0 = __pfmul_mmxq_mmxq(st0, st0)
int64_t temp0_1 = __pfacc_mmxq_mmxq(temp0, temp0)
int64_t temp0_2 = __pfrsqrt_mmxq_mmxq(arg1, temp0_1)
*arg2 = __pfmul_mmxq_mmxq(st0 & __pfcmpgt_mmxq_memq(temp0_1, 0x80000000800000), 
    __pfrcpit2_mmxq_mmxq(__pfrsqit1_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_2, temp0_2), temp0_1), 
        temp0_2))
__femms()
return arg2

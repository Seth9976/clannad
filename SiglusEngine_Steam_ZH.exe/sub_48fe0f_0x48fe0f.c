// 函数: sub_48fe0f
// 地址: 0x48fe0f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t temp0 = __pfadd_mmxq_mmxq(zx.q(arg6), zx.q(arg7))
arg6 = temp0.d
void var_28
sub_48fcd8(&var_28, arg3, arg4, temp0.d)
int64_t var_18[0x2]
sub_48fcd8(&var_18, arg3, arg5, arg6)
uint64_t st0 = zx.q(arg6)
int64_t temp0_1 = __pfrcp_mmxq_mmxq(arg1, st0)
sub_48fcd8(arg2, &var_28, &var_18, 
    __pfmul_mmxq_mmxq(__pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(st0, temp0_1), temp0_1), zx.q(arg7))
        .d)
__femms()
return arg2

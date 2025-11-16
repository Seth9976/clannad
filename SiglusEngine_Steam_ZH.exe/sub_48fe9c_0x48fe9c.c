// 函数: sub_48fe9c
// 地址: 0x48fe9c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t var_20[0x2]
sub_48fcd8(&var_20, arg2, arg5, arg6)
int64_t var_10[0x2]
sub_48fcd8(&var_10, arg3, arg4, arg6)
uint64_t st0 = zx.q(arg6)
int64_t* result = sub_48fcd8(arg1, &var_20, &var_10, 
    __pfmul_mmxq_memq(__pfsub_mmxq_mmxq(st0, __pfmul_mmxq_mmxq(st0, st0)), 0x4000000040000000).d)
__femms()
return result

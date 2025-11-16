// 函数: sub_490050
// 地址: 0x490050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx_1 = *(arg1 - 0x513ff0f1)
int32_t entry_ebx
*(arg1 - 0x513ff0f1) += entry_ebx
arg3 = __pfrsqrt_mmxq_mmxq(arg3, arg2)
void* arg_4 = arg1
int32_t arg_8 = ebx_1
arg3 = __pfrcpit2_mmxq_mmxq(__pfrsqit1_mmxq_mmxq(__pfmul_mmxq_mmxq(arg3, arg3), arg2), arg3)
__return_addr = arg3.d
arg2 = __pfmul_mmxq_mmxq(arg2, arg3)
int64_t x87_r0
sub_4dc7a0(x87_r0)
arg3 = arg2
arg2 = __pfcmpge_mmxq_memq(arg2 & 0x7fffffffffffffff, 0x3400000034000000)
int32_t ecx = _m_punpckhdq(arg2, arg2.d).d
int64_t st2 = *arg5
arg2 = arg3
arg3 = __pfmul_mmxq_memq(_m_punpckhdq(arg3, arg3.d), __return_addr.q)
uint32_t st3[0x2] = zx.q(arg5[1].d)

if ((ecx & 1) != 0)
    arg3 = _m_punpckldq(arg3, arg3.d)
    st3 = __pfmul_mmxq_mmxq(st3, arg3)
    st2 = __pfmul_mmxq_mmxq(st2, arg3)

st3 = _m_punpckldq(st3, arg2.d)
*arg4 = st2
arg4[1] = st3
__femms()
return arg4

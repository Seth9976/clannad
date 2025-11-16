// 函数: sub_48ff92
// 地址: 0x48ff92
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t* result = arg2
int64_t st1 = *arg3
int64_t st2 = arg3[1]
int64_t temp0 = _m_punpckhdq(st2, st2.d)

if (__pfcmpge_mmxq_memq(temp0, 0x3f8000003f800000).d == 0)
    uint64_t x87_r0
    sub_4dc1c0(x87_r0)
    sub_4dc8a0(x87_r0)
    result = arg2
    int32_t ecx_1 = __pfcmpge_mmxq_memq(temp0 & 0x7fffffff7fffffff, 0x3400000034000000).d
    st1 = *arg3
    st2 = arg3[1]
    
    if (ecx_1 != 0)
        int64_t st3 = zx.q(temp0.d)
        int64_t temp0_3 = __pfrcp_mmxq_mmxq(arg1, temp0)
        int64_t temp0_7 = __pfmul_mmxq_mmxq(_m_punpckldq(st3, st3.d), 
            __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0, temp0_3), temp0_3))
        st1 = __pfmul_mmxq_mmxq(st1, temp0_7)
        st2 = __pfmul_mmxq_mmxq(st2, temp0_7)

*result = st1
result[1] = st2 & 0xffffffff
__femms()
return result

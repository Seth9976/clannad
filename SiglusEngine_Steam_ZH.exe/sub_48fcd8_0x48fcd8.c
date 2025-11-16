// 函数: sub_48fcd8
// 地址: 0x48fcd8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
int64_t* ecx = arg2
int64_t temp0_2 =
    __pfadd_mmxq_mmxq(__pfmul_mmxq_memq(*ecx, *arg3), __pfmul_mmxq_memq(ecx[1], arg3[1]))
int64_t st4 = zx.q(arg4)
int64_t st0 = __pfsub_mmxq_mmxq(0x3f800000, st4)
int64_t temp0_4 = __pfacc_mmxq_mmxq(temp0_2, temp0_2)
int64_t st7 = __pfcmpge_mmxq_mmxq(0, temp0_4) & 0x8000000080000000
int64_t st1 = temp0_4 ^ st7
int32_t eax = __pfcmpge_mmxq_mmxq(0x3f7fff583f7fff58, st1).d
int64_t temp0_8 = __pfsubr_mmxq_memq(__pfmul_mmxq_mmxq(st1, st1), 0x3f8000003f800000)

if (eax != 0)
    int64_t temp0_9 = __pfrsqrt_mmxq_mmxq(st4, temp0_8)
    int64_t temp0_10 = __pfmul_mmxq_mmxq(temp0_9, temp0_9)
    int64_t temp0_12 = __pfrcpit2_mmxq_mmxq(__pfrsqit1_mmxq_mmxq(temp0_8, temp0_10), temp0_9)
    int64_t temp0_13 = __pfrcp_mmxq_mmxq(temp0_10, temp0_12)
    __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_12, temp0_13), temp0_13)
    int64_t x87_r0
    uint64_t x87_r1
    sub_4dc0c0(x87_r0, x87_r1)
    int64_t temp0_16 = __pfmul_mmxq_mmxq(st1, zx.q(arg4))
    sub_4dc8a0(x87_r0)
    int64_t temp0_17 = __pfmul_mmxq_mmxq(zx.q(st1.d), zx.q(st0.d))
    sub_4dc8a0(x87_r0)
    st1 = zx.q(temp0_12.d)
    st7 = zx.q(st7.d)
    st0 = __pfmul_mmxq_mmxq(temp0_17, st1)
    st4 = __pfmul_mmxq_mmxq(zx.q(temp0_16.d), st1)

st4 ^= st7
st0 = _m_punpckldq(st0, st0.d)
st4 = _m_punpckldq(st4, st4.d)
int64_t temp0_22 = __pfmul_mmxq_memq(st0, *arg2)
int64_t temp0_23 = __pfmul_mmxq_memq(st4, *arg3)
int64_t temp0_24 = __pfmul_mmxq_memq(st0, arg2[1])
int64_t temp0_25 = __pfmul_mmxq_memq(st4, arg3[1])
int64_t temp0_26 = __pfadd_mmxq_mmxq(temp0_22, temp0_23)
int64_t temp0_27 = __pfadd_mmxq_mmxq(temp0_24, temp0_25)
*arg1 = temp0_26
arg1[1] = temp0_27
__femms()
return arg1

// 函数: sub_4dc9a0
// 地址: 0x4dc9a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg1.d
arg1 &= zx.q(data_b5b09c)
int32_t ebx_1 = eax_1 & 0x80000000
int64_t st1 = arg1
int64_t temp0 = __pfmul_mmxq_mmxq(arg1, zx.q(data_b5b150))
uint64_t st3 = data_b5b060
int64_t temp0_1 = __pf2id_mmxq_mmxq(temp0, temp0)
int64_t st7 = data_b5b068
int32_t ecx = temp0_1.d
int64_t temp0_2 = __pi2fd_mmxq_mmxq(temp0_1, temp0_1)
int64_t st6 = data_b5b078
arg1 = _m_punpckldq(temp0_2, temp0_2.d)
int64_t st5 = data_b5b018
int64_t temp0_4 = __pfmul_mmxq_mmxq(arg1, st3)
st3 = data_b5b070
int64_t temp0_7 =
    __pfadd_mmxq_mmxq(__pfadd_mmxq_mmxq(st1, temp0_4), _m_punpckhdq(temp0_4, temp0_4.d))
st1 = _m_punpckldq(temp0_7, temp0_7.d)

if ((ecx & 1) != 0)
    st1 = __pfsubr_mmxq_mmxq(st1, st3)

int64_t st2 = _m_punpckldq(st5, st1.d)
int64_t temp0_11 = __pfmul_mmxq_mmxq(st1, st1)
int64_t st4 = data_b5b080
uint32_t esi_3 = ecx u>> 1
int64_t temp0_12 = __pfmul_mmxq_mmxq(st7, temp0_11)
int64_t temp0_13 = __pfmul_mmxq_mmxq(st6, temp0_11)
int64_t temp0_14 = __pfadd_mmxq_mmxq(temp0_12, st5)
int64_t temp0_15 = __pfmul_mmxq_mmxq(st4, temp0_11)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_14, temp0_13)
st6 = data_b5b088
int64_t temp0_17 = __pfadd_mmxq_mmxq(temp0_16, st5)
int64_t temp0_18 = __pfmul_mmxq_mmxq(st6, temp0_11)
arg1 = zx.q((eax_1 u>> 0x1f ^ ecx u>> 2) << 0x1f)
int64_t temp0_20 = __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_15, temp0_17), st5)
st6 = _m_punpckldq(temp0_18, st5.d)
uint64_t temp0_22 = _m_psrlqi(st5, 0x20)
int64_t temp0_23 = __pfmul_mmxq_mmxq(temp0_20, st6)
arg1 = _m_punpckldq(arg1, arg1.d)
st4 = __pfmul_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_23, temp0_22), st2)

if (((ecx ^ esi_3) & 1) != 0)
    st4 = _m_punpckhdq(st4, _m_punpckldq(temp0_22, st4.d).d)

arg1 ^= st4 ^ zx.q(ebx_1) ^ zx.q(esi_3 << 0x1f)
int64_t temp0_29 = __pfrcp_mmxq_mmxq(st2, arg1)
int64_t temp0_30 = _m_punpckhdq(arg1, arg1.d)
__pfmul_mmxq_mmxq(__pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(arg1, temp0_29), temp0_29), temp0_30)
return eax_1 ^ ebx_1

// 函数: sub_4dcac0
// 地址: 0x4dcac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

_m_pslldi(__pf2id_mmxq_mmxq(arg2, arg2), 0x1f)
int64_t st4 = arg1
arg1 = (arg1 & zx.q(data_b5b0a0)) | zx.q(data_b5b0a8)
uint64_t st3 = zx.q(data_b5b110)
st4 = _m_psrldi(st4 & zx.q(data_b5b0a4), 0x17)
uint64_t st2 = arg1
arg1 = _m_pcmpgtd(arg1, st3)
uint64_t st5 = _m_pcmpeqd(0, st4)
st3 = zx.q(data_b5b114)
int64_t temp0_5 = _m_psubd(st4, arg1)
arg1 &= st3
st3 = zx.q(data_b5b118)
int64_t temp0_6 = _m_psubd(st2, arg1)
int64_t temp0_7 = _m_psubd(temp0_5, st3)
st3 = zx.q(data_b5b0a8)
int64_t temp0_8 = __pfadd_mmxq_mmxq(temp0_6, st3)
int64_t temp0_9 = __pfsub_mmxq_mmxq(temp0_6, st3)
uint64_t st7 = zx.q(data_b5b11c)
int64_t temp0_10 = __pfrcp_mmxq_mmxq(st3, temp0_8)
int64_t temp0_11 = __pfrcpit1_mmxq_mmxq(temp0_8, temp0_10)
int64_t temp0_12 = __pi2fd_mmxq_mmxq(temp0_7, temp0_7)
int64_t temp0_14 = __pfmul_mmxq_mmxq(temp0_9, __pfrcpit2_mmxq_mmxq(temp0_11, temp0_10))
int64_t temp0_15 = __pfmul_mmxq_mmxq(temp0_14, temp0_14)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_15, st7)
int64_t temp0_17 = __pfmul_mmxq_mmxq(temp0_14, zx.q(data_b5b128))
int64_t temp0_18 = __pfadd_mmxq_mmxq(temp0_16, zx.q(data_b5b120))
st7 = zx.q(data_b5b124)
int64_t temp0_19 = __pfmul_mmxq_mmxq(temp0_18, temp0_15)
arg1 = __pfmul_mmxq_mmxq(
    st5 & not.q(__pfadd_mmxq_mmxq(
        __pfadd_mmxq_mmxq(temp0_17, 
            __pfmul_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_15, temp0_17), 
                __pfadd_mmxq_mmxq(temp0_19, st7))), 
        temp0_12)), 
    arg2) | (st5 & zx.q(data_b5b12c))
int64_t temp0_26 = __pf2id_mmxq_mmxq(temp0_12, arg1)
int64_t temp0_27 = __pi2fd_mmxq_mmxq(arg2, temp0_26)
st3 = zx.q(data_b5b130)
int64_t temp0_28 = __pfsub_mmxq_mmxq(arg1, temp0_27)
int64_t temp0_29 = __pfmul_mmxq_mmxq(temp0_28, temp0_28)
st7 = zx.q(data_b5b134)
int64_t temp0_30 = __pfadd_mmxq_mmxq(temp0_29, st3)
int64_t temp0_31 = __pfmul_mmxq_mmxq(temp0_29, st7)
st7 = zx.q(data_b5b13c)
int64_t temp0_32 = __pfmul_mmxq_mmxq(temp0_30, temp0_29)
st3 = zx.q(data_b5b138)
int64_t temp0_33 = __pfadd_mmxq_mmxq(temp0_31, st7)
st7 = zx.q(data_b5b0b0)
int64_t temp0_34 = __pfadd_mmxq_mmxq(temp0_32, st3)
int64_t temp0_35 = __pfmul_mmxq_mmxq(temp0_33, temp0_28)
int64_t temp0_36 = __pfsub_mmxq_mmxq(temp0_34, temp0_35)
int64_t temp0_37 = __pfmul_mmxq_mmxq(temp0_35, st7)
int64_t temp0_38 = __pfrcp_mmxq_mmxq(temp0_28, temp0_36)
st7 = zx.q(data_b5b0a8)
int64_t temp0_39 = __pfrcpit1_mmxq_mmxq(temp0_36, temp0_38)
st4 = _m_pslldi(temp0_26, 0x17)
int64_t temp0_41 = __pfrcpit2_mmxq_mmxq(temp0_39, temp0_38)
st3 = zx.q(data_b5b140)
int64_t temp0_42 = __pfmul_mmxq_mmxq(temp0_37, temp0_41)
arg2 = zx.q(data_b5b144)
int64_t temp0_43 = __pfadd_mmxq_mmxq(temp0_42, st7)
__pfcmpge_mmxq_mmxq(arg1, st3)
__pfcmpge_mmxq_mmxq(arg1, arg2)
data_b5b148
_m_paddd(st4, temp0_43)

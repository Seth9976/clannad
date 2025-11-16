// 函数: sub_4e7950
// 地址: 0x4e7950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t* result = arg2
int32_t* ecx = arg4
int32_t* ebx = arg3
uint32_t i_1 = arg1 u>> 2
void* edx = arg5
uint32_t i

do
    uint64_t st2 = zx.q(*ebx)
    uint64_t st0 = _m_punpckhwd(zx.q(*result), 0)
    uint64_t st3 = zx.q(*ecx)
    int64_t temp0_3 = __psubsw_mmxq_memq(_m_punpckhwd(st2, 0), 0x80008000800080)
    int64_t temp0_5 = __psubsw_mmxq_memq(_m_punpckhwd(st3, 0), 0x80008000800080)
    st2 = __pmaddwd_mmxq_memq(_m_punpcklwd(temp0_3, temp0_5.d), -0xb6005700b60058)
    int32_t st1[0x2] = _m_psllwi(st0, 8)
    int32_t st6[0x2] = st1
    st1 = _m_punpcklwd(st1, 0)
    st6 = __punpckhwd_mmxq_mmxd(st6, 0)
    int64_t temp0_11 = __punpckhwd_mmxq_mmxd(temp0_3, temp0_5.d)
    int64_t temp0_12 = _m_paddd(st2, st1)
    uint64_t st5 = __pmaddwd_mmxq_memq(temp0_11, -0xb6005700b60058)
    st3 = __pmaddwd_mmxq_memq(_m_punpcklwd(temp0_5, st0.d), 0x100016701000167)
    st2 = _m_psradi(temp0_12, 8)
    int64_t temp0_17 = _m_paddd(st5, st6)
    uint64_t st4 = __pmaddwd_mmxq_memq(_m_punpcklwd(temp0_3, st0.d), 0x10001c6010001c6)
    st5 = _m_psradi(temp0_17, 8)
    st3 = _m_psradi(st3, 8)
    int64_t temp0_22 = __punpckhwd_mmxq_mmxd(temp0_3, st0.d)
    st4 = _m_psradi(st4, 8)
    st6 = st3
    uint64_t st7 = __pmaddwd_mmxq_memq(temp0_22, 0x10001c6010001c6)
    st1 = __pmaddwd_mmxq_memq(__punpckhwd_mmxq_mmxd(temp0_5, st0.d), 0x100016701000167)
    st3 = _m_punpckldq(st3, st2.d)
    st6 = _m_punpckhdq(st6, st2.d)
    st0 = st4
    st7 = _m_psradi(st7, 8)
    st4 = __punpckldq_mmxq_memd(st4, 0)
    int64_t temp0_31 = __punpckhdq_mmxq_memq(st0, 0)
    int32_t temp0_32[0x2] = _m_psradi(st1, 8)
    st3 = _m_packuswb(_m_packssdw(st3, st4), _m_packssdw(st6, temp0_31))
    st2 = _m_punpckldq(temp0_32, st5.d)
    st4 = st7
    st1 = _m_punpckhdq(temp0_32, st5.d)
    st7 = __punpckldq_mmxq_memd(st7, 0)
    int64_t temp0_39 = __punpckhdq_mmxq_memq(st4, 0)
    st2 = _m_packssdw(st2, st7)
    int32_t temp0_41[0x2] = _m_packssdw(st1, temp0_39)
    uint64_t temp0_42 = _m_psrlqi(st3 & 0xffffffff00000000, 8)
    edx += 0xc
    st2 = _m_packuswb(st2, temp0_41)
    uint64_t temp0_44 = _m_psrlqi(temp0_42, 0x20)
    result = &result[1]
    *(edx - 0xc) = (st3 | temp0_42).d
    st3 = _m_punpcklwd(temp0_44, st2.d)
    uint64_t temp0_46 = _m_psrlqi(st2, 0x18)
    ecx = &ecx[1]
    *(edx - 8) = st3.d
    ebx = &ebx[1]
    *(edx - 4) = (temp0_46 | _m_psrlqi(st3, 0x30)).d
    i = i_1
    i_1 -= 1
while (i != 1)
return result

// 函数: sub_496140
// 地址: 0x496140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg3
uint32_t (* eax)[0x2] = arg1
int64_t* edx = arg2

if (ecx s>= 4)
    while (true)
        if (ecx s< 4)
            if (ecx == 0)
                break
            
            edx += (ecx - 4) * 4
            eax += (ecx - 4) * 2
            ecx = 4
        else
            uint32_t st0[0x2] = *edx
            uint32_t st1[0x2] = edx[1]
            uint32_t st6[0x2] = data_b59070
            uint32_t temp0_4[0x2] =
                _m_pslldi(_m_packssdw(_m_psrldi(st6 & st0, 0x12), _m_psrldi(st6 & st1, 0x12)), 2)
            int64_t st2 = data_b590c0
            st0 &= st2
            st1 &= st2
            st6 = st0
            uint32_t st7[0x2] = st1
            int64_t st3 = data_b59060
            int64_t temp0_5 = __pfcmpge_mmxq_mmxq(st3, st0)
            st0 = _m_psubd(__pfadd_mmxq_mmxq(st0, temp0_5 & st3), temp0_5 & data_b590d0)
            int64_t temp0_8 = __pfcmpge_mmxq_mmxq(st3, st1)
            st1 = _m_psubd(__pfadd_mmxq_mmxq(st1, temp0_8 & st3), temp0_8 & data_b590d0)
            uint32_t temp0_11[0x2] = _m_psrldi(st0, 0xd)
            uint32_t temp0_12[0x2] = _m_psrldi(st1, 0xd)
            int64_t st4 = data_b59090
            st0 = _m_paddd(temp0_11 & st4, st0)
            st1 = _m_paddd(temp0_12 & st4, st1)
            st4 = data_b59050
            int64_t temp0_15 = __pfcmpgt_mmxq_mmxq(st4, st6)
            int64_t temp0_16 = __pfcmpgt_mmxq_mmxq(st4, st7)
            st2 = data_b590a0
            st0 = _m_paddd(st0, st2)
            st1 = _m_paddd(st1, st2)
            st3 = data_b590e0
            *eax = _m_packssdw((_m_psrldi(st0, 0xd) & temp0_15) | (temp0_15 & not.q(st3)), 
                (_m_psrldi(st1, 0xd) & temp0_16) | (temp0_16 & not.q(st3))) | temp0_4
            eax = &eax[1]
            edx = &edx[2]
            ecx -= 4
else if (ecx != 0)
    sub_40104d(eax, edx, ecx)

__femms()
return arg1

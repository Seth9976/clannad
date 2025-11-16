// 函数: sub_4e0410
// 地址: 0x4e0410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x28)
int32_t* result = *arg2
int32_t i = 0

if (*(arg3 + 0x13c) s> 0)
    int32_t edi
    int32_t var_18_1 = edi
    int32_t* ebx_2 = arg4 - result
    
    do
        int64_t* ecx_1 = *(ebx_2 + result)
        int64_t* ecx_2 = *result
        int80_t st6
        st6.q = 0
        uint8_t st7[0x8] = *ecx_1
        uint8_t st0[0x8] = __pmullw_mmxq_memq(_m_punpckhwd(st7, 0), 0x3000300030003)
        uint64_t st1 = _m_paddb(_m_psllqi(st7, 8), st7 & 0xff)
        int64_t st2 = _m_psrlqi(st7, 8)
        st1 = _m_punpckhwd(st1, 0)
        st2 = _m_punpckhwd(st2, 0)
        st1 = __paddw_mmxq_memq(_m_paddw(st1, st0), 0x1000100010001)
        st2 = __paddw_mmxq_memq(_m_paddw(st2, st0), 0x2000200020002)
        st1 = _m_psrlwi(st1, 2)
        *ecx_2 = _m_paddb(_m_psllqi(_m_psrlwi(st2, 2), 8), st1)
        uint8_t st3[0x8] = st7
        st0 = __pmullw_mmxq_memq(_m_punpckhbw(st7, 0), 0x3000300030003)
        st1 = _m_psllqi(st7, 8)
        st2 = _m_psrlqi(st7, 8)
        st7 = ecx_1[1]
        st2 = _m_paddb(st2, _m_psllqi(st7, 0x38))
        st1 = _m_punpckhbw(st1, 0)
        st2 = _m_punpckhbw(st2, 0)
        st1 = __paddw_mmxq_memq(_m_paddw(st1, st0), 0x1000100010001)
        st2 = __paddw_mmxq_memq(_m_paddw(st2, st0), 0x2000200020002)
        st1 = _m_psrlwi(st1, 2)
        ecx_2[1] = _m_paddb(_m_psllqi(_m_psrlwi(st2, 2), 8), st1)
        void* edi_2 = &ecx_2[2]
        void* esi_2 = &ecx_1[1]
        int32_t j
        
        for (j = edx - 8; j s> 8; j -= 8)
            st0 = __pmullw_mmxq_memq(_m_punpckhwd(st7, 0), 0x3000300030003)
            st1 = _m_paddb(_m_psllqi(st7, 8), _m_psrlqi(st3, 0x38))
            st2 = _m_psrlqi(st7, 8)
            st1 = _m_punpckhwd(st1, 0)
            st2 = _m_punpckhwd(st2, 0)
            st1 = __paddw_mmxq_memq(_m_paddw(st1, st0), 0x1000100010001)
            st2 = __paddw_mmxq_memq(_m_paddw(st2, st0), 0x2000200020002)
            st1 = _m_psrlwi(st1, 2)
            *edi_2 = _m_paddb(_m_psllqi(_m_psrlwi(st2, 2), 8), st1)
            st3 = st7
            st0 = __pmullw_mmxq_memq(_m_punpckhbw(st7, 0), 0x3000300030003)
            st1 = _m_psllqi(st7, 8)
            st2 = _m_psrlqi(st7, 8)
            st7 = *(esi_2 + 8)
            st2 = _m_paddb(st2, _m_psllqi(st7, 0x38))
            st1 = _m_punpckhbw(st1, 0)
            st2 = _m_punpckhbw(st2, 0)
            st1 = __paddw_mmxq_memq(_m_paddw(st1, st0), 0x1000100010001)
            st2 = __paddw_mmxq_memq(_m_paddw(st2, st0), 0x2000200020002)
            st1 = _m_psrlwi(st1, 2)
            *(edi_2 + 8) = _m_paddb(_m_psllqi(_m_psrlwi(st2, 2), 8), st1)
            edi_2 += 0x10
            esi_2 += 8
        
        st0 = __pmullw_mmxq_memq(_m_punpckhwd(st7, 0), 0x3000300030003)
        st1 = _m_paddb(_m_psllqi(st7, 8), _m_psrlqi(st3, 0x38))
        st2 = _m_psrlqi(st7, 8)
        st1 = _m_punpckhwd(st1, 0)
        st2 = _m_punpckhwd(st2, 0)
        st1 = __paddw_mmxq_memq(_m_paddw(st1, st0), 0x1000100010001)
        st2 = __paddw_mmxq_memq(_m_paddw(st2, st0), 0x2000200020002)
        st1 = _m_psrlwi(st1, 2)
        *edi_2 = _m_paddb(_m_psllqi(_m_psrlwi(st2, 2), 8), st1)
        
        if (j s> 4)
            st0 = __pmullw_mmxq_memq(_m_punpckhbw(st7, 0), 0x3000300030003)
            st1 = _m_psllqi(st7, 8)
            st2 = _m_paddb(_m_psrlqi(st7, 8), st7 & 0xff00000000000000)
            st1 = _m_punpckhbw(st1, 0)
            st2 = _m_punpckhbw(st2, 0)
            st1 = __paddw_mmxq_memq(_m_paddw(st1, st0), 0x1000100010001)
            st2 = __paddw_mmxq_memq(_m_paddw(st2, st0), 0x2000200020002)
            st1 = _m_psrlwi(st1, 2)
            *(edi_2 + 8) = _m_paddb(_m_psllqi(_m_psrlwi(st2, 2), 8), st1)
        
        i += 1
        result = &result[1]
    while (i s< *(arg3 + 0x13c))

return result

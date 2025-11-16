// 函数: sub_4e07d0
// 地址: 0x4e07d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg3
void* result = *(arg2 + 0x28)
int32_t ebx = 0
void* result_1 = result
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_c = ecx

if (*(arg4 + 0x13c) s> 0)
    int32_t* eax_1 = &arg5[1]
    int32_t edi
    int32_t var_40_1 = edi
    arg5 = eax_1
    
    while (true)
        uint8_t (* edx_1)[0x8] = eax_1[-1]
        void* eax_2 = *eax_1
        int64_t* eax_3 = *(ecx + (ebx << 2))
        int64_t* ecx_1 = *(ecx + (ebx << 2) + 4)
        void* eax_4 = eax_3 + (result_1 << 2)
        ebx += 2
        int64_t* edx_4 = edx_1
        int64_t* esi_1 = eax_1[-2]
        uint8_t (* eax_5)[0x8] = eax_4
        uint8_t st0[0x8] = *edx_4
        int64_t st2 = *esi_1
        uint8_t st4[0x8] = st0
        int64_t st5 = st2
        st0 = __punpcklbw_mmxq_memd(st0, 0)
        uint8_t st1[0x8] = _m_psllqi(st0, 0x10)
        st0 = __pmullw_mmxq_memq(st0, 0x900090009000c)
        st1 = __pmullw_mmxq_memq(st1, 0x3000300030003)
        st2 = __punpcklbw_mmxq_memd(st2, 0)
        int64_t st3 = _m_psllqi(st2, 0x10)
        st2 = __pmullw_mmxq_memq(st2, 0x3000300030004)
        st1 = _m_paddw(st1, st0)
        *eax_5 = st1
        int64_t st6 =
            _m_psrlwi(__paddw_mmxq_memq(_m_paddw(st1, _m_paddw(st3, st2)), 0x8000800080008), 4)
        st0 = __punpcklbw_mmxq_memd(st4, 0)
        st1 = __punpcklbw_mmxq_memd(_m_psrlqi(st4, 8), 0)
        st0 = __pmullw_mmxq_memq(st0, 0x9000900090009)
        st1 = __pmullw_mmxq_memq(st1, 0x3000300030003)
        st2 = __punpcklbw_mmxq_memd(st5, 0)
        st3 = __punpcklbw_mmxq_memd(_m_psrlqi(st5, 8), 0)
        st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
        st0 = _m_paddw(st0, st1)
        eax_5[1] = st0
        *eax_3 = _m_paddw(st6, 
            _m_psllqi(
                _m_psrlwi(_m_paddw(__paddw_mmxq_memq(_m_paddw(st0, st3), 0x7000700070007), st2), 
                    4), 
                8))
        void* edi_2 = &eax_3[1]
        uint8_t* eax_6 = &eax_5[2]
        
        for (void* i = result_1 - 8; i s> 0; i -= 8)
            var_34.q = st4
            var_2c.q = st5
            st0 = __punpckhbw_mmxq_memq(st4, 0)
            st1 = __punpckhbw_mmxq_memq(_m_psllqi(st4, 8), 0)
            st0 = __pmullw_mmxq_memq(st0, 0x9000900090009)
            st1 = __pmullw_mmxq_memq(st1, 0x3000300030003)
            st2 = __punpckhbw_mmxq_memq(st5, 0)
            st3 = __punpckhbw_mmxq_memq(_m_psllqi(st5, 8), 0)
            st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
            st1 = _m_paddw(st1, st0)
            *eax_6 = st1
            st6 =
                _m_psrlwi(_m_paddw(__paddw_mmxq_memq(st1, 0x8000800080008), _m_paddw(st3, st2)), 4)
            st1 = _m_psrlqi(st4, 8)
            st4 = edx_4[1]
            st1 = __pmullw_mmxq_memq(__punpckhbw_mmxq_memq(_m_paddb(st1, _m_psllqi(st4, 0x38)), 0), 
                0x3000300030003)
            st3 = _m_psrlqi(st5, 8)
            st5 = esi_1[1]
            st3 = __punpckhbw_mmxq_memq(_m_paddb(st3, _m_psllqi(st5, 0x38)), 0)
            st0 = _m_paddw(st0, st1)
            *(eax_6 + 8) = st0
            *edi_2 = _m_paddw(st6, 
                _m_psllqi(
                    _m_psrlwi(
                        _m_paddw(_m_paddw(st0, __paddw_mmxq_memq(st3, 0x7000700070007)), st2), 4), 
                    8))
            st0 = __punpcklbw_mmxq_memd(st4, 0)
            st1 = _m_paddw(_m_psllqi(st0, 0x10), _m_psrlqi(var_34.q, 0x38))
            st0 = __pmullw_mmxq_memq(st0, 0x9000900090009)
            st1 = __pmullw_mmxq_memq(st1, 0x3000300030003)
            st2 = __punpcklbw_mmxq_memd(st5, 0)
            st3 = _m_paddw(_m_psllqi(st2, 0x10), _m_psrlqi(var_2c.q, 0x38))
            st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
            st1 = _m_paddw(st1, st0)
            *(eax_6 + 0x10) = st1
            st6 =
                _m_psrlwi(_m_paddw(__paddw_mmxq_memq(st1, 0x8000800080008), _m_paddw(st3, st2)), 4)
            st1 = __pmullw_mmxq_memq(__punpcklbw_mmxq_memd(_m_psrlqi(st4, 8), 0), 0x3000300030003)
            st3 = __punpcklbw_mmxq_memd(_m_psrlqi(st5, 8), 0)
            st0 = _m_paddw(st0, st1)
            *(eax_6 + 0x18) = st0
            *(edi_2 + 8) = _m_paddw(st6, 
                _m_psllqi(
                    _m_psrlwi(
                        _m_paddw(__paddw_mmxq_memq(_m_paddw(st0, st3), 0x7000700070007), st2), 4), 
                    8))
            edi_2 += 0x10
            edx_4 = &edx_4[1]
            esi_1 = &esi_1[1]
            eax_6 = &eax_6[0x20]
        
        st0 = __punpckhbw_mmxq_memq(st4, 0)
        st1 = __punpckhbw_mmxq_memq(_m_psllqi(st4, 8), 0)
        st0 = __pmullw_mmxq_memq(st0, 0x9000900090009)
        st1 = __pmullw_mmxq_memq(st1, 0x3000300030003)
        st3 = __punpckhbw_mmxq_memq(_m_psllqi(st5, 8), 0)
        st1 = _m_paddw(st1, st0)
        *eax_6 = st1
        st6 = _m_psrlwi(_m_paddw(__paddw_mmxq_memq(st1, 0x8000800080008), _m_paddw(st3, st2)), 4)
        st1 = __pmullw_mmxq_memq(
            __punpckhbw_mmxq_memq(_m_paddb(_m_psrlqi(st4, 8), st4 & 0xff00000000000000), 0), 
            0x3000300030003)
        st3 = __punpckhbw_mmxq_memq(_m_paddb(_m_psrlqi(st5, 8), st5 & 0xff00000000000000), 0)
        st0 = _m_paddw(st0, st1)
        *(eax_6 + 8) = st0
        *edi_2 = _m_paddw(st6, 
            _m_psllqi(
                _m_psrlwi(_m_paddw(_m_paddw(st0, __paddw_mmxq_memq(st3, 0x7000700070007)), st2), 
                    4), 
                8))
        void* esi_2 = eax_2
        uint8_t (* edx_5)[0x8] = edx_1
        st2 = *esi_2
        st5 = st2
        st2 = __punpcklbw_mmxq_memd(st2, 0)
        st3 = _m_psllqi(st2, 0x10)
        st2 = __pmullw_mmxq_memq(st2, 0x3000300030004)
        st6 = _m_psrlwi(__paddw_mmxq_memq(_m_paddw(*eax_4, _m_paddw(st3, st2)), 0x8000800080008), 4)
        st2 = __punpcklbw_mmxq_memd(st5, 0)
        st3 = __punpcklbw_mmxq_memd(_m_psrlqi(st5, 8), 0)
        st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
        *ecx_1 = _m_paddw(st6, 
            _m_psllqi(
                _m_psrlwi(
                    _m_paddw(__paddw_mmxq_memq(_m_paddw(*(eax_4 + 8), st3), 0x7000700070007), st2), 
                    4), 
                8))
        void* edi_5 = &ecx_1[1]
        result = eax_4 + 0x10
        
        for (void* i_1 = result_1 - 8; i_1 s> 0; i_1 -= 8)
            st1 = st5
            st2 = __punpckhbw_mmxq_memq(st5, 0)
            st3 = __punpckhbw_mmxq_memq(_m_psllqi(st5, 8), 0)
            st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
            st6 = _m_psrlwi(
                _m_paddw(__paddw_mmxq_memq(*result, 0x8000800080008), _m_paddw(st3, st2)), 4)
            st2 = __punpckhbw_mmxq_memq(st5, 0)
            st3 = _m_psrlqi(st5, 8)
            st5 = *(esi_2 + 8)
            st3 = __punpckhbw_mmxq_memq(_m_paddb(st3, _m_psllqi(st5, 0x38)), 0)
            st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
            *edi_5 = _m_paddw(st6, 
                _m_psllqi(
                    _m_psrlwi(
                        _m_paddw(_m_paddw(*(result + 8), __paddw_mmxq_memq(st3, 0x7000700070007)), 
                            st2), 
                        4), 
                    8))
            st2 = __punpcklbw_mmxq_memd(st5, 0)
            st3 = _m_paddw(_m_psllqi(st2, 0x10), _m_psrlqi(st1, 0x38))
            st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
            st6 = _m_psrlwi(
                _m_paddw(__paddw_mmxq_memq(*(result + 0x10), 0x8000800080008), _m_paddw(st3, st2)), 
                4)
            st2 = __punpcklbw_mmxq_memd(st5, 0)
            st3 = __punpcklbw_mmxq_memd(_m_psrlqi(st5, 8), 0)
            st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
            *(edi_5 + 8) = _m_paddw(st6, 
                _m_psllqi(
                    _m_psrlwi(
                        _m_paddw(
                            __paddw_mmxq_memq(_m_paddw(*(result + 0x18), st3), 0x7000700070007), 
                            st2), 
                        4), 
                    8))
            edi_5 += 0x10
            edx_5 = &edx_5[1]
            esi_2 += 8
            result += 0x20
            *edx_5
        
        st2 = __punpckhbw_mmxq_memq(st5, 0)
        st3 = __punpckhbw_mmxq_memq(_m_psllqi(st5, 8), 0)
        st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
        st6 =
            _m_psrlwi(_m_paddw(__paddw_mmxq_memq(*result, 0x8000800080008), _m_paddw(st3, st2)), 4)
        st2 = __punpckhbw_mmxq_memq(st5, 0)
        st3 = __punpckhbw_mmxq_memq(_m_paddb(_m_psrlqi(st5, 8), st5 & 0xff00000000000000), 0)
        st2 = __pmullw_mmxq_memq(st2, 0x3000300030003)
        *edi_5 = _m_paddw(st6, 
            _m_psllqi(
                _m_psrlwi(
                    _m_paddw(_m_paddw(*(result + 8), __paddw_mmxq_memq(st3, 0x7000700070007)), 
                        st2), 
                    4), 
                8))
        arg5 = &arg5[1]
        
        if (ebx s>= *(arg4 + 0x13c))
            break
        
        eax_1 = arg5
        ecx = var_c

return result

// 函数: sub_419cea
// 地址: 0x419cea
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg3 & 3) == 0)
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t edi
    int32_t var_28_1 = edi
    int32_t var_1c_1 = 0x20002
    int32_t var_18_1 = 0x20002
    arg3.d <<= 2
    void* i = arg2
    int32_t* edx_1 = arg1
    
    while (i s< arg4 * arg5 + arg2)
        void* i_1 = i
        void* esi_2 = i + arg5
        int32_t ebx_2 = i_1 + arg3.d
        int32_t* eax_6 = edx_1
        
        while (i_1 s< ebx_2)
            uint8_t st0[0x8] = *i_1
            uint8_t st2[0x8] = *esi_2
            int16_t st4[0x4] = *(i_1 + 8)
            uint8_t st6[0x8] = *(esi_2 + 8)
            int64_t st1 = st0
            int64_t st3 = st2
            int64_t st5 = st4
            int64_t st7 = st6
            st0 = __punpcklbw_mmxq_memd(st0, 0)
            st1 = __punpckhbw_mmxq_memq(st1, var_14_1.q)
            st2 = __punpcklbw_mmxq_memd(st2, 0)
            st3 = __punpckhbw_mmxq_memq(st3, var_14_1.q)
            st4 = __punpcklbw_mmxq_memd(st4, 0)
            st5 = __punpckhbw_mmxq_memq(st5, var_14_1.q)
            st6 = __punpcklbw_mmxq_memd(st6, 0)
            st7 = __punpckhbw_mmxq_memq(st7, var_14_1.q)
            int32_t* ecx_1 = eax_6
            st0 = _m_paddw(st0, st1)
            i_1 += 0x10
            st4 = _m_paddw(st4, st5)
            esi_2 += 0x10
            st0 = _m_paddw(st0, st2)
            st4 = _m_paddw(st4, st6)
            eax_6 = &eax_6[2]
            st0 = _m_paddw(st0, st3)
            st4 = _m_paddw(st4, st7)
            st0 = __paddw_mmxq_memq(st0, var_1c_1.q)
            st4 = __paddw_mmxq_memq(st4, var_1c_1.q)
            *ecx_1 = _m_packuswb(_m_psrawi(st0, 2), _m_psrawi(st4, 2))
        
        i += arg5 * 2
        edx_1 += arg6
else
    sub_419ab2(arg1, arg2, arg3.d, arg4, arg5, arg6)

return 0

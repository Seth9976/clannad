// 函数: sub_6ee360
// 地址: 0x6ee360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 << 5
int32_t esi = *(eax_1 + arg1 + 0x78)
int32_t ebx = *(eax_1 + arg1 + 0x70)
int32_t eax_3 = *(eax_1 + arg1 + 0x7c) + esi
int32_t var_10 = ebx
void* edi_2 = ebx * arg5 + esi
void* var_8 = edi_2
int32_t eax_6 = ebx * arg6 + esi
int32_t esi_1 = *(arg1 + 0xd0)
int32_t eax_7 = *(arg1 + (arg4 << 2) + 0x264)
int32_t eax_8 = *(arg1 + 0xd4)
int32_t result = *(arg1 + (arg3 << 2) + 0x24c)
int32_t result_1 = result

if (edi_2 s< eax_6)
    void* ecx_1 = edi_2 + ebx
    char* edx_1 = esi_1 + (edi_2 << 2)
    arg4 = ecx_1
    char* esi_2 = esi_1 + (ecx_1 << 2)
    char* var_14_1 = edx_1
    arg3 = esi_2
    
    do
        void* eax_10 = edi_2
        arg1 = eax_10
        
        if (edi_2 s< ecx_1)
            char* ecx_2 = arg3
            char* esi_3 = edx_1
            arg5 = esi_3
            void* edx_5 = arg4
            arg6 = ecx_2
            
            do
                if ((*esi_3 & 1) != 0)
                    void* ebx_2 = *(eax_8 - esi_1 + esi_3) + result_1
                    uint64_t st0
                    uint64_t st1
                    uint64_t st2
                    uint64_t st3
                    uint64_t st4
                    uint64_t st5
                    uint64_t st6
                    uint64_t st7
                    
                    if (eax_10 s> edi_2)
                        int32_t edi_3 = eax_7 * 3
                        st2 = zx.q(*(ebx_2 - 2 + (eax_7 << 1)))
                        void* esi_4 = &(ebx_2 - 2)[eax_7]
                        st3 = zx.q(*(ebx_2 - 2 + edi_3))
                        st4 = zx.q(*esi_4)
                        st5 = zx.q(*(esi_4 + eax_7))
                        st6 = zx.q(*(esi_4 + (eax_7 << 1)))
                        st7 = zx.q(*(esi_4 + edi_3))
                        st0 = _m_punpckhwd(zx.q(*(ebx_2 - 2)), *(ebx_2 - 2 + eax_7))
                        st2 = _m_punpckhwd(st2, st3.d)
                        st3 = st0
                        st0 = _m_punpcklwd(st0, st2.d)
                        int64_t temp0_4 = __punpckhwd_mmxq_mmxd(st3, st2.d)
                        st1 = st0
                        st4 = _m_punpckhwd(st4, st5.d)
                        st6 = _m_punpckhwd(st6, st7.d)
                        st5 = st4
                        st4 = _m_punpcklwd(st4, st6.d)
                        int64_t temp0_8 = __punpckhwd_mmxq_mmxd(st5, st6.d)
                        st0 = _m_punpckldq(st0, st4.d)
                        int64_t temp0_10 = _m_punpckhdq(st1, st4.d)
                        st2 = _m_punpckldq(temp0_4, temp0_8.d)
                        int64_t temp0_12 = _m_punpckhdq(temp0_4, temp0_8.d)
                        st6 = st0
                        st0 = _m_punpckhwd(st0, 0)
                        int64_t temp0_14 = _m_punpckhbw(st6, 0)
                        st3 = _m_punpckhwd(temp0_12, 0)
                        int64_t temp0_16 = _m_punpckhbw(temp0_12, 0)
                        int64_t temp0_17 = _m_psubw(st0, st3)
                        int64_t temp0_18 = _m_psubw(temp0_14, temp0_16)
                        st1 = _m_punpckhwd(temp0_10, 0)
                        int64_t temp0_20 = _m_punpckhbw(temp0_10, 0)
                        st4 = _m_punpckhwd(st2, 0)
                        int64_t temp0_22 = _m_punpckhbw(st2, 0)
                        st7 = _m_pcmpeqw(0, 0)
                        int64_t temp0_24 = _m_psubw(st4, st1)
                        st7 = _m_psrlwi(st7, 0xe)
                        int64_t temp0_26 = _m_psubw(temp0_22, temp0_20)
                        st4 = _m_pmullw(temp0_24, st7)
                        st5 = _m_pmullw(temp0_26, st7)
                        st7 = _m_psrlwi(st7, 1)
                        int64_t temp0_30 = _m_paddw(st4, temp0_17)
                        st7 = _m_psllwi(st7, 2)
                        st0 = *arg2
                        int64_t temp0_32 = _m_paddw(st5, temp0_18)
                        int64_t temp0_33 = _m_psubw(temp0_30, st7)
                        int64_t temp0_34 = _m_psubw(temp0_32, st7)
                        st4 = _m_psrawi(temp0_33, 3)
                        st5 = _m_psrawi(temp0_34, 3)
                        st7 = _m_pcmpeqb(st7, st7)
                        st4 = _m_packsswb(st4, st5) ^ st7
                        st1 = _m_packuswb(st1, temp0_20)
                        st6 = _m_pcmpgtb(0, st4)
                        int64_t temp0_42 = _m_psubb(_m_psubb(st7, st0), st0)
                        int64_t temp0_43 = _m_psubb(st4 ^ st6, st6)
                        int64_t temp0_44 = _m_paddusb(temp0_42, temp0_43)
                        int64_t temp0_46 = _m_psubusb(_m_paddusb(temp0_43, temp0_44), temp0_44)
                        st4 = temp0_46 & st6
                        st6 &= not.q(temp0_46)
                        int64_t temp0_47 = _m_paddusb(st1, st4)
                        int64_t temp0_48 = _m_psubusb(st2, st4)
                        int64_t temp0_49 = _m_psubusb(temp0_47, st6)
                        int64_t temp0_50 = _m_paddusb(temp0_48, st6)
                        st1 = _m_punpckhwd(temp0_49, temp0_50.d)
                        int64_t temp0_52 = _m_punpckhbw(temp0_49, temp0_50.d)
                        int32_t esi_5 = st1.d
                        *(ebx_2 - 1) = esi_5.w
                        uint64_t temp0_53 = _m_psrlqi(st1, 0x20)
                        *(ebx_2 - 2 + eax_7 + 1) = (esi_5 u>> 0x10).w
                        int32_t esi_7 = temp0_53.d
                        *(ebx_2 - 2 + (eax_7 << 1) + 1) = esi_7.w
                        *(ebx_2 - 2 + edi_3 + 1) = (esi_7 u>> 0x10).w
                        void* eax_14 = &(ebx_2 - 2)[eax_7]
                        int32_t esi_9 = temp0_52.d
                        *(eax_14 + 1) = esi_9.w
                        uint64_t temp0_54 = _m_psrlqi(temp0_52, 0x20)
                        *(eax_14 + eax_7 + 1) = (esi_9 u>> 0x10).w
                        int32_t esi_11 = temp0_54.d
                        *(eax_14 + (eax_7 << 1) + 1) = esi_11.w
                        *(eax_14 + edi_3 + 1) = (esi_11 u>> 0x10).w
                        esi_3 = arg5
                        edi_2 = var_8
                    
                    if (edi_2 s> esi)
                        uint64_t* eax_18 = ebx_2 - eax_7 * 2
                        st0 = *eax_18
                        st3 = *(eax_18 + eax_7 * 3)
                        st1 = *(eax_18 + eax_7)
                        st2 = *(eax_18 + (eax_7 << 1))
                        st6 = st0
                        st0 = _m_punpckhwd(st0, 0)
                        int64_t temp0_56 = _m_punpckhbw(st6, 0)
                        st5 = st3
                        st3 = _m_punpckhwd(st3, 0)
                        int64_t temp0_58 = _m_punpckhbw(st5, 0)
                        int64_t temp0_59 = _m_psubw(st0, st3)
                        int64_t temp0_60 = _m_psubw(temp0_56, temp0_58)
                        st3 = st1
                        st1 = _m_punpckhwd(st1, 0)
                        int64_t temp0_62 = _m_punpckhbw(st3, 0)
                        st4 = _m_punpckhwd(st2, 0)
                        int64_t temp0_64 = _m_punpckhbw(st2, 0)
                        st7 = _m_pcmpeqw(0, 0)
                        int64_t temp0_66 = _m_psubw(st4, st1)
                        st7 = _m_psrlwi(st7, 0xe)
                        int64_t temp0_68 = _m_psubw(temp0_64, temp0_62)
                        st4 = _m_pmullw(temp0_66, st7)
                        st5 = _m_pmullw(temp0_68, st7)
                        st7 = _m_psrlwi(st7, 1)
                        int64_t temp0_72 = _m_paddw(st4, temp0_59)
                        st7 = _m_psllwi(st7, 2)
                        st0 = *arg2
                        int64_t temp0_74 = _m_paddw(st5, temp0_60)
                        int64_t temp0_75 = _m_psubw(temp0_72, st7)
                        int64_t temp0_76 = _m_psubw(temp0_74, st7)
                        st4 = _m_psrawi(temp0_75, 3)
                        st5 = _m_psrawi(temp0_76, 3)
                        st7 = _m_pcmpeqb(st7, st7)
                        st4 = _m_packsswb(st4, st5) ^ st7
                        st1 = _m_packuswb(st1, temp0_62)
                        st6 = _m_pcmpgtb(0, st4)
                        int64_t temp0_84 = _m_psubb(_m_psubb(st7, st0), st0)
                        int64_t temp0_85 = _m_psubb(st4 ^ st6, st6)
                        int64_t temp0_86 = _m_paddusb(temp0_84, temp0_85)
                        int64_t temp0_88 = _m_psubusb(_m_paddusb(temp0_85, temp0_86), temp0_86)
                        st4 = temp0_88 & st6
                        st6 &= not.q(temp0_88)
                        int64_t temp0_89 = _m_paddusb(st1, st4)
                        int64_t temp0_90 = _m_psubusb(st2, st4)
                        int64_t temp0_91 = _m_psubusb(temp0_89, st6)
                        int64_t temp0_92 = _m_paddusb(temp0_90, st6)
                        *(eax_18 + eax_7) = temp0_91
                        *(eax_18 + (eax_7 << 1)) = temp0_92
                    
                    void* eax_20 = arg1 + var_10
                    
                    if (eax_20 + 1 - ebx s< arg4 && (esi_3[4] & 1) == 0)
                        int32_t edi_5 = eax_7 * 3
                        st2 = zx.q(*(ebx_2 + 6 + (eax_7 << 1)))
                        void* esi_13 = &(ebx_2 + 6)[eax_7]
                        st3 = zx.q(*(ebx_2 + 6 + edi_5))
                        st4 = zx.q(*esi_13)
                        st5 = zx.q(*(esi_13 + eax_7))
                        st6 = zx.q(*(esi_13 + (eax_7 << 1)))
                        st7 = zx.q(*(esi_13 + edi_5))
                        st0 = _m_punpckhwd(zx.q(*(ebx_2 + 6)), *(ebx_2 + 6 + eax_7))
                        st2 = _m_punpckhwd(st2, st3.d)
                        st3 = st0
                        st0 = _m_punpcklwd(st0, st2.d)
                        int64_t temp0_96 = __punpckhwd_mmxq_mmxd(st3, st2.d)
                        st1 = st0
                        st4 = _m_punpckhwd(st4, st5.d)
                        st6 = _m_punpckhwd(st6, st7.d)
                        st5 = st4
                        st4 = _m_punpcklwd(st4, st6.d)
                        int64_t temp0_100 = __punpckhwd_mmxq_mmxd(st5, st6.d)
                        st0 = _m_punpckldq(st0, st4.d)
                        int64_t temp0_102 = _m_punpckhdq(st1, st4.d)
                        st2 = _m_punpckldq(temp0_96, temp0_100.d)
                        int64_t temp0_104 = _m_punpckhdq(temp0_96, temp0_100.d)
                        st6 = st0
                        st0 = _m_punpckhwd(st0, 0)
                        int64_t temp0_106 = _m_punpckhbw(st6, 0)
                        st3 = _m_punpckhwd(temp0_104, 0)
                        int64_t temp0_108 = _m_punpckhbw(temp0_104, 0)
                        int64_t temp0_109 = _m_psubw(st0, st3)
                        int64_t temp0_110 = _m_psubw(temp0_106, temp0_108)
                        st1 = _m_punpckhwd(temp0_102, 0)
                        int64_t temp0_112 = _m_punpckhbw(temp0_102, 0)
                        st4 = _m_punpckhwd(st2, 0)
                        int64_t temp0_114 = _m_punpckhbw(st2, 0)
                        st7 = _m_pcmpeqw(0, 0)
                        int64_t temp0_116 = _m_psubw(st4, st1)
                        st7 = _m_psrlwi(st7, 0xe)
                        int64_t temp0_118 = _m_psubw(temp0_114, temp0_112)
                        st4 = _m_pmullw(temp0_116, st7)
                        st5 = _m_pmullw(temp0_118, st7)
                        st7 = _m_psrlwi(st7, 1)
                        int64_t temp0_122 = _m_paddw(st4, temp0_109)
                        st7 = _m_psllwi(st7, 2)
                        st0 = *arg2
                        int64_t temp0_124 = _m_paddw(st5, temp0_110)
                        int64_t temp0_125 = _m_psubw(temp0_122, st7)
                        int64_t temp0_126 = _m_psubw(temp0_124, st7)
                        st4 = _m_psrawi(temp0_125, 3)
                        st5 = _m_psrawi(temp0_126, 3)
                        st7 = _m_pcmpeqb(st7, st7)
                        st4 = _m_packsswb(st4, st5) ^ st7
                        st1 = _m_packuswb(st1, temp0_112)
                        st6 = _m_pcmpgtb(0, st4)
                        int64_t temp0_134 = _m_psubb(_m_psubb(st7, st0), st0)
                        int64_t temp0_135 = _m_psubb(st4 ^ st6, st6)
                        int64_t temp0_136 = _m_paddusb(temp0_134, temp0_135)
                        int64_t temp0_138 = _m_psubusb(_m_paddusb(temp0_135, temp0_136), temp0_136)
                        st4 = temp0_138 & st6
                        st6 &= not.q(temp0_138)
                        int64_t temp0_139 = _m_paddusb(st1, st4)
                        int64_t temp0_140 = _m_psubusb(st2, st4)
                        int64_t temp0_141 = _m_psubusb(temp0_139, st6)
                        int64_t temp0_142 = _m_paddusb(temp0_140, st6)
                        st1 = _m_punpckhwd(temp0_141, temp0_142.d)
                        int64_t temp0_144 = _m_punpckhbw(temp0_141, temp0_142.d)
                        int32_t esi_14 = st1.d
                        *(ebx_2 + 7) = esi_14.w
                        uint64_t temp0_145 = _m_psrlqi(st1, 0x20)
                        *(ebx_2 + 6 + eax_7 + 1) = (esi_14 u>> 0x10).w
                        int32_t esi_16 = temp0_145.d
                        *(ebx_2 + 6 + (eax_7 << 1) + 1) = esi_16.w
                        *(ebx_2 + 6 + edi_5 + 1) = (esi_16 u>> 0x10).w
                        void* eax_25 = &(ebx_2 + 6)[eax_7]
                        int32_t esi_18 = temp0_144.d
                        *(eax_25 + 1) = esi_18.w
                        uint64_t temp0_146 = _m_psrlqi(temp0_144, 0x20)
                        *(eax_25 + eax_7 + 1) = (esi_18 u>> 0x10).w
                        int32_t esi_20 = temp0_146.d
                        *(eax_25 + (eax_7 << 1) + 1) = esi_20.w
                        *(eax_25 + edi_5 + 1) = (esi_20 u>> 0x10).w
                    
                    if (eax_20 s< eax_3 && (*arg6 & 1) == 0)
                        uint64_t* eax_33 = eax_7 * 6 + ebx_2
                        st0 = *eax_33
                        st3 = *(eax_33 + eax_7 * 3)
                        st1 = *(eax_33 + eax_7)
                        st2 = *(eax_33 + (eax_7 << 1))
                        st6 = st0
                        st0 = _m_punpckhwd(st0, 0)
                        int64_t temp0_148 = _m_punpckhbw(st6, 0)
                        st5 = st3
                        st3 = _m_punpckhwd(st3, 0)
                        int64_t temp0_150 = _m_punpckhbw(st5, 0)
                        int64_t temp0_151 = _m_psubw(st0, st3)
                        int64_t temp0_152 = _m_psubw(temp0_148, temp0_150)
                        st3 = st1
                        st1 = _m_punpckhwd(st1, 0)
                        int64_t temp0_154 = _m_punpckhbw(st3, 0)
                        st4 = _m_punpckhwd(st2, 0)
                        int64_t temp0_156 = _m_punpckhbw(st2, 0)
                        st7 = _m_pcmpeqw(0, 0)
                        int64_t temp0_158 = _m_psubw(st4, st1)
                        st7 = _m_psrlwi(st7, 0xe)
                        int64_t temp0_160 = _m_psubw(temp0_156, temp0_154)
                        st4 = _m_pmullw(temp0_158, st7)
                        st5 = _m_pmullw(temp0_160, st7)
                        st7 = _m_psrlwi(st7, 1)
                        int64_t temp0_164 = _m_paddw(st4, temp0_151)
                        st7 = _m_psllwi(st7, 2)
                        st0 = *arg2
                        int64_t temp0_166 = _m_paddw(st5, temp0_152)
                        int64_t temp0_167 = _m_psubw(temp0_164, st7)
                        int64_t temp0_168 = _m_psubw(temp0_166, st7)
                        st4 = _m_psrawi(temp0_167, 3)
                        st5 = _m_psrawi(temp0_168, 3)
                        st7 = _m_pcmpeqb(st7, st7)
                        st4 = _m_packsswb(st4, st5) ^ st7
                        st1 = _m_packuswb(st1, temp0_154)
                        st6 = _m_pcmpgtb(0, st4)
                        int64_t temp0_176 = _m_psubb(_m_psubb(st7, st0), st0)
                        int64_t temp0_177 = _m_psubb(st4 ^ st6, st6)
                        int64_t temp0_178 = _m_paddusb(temp0_176, temp0_177)
                        int64_t temp0_180 = _m_psubusb(_m_paddusb(temp0_177, temp0_178), temp0_178)
                        st4 = temp0_180 & st6
                        st6 &= not.q(temp0_180)
                        int64_t temp0_181 = _m_paddusb(st1, st4)
                        int64_t temp0_182 = _m_psubusb(st2, st4)
                        int64_t temp0_183 = _m_psubusb(temp0_181, st6)
                        int64_t temp0_184 = _m_paddusb(temp0_182, st6)
                        *(eax_33 + eax_7) = temp0_183
                        *(eax_33 + (eax_7 << 1)) = temp0_184
                    
                    esi_3 = arg5
                    eax_10 = arg1
                    edi_2 = var_8
                    ecx_2 = arg6
                    edx_5 = arg4
                
                eax_10 += 1
                esi_3 = &esi_3[4]
                ecx_2 = &ecx_2[4]
                arg1 = eax_10
                arg5 = esi_3
                arg6 = ecx_2
            while (eax_10 s< edx_5)
            
            ecx_1 = arg4
            ebx = var_10
            edx_1 = var_14_1
            esi_2 = arg3
        
        result = ebx << 2
        edi_2 += ebx
        edx_1 = &edx_1[result]
        var_8 = edi_2
        esi_2 = &esi_2[result]
        var_14_1 = edx_1
        ecx_1 += ebx
        arg3 = esi_2
        arg4 = ecx_1
    while (edi_2 s< eax_6)

return result

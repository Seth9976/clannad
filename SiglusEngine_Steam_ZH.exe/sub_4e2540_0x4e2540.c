// 函数: sub_4e2540
// 地址: 0x4e2540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(arg1 + 0x148)
int32_t edi
int32_t var_5c = edi
int32_t var_50 = 0x800080
int32_t var_4c = 0x800080
int32_t var_3c = 0
void* eax = *(arg1 + 0x1c8)
int32_t ebx_1 = *(eax + 0x10)
int32_t ebx_2 = *(eax + 0x14)
int32_t ebx_3 = *(eax + 0x18)
int32_t eax_1 = *(eax + 0x1c)
int32_t eax_2 = *(arg1 + 0x70)
int32_t i_2 = eax_2 s>> 3
int32_t i_1 = i_2
int32_t eax_3 = eax_2 - (i_2 << 3)
int32_t* eax_4 = *arg4 + (arg2 << 3)
int32_t* ecx_2 = *eax_4
int32_t* eax_5 = eax_4[1]
int32_t* eax_6 = *(arg4[1] + (arg2 << 2))
int32_t* edx = *(arg4[2] + (arg2 << 2))
uint64_t* ecx_5 = arg3[1]
void* eax_7 = *arg3
int32_t var_48 = 0xffff0000
int32_t var_44 = 0xffff
int32_t* esi_1 = ecx_2
int32_t* eax_8 = eax_5
int32_t* ebx_5 = edx
int32_t* ecx_6 = eax_6
void* edi_2 = eax_7
uint64_t* edx_1 = ecx_5
int32_t i

do
    uint64_t st0 = zx.q(*ebx_5)
    st0 = _m_punpckhwd(st0, st0.d)
    int64_t st7 = var_50.q
    st0 = _m_punpcklwd(st0, st0.d)
    uint64_t st4 = st0
    int64_t temp0_4 = _m_psubsw(_m_punpckhwd(st0, 0), st7)
    uint16_t st1[0x4] = zx.q(*ecx_6)
    st0 = _m_psllwi(temp0_4, 2)
    st1 = _m_punpckhwd(st1, st1[0].d)
    int64_t temp0_7 = __paddsw_mmxq_memq(st0, 0x1000000000001)
    uint16_t temp0_8[0x4] = _m_punpcklwd(st1, st1[0].d)
    st0 = __pmulhw_mmxq_memq(temp0_7, 0x59ba0000d24b59ba)
    st1 = _m_punpckhwd(temp0_8, 0)
    int64_t temp0_11 = _m_punpckhbw(st4, 0)
    st1 = _m_psubsw(st1, st7)
    int64_t temp0_13 = _m_punpckhbw(temp0_8, 0)
    st1 = __paddsw_mmxq_memq(_m_psllwi(st1, 2), 0x1fffa0000)
    int64_t temp0_16 = _m_psubsw(temp0_11, st7)
    int64_t temp0_17 = _m_psubsw(temp0_13, st7)
    st1 = __pmulhw_mmxq_memq(st1, 0x7168e9fa0000)
    st4 = _m_psllwi(temp0_16, 2)
    int64_t st5 = _m_psllwi(temp0_17, 2)
    int64_t temp0_21 = __paddsw_mmxq_memq(st4, 0x10000)
    st7 = zx.q(*esi_1)
    st4 = __pmulhw_mmxq_memq(temp0_21, 0xd24b59ba0000)
    int16_t st6[0x4] = st7
    st7 = _m_punpckhwd(st7, st7.d)
    int64_t temp0_24 = __paddsw_mmxq_memq(st5, 0x1fffa00000001)
    int64_t temp0_25 = _m_paddsw(st0, st1)
    st1 = st7
    st5 = __pmulhw_mmxq_memq(temp0_24, 0x7168e9fa00007168)
    st7 = _m_punpcklwd(st7, st6[0].d)
    st1 = _m_psrlqi(st1, 0x10)
    uint64_t temp0_29 = _m_psrlqi(temp0_25 & var_48.q, 0x10)
    st7 = __punpcklbw_mmxq_memd(st7, 0)
    int64_t temp0_31 = _m_paddsw(st4, st5)
    int64_t temp0_32 = _m_paddsw(st7, temp0_25)
    uint64_t st2 = temp0_29 | _m_psllqi(temp0_31 & var_48.q, 0x10)
    st6 = __punpcklbw_mmxq_memd(st1, 0)
    uint64_t st3 = zx.q(*eax_8)
    st7 = _m_packuswb(temp0_32, _m_paddsw(st6, st2))
    st6 = st3
    st3 = _m_punpckhwd(st3, st3.d)
    *edi_2 = st7
    st5 = st3
    st3 = __punpcklbw_mmxq_memd(_m_punpcklwd(st3, st6[0].d), 0)
    uint64_t temp0_40 = _m_psrlqi(st5, 0x10)
    int64_t temp0_41 = _m_paddsw(st3, temp0_25)
    st6 = temp0_40
    st0 = st1
    st6 = __punpcklbw_mmxq_memd(_m_punpckldq(st6, st6[0].d), 0)
    st1 = _m_psrlqi(st1, 0x18)
    st3 = _m_packuswb(temp0_41, _m_paddsw(st6, st2))
    uint64_t temp0_47 = _m_psrlqi(st0, 0x20)
    *edx_1 = st3
    uint16_t temp0_48[0x4] = _m_punpcklwd(st1, temp0_47.d)
    uint64_t temp0_49 = _m_psrlqi(temp0_40, 0x18)
    st0 = zx.q(*ebx_5)
    uint64_t temp0_50 = _m_psrlqi(temp0_40, 0x20)
    uint64_t temp0_51 = _m_psrlqi(st0, 0x10)
    st1 = __punpcklbw_mmxq_memd(temp0_48, 0)
    st5 = _m_punpcklwd(temp0_49, temp0_50.d)
    st1 = _m_paddsw(st1, temp0_31)
    st5 = __punpcklbw_mmxq_memd(st5, 0)
    st0 = _m_punpckhwd(temp0_51, temp0_51.d)
    int64_t temp0_57 = _m_paddsw(st5, temp0_31)
    st0 = _m_punpcklwd(st0, st0.d)
    st4 = st0
    st3 = zx.q(*ecx_6)
    st0 = _m_punpckhwd(st0, 0)
    uint64_t temp0_60 = _m_psrlqi(st3, 0x10)
    int64_t temp0_61 = __psubsw_mmxq_memq(st0, var_50.q)
    st3 = _m_punpckhwd(temp0_60, temp0_60.d)
    int64_t temp0_64 = __paddsw_mmxq_memq(_m_psllwi(temp0_61, 2), 0x1000000000001)
    st3 = _m_punpcklwd(st3, st3.d)
    st0 = __pmulhw_mmxq_memq(temp0_64, 0x59ba0000d24b59ba)
    int64_t temp0_68 = __psubsw_mmxq_memq(_m_punpckhwd(st3, 0), var_50.q)
    int64_t temp0_69 = _m_punpckhbw(st4, 0)
    int64_t temp0_71 = __paddsw_mmxq_memq(_m_psllwi(temp0_68, 2), 0x1fffa0000)
    int64_t temp0_72 = _m_punpckhbw(st3, 0)
    st3 = __pmulhw_mmxq_memq(temp0_71, 0x7168e9fa0000)
    int64_t temp0_74 = __psubsw_mmxq_memq(temp0_72, var_50.q)
    int64_t temp0_75 = _m_paddsw(st0, st3)
    st7 = _m_psllwi(temp0_74, 2)
    int64_t temp0_77 = __psubsw_mmxq_memq(temp0_69, var_50.q)
    st3 = zx.q(esi_1[1])
    st4 = _m_psllwi(temp0_77, 2)
    int64_t temp0_79 = __paddsw_mmxq_memq(st7, 0x1fffa00000001)
    st6 = st3
    st3 = _m_punpckhwd(st3, st3.d)
    uint64_t temp0_81 = _m_psrlqi(temp0_75 & var_48.q, 0x10)
    int64_t temp0_82 = __paddsw_mmxq_memq(st4, 0x10000)
    st3 = _m_punpcklwd(st3, st6[0].d)
    st4 = __pmulhw_mmxq_memq(temp0_82, 0xd24b59ba0000)
    st7 = __pmulhw_mmxq_memq(temp0_79, 0x7168e9fa00007168)
    st3 = __punpcklbw_mmxq_memd(st3, 0)
    int64_t temp0_87 = _m_paddsw(st4, st7)
    st1 = _m_packuswb(st1, _m_paddsw(st3, temp0_75))
    st3 = zx.q(eax_8[1])
    st6 = _m_psrlqi(st6, 8)
    uint64_t temp0_91 = _m_psllqi(temp0_87 & var_48.q, 0x10)
    *(edi_2 + 8) = st1
    st2 = temp0_81 | temp0_91
    st7 = st3
    st3 = _m_punpckhwd(_m_punpcklwd(_m_punpckhwd(st3, st3.d), st7.d), 0)
    uint64_t temp0_95 = _m_psrlqi(st7, 8)
    st5 = _m_packuswb(temp0_57, _m_paddsw(st3, temp0_75))
    st7 = _m_punpckhwd(temp0_95, temp0_95.d)
    edx_1[1] = st5
    st3 = st6
    st6 = _m_punpckhwd(st6, st6[0].d)
    st7 = _m_punpckhwd(st7, 0)
    st6 = _m_punpckhwd(st6, 0)
    int64_t temp0_102 = _m_paddsw(st7, st2)
    st6 = _m_paddsw(st6, st2)
    uint64_t temp0_104 = _m_psrlqi(st3, 8)
    esi_1 = &esi_1[2]
    uint16_t temp0_107[0x4] =
        _m_punpcklwd(temp0_104, _m_psrlqi(_m_punpckhwd(temp0_104, temp0_104.d), 0x10).d)
    eax_8 = &eax_8[2]
    uint64_t temp0_108 = _m_psrlqi(temp0_95, 8)
    st1 = __punpcklbw_mmxq_memd(temp0_107, 0)
    st0 = _m_punpckhwd(temp0_108, temp0_108.d)
    st1 = _m_paddsw(st1, temp0_87)
    edi_2 += 0x18
    st5 = _m_punpcklwd(temp0_108, _m_psrlqi(st0, 0x10).d)
    int16_t temp0_114[0x4] = _m_packuswb(st6, st1)
    edx_1 = &edx_1[3]
    ebx_5 = &ebx_5[1]
    int64_t temp0_116 = _m_paddsw(__punpcklbw_mmxq_memd(st5, 0), temp0_87)
    *(edi_2 - 8) = temp0_114
    ecx_6 = &ecx_6[1]
    edx_1[-1] = _m_packuswb(temp0_102, temp0_116)
    i = i_1
    i_1 -= 1
while (i != 1)
arg4 = &ecx_2[i_2 * 2]
void* var_8_1 = &eax_5[i_2 * 2]
void* esi_5 = eax_7 + i_2 * 0x18
void* edi_6 = &ecx_5[i_2 * 3]
int32_t result = eax_3 s>> 1
void* var_10_1 = &eax_6[i_2]
void* var_14_1 = &edx[i_2]

if (result u> 0)
    int32_t result_1 = result
    bool cond:1_1
    
    do
        char* ecx_9 = var_10_1
        uint32_t eax_13 = zx.d(*ecx_9)
        var_10_1 = &ecx_9[1]
        char* ecx_11 = var_14_1
        uint32_t edx_4 = zx.d(*ecx_11)
        var_14_1 = &ecx_11[1]
        int32_t ecx_14 = *(ebx_1 + (edx_4 << 2))
        int32_t eax_14 = *(ebx_2 + (eax_13 << 2))
        uint32_t edx_6 = zx.d(*arg4)
        int32_t ecx_18 = (*(eax_1 + (eax_13 << 2)) + *(ebx_3 + (edx_4 << 2))) s>> 0x10
        char* ebx_10
        ebx_10.b = (edx_6 + ecx_14)[ebx]
        *esi_5 = ebx_10.b
        int32_t ebx_11
        ebx_11.b = *(edx_6 + ecx_18 + ebx)
        *(esi_5 + 1) = ebx_11.b
        char* edx_7
        edx_7.b = (edx_6 + eax_14)[ebx]
        *(esi_5 + 2) = edx_7.b
        uint32_t ebx_13 = zx.d(*(arg4 + 1))
        arg4 += 2
        int32_t edx_10
        edx_10.b = (ebx_13 + ecx_14)[ebx]
        *(esi_5 + 3) = edx_10.b
        int32_t ebx_15
        ebx_15.b = *(ebx_13 + ecx_18 + ebx)
        *(esi_5 + 4) = ebx_15.b
        char* edx_12
        edx_12.b = (ebx_13 + eax_14)[ebx]
        *(esi_5 + 5) = edx_12.b
        uint32_t edx_13 = zx.d(*var_8_1)
        esi_5 += 6
        char* edx_14
        edx_14.b = (edx_13 + ecx_14)[ebx]
        *edi_6 = edx_14.b
        int32_t ebx_20
        ebx_20.b = *(edx_13 + ecx_18 + ebx)
        *(edi_6 + 1) = ebx_20.b
        char* edx_16
        edx_16.b = (edx_13 + eax_14)[ebx]
        *(edi_6 + 2) = edx_16.b
        uint32_t edx_17 = zx.d(*(var_8_1 + 1))
        var_8_1 += 2
        char* ebx_25
        ebx_25.b = (ecx_14 + edx_17)[ebx]
        *(edi_6 + 3) = ebx_25.b
        int32_t ecx_19
        ecx_19.b = *(ecx_18 + edx_17 + ebx)
        *(edi_6 + 4) = ecx_19.b
        char* edx_18
        edx_18.b = (edx_17 + eax_14)[ebx]
        *(edi_6 + 5) = edx_18.b
        edi_6 += 6
        result = result_1 - 1
        cond:1_1 = result_1 != 1
        result_1 = result
    while (cond:1_1)

if ((eax_3.b & 1) != 0)
    uint32_t ecx_21 = zx.d(*var_10_1)
    uint32_t edx_20 = zx.d(*var_14_1)
    void* eax_22 = *(ebx_1 + (edx_20 << 2))
    int32_t eax_25 = *(eax_1 + (ecx_21 << 2)) + *(ebx_3 + (edx_20 << 2))
    int32_t ecx_22 = *(ebx_2 + (ecx_21 << 2))
    uint32_t edx_23 = zx.d(*arg4)
    char* ebx_27
    ebx_27.b = (edx_23 + eax_22)[ebx]
    *esi_5 = ebx_27.b
    int32_t eax_26 = eax_25 s>> 0x10
    int32_t ebx_28
    ebx_28.b = *(edx_23 + eax_26 + ebx)
    *(esi_5 + 1) = ebx_28.b
    char* edx_24
    edx_24.b = (edx_23 + ecx_22)[ebx]
    *(esi_5 + 2) = edx_24.b
    uint32_t esi_7 = zx.d(*var_8_1)
    void* edx_27
    edx_27.b = *(eax_22 + esi_7 + ebx)
    *edi_6 = edx_27.b
    edx_27.b = *(eax_26 + esi_7 + ebx)
    result.b = (esi_7 + ecx_22)[ebx]
    *(edi_6 + 1) = edx_27.b
    *(edi_6 + 2) = result.b

return result

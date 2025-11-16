// 函数: sub_6eeb70
// 地址: 0x6eeb70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* result

for (int32_t i = 4; i s> 0; )
    i -= 1
    uint8_t (* eax_1)[0x8] = arg1
    int64_t* edx_1 = arg5
    int64_t* ecx_1 = arg2
    int64_t* edi_2 = arg3
    uint8_t st0[0x8] = *ecx_1
    uint8_t st2[0x8] = *edi_2
    uint8_t st4[0x8] = *(ecx_1 + arg4)
    uint8_t temp0_1[0x8] = _m_punpckhwd(st0, 0)
    int16_t st5[0x4] = *(edi_2 + arg4)
    int64_t temp0_2 = _m_punpckhbw(st0, 0)
    uint8_t temp0_3[0x8] = _m_punpckhwd(st2, 0)
    int64_t temp0_4 = _m_punpckhbw(st2, 0)
    st0 = _m_paddsw(temp0_1, temp0_3)
    int64_t temp0_6 = _m_paddsw(temp0_2, temp0_4)
    st0 = _m_psrawi(st0, 1)
    int64_t st3 = st5
    uint8_t temp0_8[0x8] = _m_punpckhwd(st4, 0)
    int64_t st1 = _m_psrawi(temp0_6, 1)
    st2 = _m_punpckhbw(st4, 0)
    st0 = __paddsw_mmxq_memq(st0, *edx_1)
    st5 = _m_punpckhwd(st5, 0)
    int64_t temp0_13 = __paddsw_mmxq_memq(st1, edx_1[1])
    int64_t temp0_14 = _m_punpckhbw(st3, 0)
    st5 = _m_paddsw(st5, temp0_8)
    st0 = _m_packuswb(st0, temp0_13)
    int64_t temp0_17 = _m_paddsw(temp0_14, st2)
    *eax_1 = st0
    int16_t temp0_18[0x4] = _m_psrawi(st5, 1)
    st3 = _m_psrawi(temp0_17, 1)
    *(eax_1 + arg4) =
        _m_packuswb(__paddsw_mmxq_memq(temp0_18, edx_1[2]), __paddsw_mmxq_memq(st3, edx_1[3]))
    result = &(*eax_1)[arg4 << 1]
    arg1 = result
    arg5 = &edx_1[4]
    arg2 = ecx_1 + (arg4 << 1)
    arg3 = edi_2 + (arg4 << 1)

return result

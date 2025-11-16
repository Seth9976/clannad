// 函数: sub_6eeb00
// 地址: 0x6eeb00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* eax_1

for (int32_t i = 4; i s> 0; )
    i -= 1
    int16_t (* edx_1)[0x4] = arg1
    int64_t* ecx_2 = arg2
    eax_1 = arg4
    int16_t st3[0x4] = *ecx_2
    int16_t st7[0x4] = *(ecx_2 + arg3)
    int64_t temp0_1 = _m_punpckhbw(st3, 0)
    st3 = _m_punpckhwd(st3, 0)
    int64_t temp0_3 = __paddsw_mmxq_memq(temp0_1, eax_1[1])
    st3 = __paddsw_mmxq_memq(st3, *eax_1)
    int64_t temp0_5 = _m_punpckhbw(st7, 0)
    int16_t temp0_6[0x4] = _m_packuswb(st3, temp0_3)
    int16_t temp0_10[0x4] = _m_packuswb(__paddsw_mmxq_memq(_m_punpckhwd(st7, 0), eax_1[2]), 
        __paddsw_mmxq_memq(temp0_5, eax_1[3]))
    *edx_1 = temp0_6
    *(edx_1 + arg3) = temp0_10
    arg4 = &eax_1[4]
    arg1 = &(*edx_1)[arg3]
    arg2 = ecx_2 + (arg3 << 1)

return &eax_1[4]

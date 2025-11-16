// 函数: sub_6ee1b0
// 地址: 0x6ee1b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 s>= 2)
    *arg4 *= arg6
    
    if (arg5 s> 0xa)
        sub_6eef30(&arg4[0x40], arg4)
    else
        sub_6ef590(&arg4[0x40], arg4)
else
    uint64_t st0 = zx.q(((sx.d(*arg4) * zx.d(arg6) + 0xf) s>> 5).w)
    st0 = _m_punpcklwd(st0, st0.d)
    st0 = _m_punpckldq(st0, st0.d)
    *(arg4 + 0x80) = st0
    *(arg4 + 0x88) = st0
    *(arg4 + 0x90) = st0
    *(arg4 + 0x98) = st0
    *(arg4 + 0xa0) = st0
    *(arg4 + 0xa8) = st0
    *(arg4 + 0xb0) = st0
    *(arg4 + 0xb8) = st0
    *(arg4 + 0xc0) = st0
    *(arg4 + 0xc8) = st0
    *(arg4 + 0xd0) = st0
    *(arg4 + 0xd8) = st0
    *(arg4 + 0xe0) = st0
    *(arg4 + 0xe8) = st0
    *(arg4 + 0xf0) = st0
    *(arg4 + 0xf8) = st0

uint32_t eax_7 = *(*(arg1 + 0xd4) + (arg2 << 2))
int32_t edx_4 = *(*(arg1 + 0xd0) + (arg2 << 2)) u>> 8 & 7
int64_t* edi_1 = *(arg1 + (*(arg1 + 0x11c) << 2) + 0x24c) + eax_7

if (edx_4 == 1)
    int16_t x87_r0[0x4]
    return sub_6eea30(x87_r0, edi_1, *(arg1 + (arg3 << 2) + 0x264), &arg4[0x40])

arg5 =
    eax_7 + *(arg1 + (*(arg1 + ((0x10011121 s>> (edx_4 << 2).b & 0xf) << 2) + 0x114) << 2) + 0x24c)
int16_t eax_17 = *(*(arg1 + 0xd8) + (arg2 << 1))
int32_t var_c
bool cond:1 = sub_6eb460(eax_17, &var_c, arg1, arg3, eax_17) s<= 1
int32_t eax_20 = *(arg1 + (arg3 << 2) + 0x264)

if (cond:1)
    return sub_6eeb00(edi_1, var_c + arg5, eax_20, &arg4[0x40])

int32_t var_8
return sub_6eeb70(edi_1, var_c + arg5, var_8 + arg5, eax_20, &arg4[0x40])

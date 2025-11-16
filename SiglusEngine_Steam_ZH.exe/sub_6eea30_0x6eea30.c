// 函数: sub_6eea30
// 地址: 0x6eea30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* esi = arg2 + (arg3 << 2)
int32_t edi = arg3 * 3
int16_t temp0[0x4] = _m_pcmpeqw(arg1, arg1)
int64_t st1 = *arg4
int16_t st2[0x4] = arg4[1]
arg1 = _m_psllwi(temp0, 0xf)
int16_t st3[0x4] = arg4[2]
int64_t st4 = arg4[3]
arg1 = _m_psrlwi(arg1, 8)
int64_t st5 = arg4[4]
int64_t st6 = arg4[5]
st1 = _m_packuswb(_m_paddsw(st1, arg1), _m_paddsw(st2, arg1))
int16_t temp0_8[0x4] = _m_packuswb(_m_paddsw(st3, arg1), _m_paddsw(st4, arg1))
st5 = _m_packuswb(_m_paddsw(st5, arg1), _m_paddsw(st6, arg1))
*arg2 = st1
*(arg2 + arg3) = temp0_8
*(arg2 + (arg3 << 1)) = st5
st3 = arg4[8]
st4 = arg4[9]
st5 = arg4[0xa]
st6 = arg4[0xb]
st1 = _m_packuswb(_m_paddsw(arg4[6], arg1), _m_paddsw(arg4[7], arg1))
int16_t temp0_17[0x4] = _m_packuswb(_m_paddsw(st3, arg1), _m_paddsw(st4, arg1))
st5 = _m_packuswb(_m_paddsw(st5, arg1), _m_paddsw(st6, arg1))
*(arg2 + edi) = st1
*esi = temp0_17
*(esi + arg3) = st5
st3 = arg4[0xe]
st4 = arg4[0xf]
st1 = _m_packuswb(_m_paddsw(arg4[0xc], arg1), _m_paddsw(arg4[0xd], arg1))
int16_t temp0_26[0x4] = _m_packuswb(_m_paddsw(st3, arg1), _m_paddsw(st4, arg1))
*(esi + (arg3 << 1)) = st1
*(esi + edi) = temp0_26
return arg3

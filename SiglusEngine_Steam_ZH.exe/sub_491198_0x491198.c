// 函数: sub_491198
// 地址: 0x491198
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t st0[0x2] = *arg2
int64_t st1 = arg2[2]
uint32_t st3[0x2] = arg2[5]
int32_t st4 = (arg2[7]).d
uint32_t temp0[0x2] = _m_punpckldq(st0, st1.d)
uint32_t st2[0x2] = _m_punpckhdq(st0, st1.d)
*arg1 = temp0
arg1[2] = st2
int64_t st6 = arg2[1]
uint32_t temp0_2[0x2] = _m_punpckldq(st3, st4)
int32_t st7 = (arg2[3]).d
st0 = arg2[4]
int64_t temp0_3 = _m_punpckhdq(st3, st4)
st1 = st6
arg1[5] = temp0_2
arg1[7] = temp0_3
st6 = _m_punpckldq(st6, st7)
st4 = (arg2[6]).d
st2 = st0
int64_t temp0_5 = _m_punpckhdq(st1, st7)
arg1[4] = st6
st0 = _m_punpckhdq(st0, st4)
uint32_t temp0_7[0x2] = _m_punpckldq(st2, st4)
arg1[6] = temp0_5
arg1[3] = st0
arg1[1] = temp0_7
__femms()
return arg1

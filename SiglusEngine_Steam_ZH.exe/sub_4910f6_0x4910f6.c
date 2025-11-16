// 函数: sub_4910f6
// 地址: 0x4910f6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint64_t st0 = zx.q(arg2)
int64_t x87_r0
sub_4dc7a0(x87_r0)
uint64_t st4 = _m_punpckldq(_m_punpckhdq(st0, st0.d), st0.d) ^ 0x80000000
*arg1 = st0
arg1[1] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0x3f800000
arg1[6] = 0
arg1[7] = 0x3f80000000000000
arg1[2] = st4
__femms()
return arg1

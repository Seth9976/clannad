// 函数: sub_491031
// 地址: 0x491031
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint64_t st0 = zx.q(arg2)
int64_t x87_r0
sub_4dc7a0(x87_r0)
uint64_t temp0 = _m_psrlqi(st0, 0x20)
*arg1 = 0x3f800000
arg1[1] = 0
arg1[2].d = 0
*(arg1 + 0x14) = st0.d
arg1[3] = temp0
arg1[6] = 0
arg1[7] = 0x3f80000000000000
arg1[4].d = 0
*(arg1 + 0x24) = (temp0 ^ 0x80000000).d
arg1[5].d = st0.d
*(arg1 + 0x2c) = 0
__femms()
return arg1

// 函数: sub_491096
// 地址: 0x491096
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__femms()
uint64_t st0 = zx.q(arg2)
int64_t x87_r0
sub_4dc7a0(x87_r0)
uint64_t st4 = st0
st0 &= 0xffffffff
int80_t st2
st2.q = 0x3f800000
uint64_t temp0 = _m_psrlqi(st4, 0x20)
arg1[2] = 0x3f80000000000000
arg1[3] = 0
arg1[6] = 0
arg1[7] = 0x3f80000000000000
arg1[4] = temp0
*arg1 = st0
arg1[5] = st0
arg1[1] = temp0 ^ 0x80000000
__femms()
return arg1

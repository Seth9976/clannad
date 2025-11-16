// 函数: sub_48f732
// 地址: 0x48f732
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st0 = arg1[1]

if (arg2 != 0)
    *arg2 = *arg1
    arg2[1].d = st0.d

int64_t temp0 = _m_punpckhdq(st0, st0.d)

if (arg3 != 0)
    uint64_t x87_r0
    sub_4dc1c0(x87_r0)
    *arg3 = __pfmul_mmxq_memq(temp0, 0x4000000040000000).d

__femms()

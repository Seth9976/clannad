// 函数: sub_6cba10
// 地址: 0x6cba10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = zx.d(*(arg2 + 0x72))

if ((result & 0x8000) != 0)
    *(arg2 + 8) &= 0xffffe7fa
    return sub_6cafa0(result, arg2, arg1, 0x10, 0xffffffff)

if (result.b s>= 0)
    *(arg2 + 8) &= 0xfffff7ff
else
    *(arg2 + 8) |= 0x800

if ((result.b & 2) == 0)
    *(arg2 + 8) &= 0xfffffffb
else
    *(arg2 + 8) |= 4

if ((result.b & 1) == 0)
    *(arg2 + 8) &= 0xfffffffe
    return result

*(arg2 + 8) |= 1
return result

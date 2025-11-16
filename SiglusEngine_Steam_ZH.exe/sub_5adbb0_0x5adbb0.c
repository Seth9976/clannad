// 函数: sub_5adbb0
// 地址: 0x5adbb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** eax = arg1 + 0x1d0
*(arg1 + 0x19c) = 0
*(arg1 + 0x1a0) = 0
__builtin_memcpy(arg1 + 0x12c, arg1 + 0xbc, 0x70)
__builtin_memset(arg1 + 0x1a4, 0, 0x1c)
*(arg1 + 0x1c0) = 0xffffffff
*(arg1 + 0x1c4) = 0
*(arg1 + 0x1c8) = 0
*(arg1 + 0x1cc) = 0
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
*(arg1 + 0x1e8) = 0xffffffff
*(arg1 + 0x1ec) = 0xffffffff
*(arg1 + 0x1f0) = 0xffffffff
int32_t result = sub_550bd0(arg1)
*(arg1 + 0x1f4) = 0
return result

// 函数: sub_5f3250
// 地址: 0x5f3250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** eax = arg1 + 0xe64
*(arg1 + 0x2a4) = 0
*(arg1 + 0x2a8) = 0
*(arg1 + 0x2b4) = 0
__builtin_memset(arg1 + 0x334, 0, 0x14)
*(arg1 + 0x2ac) = 0xffffffff
*(arg1 + 0x2b0) = 0xffffffff
*(arg1 + 0x348) = 0xffffffff
*(arg1 + 0x34c) = 0xffffffff
*(arg1 + 0x350) = 0
*(arg1 + 0x354) = 0
*(arg1 + 0x358) = 0
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
bool cond:1 = *(arg1 + 0xe90) u< 8
*(arg1 + 0xe8c) = 0

if (cond:1)
    *(arg1 + 0xe7c) = 0
    return 0

int16_t* result = *(arg1 + 0xe7c)
*result = 0
return result

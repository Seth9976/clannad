// 函数: sub_5bf760
// 地址: 0x5bf760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    sub_5bf800(arg1)

void* eax = arg1 + 0x12c
*(arg1 + 0x120) = 0xffffffff
*(arg1 + 0x124) = 0xffffffff
bool cond:1 = *(eax + 0x14) u< 8
*(eax + 0x10) = 0

if (not(cond:1))
    eax = *eax

*eax = 0
void* eax_1 = arg1 + 0x144
bool cond:2 = *(eax_1 + 0x14) u< 8
*(eax_1 + 0x10) = 0

if (not(cond:2))
    eax_1 = *eax_1

*eax_1 = 0
int32_t result = sub_5c0790(arg1 + 0x15c)
__builtin_memset(arg1 + 0x2b4, 0, 0x15)
return result

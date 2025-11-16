// 函数: sub_6c6d90
// 地址: 0x6c6d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x34) = 7
void* edx = &arg1[0x20]
*(edx + 0x10) = 0
*edx = 0
void* eax = &arg1[0x38]
*(eax + 0x14) = 7
*(eax + 0x10) = 0
*eax = 0
__builtin_memset(&arg1[0x54], 0, 0x18)
bool cond:0 = *(edx + 0x14) u< 8
*(edx + 0x10) = 0

if (not(cond:0))
    edx = *edx

*edx = 0
bool cond:1 = *(eax + 0x14) u< 8
*(eax + 0x10) = 0

if (not(cond:1))
    eax = *eax

*eax = 0
*(arg1 + 0x58) = *(arg1 + 0x54)
*(arg1 + 0x64) = *(arg1 + 0x60)
*arg1 = 0
*(arg1 + 0x1c) = 0xffffffff
arg1[0x50] = 0
return arg1

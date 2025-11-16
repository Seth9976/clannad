// 函数: sub_53d110
// 地址: 0x53d110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** eax = arg1 + 0x4a0
*(arg1 + 0x49c) = 0
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void* eax_1 = arg1 + 0x4c0
*(arg1 + 0x4b8) = 0
*(arg1 + 0x4bc) = 0
bool cond:1 = *(eax_1 + 0x14) u< 8
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

*eax_1 = 0
sub_53c4c0(arg1)
return sub_53d620(arg1) __tailcall

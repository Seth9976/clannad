// 函数: sub_5394c0
// 地址: 0x5394c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
void** eax = arg1 + 0x734
*(arg1 + 0x6dc) = 1
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void* eax_1 = arg1 + 0x754
*(arg1 + 0x74c) = 0
*(arg1 + 0x750) = 0
bool cond:1 = *(eax_1 + 0x14) u< 8
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

*eax_1 = 0
sub_538500(arg1)
sub_539cc0(arg1)
return sub_539ab0(arg1)

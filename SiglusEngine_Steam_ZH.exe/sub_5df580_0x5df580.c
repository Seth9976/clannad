// 函数: sub_5df580
// 地址: 0x5df580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** eax = arg1 + 0x60
*(arg1 + 0x54) = 0xffffffff
*(arg1 + 0x58) = 0xffffffff
*(arg1 + 0x5c) = 0xffffffff
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

void* var_10 = arg1
*eax = nullptr
int32_t var_14 = 0
sub_551590(*(arg1 + 0x88), *(arg1 + 0x8c))
int32_t result = *(arg1 + 0x88)
*(arg1 + 0x8c) = result
return result

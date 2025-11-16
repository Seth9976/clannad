// 函数: sub_539530
// 地址: 0x539530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HGDIOBJ ho = *(arg1 + 0x750)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x750) = 0

bool cond:0 = *(arg1 + 0x768) u< 8
void* eax = arg1 + 0x754
*(eax + 0x10) = 0

if (not(cond:0))
    eax = *eax

*eax = 0
int32_t result = *(arg1 + 0x6e0)
*(arg1 + 0x6e4) = result
return result

// 函数: sub_6e1520
// 地址: 0x6e1520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = *(arg1 + 0x14)

if (*(eax + 0x2d0) != 0)
    sub_7448e0(eax)

_memset(*(arg1 + 0x14), 0, 0x2d0)
*(*(arg1 + 0x14) + 0x2d0) = 0
void* result = *(arg1 + 0x14)
*(result + 0x2d4) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
return result

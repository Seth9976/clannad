// 函数: sub_563d60
// 地址: 0x563d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 8)

while (*(eax + 0xd) == 0)
    arg1 = eax
    eax = *(arg1 + 8)

return arg1

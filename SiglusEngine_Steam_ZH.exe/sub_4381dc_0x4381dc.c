// 函数: sub_4381dc
// 地址: 0x4381dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || *(arg1 + 4) != 0xd)
    return 

void* eax = *(arg1 + 0x10)

if (eax == 0)
    *(arg1 + 0x14) &= eax
    *(arg1 + 0x18) &= eax
    return 

if (*(eax + 4) != 9)
    *(arg1 + 0x14) = 1
    void* ecx
    eax = sub_4377a1(ecx, eax)
else
    *(arg1 + 0x14) = *(eax + 0x18)
    eax = *(eax + 0x1c)

*(arg1 + 0x18) = eax

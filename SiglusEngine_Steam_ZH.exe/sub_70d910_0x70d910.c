// 函数: sub_70d910
// 地址: 0x70d910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0xc)

if (esi == 0)
    return 

if (*(esi + 0x7c) u>= 0x10)
    j__free(*(esi + 0x68))

*(esi + 0x7c) = 0xf
*(esi + 0x78) = 0
*(esi + 0x68) = 0
sub_702710(esi)
j__free(esi)

// 函数: sub_6c91e0
// 地址: 0x6c91e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0xc)

if (esi == 0)
    return 

sub_6c8100(esi)
int32_t eax_1 = *(esi + 0x38)

if (eax_1 != 0)
    j__free(eax_1)
    *(esi + 0x38) = 0
    *(esi + 0x3c) = 0
    *(esi + 0x40) = 0

j__free(esi)

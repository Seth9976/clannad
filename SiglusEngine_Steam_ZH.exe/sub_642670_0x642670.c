// 函数: sub_642670
// 地址: 0x642670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_642670(edi[2])
    edi = *edi
    
    if (esi[0xf] u>= 8)
        j__free(esi[0xa])
    
    esi[0xf] = 7
    esi[0xe] = 0
    esi[0xa].w = 0
    
    if (esi[9] u>= 8)
        j__free(esi[4])
    
    esi[9] = 7
    esi[8] = 0
    esi[4].w = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)

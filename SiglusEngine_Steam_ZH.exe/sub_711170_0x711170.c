// 函数: sub_711170
// 地址: 0x711170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_711170(edi[2])
    edi = *edi
    sub_702710(&esi[0xa])
    
    if (esi[9] u>= 0x10)
        j__free(esi[4])
    
    esi[9] = 0xf
    esi[8] = 0
    esi[4].b = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)

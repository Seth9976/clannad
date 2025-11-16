// 函数: sub_578a30
// 地址: 0x578a30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_578a30(edi[2])
    edi = *edi
    
    if (esi[0x2d] u>= 8)
        j__free(esi[0x28])
    
    esi[0x2d] = 7
    esi[0x2c] = 0
    esi[0x28].w = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)

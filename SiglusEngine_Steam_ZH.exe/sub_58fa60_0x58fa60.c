// 函数: sub_58fa60
// 地址: 0x58fa60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_58fa60(edi[2])
    edi = *edi
    sub_58fe70(&esi[0xa])
    
    if (esi[9] u>= 8)
        j__free(esi[4])
    
    esi[9] = 7
    esi[8] = 0
    esi[4].w = 0
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)

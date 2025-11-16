// 函数: sub_54b010
// 地址: 0x54b010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 4)

if (esi == 0)
    return 

bool cond:0_1 = esi[1] != 1
esi[1]
esi[1] -= 1

if (cond:0_1)
    return 

(*(*esi + 4))()
int32_t edi_1 = esi[2]
esi[2] -= 1

if (edi_1 == 1)
    jump(*(*esi + 8))

// 函数: sub_6de730
// 地址: 0x6de730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
*(arg1 + 0x120) = 0
int32_t* esi = *(arg1 + 0x124)
*(arg1 + 0x124) = 0

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
    (*(*esi + 8))()

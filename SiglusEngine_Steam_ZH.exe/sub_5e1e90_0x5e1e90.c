// 函数: sub_5e1e90
// 地址: 0x5e1e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg1
int32_t* edx = arg1[3]

if (esi == arg1[1])
    esi = 0

*arg2 = *(edx + esi)
int32_t result = *(edx + esi + 4)
arg2[1] = result
arg1[3] += 8
return result

// 函数: sub_700d60
// 地址: 0x700d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *arg1
*arg1 = *(edx + 8)
void* eax_1 = *(edx + 8)

if (*(eax_1 + 0xd) == 0)
    *(eax_1 + 4) = arg1

*(edx + 4) = arg1[1]
void* eax_3 = data_4ebe4a8

if (arg1 == *(eax_3 + 4))
    *(eax_3 + 4) = edx
    *(edx + 8) = arg1
    arg1[1] = edx
    return eax_3

void** eax_4 = arg1[1]

if (arg1 != eax_4[2])
    *eax_4 = edx
    *(edx + 8) = arg1
    arg1[1] = edx
    return eax_4

eax_4[2] = edx
*(edx + 8) = arg1
arg1[1] = edx
return eax_4

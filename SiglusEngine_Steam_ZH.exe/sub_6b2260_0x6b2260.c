// 函数: sub_6b2260
// 地址: 0x6b2260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg1 + 8
int32_t i_1 = 0x100
void* result
int32_t i

do
    *(edx - 4) = 0
    result = edx + 0x18
    *edx = 0
    int32_t j_1 = 2
    *(edx + 4) = 0
    int32_t j
    
    do
        *(result - 8) = 0
        result += 4
        *(result - 4) = 0
        *(result + 4) = 0
        j = j_1
        j_1 -= 1
    while (j != 1)
    edx += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
return result

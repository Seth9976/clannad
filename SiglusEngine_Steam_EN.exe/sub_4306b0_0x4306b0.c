// 函数: sub_4306b0
// 地址: 0x4306b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* ecx = &data_8c4e04
int32_t i_1 = 8
int32_t i

do
    if (*(ecx - 0x50) != 0)
        result += 1
    
    if (*(ecx - 0x28) != 0)
        result += 1
    
    if (*ecx != 0)
        result += 1
    
    if (*(ecx + 0x28) != 0)
        result += 1
    
    ecx += 0xa0
    i = i_1
    i_1 -= 1
while (i != 1)
return result

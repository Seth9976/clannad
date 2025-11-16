// 函数: sub_482de0
// 地址: 0x482de0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* ecx = &data_928df8
int32_t i_1 = 0x40
int32_t i

do
    if (*(ecx - 0x48) != 0)
        result += 1
    
    if (*(ecx - 0x24) != 0)
        result += 1
    
    if (*ecx != 0)
        result += 1
    
    if (*(ecx + 0x24) != 0)
        result += 1
    
    ecx += 0x90
    i = i_1
    i_1 -= 1
while (i != 1)
return result

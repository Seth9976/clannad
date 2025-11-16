// 函数: sub_576340
// 地址: 0x576340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = &data_f8c788
int32_t i_1 = 0x40
int32_t i

do
    if (*(result - 0xc) != 0)
        *(result - 8) = *result
        *(result - 4) = *(result + 4)
        *(result + 0xc) = *(result + 0x10)
    
    result += 0x3920
    i = i_1
    i_1 -= 1
while (i != 1)
return result

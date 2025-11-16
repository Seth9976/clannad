// 函数: sub_57fb20
// 地址: 0x57fb20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = &data_f89bcc
int32_t i_1 = 0x10
int32_t i

do
    if (*(result - 0x28) != 0)
        *result += 1
    
    if (*(result + 0x38f8) != 0)
        *(result + 0x3920) += 1
    
    if (*(result + 0x7218) != 0)
        *(result + 0x7240) += 1
    
    if (*(result + 0xab38) != 0)
        *(result + 0xab60) += 1
    
    result += 0xe480
    i = i_1
    i_1 -= 1
while (i != 1)
return result

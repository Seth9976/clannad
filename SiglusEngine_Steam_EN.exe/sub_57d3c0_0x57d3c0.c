// 函数: sub_57d3c0
// 地址: 0x57d3c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = &data_f8d300
int32_t i_1 = 0x10
int32_t i

do
    if (*(result + 8) != 0 && *result == 0)
        *(result - 0x24) = 1
        *(result - 0x20) = 1
        *(result + 0x80) = 1
    
    if (*(result + 0x3928) != 0 && *(result + 0x3920) == 0)
        *(result + 0x38fc) = 1
        *(result + 0x3900) = 1
        *(result + 0x39a0) = 1
    
    if (*(result + 0x7248) != 0 && *(result + 0x7240) == 0)
        *(result + 0x721c) = 1
        *(result + 0x7220) = 1
        *(result + 0x72c0) = 1
    
    if (*(result + 0xab68) != 0 && *(result + 0xab60) == 0)
        *(result + 0xab3c) = 1
        *(result + 0xab40) = 1
        *(result + 0xabe0) = 1
    
    result += 0xe480
    i = i_1
    i_1 -= 1
while (i != 1)
return result

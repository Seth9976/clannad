// 函数: sub_4826f0
// 地址: 0x4826f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = &data_933428
int32_t i_1 = 0x10
int32_t j_1
int32_t i

do
    *(result - 0x230) = 0xffffffff
    j_1 = 0x20
    *(result - 0x22c) = 0
    *(result - 0x228) = 0
    *(result - 0x224) = 0
    *(result - 0x220) = 0xffffffff
    *(result - 0x21c) = 0
    *(result - 0x218) = 0
    *(result - 0x214) = 0
    int32_t j
    
    do
        *(result - 0x210) = 0
        j = j_1
        j_1 -= 1
    while (j != 1)
    *(result - 4) = j_1
    *result = j_1
    *(result - 8) = j_1
    result += 0x42a0
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg1 == 0)
    return result

return sub_4c3010(j_1, i_1) __tailcall

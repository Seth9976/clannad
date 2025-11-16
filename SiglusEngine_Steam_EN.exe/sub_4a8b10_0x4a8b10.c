// 函数: sub_4a8b10
// 地址: 0x4a8b10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i = &data_1080164
int32_t esi = 0

do
    sub_4d1c30(i, esi + 0x1080964, esi + &data_91f904, 0x28)
    *i = 2
    esi += 0x28
    i += 4
while (i s< &data_1080564)

int32_t edx_2 = data_1392710
void* result = &data_1080970
int32_t i_2 = 0x100
int32_t i_1

do
    *(result + 0xc) = edx_2
    result += 0x28
    *(result - 0x28) = 0xfffe7961
    *(result - 0x30) = 0xfffe7961
    *(result - 0x10) = 1
    *(result - 0x14) = 0
    *(result - 0x18) = 0
    *(result - 0x24) = 0xfffe7961
    *(result - 0x20) = 0xfffe7961
    *(result - 0x34) = 0xfffe7961
    *(result - 0x2c) = 0xff
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result

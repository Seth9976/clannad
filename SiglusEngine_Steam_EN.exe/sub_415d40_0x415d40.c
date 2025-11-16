// 函数: sub_415d40
// 地址: 0x415d40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = &data_131d478
int32_t i_1 = 0x10
int32_t i

do
    __builtin_memcpy(result + 0x24, result - 0x68, 0x8c)
    *(result - 4) = 0xffffffff
    void* esi_2 = result + 0xb0
    *result = 0xffffffff
    void* edi_2 = result + 0x13c
    *(result + 4) = 0xffffffff
    *(result + 8) = 0xffffffff
    result += 0x3b4
    __builtin_memcpy(edi_2, esi_2, 0x8c)
    *(result - 0x2a0) = 0xffffffff
    *(result - 0x29c) = 0xffffffff
    *(result - 0x298) = 0xffffffff
    *(result - 0x294) = 0xffffffff
    i = i_1
    i_1 -= 1
while (i != 1)

if (data_131d300 != i_1)
    __builtin_memcpy(0x107f034, &data_107efa8, 0x8c)
    data_107f00c = 0xffffffff
    data_107f010 = 0xffffffff
    data_107f014 = 0xffffffff
    data_107f018 = 0xffffffff

return result

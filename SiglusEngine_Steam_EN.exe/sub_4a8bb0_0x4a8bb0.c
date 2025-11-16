// 函数: sub_4a8bb0
// 地址: 0x4a8bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = &data_922110
__builtin_memset(&data_1080564, 0, 0x400)
int32_t ecx = data_131310c
int32_t result = 0x100
int32_t i

do
    *(edx + 0xc) = ecx
    edx += 0x28
    *(edx - 0x28) = 0xfffe7961
    *(edx - 0x30) = 0xfffe7961
    *(edx - 0x10) = 0
    *(edx - 0x14) = 0
    *(edx - 0x18) = 0
    *(edx - 0x24) = 0xfffe7961
    *(edx - 0x20) = 0xfffe7961
    *(edx - 0x34) = 0xfffe7961
    *(edx - 0x2c) = 0xff
    i = result
    result -= 1
while (i != 1)
return result

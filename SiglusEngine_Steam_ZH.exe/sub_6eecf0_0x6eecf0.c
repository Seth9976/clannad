// 函数: sub_6eecf0
// 地址: 0x6eecf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg1 & 0x800000) == 0)
    return 0

int32_t result = 1

if ((arg1 & &__dos_header) != 0)
    result = 9

if (arg1 s< 0)
    result |= 2

if ((arg1 & 0x40000000) != 0)
    result |= 4

if ((arg2.b & 0x40) != 0)
    result |= 0x400

if ((arg2 & 0x800) == 0)
    return result

return result | 0x800

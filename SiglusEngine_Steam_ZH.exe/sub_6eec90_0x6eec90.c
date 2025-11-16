// 函数: sub_6eec90
// 地址: 0x6eec90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg1 & 0x800000) == 0)
    return 0

int32_t result = 1

if ((arg1 & &data_2000000) != 0)
    result = 0x19

if ((arg1 & &data_4000000) != 0)
    result |= 0x20

if ((arg2.b & 1) != 0)
    result |= 0x40

if ((arg2 & 0x100) != 0)
    result |= 0x80

if ((arg2 & 0x80000) != 0)
    result |= 0x100

if ((arg2 & 0x100000) == 0)
    return result

return result | 0x200

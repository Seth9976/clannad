// 函数: sub_699f90
// 地址: 0x699f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edx = zx.d(arg1)
int32_t result = edx - 0x30

switch (result)
    case 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
        return result
    case 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
        return edx - 0x37
    case 0x31, 0x32, 0x33, 0x34, 0x35, 0x36
        return edx - 0x57
    default
        result.b = 0
        return result

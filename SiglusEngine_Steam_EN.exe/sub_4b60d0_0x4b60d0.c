// 函数: sub_4b60d0
// 地址: 0x4b60d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *((arg1 << 2) + &data_12997e4)
*((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bd90) = 0
*((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bd94) = 0
*((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bd98) = 0
*((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bd9c) = 0
*((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bdb0) = 0
*((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bdb4) = 0
__builtin_memset((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bdc8, 0xff, 0x2c)
__builtin_memset((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bdf4, 0xffffffff, 0x100)

if (edx s< 0 || edx s> 4)
    edx = 0

int32_t i_1 = *((edx << 2) + &data_6109f0)
void* result = 0x20

if (i_1 s> 0x20)
    i_1 = 0x20

if (i_1 s> 0)
    void* ecx = (arg2 + (arg1 << 3)) * 0x374 + 0x1b1c004
    result = (arg2 + (arg1 << 3)) * 0x374 + 0x1b1bf7c
    int32_t i
    
    do
        *(result - 0x80) = 1
        ecx += 4
        *result = 1
        result += 4
        *(ecx - 4) = 1
        *((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bffc - ((arg2 + (arg1 << 3)) * 0x374 + 0x1b1bef4)
            + result - 4) = 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

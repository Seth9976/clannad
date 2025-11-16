// 函数: sub_4c31a0
// 地址: 0x4c31a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c == 0 || arg1 u> 0x3f)
    return 0

WaitForSingleObject(data_641b54, 0xffffffff)
int32_t ecx

if ((&data_208cd58)[arg1 * 0x60] != 0)
    ecx = (&data_208cd54)[arg1 * 0x60]

int32_t result

if ((&data_208cd58)[arg1 * 0x60] == 0 || ecx == 0)
    result = 0
else
    result = *(arg1 * 0x180 + 0x208cd78)
    
    if (*(ecx + 0x2e) == 0x10)
        result *= 2

ReleaseSemaphore(data_641b54, 1, nullptr)
return result

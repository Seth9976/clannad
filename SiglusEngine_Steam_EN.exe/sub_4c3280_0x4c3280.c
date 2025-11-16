// 函数: sub_4c3280
// 地址: 0x4c3280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3f)
    return 0

WaitForSingleObject(data_641b54, 0xffffffff)
void* eax_3

if ((&data_208cd58)[arg3 * 0x60] != 0)
    eax_3 = (&data_208cd54)[arg3 * 0x60]

int32_t result

if ((&data_208cd58)[arg3 * 0x60] == 0 || eax_3 == 0)
    if (arg4 != 0)
        *arg4 = 0x5622
    
    result = 0
else
    if (arg4 != 0)
        *arg4 = *(eax_3 + 0x30)
    
    result = 1

ReleaseSemaphore(data_641b54, 1, nullptr)
return result

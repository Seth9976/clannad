// 函数: sub_4c3200
// 地址: 0x4c3200
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c == 0 || arg1 u> 0x3f)
    return 0

WaitForSingleObject(data_641b54, 0xffffffff)
void* ecx

if ((&data_208cd58)[arg1 * 0x60] != 0)
    ecx = (&data_208cd54)[arg1 * 0x60]

int32_t result

if ((&data_208cd58)[arg1 * 0x60] == 0 || ecx == 0)
    result = 0
else
    int32_t edx_1 = 0
    int32_t esi_2 = zx.d(*(ecx + 0x2c)) * *(ecx + 0x30)
    int32_t eax_3 = *(arg1 * 0x180 + 0x208cd78)
    result = divu.dp.d(0:(modu.dp.d(edx_1:eax_3, esi_2) * 0x3e8), esi_2)
        + divu.dp.d(edx_1:eax_3, esi_2) * 0x3e8

ReleaseSemaphore(data_641b54, 1, nullptr)
return result

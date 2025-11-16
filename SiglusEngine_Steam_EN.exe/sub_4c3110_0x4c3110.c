// 函数: sub_4c3110
// 地址: 0x4c3110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c == 0 || arg3 u> 0x3f)
    return 0

enum WAIT_EVENT eax = WaitForSingleObject(data_641b54, 0xffffffff)
int32_t result

if ((&data_208cd58)[arg3 * 0x60] == 0)
    result = 0
else
    int32_t ecx = (&data_208cd54)[arg3 * 0x60]
    
    if (ecx == 0 || *(ecx + 4) != 0)
        result = 0
    else
        int32_t esi_1 = *(ecx + 0x18)
        int32_t var_14_1 = ecx
        int32_t result_1 = sub_4cd600(eax, arg2, ecx, 0, 0xffffffff, 0, arg4, 0xffffffff)
        int32_t ecx_1 = (&data_208cd54)[arg3 * 0x60]
        result = result_1
        
        if (esi_1 != *(ecx_1 + 0x18))
            sub_4cd820(ecx_1)
            result = 0

ReleaseSemaphore(data_641b54, 1, nullptr)
return result

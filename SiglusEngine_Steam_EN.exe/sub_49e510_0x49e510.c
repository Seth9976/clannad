// 函数: sub_49e510
// 地址: 0x49e510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 != 0 && *(arg3 + 0x278) != 0)
    sub_4cbb50(arg2, arg4)
    *(arg3 + 0x4b8) = arg4
    *(arg3 + 0x238) = arg4
    return 

if (arg2 u<= 0x3f)
    WaitForSingleObject(data_641b54, 0xffffffff)
    
    if ((&data_208cd58)[arg2 * 0x60] != 0)
        void* eax_4 = (&data_208cd54)[arg2 * 0x60]
        
        if (eax_4 != 0)
            *(eax_4 + 0x3a0) = arg4
    
    ReleaseSemaphore(data_641b54, 1, nullptr)

if (arg3 != 0)
    *(arg3 + 0x4b8) = arg4
    *(arg3 + 0x238) = arg4

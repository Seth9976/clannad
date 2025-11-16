// 函数: sub_49e5a0
// 地址: 0x49e5a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || *(arg1 + 0x278) == 0)
    if (data_641b5c != 0 && arg2 u<= 0x3f)
        WaitForSingleObject(data_641b54, 0xffffffff)
        int32_t ebx_1
        
        if ((&data_208cd58)[arg2 * 0x60] == 0 || (&data_208cd54)[arg2 * 0x60] == 0)
            ebx_1 = 0
        else
            ebx_1 = 1
        
        BOOL eax_7 = ReleaseSemaphore(data_641b54, 1, nullptr)
        
        if (ebx_1 != 0 && arg1 != 0)
            if (*(arg1 + 0x28) != 0 && *(arg1 + 0x238) == 0)
                sub_49e510(eax_7, arg2, arg1, 0)
            
            return 1
else if (arg2 u<= 0x3f && *(arg2 * 0x3c0 + &data_20af854) != 0
        && *(arg2 * 0x3c0 + &data_20af850) != 1)
    if (*(arg1 + 0x28) == 0 || *(arg1 + 0x238) != 0)
        return 1
    
    sub_49e510(arg2 * 0x3c0 + &data_20af850, arg2, arg1, 0)
    return 1

return 0

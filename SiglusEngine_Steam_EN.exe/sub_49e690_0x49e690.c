// 函数: sub_49e690
// 地址: 0x49e690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0_1

if (arg1 == 0 || *(arg1 + 0x278) == 0)
    if (data_641b5c != 0 && arg2 u<= 0x3f)
        WaitForSingleObject(data_641b54, 0xffffffff)
        int32_t esi_1
        
        if ((&data_208cd58)[arg2 * 0x60] == 0 || (&data_208cd54)[arg2 * 0x60] == 0)
            esi_1 = 0
        else
            esi_1 = 1
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
        cond:0_1 = esi_1 == 0
        goto label_49e709
else if (arg2 u<= 0x3f && *(arg2 * 0x3c0 + &data_20af854) != 0)
    cond:0_1 = *(arg2 * 0x3c0 + &data_20af850) == 1
label_49e709:
    
    if (not(cond:0_1))
        return 1
return 0

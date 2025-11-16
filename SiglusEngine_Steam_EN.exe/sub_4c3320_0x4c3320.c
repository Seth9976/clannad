// 函数: sub_4c3320
// 地址: 0x4c3320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c == 0 || arg3 u> 0x3f)
    return 

WaitForSingleObject(data_641b54, 0xffffffff)
int32_t ecx = arg4

if (ecx s>= 0)
    if (ecx s> 0xff)
        ecx = 0xff
    
    *(arg3 * 0x180 + &data_208cd50 + (arg2 << 2) + 0x48) = ecx
else
    *(arg3 * 0x180 + &data_208cd50 + (arg2 << 2) + 0x48) = 0

if (arg5 != 0 && (&data_208cd58)[arg3 * 0x60] != 0 && (&data_208cd54)[arg3 * 0x60] != 0)
    sub_4c33a0(arg3)

ReleaseSemaphore(data_641b54, 1, nullptr)

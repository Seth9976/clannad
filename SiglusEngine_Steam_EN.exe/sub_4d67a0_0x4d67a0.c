// 函数: sub_4d67a0
// 地址: 0x4d67a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1af413c == 0
*arg2 = 0

if (cond:0 || arg1 == 0)
    return 

WaitForSingleObject(data_7027a8, 0xffffffff)
int32_t edx = data_20c0500
int32_t ecx = 0
int32_t* eax_1 = data_20c04fc

if (edx s> 0)
    while (*eax_1 != arg1)
        ecx += 1
        eax_1 = &eax_1[5]
        
        if (ecx s>= edx)
            ReleaseSemaphore(data_7027a8, 1, nullptr)
            return 
    
    char* edx_1 = eax_1[3]
    
    if (edx_1 != 0)
        sub_4cfd70(arg2, edx_1)

ReleaseSemaphore(data_7027a8, 1, nullptr)

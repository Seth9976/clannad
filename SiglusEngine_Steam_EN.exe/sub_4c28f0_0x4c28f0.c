// 函数: sub_4c28f0
// 地址: 0x4c28f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1

if (result + 5 u> 0x44)
    return 0xffffffff

WaitForSingleObject(data_641b54, 0xffffffff)

if (data_641b5c == 0)
    result = 0xffffffff
else
    if (result s> 0xffffffff)
        sub_4c29d0(result)
    else
        int32_t result_2
        int32_t edx
        
        if (result == 0xffffffff)
            edx = 0x40
            result_2 = 0x20
        else if (result == 0xfffffffe)
            edx = result + 0x2a
            result_2 = 0x20
        else if (result == 0xfffffffd)
            result_2 = result + 0x2b
            edx = result + 0x33
        else if (result == 0xfffffffc)
            result_2 = result + 0x34
            edx = result + 0x3c
        else if (result != 0xfffffffb)
            edx = 0x40
            result_2 = 0x20
        else
            result_2 = result + 0x3d
            edx = result + 0x45
        
        int32_t result_1 = result_2
        result = 0xffffffff
        void* ecx_2 = &(&data_208cd58)[result_2 * 0x60]
        
        while (*ecx_2 != 0)
            result_1 += 1
            ecx_2 += 0x180
            
            if (result_1 s>= edx)
                goto label_4c29b1
        
        result = result_1
    
    if (result != 0xffffffff && arg2 != 0)
        (&data_208cd54)[result * 0x60] = arg2

label_4c29b1:
ReleaseSemaphore(data_641b54, 1, nullptr)
return result

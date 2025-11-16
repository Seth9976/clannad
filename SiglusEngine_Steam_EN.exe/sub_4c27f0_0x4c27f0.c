// 函数: sub_4c27f0
// 地址: 0x4c27f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t result = arg3

if (result s>= 0x40)
    return 0xfffffffc

WaitForSingleObject(data_641b54, 0xffffffff)

if (data_641b5c == 0)
    result = 0xfffffffd
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
        void* ecx_3 = &(&data_208cd58)[result_2 * 0x60]
        
        while (*ecx_3 != 0)
            result_1 += 1
            ecx_3 += 0x180
            
            if (result_1 s>= edx)
                goto label_4c28e2
        
        result = result_1
    
    if (result != 0xffffffff)
        int32_t var_14_1 = result * 0x3b8 + 0x2092d50
        (&data_208cd54)[result * 0x60] = result * 0x3b8 + 0x2092d50
        int32_t eax_4 =
            sub_4cd600(result * 0x180, arg2, result * 0x3b8 + 0x2092d50, arg4, arg5, 0, arg6, arg7)
        
        if (eax_4 == 0)
            result = eax_4 - 2

label_4c28e2:
ReleaseSemaphore(data_641b54, 1, nullptr)
return result

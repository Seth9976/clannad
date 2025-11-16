// 函数: sub_4cb7d0
// 地址: 0x4cb7d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s<= 0xffffffff)
    int32_t result_1
    int32_t edx_1
    
    if (arg1 == 0xffffffff)
        edx_1 = 0x40
        result_1 = 0x20
    else if (arg1 == 0xfffffffe)
        edx_1 = arg1 + 0x2a
        result_1 = 0x20
    else if (arg1 == 0xfffffffd)
        result_1 = 0x28
        edx_1 = 0x30
    else if (arg1 == 0xfffffffc)
        result_1 = 0x30
        edx_1 = 0x38
    else if (arg1 != 0xfffffffb)
        edx_1 = 0x40
        result_1 = 0x20
    else
        result_1 = 0x38
        edx_1 = 0x40
    
    int32_t result = result_1
    void* ecx_1 = result_1 * 0x3c0 + &data_20af850
    
    while (true)
        if (*(ecx_1 + 4) == 0 || *ecx_1 == 1)
            return result
        
        result += 1
        ecx_1 += 0x3c0
        
        if (result s>= edx_1)
            break
        
        continue

return 0xffffffff

// 函数: sub_4ec740
// 地址: 0x4ec740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t result
result.b = data_187c51f

if (result.b != 0)
    result = zx.d(result.b)
    
    if (data_187c51e != 0)
        result = 0
    
    data_187c51f = result.b
    
    if (arg1 == 0x8175 || arg1 == 0x8177 || arg1 == 0x8169)
        data_1af1710 += 1
    else if (arg1 == 0x8176 || arg1 == 0x8178 || arg1 == 0x816a)
        result = data_1af1710
        
        if (result == 1)
            data_187c51e = result.b
            data_1af1710 = 0
            return result
        
        if (result != 0)
            data_1af1710 = result - 1
            return result - 1

return result

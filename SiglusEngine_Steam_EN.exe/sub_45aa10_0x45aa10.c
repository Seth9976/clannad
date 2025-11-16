// 函数: sub_45aa10
// 地址: 0x45aa10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = (&data_7036ac)[arg1]

if (result == 0)
    return 0

switch (arg1)
    case 0
        if (data_12dc4c4 == 0)
            return 0
        
        if (data_187a5c0 == 0)
            return 2
    case 1
        if (data_12dc4c4 == 0)
            return 0
    case 4
        if (data_12a2938 == 0 && data_12a293c == 0 && data_12a2940 == 0 && data_12a2944 == 0)
            return 0
    case 0xb
        if (data_1af44dc != 3)
            return 0
    case 0xe
        if (data_139319c == 0)
            return 2
    case 0x19
        if (data_1311178 != 0)
            return data_1312538
        
        if (data_7037c8 == 0 || data_703674 != 0)
            return 2
        
        int32_t eax_9 = data_108f354
        
        if (eax_9 == 1)
            if (data_703678 == 2)
                return result
            
            return 2
        
        if (eax_9 == 2 && data_13132e0 == 0 && data_703678 != eax_9)
            return 2
    case 0x1f
        if (data_1311178 != 0)
            return data_1312530
        
        arg1.b = 0
        
        if (sub_485d20(arg1) == 0)
            return 2

return result

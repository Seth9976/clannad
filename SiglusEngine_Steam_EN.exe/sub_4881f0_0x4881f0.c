// 函数: sub_4881f0
// 地址: 0x4881f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_71929c
char eax = 0

if (esi == 0x22 || esi == 0x23 || esi == 0x24)
    eax = 1

if (arg2 == 2 || arg2 == 3)
    if (eax != 0)
        int32_t eax_5 = data_1311170
        
        if (eax_5 != data_1af4e94 && eax_5 != 0x3e7)
            return 1
    else if (data_7037e4 != 0)
        bool cond:0_1
        
        if (data_12a2980 != 0)
            cond:0_1 = data_13701b8 s<= 0
        else
            cond:0_1 = data_1af4e94 s<= 0
        
        if (not(cond:0_1))
            return 1
else if (arg2 != 4)
    if (arg2 != 0xd)
        if (arg2 != 0xf)
            return 1
        
        if (eax == 0)
            if (data_703660 == 0xffffffff)
                return 0
            
            return 1
        
        if (arg1 != 0)
            if (*(arg1 + 0x2b64) == 0xffffffff)
                return 0
            
            return 1
    else if (data_7037c8 != 0 && data_703674 == 0)
        int32_t result = data_108f354
        
        if (result == 1)
            if (data_703678 == 2)
                return result
            
            return 2
        
        if (result == 2 && data_13132e0 == 0 && data_703678 != result)
            return 2
        
        return 1
else if (eax != 0)
    if (data_1311170 == 0)
        return 0
    
    return 1

return 0

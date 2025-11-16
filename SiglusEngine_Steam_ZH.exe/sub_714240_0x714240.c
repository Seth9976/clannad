// 函数: sub_714240
// 地址: 0x714240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0x80121

if (arg2 != 0)
    if (arg2 == 1 && arg3 u<= 5)
        switch (arg3)
            case 0
                return 0x83121
            case 1
                result = 0xa3121
                
                if ((arg4 & 1) != 0)
                    return 0xab121
            case 2
                result = 0xb7121
                
                if ((arg4 & 1) != 0)
                    return 0xbf121
            case 3
                result = 0xbf121
                
                if ((arg4 & 1) != 0)
                    return 0xbf921
            case 4
                result = 0x87121
                
                if ((arg4 & 1) != 0)
                    return 0x8f121
            case 5
                result = 0x87121
                
                if ((arg4 & 1) != 0)
                    return 0x8f121
else if (arg3 - 1 u<= 8)
    switch (arg3)
        case 1
            if ((arg4 & 1) != 0)
                return 0x88121
        case 2
            result = 0xb0121
            
            if ((arg4 & 1) != 0)
                return 0xb8121
        case 3
            result = 0x9c121
            
            if ((arg4 & 1) != 0)
                return 0xbc121
        case 4, 5
            result = 0x84121
            
            if ((arg4 & 1) != 0)
                return 0x8c121
        case 6, 7
            return 0xb0121
        case 8, 9
            return 0xbc121

return result

// 函数: sub_428f50
// 地址: 0x428f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t result = *esi - 4

switch (result)
    case 0, 1, 2, 3, 4
        result = sub_428a70(&arg3, esi[0x11], arg1, &arg3)
        
        if (result != 0)
            result = arg3[3]
            
            if (result s> 0)
                esi[0x12] = result - 1
                return sub_428c70(arg1, arg2, esi, arg4)
    case 5, 6
        esi[0x12] = 0
        result = sub_428c70(arg1, arg2, esi, arg4)
        
        if (*esi == 9)
            result = sub_481a60(esi[0xa])
            esi[8] = result
            esi[0xa] = result

return result

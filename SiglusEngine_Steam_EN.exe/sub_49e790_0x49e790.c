// 函数: sub_49e790
// 地址: 0x49e790
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result

if (arg2 != 0)
    if (arg1 u<= 0x3f)
        result = arg1 * 0x3c0 + &data_20af850
        
        if (*(result + 4) != 0 && *result != 1 && *(result + 0x30) != 0)
            if (*(result + 0x11c) != 0)
                return sub_42d590() __tailcall
            
            return result
else if (data_641b5c != arg2 && arg1 u<= 0x3f)
    result = arg1 * 0x180 + &data_208cd50
    
    if (*(result + 8) != arg2 && *(result + 0x40) != arg2 && *(result + 0x12c) == arg2)
        return result
return sub_42d590() __tailcall

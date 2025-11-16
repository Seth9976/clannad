// 函数: sub_4780f0
// 地址: 0x4780f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
enum MESSAGEBOX_RESULT result

if (arg1 s>= 0 && arg1 s< data_7031bc)
    result = arg2 + (arg1 << 1)
    int32_t** esi_1 = *(result * 0x7a0 + 0x98c180)
    
    if (esi_1 != 0)
        int32_t i_1 = *(result * 0x7a0 + &data_98c178)
        
        if (i_1 s<= 0)
            return result
        
        int32_t i
        
        do
            if (esi_1[0xf6] == 0)
                result = sub_478000(esi_1)
            
            esi_1 = &esi_1[0x1f6]
            i = i_1
            i_1 -= 1
        while (i != 1)
        return result

return sub_476410(result, arg2, arg1, 0)

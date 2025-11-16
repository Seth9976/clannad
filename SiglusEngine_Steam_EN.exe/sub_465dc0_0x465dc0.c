// 函数: sub_465dc0
// 地址: 0x465dc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0 && arg1 s< data_7031bc)
    int32_t eax_2 = *((arg2 + (arg1 << 1)) * 0x650 + &data_72d6bc)
    
    if (eax_2 == 8)
        if (sub_4782d0(arg1, arg2) != 0)
            return 1
    else if (eax_2 == 1 || eax_2 == 2)
        int32_t eax_5 = *((arg2 + (arg1 << 1)) * 0x650 + &data_72d8f8)
        
        if (eax_5 == 4 || eax_5 == 8)
            return 1

return 0

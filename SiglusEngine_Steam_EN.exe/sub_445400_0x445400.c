// 函数: sub_445400
// 地址: 0x445400
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s< 0x12c)
    int32_t eax_1 = *((arg1 << 2) + &data_1392cd0)
    
    if (eax_1 s< 0x2710)
        if (arg2 != 0)
            return zx.d((&data_13701ec)[eax_1 * 0x24])
        
        int32_t ecx = eax_1 * 9
        
        if ((&data_13701ec)[ecx << 2] == 0 && *((ecx << 2) + &data_13701f5) != 0)
            return 2
        
        int32_t result
        result.b = *((ecx << 2) + &data_13701f4) != 0
        return result

return 0

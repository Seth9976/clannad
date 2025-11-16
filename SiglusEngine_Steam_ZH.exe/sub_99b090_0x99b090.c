// 函数: sub_99b090
// 地址: 0x99b090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    bool cond:0_1 = arg1[2] == 0
    int32_t eax_1 = *arg1
    int128_t var_20
    __builtin_memset(&var_20, 0, 0x14)
    var_20:0xc.d = eax_1
    var_20:8.d = eax_1
    int32_t var_10_1 = arg1[1]
    
    if (not(cond:0_1) && sub_742fa0(&var_20, 8) == 1)
        int32_t var_c = 0
        int16_t var_8_1 = 0
        sub_99b940(0, &var_c, &var_20, 6)
        
        if (var_c == 0x62726f76 && var_8_1 == 0x7369)
            return 1

return 0

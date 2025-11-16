// 函数: sub_45fae0
// 地址: 0x45fae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u<= 0x3f)
    BOOL eax = arg1 * 7
    
    if (*((eax << 2) + &data_1af4770) == 0 && *(arg1 * 0x110 + 0x1321ee0) != 0)
        int32_t var_1c = 0
        int32_t var_18 = 0
        int32_t eax_2 = sub_427370(eax, arg1 * 0x2c + &data_108ffe4, &var_1c, 0xffffffff, 0, 1, 0, 
            nullptr, 1, 0)
        
        if (var_1c == 0)
            sub_45f1a0((eax << 2) + &data_1af4770)
            *((eax << 2) + &data_1af4788) = 1
            return 
        
        int32_t var_28 = *(arg1 * 0x110 + 0x1321ed8)
        int32_t var_2c = *(arg1 * 0x110 + 0x1321ed4)
        int32_t var_30 = *(arg1 * 0x110 + 0x1321ed0)
        sub_45f270(eax_2, (eax << 2) + &data_1af4770, &var_1c)
        sub_4d6c40(&var_1c, &var_18)
        *((eax << 2) + &data_1af4788) = 0
else if (data_1af4e54 == 0)
    sub_45f1a0(&data_1af4e54)
    data_1af4e6c = 1

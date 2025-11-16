// 函数: sub_49aeb0
// 地址: 0x49aeb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 7 || arg2 u> 1)
    return 

int32_t esi_1 = arg4

if (esi_1 s> 0x100)
    esi_1 = 0x100
    int32_t var_14_1 = 0x100
    char* eax_1 = sub_4c84d0(&data_7027c0, 0x61b248)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        sub_4a1e40(3)
else if (esi_1 s< 0)
    esi_1 = 0

*((arg2 + (arg3 << 1)) * 0x2c80 + 0x8d2f18) = esi_1
*((arg2 + (arg3 << 1)) * 0x2c80 + 0x8d2f20) = esi_1 - 1

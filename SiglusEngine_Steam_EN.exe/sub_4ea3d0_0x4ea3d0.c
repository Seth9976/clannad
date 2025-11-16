// 函数: sub_4ea3d0
// 地址: 0x4ea3d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = arg4
char* eax_2

if (*result != 0x28)
    eax_2 = data_12dc644
    *(arg2 + 0x34) = eax_2
else
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_1c
    sub_4ef190(&var_1c, &arg4, result, U"$", &var_1c)
    *(arg2 + 0x34) = var_1c
    eax_2 = sub_4eef40(&var_1c, 1)
    result = arg4

if (data_702fc0 != 0)
    eax_2 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_2 = nullptr
        
        if (data_13184dc == 0)
            eax_2 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_2 = nullptr
        
        if (data_1af174c == 0 && eax_2 != 0)
            eax_2 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x61e918, nullptr), 
                    data_72d6ac, data_719b6c, 0x61e918, nullptr), 
                data_72d6ac, data_719b6c, 0x61e918, nullptr)

sub_4eeae0(eax_2, arg2, arg3, *(arg2 + 0x34), 2, nullptr, nullptr)
return result

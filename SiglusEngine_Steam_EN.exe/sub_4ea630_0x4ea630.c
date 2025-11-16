// 函数: sub_4ea630
// 地址: 0x4ea630
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result_1
char* eax_1 = __security_cookie ^ &result_1
char* var_c = eax_1
char* result = arg4
result_1 = result
*(arg2 + 0x34) = 0
*(arg2 + 0x38) = 0xffffffff
*(arg2 + 0x3c) = 0xffffffff

if (*result == 0x28)
    int32_t eax_2 = data_1af4e84
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_48
    
    if (eax_2 == 0)
        sub_4ef190(&var_48, &result_1, result, U"$", &var_48)
        *(arg2 + 0x34) = var_48
        result = result_1
    else
        int32_t var_34
        
        if (eax_2 == 1)
            sub_4ef190(&var_48, &result_1, result, "$$", &var_48)
            *(arg2 + 0x38) = var_48
            *(arg2 + 0x3c) = var_34
            result = result_1
        else if (eax_2 == 2)
            sub_4ef190(&var_48, &result_1, result, "$$$", &var_48)
            *(arg2 + 0x34) = var_48
            *(arg2 + 0x38) = var_34
            int32_t var_20
            *(arg2 + 0x3c) = var_20
            result = result_1
    
    eax_1 = sub_4eef40(&var_48, 3)

if (data_702fc0 != 0)
    eax_1 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_1 = nullptr
        
        if (data_13184dc == 0)
            eax_1 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_1 = nullptr
        
        if (data_1af174c == 0 && eax_1 != 0)
            eax_1 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61e918, nullptr), 
                    data_72d6ac, data_719b6c, 0x61e918, nullptr), 
                data_72d6ac, data_719b6c, 0x61e918, nullptr)

sub_4eeae0(eax_1, arg2, arg3, 0xffffffff, 2, nullptr, nullptr)
sub_5f02dd(var_c ^ &result_1)
return result

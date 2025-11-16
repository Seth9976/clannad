// 函数: sub_4ea810
// 地址: 0x4ea810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result_1
int32_t eax_1 = __security_cookie ^ &result_1
int32_t eax_2 = data_1bfdd30
data_8c4ac0.d = 0
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_30 = 0
char* var_2c = nullptr
int32_t var_1c = 0
char* var_18 = nullptr
char* result = arg4
result_1 = result
int32_t var_48

if (eax_2 == 4)
    int32_t eax_3 = data_1af4e84
    
    if (eax_3 == 0)
        sub_4ef190(&var_48, &result_1, result, "$", &var_48)
        result = result_1
    else if (eax_3 == 1)
        var_48 = 0
    else if (eax_3 == 2)
        sub_4ef190(&var_48, &result_1, result, "$S", &var_48)
        result = result_1
    
    int32_t ecx_1 = data_8c4ac0.d
    
    if (var_48 u<= 9)
        ecx_1 = var_48
    
    data_8c4ac0.d = ecx_1
    sub_498a50(var_2c)
else if (eax_2 == 0xe)
    int32_t eax_8 = data_1af4e84
    int32_t var_34
    int32_t ecx_4
    char* var_60_2
    uint32_t var_5c_3
    int32_t* eax_10
    
    if (eax_8 u> 3)
        ecx_4 = var_48
    else
        switch (eax_8)
            case 0
                sub_4ef190(&var_48, &result_1, result, U"$", &var_48)
                var_34 = 2
                result = result_1
                ecx_4 = var_48
            case 1
                eax_10 = &var_48
                var_5c_3 = &var_48
                var_60_2 = &data_61e930
            label_4ea93c:
                sub_4ef190(eax_10, &result_1, result, var_60_2, var_5c_3)
                result = result_1
                ecx_4 = var_48
            case 2
                ecx_4 = 0
                var_34 = 2
                var_48 = 0
            case 3
                eax_10 = &var_48
                var_5c_3 = &var_48
                var_60_2 = &data_61e93c
                goto label_4ea93c
    int32_t eax_11 = data_8c4ac0.d
    
    if (ecx_4 u<= 9)
        eax_11 = ecx_4
    
    data_8c4ac0.d = eax_11
    
    if (ecx_4 u<= 9)
        (&data_8c4ac0)[ecx_4 * 3]:4 = var_34
    
    sub_498a50(var_18)

char* eax_13 = sub_4eef40(&var_48, 3)

if (data_702fc0 != 0)
    eax_13 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_13 = nullptr
        
        if (data_13184dc == 0)
            eax_13 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_13 = nullptr
        
        if (data_1af174c == 0 && eax_13 != 0)
            eax_13 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_13, data_72d6ac, data_719b6c, 0x61e918, nullptr), 
                    data_72d6ac, data_719b6c, 0x61e918, nullptr), 
                data_72d6ac, data_719b6c, 0x61e918, nullptr)

sub_4eeae0(eax_13, arg2, arg3, 0xffffffff, 2, nullptr, nullptr)
sub_5f02dd(eax_1 ^ &result_1)
return result

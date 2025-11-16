// 函数: sub_4181b0
// 地址: 0x4181b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = sub_417d30()

if (data_12dc378 != 0)
    int32_t esi_1 = data_703180:4
    char* ecx_1
    result, ecx_1 = sub_4c3da0(result, 5, &data_12dc378, 0x18)
    
    if (result == 1)
    label_41822c:
        char* var_18_2 = ecx_1
        int32_t var_1c_1 = 0x18
        int32_t ecx_3 = data_703180:4
        BOOL var_8 = 0
        int32_t var_c = 0
        int32_t ecx_4
        result, ecx_4 = sub_4c5340(&var_c, &data_12dc378, ecx_3, &var_c, &var_8, ecx_1)
        
        if (var_c != 0)
            sub_417f10(ecx_4, var_8)
            return sub_4d6c40(&var_c, &var_8)
    else
        if (esi_1 != 0xffffffff)
            result, ecx_1 = sub_4c51f0(result, &data_12dc378, esi_1, nullptr)
        
        if (esi_1 != 0xffffffff && result != 0)
            goto label_41822c
        
        if (data_702fc0 == 0)
            char* var_18_1 = &data_12dc378
            sub_4c84d0(&data_7027c0, 0x6134e0)
            return sub_446a50()

return result

// 函数: sub_4a7d00
// 地址: 0x4a7d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = sub_4d6c40(&data_1bfe284, &data_1bfe288)
bool cond:0 = data_12dc354 == 0
data_1bfe28c = 0

if (not(cond:0))
    int32_t esi_1 = data_703180:4
    char* ecx_1
    result, ecx_1 = sub_4c3da0(result, 5, &data_12dc354, 0x18)
    
    if (result == 1)
    label_4a7d86:
        char* var_8_2 = ecx_1
        int32_t var_c_1 = 0x18
        result =
            sub_4c5340(result, &data_12dc354, data_703180:4, &data_1bfe284, &data_1bfe288, ecx_1)
        
        if (data_1bfe284 != 0)
            result = data_1bfe288
            data_1bfe28c = result
    else
        if (esi_1 != 0xffffffff)
            result, ecx_1 = sub_4c51f0(result, &data_12dc354, esi_1, nullptr)
        
        if (esi_1 != 0xffffffff && result != 0)
            goto label_4a7d86
        
        if (data_702fc0 == 0)
            char* var_8_1 = &data_12dc354
            sub_4c84d0(&data_7027c0, 0x61be78)
            return sub_446a50() __tailcall

return result

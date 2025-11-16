// 函数: sub_4498a0
// 地址: 0x4498a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_1af44cc = 0
void* result

if (data_108f34c == 0)
    int32_t esi_1 = data_7031b8
    int32_t eax = sub_4c3da0(result, 0, &data_108fa8c, 0xffffffff)
    void* eax_1
    
    if (eax != 1 && esi_1 != 0xffffffff)
        eax_1 = sub_4c51f0(eax, &data_108fa8c, esi_1, nullptr)
    
    if (eax == 1 || (esi_1 != 0xffffffff && eax_1 != 0))
        result = 1
        data_1af44cc = 1
    else
        result = data_1af44cc
    
    data_1af44c8 = 0
    
    if (result != 0)
        goto label_449925
else
    data_1af44cc = 1
    data_1af44c8 = 0
label_449925:
    int32_t esi_2 = data_7031b8
    result = sub_4c3da0(result, 0, &data_108fa8c, 0xffffffff)
    
    if (result != 1 && esi_2 != 0xffffffff)
        result = sub_4c51f0(result, &data_108fa8c, esi_2, nullptr)
        
        if (result != 0)
            void var_c
            void* result_1
            sub_4c5550(&var_c, &data_108fa8c, data_7031b8, 0, nullptr, &var_c, &result_1)
            result = result_1
            data_1af44c8 = result

return result

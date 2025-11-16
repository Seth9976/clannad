// 函数: sub_426e50
// 地址: 0x426e50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg3
int32_t var_c = 0
char* var_8 = nullptr

if (arg6 != 2)
    uint32_t var_1c_1 = arg3
    int32_t var_20_1 = 0xd
    int32_t ecx_1
    char* esi_1
    char* result
    
    if (arg5 != 0)
        ecx_1 = sub_4c5400(&var_c, edi, data_703190:0xc, &var_c, &var_8, arg3, 0x10)
        esi_1 = var_8
        
        if (*esi_1 == 2)
            int32_t esi_2 = *(esi_1 + 5)
            uint32_t ecx_4 = sub_4d6c40(&var_c, &var_8)
            uint32_t var_1c_2 = ecx_4
            int32_t var_20_2 = 0xd
            uint32_t var_24_2 = ecx_4
            ecx_1 =
                sub_4c5400(&var_c, edi, data_703190:0xc, &var_c, &var_8, ecx_4, esi_2 * 0x18 + 0x10)
            esi_1 = var_8
        
        result = arg6
    else
        char* result_1
        result_1, ecx_1 = sub_4c5340(&var_c, edi, data_703190:0xc, &var_c, &var_8, arg3)
        esi_1 = var_8
        result = result_1
    
    if (esi_1 != 0)
        if (*esi_1 == 2)
            int32_t var_1c_3 = ecx_1
            sub_426d50(esi_1)
        
        *arg2 = var_c
        *arg4 = esi_1
        
        if (arg5 == 0)
            return result
        
        return nullptr

return 0

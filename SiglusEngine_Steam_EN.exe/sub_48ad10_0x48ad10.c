// 函数: sub_48ad10
// 地址: 0x48ad10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_1332b60
*arg3 = 0
*arg2 = 0
*arg4 = 0
int32_t* result = arg5
*result = 0

if (esi s> 0)
    result = data_1332b64
    
    if (result s> 0)
        int32_t var_c = 0
        BOOL var_8 = 0
        int32_t eax_2 = (result * esi) << 2
        result = sub_4d6960(eax_2, &var_8, &var_c, eax_2, "disp_memory")
        BOOL esi_1 = var_8
        
        if (esi_1 != 0)
            sub_48a8c0(result, data_1332b60, esi_1, data_1332b64, arg6, arg7)
            *arg3 = var_c
            int32_t eax_4 = data_1332b60
            *arg2 = esi_1
            *arg4 = eax_4
            result = data_1332b64
            *arg5 = result

return result

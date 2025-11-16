// 函数: sub_455500
// 地址: 0x455500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t esi = arg8
int32_t edi = arg6

if (edi s> esi)
    arg1 = edi
    edi = esi
    esi = arg1

int32_t var_28 = arg9
int32_t var_2c = edi
int32_t var_30 = arg7
int32_t var_34 = edi
int32_t result = sub_455320(arg1, arg2, arg3, arg4, arg5.b)

if (edi != esi)
    int32_t var_28_1 = arg9
    int32_t var_2c_1 = esi
    int32_t var_30_1 = arg7
    int32_t var_34_1 = esi
    result = sub_455320(result, arg2, arg3, arg4, arg5.b)
    
    if (edi + 1 != esi)
        int32_t var_28_2 = arg9
        int32_t var_2c_2 = esi - 1
        int32_t var_30_2 = arg5
        int32_t var_34_2 = edi + 1
        sub_455320(arg5, arg2, arg3, arg4, arg5.b)
        result = esi - 1
        
        if (edi + 1 != result)
            int32_t var_28_3 = arg9
            int32_t result_1 = result
            int32_t var_30_3 = arg7
            int32_t var_34_3 = edi + 1
            return sub_455320(arg7, arg2, arg3, arg4, arg7.b)

return result

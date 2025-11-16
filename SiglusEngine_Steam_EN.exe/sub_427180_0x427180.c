// 函数: sub_427180
// 地址: 0x427180
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0

int32_t edi = arg12

if (edi != 0)
    edi = 1

uint32_t eax_1 = zx.d(*arg3)
BOOL result = 0
int32_t var_20 = 0
int32_t result_2

if (eax_1 == 0)
    result_2 =
        sub_4c8a40(&var_20, arg2, arg3, arg4, arg5, nullptr, arg11, arg10, arg8, arg9, &var_20)
label_4272d3:
    result = result_2
label_4272d5:
    
    if (var_20 != 0 && arg13 != 0)
        int32_t var_34_6 = arg13
        char* eax_11 = sub_4c84d0(&data_7027c0, 0x614144)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_11, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
            sub_4a1e40(3)
        
        sub_446a50()
else
    if (eax_1 == 1)
        if (*arg4 != 0)
            edi = 0
        
        result_2 = sub_4c8ad0(arg4, arg2, arg3, edi, arg4, arg5, nullptr, arg11, arg10, arg8, arg9, 
            &var_20)
        int32_t edi_3 = neg.d(edi)
        *arg10 = sbb.d(edi_3, edi_3, edi != 0) & 3
        goto label_4272d3
    
    if (eax_1 == 2)
        int32_t* edi_1 = arg9
        int32_t* esi_1 = arg8
        int32_t* var_34_1 = &var_20
        int32_t var_14
        int32_t* var_38_1 = &var_14
        char* var_3c_1 = arg3
        void* var_1c
        __builtin_memset(&var_1c, 0, 0x14)
        uint32_t* var_18
        int32_t var_10
        uint32_t* var_c
        BOOL result_1 = sub_4c8c10(&var_c, arg2, arg3, &var_c, &var_18, nullptr, arg11, arg10, 
            esi_1, edi_1, &var_10, &var_1c)
        result = result_1
        int32_t esi_2
        void* edi_2
        
        if (*arg4 != 0)
            edi_2 = arg7
            esi_2 = arg6
        else
            esi_2 = *esi_1
            edi_2 = *edi_1
            sub_4d6960(result_1, arg5, arg4, (esi_2 * edi_2) << 2, arg11)
        
        sub_4c8d30(arg5, var_1c, var_18, var_14, *arg5, esi_2, edi_2)
        sub_4d6c40(&var_10, &var_1c)
        sub_4d6c40(&var_c, &var_18)
        *arg10 = 1
        goto label_4272d5
return result

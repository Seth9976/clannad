// 函数: sub_427010
// 地址: 0x427010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0

int32_t edi = arg6

if (edi != 0)
    edi = 1

uint32_t eax_1 = zx.d(*arg3)
BOOL result = 0
int32_t var_10 = 0
BOOL result_1

if (eax_1 == 0)
    result_1 = sub_4c8a40(&arg4[1], arg2, arg3, arg4, &arg4[1], &arg4[2], arg5, &arg4[5], &arg4[3], 
        &arg4[4], &var_10)
label_4270e4:
    result = result_1
    
    if (var_10 != 0 && arg7 != 0)
        int32_t var_24_4 = arg7
        char* eax_20 = sub_4c84d0(&data_7027c0, 0x614144)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_20, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
            sub_4a1e40(3)
        
        sub_446a50()
else
    if (eax_1 == 1)
        result_1 = sub_4c8ad0(&arg4[1], arg2, arg3, edi, arg4, &arg4[1], &arg4[2], arg5, &arg4[5], 
            &arg4[3], &arg4[4], &var_10)
        int32_t edi_1 = neg.d(edi)
        arg4[5] = sbb.d(edi_1, edi_1, edi != 0) & 3
        goto label_4270e4
    
    if (eax_1 == 2)
        int32_t* var_24_1 = &var_10
        int32_t var_28_1 = 0
        char* var_2c_1 = arg3
        result_1 = sub_4c8c10(&arg4[1], arg2, arg3, arg4, &arg4[1], &arg4[2], arg5, &arg4[5], 
            &arg4[3], &arg4[4], nullptr, nullptr)
        goto label_4270e4
return result

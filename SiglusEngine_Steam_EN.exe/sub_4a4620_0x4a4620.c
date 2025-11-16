// 函数: sub_4a4620
// 地址: 0x4a4620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg4
int32_t result

if (edi == 0xc || edi == 0x12)
    int32_t var_8 = (&data_63ecb0)[edi]
    char* var_10
    int32_t* var_c
    int32_t eax_6
    void var_14
    
    if (arg3 s>= 0)
        eax_6 = sub_4a44b0(&var_8, arg3, edi, &var_8, &arg4, &var_c, &var_14, &var_10)
    
    if (arg3 s< 0 || eax_6 == 0)
        return sub_4a40a0(arg3, edi)
    
    int32_t* esi_3 = var_c
    result = sub_4d6c40(arg4, esi_3)
    
    if (arg2 != 0 && *arg2 != 0)
        result = sub_4cfe90(result, esi_3, arg4, arg2, var_10)
        
        if (data_702fc0 != 0)
            return sub_4a4530(edi)
else
    if (edi != 0xa)
        return sub_4a3fe0()
    
    if (arg3 u> 0xf)
        return sub_4a40a0(arg3, 0xa)
    
    result = sub_4d1ba0(arg1, edi + 0x36, (arg3 << 6) + 0x715f3c, 0)
    
    if (arg2 != 0 && *arg2 != 0)
        result = sub_4cfdf0(result, arg2, (arg3 << 6) + 0x715f3c, edi + 0x36)
        
        if (data_702fc0 != 0)
            result = sub_4cfc80(arg2)
            
            if (result s> 0x40)
                return sub_4a41c0(result - 1, edi + 0x35, edi, result - 1)

return result

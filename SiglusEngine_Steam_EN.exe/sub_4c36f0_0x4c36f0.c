// 函数: sub_4c36f0
// 地址: 0x4c36f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edx

if (arg2 != 0xffffffff)
    edx = arg2 * 0x208 + &data_13517e0
else
    edx = nullptr

char* var_c_3

if (arg3 == 0)
    if (edx == 0)
        if (arg4 == 0xffffffff)
            return arg4
        
        return sub_4cfd70(arg5, arg4 * 0x208 + &data_134cec0) __tailcall
    
    if (arg4 == 0xffffffff)
        return sub_4cfd70(arg5, edx) __tailcall
    
    void* var_8_3 = arg4 * 0x208 + &data_134cec0
    var_c_3 = edx
else if (edx == 0)
    if (arg4 == 0xffffffff)
        return sub_4cfd70(arg5, arg3) __tailcall
    
    char* var_8_2 = arg3
    void* var_c_2 = arg4 * 0x208 + &data_134cec0
else
    char* var_8_1 = arg3
    
    if (arg4 != 0xffffffff)
        void* var_c_1 = arg4 * 0x208 + &data_134cec0
        char* var_10_1 = edx
        return sub_4c84d0(arg5, "%s\%s\%s")
    
    var_c_3 = edx
return sub_4c84d0(arg5, "%s\%s")

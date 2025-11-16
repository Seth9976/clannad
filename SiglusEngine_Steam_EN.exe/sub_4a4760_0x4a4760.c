// 函数: sub_4a4760
// 地址: 0x4a4760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result
int32_t ecx_1
result, ecx_1 = sub_4cfc80(arg2)

if (result s<= 0)
    return result

int32_t var_c
char* var_8

if (arg4 != 0xc && arg4 != 0x12)
    if (arg4 != 0xa)
        return sub_4a3fe0()
    
    if (arg3 u> 0xf)
        return sub_4a40a0(arg3, 0xa)
    
    var_8 = nullptr
    int32_t eax_1 = arg3 << 6
    int32_t var_2c_1 = ecx_1
    var_c = 0
    int32_t eax_2 = sub_4cfcc0(eax_1, &var_8, &var_c, eax_1 + 0x715f3c, arg2)
    
    if (eax_2 == 0)
        sub_4d1ba0(eax_2, 0x40, eax_1 + 0x715f3c, 0)
        return sub_4d6c40(&var_c, &var_8)
    
    sub_4a4620(eax_2, var_8, arg3, 0xa)
    return sub_4d6c40(&var_c, &var_8)

var_c = (&data_63ecb0)[arg4]

if (arg3 s>= 0)
    void var_18
    void* var_14
    void* var_10
    int32_t eax_9
    int32_t ecx_9
    eax_9, ecx_9 = sub_4a44b0(&var_c, arg3, arg4, &var_c, &var_14, &var_10, &var_18, &var_8)
    
    if (eax_9 != 0)
        int32_t var_2c_3 = ecx_9
        void* ebx_1 = var_10
        var_8 = nullptr
        var_c = 0
        int32_t eax_10 = sub_4cfcc0(eax_9, &var_8, &var_c, *ebx_1, arg2)
        
        if (eax_10 == 0)
            sub_4d6c40(var_14, ebx_1)
            return sub_4d6c40(&var_c, &var_8)
        
        sub_4a4620(eax_10, var_8, arg3, arg4)
        return sub_4d6c40(&var_c, &var_8)

return sub_4a40a0(arg3, arg4)

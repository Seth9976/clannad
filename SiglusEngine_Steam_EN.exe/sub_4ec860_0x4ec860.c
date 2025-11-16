// 函数: sub_4ec860
// 地址: 0x4ec860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg9
char ecx = arg12.b

if (ecx != 0 && arg14 != 0 && arg15 != 0)
    int16_t ecx_1 = arg4.w
    
    if (result != 0)
        sub_498820(ecx_1)
        sub_498820(arg5)
        sub_498820(arg6)
        ecx_1 = arg7
    
    sub_498820(ecx_1)
    ecx = arg12.b
    result = arg9

if (arg2 != 0 && result == 0 && (arg4 == 0x8140 || arg4 == 0x20))
    if (arg14 == 0 || ecx == 0)
        return result
    
    uint32_t eax = zx.d(*(arg3 * 0x2d0 + &data_8fcadc))
    void* edx_1
    edx_1.b = 0
    return sub_4200a0(eax, edx_1.b, arg3, eax.b, arg4.w, 0)

if (data_702fc0 != 0 && arg14 != 0)
    int16_t ecx_5 = arg4.w
    
    if (result != 0)
        sub_41bc40(ecx_5)
        sub_41bc40(arg5)
        sub_41bc40(arg6)
        ecx_5 = arg7
    
    sub_41bc40(ecx_5)

if (arg16 != 0)
    sub_57e990(arg3)

char var_2c_1 = arg12.b

if (arg9 != 0)
    return sub_57f650(arg12, arg10, arg3, arg11, var_2c_1, 0xffffffff, 0, arg13, arg14)

return sub_57f4b0(arg12, arg4, arg3, arg8, var_2c_1, 0xffffffff, 0, arg13, arg14)

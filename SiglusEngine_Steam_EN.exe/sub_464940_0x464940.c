// 函数: sub_464940
// 地址: 0x464940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
*arg4 = 0xffffffff
int32_t result

if (arg2 != 0 && *arg2 != 0)
    char* var_18_1 = arg3
    result = sub_41fa10(arg2, 0)
    
    if (result == 0xffffffff)
        return result
    
    if (sub_41fbc0(result, arg4) != 0 && sub_41fc60(result, arg5) != 0)
        sub_4cfd70(arg6, arg2)
        sub_4cfd70(arg7, arg5)
        return result
else if (*arg3 != 0)
    char* var_18_2 = arg3
    result = sub_41fa10(arg3, 0)
    
    if (result == 0xffffffff)
        return result
    
    if (sub_41fbc0(result, arg4) != 0 && sub_41fc60(result, arg5) != 0)
        sub_4cfd70(arg6, arg3)
        sub_4cfd70(arg7, arg5)
        return result
return 0xffffffff

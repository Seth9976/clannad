// 函数: sub_4cf1e0
// 地址: 0x4cf1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
int32_t ecx = arg8

if (ecx != 0)
    ecx = 1

*arg5 = 0
*arg6 = 0
int32_t eax_1 = sub_4d0f10(arg3, "PDT10")

if (eax_1 != 0)
    int32_t eax_5 = sub_4d0f10(arg3, "PDT11")
    
    if (eax_5 == 0)
        int32_t* var_1c_2 = arg6
        
        if (ecx != eax_5)
            sub_4cefe0(eax_5, arg2, arg3, arg4, arg5, var_1c_2, arg7)
            
            if (*arg2 != 0)
                return *arg5 * *arg6
        else
            sub_4cecd0(eax_5, arg2, arg3, arg4, arg5, var_1c_2, arg7)
            
            if (*arg2 != 0)
                return (*arg5 * *arg6) << 2
else
    sub_4ceac0(eax_1, arg2, arg3, arg4, arg5, arg6, arg7)
    
    if (*arg2 != 0)
        return (*arg5 * *arg6) << 2

return 0

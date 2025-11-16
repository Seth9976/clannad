// 函数: sub_40d4d0
// 地址: 0x40d4d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0

if (arg5 s> 0)
    int32_t* eax_1 = arg4
    float i_1 = arg5
    float i
    
    do
        if (*eax_1 != 0)
            edx += 1
        
        eax_1 = &eax_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (edx != 0)
        int32_t result
        int80_t st0
        st0, result = sub_40d510(arg1, arg2, arg3, arg5)
        return result

return 0

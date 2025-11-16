// 函数: sub_49e870
// 地址: 0x49e870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3

if (arg3 == 0)
    return 

if (*(arg3 + 0x278) == 0)
    if (arg3[0x2a8] != 0)
        if (arg4 == 0)
            sub_49d230(&arg3[0x2a8], &arg3[0x280], arg3, *(arg3 + 0x2a4), &arg3[0x2a8], 
                *(arg3 + 0x4b0), *(arg3 + 0x4b4), *(arg3 + 0x4b8), *(arg3 + 0x4bc), 
                *(arg3 + 0x4c0), *(arg3 + 0x4c4), *(arg3 + 0x4f0), *(arg3 + 0x4f4))
            return 
        
        sub_49db20(&arg3[0x280], arg2, arg3, &arg3[0x280], *(arg3 + 0x2a4), &arg3[0x2a8], 
            *(arg3 + 0x4b0), *(arg3 + 0x4b4), 0, *(arg3 + 0x4b8), 0, *(arg3 + 0x4bc), 
            *(arg3 + 0x4c0), *(arg3 + 0x4c4), *(arg3 + 0x4f0), *(arg3 + 0x4f4), 0xff)
else if (arg3[0x2a8] != 0)
    int128_t xmm0 = *(arg3 + 0x4d8)
    int32_t var_20
    int32_t var_18
    
    if (arg4 != 0)
        var_18.o = xmm0
        var_20.q = *(arg3 + 0x4d0)
        sub_49e000(&arg3[0x280], arg2, arg3, &arg3[0x280], *(arg3 + 0x2a4), &arg3[0x2a8], 
            *(arg3 + 0x4b0), *(arg3 + 0x4b4), arg3, *(arg3 + 0x4b8), 0, *(arg3 + 0x4f0), 
            *(arg3 + 0x4f4), var_20, var_18)
        return 
    
    var_20.o = xmm0
    int32_t var_28
    var_28.q = *(arg3 + 0x4d0)
    sub_49d2e0(&arg3[0x2a8], &arg3[0x280], arg3, *(arg3 + 0x2a4), &arg3[0x2a8], *(arg3 + 0x4b0), 
        *(arg3 + 0x4b4), *(arg3 + 0x4b8), var_28, var_20, var_18, *(arg3 + 0x4f0), *(arg3 + 0x4f4))

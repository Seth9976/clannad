// 函数: sub_49ea60
// 地址: 0x49ea60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3

if (arg3 != 0)
    arg1 = &arg3[0x528]
    
    if (*(arg3 + 0x278) == 0)
        if (*arg1 != 0)
            if (arg4 != 0)
                int32_t eax_5 = sub_49db20(&arg3[0x500], arg2, arg3, &arg3[0x500], *(arg3 + 0x524), 
                    arg1, *(arg3 + 0x730), *(arg3 + 0x734), 0, *(arg3 + 0x738), 0, *(arg3 + 0x748), 
                    *(arg3 + 0x740), *(arg3 + 0x744), *(arg3 + 0x770), *(arg3 + 0x774), 0xff)
                return eax_5
            
            int32_t eax_3 = sub_49d230(arg1, &arg3[0x500], arg3, *(arg3 + 0x524), arg1, 
                *(arg3 + 0x730), *(arg3 + 0x734), *(arg3 + 0x738), *(arg3 + 0x73c), 
                *(arg3 + 0x740), *(arg3 + 0x744), *(arg3 + 0x770), *(arg3 + 0x774))
            return eax_3
    else if (*arg1 != 0)
        int128_t xmm0 = *(arg3 + 0x758)
        int32_t var_20
        int32_t var_18
        
        if (arg4 != 0)
            var_18.o = xmm0
            var_20.q = *(arg3 + 0x768)
            int32_t eax_2 = sub_49e000(&arg3[0x500], arg2, arg3, &arg3[0x500], *(arg3 + 0x524), 
                arg1, *(arg3 + 0x730), *(arg3 + 0x734), arg3, *(arg3 + 0x738), 0, *(arg3 + 0x770), 
                *(arg3 + 0x774), var_20, var_18)
            return eax_2
        
        var_20.o = xmm0
        int32_t var_28
        var_28.q = *(arg3 + 0x750)
        int32_t eax = sub_49d2e0(arg1, &arg3[0x500], arg3, *(arg3 + 0x524), arg1, *(arg3 + 0x730), 
            *(arg3 + 0x734), *(arg3 + 0x738), var_28, var_20, var_18, *(arg3 + 0x770), 
            *(arg3 + 0x774))
        return eax

return sub_49e720(arg1, arg2, arg3, 0)

// 函数: sub_5499b0
// 地址: 0x5499b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x87 && arg4 != 0)
    int32_t ecx_1 = *(arg4 + 4)
    
    if (ecx_1 == 0x100)
        int32_t ecx_2 = *(arg4 + 8)
        
        if (ecx_2 == 0x26 || ecx_2 == 0x28)
            sub_549680(0, 2)
            return 1
    else if (ecx_1 == 0x102 && *(arg4 + 8) == 9)
        return 0x80

return CallWindowProcA(data_20c2184, arg1, arg2, arg3, arg4)

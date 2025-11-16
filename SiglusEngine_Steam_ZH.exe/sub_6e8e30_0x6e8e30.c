// 函数: sub_6e8e30
// 地址: 0x6e8e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

switch (arg4)
    case 0
        if (arg3 == 0 || arg2 == 0)
            return 0xffffffff
        
        *arg2 = 7
        return 0
    case 1, 3, 5
        return 0xffffffe9
    case 2
        if (arg3 == 0 || arg2 == 0)
            return 0xffffffff
        
        int32_t eax_3 = *arg2
        
        if (eax_3 u> 7)
            return 0xfffffff6
        
        *(arg3 + 0xd144) = eax_3
        return 0
    case 4, 6
        if (arg3 == 0 || arg2 == 0)
            return 0xffffffff
        
        return 0xfffffff6

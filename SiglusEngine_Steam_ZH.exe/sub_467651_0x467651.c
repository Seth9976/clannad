// 函数: sub_467651
// 地址: 0x467651
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg1 != 0 && arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
    if (*(arg2 + 0x19) != 3)
        if (arg5 != 0)
            *arg5 = arg2 + 0x34
            result = 0x10
        
        if (arg3 != 0)
            *arg3 = 0
    else
        if (arg3 != 0)
            *arg3 = *(arg2 + 0x30)
            result = 0x10
        
        if (arg5 != 0)
            *arg5 = arg2 + 0x34
    
    if (arg4 != 0)
        *arg4 = zx.d(*(arg2 + 0x16))
        return result | 0x10

return result

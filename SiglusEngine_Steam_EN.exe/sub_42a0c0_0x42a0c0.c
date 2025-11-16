// 函数: sub_42a0c0
// 地址: 0x42a0c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg8

if (eax s< 0)
    eax = 0
else if (eax s> 0xff)
    eax = 0xff

void* const ecx = arg10

if (ecx s< 0xffffff01)
    ecx = 0xffffff01
else if (ecx s> 0xff)
    ecx = 0xff

if (eax != 0)
    if (arg9 == 0)
        if (arg5 == 0)
            return sub_429c10(eax, arg2, arg3, arg4, eax)
        
        return sub_429e50(eax, arg2, arg3, arg4, eax, arg5, arg6, arg7)
    
    if (arg5 == 0)
        return sub_429d60(eax, arg2, arg3, arg4, eax)
    
    return sub_429fc0(eax, arg2, arg3, arg4, eax, arg5, arg6, arg7)

if (arg9 != 0)
    if (arg5 == 0)
        return sub_429cf0(arg5, arg2, arg3, arg4)
    
    return sub_429f40(arg5, arg2, arg3, arg4, arg5, arg6, arg7)

if (ecx == 0)
    if (arg5 == 0)
        return arg5
    
    return sub_42a320(arg5, arg2, arg3, arg4, arg5, arg6, arg7)

if (arg5 == 0)
    return sub_42a1f0(arg5, arg2, arg3, arg4, ecx)

return sub_42a3a0(arg5, arg2, arg3, arg4, ecx, arg5, arg6, arg7)

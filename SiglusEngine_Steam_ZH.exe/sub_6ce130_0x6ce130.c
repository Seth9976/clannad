// 函数: sub_6ce130
// 地址: 0x6ce130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = arg3
uint32_t eax = arg3

if (eax != 0 && arg2 != 0)
    *arg2 = arg4
    arg2[6].b = arg6
    *(arg2 + 0x1b) = arg10
    uint32_t eax_9 = zx.d(arg6)
    *(arg2 + 0x19) = arg7
    *(arg2 + 0x1a) = arg9
    arg2[7].b = arg8
    arg2[1] = arg5
    sub_6cd090(eax_9, arg4, eax, arg5, eax_9, zx.d(arg7), zx.d(arg8), zx.d(arg9), zx.d(arg10))
    char eax_10 = *(arg2 + 0x19)
    
    if (eax_10 == 3 || (eax_10 & 2) == 0)
        *(arg2 + 0x1d) = 1
    else
        *(arg2 + 0x1d) = 3
    
    if ((eax_10 & 4) != 0)
        *(arg2 + 0x1d) += 1
    
    eax_10 = muls.dp.b(arg2[6].b, *(arg2 + 0x1d))
    *(arg2 + 0x1e) = eax_10
    uint32_t eax_11 = zx.d(eax_10)
    
    if (eax_10 u>= 8)
        int32_t eax_13 = (eax_11 u>> 3) * arg4
        arg2[3] = eax_13
        return eax_13
    
    eax = (eax_11 * arg4 + 7) u>> 3
    arg2[3] = eax

return eax

// 函数: sub_4eba80
// 地址: 0x4eba80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg10 = 0
arg1 = *arg3
uint32_t ecx_2

if (arg1 u< 0x80)
    ecx_2 = 0
else if (arg1 u< 0xa0)
    if (arg1 u>= 0xfe)
        ecx_2 = 0
    else
        ecx_2 = zx.d(arg1) << 8 | zx.d(arg3[1])
else if (arg1 u<= 0xdf || arg1 u>= 0xfe)
    ecx_2 = 0
else
    ecx_2 = zx.d(arg1) << 8 | zx.d(arg3[1])

uint32_t* result = arg4
*result = ecx_2

if (ecx_2 == 0x8194)
    result.b = arg3[2]
    uint32_t esi_3
    
    if (result.b u< 0x80)
        esi_3 = 0
    else if (result.b u< 0xa0)
        if (result.b u>= 0xfe)
            esi_3 = 0
        else
            esi_3 = zx.d(result.b) << 8 | zx.d(arg3[3])
    else if (result.b u<= 0xdf || result.b u>= 0xfe)
        esi_3 = 0
    else
        esi_3 = zx.d(result.b) << 8 | zx.d(arg3[3])
    
    *arg5 = esi_3
    uint32_t* eax_2
    eax_2.b = arg3[4]
    uint32_t edx_2
    
    if (eax_2.b u< 0x80)
        edx_2 = 0
    else if (eax_2.b u< 0xa0)
        if (eax_2.b u>= 0xfe)
            edx_2 = 0
        else
            edx_2 = zx.d(eax_2.b) << 8 | zx.d(arg3[5])
    else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
        edx_2 = 0
    else
        edx_2 = zx.d(eax_2.b) << 8 | zx.d(arg3[5])
    
    *arg6 = edx_2
    uint32_t* eax_4
    eax_4.b = arg3[6]
    uint32_t ecx_5
    
    if (eax_4.b u< 0x80)
        ecx_5 = 0
    else if (eax_4.b u< 0xa0)
        if (eax_4.b u>= 0xfe)
            ecx_5 = 0
        else
            ecx_5 = zx.d(eax_4.b) << 8 | zx.d(arg3[7])
    else if (eax_4.b u<= 0xdf || eax_4.b u>= 0xfe)
        ecx_5 = 0
    else
        ecx_5 = zx.d(eax_4.b) << 8 | zx.d(arg3[7])
    
    result = arg7
    *result = ecx_5
    
    if ((esi_3 == 0x8260 || esi_3 == 0x8261) && edx_2 u>= 0x824f && edx_2 u<= 0x8258
            && ecx_5 u>= 0x824f && ecx_5 u<= 0x8258)
        *arg8 = ecx_5 + edx_2 * 0xa - 0x59965
        result = arg9
        
        if (esi_3 == 0x8260)
            *arg10 = 1
            *result = 0
            return result
        
        *arg10 = 2
        *result = 1

return result

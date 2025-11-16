// 函数: sub_57a4a0
// 地址: 0x57a4a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg4
int32_t esi = arg6
int32_t edi = arg5
int32_t ecx_4

if (arg2 == 0)
    if (arg3 == 1)
        ebx -= 0xbf
        edi -= 0xbf
        esi -= 0xbf
    else if (arg3 != 2)
        ebx -= 0xff
        edi -= 0xff
        esi -= 0xff
    else
        ebx -= 0x131
        edi -= 0x131
        esi -= 0x131
    
    ecx_4 = arg7 * arg12 s/ 0xff
else
    if (arg3 == 1)
        ebx += 0x40
        edi += 0x40
        esi += 0x40
    else if (arg3 == 2)
        ebx -= 0x32
        edi -= 0x32
        esi -= 0x32
    
    ecx_4 = arg7 * arg12 s/ 0xff
    
    if (ebx s< 0)
        ebx = 0
    else if (ebx s> 0xff)
        ebx = 0xff
    
    if (edi s< 0)
        edi = 0
    else if (edi s> 0xff)
        edi = 0xff
    
    if (esi s< 0)
        esi = 0
    else if (esi s> 0xff)
        esi = 0xff
    
    if (ecx_4 s< 0)
        ecx_4 = 0
    else if (ecx_4 s> 0xff)
        ecx_4 = 0xff

*arg8 = ebx
*arg9 = edi
*arg10 = esi
*arg11 = ecx_4
return arg11

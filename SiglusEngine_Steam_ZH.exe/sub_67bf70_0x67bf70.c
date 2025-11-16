// 函数: sub_67bf70
// 地址: 0x67bf70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    int32_t edi_1 = arg6
    
    if (arg4 == edi_1 && arg5 == arg7)
        *arg3 = arg8
        arg3[1] = arg9
        return arg3
    
    int32_t ecx_1
    
    if (arg7 == 0)
        edi_1 -= 4
        ecx_1 = 0x1f
        arg6 = edi_1
    else
        ecx_1 = arg7 - 1
    
    int32_t* esi_1 = arg8
    arg7 = ecx_1
    int32_t edx_1
    
    if (arg9 == 0)
        esi_1 -= 4
        edx_1 = 0x1f
        arg8 = esi_1
    else
        edx_1 = arg9 - 1
    
    arg9 = edx_1
    char ecx_2 = edx_1.b
    
    if ((*edi_1 & 1 << ecx_1.b) == 0)
        *esi_1 &= not.d(1 << ecx_2)
    else
        *esi_1 |= 1 << ecx_2

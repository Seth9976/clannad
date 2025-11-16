// 函数: sub_466780
// 地址: 0x466780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
int32_t eax = arg2

if (eax s> 0 && (arg8 != 0 || arg9 != 0 || arg10 != 0 || arg11 != 0))
    int32_t esi_1 = arg4
    int32_t edi_1 = 0
    
    if (esi_1 s< 0)
        edi_1 = neg.d(esi_1)
        esi_1 = 0
    
    arg2.b = arg7
    int32_t eax_1 = 0
    int32_t ebx
    ebx.b = arg6
    
    while (true)
        if (*(arg3 + 4) == 0 || (arg3[0x12] == ebx.b && arg3[0x13] == arg2.b))
            eax_1.b = arg5
            break
        
        eax_1 += 1
        arg3 = &arg3[0x24]
        
        if (eax_1 s>= 8)
            return eax_1
        
        continue
    
    if (eax_1.b != 1)
        eax_1.b = eax_1.b != 2
        eax_1.b -= 1
        eax_1.b &= 3
        arg3[0x11] = eax_1.b
    else
        arg3[0x11] = 4
    
    *(arg3 + 4) = eax
    arg3[0x12] = ebx.b
    *(arg3 + 0xc) = edi_1
    *(arg3 + 8) = esi_1
    arg3[0x13] = arg2.b
    *arg3 = 1
    arg3[0x10] = 1
    *(arg3 + 0x14) = arg8
    *(arg3 + 0x18) = arg9
    *(arg3 + 0x1c) = arg10
    eax = arg11
    *(arg3 + 0x20) = eax

return eax

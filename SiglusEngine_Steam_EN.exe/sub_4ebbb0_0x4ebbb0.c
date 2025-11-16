// 函数: sub_4ebbb0
// 地址: 0x4ebbb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char eax = *arg1

if (eax u>= 0x80 && (eax u< 0xa0 || eax u> 0xdf) && eax u< 0xfe
        && (zx.d(eax) << 8 | zx.d(arg1[1])) == 0x8194)
    uint32_t eax_1
    eax_1.b = arg1[2]
    uint32_t ecx_5
    
    if (eax_1.b u< 0x80)
        ecx_5 = 0
    else if (eax_1.b u< 0xa0)
        if (eax_1.b u>= 0xfe)
            ecx_5 = 0
        else
            ecx_5 = zx.d(eax_1.b) << 8 | zx.d(arg1[3])
    else if (eax_1.b u<= 0xdf || eax_1.b u>= 0xfe)
        ecx_5 = 0
    else
        ecx_5 = zx.d(eax_1.b) << 8 | zx.d(arg1[3])
    
    eax_1.b = arg1[4]
    uint32_t edi_3
    
    if (eax_1.b u< 0x80)
        edi_3 = 0
    else if (eax_1.b u< 0xa0)
        if (eax_1.b u>= 0xfe)
            edi_3 = 0
        else
            edi_3 = zx.d(eax_1.b) << 8 | zx.d(arg1[5])
    else if (eax_1.b u<= 0xdf || eax_1.b u>= 0xfe)
        edi_3 = 0
    else
        edi_3 = zx.d(eax_1.b) << 8 | zx.d(arg1[5])
    
    eax_1.b = arg1[6]
    uint32_t esi_3
    
    if (eax_1.b u< 0x80)
        esi_3 = 0
    else if (eax_1.b u< 0xa0)
        if (eax_1.b u>= 0xfe)
            esi_3 = 0
        else
            esi_3 = zx.d(eax_1.b) << 8 | zx.d(arg1[7])
    else if (eax_1.b u<= 0xdf || eax_1.b u>= 0xfe)
        esi_3 = 0
    else
        esi_3 = zx.d(eax_1.b) << 8 | zx.d(arg1[7])
    
    if ((ecx_5 == 0x8260 || ecx_5 == 0x8261) && edi_3 - 0x824f u<= 9 && esi_3 - 0x824f u<= 9)
        return 1

return 0

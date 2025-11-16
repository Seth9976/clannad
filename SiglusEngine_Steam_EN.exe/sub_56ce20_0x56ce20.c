// 函数: sub_56ce20
// 地址: 0x56ce20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    sub_56ca60(arg1)
    return 0

if (arg2 == 5)
    uint32_t esi = zx.d(arg4.w)
    uint32_t edi_1 = arg4 u>> 0x10
    int32_t* eax_12 = sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(arg4, edi_1, esi, 0x1b8b580), edi_1, esi, 0x20d1720), 
                        edi_1, esi, 0x20d1758), 
                    edi_1, esi, 0x20d1790), 
                edi_1, esi, 0x20d18e0), 
            edi_1, esi, 0x20d1918), 
        edi_1, esi, 0x20d1950)
    sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(eax_12, edi_1, esi, 0x20d1988), edi_1, esi, 
                            0x20d17c8), 
                        edi_1, esi, 0x20d1800), 
                    edi_1, esi, 0x20d1838), 
                edi_1, esi, 0x20d1870), 
            edi_1, esi, 0x20d18a8), 
        edi_1, esi, 0x20cc9e8)
    return 0

if (arg2 == 0x4e)
    if (arg3.w == 0x4f32)
        int32_t eax_1 = *(arg4 + 8)
        
        if (eax_1 == 0xffffff9b)
            if ((*(arg4 + 0x14) & 2) != 0)
                sub_56ca20(*(arg4 + 0xc))
        else if (eax_1 != 0xfffffffd && eax_1 == 0xfffffffe)
            sub_56ca20(sub_4c1810(data_1af0a6c, 0x4f32))
    
    return 0

if (arg2 == 0x111)
    uint32_t eax_22 = zx.d(arg3.w)
    
    if (eax_22 s<= 0x501a)
        if (eax_22 == 0x501a)
            int32_t var_10_3 = arg3
            sub_4c15d0(data_1af0a6c)
            HWND ecx_26 = data_1af0ac4
            
            if (ecx_26 != 0)
                HWND var_10_4 = ecx_26
                sub_4c15d0(ecx_26)
        else if (eax_22 - 0x4ece u<= 0xd9)
            uint32_t eax_24 = zx.d(*(eax_22 + sub_568080+0x302))
            
            switch (eax_24)
                case 0
                    data_1318c28 = 0
                    sub_56ca10()
                    sub_56d620()
                    sub_56c920()
                case 1
                    data_1318c28 = 1
                    sub_56ca10()
                    sub_56d620()
                    sub_56c920()
                case 2
                    data_1318c28 = 2
                    sub_56ca10()
                    sub_56d620()
                    sub_56c920()
                case 3
                    data_1318c28 = 3
                    sub_56ca10()
                    sub_56d620()
                    sub_56c920()
                case 4
                    data_1318c28 = 4
                    sub_56ca10()
                    sub_56d620()
                    sub_56c920()
                case 5
                    if (arg3.w == 0x4ed3)
                        sub_4c10a0(eax_24, 0x4ed3, data_1af0a6c, &data_1318c30)
                    
                    if (data_1318c30 == 0)
                        sub_56d890()
                        return 0
                    
                    sub_56d860()
                case 6
                    sub_56c880(eax_24, arg2, 0, 1, 1)
                case 7
                    sub_56c880(eax_24, arg2, 1, 1, 1)
                case 8
                    sub_56c880(eax_24, arg2, 2, 1, 1)
                case 9
                    int32_t edx_15 = 0x4f4d
                    
                    if (arg3.w == 0x4f4d)
                        eax_24, edx_15 = sub_4c10a0(eax_24, 0x4f4d, data_1af0a6c, &data_1318c2c)
                    
                    sub_56c880(eax_24, edx_15, data_1318c24, 1, 1)
                case 0xa
                    if (arg3.w == 0x4fa1)
                        sub_4c10a0(eax_24, 0x4fa1, data_1af0a6c, &data_1318c34)
                case 0xb
                    HWND hWnd = data_1c054f0
                    
                    if (hWnd != 0)
                        SetFocus(hWnd)
                        return 0
                    
                    sub_56ca10()
                    sub_56d620()
                    HWND hWndParent = data_7027bc
                    data_20c259c = data_1318c28
                    DialogBoxParamA(data_134cebc, 0x131, hWndParent, sub_54ebd0, 0)
                    sub_56c920()
    
    return 0

int32_t var_10_1 = 0x17
int32_t eax
int32_t ecx
return sub_55a820(eax, arg2, ecx, arg3, arg4)

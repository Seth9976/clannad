// 函数: sub_556ff0
// 地址: 0x556ff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* eax_5
int32_t edx_1

if (arg2 u> 0x110)
    if (arg2 != 0x111)
        if (arg2 == 0x214)
            int32_t eax_22 = GetSystemMetrics(SM_CYMAXTRACK)
            int32_t eax_23 = GetSystemMetrics(SM_CXMAXTRACK)
            int32_t eax_27 = data_20c2e74 - data_20c2e6c
            sub_4c0c40(eax_27, arg4, arg3, eax_27, data_20c2e78 - data_20c2e70, eax_23, eax_22)
            return 1
        
        return 0
    
    if (zx.d(arg3.w) - 0x4f4f u> 0xd7)
        return 1
    
    uint32_t eax_32 = zx.d(*(zx.d(arg3.w) + sub_5522f0+0xdd))
    int32_t var_18_6
    
    switch (eax_32)
        case 0
            sub_556f10()
            return 1
        case 1
            if (data_20c2e7c == 0xffffffff)
                return 1
            
            WPARAM eax_34 = sub_4c1810(data_20c2e68, 0x4f33)
            int32_t ecx_18 = data_20c2e7c
            int32_t edx_17
            
            if (eax_34 != 0xffffffff)
                edx_17 = *(*(ecx_18 * 0x24 + &data_1b8c8a4) + (eax_34 << 2))
            else
                edx_17 = 1
            
            int32_t var_18_4 = ecx_18
            sub_4a5e00(ecx_18, edx_17)
            SetFocus(GetDlgItem(data_20c2e68, 0x4f33))
            return 1
        case 2
            var_18_6 = 0
        case 3
            var_18_6 = 1
        case 4
            sub_556710(1)
            goto label_557237
        case 5
            sub_4943b0()
        label_557237:
            sub_494860()
            sub_556840()
            eax_5, edx_1 = sub_5567b0(data_20c2e80, data_20c2e7c)
            sub_5562a0(eax_5, edx_1, data_20c2e68, data_20c2e8c, data_20c2e88)
            return 1
        case 6
            sub_556710(0)
            goto label_557237
        case 7
            return 1
    
    int32_t edx
    sub_556200(eax_32, edx, data_20c2e68, data_20c2e7c, var_18_6)
    return 1

if (arg2 == 0x110)
    data_20c2e68 = arg1
    sub_556b60()
    return 1

if (arg2 == 5)
    uint32_t edi_1 = arg4 u>> 0x10
    uint32_t esi_2 = zx.d(arg4.w)
    int32_t* eax_15 = sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(arg2, edi_1, esi_2, 0x20c2e90), edi_1, esi_2, 
                            0x20c2ec8), 
                        edi_1, esi_2, 0x20c2f00), 
                    edi_1, esi_2, 0x20c2f38), 
                edi_1, esi_2, 0x20c2f70), 
            edi_1, esi_2, 0x20c2fa8), 
        edi_1, esi_2, 0x20c2fe0)
    sub_4c0f50(sub_4c0f50(sub_4c0f50(eax_15, edi_1, esi_2, 0x20c3018), edi_1, esi_2, 0x20c3050), 
        edi_1, esi_2, 0x20c3088)
    SendDlgItemMessageA(data_20c2e68, 0xc350, 5, arg3, arg4)
    return 1

if (arg2 == 0x10)
    sub_556f10()
    return 1

if (arg2 != 0x4e)
    return 0

if (*(arg4 + 8) != 0xffffff9b)
    return 1

uint32_t eax_2 = zx.d(arg3.w)

if (eax_2 != 0x4f32)
    if (eax_2 != 0x4f33)
        return 1
    
    eax_5, edx_1 = sub_556670(*(arg4 + 0xc))
    sub_5562a0(eax_5, edx_1, data_20c2e68, data_20c2e8c, data_20c2e88)
    return 1

if ((*(arg4 + 0x14) & 2) != 0)
    LRESULT esi_1 = *(arg4 + 0xc)
    
    if (sub_4c1660() == 1)
        sub_5567b0(esi_1, *(data_20c2e88 + (esi_1 << 2)))

return 1

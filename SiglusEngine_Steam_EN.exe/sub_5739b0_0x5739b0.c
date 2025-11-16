// 函数: sub_5739b0
// 地址: 0x5739b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u<= 0x110)
    if (arg2 == 0x110)
        sub_5735b0(arg1)
        return 0
    
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(sub_4c0f50(arg4, edi_1, esi, 0x20f0114), edi_1, esi, 0x20f014c), 
                    edi_1, esi, 0x20f0184), 
                edi_1, esi, 0x20f01bc), 
            edi_1, esi, 0x20f01f4)
        sub_572e70()
        SendDlgItemMessageA(data_1af0a8c, 0xc350, 5, arg3, arg4)
        InvalidateRect(GetDlgItem(data_1af0a8c, 0xc350), nullptr, 0)
        return 0
    
    if (arg2 == 0x10)
        if (data_1af0a8c != 0)
            sub_5738f0()
            sub_559ef0(0x1f, 0)
            EndDialog(data_1af0a8c, 0)
            data_1af0a8c = 0
        
        return 1
    
    if (arg2 == 0x4e && arg3.w == 0x4fe3 && *(arg4 + 8) == 0xfffffdd9)
        LRESULT eax_3 = SendMessageA(GetDlgItem(data_1af0a8c, 0x4fe3), 0x130b, 0, 0)
        data_20f022c = eax_3
        int32_t edx_1 = eax_3 * 9
        
        if (eax_3 != 0)
            sub_572570(eax_3, (&data_20f02a0)[edx_1], eax_3, (&data_20f02a4)[edx_1], 
                (&data_20f02a8)[edx_1], (&data_20f02ac)[edx_1], (&data_20f02b0)[edx_1], 
                (&data_20f02b4)[edx_1], (&data_20f02b8)[edx_1], (&data_20f02bc)[edx_1], 0)
            return 0
        
        sub_573430(1)
else if (arg2 == 0x111)
    uint32_t eax_24 = zx.d(arg3.w)
    
    if (eax_24 s<= 0x4e53)
        if (eax_24 == 0x4e53)
            int32_t eax_37 = sub_4c1080(data_1af0a8c, 0x4e53)
            data_1b8c468 = eax_37
            
            if (eax_37 == 0)
                data_1af09ec = 0
                sub_573130()
                return 0
            
            sub_573430(1)
            sub_573130()
            return 0
        
        if (eax_24 - 0x276f u<= 0xa)
            switch (eax_24)
                case 0x276f
                    sub_573170(8, 1)
                case 0x2770
                    sub_573170(0xa, 1)
                case 0x2771
                    sub_573170(0xc, 1)
                case 0x2772
                    sub_573170(0xe, 1)
                case 0x2773
                    sub_573170(0x10, 1)
                case 0x2774
                    sub_573170(0x12, 1)
                case 0x2775
                    sub_573170(0x14, 1)
                case 0x2776
                    sub_573170(0x16, 1)
                case 0x2777
                    sub_573170(0x18, 1)
                case 0x2778
                    sub_5732f0(0)
                case 0x2779
                    sub_5732f0(1)
    else if (eax_24 == 0x4f31)
        data_13191a8 = sub_4c1080(data_1af0a8c, 0x4f31)
    else
        if (eax_24 == 0x4fd5)
            data_1af09ec = 0
            return 0
        
        if (eax_24 == 0x500f)
            int32_t eax_43 = sub_4c1080(data_1af0a8c, 0x500f)
            data_13191a4 = eax_43
            
            if (eax_43 != 0)
                data_1af09e4 = 1
                sub_573430(1)
else
    int32_t var_20
    
    if (arg2 == 0x214)
        int32_t esi_2 = data_1af0a8c
        int32_t eax_21
        int32_t edx_11
        eax_21, edx_11 = sub_4d7c70(sub_55a590(esi_2), esi_2, &data_20c3980, arg3, arg4)
        LPARAM var_14_4 = arg4
        WPARAM var_18_6 = arg3
        int32_t var_1c
        sub_4d7940(eax_21, edx_11, 0x20c399c, var_20, var_1c)
        return 0
    
    if (arg2 == 0x216)
        int32_t esi_1 = data_1af0a8c
        int32_t eax_17
        int32_t ecx_9
        eax_17, ecx_9 = sub_55a590(esi_1)
        LPARAM var_14_1 = arg4
        int32_t eax_18
        int32_t edx_9
        eax_18, edx_9 = sub_4d7bd0(eax_17, esi_1, &data_20c3980, ecx_9)
        LPARAM var_14_2 = arg4
        sub_4d7740(eax_18, edx_9, 0x20c399c, var_20)

return 0

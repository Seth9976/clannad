// 函数: sub_54a320
// 地址: 0x54a320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x105)
    if (arg2 == 0x110)
        data_20c17c4 = arg1
        sub_549b40()
        return 0
    
    if (arg2 != 0x111)
        if (arg2 != 0x214)
            return 0
        
        int32_t eax_19 = GetSystemMetrics(SM_CYMAXTRACK)
        int32_t eax_20 = GetSystemMetrics(SM_CXMAXTRACK)
        int32_t eax_24 = data_20c2020 - data_20c2018
        sub_4c0c40(eax_24, arg4, arg3, eax_24, data_20c2024 - data_20c201c, eax_20, eax_19)
        return 1
    
    uint32_t eax_27 = zx.d(arg3.w)
    
    if (eax_27 s> 0x4f4f)
        if (eax_27 == 0x4f68)
            data_20c200c = data_12dc5f0
            sub_54a150(0)
    else if (eax_27 == 0x4f4f)
        sub_54a150(0)
    else
        if (eax_27 == 2)
            sub_54a150(1)
            return 1
        
        if (eax_27 == 0x4e54)
            sub_54a150(eax_27 - 0x4e53)
else if (arg2 != 0x105)
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(arg2, edi_1, esi, 0x20c2028), edi_1, esi, 0x20c2060), 
                        edi_1, esi, 0x20c2098), 
                    edi_1, esi, 0x20c20d0), 
                edi_1, esi, 0x20c2108), 
            edi_1, esi, 0x20c2140)
        SendDlgItemMessageA(data_20c17c4, 0xc350, 5, arg3, arg4)
        InvalidateRect(GetDlgItem(data_20c17c4, 0xc350), nullptr, 0)
        sub_548c60()
        return 1
    
    if (arg2 == 0x10)
        sub_54a150(1)
        return 1
    
    if (arg2 != 0x4e)
        return 0
    
    if (arg3.w == 0x4f1b)
        int32_t eax_1 = arg4[2]
        
        if (eax_1 == 0xffffff9b)
            if ((arg4[5].b & 2) != 0)
                sub_549000(arg4[3])
        else if (eax_1 == 0xfffffffd)
            if (sub_4c1080(data_20c17c4, 0x4ef5) != 0)
                sub_549000(sub_4c1810(data_20c17c4, 0x4f1b))
                
                if (data_20c200c != 0xffffffff)
                    sub_54a150(0)
        else if (eax_1 == 0xfffffffe)
            sub_549000(sub_4c1810(data_20c17c4, 0x4f1b))
else if (arg3 == 0x1b)
    sub_54a150(1)

return 1

// 函数: sub_558080
// 地址: 0x558080
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x110)
    if (arg2 != 0x111)
        if (arg2 != 0x214)
            return 0
        
        int32_t eax_27 = GetSystemMetrics(SM_CYMAXTRACK)
        int32_t eax_28 = GetSystemMetrics(SM_CXMAXTRACK)
        int32_t eax_32 = data_20c30cc - data_20c30c4
        sub_4c0c40(eax_32, arg4, arg3.d, eax_32, data_20c30d0 - data_20c30c8, eax_28, eax_27)
        return 1
    
    if (arg3 == 0x4f4f)
        EndDialog(data_20c30c0, 0)
else
    if (arg2 == 0x110)
        data_20c30c0 = arg1
        sub_557510()
        return 1
    
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        int32_t* eax_7 = sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(
                            sub_4c0f50(sub_4c0f50(arg2, edi_1, esi, 0x20c30d4), edi_1, esi, 
                                0x20c310c), 
                            edi_1, esi, 0x20c3144), 
                        edi_1, esi, 0x20c317c), 
                    edi_1, esi, 0x20c31b4), 
                edi_1, esi, 0x20c31ec), 
            edi_1, esi, 0x20c3224)
        int32_t* eax_14 = sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(
                            sub_4c0f50(sub_4c0f50(eax_7, edi_1, esi, 0x20c325c), edi_1, esi, 
                                0x20c3294), 
                            edi_1, esi, 0x20c32cc), 
                        edi_1, esi, 0x20c3304), 
                    edi_1, esi, 0x20c333c), 
                edi_1, esi, 0x20c3374), 
            edi_1, esi, 0x20c33ac)
        int32_t* eax_21 = sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(
                            sub_4c0f50(sub_4c0f50(eax_14, edi_1, esi, 0x20c33e4), edi_1, esi, 
                                0x20c341c), 
                            edi_1, esi, 0x20c3454), 
                        edi_1, esi, 0x20c348c), 
                    edi_1, esi, 0x20c34c4), 
                edi_1, esi, 0x20c34fc), 
            edi_1, esi, 0x20c3534)
        sub_4c0f50(sub_4c0f50(eax_21, edi_1, esi, 0x20c356c), edi_1, esi, 0x20c35a4)
        SendDlgItemMessageA(data_20c30c0, 0xc350, 5, arg3.d, arg4)
        return 1
    
    if (arg2 != 0x10)
        return 0
    
    EndDialog(data_20c30c0, 0)

return 1

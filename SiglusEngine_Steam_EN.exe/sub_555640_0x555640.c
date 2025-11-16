// 函数: sub_555640
// 地址: 0x555640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x110)
    if (arg2 != 0x111)
        if (arg2 != 0x214)
            return 0
        
        int32_t eax_8 = GetSystemMetrics(SM_CYMAXTRACK)
        int32_t eax_9 = GetSystemMetrics(SM_CXMAXTRACK)
        int32_t eax_13 = data_20c2d34 - data_20c2d2c
        sub_4c0c40(eax_13, arg4, arg3.d, eax_13, data_20c2d38 - data_20c2d30, eax_9, eax_8)
        return 1
    
    if (arg3 == 0x4f4f)
        EndDialog(data_20c2d28, 0)
else
    if (arg2 == 0x110)
        data_20c2d28 = arg1
        sub_5554c0()
        return 1
    
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        sub_4c0f50(sub_4c0f50(sub_4c0f50(arg2, edi_1, esi, 0x20c2d74), edi_1, esi, 0x20c2d3c), 
            edi_1, esi, 0x20c2dac)
        SendDlgItemMessageA(data_20c2d28, 0xc350, 5, arg3.d, arg4)
        return 1
    
    if (arg2 != 0x10)
        if (arg2 == 0x4e)
            return 1
        
        return 0
    
    EndDialog(data_20c2d28, 0)

return 1

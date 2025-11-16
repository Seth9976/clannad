// 函数: sub_556010
// 地址: 0x556010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x110)
    if (arg2 != 0x111)
        if (arg2 != 0x214)
            return 0
        
        int32_t eax_6 = GetSystemMetrics(SM_CYMAXTRACK)
        int32_t eax_7 = GetSystemMetrics(SM_CXMAXTRACK)
        int32_t eax_11 = data_20c2df0 - data_20c2de8
        sub_4c0c40(eax_11, arg4, arg3.d, eax_11, data_20c2df4 - data_20c2dec, eax_7, eax_6)
        return 1
    
    if (arg3 == 0x4f4f)
        EndDialog(data_20c2de4, 0)
else
    if (arg2 == 0x110)
        data_20c2de4 = arg1
        sub_555e70()
        return 1
    
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        sub_4c0f50(sub_4c0f50(arg2, edi_1, esi, 0x20c2df8), edi_1, esi, 0x20c2e30)
        SendDlgItemMessageA(data_20c2de4, 0xc350, 5, arg3.d, arg4)
        return 1
    
    if (arg2 != 0x10)
        return 0
    
    EndDialog(data_20c2de4, 0)

return 1

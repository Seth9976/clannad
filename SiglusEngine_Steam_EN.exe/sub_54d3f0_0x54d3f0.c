// 函数: sub_54d3f0
// 地址: 0x54d3f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x110)
    if (arg2 != 0x111)
        if (arg2 != 0x214)
            return 0
        
        int32_t eax_7 = GetSystemMetrics(SM_CYMAXTRACK)
        int32_t eax_8 = GetSystemMetrics(SM_CXMAXTRACK)
        int32_t eax_12 = data_20c2248 - data_20c2240
        sub_4c0c40(eax_12, arg4, arg3.d, eax_12, data_20c224c - data_20c2244, eax_8, eax_7)
        return 1
    
    if (arg3 == 0x4f4f)
        EndDialog(data_20c223c, 0)
else
    if (arg2 == 0x110)
        data_20c223c = arg1
        sub_54d320()
        return 1
    
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        sub_4c0f50(sub_4c0f50(arg2, edi_1, esi, 0x20c2250), edi_1, esi, 0x20c2288)
        SendDlgItemMessageA(data_20c223c, 0xc350, 5, arg3.d, arg4)
        return 1
    
    if (arg2 != 0x10)
        if (arg2 == 0x4e)
            return 1
        
        return 0
    
    EndDialog(data_20c223c, 0)

return 1

// 函数: sub_5500b0
// 地址: 0x5500b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x111)
    uint32_t eax_16 = zx.d(arg3.w)
    
    if (eax_16 == 0x4e6d)
        sub_54faf0()
    else if (eax_16 == 0x4f15)
        EndDialog(data_20c2aa0, 0)
    
    return 1

if (arg2 == 0x214)
    int32_t eax_8 = GetSystemMetrics(SM_CYMAXTRACK)
    int32_t eax_9 = GetSystemMetrics(SM_CXMAXTRACK)
    int32_t eax_13 = data_20c2aac - data_20c2aa4
    sub_4c0c40(eax_13, arg4, arg3, eax_13, data_20c2ab0 - data_20c2aa8, eax_9, eax_8)
    return 1

if (arg2 == 0x110)
    data_20c2aa0 = arg1
    sub_54fee0()
    return 1

if (arg2 == 5)
    uint32_t esi = zx.d(arg4.w)
    uint32_t edi_1 = arg4 u>> 0x10
    sub_4c0f50(sub_4c0f50(sub_4c0f50(arg2, edi_1, esi, 0x20c2ab4), edi_1, esi, 0x20c2aec), edi_1, 
        esi, 0x20c2b24)
    SendDlgItemMessageA(data_20c2aa0, 0xc350, 5, arg3, arg4)
    return 1

if (arg2 == 0x10)
    EndDialog(data_20c2aa0, 0)
    return 1

return 0

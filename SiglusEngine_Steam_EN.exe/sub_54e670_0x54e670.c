// 函数: sub_54e670
// 地址: 0x54e670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x111)
    if (arg3 == 0x4f4f)
        sub_54e580()
    
    return 1

if (arg2 == 0x214)
    int32_t eax_10 = GetSystemMetrics(SM_CYMAXTRACK)
    int32_t eax_11 = GetSystemMetrics(SM_CXMAXTRACK)
    int32_t eax_15 = data_20c246c - data_20c2464
    sub_4c0c40(eax_15, arg4, arg3.d, eax_15, data_20c2470 - data_20c2468, eax_11, eax_10)
    return 1

if (arg2 == 0x110)
    data_1c054f8 = arg1
    sub_54e390()
    return 1

if (arg2 == 5)
    uint32_t esi = zx.d(arg4.w)
    uint32_t edi_1 = arg4 u>> 0x10
    sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(sub_4c0f50(sub_4c0f50(arg2, edi_1, esi, 0x20c2474), edi_1, esi, 0x20c24ac), 
                edi_1, esi, 0x20c24e4), 
            edi_1, esi, 0x20c251c), 
        edi_1, esi, 0x20c2554)
    SendDlgItemMessageA(data_1c054f8, 0xc350, 5, arg3.d, arg4)
    return 1

if (arg2 == 0x10)
    sub_54e580()
    return 1

return 0

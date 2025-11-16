// 函数: sub_572fa0
// 地址: 0x572fa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x115)
    POINT point
    
    if (arg2 == 0x201)
        GetCursorPos(&point)
        ScreenToClient(arg1, &point)
        sub_5728c0(data_20f023c, divs.dp.d(sx.q(point.y), data_20f0284) + data_20f0240)
    else
        if (arg2 == 0x203)
            GetCursorPos(&point)
            int32_t var_1c_4 = ScreenToClient(arg1, &point)
            sub_4a5e00(data_20f023c, divs.dp.d(sx.q(point.y), data_20f0284) + data_20f0240)
            return 0
        
        if (arg2 == 0x204)
            sub_5728c0(0xffffffff, 0xffffffff)
else if (arg2 == 0x115)
    if (arg4 == GetDlgItem(data_1c054fc, 0x4fe4))
        sub_572920(zx.d(arg3), 0)
else
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        sub_4c0f50(sub_4c0f50(sub_4c0f50(arg4, edi_1, esi, 0x20f0408), edi_1, esi, 0x20f2040), 
            edi_1, esi, 0x20f2078)
        sub_572860(0)
        return 0
    
    if (arg2 == 7)
        SetForegroundWindow(data_1af0a8c)
        return 0
    
    if (arg2 == 0x110)
        data_1c054fc = arg1
        sub_572f00()

return 0

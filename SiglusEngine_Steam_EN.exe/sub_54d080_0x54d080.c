// 函数: sub_54d080
// 地址: 0x54d080
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint

if (arg2 u> 0x111)
    if (arg2 != 0x114)
        sub_5f02dd(eax_1 ^ &paint)
        return 0
    
    if (arg4 != GetDlgItem(arg1, 0x4fae))
        if (arg4 != GetDlgItem(arg1, 0x4faf))
            if (arg4 != GetDlgItem(arg1, 0x4fb0))
                if (arg4 == GetDlgItem(arg1, 0x4fb1))
                    data_13132a0 = SendMessageA(GetDlgItem(arg1, 0x4fb1), 0x400, 0, 0)
                    sub_54c810()
            else
                data_131329c = SendMessageA(GetDlgItem(arg1, 0x4fb0), 0x400, 0, 0)
                sub_54c810()
        else
            data_1313298 = SendMessageA(GetDlgItem(arg1, 0x4faf), 0x400, 0, 0)
            sub_54c810()
    else
        data_1313294 = SendMessageA(GetDlgItem(arg1, 0x4fae), 0x400, 0, 0)
        sub_54c810()
else if (arg2 == 0x111)
    int16_t ecx_1 = arg3.w
    uint32_t eax_3 = zx.d(ecx_1)
    
    if (eax_3 == 0x4eae)
        if (ecx_1 == 0x4eae)
            data_13132a4 = sx.d(SendDlgItemMessageA(data_20c2220, 0x4eae, 0xf2, 0, 0)) & 1
        
        sub_54c810()
    else if (eax_3 == 0x4f28)
        HWND ecx_2 = data_20c2220
        data_1313294 = data_12a2964
        data_1313298 = data_12a2968
        data_131329c = data_12a296c
        data_13132a0 = data_12a2970
        int32_t eax_11 = data_12a2974
        data_13132a4 = eax_11
        sub_4c1050(eax_11, 0x4eae, ecx_2, eax_11)
        SendMessageA(GetDlgItem(data_20c2220, 0x4fae), 0x405, 1, data_1313294)
        SendMessageA(GetDlgItem(data_20c2220, 0x4faf), 0x405, 1, data_1313298)
        SendMessageA(GetDlgItem(data_20c2220, 0x4fb0), 0x405, 1, data_131329c)
        SendMessageA(GetDlgItem(data_20c2220, 0x4fb1), 0x405, 1, data_13132a0)
        sub_54c810()
    else if (eax_3 == 0x4f4f)
        sub_54d050()
else if (arg2 == 0xf)
    HWND hWnd = data_20c2220
    
    if (hWnd == arg1)
        BeginPaint(hWnd, &paint)
        EndPaint(data_20c2220, &paint)
        sub_54c810()
    else
        DefWindowProcA(arg1, 0xf, arg3, arg4)
else
    if (arg2 != 0x110)
        sub_5f02dd(eax_1 ^ &paint)
        return 0
    
    data_20c2220 = arg1
    sub_54ca50()

sub_5f02dd(eax_1 ^ &paint)
return 1

// 函数: sub_5465b0
// 地址: 0x5465b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x10)
label_546643:
    HWND hDlg_1 = data_20c1740
    data_20ae983 = 0
    EndDialog(hDlg_1, 0)
else
    if (arg2 == 0x110)
        data_20c1740 = arg1
        sub_546540()
        return 0
    
    if (arg2 == 0x111)
        uint32_t eax_5 = zx.d(arg3)
        
        if (eax_5 == 0x4e54)
            goto label_546643
        
        if (eax_5 == 0x4ef4)
            data_1b8be8f = (SendDlgItemMessageA(data_20c1740, 0x4ef4, 0xf2, 0, 0) ^ 0xff) & 1
            sub_545440()
            return 0
        
        if (eax_5 == 0x4f4f)
            HWND hDlg = data_20c1740
            data_20ae983 = 1
            EndDialog(hDlg, eax_5 - 0x4f4f)

return 0

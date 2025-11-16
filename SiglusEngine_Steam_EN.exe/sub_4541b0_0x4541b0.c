// 函数: sub_4541b0
// 地址: 0x4541b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_137172a == 0)
    return 

if (data_1af0a3c != 0)
    sub_559ef0(0xb, 0)
    EndDialog(data_1af0a3c, 0)
    data_1af0a3c = 0
else
    HWND eax_1 = CreateDialogParamA(data_134cebc, 0x13e, data_7027bc, sub_55fc90, 0)
    bool cond:0_1 = data_1313cd4 != 1
    data_1af0a3c = eax_1
    
    if (not(cond:0_1))
        sub_55af90()
        HWND hWnd = data_7027bc
        data_1313cd4 = 0
        SetFocus(hWnd)
        return 

SetFocus(data_7027bc)

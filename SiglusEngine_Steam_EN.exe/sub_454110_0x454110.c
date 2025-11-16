// 函数: sub_454110
// 地址: 0x454110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1371706 == 0)
    return 

if (data_1af0a78 != 0)
    sub_564ad0()
    sub_559ef0(0x1a, 0)
    EndDialog(data_1af0a78, 0)
    data_1af0a78 = 0
else
    HWND eax_1 = CreateDialogParamA(data_134cebc, 0x140, data_7027bc, sub_564b00, 0)
    bool cond:0_1 = data_1313cd4 != 1
    data_1af0a78 = eax_1
    
    if (not(cond:0_1))
        sub_55af90()
        HWND hWnd = data_7027bc
        data_1313cd4 = 0
        SetFocus(hWnd)
        return 

SetFocus(data_7027bc)

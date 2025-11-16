// 函数: sub_573330
// 地址: 0x573330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
LPARAM eax = data_1af0a8c

if (eax == 0)
    HWND eax_1 = CreateDialogParamA(data_134cebc, 0x145, data_7027bc, sub_5739b0, eax)
    bool cond:0_1 = data_1313cd4 != 1
    data_1af0a8c = eax_1
    
    if (not(cond:0_1))
        sub_55af90()
        data_1313cd4 = 0
    
    SetFocus(data_7027bc)
    eax = data_1af0a8c

PSTR lpString

if ((SendDlgItemMessageA(eax, 0x4e53, 0xf2, 0, 0) & 1) != 0)
    SendDlgItemMessageA(data_1af0a8c, 0x4e53, 0xf1, 0, 0)
    data_1b8c468 = 0
    data_1af09ec = 0
    lpString = 0x6240b8
else
    SendDlgItemMessageA(data_1af0a8c, 0x4e53, 0xf1, 1, 0)
    data_1b8c468 = 1
    sub_573430(1)
    
    if (data_1b8c468 == 0)
        lpString = 0x6240b8
    else
        lpString = 0x6240a8

return SetDlgItemTextA(data_1af0a8c, 0x4e53, lpString)

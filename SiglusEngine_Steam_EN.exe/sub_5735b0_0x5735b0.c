// 函数: sub_5735b0
// 地址: 0x5735b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t eax_1 = sub_55a6a0(eax, arg1, 0x1f, 0x6240c8)
HWND ebx = data_1af0a8c

if (sub_4c3da0(eax_1, 0xffffffff, &data_131331c, 0xffffffff) != 2)
    LPARAM eax_3 = data_1c054f8
    
    if (eax_3 != 0)
        SetForegroundWindow(eax_3)
    else
        DialogBoxParamA(data_134cebc, 0x132, data_7027bc, sub_54e670, eax_3)
        data_1c054f8 = 0

data_20f0230 = 0xffffffff
data_20f0234 = 0xffffffff
data_1b8c468 = 0
data_1af09ec = 0
data_20f0288 = 0
data_20f0294 = 0
data_20f0298 = 0
data_20f027c = 0
void* eax_4 = sub_571380()

if (data_1315fb8 != 0)
    data_13191a4 = 0
    data_13191a8 = 0
    data_13191ac = 0xc
    data_13191b0 = 0

sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_4, 0x4fe3, ebx, 0x20f0114, 2, 2), 0x4e53, ebx, 0x20f014c, 2, 
                0), 
            0x500f, ebx, 0x20f0184, 2, 0), 
        0x4f31, ebx, 0x20f01bc, 2, 0), 
    0x4fd5, ebx, 0x20f01f4, 2, 1)
int32_t esi = data_13191b0
HMENU eax_9 = GetMenu(data_1af0a8c)
sub_4cc060(sub_4cc060(eax_9, 0x2778, eax_9, nullptr, 0, esi), 0x2779, eax_9, nullptr, 1, esi)
sub_573170(data_13191ac, 0)
int32_t dwNewLong = GetWindowLongA(GetDlgItem(ebx, 0x4fe3), 0xfffffff0) | 0x2000000
SetWindowLongA(GetDlgItem(ebx, 0x4fe3), 0xfffffff0, dwNewLong)
int32_t lParam = 1
WPARAM wParam_2 = 0
char const* const var_18 = "????"

do
    SendMessageA(GetDlgItem(ebx, 0x4fe3), 0x1307, wParam_2, &lParam)
    wParam_2 += 1
while (wParam_2 s< 0xa)

sub_570cb0()
data_20f022c = 0
CreateStatusWindowA(0x54020103, &data_6138e3, ebx, 0xc350)
SendMessageA(GetDlgItem(ebx, 0xc350), 0x401, 0x100, &data_6138e3)
WPARAM wParam

if (data_13191a4 == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(ebx, 0x500f, 0xf1, wParam, 0)
WPARAM wParam_1

if (data_13191a8 == 0)
    wParam_1 = 0
else
    wParam_1 = 1

SendDlgItemMessageA(ebx, 0x4f31, 0xf1, wParam_1, 0)
PSTR lpString

if (data_1b8c468 == 0)
    lpString = 0x6240b8
else
    lpString = 0x6240a8

SetDlgItemTextA(data_1af0a8c, 0x4e53, lpString)
HWND hWnd = data_1af0a8c

if (data_1315fb8 == 0)
    UpdateWindow(hWnd)
    SetWindowPos(hWnd, 0xfffffffe, data_1315fc0, data_1315fc4, data_1315fc8, data_1315fcc, 
        SWP_SHOWWINDOW)

sub_572d90()
HWND hWndParent = GetDlgItem(ebx, 0x4fe3)
HWND result = CreateDialogParamA(data_134cebc, 0x146, hWndParent, sub_572fa0, 0)
data_1c054fc = result
return result

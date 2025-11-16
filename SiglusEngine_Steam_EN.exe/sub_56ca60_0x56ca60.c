// 函数: sub_56ca60
// 地址: 0x56ca60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t eax_1 = sub_55a6a0(eax, arg1, 0x17, 0x623be0)
HWND hDlg = data_1af0a6c
int32_t eax_6 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_1, 0x4f35, hDlg, 0x20d1720, 1, 1), 0x4f36, hDlg, 0x20d1758, 
                1, 1), 
            0x4f37, hDlg, 0x20d1790, 1, 1), 
        0x4f4d, hDlg, 0x20d18e0, 1, 1), 
    0x4ed3, hDlg, 0x20d1918, 1, 1)
int32_t eax_11 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_6, 0x4fa1, hDlg, 0x20d1950, 1, 1), 0x501a, hDlg, 0x20d1988, 
                1, 1), 
            0x4ece, hDlg, 0x20d17c8, 1, 0), 
        0x4ecf, hDlg, 0x20d1800, 1, 0), 
    0x4ed0, hDlg, 0x20d1838, 1, 0)
sub_4c0df0(
    sub_4c0df0(sub_4c0df0(eax_11, 0x4ed1, hDlg, 0x20d1870, 1, 0), 0x4ed2, hDlg, 0x20d18a8, 1, 0), 
    0x4fa7, hDlg, 0x20cc9e8, 1, 0)
HWND hWnd_1 = data_1af0a6c

if (data_13156b8 == 0)
    UpdateWindow(hWnd_1)
    SetWindowPos(hWnd_1, 0xfffffffe, data_13156c0, data_13156c4, data_13156c8, data_13156cc, 
        SWP_SHOWWINDOW)

HWND hWnd = GetDlgItem(hDlg, 0x4f32)
SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21)
bool cond:0 = data_13156b8 == 0
data_20d19c0 = data_7031bc
int32_t edx_1

if (cond:0)
    edx_1 = data_1318c28
else
    edx_1 = 0
    int32_t ecx_13
    int32_t edi
    edi, ecx_13 = __memfill_u32(&data_1318524, 1, 0x140)
    data_1318c24 = 1
    data_1318c28 = 0
    data_1318c2c = 0
    data_1318c30 = 0
    data_1318c34 = 1

int32_t eax_17 = data_13156d0
WPARAM eax_18 = data_13156d4
data_20d19c8 = 0
data_20db9d0 = 0
int32_t eax_19 = sub_4d1be0(eax_18, (edx_1 << 8) + &data_1318524, &data_20cf620, 0x100)

if (eax_19 != 0)
    sub_4d1c30(eax_19, (data_1318c28 << 8) + &data_1318524, &data_20cf620, 0x100)

int32_t ecx_15 = sub_56c1e0(eax_19, &data_13156b8, hDlg, &data_1318a24)

if (data_1af0a6c != 0)
    sub_56c5d0()
    ecx_15 = sub_56c610()

bool cond:1 = data_13156b8 != 0
data_13156d0 = eax_17
data_13156d4 = eax_18

if (not(cond:1))
    int32_t var_1c_3 = ecx_15
    sub_4c1470(eax_17, eax_18, eax_17, hDlg, 0x4f32)

int32_t nIDDlgItem = *((data_1318c24 << 2) + &data_612cc0)
data_13156b8 = 0
SendMessageA(GetDlgItem(hDlg, nIDDlgItem), 0xf1, 1, 0)
SendMessageA(GetDlgItem(hDlg, *((data_1318c28 << 2) + &data_612968)), 0xf1, 1, 0)
WPARAM wParam

if (data_1318c2c == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(hDlg, 0x4f4d, 0xf1, wParam, 0)
WPARAM wParam_1

if (data_1318c30 == 0)
    wParam_1 = 0
else
    wParam_1 = 1

SendDlgItemMessageA(hDlg, 0x4ed3, 0xf1, wParam_1, 0)
WPARAM wParam_2

if (data_1318c34 == 0)
    wParam_2 = 0
else
    wParam_2 = 1

LRESULT result = SendDlgItemMessageA(hDlg, 0x4fa1, 0xf1, wParam_2, 0)

if (data_1318c30 != 0 && data_1af0ac4 == 0)
    result = CreateDialogParamA(data_134cebc, 0x142, data_7027bc, sub_56d7a0, 0)
    data_1af0ac4 = result

return result

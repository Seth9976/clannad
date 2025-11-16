// 函数: sub_564510
// 地址: 0x564510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
sub_55a6a0(eax, arg1, 0x1a, 0x6228f8)
int32_t eax_2 = data_7030dc * data_70300c
HWND hDlg_2 = data_1af0a78
data_20cc8cc = 0
int32_t eax_3 = eax_2 << 2
data_20cc8d0 = 0
char ecx = sub_4d6960(eax_3, &data_20cc8d0, &data_20cc8cc, eax_3, "AVG_GRP_STATUS_TMP2")
int32_t eax_10

for (int32_t i = 0; i s<= 8; i += 1)
    int32_t var_18_1 = 0
    int32_t var_1c_1 = 0xff
    int32_t var_20_1 = 0
    int32_t var_24_1 = 0
    int32_t edx_1 = data_70300c
    int32_t var_64
    __builtin_memset(&var_64, 0, 0x20)
    void* ecx_1 = data_7030dc
    int32_t eax_6 = edx_1 - 1 + i
    char ecx_3 = sub_591560(eax_6, edx_1, data_20cc8d0, ecx_1, i.b, 0, eax_6.b, ecx_1 - 1, 0xff, 0, 
        0, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, ecx)
    int32_t edx_2 = data_70300c
    int32_t var_18_2 = 0
    int32_t var_1c_2 = 0xff
    int32_t var_20_2 = 0
    int32_t var_24_2 = 0
    int32_t var_64_1
    __builtin_memset(&var_64_1, 0, 0x20)
    void* ecx_4 = data_7030dc
    eax_10, ecx = sub_591560(ecx_4 - 1, edx_2, data_20cc8d0, ecx_4, i.b, (ecx_4 - 1).b, 
        edx_2.b - 1 + i.b, 0, 0xff, 0, 0, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, ecx_3)

__builtin_memset(&data_20cc8e0, 0, 0x40)
int32_t eax_15 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_10, 0x4f6e, hDlg_2, 0x20ca9f8, 1, 1), 0x4f73, hDlg_2, 
                0x20cb634, 1, 1), 
            0x4f78, hDlg_2, 0x20cc274, 1, 1), 
        0x4f7d, hDlg_2, 0x20cc2ac, 1, 1), 
    0x4f6f, hDlg_2, 0x20cc2e4, 1, 1)
int32_t eax_20 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_15, 0x4f70, hDlg_2, 0x20cc31c, 1, 1), 0x4f71, hDlg_2, 
                0x20cc354, 1, 1), 
            0x4f72, hDlg_2, 0x20cc38c, 1, 1), 
        0x4f74, hDlg_2, 0x20cc3c4, 1, 1), 
    0x4f75, hDlg_2, 0x20cc3fc, 1, 1)
int32_t eax_25 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_20, 0x4f76, hDlg_2, 0x20cc434, 1, 1), 0x4f77, hDlg_2, 
                0x20cc46c, 1, 1), 
            0x4f79, hDlg_2, 0x20cc4a4, 1, 1), 
        0x4f7a, hDlg_2, 0x20cc4dc, 1, 1), 
    0x4f7b, hDlg_2, 0x20cc514, 1, 1)
int32_t eax_30 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_25, 0x4f7c, hDlg_2, 0x20cc54c, 1, 1), 0x4f7e, hDlg_2, 
                0x20cc584, 1, 1), 
            0x4f7f, hDlg_2, 0x20cc5bc, 1, 1), 
        0x4f80, hDlg_2, 0x20cc5f4, 1, 1), 
    0x4f81, hDlg_2, 0x20cc62c, 1, 1)
int32_t eax_35 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_30, 0x4ef1, hDlg_2, 0x20cc664, 1, 1), 0x4ef2, hDlg_2, 
                0x20cc69c, 1, 1), 
            0x4ef3, hDlg_2, 0x20cc6d4, 1, 1), 
        0x4f87, hDlg_2, 0x20cc70c, 1, 1), 
    0x4f88, hDlg_2, 0x20cc744, 1, 1)
int32_t eax_40 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(sub_4c0df0(eax_35, 0x4f89, hDlg_2, 0x20cc77c, 1, 1), 0x4f25, hDlg_2, 
                0x20cc7b4, 1, 6), 
            0x502c, hDlg_2, 0x20cc7ec, 1, 7), 
        0x4eee, hDlg_2, 0x20cc824, 1, 2), 
    0x4f86, hDlg_2, 0x20cc85c, 1, 1)
sub_4c0df0(eax_40, 0x5034, hDlg_2, 0x20cc894, 1, 1)
int32_t ecx_37

if (data_1315a18 == 0)
    ecx_37 = data_1318518
else
    ecx_37 = 0
    data_1318518 = 0
    data_131851c = 0
    data_1318520 = 0

sub_564300(ecx_37, 0)
SendMessageA(GetDlgItem(hDlg_2, *((data_1318518 << 2) + &data_612a50)), 0xf1, 1, 0)
SendMessageA(GetDlgItem(hDlg_2, *((data_131851c << 2) + &data_612a44)), 0xf1, 1, 0)
SendMessageA(GetDlgItem(hDlg_2, *((data_1318520 << 2) + &data_612a38)), 0xf1, 1, 0)
EnableWindow(GetDlgItem(data_1af0a78, 0x4ef1), 0)
EnableWindow(GetDlgItem(data_1af0a78, 0x4ef2), 0)
EnableWindow(GetDlgItem(data_1af0a78, 0x4ef3), 0)
bool cond:0 = data_20cc934 == 0
data_20cc930 = 0

if (not(cond:0))
    HWND hDlg = data_1af0a78
    data_20cc934 = 0
    ShowWindow(GetDlgItem(hDlg, 0x4f25), SW_HIDE)

if (data_20cc938 != 0)
    HWND hDlg_1 = data_1af0a78
    data_20cc938 = 0
    ShowWindow(GetDlgItem(hDlg_1, 0x502c), SW_HIDE)

data_20cc9ac = GetWindowLongA(GetDlgItem(hDlg_2, 0x4eee), 0xfffffffc)
int32_t result = SetWindowLongA(GetDlgItem(hDlg_2, 0x4eee), 0xfffffffc, sub_564250)
HWND hWnd = data_1af0a78

if (data_1315a18 != 0)
    return result

UpdateWindow(hWnd)
return SetWindowPos(hWnd, 0xfffffffe, data_1315a20, data_1315a24, data_1315a28, data_1315a2c, 
    SWP_SHOWWINDOW)

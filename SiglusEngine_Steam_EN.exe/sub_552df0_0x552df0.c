// 函数: sub_552df0
// 地址: 0x552df0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_63ecb0 << 2
data_20c2cac = 0
data_20c2ca8 = 0
sub_4d6960(eax_1, &data_20c2cac, &data_20c2ca8, eax_1, "FDS_A")
int32_t eax_3 = data_63ecb4 << 2
data_20c2cb4 = 0
data_20c2cb0 = 0
sub_4d6960(eax_3, &data_20c2cb4, &data_20c2cb0, eax_3, "FDS_B")
int32_t eax_5 = data_63ecb8 << 2
data_20c2cbc = 0
data_20c2cb8 = 0
sub_4d6960(eax_5, &data_20c2cbc, &data_20c2cb8, eax_5, "FDS_C")
int32_t eax_7 = data_63ecbc << 2
data_20c2cc4 = 0
data_20c2cc0 = 0
sub_4d6960(eax_7, &data_20c2cc4, &data_20c2cc0, eax_7, "FDS_D")
int32_t eax_9 = data_63ecc0 << 2
data_20c2ccc = 0
data_20c2cc8 = 0
sub_4d6960(eax_9, &data_20c2ccc, &data_20c2cc8, eax_9, "FDS_E")
int32_t eax_11 = data_63ecc4 << 2
data_20c2cd4 = 0
data_20c2cd0 = 0
sub_4d6960(eax_11, &data_20c2cd4, &data_20c2cd0, eax_11, "FDS_F")
int32_t eax_13 = data_63ecc8 << 2
data_20c2cdc = 0
data_20c2cd8 = 0
sub_4d6960(eax_13, &data_20c2cdc, &data_20c2cd8, eax_13, "FDS_G")
int32_t eax_15 = data_63ed14 << 2
data_20c2cfc = 0
data_20c2cf8 = 0
sub_4d6960(eax_15, &data_20c2cfc, &data_20c2cf8, eax_15, "FDS_Z")
int32_t eax_16 = data_63eccc
data_20c2ce4 = 0
data_20c2ce0 = 0

if (eax_16 s> 0)
    int32_t eax_17 = eax_16 << 2
    sub_4d6960(eax_17, &data_20c2ce4, &data_20c2ce0, eax_17, "FDS_H")

int32_t eax_18 = data_63ecd0
data_20c2cec = 0
data_20c2ce8 = 0

if (eax_18 s> 0)
    int32_t eax_19 = eax_18 << 2
    sub_4d6960(eax_19, &data_20c2cec, &data_20c2ce8, eax_19, "FDS_I")

int32_t eax_20 = data_63ecd4
data_20c2cf4 = 0
data_20c2cf0 = 0

if (eax_20 s> 0)
    int32_t eax_21 = eax_20 << 2
    sub_4d6960(eax_21, &data_20c2cf4, &data_20c2cf0, eax_21, "FDS_J")

int32_t eax_23 = data_63ece0 << 3
data_20c2d04 = 0
data_20c2d00 = 0
sub_4d6960(eax_23, &data_20c2d04, &data_20c2d00, eax_23, "FDS_M")
int32_t eax_25 = data_63ecf8 << 3
data_20c2d0c = 0
data_20c2d08 = 0
BOOL eax_26 = sub_4d6960(eax_25, &data_20c2d0c, &data_20c2d08, eax_25, "FDS_S")
data_20c2d14 = 0
data_20c2d10 = 0
BOOL eax_27 = sub_4d6960(eax_26, &data_20c2d14, &data_20c2d10, 0x15f0, "FDS_NAMAE")
data_20c2d1c = 0
data_20c2d18 = 0
sub_4d6960(eax_27, &data_20c2d1c, &data_20c2d18, 0x15f0, "FDS_LNAMAE")
sub_5528f0()
GetWindowRect(data_20c2b5c, &data_20c2b60)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c2b5c, 0xc350)
SendMessageA(GetDlgItem(data_20c2b5c, 0xc350), 0x401, 0x100, &data_6138e3)
HWND hWnd = GetDlgItem(data_20c2b5c, 0x4f34)
int32_t lParam_1 = 7
int32_t var_2c = 0
int32_t var_28 = 0x5a
char const* const var_24 = "Flag"
SendMessageA(hWnd, 0x101b, 0, &lParam_1)
HWND hWnd_1 = GetDlgItem(data_20c2b5c, 0x4f34)
int32_t lParam = 7
int32_t var_58 = 0
int32_t var_54 = 0x64
char const* const var_50 = "Status"
SendMessageA(hWnd_1, 0x101b, 1, &lParam)
HWND hWnd_2 = GetDlgItem(data_20c2b5c, 0x4f34)
lParam_1 = 7
int32_t var_2c_1 = 0
int32_t var_28_1 = 0xc8
char const* const var_24_1 = "Comment"
SendMessageA(hWnd_2, 0x101b, 2, &lParam_1)
HWND hWnd_3 = GetDlgItem(data_20c2b5c, 0x4f34)
int32_t eax_34 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(hWnd_3, 0x1036, 0, SendMessageA(hWnd_3, 0x1037, 0, 0) | 0x20), 
            0x4f4f, data_20c2b5c, 0x20c2b84, 1, 0), 
        0x5019, data_20c2b5c, 0x20c2bbc, 1, 0), 
    0x4f32, data_20c2b5c, 0x20c2bf4, 1, 4)
sub_4c0df0(sub_4c0df0(eax_34, 0x4f33, data_20c2b5c, 0x20c2c2c, 1, 4), 0x4f34, data_20c2b5c, 
    0x20c2c64, 1, 2)
data_20c2b70 = 0xffffffff
data_20c2b74 = 0xffffffff
data_20c2b78 = 0xffffffff
data_20c2b7c = 0xffffffff
data_20c2b80 = 0
data_20c2c9c = 0
data_20c2ca0 = 0
data_20c2ca4 = 0
sub_5517e0()
SendMessageA(GetDlgItem(data_20c2b5c, 0x4f33), 0x184, 0, 0)
data_20c2b74 = 0
data_20c2b70 = 0xfffffffe
sub_5522f0(0)
int32_t eax_38 = GetWindowLongA(GetDlgItem(data_20c2b5c, 0x4f34), 0xfffffffc)
HWND hDlg = data_20c2b5c
data_20c2d20 = eax_38
SetWindowLongA(GetDlgItem(hDlg, 0x4f34), 0xfffffffc, sub_552d80)
int32_t eax_41 = GetWindowLongA(GetDlgItem(data_20c2b5c, 0x4ef6), 0xfffffffc)
HWND hDlg_1 = data_20c2b5c
data_20c2d24 = eax_41
SetWindowLongA(GetDlgItem(hDlg_1, 0x4ef6), 0xfffffffc, sub_552dc0)
int32_t ecx_5 = WINNLSEnableIME(nullptr, 1)

if (data_13191b4 != 0)
    int32_t var_68_6 = ecx_5
    return sub_4d5720(data_20c2b5c)

HWND hWnd_6 = data_20c2b5c
UpdateWindow(hWnd_6)
SetWindowPos(hWnd_6, 0xfffffffe, data_13191b8, data_13191bc, data_13191c0, data_13191c4, 
    SWP_SHOWWINDOW)
int32_t ecx_6 = data_13191cc

if (ecx_6 != 0xffffffff)
    sub_551880(ecx_6)
    sub_5522f0(0)

int32_t ecx_7 = data_13191d4

if (ecx_7 != 0xffffffff)
    sub_5522f0(ecx_7)

HWND hWnd_4 = GetDlgItem(data_20c2b5c, 0x4f32)
SendMessageA(hWnd_4, 0x197, data_13191c8, 0)
SendMessageA(hWnd_4, 0x186, data_13191cc, 0)
HWND hWnd_5 = GetDlgItem(data_20c2b5c, 0x4f33)
SendMessageA(hWnd_5, 0x197, data_13191d0, 0)
SendMessageA(hWnd_5, 0x186, data_13191d4, 0)
HWND hDlg_2 = data_20c2b5c
HWND eax_43
int32_t ecx_8
eax_43, ecx_8 = GetDlgItem(hDlg_2, 0x4f34)
int32_t var_68_5 = ecx_8
return sub_4c1470(eax_43, data_13191dc, data_13191d8, hDlg_2, 0x4f34)

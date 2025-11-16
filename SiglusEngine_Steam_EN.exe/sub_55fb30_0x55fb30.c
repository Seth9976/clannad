// 函数: sub_55fb30
// 地址: 0x55fb30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t eax_1 = sub_55a6a0(eax, arg1, 0xb, 0x621e30)
HWND hDlg = data_1af0a3c
sub_4c0df0(eax_1, 0x4eeb, hDlg, 0x20c54c8, 1, 0)
HWND esi = data_1af0a3c
HWND var_48 = esi

if (data_1314938 == 0)
    UpdateWindow(esi)
    SetWindowPos(esi, 0xfffffffe, data_1314940, data_1314944, data_1314948, data_131494c, 
        SWP_SHOWWINDOW)
    esi = data_1af0a3c
    var_48 = esi

HWND eax_2
int32_t ecx_1
eax_2, ecx_1 = GetDlgItem(esi, 0x4f32)

if (eax_2 != 0)
    HWND hWnd = GetDlgItem(esi, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x20), 0x4f32, 
        var_48, data_1314938, &data_1314938, 3, &data_63fd04, 0x63fcd4)

for (int32_t i = 0; i s< 0x100; i += 1)
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    int32_t i_1 = i
    int32_t var_3c_1 = 0
    void* const var_30_1 = &data_6138e3
    int32_t i_2 = i
    SendMessageA(hWnd_1, 0x1007, 0, &lParam)

return sub_4c1300(sub_55f650(), hDlg, 0xff, 0x4f32, 0)

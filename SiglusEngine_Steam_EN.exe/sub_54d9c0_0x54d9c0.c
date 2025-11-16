// 函数: sub_54d9c0
// 地址: 0x54d9c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

GetWindowRect(data_20c22c0, &data_20c22c4)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c22c0, 0xc350)
SendMessageA(GetDlgItem(data_20c22c0, 0xc350), 0x401, 0x100, &data_6138e3)
int32_t eax_2 = data_1321eb8 << 2
data_20c245c = 0
data_20c2460 = 0
sub_54d690(sub_4d6960(eax_2, &data_20c2460, &data_20c245c, eax_2, "CGTABLE_STATUS_Z_FLAG"))
void** eax_3 = &data_63ec88

if (data_12dc4bc == 0)
    eax_3 = &data_63eeb8

WPARAM wParam = 0
void** var_38 = eax_3

do
    int32_t esi_1 = *((wParam << 2) + &data_6123e0)
    void* edi_1 = *eax_3
    HWND hWnd = GetDlgItem(data_20c22c0, 0x4f32)
    void* var_28_1 = edi_1
    int32_t lParam = 7
    int32_t var_30_1 = 0
    int32_t var_2c_1 = esi_1
    SendMessageA(hWnd, 0x101b, wParam, &lParam)
    wParam += 1
    eax_3 = &var_38[1]
    var_38 = eax_3
while (wParam s< 9)

HWND hWnd_1 = GetDlgItem(data_20c22c0, 0x4f32)
SendMessageA(hWnd_1, 0x1036, 0, SendMessageA(hWnd_1, 0x1037, 0, 0) | 0x21)
int32_t eax_11 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(sub_54d820(), 0x4f4f, data_20c22c0, 0x20c22d4, 1, 0), 0x5019, 
            data_20c22c0, 0x20c230c, 1, 0), 
        0x4f50, data_20c22c0, 0x20c2344, 1, 1), 
    0x4f51, data_20c22c0, 0x20c237c, 1, 1)
int32_t ecx_8 = sub_4c0df0(
    sub_4c0df0(sub_4c0df0(eax_11, 0x4f52, data_20c22c0, 0x20c23b4, 1, 1), 0x4fa6, data_20c22c0, 
        0x20c23ec, 1, 1), 
    0x4f32, data_20c22c0, 0x20c2424, 1, 2)

if (data_1319204 != 0)
    int32_t var_4c_5 = ecx_8
    return sub_4d5720(data_20c22c0)

HWND hWnd_2 = data_20c22c0
UpdateWindow(hWnd_2)
SetWindowPos(hWnd_2, 0xfffffffe, data_1319208, data_131920c, data_1319210, data_1319214, 
    SWP_SHOWWINDOW)
HWND hDlg = data_20c22c0
HWND eax_14
int32_t ecx_9
eax_14, ecx_9 = GetDlgItem(hDlg, 0x4f32)
int32_t var_4c_4 = ecx_9
return sub_4c1470(eax_14, data_131921c, data_1319218, hDlg, 0x4f32)

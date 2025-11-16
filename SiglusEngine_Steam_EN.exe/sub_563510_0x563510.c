// 函数: sub_563510
// 地址: 0x563510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fc0 == 0 || data_1af0a78 == 0 || data_20cc980 == 0 || data_20ca9f4 s< 0x3e8)
    return 

bool cond:1_1 = (0x8000 & GetAsyncKeyState(1)) == 0
int32_t eax_2 = data_20cc980

if (cond:1_1)
    eax_2 = 0

int32_t ebx_1 = 0
data_20cc980 = eax_2
POINT point
GetCursorPos(&point)
BOOL eax

if (data_20cc934 != 0)
    int32_t eax_5 = (data_20cc9a4 - point.x) * 2
    int32_t edx_2 = data_20cc984 + eax_5
    int32_t ecx_2 = data_20cc994 - data_20cc99c
    data_20cc98c = eax_5
    
    if (edx_2 s> ecx_2)
        eax_5 += ecx_2 - edx_2
        data_20cc98c = eax_5
    else if (edx_2 s< 0)
        eax_5 -= edx_2
        data_20cc98c = eax_5
    
    HWND hDlg = data_1af0a78
    data_20cc8d4 = eax_5 + data_20cc984
    eax = SendMessageA(GetDlgItem(hDlg, 0x4f25), 0xe1, 0, 0)
    WPARAM wParam = data_20cc8d4
    
    if (eax != wParam)
        SendMessageA(GetDlgItem(data_1af0a78, 0x4f25), 0xe0, wParam, 1)
        ebx_1 = 1

WPARAM wParam_1

if (data_20cc938 != 0)
    int32_t eax_11 = (data_20cc9a8 - point.y) * 2
    int32_t edx_4 = data_20cc988 + eax_11
    int32_t ecx_5 = data_20cc998 - data_20cc9a0
    data_20cc990 = eax_11
    
    if (edx_4 s> ecx_5)
        eax_11 += ecx_5 - edx_4
        data_20cc990 = eax_11
    else if (edx_4 s< 0)
        eax_11 -= edx_4
        data_20cc990 = eax_11
    
    HWND hDlg_1 = data_1af0a78
    data_20cc8d8 = eax_11 + data_20cc988
    eax = SendMessageA(GetDlgItem(hDlg_1, 0x502c), 0xe1, 0, 0)
    wParam_1 = data_20cc8d8

if (data_20cc938 != 0 && eax != wParam_1)
    SendMessageA(GetDlgItem(data_1af0a78, 0x502c), 0xe0, wParam_1, 1)
    *((data_20ca9f4 << 2) + &data_20cb9a0) = 1
    sub_563b20(0)
else if (ebx_1 != 0)
    *((data_20ca9f4 << 2) + &data_20cb9a0) = 1
    sub_563b20(0)

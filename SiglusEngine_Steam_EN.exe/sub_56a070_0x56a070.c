// 函数: sub_56a070
// 地址: 0x56a070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
sub_55a6a0(eax, arg1, 0x30, 0x62373c)
HWND esi = data_1af0ad0

if (data_13172d8 == 0)
    UpdateWindow(esi)
    SetWindowPos(esi, 0xfffffffe, data_13172e0, data_13172e4, data_13172e8, data_13172ec, 
        SWP_SHOWWINDOW)

HWND hWnd = GetDlgItem(esi, 0x4f32)
int32_t ecx
int32_t edx_1
ecx, edx_1 = SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21)
int32_t eax_3

if (data_13172d8 == 0)
    eax_3 = data_131919c
else
    eax_3 = 0
    data_131919c = 0
    data_13191a0 = 0

int32_t var_18_3 = eax_3
sub_4c10d0(eax_3, edx_1, esi, ecx)
WPARAM wParam

if (data_13191a0 == 0)
    wParam = 0
else
    wParam = 1

LRESULT eax_4
int32_t edx_2
eax_4, edx_2 = SendDlgItemMessageA(esi, 0x5027, 0xf1, wParam, 0)
LRESULT eax_5
char edx_3
eax_5, edx_3 = sub_5687b0(eax_4, edx_2, esi, data_131919c)
int32_t result
int32_t ecx_4
result, ecx_4 = sub_4d1ba0(sub_568710(eax_5, edx_3, esi, data_13191a0), 0x2c00, 0x20cca20, 0xa5)

if (data_13172d8 == 0)
    int32_t var_18_5 = ecx_4
    result = sub_4c1470(result, data_13172f4, data_13172f0, data_1af0ad0, 0x4f32)

data_13172d8 = 0
return result

// 函数: sub_56d630
// 地址: 0x56d630
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND var_c = arg1
HWND var_1c = arg1
data_1af0ac4 = arg1
sub_4d5720(arg1)
sub_4c0df0(GetWindowRect(arg1, &data_1be49b8), 0x4f32, arg1, 0x1b8ba50, 1, 2)
HWND ebx = data_1af0ac4

if (data_1316f78 == 0)
    UpdateWindow(ebx)
    SetWindowPos(ebx, 0xfffffffe, data_1316f80, data_1316f84, data_1316f88, data_1316f8c, 
        SWP_SHOWWINDOW)

HWND hWnd = GetDlgItem(ebx, 0x4f32)
SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21)
bool cond:0 = data_1316f78 == 0
data_20db9d4 = 0

if (not(cond:0))
    data_1318c38 = 0xffffffff
    data_1318c3c = 0xffffffff

BOOL eax_3 = sub_56d8b0()
int32_t esi_1 = data_1316f90
WPARAM edi_1 = data_1316f94
data_20ef268 = 0xffffffff
data_20ef26c = 0xffffffff
data_20ef260 = 0
data_20ef264 = 0
LRESULT result
int32_t ecx_2
result, ecx_2 = sub_56c1e0(eax_3, &data_1316f78, ebx, &data_1318b24)

if (data_1af0ac4 != 0)
    sub_56d330()
    result, ecx_2 = sub_56d380()

bool cond:1 = data_1316f78 != 0
data_1316f90 = esi_1
data_1316f94 = edi_1

if (not(cond:1))
    int32_t var_1c_3 = ecx_2
    result = sub_4c1470(result, edi_1, esi_1, ebx, 0x4f32)

data_1316f78 = 0
return result

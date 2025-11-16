// 函数: sub_56f4e0
// 地址: 0x56f4e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_20efcc4 = 0x2e
int32_t eax
sub_55a6a0(eax, arg1, 0x2e, 0x623f68)
int32_t eax_1 = data_20efcc4
HWND ecx = (&data_1af0a10)[eax_1]
data_20efcc0 = ecx
int32_t eax_8 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(&(&data_1313cd8)[eax_1 * 0x48], 0x500d, ecx, 0x20efb38, 1, 6), 
            0x4f93, data_20efcc0, 0x20efb70, 1, 0), 
        0x4f92, data_20efcc0, 0x20efba8, 1, 0), 
    0x4f32, data_20efcc0, 0x20efbe0, 1, 2)
sub_4c0df0(
    sub_4c0df0(sub_4c0df0(eax_8, 0x4f33, data_20efcc0, 0x20efc18, 1, 7), 0x4fd6, data_20efcc0, 
        0x20efc50, 1, 0), 
    0x4fd7, data_20efcc0, 0x20efc88, 1, 1)
WPARAM wParam

if (data_1319198 == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(data_20efcc0, 0x4fd7, 0xf1, wParam, 0)
int32_t eax_11 = data_20efcc4
bool cond:1 = eax_11 u> 0x3f

if (eax_11 u<= 0x3f)
    HWND hWnd_2 = (&data_1af0a10)[eax_11]
    
    if ((&data_1313cd8)[eax_11 * 0x48] == 0)
        UpdateWindow(hWnd_2)
        SetWindowPos(hWnd_2, 0xfffffffe, (&data_1313ce0)[eax_11 * 0x48], 
            (&data_1313ce4)[eax_11 * 0x48], (&data_1313ce8)[eax_11 * 0x48], 
            (&data_1313cec)[eax_11 * 0x48], SWP_SHOWWINDOW)
        eax_11 = data_20efcc4
    
    cond:1 = eax_11 u> 0x3f

if (not(cond:1))
    HWND hDlg = (&data_1af0a10)[eax_11]
    
    if (GetDlgItem(hDlg, 0x4f32) != 0)
        HWND hWnd = GetDlgItem(hDlg, 0x4f32)
        sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x20), 0x4f32, 
            hDlg, (&data_1313cd8)[eax_11 * 0x48], &(&data_1313cd8)[eax_11 * 0x48], 3, &data_63fe74, 
            0x63fe54)

sub_55a710(&(&data_1313cd8)[eax_1 * 0x48], 0x4f33, data_20efcc0, (&data_1313cd8)[eax_1 * 0x48], 
    &data_1319078, 1, &data_63fdf8, 0x63fdb8)
HWND hWnd_1 = GetDlgItem(data_20efcc0, 0x4f33)
SendMessageA(hWnd_1, 0x1036, 0, SendMessageA(hWnd_1, 0x1037, 0, 0) | 0x20)
sub_494860()
int32_t eax_19 = sub_4948e0()
data_20efcd4 = 0xffffffff
data_20efcd8 = 0xffffffff
data_20efcc8 = 0
data_20efccc = 0
data_20efcd0 = 0
sub_5569e0(eax_19, &data_20efccc, &data_20efcc8, &data_20efcd0)
LRESULT eax_20
int32_t edx_1
eax_20, edx_1 = sub_56f080()
sub_5562a0(eax_20, edx_1, data_20efcc0, data_20efcd0, data_20efccc)
LRESULT result = sub_4c1470(
    sub_4c1470(&(&data_1313cd8)[eax_1 * 0x48], (&data_1313cf4)[eax_1 * 0x48], 
        (&data_1313cf0)[eax_1 * 0x48], data_20efcc0, 0x4f32), 
    data_1319094, data_1319090, data_20efcc0, 0x4f33)

if (data_63fe98 != 0xffffffff)
    return result

return EnableWindow(GetDlgItem(data_20efcc0, 0x4fd6), 0)

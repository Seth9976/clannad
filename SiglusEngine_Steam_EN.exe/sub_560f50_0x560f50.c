// 函数: sub_560f50
// 地址: 0x560f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *((arg1 << 2) + &data_134ce6c)
int32_t esi = *((arg1 << 2) + &data_612910)
PSTR var_20
PSTR eax

if (ecx == 0xffffffff)
    var_20 = &data_6138e3
else
    eax = data_134ce50:4 + ecx
    var_20 = eax

HWND edx
int32_t edx_1 = sub_55a6a0(eax, edx, esi, var_20)
HWND hWnd = (&data_1af0a10)[esi]
int32_t eax_3 = esi * 0x120
void* ebx = eax_3 + &data_1313cd8

if (esi s>= 0 && esi s< 0x40)
    if (*ebx == 0)
        UpdateWindow(hWnd)
        SetWindowPos(hWnd, 0xfffffffe, *(ebx + 8), *(ebx + 0xc), *(ebx + 0x10), *(ebx + 0x14), 
            SWP_SHOWWINDOW)
    
    HWND hDlg = (&data_1af0a10)[esi]
    eax_3, edx_1 = GetDlgItem(hDlg, 0x4f32)
    
    if (eax_3 != 0)
        HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
        edx_1 = 0x4f32
        eax_3 = sub_55a710(
            SendMessageA(hWnd_1, 0x1036, 0, SendMessageA(hWnd_1, 0x1037, 0, 0) | 0x21), 0x4f32, 
            hDlg, *ebx, ebx, 3, &data_63fe34, 0x63fd34)

sub_560950(eax_3, edx_1, hWnd, arg1)
LRESULT result = sub_41cbd0(arg1)

if (*ebx != 0)
    return result

int32_t var_20_3 = arg1
return sub_4c1470(result, *(ebx + 0x1c), *(ebx + 0x18), hWnd, 0x4f32)

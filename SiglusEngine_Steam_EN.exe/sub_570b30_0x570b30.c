// 函数: sub_570b30
// 地址: 0x570b30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hDlg = data_1c054fc

if (hDlg != 0)
    RECT rect
    BOOL ho = GetClientRect(GetDlgItem(hDlg, 0x4fe1), &rect)
    int32_t right = rect.right
    int32_t bottom = rect.bottom
    
    if (data_20f028c != right || data_20f0290 != bottom)
        HDC hdc = data_20f0288
        
        if (hdc != 0)
            DeleteDC(hdc)
        
        ho = data_20f0294
        
        if (ho != 0)
            ho = DeleteObject(ho)
        
        data_20f0288 = 0
        data_20f0294 = 0
        data_20f0298 = 0
        goto label_570bdc
    
    if (data_20f0298 == 0)
    label_570bdc:
        data_20f028c = right
        data_20f0290 = bottom
        BITMAPINFO pbmi
        sub_4d1ba0(ho, 0x2c, &pbmi, 0)
        int32_t edx = data_20f0290
        int32_t ecx_3 = data_20f028c
        pbmi.bmiHeader.biSize = 0x28
        pbmi.bmiHeader.biWidth = ecx_3
        pbmi.bmiHeader.biHeight = neg.d(edx)
        pbmi.bmiHeader.biPlanes = 1
        pbmi.bmiHeader.biBitCount = 0x20
        pbmi.bmiHeader.biCompression = 0
        pbmi.bmiHeader.biSizeImage = (edx * ecx_3) << 2
        pbmi.bmiHeader.biXPelsPerMeter = 0
        pbmi.bmiHeader.biYPelsPerMeter = 0
        pbmi.bmiHeader.biClrUsed = 0
        pbmi.bmiHeader.biClrImportant = 0
        HWND hWnd = GetDlgItem(data_1c054fc, 0x4fe1)
        HDC eax_6 = GetDC(hWnd)
        data_20f0294 = CreateDIBSection(eax_6, &pbmi, DIB_RGB_COLORS, &data_20f0298, nullptr, 0)
        HDC hdc_1 = CreateCompatibleDC(eax_6)
        HGDIOBJ h = data_20f0294
        data_20f0288 = hdc_1
        SelectObject(hdc_1, h)
        ReleaseDC(hWnd, eax_6)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0

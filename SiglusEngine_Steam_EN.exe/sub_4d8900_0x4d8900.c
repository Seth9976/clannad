// 函数: sub_4d8900
// 地址: 0x4d8900
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HBITMAP ho
int32_t eax_1 = __security_cookie ^ &ho
PAINTSTRUCT paint
HDC hdc = BeginPaint(data_7027bc, &paint)
HDC eax_2 = CreateCompatibleDC(hdc)
BITMAPINFO pbmi
pbmi.bmiHeader.biSize = 0x28
pbmi.bmiHeader.biWidth = data_13926fc
pbmi.bmiHeader.biPlanes = 1
pbmi.bmiHeader.biBitCount = 0x20
pbmi.bmiHeader.biHeight = neg.d(data_13926f8)
pbmi.bmiHeader.biCompression = 0
pbmi.bmiHeader.biSizeImage = 0
pbmi.bmiHeader.biXPelsPerMeter = 0
pbmi.bmiHeader.biYPelsPerMeter = 0
pbmi.bmiHeader.biClrUsed = 0
pbmi.bmiHeader.biClrImportant = 0
int32_t ppvBits
HBITMAP h = CreateDIBSection(hdc, &pbmi, DIB_RGB_COLORS, &ppvBits, nullptr, 0)
ho = h
sub_4d1ba0(SelectObject(eax_2, h), (data_13926f8 * data_13926fc) << 2, ppvBits, 0xff)
int32_t i_1 = 5
int32_t i

do
    BitBlt(hdc, 0x64, 0x64, data_13926fc, data_13926f8, eax_2, 0, 0, SRCCOPY)
    i = i_1
    i_1 -= 1
while (i != 1)
Sleep(0xc8)
DeleteDC(eax_2)
DeleteObject(ho)
BOOL result = EndPaint(data_7027bc, &paint)
sub_5f02dd(eax_1 ^ &ho)
return result

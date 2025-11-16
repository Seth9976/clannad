// 函数: sub_54c810
// 地址: 0x54c810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_4 = (data_20c2238 * data_20c2234) << 2
sub_4d1c30(eax_4, data_20c2228, data_20c2230, eax_4)
int32_t ecx_1 = data_13132a0 * 0xff

if (data_13132a4 == 1)
    int32_t esi_1 = data_1313298
    int32_t edi_1 = data_131329c
    int32_t ebx_1 = data_1313294
    int32_t eax_21 = ecx_1 s/ 0xff
    
    if (ebx_1 s< 0)
        ebx_1 = 0
    else if (ebx_1 s> 0xff)
        ebx_1 = 0xff
    
    if (esi_1 s< 0)
        esi_1 = 0
    else if (esi_1 s> 0xff)
        esi_1 = 0xff
    
    if (edi_1 s< 0)
        edi_1 = 0
    else if (edi_1 s> 0xff)
        edi_1 = 0xff
    
    if (eax_21 s< 0)
        eax_21 = 0
    else if (eax_21 s> 0xff)
        eax_21 = 0xff
    
    int32_t var_44_1 = 0
    int32_t var_48_1 = eax_21
    int32_t var_4c_1 = 0
    int32_t var_50_1 = 0
    void* edx_8 = data_20c2234
    int32_t var_74_1 = 0
    int32_t var_78_1 = 0
    int32_t var_7c_1 = 0
    int32_t var_80_1 = 0
    void* ecx_4 = data_20c2238
    sub_586580(edx_8 - 1, edx_8, data_20c2230, ecx_4, 0, 0, edx_8 - 1, ecx_4 - 1, ebx_1.b, esi_1.b, 
        edi_1.b, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, 0xff, 0, 0, 0, 0)
else
    int32_t __saved_ebx_1 = 0
    void* edx_4 = data_20c2234
    int32_t var_44 = ecx_1 s/ 0xff
    int32_t var_48 = 0
    int32_t var_4c = data_131329c - 0xff
    int32_t var_50 = data_1313298 - 0xff
    void* ecx_2 = data_20c2238
    sub_58bcc0(edx_4 - 1, edx_4, data_20c2230, ecx_2, 0, 0, edx_4 - 1, ecx_2 - 1, 0xffffffff, 0xff, 
        0xffffffff, 0xffffffff, ecx_1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        data_1313294 - 0xff)

int32_t edx_9 = data_20c2238
int32_t ecx_6 = data_20c2234
BITMAPINFO lpbmi
lpbmi.bmiHeader.biSize = 0x28
lpbmi.bmiHeader.biWidth = ecx_6
lpbmi.bmiHeader.biHeight = neg.d(edx_9)
lpbmi.bmiHeader.biPlanes = 1
lpbmi.bmiHeader.biBitCount = 0x20
lpbmi.bmiHeader.biCompression = 0
lpbmi.bmiHeader.biSizeImage = (edx_9 * ecx_6) << 2
lpbmi.bmiHeader.biXPelsPerMeter = 0
lpbmi.bmiHeader.biYPelsPerMeter = 0
lpbmi.bmiHeader.biClrUsed = 0
lpbmi.bmiHeader.biClrImportant = 0
HWND hWnd = GetDlgItem(data_20c2220, 0x4eee)
HDC eax_26 = GetDC(hWnd)
uint32_t ecx_7 = data_20c2238
SetDIBitsToDevice(eax_26, 1, 1, data_20c2234, ecx_7, 0, 0, 0, ecx_7, data_20c2230, &lpbmi, 
    DIB_RGB_COLORS)
int32_t result = ReleaseDC(hWnd, eax_26)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

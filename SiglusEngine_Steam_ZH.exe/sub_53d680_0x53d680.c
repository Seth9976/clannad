// 函数: sub_53d680
// 地址: 0x53d680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* pszFaceName = arg1 + 0x4c0

if (pszFaceName != arg2)
    sub_52e3c0(pszFaceName, arg2, 0, 0xffffffff)

if (pszFaceName[5] u>= 8)
    pszFaceName = *pszFaceName

HFONT eax_1 = CreateFontW(0x18, 0, 0, 0, 0x190, 0, 0, 0, 1, 0, 0, 0, 0, pszFaceName)
HWND hWnd = *(arg1 + 0x140)
*(arg1 + 0x4bc) = eax_1
HDC eax_2 = GetDC(hWnd)
HGDIOBJ ho = SelectObject(eax_2, *(arg1 + 0x4bc))

if (*(arg1 + 0x4b8) == 0)
    *(arg1 + 0x4b8) = ho
else
    DeleteObject(ho)

ReleaseDC(*(arg1 + 0x140), eax_2)
return SendMessageW(*(arg1 + 0x140), 0x30, *(arg1 + 0x4bc), 1)

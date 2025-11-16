// 函数: sub_532c20
// 地址: 0x532c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HGDIOBJ h_1 = arg4
void** lpString = arg2

if (h_1 == 0)
    h_1 = GetStockObject(DEFAULT_GUI_FONT)

HDC eax_1 = GetDC(arg3)
HGDIOBJ h = SelectObject(eax_1, h_1)
bool cond:0 = lpString[5] u< 8
int32_t c = lpString[4]
SIZE psizl
__builtin_memset(&psizl, 0, 8)

if (not(cond:0))
    lpString = *lpString

GetTextExtentPoint32W(eax_1, lpString, c, &psizl)
SelectObject(eax_1, h)
ReleaseDC(arg3, eax_1)
return psizl.cx

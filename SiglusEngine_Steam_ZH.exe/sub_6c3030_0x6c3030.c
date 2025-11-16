// 函数: sub_6c3030
// 地址: 0x6c3030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HGDIOBJ h = GetStockObject(DEFAULT_GUI_FONT)
int32_t* lpString_1
sub_6c2ec0(arg1, &lpString_1)
HDC eax_2 = GetDC(*(arg1 + 4))
HGDIOBJ h_1 = SelectObject(eax_2, h)
int32_t* lpString = &lpString_1
SIZE psizl
psizl.cx = 0
int32_t var_c

if (var_c u>= 8)
    lpString = lpString_1

psizl.cy = 0
int32_t c
GetTextExtentPoint32W(eax_2, lpString, c, &psizl)
SelectObject(eax_2, h_1)
ReleaseDC(*(arg1 + 4), eax_2)
int32_t result = psizl.cx + arg2

if (var_c u>= 8)
    j__free(lpString_1)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result

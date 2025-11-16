// 函数: sub_4c1760
// 地址: 0x4c1760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND esi = arg4

if (esi == 0xffffffff)
    LRESULT eax_2 = SendMessageA(GetDlgItem(arg2, 0x4f33), 0x102c, arg3, 0xf000)
    int32_t esi_4 = neg.d((eax_2 u>> 0xc) - 1)
    esi = sbb.d(esi_4, esi_4, eax_2 u>> 0xc != 1) + 1

HWND hWnd = GetDlgItem(arg2, 0x4f33)
int32_t eax_4 = SendMessageA(hWnd, 0x102c, arg3, 0xf000) & 0xcfff
int32_t eax_5

if (esi == 0)
    eax_5 = eax_4 | 0x1000
else
    eax_5 = eax_4 | 0x2000

int32_t var_38 = eax_5
int32_t lParam = 8
WPARAM var_40 = arg3
int32_t var_34 = 0xf000
return SendMessageA(hWnd, 0x102b, arg3, &lParam)

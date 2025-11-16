// 函数: sub_556200
// 地址: 0x556200
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND var_c = arg3
HWND result = arg4 - 1

if (result u> 0x270e)
    return result

WPARAM eax = sub_4c1520(arg3, 0x4f33)
int32_t eax_1 = arg5
int32_t esi_2

if (eax == 0xffffffff)
    esi_2 = 0
    int32_t eax_2 = sub_494940(arg4, 0)
    
    if (eax_2 == 0)
        sub_4c1300(eax_2, arg3, 0, 0x4f33, 0xfffffffe)
    
    eax_1 = arg5
else if (eax_1 != 0)
    esi_2 = eax - 1
else
    esi_2 = eax + 1

WPARAM eax_3 = sub_494990(eax_1, esi_2, arg4, eax_1)

if (eax_3 != 0xffffffff)
    sub_4c1300(eax_3, arg3, eax_3, 0x4f33, 3)

return SetFocus(GetDlgItem(arg3, 0x4f33))

// 函数: sub_545cc0
// 地址: 0x545cc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg1
var_c = __security_cookie ^ &var_c
HWND hWnd_3 = arg1[1]

if (hWnd_3 != 0)
    SetClassLongW(hWnd_3, 0xfffffff2, *data_bac4b4)

HWND hWnd_4 = arg1[1]

if (hWnd_4 != 0)
    SetClassLongW(hWnd_4, 0xffffffde, *(data_bac4b4 + 4))

HWND var_20 = 0x54020103
HWND hWnd = CreateStatusWindowW(0x54020103, &data_ad7c90, arg1[1], 0xc350)
arg1[0x1f] = hWnd

if (hWnd != 0)
    SendMessageW(hWnd, 0x40b, 0x100, &data_ad7c90)
    arg1[0x1e].b = 1
else
    arg1[0x1e].b = hWnd.b

(*(*arg1 + 0x14))()
var_20.o = zx.o(0)
sub_6c2800(arg1, var_20)
SetTimer(arg1[1], 0x3039, 0x32, nullptr)
HWND hWnd_1 = arg1[1]

if (hWnd_1 != 0)
    UpdateWindow(hWnd_1)

int32_t hWnd_2 = arg1[1]

if (hWnd_2 != 0 && (GetWindowLongW(hWnd_2, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(arg1[1], SW_SHOW)

hWnd_2.b = 1
sub_745f2b(var_c ^ &var_c)
return hWnd_2

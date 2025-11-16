// 函数: sub_4c59d0
// 地址: 0x4c59d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = data_7027bc
data_641ade = 1
HDC hDC = GetDC(hWnd)
int32_t var_c = 0x63
BOOL eax = sub_4c5c10(hDC, "MigMix 1M", hDC)
char ecx_1 = data_641add
int32_t edi = data_1af44c4

if (eax == 1)
    ecx_1 = 1

data_641add = ecx_1

if (data_20ae984 != edi)
    eax = sub_4d4070(&data_20af110)
    data_20ae984 = 0xffff2bcf
    data_20af110 = zx.o(0)
    sub_4d4390(eax, &data_20af110, hDC, edi)
    data_20ae984 = edi
else if (data_20af110.d == 0)
    sub_4d4390(eax, &data_20af110, hDC, edi)
    data_20ae984 = edi

return ReleaseDC(data_7027bc, hDC)

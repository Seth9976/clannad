// 函数: sub_60e2c0
// 地址: 0x60e2c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac4d0
HWND hWnd = *(esi + 0x1dd14)

if (hWnd != 0)
    SendMessageW(hWnd, 0xc, 0, &data_ad7c90)

sub_67cac0(esi + 0x1dac4)
LRESULT hWnd_1 = *(esi + 0x1dac8)

if (hWnd_1 == 0)
    return hWnd_1

return SendMessageW(hWnd_1, 0x10, 0, 0)

// 函数: sub_531ea0
// 地址: 0x531ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (arg2 == *(arg1 + 0x5c0))
    void* edx = data_bac4e4
    void* esi = data_bac510
    eax.b = *(esi + 0xbbd1)
    *(edx + 0x141) = eax.b
    *(edx + 0x144) = *(esi + 0xbbd4)
    *(edx + 0x148) = *(esi + 0xbbd8)
    sub_5320c0(arg1)
    int32_t eax_3
    eax_3.b = 1
    return eax_3

if (arg2 != *(arg1 + 0x650))
    eax.b = 0
    return eax

LRESULT hWnd = *(*(arg1 + 4) + 4)

if (hWnd != 0)
    SendMessageW(hWnd, 0x10, 0, 0)

hWnd.b = 1
return hWnd

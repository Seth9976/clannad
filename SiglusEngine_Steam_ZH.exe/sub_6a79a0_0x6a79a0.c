// 函数: sub_6a79a0
// 地址: 0x6a79a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t hWnd = arg2 u>> 0x10

if (hWnd.w == 0)
    int32_t esi
    sub_6a96e0(esi, zx.d(arg2.w))
    LRESULT eax_2
    eax_2.b = 1
    return eax_2

if (hWnd.w == 0x44b)
    *(data_bac4a0 + 0x1ec) = 1
    hWnd = *(arg1 + 4)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x10, 0, 0)

hWnd.b = 1
return hWnd

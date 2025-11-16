// 函数: sub_53d1c0
// 地址: 0x53d1c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == *(arg1 + 0x2f0))
    LRESULT hWnd = *(arg1 + 0x2f0)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
    
    hWnd.b &= 1
    *(data_bac4e4 + 0x140) = hWnd.b
    hWnd.b = 1
    return hWnd

if (arg2 == *(arg1 + 0x380))
    void* edx = data_bac510
    void* ecx_1 = data_bac4e4
    *(ecx_1 + 0x13c) = *(edx + 0xbbcc)
    int32_t eax_1
    eax_1.b = *(edx + 0xbbd0)
    *(ecx_1 + 0x140) = eax_1.b
    sub_53d620(arg1)
    int32_t eax_2
    eax_2.b = 1
    return eax_2

if (arg2 != *(arg1 + 0x410))
    int32_t eax
    eax.b = 0
    return eax

LRESULT hWnd_1 = *(*(arg1 + 4) + 4)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x10, 0, 0)

hWnd_1.b = 1
return hWnd_1

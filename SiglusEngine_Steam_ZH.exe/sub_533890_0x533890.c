// 函数: sub_533890
// 地址: 0x533890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == *(arg1 + 0x260))
    void* edx = data_bac4e4
    void* esi = data_bac510
    *(edx + 0x110) = *(esi + 0xbb9c)
    int32_t eax_1
    eax_1.b = *(esi + 0xbba0)
    *(edx + 0x114) = eax_1.b
    sub_533a50(arg1)
    int32_t eax_2
    eax_2.b = 1
    return eax_2

if (arg2 != *(arg1 + 0x2f0))
    if (arg2 != *(arg1 + 0x1d0))
        int32_t eax
        eax.b = 0
        return eax
    
    *(data_bac4e4 + 0x114) = sub_6c3160(arg1 + 0x1cc)
    return 1

LRESULT hWnd = *(*(arg1 + 4) + 4)

if (hWnd != 0)
    SendMessageW(hWnd, 0x10, 0, 0)

hWnd.b = 1
return hWnd

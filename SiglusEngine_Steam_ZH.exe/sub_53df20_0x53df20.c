// 函数: sub_53df20
// 地址: 0x53df20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax_1 = zx.d(arg2)

if (eax_1 == 0x406)
    LRESULT hWnd = *(*(arg1 + 4) + 4)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x10, 0, 0)
    
    hWnd.b = 1
    return hWnd

if (eax_1 != 0x407)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

*(data_bac4e4 + 0x115) = *(data_bac510 + 0xbba1)
sub_53e1b0(arg1)
int32_t eax_6
eax_6.b = 1
return eax_6

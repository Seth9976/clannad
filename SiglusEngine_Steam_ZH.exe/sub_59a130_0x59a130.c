// 函数: sub_59a130
// 地址: 0x59a130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) == 0)
    return *(arg1 + 0x37c)

HWND hWnd = *(arg1 + 0x26c)
LRESULT ecx

if (hWnd != 0)
    ecx = SendMessageW(hWnd, 0x188, 0, 0)
    
    if (ecx == 0xffffffff)
        *(arg1 + 0x37c) = 0
        return 0
else
    ecx = 0

int32_t result = *(*(arg1 + 0x380) + (ecx << 2))
*(arg1 + 0x37c) = result
return result

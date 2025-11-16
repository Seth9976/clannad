// 函数: sub_538180
// 地址: 0x538180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (*(arg1 + 8) == 0 || arg2 u> 3)
    return 

int32_t* esi_2 = arg1 + 0x800 + arg2 * 0x480
LPARAM lParam = 8
LPARAM i

do
    HWND hWnd_1 = *esi_2
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0xf1, 0, 0)
    
    esi_2 = &esi_2[0x24]
    i = lParam
    lParam -= 1
while (i != 1)
LRESULT hWnd = *(*(data_bac4e4 + 0x188) + (arg2 << 2))

if (hWnd u> 7)
    return 

hWnd = *(arg1 + (hWnd + (arg2 << 3)) * 0x90 + 0x800)

if (hWnd != 0)
    SendMessageW(hWnd, 0xf1, 1, lParam)

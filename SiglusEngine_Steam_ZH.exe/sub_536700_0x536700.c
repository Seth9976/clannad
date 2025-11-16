// 函数: sub_536700
// 地址: 0x536700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0xb0)

if (hWnd != 0)
    WPARAM wParam
    wParam.b = *(data_bac4e4 + 0x16c) != 0
    SendMessageW(hWnd, 0xf1, wParam, 0)

char* i = nullptr
void* edi_1 = arg1 + 0x140

do
    HWND hWnd_1 = *edi_1
    
    if (hWnd_1 != 0)
        WPARAM wParam_1
        wParam_1.b = i[*(data_bac4e4 + 0x170)] != 0
        SendMessageW(hWnd_1, 0xf1, wParam_1, 0)
    
    i = &i[1]
    edi_1 += 0x90
while (i s< 4)

char* i_1 = nullptr
void* edi_2 = arg1 + 0x380

do
    HWND hWnd_2 = *edi_2
    
    if (hWnd_2 != 0)
        WPARAM wParam_2
        wParam_2.b = i_1[*(data_bac4e4 + 0x17c)] != 0
        SendMessageW(hWnd_2, 0xf1, wParam_2, 0)
    
    i_1 = &i_1[1]
    edi_2 += 0x90
while (i_1 s< 4)

for (LRESULT i_2 = 0; i_2 s< 4; i_2 += 1)
    sub_538180(arg1, i_2)

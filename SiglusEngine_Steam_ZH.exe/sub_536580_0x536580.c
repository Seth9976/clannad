// 函数: sub_536580
// 地址: 0x536580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0xb0)
char eax_1

if (hWnd != 0)
    eax_1 = SendMessageW(hWnd, 0xf0, 0, 0)
else
    eax_1 = 0

void* ecx
ecx.b = *(data_bac4e4 + 0x16c)

if (ecx.b != (eax_1 & 1))
    HWND hWnd_3 = *(arg1 + 0xb0)
    
    if (hWnd_3 != 0)
        WPARAM wParam
        wParam.b = ecx.b != 0
        SendMessageW(hWnd_3, 0xf1, wParam, 0)

char* i = nullptr
void* edi_1 = arg1 + 0x140

do
    char* ebx_1 = *(data_bac4e4 + 0x170)
    LRESULT hWnd_1 = *edi_1
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)
    
    hWnd_1.b &= 1
    
    if (*(ebx_1 + i) != hWnd_1.b)
        HWND hWnd_4 = *edi_1
        
        if (hWnd_4 != 0)
            WPARAM wParam_1
            wParam_1.b = i[*(data_bac4e4 + 0x170)] != 0
            SendMessageW(hWnd_4, 0xf1, wParam_1, 0)
    
    i = &i[1]
    edi_1 += 0x90
while (i s< 4)

char* i_1 = nullptr
void* edi_3 = arg1 + 0x380

do
    char* ebx_2 = *(data_bac4e4 + 0x17c)
    LRESULT hWnd_2 = *edi_3
    
    if (hWnd_2 != 0)
        hWnd_2 = SendMessageW(hWnd_2, 0xf0, 0, 0)
    
    hWnd_2.b &= 1
    
    if (*(ebx_2 + i_1) != hWnd_2.b)
        HWND hWnd_5 = *edi_3
        
        if (hWnd_5 != 0)
            WPARAM wParam_2
            wParam_2.b = i_1[*(data_bac4e4 + 0x17c)] != 0
            SendMessageW(hWnd_5, 0xf1, wParam_2, 0)
    
    i_1 = &i_1[1]
    edi_3 += 0x90
while (i_1 s< 4)

for (LRESULT i_2 = 0; i_2 s< 4; i_2 += 1)
    int32_t* esi_1 = *(data_bac4e4 + 0x188) + (i_2 << 2)
    int32_t eax = sub_538210(arg1, i_2)
    
    if (*esi_1 != eax)
        sub_538180(arg1, i_2)

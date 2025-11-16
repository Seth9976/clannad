// 函数: sub_53fad0
// 地址: 0x53fad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1

if (*(arg1 + 8) == 0)
    return 

sub_540dd0(arg1)
sub_540440(arg1)
int32_t ebx
ebx.b = 0
char eax
void* esi_1
eax, esi_1 = sub_540040(arg1)

if (eax == 0)
    sub_53ffd0(esi_1)

int32_t* eax_1 = data_bac4e4
int32_t edi_1

if (*eax_1 != 0)
    edi_1 = 0xffffffff
else
    edi_1 = sub_616cd0(eax_1[2], eax_1[3])

if (edi_1 != sub_5401b0(esi_1))
    sub_5400b0(esi_1)

HWND hWnd_1 = *(esi_1 + 0x5c0)
char eax_4

if (hWnd_1 != 0)
    eax_4 = SendMessageW(hWnd_1, 0xf0, 0, 0)
else
    eax_4 = 0

char edx_1 = *(data_bac4a0 + 0x68)

if (edx_1 != (eax_4 & 1))
    HWND hWnd_16 = *(esi_1 + 0x5c0)
    
    if (hWnd_16 != 0)
        WPARAM wParam
        wParam.b = edx_1 != 0
        SendMessageW(hWnd_16, 0xf1, wParam, 0)

HWND hWnd_2 = *(esi_1 + 0x890)
LRESULT eax_5

if (hWnd_2 != 0)
    eax_5 = SendMessageW(hWnd_2, 0x157, 0, 0)

if (hWnd_2 == 0 || eax_5 == 0)
    LRESULT hWnd_3 = *(esi_1 + 0x890)
    
    if (hWnd_3 != 0)
        hWnd_3 = SendMessageW(hWnd_3, 0x147, 0, 0)
    
    WPARAM wParam_2 = *(data_bac4a0 + 0x6c)
    
    if (wParam_2 != hWnd_3)
        HWND hWnd_4 = *(esi_1 + 0x890)
        
        if (hWnd_4 != 0)
            SendMessageW(hWnd_4, 0x14e, wParam_2, 0)
        
        sub_541000(esi_1)

HWND hWnd_5 = *(esi_1 + 0x924)
LRESULT eax_6

if (hWnd_5 != 0)
    eax_6 = SendMessageW(hWnd_5, 0x157, 0, 0)

if (hWnd_5 == 0 || eax_6 == 0)
    LRESULT hWnd_6 = *(esi_1 + 0x924)
    
    if (hWnd_6 != 0)
        hWnd_6 = SendMessageW(hWnd_6, 0x147, 0, 0)
    
    WPARAM wParam_3 = *(data_bac4a0 + 0x70)
    
    if (wParam_3 != hWnd_6)
        HWND hWnd_7 = *(esi_1 + 0x924)
        
        if (hWnd_7 != 0)
            SendMessageW(hWnd_7, 0x14e, wParam_3, 0)

int32_t eax_7 = sub_540370(esi_1)

if (*(data_bac4e4 + 0x50) != eax_7)
    sub_540260(esi_1)

LRESULT hWnd_8 = *(esi_1 + 0x1078)

if (hWnd_8 != 0)
    hWnd_8 = SendMessageW(hWnd_8, 0x400, 0, 0)

LPARAM lParam = *(data_bac4e4 + 0x58)

if (lParam != hWnd_8)
    HWND hWnd_9 = *(esi_1 + 0x1078)
    
    if (hWnd_9 != 0)
        SendMessageW(hWnd_9, 0x405, 1, lParam)
    
    ebx.b = 1

LRESULT hWnd_10 = *(esi_1 + 0x12b8)

if (hWnd_10 != 0)
    hWnd_10 = SendMessageW(hWnd_10, 0x400, 0, 0)

LPARAM lParam_1 = *(data_bac4e4 + 0x54)

if (lParam_1 != hWnd_10)
    HWND hWnd_11 = *(esi_1 + 0x12b8)
    
    if (hWnd_11 != 0)
        SendMessageW(hWnd_11, 0x405, 1, lParam_1)
    
    ebx.b = 1

LRESULT hWnd_12 = *(esi_1 + 0x1348)

if (hWnd_12 != 0)
    hWnd_12 = SendMessageW(hWnd_12, 0xf0, 0, 0)

hWnd_12.b &= 1
char edx_2 = *(data_bac4e4 + 0x5c)

if (edx_2 != hWnd_12.b)
    HWND hWnd_17 = *(esi_1 + 0x1348)
    
    if (hWnd_17 != 0)
        WPARAM wParam_1
        wParam_1.b = edx_2 != 0
        SendMessageW(hWnd_17, 0xf1, wParam_1, 0)

LRESULT hWnd_13 = *(esi_1 + 0x1588)

if (hWnd_13 != 0)
    hWnd_13 = SendMessageW(hWnd_13, 0x400, 0, 0)

LPARAM lParam_2 = *(data_bac4e4 + 0x64)

if (lParam_2 != hWnd_13)
    HWND hWnd_14 = *(esi_1 + 0x1588)
    
    if (hWnd_14 != 0)
        SendMessageW(hWnd_14, 0x405, 1, lParam_2)
    
    ebx.b = 1

struct _EXCEPTION_REGISTRATION_RECORD** hWnd = *(esi_1 + 0x17c8)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x400, 0, 0)

LPARAM lParam_3 = *(data_bac4e4 + 0x60)

if (lParam_3 != hWnd)
    HWND hWnd_15 = *(esi_1 + 0x17c8)
    
    if (hWnd_15 != 0)
        SendMessageW(hWnd_15, 0x405, 1, lParam_3)
        sub_541660(esi_1)
        return 
    
    sub_541660(esi_1)
else if (ebx.b != 0)
    sub_541660(esi_1)

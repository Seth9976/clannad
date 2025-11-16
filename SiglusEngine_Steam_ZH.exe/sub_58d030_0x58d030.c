// 函数: sub_58d030
// 地址: 0x58d030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
void* eax = data_bac408
var_8 = 0
int32_t eax_1 = *(eax + 0xa4)
WPARAM ecx

if (eax_1 == 0xfffff4b8)
    ecx = 0
else
    ecx = eax_1 + 0xb4c

sub_588380(&var_8, arg1 + 0xe0, ecx, &var_8, 0)
void* eax_4 = data_bac41c

if (*(eax_4 + 0x864) != 0)
    int32_t eax_5 = *(eax_4 + 0x6b8)
    WPARAM ecx_1
    
    if (eax_5 == 0xfffff4b8)
        ecx_1 = 0
    else
        ecx_1 = eax_5 + 0xb4c
    
    sub_588380(&var_8, arg1 + 0xe0, ecx_1, &var_8, 0)

LRESULT hWnd = *(arg1 + 0xe4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x1004, 0, 0)

int32_t ecx_2 = var_8

if (hWnd s> ecx_2)
    hWnd = *(data_bac4e0 + 0x30)
    
    if (hWnd != 0)
        return hWnd(*(arg1 + 0xe4), ecx_2)

return hWnd

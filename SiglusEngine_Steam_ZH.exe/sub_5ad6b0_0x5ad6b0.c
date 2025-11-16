// 函数: sub_5ad6b0
// 地址: 0x5ad6b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1

if (*(arg1 + 4) == 0)
    return 

void* eax = data_bac408
var_c = 0
int32_t eax_1 = *(eax + 0xa4)
WPARAM eax_3

if (eax_1 == 0xfffff050)
    eax_3 = 0
else
    eax_3 = eax_1 + 0xfb4

sub_588a40(eax_3, arg1 + 0xe0, eax_3, &var_c, 0)
void* eax_4 = data_bac41c

if (*(eax_4 + 0x864) != 0)
    int32_t eax_5 = *(eax_4 + 0x6b8)
    WPARAM ecx_1
    
    if (eax_5 == 0xfffff4b8)
        ecx_1 = 0
    else
        ecx_1 = eax_5 + 0xb4c
    
    sub_588380(&var_c, arg1 + 0xe0, ecx_1, &var_c, 0)

LRESULT hWnd = *(arg1 + 0xe4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x1004, 0, 0)

int32_t ecx_2 = var_c

if (hWnd s<= ecx_2)
    return 

hWnd = *(data_bac4e0 + 0x30)

if (hWnd != 0)
    hWnd(*(arg1 + 0xe4), ecx_2)

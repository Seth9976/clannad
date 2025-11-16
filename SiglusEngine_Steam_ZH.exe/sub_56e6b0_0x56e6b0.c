// 函数: sub_56e6b0
// 地址: 0x56e6b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1

if (*(arg1 + 4) == 0)
    return 

int32_t eax = data_bac414
var_c = 0
WPARAM eax_1

if (eax == 0)
    eax_1 = 0
else
    eax_1 = eax + 4

sub_588020(eax_1, arg1 + 0xe0, eax_1, &var_c, 0)
void* ecx_1 = data_bac41c

if (*(ecx_1 + 0x864) != 0)
    void* ecx_2
    
    if (ecx_1 == 0xfffffea8)
        ecx_2 = nullptr
    else
        ecx_2 = ecx_1 + 0x15c
    
    sub_588020(&var_c, arg1 + 0xe0, ecx_2, &var_c, 0)

LRESULT hWnd = *(arg1 + 0xe4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x1004, 0, 0)

int32_t ecx_3 = var_c

if (hWnd s<= ecx_3)
    return 

hWnd = *(data_bac4e0 + 0x30)

if (hWnd != 0)
    hWnd(*(arg1 + 0xe4), ecx_3)

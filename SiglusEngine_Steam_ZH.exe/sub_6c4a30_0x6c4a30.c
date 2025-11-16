// 函数: sub_6c4a30
// 地址: 0x6c4a30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg2

if (esi s< 0)
    LRESULT hWnd = *(arg1 + 4)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1004, 0, 0)
    
    esi = hWnd - 1

LRESULT hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0x1027, 0, 0)

if (esi != hWnd_1)
    int32_t edx_1 = 0
    int32_t lParam = 2
    int32_t ecx = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    
    if (*(arg1 + 4) != 0)
        SendMessageW(*(arg1 + 4), 0x100e, 0, &lParam)
        ecx = var_10_1
        edx_1 = var_18_1
    
    HWND hWnd_2 = *(arg1 + 4)
    
    if (hWnd_2 != 0)
        hWnd_1 = SendMessageW(hWnd_2, 0x1014, 0, (ecx - edx_1) * (esi - hWnd_1))

sub_745f2b(eax_1 ^ &__saved_ebp)
return hWnd_1

// 函数: sub_6c4950
// 地址: 0x6c4950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetClientRect(*(arg1 + 4), &rect)
HWND hWnd = *(arg1 + 4)
HWND hWnd_1

if (hWnd != 0)
    hWnd_1 = SendMessageW(hWnd, 0x101f, 0, 0)
else
    hWnd_1 = nullptr

LRESULT ecx = SendMessageW(hWnd_1, 0x1200, 0, 0)
int32_t edi = 0
WPARAM wParam = 0
LRESULT var_1c = ecx

if (ecx s> 0)
    do
        if (wParam != 1)
            LRESULT hWnd_2 = *(arg1 + 4)
            
            if (hWnd_2 != 0)
                hWnd_2 = SendMessageW(hWnd_2, 0x101d, wParam, 0)
                ecx = var_1c
            
            edi += hWnd_2
        
        wParam += 1
    while (wParam s< ecx)

int32_t eax_4 = rect.right - rect.left
int32_t eax_5 = eax_4 - edi
int32_t lParam = 2

if (eax_4 - edi s< 0)
    eax_5 = 0

int32_t var_40 = eax_5
HWND hWnd_3 = *(arg1 + 4)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0x1060, 1, &lParam)

BOOL result = ShowScrollBar(*(arg1 + 4), SB_HORZ, 0)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result

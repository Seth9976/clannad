// 函数: sub_6c37d0
// 地址: 0x6c37d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t lParam = 0x1c
int32_t var_20 = 0x17
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    SendMessageW(hWnd, 0xea, 0, &lParam)

WPARAM wParam_1
WPARAM wParam = wParam_1
int32_t var_18
int32_t var_14
WPARAM wParam_4 = var_18 - var_14 - wParam + 1
WPARAM wParam_2

if (arg2.w == 8)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return wParam_2

if (arg2.w == 6)
    wParam_2 = wParam
else if (arg2.w == 7)
    wParam = wParam_4
    wParam_2 = wParam
else
    WPARAM wParam_3
    
    if (arg2.w == 0)
        wParam_3 = wParam_2 - 1
        
        if (wParam_3 s>= wParam)
        label_6c38a1:
            wParam = wParam_3
            
            if (wParam_3 s> wParam_4)
                wParam = wParam_4
            
            wParam_2 = wParam
        else
            wParam_2 = wParam
    else if (arg2.w == 1)
        wParam_3 = wParam_2 + 1
        
        if (wParam_3 s>= wParam)
            goto label_6c38a1
        
        wParam_2 = wParam
    else if (arg2.w == 2)
        wParam_3 = wParam_2 - var_14
        
        if (wParam_3 s>= wParam)
            goto label_6c38a1
        
        wParam_2 = wParam
    else if (arg2.w == 3)
        wParam_3 = wParam_2 + var_14
        
        if (wParam_3 s>= wParam)
            goto label_6c38a1
        
        wParam_2 = wParam
    else if (arg2.w == 4)
        wParam = sx.d((arg2 u>> 0x10).w)
        wParam_2 = wParam
    else if (arg2.w != 5)
        wParam = wParam_2
    else
        wParam = sx.d((arg2 u>> 0x10).w)
        wParam_2 = wParam

HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xe0, wParam, 1)
    wParam = wParam_2

sub_745f2b(eax_1 ^ &__saved_ebp)
return wParam

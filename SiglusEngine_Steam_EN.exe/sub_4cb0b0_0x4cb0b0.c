// 函数: sub_4cb0b0
// 地址: 0x4cb0b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
HWND hWnd = __security_cookie ^ &__saved_ebp
HWND hWnd_1 = hWnd

if (*(arg1 + 4) != 0)
    hWnd = *(arg1 + 0x1a4)
    
    if (hWnd != 0 && *(arg1 + 8) != 0)
        RECT rect
        GetClientRect(hWnd, &rect)
        int32_t ecx = *(arg1 + 0x1a8)
        int32_t bottom
        int32_t right
        
        if (ecx != 0xffffffff || *(arg1 + 0x1ac) != ecx || *(arg1 + 0x1b0) != ecx
                || *(arg1 + 0x1b4) != ecx)
            right = *(arg1 + 0x1b0) - ecx + 1
            bottom = *(arg1 + 0x1b4) - *(arg1 + 0x1ac) + 1
        
        int32_t top
        int32_t left
        
        if ((ecx == 0xffffffff && *(arg1 + 0x1ac) == ecx && *(arg1 + 0x1b0) == ecx
                && *(arg1 + 0x1b4) == ecx) || rect.right s<= right || rect.bottom s<= bottom)
            top = rect.top
            bottom = rect.bottom
            right = rect.right
            left = rect.left
        else
            left = rect.left + ecx
            top = rect.top + *(arg1 + 0x1ac)
        
        int32_t* eax_2 = *(arg1 + 8)
        hWnd = (*(*eax_2 + 0x9c))(eax_2, left, top, right, bottom)

sub_5f02dd(hWnd_1 ^ &__saved_ebp)
return hWnd

// 函数: sub_4cf760
// 地址: 0x4cf760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_34 = 0
HWND hDC = GetDlgItem(arg3, arg2)
HWND hWnd = hDC

if (hWnd != 0)
    RECT var_1c
    GetClientRect(hWnd, &var_1c)
    uint32_t i = arg5
    
    if (i == 0)
    label_4cf8b6:
        hDC = GetDC(hWnd)
        
        if (hDC != 0)
            HBRUSH hbr = GetSysColorBrush(COLOR_BTNFACE)
            
            if (hbr != 0)
                var_1c.top += 2
                var_1c.bottom -= 2
                var_1c.left += 1
                var_1c.right -= 1
                FillRect(hDC, &var_1c, hbr)
            
            hDC = ReleaseDC(hWnd, hDC)
    else
        uint32_t edx = arg4
        
        if (edx == 0)
            goto label_4cf8b6
        
        while (i u> 0x9fff6)
            i u>>= 1
            edx u>>= 1
        
        int32_t left = var_1c.left
        int32_t right = var_1c.right
        int32_t bottom = var_1c.bottom
        int32_t right_1 = divu.dp.d(0:((right - left) * edx), i) + left
        
        if (right_1 s<= right)
            right = right_1
        
        int32_t top = var_1c.top
        
        if (right - left - 2 s<= 0 || bottom - top - 4 s<= 0)
            goto label_4cf8b6
        
        RECT lprc
        lprc.top = top + 2
        lprc.bottom = bottom - 2
        lprc.left = left + 1
        lprc.right = left - 1 + bottom - top - 4
        int32_t eax_12
        int32_t edx_3
        edx_3:eax_12 = sx.q(right - left - 2)
        int32_t i_2 = divs.dp.d(edx_3:eax_12, bottom - top - 4)
        HDC hDC_1 = GetDC(hWnd)
        
        if (hDC_1 == 0)
            goto label_4cf8b6
        
        HBRUSH eax_14 = CreateSolidBrush(0x800000)
        
        if (eax_14 != 0)
            if (i_2 s> 0)
                int32_t i_1
                
                do
                    FillRect(hDC_1, &lprc, eax_14)
                    lprc.left += bottom - top - 4
                    lprc.right += bottom - top - 4
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            if (mods.dp.d(edx_3:eax_12, bottom - top - 4) != 0)
                lprc.right = right - left - 2 + left
                FillRect(hDC_1, &lprc, eax_14)
            
            var_34 = 1
            DeleteObject(eax_14)
        
        hDC = ReleaseDC(hWnd, hDC_1)
        
        if (var_34 == 0)
            goto label_4cf8b6

sub_5f02dd(eax_1 ^ &__saved_ebp)
return hDC

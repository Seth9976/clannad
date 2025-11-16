// 函数: sub_4db600
// 地址: 0x4db600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HBRUSH ho
PAINTSTRUCT paint
RECT var_18

if (*(arg1 + 0x70) == 0)
    HDC hDC = BeginPaint(*(arg1 + 4), &paint)
    
    if (hDC != 0)
        GetClientRect(*(arg1 + 4), &var_18)
        HBRUSH hbr = CreateSolidBrush(*(arg1 + 0xcc))
        
        if (hbr == 0)
            goto label_4db66e
        
        FillRect(hDC, &var_18, hbr)
        ho = hbr
    label_4db661:
        DeleteObject(ho)
    label_4db66e:
        EndPaint(*(arg1 + 4), &paint)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1
else if ((*(arg1 + 0x98) & 8) == 0)
    *arg2 = 0
else
    HDC hdc = BeginPaint(*(arg1 + 4), &paint)
    
    if (hdc != 0)
        GetClientRect(*(arg1 + 4), &var_18)
        HBITMAP h_2 =
            CreateCompatibleBitmap(hdc, var_18.right - var_18.left, var_18.bottom - var_18.top)
        HBRUSH h = h_2
        
        if (h_2 == 0)
            goto label_4db66e
        
        HDC eax_8 = CreateCompatibleDC(hdc)
        
        if (eax_8 != 0)
            HGDIOBJ h_1 = SelectObject(eax_8, h)
            
            if (h_1 != 0)
                HBRUSH eax_9 = CreateSolidBrush(*(arg1 + 0xcc))
                
                if (eax_9 != 0)
                    FillRect(eax_8, &var_18, eax_9)
                    DeleteObject(eax_9)
                    int32_t* edx_1 = *(arg1 + 0x70)
                    (*(*edx_1 + 0xc))(edx_1, 1, 0xffffffff, 0, 0, 0, eax_8, arg1 + 0xb4, 
                        arg1 + 0xb4, 0, 0)
                    BitBlt(hdc, 0, 0, var_18.right, var_18.bottom, eax_8, 0, 0, SRCCOPY)
                
                SelectObject(eax_8, h_1)
            
            DeleteDC(eax_8)
        
        ho = h
        goto label_4db661
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0

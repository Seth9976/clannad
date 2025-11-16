// 函数: sub_5a6c50
// 地址: 0x5a6c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    RECT rect
    __builtin_memset(&rect, 0, 0x10)
    GetClientRect(hWnd, &rect)
    
    if (*(arg1 + 0xc4) == 0 || *(arg1 + 0xd8) == 0 || rect.right - rect.left != *(arg1 + 0xe8)
            || rect.bottom - rect.top != *(arg1 + 0xec))
        HDC hdc = *(arg1 + 0xfc)
        
        if (hdc != 0)
            DeleteDC(hdc)
        
        int32_t ecx_3 = sub_6c8100(arg1 + 0x90)
        int32_t eax_6 = rect.bottom - rect.top
        int32_t var_30_3 = 0
        int32_t eax_8 = rect.right - rect.left
        *(arg1 + 0xfc) = 0
        sub_6c8170(arg1 + 0x90, eax_8, eax_6, ecx_3, 0)
        HDC eax_9 = GetDC(hWnd)
        HDC hdc_1 = CreateCompatibleDC(eax_9)
        *(arg1 + 0xfc) = hdc_1
        HGDIOBJ h
        
        if (*(arg1 + 0xc4) == 0)
            h = nullptr
        else
            h = *(arg1 + 0xd8)
        
        SelectObject(hdc_1, h)
        ReleaseDC(hWnd, eax_9)
        int32_t eax_10
        eax_10.b = 1
        sub_745f2b(var_8 ^ &__saved_ebp)
        return eax_10

int32_t eax_1
eax_1.b = 0
sub_745f2b(var_8 ^ &__saved_ebp)
return eax_1

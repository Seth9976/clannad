// 函数: sub_6c1c00
// 地址: 0x6c1c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    RECT rect
    __builtin_memset(&rect, 0, 0x10)
    GetClientRect(hWnd, &rect)
    HWND hWnd_1 = *(arg1 + 4)
    
    if (hWnd_1 != 0)
        LRESULT result = SendMessageW(hWnd_1, 5, 0, 
            zx.d((rect.bottom).w - (rect.top).w) << 0x10 | zx.d((rect.right).w - (rect.left).w))
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0

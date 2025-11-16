// 函数: sub_6c1210
// 地址: 0x6c1210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* edi = data_bac454
BOOL hWnd = *(edi + 4)

if (hWnd != 0)
    RECT rect
    rect.left = arg1.d
    rect.top = arg1:4.d
    rect.right = arg1:8.d
    rect.bottom = arg1:0xc.d
    int32_t dwExStyle = GetWindowLongW(hWnd, 0xffffffec)
    HMENU eax_2 = GetMenu(*(edi + 4))
    int32_t eax_3 = neg.d(eax_2)
    AdjustWindowRectEx(&rect, GetWindowLongW(*(edi + 4), 0xfffffff0), 
        neg.d(sbb.d(eax_3, eax_3, eax_2 != 0)), dwExStyle)
    uint128_t X_1
    X_1.d = rect.left
    X_1:4.d = rect.top
    X_1:8.d = rect.right
    X_1:0xc.d = rect.bottom
    int32_t xmm0_3 = _mm_bsrli_si128(X_1, 0xc)
    int32_t Y = _mm_bsrli_si128(X_1, 4)
    int32_t X = X_1
    arg1 = X_1
    int32_t cx = _mm_bsrli_si128(X_1, 8) - X
    hWnd = SetWindowPos(*(edi + 4), nullptr, X, Y, cx, xmm0_3 - Y, 0x14)

sub_745f2b(eax_1 ^ &__saved_ebp)
return hWnd

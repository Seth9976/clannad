// 函数: sub_6c1770
// 地址: 0x6c1770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int128_t var_38 = zx.o(0)
HWND hWnd = *(arg1 + 4)
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
GetWindowRect(hWnd, &rect_1)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(rect_1.right - rect_1.left)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(rect_1.bottom - rect_1.top)
int32_t eax_11 = ((eax_8 - edx_1) s>> 1) + rect_1.top
sub_6c2920(eax_11, edx_1, &var_38, ((eax_4 - edx) s>> 1) + rect_1.left, eax_11)
__builtin_memset(&rect_1, 0, 0x10)
GetWindowRect(*(arg1 + 4), &rect_1)
HWND hWnd_1 = *(arg1 + 4)
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(hWnd_1, &rect)
HWND hWnd_2 = *(arg1 + 4)
int32_t eax_16
int32_t edx_2
edx_2:eax_16 = sx.q(var_38:8.d - rect_1.right - var_38.d + rect_1.left)
int32_t eax_22
int32_t edx_3
edx_3:eax_22 = sx.q(rect.top - rect.bottom - var_38:4.d + var_38:0xc.d)
BOOL Y = ((eax_22 - edx_3) s>> 1) + var_38:4.d

if (hWnd_2 != 0)
    Y = SetWindowPos(hWnd_2, nullptr, ((eax_16 - edx_2) s>> 1) + var_38.d, Y, 0, 0, 0x15)

sub_745f2b(eax_1 ^ &__saved_ebp)
return Y

// 函数: sub_6c13f0
// 地址: 0x6c13f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(*(arg1 + 4), &rect)
int128_t xmm0
xmm0.d = rect.left
xmm0:4.d = rect.top
xmm0:8.d = rect.right
xmm0:0xc.d = rect.bottom
HWND hWnd = *(arg1 + 4)
*(arg1 + 0x28) = xmm0
__builtin_memset(&rect, 0, 0x10)
GetClientRect(hWnd, &rect)
int128_t xmm0_1
xmm0_1.d = rect.left
xmm0_1:4.d = rect.top
xmm0_1:8.d = rect.right
xmm0_1:0xc.d = rect.bottom
*(arg1 + 0x38) = xmm0_1
int32_t result = sub_6c1460(arg1)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result

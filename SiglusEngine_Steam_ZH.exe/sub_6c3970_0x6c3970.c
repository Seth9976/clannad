// 函数: sub_6c3970
// 地址: 0x6c3970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void** eax_2 = arg2

if (eax_2[5] u>= 8)
    eax_2 = *eax_2

void var_210
_wcscpy_s(&var_210, 0x104, eax_2)
WPARAM wParam = *(arg1 + 0x90)
void* var_220 = &var_210
int32_t lParam = 1
int32_t var_21c = 0x104
*(arg1 + 0x90) = wParam + 1
LRESULT hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x133e, wParam, &lParam)

sub_745f2b(eax_1 ^ &__saved_ebp)
return hWnd

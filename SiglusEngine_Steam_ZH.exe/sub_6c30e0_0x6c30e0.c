// 函数: sub_6c30e0
// 地址: 0x6c30e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* var_28 = arg1
int32_t cx = sub_6c3030(arg1, 0x14)
HWND hWnd = *(arg1 + 4)
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(hWnd, &rect)
HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    SetWindowPos(hWnd_1, nullptr, 0, 0, cx, rect.bottom - rect.top, 0x16)

sub_6c1500(arg1)
sub_6c1570(arg1)
sub_6c15e0(arg1)
sub_745f2b(eax_1 ^ &__saved_ebp)
return cx

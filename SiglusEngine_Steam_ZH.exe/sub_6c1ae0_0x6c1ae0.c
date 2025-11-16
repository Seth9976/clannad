// 函数: sub_6c1ae0
// 地址: 0x6c1ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = *(arg1 + 4)
int32_t var_80c = 0
void* const var_814

if (hWnd != 0)
    wchar16 string[0x400]
    GetWindowTextW(hWnd, &string, 0x400)
    var_814 = &string
else
    var_814 = &data_ad7c90

sub_52e820(arg2, var_814)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2

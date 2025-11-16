// 函数: sub_6c3b60
// 地址: 0x6c3b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_828 = 0
HWND hWnd = *(arg1 + 4)
LRESULT ecx

if (hWnd != 0)
    ecx = SendMessageW(hWnd, 0x1304, 0, 0)
else
    ecx = 0

if (arg3 s< 0 || arg3 s>= ecx)
    *(arg2 + 0x14) = 7
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return arg2

int128_t lParam
__builtin_memset(&lParam, 0, 0x1c)
int16_t var_808[0x400]
lParam:0xc.d = &var_808
HWND hWnd_1 = *(arg1 + 4)
lParam.d = 1
int64_t var_814
var_814.d = 0x400

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x133c, arg3, &lParam)

sub_52e820(arg2, &var_808)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2

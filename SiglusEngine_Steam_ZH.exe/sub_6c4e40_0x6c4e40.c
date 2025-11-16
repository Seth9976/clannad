// 函数: sub_6c4e40
// 地址: 0x6c4e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_248 = arg4
int16_t var_210[0x104]
int16_t (* var_23c)[0x104] = &var_210
HWND hWnd = *(arg1 + 4)
int32_t var_214 = 0
int32_t lParam = 5
int32_t var_238 = 0x104

if (hWnd != 0)
    SendMessageW(hWnd, 0x1073, arg3, &lParam)

sub_52e820(arg2, &var_210)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2

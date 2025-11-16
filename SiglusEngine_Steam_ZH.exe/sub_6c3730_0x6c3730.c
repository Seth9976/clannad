// 函数: sub_6c3730
// 地址: 0x6c3730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_1c = arg2
int32_t var_18 = arg3
int32_t var_14 = arg4
LRESULT hWnd = *(arg1 + 4)
int32_t lParam = 0x1c
int32_t var_20 = 3

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0xe9, 1, &lParam)

sub_745f2b(eax_1 ^ &__saved_ebp)
return hWnd

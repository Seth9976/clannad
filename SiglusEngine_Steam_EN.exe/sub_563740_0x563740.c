// 函数: sub_563740
// 地址: 0x563740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = arg2
int32_t result_1 = result
int32_t lParam

if (arg3 s> arg4)
    HWND hWnd = GetDlgItem(data_1af0a78, 0x4f25)
    SendMessageA(hWnd, 0xe2, 0, arg3 - 1)
    lParam = 0x1c
    int32_t var_20_1 = 2
    int32_t var_14_1 = arg4
    SendMessageA(hWnd, 0xe9, 0, &lParam)
    SendMessageA(hWnd, 0xe0, data_20cc8d4, 1)
    result = result_1
    data_20cc928 = arg4

if (result s> arg5)
    HWND hWnd_1 = GetDlgItem(data_1af0a78, 0x502c)
    SendMessageA(hWnd_1, 0xe2, 0, result_1 - 1)
    lParam = 0x1c
    int32_t var_20_2 = 2
    int32_t var_14_2 = arg5
    SendMessageA(hWnd_1, 0xe9, 0, &lParam)
    SendMessageA(hWnd_1, 0xe0, data_20cc8d8, 1)
    result = result_1
    data_20cc92c = arg5

data_20cc994 = arg3
data_20cc9a0 = arg5
data_20cc99c = arg4
__builtin_memset(&data_20cc980, 0, 0x14)
data_20cc998 = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

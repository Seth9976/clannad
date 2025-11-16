// 函数: sub_572e70
// 地址: 0x572e70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL result = __security_cookie ^ &__saved_ebp
BOOL result_1 = result

if (data_1c054fc != 0)
    int32_t eax_1 = GetSystemMetrics(SM_CYSMCAPTION)
    int32_t X = GetSystemMetrics(SM_CXDLGFRAME)
    int32_t eax_2 = GetSystemMetrics(SM_CYDLGFRAME)
    RECT rect
    GetWindowRect(GetDlgItem(data_1af0a8c, 0x4fe3), &rect)
    result = MoveWindow(data_1c054fc, X, eax_2 + eax_1, rect.right - X * 2 - rect.left, 
        rect.bottom - eax_2 * 2 - rect.top - eax_1, 1)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result

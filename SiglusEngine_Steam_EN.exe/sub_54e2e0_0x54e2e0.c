// 函数: sub_54e2e0
// 地址: 0x54e2e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 != 0x233)
    LRESULT result = CallWindowProcA(data_20c2598, arg1, arg2, arg3, arg4)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return result

uint8_t lpszFile[0x208]
DragQueryFileA(arg3, 0, &lpszFile, 0x208)
void string
sub_4c1990(&string, &lpszFile, data_1c054f8, &string)
SetDlgItemTextA(data_1c054f8, 0x4f0a, &string)
DragFinish(arg3)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0

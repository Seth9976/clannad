// 函数: sub_55d150
// 地址: 0x55d150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 != 0x233)
    LRESULT result = CallWindowProcA(data_20c54b4, arg1, arg2, arg3, arg4)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return result

void lpszFile
int32_t eax_4 =
    sub_4c3da0(DragQueryFileA(arg3, 0, &lpszFile, 0x208), 0xffffffff, &lpszFile, 0xffffffff)

if (eax_4 == 2)
    sub_4c1990(eax_4, &lpszFile, data_1af0a80, &data_1318c40)
    SetDlgItemTextA(data_1af0a80, 0x4e60, &data_1318c40)

DragFinish(arg3)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1

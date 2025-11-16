// 函数: sub_570380
// 地址: 0x570380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hDlg = data_1af0ad8

if (arg1 != 0)
    data_20f0088 = 0xffffffff
    sub_4d1ba0(eax_1, 0x328, 0x20efd60, 0)

int32_t eax_2 = data_187a5c0

if (data_20f0088 != eax_2)
    goto label_5703f3

BOOL result = sub_4d1be0(eax_2, &data_1606c68, 0x20efd60, 0x328)

if (result != 0)
    eax_2 = data_187a5c0
label_5703f3:
    data_20f0088 = eax_2
    sub_4d1c30(eax_2, &data_1606c68, 0x20efd60, 0x328)
    char string
    
    if (data_20f0088 == 0)
        string = 0
    else
        sub_497270(0x20efd60, &string)
    
    result = SetDlgItemTextA(hDlg, 0x4fd8, &string)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

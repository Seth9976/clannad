// 函数: sub_546660
// 地址: 0x546660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x2804)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t ecx = data_1332b64
int32_t eax_2 = data_1332b60
int32_t var_8_1 = ecx
int32_t var_c = eax_2
int32_t var_10 = eax_2
int32_t var_14 = eax_2
int32_t var_18 = ecx
int32_t var_1c = eax_2
int32_t var_20 = ecx
int32_t var_24 = eax_2
int32_t var_28 = ecx
int32_t var_2c = eax_2
void string
sub_4c84d0(&string, 
    "The recommended resolution of this game is %d * %d.\n\n * Please select the %d * %d resolution if "
"it is available and supported by your system.\n\n * If %d * %d is not available, a resolution with "
"a width of %d is recommended.\n\n * If a resolution with %d width is not available, a resolution as "
"close to %d * %d as\n   possible is recommended.\n\n")
int32_t var_8_3 = SetDlgItemTextA(data_20c1744, 0x4edc, &string)
sub_4d5720(data_20c1744)
SetFocus(GetDlgItem(data_20c1744, 0x4f4f))
LPARAM lParam = 1
LRESULT result = SendMessageA(GetDlgItem(data_20c1744, 0x4f4f), 0xf4, 1, lParam)
sub_5f02dd(lParam ^ &__saved_ebp)
return result

// 函数: sub_542ae0
// 地址: 0x542ae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_94 = data_20c1520
void string
sub_4c84d0(&string, "0.%02d s")
SetDlgItemTextA(data_20c0554, 0x4fe6, &string)
int32_t esi = data_20c1524
int32_t var_94_2 = esi s% 0xa
int32_t var_98 = esi s/ 0xa
sub_4c84d0(&string, "%d.%d s")
SetDlgItemTextA(data_20c0554, 0x4fe7, &string)
int32_t esi_3 = (data_20c1524 + data_20c1520) * 0xa
int32_t var_94_4 = esi_3 s% 0x64
int32_t var_98_1 = esi_3 s/ 0x64
sub_4c84d0(&string, "%d.%02d s")
BOOL result = SetDlgItemTextA(data_20c0554, 0x4fe8, &string)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

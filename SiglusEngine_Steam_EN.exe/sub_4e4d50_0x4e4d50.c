// 函数: sub_4e4d50
// 地址: 0x4e4d50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_20
int32_t var_1c
sub_4e4c60(&var_1c, &var_20)
uint32_t var_28 = zx.d(data_1af17cb)
sub_4d4c00(var_1c, var_20, &var_1c)
RECT rect
BOOL bottom = GetClientRect(data_7027bc, &rect)
int32_t right = rect.right

if (right s> 0)
    bottom = rect.bottom
    
    if (bottom s> 0)
        data_1332b5c = right
        data_1332b58 = bottom

sub_5f02dd(eax_1 ^ &__saved_ebp)
return bottom

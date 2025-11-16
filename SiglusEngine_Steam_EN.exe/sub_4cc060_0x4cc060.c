// 函数: sub_4cc060
// 地址: 0x4cc060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
enum MENU_ITEM_FLAGS uFlags
uint32_t uIDNewItem
PSTR lpNewItem
void string

if (arg5 != arg6)
    if (arg4 != 0)
        sub_4cfd70(&string, arg4)
    else
        GetMenuStringA(arg3, arg2, &string, 0x400, arg4)
    
    lpNewItem = &string
    uIDNewItem = arg2
    uFlags = MF_BYCOMMAND
else if (arg4 != 0)
    sub_4cfd70(&string, arg4)
    lpNewItem = &string
    uIDNewItem = arg2
    uFlags = MF_CHECKED
else
    GetMenuStringA(arg3, arg2, &string, 0x400, arg4)
    lpNewItem = &string
    uIDNewItem = arg2
    uFlags = MF_CHECKED
BOOL result = ModifyMenuA(arg3, arg2, uFlags, uIDNewItem, lpNewItem)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

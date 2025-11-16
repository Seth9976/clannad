// 函数: sub_6c7f40
// 地址: 0x6c7f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hmenu = *arg1

if (hmenu == 0)
    return 0xffffffff

int32_t lpmi
_memset(&lpmi, 0, 0x30)
lpmi = 0x30
int32_t var_34 = 0x10
int32_t var_30 = 0x800
InsertMenuItemW(hmenu, arg2, 1, &lpmi)
return arg2

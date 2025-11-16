// 函数: sub_6c7df0
// 地址: 0x6c7df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = *arg1

if (hMenu == 0)
    return 0xffffffff

int32_t eax_1
int32_t ecx
eax_1, ecx = GetMenuItemCount(hMenu)
int32_t var_c_1 = ecx
return sub_6c7e30(arg1, eax_1, arg2, arg3, arg4, arg5)

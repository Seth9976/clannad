// 函数: sub_6c7e30
// 地址: 0x6c7e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void** eax_2 = arg4

if (*arg1 == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0xffffffff

if (eax_2[5] u>= 8)
    eax_2 = *eax_2

void var_20c
_wcscpy_s(&var_20c, 0x100, eax_2)
int32_t lpmi
_memset(&lpmi, 0, 0x30)
int32_t var_228 = arg5
int32_t eax_4 = 3
lpmi = 0x30

if (arg6 != 0)
    eax_4 = 0

int32_t var_238 = 0x17
int32_t var_230 = eax_4
int32_t var_22c = arg3
void* var_218 = &var_20c
int32_t var_234 = 0
int32_t var_214 = 0x100
InsertMenuItemW(*arg1, arg2, 1, &lpmi)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2

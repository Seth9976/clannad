// 函数: sub_6c7d00
// 地址: 0x6c7d00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void** eax_2 = arg4

if (*arg1 == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0xffffffff

if (eax_2[5] u>= 8)
    eax_2 = *eax_2

void var_210
_wcscpy_s(&var_210, 0x100, eax_2)
int32_t lpmi
_memset(&lpmi, 0, 0x30)
int32_t eax_4 = 0
lpmi = 0x30
int32_t var_23c = 0x13
int32_t ecx_2 = 3
int32_t var_238 = 0

if (arg5 != 0)
    ecx_2 = 0

int32_t var_218 = 0x100

if (arg6 != 0)
    eax_4 = 8

int32_t var_230 = arg3
void* var_21c = &var_210
int32_t var_234 = ecx_2 | eax_4
InsertMenuItemW(*arg1, arg2, 1, &lpmi)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2

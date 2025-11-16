// 函数: sub_6d84f0
// 地址: 0x6d84f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg1 + 0x5c)
*(arg1 + 0x2a4) = 0x21

if (eax_2 == 0)
    sub_6d42e0(arg1, "Call to NULL read function")
    noreturn

char var_10
eax_2(arg1, &var_10, 8)
char var_f
char var_e
char var_d
uint32_t result = (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)

if (result u> 0x7fffffff)
    sub_6d42e0(arg1, "PNG unsigned integer out of range")
    noreturn

char var_c
char var_b
uint32_t ecx_2 = zx.d(var_c) << 8 | zx.d(var_b)
*(arg1 + 0x138) = 0
char var_9
uint32_t eax_8 = zx.d(var_9)
char var_a
*(arg1 + 0x11c) = (ecx_2 << 8 | zx.d(var_a)) << 8 | eax_8
sub_6caa70(eax_8, &var_c, arg1, 4)
sub_6db9f0(arg1, *(arg1 + 0x11c))
*(arg1 + 0x2a4) = 0x41
sub_745f2b(eax_1 ^ &__saved_ebp)
return result

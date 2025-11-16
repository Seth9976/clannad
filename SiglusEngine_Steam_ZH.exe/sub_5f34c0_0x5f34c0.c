// 函数: sub_5f34c0
// 地址: 0x5f34c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 s< 0)
    *(arg1 + 0x334) = 0
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return arg2

int32_t var_10c = arg2
int32_t var_110 = 0xffffffff
int64_t xmm0 = var_110.q
void var_90
__builtin_memcpy(&var_90, arg1 + 0xac, 0x80)
int32_t var_94 = 2
int32_t var_14
*(&var_90 + (var_14 << 2)) = xmm0
int32_t var_14_1 = var_14 + 2
__builtin_memcpy(arg1 + 0x2b8, &var_90, 0x80)
sub_745f2b(eax_1 ^ &__saved_ebp)
return var_14

// 函数: sub_5d5d50
// 地址: 0x5d5d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg2[0x1f]

if (esi != 0)
    int32_t eax_2 = *arg2
    int32_t var_8c
    
    if (eax_2 == 0xfffffffb)
        var_8c = eax_2
        int32_t var_10 = 1
        __builtin_memcpy(arg1, &var_8c, 0x80)
        sub_748840(arg1 + (*(arg1 + 0x7c) << 2), arg2, arg2[0x1f] << 2)
        *(arg1 + 0x7c) += arg2[0x1f]
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return arg1
    
    if (eax_2 == 0xfffffffc)
        int32_t eax_13 = ((esi << 2) - &arg2[1] + arg2) s>> 2
        sub_748840(&var_8c, &arg2[1], eax_13 << 2)
        int32_t var_98 = 2
        int32_t var_114 = 0xfffffffc
        int32_t var_110 = 0xfffffffb
        __builtin_memcpy(arg1, &var_114, 0x80)
        sub_748840(arg1 + (*(arg1 + 0x7c) << 2), &var_8c, eax_13 << 2)
        *(arg1 + 0x7c) += eax_13
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return arg1

__builtin_memcpy(arg1, arg2, 0x80)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg1

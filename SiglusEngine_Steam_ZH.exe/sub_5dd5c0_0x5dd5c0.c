// 函数: sub_5dd5c0
// 地址: 0x5dd5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_10

if (*(arg1 + 0xd4) == 0)
    eax_10 = 0
else
    int32_t eax_2 = *(arg1 + 0x198)
    
    if (eax_2 s< 0)
        eax_10 = 0
    else
        int32_t var_128_1 = eax_2
        struct _EXCEPTION_REGISTRATION_RECORD* var_8c
        __builtin_memcpy(&var_8c, arg1 + 0x58, 0x80)
        int32_t var_b0_1 = 2
        int32_t var_10
        *(&var_8c + (var_10 << 2)) = 0xffffffff.q
        int32_t var_10_1 = var_10 + 2
        
        if (var_8c != 0xfffffffb)
            eax_10 = sub_54b180(0)
            
            if (eax_10 == 0)
                eax_10 = 0
        else
            void* ecx = *(arg1 + 0x54)
            int128_t var_a8
            __builtin_memset(&var_a8, 0, 0x19)
            int32_t var_94
            
            if (sub_54f010(&var_8c, &var_8c, ecx, &var_8c, &(&var_8c)[var_10 + 2], &var_a8) != 0
                    && var_94 != 0)
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return var_94
            
            eax_10 = 0

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_10

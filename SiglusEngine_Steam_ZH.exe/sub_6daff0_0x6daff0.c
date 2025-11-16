// 函数: sub_6daff0
// 地址: 0x6daff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

int32_t* eax_3

if (arg2 == 0 || (*(arg2 + 8) & 0x200) == 0)
    if ((eax_2.b & 4) != 0)
        *(arg3 + 0x74) = eax_2 | 8
    
    if (arg4 == 7)
        int32_t eax_5 = *(arg3 + 0x5c)
        
        if (eax_5 == 0)
            sub_6d42e0(arg3, "Call to NULL read function")
            noreturn
        
        char var_14
        sub_6caa70(eax_5(arg3, &var_14, 7), &var_14, arg3, 7)
        eax_3 = sub_6d8610(arg3, 0)
        
        if (eax_3 == 0)
            char var_e
            char var_16 = var_e
            char var_f
            char var_17 = var_f
            char var_10
            char var_18 = var_10
            char var_11
            char var_19 = var_11
            char var_12
            char var_1a = var_12
            char var_13
            uint16_t var_1c = zx.w(var_14) * 0x100 + zx.w(var_13)
            int32_t eax_14 = sub_6ceac0(&var_1c, arg2, arg3, &var_1c)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_14
    else
        sub_6d8610(arg3, arg4)
        eax_3 = sub_6d4840(arg3, "invalid")
else
    sub_6d8610(arg3, arg4)
    eax_3 = sub_6d4840(arg3, "duplicate")

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_3

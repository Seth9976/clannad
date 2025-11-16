// 函数: sub_41d4c0
// 地址: 0x41d4c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 u<= 0xf)
    int32_t eax_2 = arg1 * 9
    
    if (*((eax_2 << 2) + &data_12a6e1c) != 0)
        char var_214[0x20c]
        sub_4cfd70(&var_214, (eax_2 << 2) + &data_12a6e1c)
        int32_t result = sub_4c3da0(sub_4c3960(&var_214, &data_613c40), 0, &var_214, 0xffffffff)
        
        if (result == 1)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return result
        
        if (arg2 != 0)
            sub_4cfd70(arg2, (eax_2 << 2) + &data_12a6e1c)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 2
